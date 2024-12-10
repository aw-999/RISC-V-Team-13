/* verilator lint_off UNUSED*/

module DataMemory #(parameter WA = 32, WAM = 17, WB = 8, WD = 32)(
    input logic clk,
    input logic [WA-1:0] ALUResult, // aluresult formerly Ad
    input logic MemWrite, 
    input logic [2:0] funct3,
    input logic [WD-1:0] WriteData, //write data formerly DIn
    output logic [WD-1:0] ReadData
);

logic [WB-1:0] RamArray [2**WAM-1:0]; // stored in byte
logic [WAM-1:0] AdM; // reduced in size, 2**32 is too large to simulate


initial begin
    $readmemh("program.hex", RamArray);
end;

always_comb begin 
    AdM = ALUResult[WAM-1:0];
    case (funct3) 
        3'b000: ReadData = {{24{RamArray[AdM][WB-1]}},RamArray[AdM]}; // lb
        3'b001: ReadData = {{16{RamArray[AdM][WB-1]}},RamArray[AdM], RamArray[AdM+1]}; // lh
        3'b010: ReadData = {RamArray[AdM+3], RamArray[AdM+2], RamArray[AdM+1], RamArray[AdM]}; // lw
        3'b100: ReadData = {{24'b0},RamArray[AdM]}; // lbu
        3'b101: ReadData = {{16'b0},RamArray[AdM], RamArray[AdM+1]}; // lhu
        default: ReadData = {RamArray[AdM+3], RamArray[AdM+2], RamArray[AdM+1], RamArray[AdM]}; // lw
    endcase
end

always_ff@(posedge clk)
    if (MemWrite) 
    begin
        if (funct3[1:0] == 2'b10)
        begin
            RamArray[AdM] <= WriteData[WD-1:WD-8];
            RamArray[AdM+1] <= WriteData[WD-9:WD-16];
            RamArray[AdM+2] <= WriteData[WD-17:WD-24];
            RamArray[AdM+3] <= WriteData[WD-25:0];
        end
        else if (funct3[1:0] == 2'b01)
        begin
            RamArray[AdM] <= WriteData[WD-17:WD-24];
            RamArray[AdM+1] <= WriteData[WD-25:0];
        end
        else if (funct3[1:0] == 2'b00) 
            RamArray[AdM] <= WriteData[WD-25:0];
    end


endmodule
