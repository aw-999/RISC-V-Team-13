module datapath1 #(parameter WAD = 5, WD = 32)(
    input logic clk,

    input logic [WD-1:0] instr,
    input logic [WD-1:0] PC,

    input logic ALUsrc,
    input logic [1:0] ALUop,
    input logic [1:0] ResultSrc,
    input logic RegWrite,
    input logic RamWrite,
    input logic [2:0] IMMsrc,

    output logic [WD-1:0] A0,
    output logic flag,
    output logic [WD-1:0] IMM,
    output logic [WD-1:0] DOutAlu
);

logic [WD-1:0] DOut1;
logic [WD-1:0] DOut2;
logic [WD-1:0] N2;
logic [WD-1:0] DInReg;
logic [WD-1:0] DOutRam;

logic [3:0] ALUctrl;

logic [WAD-1:0] AdIn;
logic [WAD-1:0] AdOut1;
logic [WAD-1:0] AdOut2;
logic [2:0] func3;
logic op5;
logic func75;
assign AdIn = instr[WD-21:WD-25];
assign AdOut1 = instr[WD-13:WD-17];
assign AdOut2 = instr[WD-8:WD-12];
assign func3 = instr[WD-18:WD-20];
assign op5 = instr[WD-27];
assign func75 = instr[WD-2];


always_comb begin
    if (ALUsrc) N2 = IMM;
    else N2 = DOut2;

    case (ResultSrc)
        2'b00: DInReg = DOutAlu;
        2'b01: DInReg = DOutRam;
        2'b10: DInReg = PC+4;
        2'b11: DInReg = N2;
        default DInReg = DOutAlu;
    endcase 
end


reg32 R1(
    .AdIn(AdIn),
    .AdOut1(AdOut1),
    .AdOut2(AdOut2),
    .DIn(DInReg),
    .RegWrite(RegWrite),
    .clk(clk),

    .DOut1(DOut1),
    .DOut2(DOut2),
    .A0(A0)
);

alu A1(
    .ALUctrl(ALUctrl),
    .N1(DOut1),
    .N2(N2),

    .flag(flag),
    .out(DOutAlu)
);

aludecode A11(
    .func3(func3),
    .op5(op5),
    .func75(func75),
    .ALUop(ALUop),

    .ALUctrl(ALUctrl)
);

imm I1(
    .IMMsrc(IMMsrc),
    .instr(instr),
    .out(IMM)
);

ram R2(
    .clk(clk),
    .DIn(DOut2),
    .Ad(DOutAlu),
    .RamWrite(RamWrite),
    .func3(func3),

    .DOut(DOutRam)
);

endmodule


