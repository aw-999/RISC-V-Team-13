module RAM #(
    parameter WA = 32,       // Address width
    parameter WAM = 18,      // Addressable memory depth
    parameter WB = 8,        // Byte width
    parameter WD = 32,       // Word width
    parameter BLOCKSIZE = 128 // Block width (128 bits for cache blocks)
)(
    input logic clk,
    input logic [WA-1:0] Ad,          // Word-level address
    input logic RamWrite,             // Word write enable
    input logic [2:0] func3,          // Word-level operation selector
    input logic [WD-1:0] DIn,         // Word-level data input
    output logic [WD-1:0] DOut,       // Word-level data output

    // Block-level inputs and outputs for cache integration
    input logic BlockReadEnable,      // Block read enable
    input logic BlockWriteEnable,     // Block write enable
    input logic [WA-1:0] BlockAddr,   // Block-level address
    input logic [BLOCKSIZE-1:0] BlockDataIn, // Block-level data input
    output logic [BLOCKSIZE-1:0] BlockDataOut // Block-level data output
);

logic [WB-1:0] RamArray [2**WAM-1:0]; // Stored as bytes
logic [WAM-1:0] AdM; // Reduced address size for simulation purposes

// Initialize memory from file
initial begin
    $readmemh("triangle.mem", RamArray); // Load memory contents
end

// Handle word-level operations (lb, lh, lw, lbu, lhu)
always_comb begin
    AdM = Ad[WAM-1:0];
    case (func3)
        3'b000: DOut = {{24{RamArray[AdM][WB-1]}}, RamArray[AdM]};               // lb
        3'b001: DOut = {{16{RamArray[AdM+1][WB-1]}}, RamArray[AdM+1], RamArray[AdM]}; // lh
        3'b010: DOut = {RamArray[AdM+3], RamArray[AdM+2], RamArray[AdM+1], RamArray[AdM]}; // lw
        3'b100: DOut = {{24'b0}, RamArray[AdM]};                                  // lbu
        3'b101: DOut = {{16'b0}, RamArray[AdM+1], RamArray[AdM]};                 // lhu
        default: DOut = {RamArray[AdM+3], RamArray[AdM+2], RamArray[AdM+1], RamArray[AdM]}; // lw
    endcase
end

// Handle word-level writes based on func3
always_ff @(posedge clk) begin
    if (RamWrite) begin
        case (func3)
            3'b000: RamArray[AdM] <= DIn[7:0];                     // sb
            3'b001: begin                                          // sh
                RamArray[AdM] <= DIn[7:0];
                RamArray[AdM+1] <= DIn[15:8];
            end
            3'b010: begin                                          // sw
                RamArray[AdM] <= DIn[7:0];
                RamArray[AdM+1] <= DIn[15:8];
                RamArray[AdM+2] <= DIn[23:16];
                RamArray[AdM+3] <= DIn[31:24];
            end
        endcase
    end
end

// Handle block-level reads
always_comb begin
    if (BlockReadEnable) begin
        BlockDataOut = {RamArray[BlockAddr+15], RamArray[BlockAddr+14], RamArray[BlockAddr+13], RamArray[BlockAddr+12],
                        RamArray[BlockAddr+11], RamArray[BlockAddr+10], RamArray[BlockAddr+9], RamArray[BlockAddr+8],
                        RamArray[BlockAddr+7], RamArray[BlockAddr+6], RamArray[BlockAddr+5], RamArray[BlockAddr+4],
                        RamArray[BlockAddr+3], RamArray[BlockAddr+2], RamArray[BlockAddr+1], RamArray[BlockAddr]};
    end else begin
        BlockDataOut = {BLOCKSIZE{1'b0}}; // Default to zero if not enabled
    end
end

// Handle block-level writes
always_ff @(posedge clk) begin
    if (BlockWriteEnable) begin
        RamArray[BlockAddr]     <= BlockDataIn[7:0];
        RamArray[BlockAddr+1]   <= BlockDataIn[15:8];
        RamArray[BlockAddr+2]   <= BlockDataIn[23:16];
        RamArray[BlockAddr+3]   <= BlockDataIn[31:24];
        RamArray[BlockAddr+4]   <= BlockDataIn[39:32];
        RamArray[BlockAddr+5]   <= BlockDataIn[47:40];
        RamArray[BlockAddr+6]   <= BlockDataIn[55:48];
        RamArray[BlockAddr+7]   <= BlockDataIn[63:56];
        RamArray[BlockAddr+8]   <= BlockDataIn[71:64];
        RamArray[BlockAddr+9]   <= BlockDataIn[79:72];
        RamArray[BlockAddr+10]  <= BlockDataIn[87:80];
        RamArray[BlockAddr+11]  <= BlockDataIn[95:88];
        RamArray[BlockAddr+12]  <= BlockDataIn[103:96];
        RamArray[BlockAddr+13]  <= BlockDataIn[111:104];
        RamArray[BlockAddr+14]  <= BlockDataIn[119:112];
        RamArray[BlockAddr+15]  <= BlockDataIn[127:120];
    end
end

endmodule
