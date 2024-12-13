module datamemory#(
    parameter WD = 32 // WordData width
    parameter WA = 32 // WordAddress width
    parameter WAM = 17,      // Addressable memory depth
    parameter WB = 8,        // Byte width
)(
    input  logic                  clk,          // Clock input
    input  logic                  memwriteM,          // Write Enable signal
    input logic [2:0] funct3M,         // Word-level operation selector
    input  logic [WA-1:0] aluresultM,           // Address input
    input  logic [WD-1:0] writedataM,          // Write Data input
    
    output logic [WD-1:0] readdataM           // Read Data output
);

    logic [WB-1:0] RamArray [2**WAM-1:0]; // Stored as bytes
    logic [WAM-1:0] AdM; // 

    initial begin
        $readmemh("sine.mem", RAMArray);
    end

// Handle word-level operations (lb, lh, lw, lbu, lhu)
always_comb begin
    AdM = aluresultM[WAM-1:0];
    case (funct3M)
        3'b000: readdataM = {{24{RamArray[AdM][WB-1]}}, RamArray[AdM]};               // lb
        3'b001: readdataM = {{16{RamArray[AdM+1][WB-1]}}, RamArray[AdM+1], RamArray[AdM]}; // lh
        3'b010: readdataM = {RamArray[AdM+3], RamArray[AdM+2], RamArray[AdM+1], RamArray[AdM]}; // lw
        3'b100: readdataM = {{24'b0}, RamArray[AdM]};                                  // lbu
        3'b101: readdataM = {{16'b0}, RamArray[AdM+1], RamArray[AdM]};                 // lhu
        default: readdataM = {RamArray[AdM+3], RamArray[AdM+2], RamArray[AdM+1], RamArray[AdM]}; // lw
    endcase
end

// Handle word-level writes based on funct3M (SB, SH, SW)
always_ff @(posedge clk) begin
    if (memwriteM) begin
        case (funct3M)
            3'b000: RamArray[AdM] <= writedataM[WD-25:0];          // sb
            3'b001: begin                                          // sh
                RamArray[AdM] <= writedataM[WD-17:WD-24];
                RamArray[AdM+1] <= writedataM[WD-25:0];
            end
            3'b010: begin                                          // sw
                RamArray[AdM] <= writedataM[WD-1:WD-8];
                RamArray[AdM+1] <= writedataM[WD-9:WD-16];
                RamArray[AdM+2] <= writedataM[WD-17:WD-24];
                RamArray[AdM+3] <= writedataM[WD-25:0];
            end
        endcase
    end
end


endmodule