module datapath2 #(parameter W = 32)(
    input logic clk,
    input logic rst,
    input logic [1:0] PCsrc,
    input logic [W-1:0] IMM,
    input logic [W-1:0] DOutAlu,

    output logic [W-1:0] PC,
    output logic [W-1:0] instr
);

logic [W-1:0] PCN;

always_comb 
    case (PCsrc)
        2'b00: PCN = PC + 4;
        2'b01: PCN = PC + IMM;
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


endmodule
