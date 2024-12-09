module PL_Main #(parameter WAD = 5, parameter DATA_WIDTH = 32)(
    input logic clk,
    input logic rst,
    output logic [DATA_WIDTH-1:0] A0
);

//hazardUnit
logic [1:0] ForwardAE, ForwardBE;
logic stallF, stallD, flushD, flushE;

//Mux_PCsrc
logic [DATA_WIDTH-1:0] PCN;

//PcRegister
logic [DATA_WIDTH-1:0] PC;

//incrementby4
logic [DATA_WIDTH-1:0] PCadd4;

//instructionmemory 
logic [DATA_WIDTH-1:0] instr;

//PCFetch

logic [DATA_WIDTH-1:0] InstrD;
logic [DATA_WIDTH-1:0] PCD;
logic [DATA_WIDTH-1:0] PCPlus4D;


//Pl_controlunit
logic [1:0] ResultSrc;
logic MemWrite, RegWrite, ALUSrc;
logic [2:0] ImmSrc, ALUop;

//aludecode
logic [3:0] ALUCtrl;

//RegisterFile
logic [DATA_WIDTH-1:0] DOutReg1, DOutReg2;

//extension
logic [DATA_WIDTH-1:0] IMM;

//pipeline Decode
logic RegWriteE;
logic [1:0] ResultSrcE;
logic MemWriteE;
logic [2:0] ALUCtrlE;
logic ALUSrcE;
logic [2:0] funct3E;
logic [6:0] opcodeE;


//PCSrc_gate
logic [1:0] PCSrcE;

//ForwardAE_mux
logic [DATA_WIDTH-1:0] SrcAE;

//ForwardBE_mux
logic [DATA_WIDTH-1:0] WriteDataE;

//MUX_ALUsrc
logic [DATA_WIDTH-1:0] SrcBE;

//add_pc_imm
logic [DATA_WIDTH-1:0] PCaddIMM;

//ALU
logic ZeroFlag, NegativeFlag, UnsignedLess;
logic [DATA_WIDTH-1:0] ALUResult;

//pipeline execute
logic RegWriteM;
logic [1:0] ResultSrcM;
logic MemWriteM;
logic [DATA_WIDTH-1:0] ALUResultM, WriteDataM, PCPlus4M;
logic [4:0] RdM;
logic [2:0] funct3M;

//DataMemory
logic [DATA_WIDTH-1:0] DOutM;


//PCMemory
logic RegWriteW;
logic [1:0] ResultSrcW;
logic [DATA_WIDTH-1:0] ReadDataW, ALUResultW, PCPlus4W;
logic [4:0] RdW;

//MUX_Resultsrc
logic [DATA_WIDTH-1:0] DInReg; //resultW

HazardUnit HazardUnit (

    .RdE (RdE),
    .RdM (RdM),
    .RdW (RdW),
    .RegWriteM (RegWriteM),
    .RegWriteW (RegWriteW),
    .ResultSrcE (ResultSrcE[0]),
    .PCSrcE (PCSrcE[0]),

    .Rs1D (instrD[19:15]),
    .Rs2D (instrD[24:20]),
    .Rs1E (Rs1E),
    .Rs2E (Rs2E),

    //outputs
    .ForwardAE (ForwardAE),
    .ForwardBE (ForwardBE),

    .stallF (stallF), //for PCreg
    .stallD (stallD), //for PCFetch
    .flushD (flushD), //for PCFetch
    .flushE (flushE) //for PCDecode
    
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
    .PCN (PCN),

    .PC (PC)
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
    .funct75 (instrD[30]),
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
    .IMMctrl (ImmSrc),
    .instr(instrD),
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
    .opcodeD (instrD[6:0]),

    .ALUCtrlD (ALUCtrl), 
    .ALUSrcD (ALUSrc),

    opcodeE (opcodeE),
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
    .ALUCtrlE (ALUCtrlE),
    .ALUSrcE (ALUSrcE),
    
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
    .ResultW (DInReg),
    .ALUResultM (ALUResultM),
    .ForwardAE (ForwardAE),

    .SrcAE (SrcAE)
);

//hazard mux for SrcBE
ForwardBE_mux ForwardBE_mux (

    .RD2E (RD2E),
    .ResultW (DInReg),
    .ALUResultM (ALUResultM),
    .ForwardBE (ForwardBE),

    .WriteDataE (WriteDataE)
);

MUX_ALUsrc MUX_ALUsrc (
    .DOutReg2(WriteDataE),
    .IMM(IMM),
    .ALUsrc(ALUsrcE),

    .N2(SrcBE)
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
    .SrcB (SrcBE), 

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
    .funct3M (funct3M)

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

    .PCaddIMM(PCaddIMM),

    .ResultSrc(ResultSrcW),
    .DInReg(DInReg)
);

endmodule

