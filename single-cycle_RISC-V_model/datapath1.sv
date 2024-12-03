module datapath1 #(parameter WAD = 5, WD = 32)(
    input logic clk,

    input logic [WAD-1:0] AdIn, //A3 regfile
    input logic [WAD-1:0] AdOut1, //A1 regfile
    input logic [WAD-1:0] AdOut2, //A2 regfile
    input logic [WD-1:0] instr,

    input logic [WD-1:0] PC,

    input logic ALUsrc,     //sel for imm or 2nd reg
    input logic [1:0] ALUop,    //
    input logic [1:0] ResultSrc,  //select for result mux after data mem
    input logic RegWrite, //En for Regfile
    input logic RamWrite, //EN for Data mem
    input logic [2:0] IMMsrc,  //Sel for extend module

    output logic [WD-1:0] A0, //not needed for this 
    output logic flag,
    output logic [WD-1:0] IMM,
    output logic [WD-1:0] DOutAlu 
);

logic [WD-1:0] DOut1;
logic [WD-1:0] DOut2;
logic [WD-1:0] N2;
logic [WD-1:0] DInReg;
logic [WD-1:0] DOutRam;

logic op5;
logic func75;
logic [2:0] func3;
logic [2:0] ALUctrl;
logic [2:0] ALUflag;


assign func3 = instr[WD-18:WD-20];
assign op5 = instr[WD-31];
assign func75 = instr[WD-2];

always_comb begin
    if (ALUsrc) N2 = IMM;
    else N2 = DOut2;
end

always_comb 
case (ResultSrc)
    2'b00: DInReg = DOutAlu;
    2'b01: DInReg = DOutRam;
    2'b10: DInReg = PC+4;
    2'b11: DInReg = N2;
    default DInReg = DOutAlu;
endcase


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
    .ALUflag(ALUflag),
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

aluflagdecode A12(
    .func3(func3),
    .ALUop(ALUop),

    .ALUflag(ALUflag)
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


