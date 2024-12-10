module top #(parameter DATA_WIDTH = 32)(
    input logic clk,
    input logic rst,
    input logic TRIGGER,
    output logic [DATA_WIDTH-1:0] a0

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
logic [3:0] ALUCtrlE;
logic ALUSrcE;
logic [2:0] funct3E;
logic [6:0] opcodeE;
logic [DATA_WIDTH-1:0] PCE;
logic [DATA_WIDTH-1:0] PCPlus4E;
logic [DATA_WIDTH-1:0] ImmExtE;
logic [DATA_WIDTH-1:0] RD1E;
logic [DATA_WIDTH-1:0] RD2E;
logic [4:0] Rs1E;
logic [4:0] Rs2E;
logic [4:0] RdE;



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
logic [DATA_WIDTH-1:0] ImmExtM;
logic [4:0] RdM;
logic [2:0] funct3M;

//DataMemory
logic [DATA_WIDTH-1:0] DOutDM;


//PCMemory
logic RegWriteW;
logic [1:0] ResultSrcW;
logic [DATA_WIDTH-1:0] ReadDataW, ALUResultW, PCPlus4W;
logic [DATA_WIDTH-1:0] ImmExtW;
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

    .Rs1D (InstrD[19:15]),
    .Rs2D (InstrD[24:20]),
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

PL_PCSrc_mux PL_PCSrc_mux ( 
    .PCadd4(PCPlus4W),
    .PCaddIMM(ImmExtW),
    .DOutAlu(ALUResultW),
    .PCsrc(PCSrcE),

    .PCN(PCN)
);


HU_PcRegister HU_PcRegister (
    .clk(clk),
    .rst(rst),
    .PCN (PCN),
    .stall (stallF),

    .PC (PC)
);

PL_InstructionMemory PL_InstructionMemory (
    .PC(PC[15:0]),
    .instr(instr)
);

PL_Incrementby4 PL_Increment4 (
    .PC(PC),
    .PCadd4(PCadd4)
);

PCF PCFetch(
    //always there
    .clk (clk),
    //.rst (rst),

    //hazard
    .flushD (flushD), //clr
    .StallD (stallD), //en

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

    .opcode (InstrD[6:0]),
    //.ZeroFlag (ZeroFlag),
    //.NegativeFlag (NegativeFlag),
    //.UnsignedLess (UnsignedLess),

    .ResultSrc (ResultSrc),
    .MemWrite (MemWrite),
    .ALUSrc (ALUSrc),
    .ImmSrc (ImmSrc),
    .RegWrite (RegWrite),
    .ALUop (ALUop)

);

//using Arjuns and Doms
PL_ALUDecode PL_ALUDecode (
    .funct3 (InstrD[14:12]), 
    //.opcode5 (InstrD[5]), 
    .funct75 (InstrD[30]),
    .ALUop (ALUop),

    .ALUCtrl (ALUCtrl)
);



PL_RegisterFile M4 (
    .clk(clk),
    .RegWrite(RegWriteW),
    .TRIGGER (TRIGGER),

    .AdInReg(RdW),

    .AdOutReg1(InstrD[19:15]),
    .AdOutReg2(InstrD[24:20]),

    .DInReg(DInReg),

    .DOutReg1(DOutReg1), //RD1D
    .DOutReg2(DOutReg2), //RD2D


);

PL_Extend PL_Extend (
    .IMMsrc (ImmSrc),
    .instr(InstrD),
    .ImmExt(IMM)
);


PCD PCDecode(

    .clk (clk),
    //.rst (rst),

    .flush (flushE),

    //control unit
    .RegWriteD (RegWrite),
    .ResultSrcD (ResultSrc),
    .MemWriteD (MemWrite),
    .opcodeD (InstrD[6:0]),

    .ALUCtrlD (ALUCtrl), 
    .ALUSrcD (ALUSrc),

    .opcodeE (opcodeE),
    //for datamemory
    .funct3D (InstrD[14:12]),

    //data
    .RD1D (DOutReg1),   
    .RD2D (DOutReg2),   
    .PCD (PCD),       
    .RdD (InstrD[11:7]),   
    .ImmExtD (IMM),
    .PCPlus4D (PCPlus4D),  
    .Rs1D (InstrD[19:15]),
    .Rs2D (InstrD[24:20]),

    
    
    
    .RegWriteE (RegWriteE),
    .ResultSrcE (ResultSrcE),
    .MemWriteE (MemWriteE),
    .ALUCtrlE (ALUCtrlE),
    .ALUSrcE (ALUSrcE),

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
PL_PCSrc_gate PL_PCSrc_gate (
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

PL_SrcB_mux PL_SrcB_mux ( //formerly MUX_ALUsrc
    .DOutReg2(WriteDataE),
    .IMM(IMM),
    .ALUsrc(ALUSrcE),

    .N2(SrcBE)
);

//adding immedeiate
PL_Add_PC_imm PL_Add_PC_imm (
    .PC(PCE),
    .IMM(ImmExtE),
    .PCaddIMM(PCaddIMM) //PCTargetE
);

//using Arjuns and Doms
PL_ALU PL_ALU (

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
    //.rst (rst),

    //ControlUnit
    .RegWriteE (RegWriteE),
    .ResultSrcE (ResultSrcE),
    .MemWriteE (MemWriteE),

    .ALUResultE (ALUResult),   
    .WriteDataE (WriteDataE),     
    .RdE (RdE),               
    .PCPlus4E (PCPlus4E),   
    .funct3E (funct3E),
    .ImmExtE (ImmExtE),

    .RegWriteM (RegWriteM),
    .ResultSrcM (ResultSrcM),
    .MemWriteM (MemWriteM),  

    .ALUResultM (ALUResultM),
    .WriteDataM (WriteDataM),
    .RdM (RdM),
    .PCPlus4M (PCPlus4M),
    .ImmExtM (ImmExtM),

    //for datamemory
    .funct3M (funct3M)

);

PL_DataMemory DataMemory (
    .clk(clk),
    .AdDM(ALUResultM[16:0]),
    .DMwrite(MemWriteM),
    .func3(funct3M),
    .DInDM(WriteDataM),

    .DOutDM(DOutDM)
);

PCM PCMemory(

    .clk (clk),
    //.rst (rst),

    .RegWriteM (RegWriteM),
    .ResultSrcM (ResultSrcM),
    .ReadDataM (DOutDM),     
    .ALUResultM (ALUResultM), 
    .RdM (RdM),               
    .PCPlus4M (PCPlus4M),     
    .ImmExtM (ImmExtM),
    
    .RegWriteW (RegWriteW),
    .ResultSrcW (ResultSrcW),
    .ReadDataW (ReadDataW),
    .ALUResultW (ALUResultW),
    .RdW (RdW),
    .PCPlus4W (PCPlus4W),
    .ImmExtW (ImmExtW)
);

PL_MUX_Resultsrc PL_MUX_Resultsrc (
    .DOutAlu(ALUResultM),
    .DOutDM(ReadDataW),
    .PCadd4(PCPlus4W),

    .PCaddIMM(PCaddIMM),

    .ResultSrc(ResultSrcW),
    .DInReg(DInReg)
);


endmodule

