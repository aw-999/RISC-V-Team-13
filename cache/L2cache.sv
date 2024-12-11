`define UPD_SHIFT_REG(shift_register, new_value) \
for (int i = 1; i < DEGREES; i++) begin \
    shift_register[i] <= shift_register[i-1]; \
end \
shift_register[0] <= new_value;

module L2cache #(
    parameter BLOCKSIZE = 128,
    parameter DEGREES = 4,
    parameter SETNUM = 64,
    parameter BYTE_ADDR_BITS = 4,
    parameter   TAGSIZE = 32 - $clog2(SETNUM) - BYTE_ADDR_BITS;
) (
    input logic clk_i,
    input logic rst_n,
    input L1_To_L2 L1_in,
    input Memory_to_Cache Mem_in,

    output L2_to_L1 L1_out,
    output C_to_M Mem_out
);

typedef enum {TAG, ALLO, WRITE} cache_state;

logic hit;
logic [$clog2(DEGREES)-1:0] degree_index;
logic [$clog2(SETNUM)-1:0] set_index;
logic [TAGSIZE-1:0] tag;

cache_state current_state, next_state;

cache_entry [SETNUM-1:0] cache_arr[(DEGREES)-1:0];
logic [$clog2(DEGREES)-1:0] last_used_shift_reg[DEGREES-1:0];

initial begin
    for (int i = 0; i < SETNUM; i++) begin
        for (int j = 0; j < DEGREES; j++) begin
            cache_arr[j][i].Valid = 1'b0;
            cache_arr[j][i].Dirty = 1'b0;
        end
    end

    for (int i = 0; i < DEGREES; i++) begin
        last_used_shift_reg[i] = i;
    end
    current_state = COMP_TAG;
end

always_ff @(posedge clk_i or negedge rst_n) begin
    if (!rst_n) begin
        current_state <= COMP_TAG;
        for (int i = 0; i < SETNUM; i++) begin
            for (int j = 0; j < DEGREES; j++) begin
                cache_arr[j][i].Valid <= 1'b0;
                cache_arr[j][i].Dirty <= 1'b0;
            end
        end
    end else begin
        current_state <= next_state;
    end
end

always_comb begin
    // Address decomposition
    set_index = L1_in.Addr[31-TAGSIZE:BYTE_ADDR_BITS];
    tag = L1_in.Addr[31:32-TAGSIZE];
    hit = 1'b0;

    case (current_state)
        TAG: begin
            for (int i = 0; i < DEGREES; i++) begin
                if (cache_arr[i][set_index].Valid && cache_arr[i][set_index].Tag == tag) begin
                    degree_index = i;
                    hit = 1'b1;
                    break;
                end
            end

            if (L1_in.Valid && hit) begin
                if (L1_in.Wen) begin
                    cache_arr[degree_index][set_index].Dirty = 1'b1;
                    cache_arr[degree_index][set_index].Data = L1_in.WriteD;
                end
                L1_out.Dst = L1_in.Src;
                
                L1_out.Ready = 1'b1;
                L1_out.ReadD = cache_arr[degree_index][set_index].Data;
                next_state = TAG;
            end else if (L1_in.Valid) begin
                if (cache_arr[last_used_shift_reg[DEGREES-1]][set_index].Dirty)
                    next_state = WRITE;
                else
                    next_state = ALLO;
                L1_out.Ready = 1'b0;
            end else begin
                L1_out.Ready = 1'b0;
            end
            Mem_out.Valid = 1'b0;
        end

        ALLO: begin
            Mem_out.Wen = 1'b0;
            Mem_out.Valid = 1'b1;
            Mem_out.Addr = L1_in.Addr;
            Mem_out.WriteD = {BLOCKSIZE{1'bx}};
            if (Mem_in.Ready) begin
                next_state = COMP_TAG;
                cache_arr[last_used_shift_reg[DEGREES-1]][set_index].Data = Mem_in.ReadD;
                cache_arr[last_used_shift_reg[DEGREES-1]][set_index].Tag = tag;
                cache_arr[last_used_shift_reg[DEGREES-1]][set_index].Valid = 1'b1;
                cache_arr[last_used_shift_reg[DEGREES-1]][set_index].Dirty = 1'b0;
            end else begin
                next_state = ALLO;
            end
            L1_out.Ready = 1'b0;
        end

        WRITE: begin
            Mem_out.Wen = 1'b1;
            Mem_out.Valid = 1'b1;
            Mem_out.Addr = {cache_arr[last_used_shift_reg[DEGREES-1]][set_index].Tag, set_index, {BYTE_ADDR_BITS{1'bx}}};
            Mem_out.WriteD = cache_arr[last_used_shift_reg[DEGREES-1]][set_index].Data;
            if (Mem_in.Ready) begin
                next_state = ALLO;
                Mem_out.Valid = 1'b0;
            end else begin
                next_state = WRITE;
            end
            L1_out.Ready = 1'b0;
        end

        default: next_state = TAG;
    endcase
end





typedef struct packed {
  logic           Valid;
  logic           Wen;
  logic           Src;
  logic [31:0]    Addr;
  logic [127:0]   WriteD;
} L1_To_L2;

typedef struct packed {
  logic           Valid;
  logic           Wen;
  logic [31:0]    Addr;
  logic [127:0]   WriteD;
} C_to_M;

typedef struct packed {
  logic           Ready;
  logic           Dst;
  logic [127:0]   ReadD;
} L2_to_L1;

typedef struct packed {
  logic           Ready;
  logic [127:0]   ReadD;
} Memory_to_Cache;

typedef struct packed {
	logic Valid;
	logic Dirty;
	logic [TAGSIZE-1:0] Tag;
	logic [BLOCKSIZE-1:0] Data;
} cache_entry;

endmodule











module L1ToL2Bridge #(
    parameter BLOCKSIZE = 128,
    parameter BYTE_ADDR_BITS = 4,
    parameter TAGSIZE = 32 - $clog2(64) - BYTE_ADDR_BITS // Assuming 64 sets for simplicity
) (
    input  logic           clk_i,
    input  logic           rst_n,
    
    // L1 Cache Interface
    input  logic           L1_valid,
    input  logic           L1_wen,
    input  logic [31:0]    L1_addr,
    input  logic [127:0]   L1_write_data,
    output logic           L1_ready,
    output logic [127:0]   L1_read_data,
 
    // L2 Cache Interface
    output logic           L2_valid,
    output logic           L2_wen,
    output logic [31:0]    L2_addr,
    output logic [127:0]   L2_write_data,
    input  logic           L2_ready,
    input  logic [127:0]   L2_read_data
);

// Internal Signals
logic l1_to_l2_active;
logic l2_to_l1_active;

// FSM states for handling L1-L2 communication
typedef enum logic [1:0] {
    IDLE,
    WRITE,
    READ
} bridge_state_t;

bridge_state_t current_state, next_state;

// FSM Sequential Logic
always_ff @(posedge clk_i or negedge rst_n) begin
    if (!rst_n) begin
        current_state <= IDLE;
    end else begin
        current_state <= next_state;
    end
end

// FSM Combinational Logic
always_comb begin
    // Default signal values
    L1_ready = 1'b0;
    L2_valid = 1'b0;
    L2_wen = 1'b0;
    L2_addr = 32'b0;
    L2_write_data = 128'b0;
    L1_read_data = 128'b0;

    next_state = current_state;

    case (current_state)
        IDLE: begin
            if (L1_valid) begin
                if (L1_wen) begin
                    next_state = WRITE;
                end else begin
                    next_state = READ;
                end
            end
        end

        WRITE: begin
            L2_valid = 1'b1;
            L2_wen = 1'b1;
            L2_addr = L1_addr;
            L2_write_data = L1_write_data;

            if (L2_ready) begin
                L1_ready = 1'b1;
                next_state = IDLE;
            end
        end

        READ: begin
            L2_valid = 1'b1;
            L2_wen = 1'b0;
            L2_addr = L1_addr;

            if (L2_ready) begin
                L1_ready = 1'b1;
                L1_read_data = L2_read_data;
                next_state = IDLE;
            end
        end

        default: next_state = IDLE;
    endcase
end

endmodule

