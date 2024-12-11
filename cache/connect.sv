module L1ToL2Bridge #(
    parameter BLOCKSIZE = 128,
    parameter BYTE_ADDR_BITS = 4,
    parameter TAGSIZE = 32 - $clog2(64) - BYTE_ADDR_BITS // Assuming 64 sets for simplicity
) (
    input  logic           clk_i,
    input  logic           rst_n,
    
    // L1 Cache Interface
    input  logic           L1_valid,
    input  logic           L1_wen,
    input  logic [31:0]    L1_addr,
    input  logic [127:0]   L1_write_data,
    output logic           L1_ready,
    output logic [127:0]   L1_read_data,
    // L2 Cache Interface
    output logic           L2_valid,
    output logic           L2_wen,
    output logic [31:0]    L2_addr,
    output logic [127:0]   L2_write_data,
    input  logic           L2_ready,
    input  logic [127:0]   L2_read_data
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
      