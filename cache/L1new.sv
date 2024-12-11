module L1cache #(
    parameter DEGREES = 4,
    parameter SETNUM = 64,
    parameter BYTE_ADDR_BITS = 4, //2 bit for degree choose and 2 bit for LSB of memory address
    parameter BLOCKSIZE = 128,
    parameter BYTES_PER_BLOCK = BLOCKSIZE / 8, //16 bytes per block
    parameter TAGSIZE = 32 - $clog2(SETNUM) - BYTE_ADDR_BITS
) (
    input logic clk_i,
    input logic rst_n,
    input L1DataIn_t cpu_data_in,
    output L1DataOut_t cpu_data_out,

    // Main memory interface
    output logic [31:0] mem_request_addr, // Address to fetch data from memory
    output logic mem_read,               // Memory read enable
    input logic memory_ready,            // Memory data is ready
    input logic [BLOCKSIZE-1:0] memory_data // Data from memory
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
    logic [31:0] Datain; // Word to write
} L1DataIn_t;

typedef struct packed {
    logic Ready;       // Indicates if the output is ready
    logic [31:0] Dataout; // Word output
} L1DataOut_t;

// Internal signals
typedef enum {TAG, MISS_DETECTED, MEM_FETCH, MEM_UPDATE, WRITE_THROUGH, OUTPUT, ALLOCATE} cache_state;

cache_state current_state, next_state;

logic [$clog2(DEGREES)-1:0] degree_index;
logic [$clog2(SETNUM)-1:0] set_index;
logic [BYTE_ADDR_BITS-1:0] byte_offset;
logic [TAGSIZE-1:0] tag;

logic cache_hit;
logic [$clog2(DEGREES)-1:0] last_used_shift_reg[DEGREES-1:0];
cache_entry cache_arr[DEGREES-1:0][SETNUM-1:0];

// Main memory request signal
assign mem_read = (current_state == MISS_DETECTED);

// Default assignments
assign cpu_data_out = '{Ready: 1'b0, Dataout: 32'b0};
assign mem_request_addr = 32'b0;
assign mem_read = 1'b0;

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
    cpu_data_out = '{Ready: 1'b0, Dataout: 32'b0};
    mem_request_addr = 32'b0;
    mem_read = 1'b0;
    next_state = current_state;

    // Address decomposition
    set_index = cpu_data_in.Addr[31-TAGSIZE:BYTE_ADDR_BITS];
    tag = cpu_data_in.Addr[31:32-TAGSIZE];
    byte_offset = cpu_data_in.Addr[BYTE_ADDR_BITS-1:2];

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
                    next_state = MISS_DETECTED;
                end
            end
        end

        MISS_DETECTED: begin
            // Request memory block
            mem_request_addr = {cpu_data_in.Addr[31:BYTE_ADDR_BITS], {BYTE_ADDR_BITS{1'b0}}};
            mem_read = 1'b1;
            next_state = MEM_FETCH;
        end

        MEM_FETCH: begin
            // Wait for memory to respond
            if (memory_ready) begin
                next_state = MEM_UPDATE;
            end
        end

        MEM_UPDATE: begin
            // Update cache with fetched block
            cache_arr[degree_index][set_index] = '{Valid: 1'b1, Dirty: 1'b0, Tag: tag, Data: memory_data};
            next_state = OUTPUT;
        end

        WRITE_THROUGH: begin
            // Update word in cache and proceed to output
            cache_arr[degree_index][set_index].Data[(byte_offset+4)*8-1 -: 32] = cpu_data_in.Datain;
            next_state = OUTPUT;
        end

        OUTPUT: begin
            // Provide 32-bit word to CPU
            cpu_data_out = '{Ready: 1'b1, Dataout: cache_arr[degree_index][set_index].Data[(byte_offset+4)*8-1 -: 32]};
            update_shift_reg(degree_index, last_used_shift_reg);
            next_state = TAG;
        end

        ALLOCATE: begin
            // Initialize new cache line
            cache_arr[degree_index][set_index] = '{Valid: 1'b1, Dirty: 1'b0, Tag: tag, Data: 0};
            next_state = TAG;
        end
    endcase
end

endmodule

