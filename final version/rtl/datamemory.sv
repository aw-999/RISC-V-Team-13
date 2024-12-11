/* verilator lint_off UNUSED*/

module datamemory #(parameter WA = 32, WAM = 17, WB = 8, WD = 32)(
    input logic clk,
    input logic [WA-1:0] aluresult, // aluresult formerly Ad
    input logic memwriteM, 
    input logic [2:0] funct3M,
    input logic [WD-1:0] writedataM, //write data formerly DIn
    output logic [WD-1:0] readdataM
);

logic [WB-1:0] RamArray [2**WAM-1:0]; // stored in byte
logic [WAM-1:0] AdM; // reduced in size, 2**32 is too large to simulate


initial begin
    $readmemh("data_memory.hex", RamArray);
end;

always_comb begin 
    AdM = aluresult[WAM-1:0];
    case (funct3M) 
        3'b000: readdataM = {{24{RamArray[AdM][WB-1]}},RamArray[AdM]}; // lb
        3'b001: readdataM = {{16{RamArray[AdM][WB-1]}},RamArray[AdM+1], RamArray[AdM]}; // lh
        3'b010: readdataM = {RamArray[AdM+3], RamArray[AdM+2], RamArray[AdM+1], RamArray[AdM]}; // lw
        3'b100: readdataM = {{24'b0},RamArray[AdM]}; // lbu
        3'b101: readdataM = {{16'b0},RamArray[AdM+1], RamArray[AdM]}; // lhu
        default: readdataM = {RamArray[AdM+3], RamArray[AdM+2], RamArray[AdM+1], RamArray[AdM]}; // lw
    endcase
end

always_ff@(posedge clk)
    if (memwriteM) 
    begin
        if (funct3M[1:0] == 2'b10)
        begin
            RamArray[AdM] <= writedataM[WD-1:WD-8];//sw
            RamArray[AdM+1] <= writedataM[WD-9:WD-16];
            RamArray[AdM+2] <= writedataM[WD-17:WD-24];
            RamArray[AdM+3] <= writedataM[WD-25:0];
        end
        else if (funct3M[1:0] == 2'b01)
        begin
            RamArray[AdM] <= writedataM[WD-17:WD-24];//sh
            RamArray[AdM+1] <= writedataM[WD-25:0];
        end
        else if (funct3M[1:0] == 2'b00) 
            RamArray[AdM] <= writedataM[WD-25:0];//sb
    end


endmodule
