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
logic [4:0] Rs1D;
logic [4:0] Rs2D;

//pipeline execute
logic [1:0] ResultSrcE;
logic MemWriteE, JumpE, BranchE;
logic [2:0] ALUCtrlE;
logic ALUSrcE;
logic [DATA_WIDTH-1:0] RD1E, RD2E, PCE, ImmExtE, PCPlus4E;
logic [4:0] RdE;
logic [4:0] Rs1E;
logic [4:0] Rs2E;

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
    .PCPlus4 (PCPlus4F)
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
control ControlUnit(

    //why no op
    //why no funct3
    //why no funct7

    .instr (instr),
    .flag (flag),

    .RegWrite (RegWrite),
    .RamWrite (RamWrite), //Memwrite on diagram
    .ALUop (ALUop), //ALUctrl
    .ALUsrc (ALUsrc), 
    .IMMsrc (IMMsrc), 
    .PCsrc (PCsrc), //dont know
    .ResultSrc (ResultSrc)
    //.JumpD
    //.BranchD needed to be added
);

//sign extend
imm Sign_Extend( 
    .IMMsrc (IMMsrc),
    .instr (instr), //shouldnt it be instr[31:7]
    .out (IMM) 
);

//regfile
regfile R1(

    .clk (clk),

    .write_addr (RdW), //A3
    .A1 (AdOut1), //shouldnt it be instr[19:15]
    .A2 (AdOut2), //shouldnt it be instr[24:20]
    .WD3 (ResultW), //WD3
    .WE3 (RegWriteW), //WE3

    .DOut1 (DOut1), //RD1D
    .DOut2 (DOut2), //RD2D
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
    .RdD (instr[11:7]),   
    .ImmExtD (IMM),
    .PCPlus4D (PC),  
    .Rs1D (instr[19:15]),
    .Rs2D (instr[24:20]),
    
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
    .PCPlus4E (PCPlus4E),
    .Rs1E (Rs1E),
    .Rs2E (Rs2E)
);

HazardUnit HazardUnit (
    .RdM (RdM),
    .RdW (RdM),
    .RegWriteW (RegWriteW),
    .RegWriteM (RegWriteM),
    .Rs1E (Rs1E),
    .Rs2E (Rs1E),

    .ForwardAE (ForwardAE),
    .ForwardBE (ForwardAE)
);

ForwardAE_mux ForwardAE_mux (
    .ResultW (ResultW),
    .RD1E (RD1E),
    .ALUResultM (ALUResultM),
    .ForwardAE (ForwardAE),

    .SrcAE (SrcAE)
);

ForwardBE_mux ForwardBE_mux (
    .ResultW (ResultW),
    .RD2E (RD2E),
    .ALUResultM (ALUResultM),
    .ForwardBE (ForwardBE),

    .WriteDataE (WriteDataE)
);

//alu
alu ALU(
    .ALUctrl (ALUCtrlE),
    .ALUflag (ALUflag),
    .N1 (SrcAE), //formerly RD1E
    .N2 (SrcBE), //SrcBE

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

//mux
SrcBEmux SrcBEmux(
    .ALUSrcE (ALUSrcE),
    .RD2E (WriteDataE),
    .ImmExtE (ImmExtE),

    .SrcBE (SrcBE)
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
    .WriteDataE (WriteDataE),     
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

    .DIn(), //no idea what this is
    .Ad(ALUResultM),
    .RamWrite(WriteDataM),
    .func3(func3),
    // MemwriteM is func3 memwriteM?
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
