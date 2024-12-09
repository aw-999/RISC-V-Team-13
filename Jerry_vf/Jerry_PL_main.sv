module PL_Main #(WAD = 5, W = 32)(
    input logic clk,
    input logic rst,
    output logic [W-1:0] A0
);

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

ControlUnit ControlUnit (
    .Opcode(instrD[6:0]),
    
    .RegWrite(RegWrite),
    .DMwrite(DMwrite),
    .ALUop(ALUop),
    .ALUsrc(ALUsrc),
    .IMMctrl(IMMctrl),
    .ResultSrc(ResultSrc)
);

AluDecode AluDecode (
    .func3(instrD[14:12]),
    .ALUop(ALUop),
    .func75(instrD[30]),
    .op5(instrD[5]),

    .ALUctrl(ALUctrl)
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
    .MemWriteD (DMWrite),

    //need to implement these two
    .JumpD (Jump),  
    .BranchD (Branch), 

    .ALUCtrlD (ALUctrl), 
    .ALUSrcD (ALUsrc),
    .PCSrcD (PCsrc), 

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

PCSrc_Gate PCSrc_Gate (
    .flag (flag),
    .BranchE (BranchE),
    .JumpE (JumpE),

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

Alu Alu (
    .ALUctrl(ALUCtrlE),
    .N1(SrcAE),
    .N2(N2),

    .DOutAlu(DOutAlu),
    .flag(flag)
);

PCE PCExecute (
    .clk (clk),
    .rst (rst),

    //ControlUnit
    .RegWriteE (RegWriteE),
    .ResultSrcE (ResultSrcE),
    .MemWriteE (MemWriteE),

    .ALUResultE (DOutAlu),   
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
    //if we do this im assuming need to pipeline instr[14:12] two more times
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

