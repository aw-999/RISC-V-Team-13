module L1cache #(
    parameter DEGREES = 4,
    parameter SETNUM = 64,
    parameter BYTE_ADDR_BITS = 4,
    parameter BLOCKSIZE = 128,
    parameter BYTES_PER_BLOCK = BLOCKSIZE / 8,
    parameter TAGSIZE = 32 - $clog2(SETNUM) - BYTE_ADDR_BITS
) (
    input logic clk_i,
    input logic rst_n,
    input L1DataIn_t cpu_data_in,
    output L1DataOut_t cpu_data_out
);

typedef struct packed {
    logic Valid;       // Valid bit
    logic Dirty;       // Dirty bit for write-back policy
    logic [TAGSIZE-1:0] Tag; // Address tag
    logic [BLOCKSIZE-1:0] Data; // Data block
} cache_entry;

typedef struct packed {
    logic Valid;       // When the data is valid
    logic Wen;         // Write enable
    logic [31:0] Addr; // Address
    logic [7:0] ByteData; // Byte to write
} L1DataIn_t;

typedef struct packed {
    logic Ready;       // Indicates if the output is ready
    logic [7:0] ByteOut; // Data output
} L1DataOut_t;

// Internal signals
typedef enum {TAG, ALLOCATE, WRITE_THROUGH, OUTPUT} cache_state;

cache_state current_state, next_state;

logic [$clog2(DEGREES)-1:0] degree_index;
logic [$clog2(SETNUM)-1:0] set_index;
logic [BYTE_ADDR_BITS-1:0] byte_offset;
logic [TAGSIZE-1:0] tag;

logic cache_hit;
logic [$clog2(DEGREES)-1:0] last_used_shift_reg[DEGREES-1:0];
cache_entry cache_arr[DEGREES-1:0][SETNUM-1:0];

// Default assignments
assign cpu_data_out = '{Ready: 1'b0, ByteOut: 8'b0};

// Function for tag matching
function logic cache_hit_detect(
    input logic [TAGSIZE-1:0] tag,
    input cache_entry cache_set[DEGREES-1:0],
    output logic [$clog2(DEGREES)-1:0] hit_index
);
    hit_index = 0;
    for (int i = 0; i < DEGREES; i++) begin
        if (cache_set[i].Valid && cache_set[i].Tag == tag) begin
            hit_index = i;
            return 1'b1;
        end
    end
    return 1'b0;
endfunction

// Task for updating the shift register (LRU)
task automatic update_shift_reg(
    input logic [$clog2(DEGREES)-1:0] access_index,
    inout logic [$clog2(DEGREES)-1:0] shift_reg[DEGREES-1:0]
);
    for (int i = DEGREES-1; i > 0; i--) begin
        shift_reg[i] = shift_reg[i-1];
    end
    shift_reg[0] = access_index;
endtask

// Initialization
initial begin
    for (int i = 0; i < DEGREES; i++) begin
        last_used_shift_reg[i] = i;
    end
    for (int i = 0; i < SETNUM; i++) begin
        for (int j = 0; j < DEGREES; j++) begin
            cache_arr[j][i] = '{Valid: 1'b0, Dirty: 1'b0, Tag: 0, Data: 0};
        end
    end
    current_state = TAG;
end

// Reset logic
always_ff @(posedge clk_i or negedge rst_n) begin
    if (!rst_n) begin
        current_state <= TAG;
        for (int i = 0; i < SETNUM; i++) begin
            for (int j = 0; j < DEGREES; j++) begin
                cache_arr[j][i] <= '{Valid: 1'b0, Dirty: 1'b0, Tag: 0, Data: 0};
            end
        end
    end else begin
        current_state <= next_state;
    end
end

// FSM and cache operations
always_comb begin
    // Default output and state
    cpu_data_out = '{Ready: 1'b0, ByteOut: 8'b0};
    next_state = current_state;

    // Address decomposition
    set_index = cpu_data_in.Addr[31-TAGSIZE:BYTE_ADDR_BITS];
    tag = cpu_data_in.Addr[31:32-TAGSIZE];
    byte_offset = cpu_data_in.Addr[BYTE_ADDR_BITS-1:0];

    case (current_state)
        TAG: begin
            cache_hit = cache_hit_detect(tag, cache_arr[set_index], degree_index);

            if (cpu_data_in.Valid) begin
                if (cache_hit) begin
                    if (cpu_data_in.Wen) begin
                        next_state = WRITE_THROUGH;
                    end else begin
                        next_state = OUTPUT;
                    end
                end else begin
                    degree_index = last_used_shift_reg[DEGREES-1];
                    next_state = ALLOCATE;
                end
            end
        end

        WRITE_THROUGH: begin
            cache_arr[degree_index][set_index].Data[(byte_offset+1)*8-1 -: 8] = cpu_data_in.ByteData;
            next_state = OUTPUT;
        end

        OUTPUT: begin
            cpu_data_out = '{Ready: 1'b1, ByteOut: cache_arr[degree_index][set_index].Data[(byte_offset+1)*8-1 -: 8]};
            update_shift_reg(degree_index, last_used_shift_reg);
            next_state = TAG;
        end

        ALLOCATE: begin
            cache_arr[degree_index][set_index] = '{Valid: 1'b1, Dirty: 1'b0, Tag: tag, Data: 0};
            next_state = TAG;
        end
    endcase
end

endmodule
