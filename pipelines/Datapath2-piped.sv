module datapath2 #(parameter W = 32)(
    input logic clk,
    input logic rst,
    input logic [1:0] PCsrc,
    input logic [W-1:0] IMMop,
    input logic [W-1:0] DOutAlu,

    output logic [W-1:0] PC,
    output logic [W-1:0] instr

    
);

logic [W-1:0] PCN;
logic [W-1:0] branch_pc;

assign branch_pc = PC + IMMop;

always_comb 
case (PCsrc)

    2'b00: PCN = PC + 4;
    2'b01: PCN = branch_pc;
    2'b11: PCN = DOutAlu;
    default: PCN = PC + 4;
endcase

pcreg P1(

    .clk(clk),
    .rst(rst),
    .PCN(PCN),

    .PC(PC)
);

rom R1(
    .AddrIn(PC),

    .DOut(instr)
);

//pipeline fetch

logic [W-1:0] PCPlus4F;
logic [W-1:0] InstrD;
logic [W-1:0] PCD;
logic [W-1:0] PCPlus4D;

PCF PCFetch(

    .clk (clk),
    .rst(rst),

    .InstrF(instr),
    .PCF(PC),
    .PCPlus4F(PCN),
    .InstrD(InstrD),
    .PCD(PCD),
    .PCPlus4D(PCPlus4D)
);
    

endmodule
