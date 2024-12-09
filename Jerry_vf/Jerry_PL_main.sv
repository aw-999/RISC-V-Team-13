module PL_Main #(WAD = 5, W = 32)(
    input logic clk,
    input logic rst,
    output logic [W-1:0] A0
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

HazardUnit HazardUnit (

    //.branchD (branchD), //need to fix dont need
    //.flag (ZeroE) //need to fix dont need
    //.flush (PCsrc[0]) //need to fix re added it as pcsrcE

    .RdM (RdM),
    .RdW (RdW),
    .RegWriteM (RegWriteM),
    .RegWriteW (RegWriteW),

    //need to add
    .RdE (RdE),

    .ResultSrcE (ResultSrcE[0]),
    .PCSrcE (PCSrcE[0]),

    .Rs1D (instrD[19:15]),
    .Rs2D (instrD[24:20]),

    .Rs1E (Rs1E),
    .Rs2E (Rs1E),

    //outputs
    .ForwardAE (ForwardAE),
    .ForwardBE (ForwardAE),

    //need to fix
    .stallF (stallF), //for PCreg
    .stallD (stallD), //for PCFetch
    .flushD (flushD), //for PCFetch
    .flushE (flushE), //for PCDecode
    

);

MUX_PCsrc MUX_PCsrc (
    .PCadd4(PCadd4),
    .PCaddIMM(PCaddIMM),
    .DOutAlu(DOutAlu),
    .PCsrc(PCsrcE),

    .PCN(PCN)
);

PcRegister PcRegister (
    .clk(clk),
    .rst(rst),
    .PC(PC),
    .PCN(PCN)
);

InstructionMemory InstructionMemory (
    .PC(PC),
    .instr(instr)
);

PcIncrement4 PcIncrement4 (
    .PC(PC),
    .PCadd4(PCadd4)
);

PCF PCFetch(
    //always there
    .clk (clk),
    .rst (rst),

    //hazard
    .flushD (flushD), //clr
    .StallD (StallD), //en

    //inputs
    .InstrF (instr), 
    .PCF (PC), 
    .PCPlus4F (PCadd4), 

    //outputs
    .InstrD (InstrD),
    .PCD (PCD),
    .PCPlus4D (PCPlus4D)
);

//using Arjuns and Doms
PL_ControlUnit PL_ControlUnit (

    .opcode (instrD[6:0]),
    .ZeroFlag (ZeroFlag),
    .NegativeFlag (NegativeFlag),
    .UnsignedLess (UnsignedLess),

    .ResultSrc (ResultSrc),
    .MemWrite (MemWrite),
    .ALUSrc (ALUSrc),
    .ImmSrc (ImmSrc),
    .RegWrite (RegWrite),
    .ALUop (ALUop)

);

//using Arjuns and Doms
ALUDecode ALUDecode (
    .funct3 (instrD[14:12]), 
    .opcode5 (instrD[5]), 
    .funct75 (instrD[31:25]),
    .ALUop (ALUop),

    .ALUCtrl (ALUCtrl)
);

RegisterFile M4 (
    .clk(clk),
    .RegWrite(RegWriteW),

    .AdInReg(RdW),

    .AdOutReg1(instrD[19:15]),
    .AdOutReg2(instrD[24:20]),

    .DInReg(DInReg),

    .DOutReg1(DOutReg1), //RD1D
    .DOutReg2(DOutReg2), //RD2D
    .A0(A0)
);

Extension Extension (
    .IMMctrl(IMMctrl),
    .instr(instr),
    .IMM(IMM)
);


PCD PCDecode(

    .clk (clk),
    .rst (rst),

    .flushE (flushE),

    //control unit
    .RegWriteD (RegWrite),
    .ResultSrcD (ResultSrc),
    .MemWriteD (MemWrite),

    .ALUCtrlD (ALUCtrl), 
    .ALUSrcD (ALUSrc),

    //for datamemory
    .funct3D (instrD[14:12]),

    //data
    .RD1D (DOutReg1),   
    .RD2D (DOutReg2),   
    .PCD (PCD),       
    .RdD (instrD[11:7]),   
    .ImmExtD (IMM),
    .PCPlus4D (PCPlus4D),  
    .Rs1D (instrD[19:15]),
    .Rs2D (instrD[24:20]),

    
    
    
    .RegWriteE (RegWriteE),
    .ResultSrcE (ResultSrcE),
    .MemWriteE (MemWriteE),
    .JumpE (JumpE), 
    .BranchE (BranchE),
    .ALUCtrlE (ALUCtrlE),
    .ALUSrcE (ALUSrcE),
    .PCSrcE (PCSrcE), 

    
    //for datamemory
    .funct3E (funct3E),
    
    .RD1E (RD1E),
    .RD2E (RD2E),
    .PCE (PCE),
    .RdE (RdE),
    .ImmExtE (ImmExtE),
    .PCPlus4E (PCPlus4E),
    .Rs1E (Rs1E),
    .Rs2E (Rs2E)
);

//using Arjuns and Doms
PCSrc_gate PCSrc_gate (
    .ZeroFlag (ZeroFlag),
    .NegativeFlag (NegativeFlag),
    .UnsignedLess (UnsignedLess),

    .opcode (opcodeE),
    .funct3 (funct3E),

    .PCSrcE (PCSrcE)
);

//hazard mux for SrcAE
ForwardAE_mux ForwardAE_mux (

    .RD1E (RD1E),
    .ResultW (ResultW),
    .ALUResultM (ALUResultM),
    .ForwardAE (ForwardAE),

    .SrcAE (SrcAE)
);

//hazard mux for SrcBE
ForwardBE_mux ForwardBE_mux (

    .RD2E (RD2E),
    .ResultW (ResultW),
    .ALUResultM (ALUResultM),
    .ForwardBE (ForwardBE),

    .WriteDataE (WriteDataE)
);

MUX_ALUsrc MUX_ALUsrc (
    .DOutReg2(WriteDataE),
    .IMM(IMM),
    .ALUsrc(ALUsrc),

    .N2(N2)//SrcBE
);

//adding immedeiate
Add_pc_imm Add_pc_imm (
    .PC(PCE),
    .IMM(ImmExtE),
    .PCaddIMM(PCaddIMM) //PCTargetE
);

//using Arjuns and Doms
ALU ALU (

    .ALUCtrl (ALUCtrlE),
    .SrcA (SrcAE), 
    .SrcB (N2), 

    .ZeroFlag (ZeroFlag),
    .NegativeFlag (NegativeFlag), 
    .UnsignedLess (UnsignedLess),
    .ALUResult (ALUResult)
);


PCE PCExecute (
    .clk (clk),
    .rst (rst),

    //ControlUnit
    .RegWriteE (RegWriteE),
    .ResultSrcE (ResultSrcE),
    .MemWriteE (MemWriteE),

    .ALUResultE (ALUResult),   
    .WriteDataE (WriteDataE),     
    .RdE (RdE),               
    .PCPlus4E (PCPlus4E),   

    //for datamemory
    .funct3E (funct3E),

    .RegWriteM (RegWriteM),
    .ResultSrcM (ResultSrcM),
    .MemWriteM (MemWriteM),  

    .ALUResultM (ALUResultM),
    .WriteDataM (WriteDataM),
    .RdM (RdM),
    .PCPlus4M (PCPlus4M)

    //for datamemory
    .funct3M (funct3M),

);

DataMemory DataMemory (
    .clk(clk),
    .AdDM(ALUResultM),
    .DMwrite(MemWriteM),
    
    .func3(funct3M),

    .DInDM(WriteDataM),

    .DOutDM(DOutDM)
);

PCM PCMemory(

    .clk (clk),
    .rst (rst),

    .RegWriteM (RegWriteM),
    .ResultSrcM (ResultSrcM),
    .ReadDataM (DOutDM),     
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

MUX_Resultsrc MUX_Resultsrc (
    .DOutAlu(ALUResultM),
    .DOutDM(ReadDataW),
    .PCadd4(PCPlus4W),

    //why is this here when you also do the same in pcreg?
    .PCaddIMM(PCaddIMM),

    .ResultSrc(ResultSrcW),
    .DInReg(DInReg)
);

endmodule

