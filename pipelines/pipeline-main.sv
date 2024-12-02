module pipelinetop #(
    parameter DATA_WIDTH = 32

)(
    input logic clk,
    input logic rst,
    output logic [DATA_WIDTH-1:0] A0
);

//pipeline fetch
logic [DATA_WIDTH-1:0] PCPlus4F;
logic [DATA_WIDTH-1:0] InstrD;
logic [DATA_WIDTH-1:0] PCD;
logic [DATA_WIDTH-1:0] PCPlus4D;

//pipeline Decode
logic [DATA_WIDTH-1:0] RD1D, RD2D, PCD, ImmExtD, PCPlus4D;
logic [4:0] RdD;
logic [1:0] ResultSrcD;
logic MemWriteD, JumpD, BranchD;
logic [2:0] ALUCtrlD;
logic ALUSrcD;

//pipeline execute
logic [1:0] ResultSrcE;
logic MemWriteE, JumpE, BranchE;
logic [2:0] ALUCtrlE;
logic ALUSrcE;
logic [DATA_WIDTH-1:0] RD1E, RD2E, PCE, ImmExtE, PCPlus4E;
logic [4:0] RdE;

//pipeline memory
logic RegWriteM;
logic [1:0] ResultSrcM;
logic MemWriteM;
logic [DATA_WIDTH-1:0] ALUResultM, WriteDataM, PCPlus4M;
logic [4:0] RdM;

//write back
logic RegWriteW;
logic [1:0] ResultSrcW;
logic [DATA_WIDTH-1:0] ReadDataW, ALUResultW, PCPlus4W;
logic [4:0] RdW;

//instrmem
rom InstrMemory(
    .AddrIn (PC),
    .DOut (instr)
);

//pcincrementby4
PCIncrementby4 PCIncrementby4(
    .PC (PC),
    .IMMop (PCTargetE),
    .DOutAlu (PCPlus4F),
    .PCSrc (PCSrc),
    .PCN (PCN)
);

//mux1PC
mux_PCSrc mux_PCSrc(
    .PCPlus4F (PCPlus4F),
    .PCTargetE (PCTargetE),
    .PCSrcE (PCSrcE),
    .PCN (PCN)
);

pcreg PCReg(
    .clk (clk),
    .rst (rst),
    .PCN (PCN),
    .PC (PC)
);

PCF PCFetch(
    .clk (clk),
    .rst (rst),

    .InstrF (instr),
    .PCF (PC),
    .PCPlus4F (PCN),
    .InstrD (InstrD),
    .PCD (PCD),
    .PCPlus4D (PCPlus4D)
);

//control
control C1(
    .instr (instr),
    .flag (flag),

    .RegWrite (RegWrite),
    .RamWrite (RamWrite),
    .ALUop (ALUop),
    .ALUsrc (ALUsrc),
    .IMMsrc (IMMsrc),
    .PCsrc (PCsrc),
    .ResultSrc (ResultSrc)
    //.JumpD
    //.BranchD needed to be added
);

//sign ext
imm I1(
    .IMMsrc (IMMsrc),
    .instr (instr),
    .out (IMM)
);

//regfile
reg32 R1(
    .AdIn (AdIn),
    .AdOut1 (AdOut1),
    .AdOut2 (AdOut2),
    .DIn (DInReg),
    .RegWrite (RegWrite),
    .clk (clk),

    .DOut1 (DOut1),
    .DOut2 (DOut2),
    .A0 (A0)
);

PCD PCDecode(
    .clk (clk),
    .rst (rst),
    
    .RegWriteD (RegWrite),
    .ResultSrcD (ResultSrc),
    .MemWriteD (RamWrite),
    .JumpD (1'b0),  
    .BranchD (1'b0), 
    .ALUCtrlD (ALUop), 
    .ALUSrcD (ALUsrc),
    .RD1D (DOut1),   
    .RD2D (DOut2),   
    .PCD (PC),       
    .RdD (AdOut1),   
    .ImmExtD (IMM),
    .PCPlus4D (PC),  
    
    .RegWriteE (RegWriteE),
    .ResultSrcE (ResultSrcE),
    .MemWriteE (MemWriteE),
    .JumpE (JumpE),
    .BranchE (BranchE),
    .ALUCtrlE (ALUCtrlE),
    .ALUSrcE (ALUSrcE),
    
    .RD1E (RD1E),
    .RD2E (RD2E),
    .PCE (PCE),
    .RdE (RdE),
    .ImmExtE (ImmExtE),
    .PCPlus4E (PCPlus4E)
);

//alu
alu ALU(
    .ALUctrl (ALUctrl),
    .ALUflag (ALUflag),
    .N1 (DOut1),
    .N2 (N2),
    .flag (flag),
    .out (DOutAlu)
);

aludecode ALUDecode(
    .func3 (func3),
    .op5 (op5),
    .func75 (func75),
    .ALUop (ALUop),
    .ALUctrl (ALUctrl)
);

aluflagdecode A12(
    .func3 (func3),
    .ALUop (ALUop),

    .ALUflag (ALUflag)
);

ram R2(
    .clk (clk),
    .DIn (DOut2),
    .Ad (DOutAlu),
    .RamWrite (RamWrite),
    .func3 (func3),

    .DOut (DOutRam)
);

//mux
SrcBEmux SrcBEmux(
    .ALUSrcE (ALUSrcE),
    .RD2E (RD2E),
    .ImmExtE (ImmExtE),
    .SrcBE (DOutAlu)
);

PCTarget PCTarget( 
    .PCE (PCE),
    .ImmExtE (ImmExtE),
    .PCTargetE (PCTargetE)
);


PCE PCExecute (
    .clk (clk),
    .rst (rst),

    .RegWriteE (RegWriteE),
    .ResultSrcE (ResultSrcE),
    .MemWriteE (MemWriteE),

    .RegWriteM (RegWriteM),
    .ResultSrcM (ResultSrcM),
    .MemWriteM (MemWriteM),

    .ALUResultE (DOutAlu),   
    .WriteDataE (DOut2),     
    .RdE (RdE),               
    .PCPlus4E (PCPlus4E),     

    .ALUResultM (ALUResultM),
    .WriteDataM (WriteDataM),
    .RdM (RdM),
    .PCPlus4M (PCPlus4M)
);

//datamemory
ram DataMemory(
    .clk(clk),
    .DIn(DOut2),
    .Ad(DOutAlu),
    .RamWrite(WriteDataM),
    .func3(func3),

    .DOut(DOutRam)
);

PCM PCMemory(

    .clk (clk),
    .rst (rst),

    .RegWriteM (RegWriteM),
    .ResultSrcM (ResultSrcM),
    .ReadDataM (DOutRam),     
    .ALUResultM (ALUResultM), 
    .RdM (RdM),               
    .PCPlus4M (PCPlus4M),     
    
    .RegWriteW (RegWriteW),
    .ResultSrcW (ResultSrcW),
    .ReadDataW (ReadDataW),
    .ALUResultW (ALUResultW),
    .RdW (RdW),
    .PCPlus4W (PCPlus4W)
);

//mux4
mux4 mux4WriteBack (
    .ResultSrcW(ResultSrcW),       
    .ALUResultW(ALUResultW),       
    .ReadDataW(ReadDataW),        
    .PCPlus4W(PCPlus4W),           
    .ResultW(ResultW)
);

endmodule
