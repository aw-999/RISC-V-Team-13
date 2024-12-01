module datapath1 #(parameter WAD = 5, WD = 32)(
    input logic clk,

    input logic [WAD-1:0] AdIn,
    input logic [WAD-1:0] AdOut1,
    input logic [WAD-1:0] AdOut2,
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

//pipeline decode


logic [WD-1:0] RD1D, RD2D, PCD, ImmExtD, PCPlus4D;
logic [4:0] RdD;
logic [1:0] ResultSrcD;
logic MemWriteD, JumpD, BranchD;
logic [2:0] ALUCtrlD;
logic ALUSrcD;


logic [1:0] ResultSrcE;
logic MemWriteE, JumpE, BranchE;
logic [2:0] ALUCtrlE;
logic ALUSrcE;


logic [WD-1:0] RD1E, RD2E, PCE, ImmExtE, PCPlus4E;
logic [4:0] RdE;


logic RegWriteM;
logic [1:0] ResultSrcM;
logic MemWriteM;
logic [WD-1:0] ALUResultM, WriteDataM, PCPlus4M;
logic [4:0] RdM;

logic RegWriteW;
logic [1:0] ResultSrcW;
logic [WD-1:0] ReadDataW, ALUResultW, PCPlus4W;
logic [4:0] RdW;


PCD PCDecode(
    
    .clk(clk),
    .rst(rst),
    
    .RegWriteD(RegWrite),
    .ResultSrcD(ResultSrc),
    .MemWriteD(RamWrite),
    .JumpD(1'b0),  
    .BranchD(1'b0), 
    .ALUCtrlD(ALUop), 
    .ALUSrcD(ALUsrc),
    .RD1D(DOut1),   
    .RD2D(DOut2),   
    .PCD(PC),       
    .RdD(AdOut1),   
    .ImmExtD(IMM),
    .PCPlus4D(PC),  
    
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    .JumpE(JumpE),
    .BranchE(BranchE),
    .ALUCtrlE(ALUCtrlE),
    .ALUSrcE(ALUSrcE),
    
    .RD1E(RD1E),
    .RD2E(RD2E),
    .PCE(PCE),
    .RdE(RdE),
    .ImmExtE(ImmExtE),
    .PCPlus4E(PCPlus4E)
);

//pipeline execute

PCE PCExecute (

    .clk(clk),
    .rst(rst),

    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),

    .RegWriteM(RegWriteM),
    .ResultSrcM(ResultSrcM),
    .MemWriteM(MemWriteM),

    .ALUResultE(DOutAlu),   
    .WriteDataE(DOut2),     
    .RdE(RdE),               
    .PCPlus4E(PCPlus4E),     

    .ALUResultM(ALUResultM),
    .WriteDataM(WriteDataM),
    .RdM(RdM),
    .PCPlus4M(PCPlus4M)
);

//pipeline memory

PCM PCMemory(

    .clk(clk),
    .rst(rst),

    .RegWriteM(RegWriteM),
    .ResultSrcM(ResultSrcM),
    .ReadDataM(DOutRam),     
    .ALUResultM(ALUResultM), 
    .RdM(RdM),               
    .PCPlus4M(PCPlus4M),     
    
    .RegWriteW(RegWriteW),
    .ResultSrcW(ResultSrcW),
    .ReadDataW(ReadDataW),
    .ALuResultW(ALUResultW),
    .RdW(RdW),
    .PCPlus4W(PCPlus4W)
);

endmodule


