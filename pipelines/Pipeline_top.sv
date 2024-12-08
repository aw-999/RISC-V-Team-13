module pipeline top #(
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

InstructionMemory InstructionMemory(
    .AddrIn (PC), 
    .instr (instr)
);

//pcincrementby4
//
Incrementby4 Incrementby4 (
    .PC (PC), 
    .PCPlus4 (PCPlus4F)
);

 // PC Source Mux
PCSrc_mux PCSrc_mux(
    .PCTarget (PCTargetE),
    .PCSrc (PCSrcE), 
    .ALUResult (ALUResultM),
    .PCPlus4 (PCPlus4F),

    .PCN (PCN) // Next PC
);

// Program Counter Register
PCReg PCReg (
    .clk (clk),
    .rst (rst),
    .PCN (PCN), // PC next

    .PC (PC)    // Current PC
);

PCF PCFetch(
    .clk (clk),
    .rst (rst),
    .flush (flush),
    .StallF (StallF),

    .InstrF (instr), 
    .PCF (PC), 
    .PCPlus4F (PCPlus4F), 

    .InstrD (InstrD),
    .PCD (PCD),
    .PCPlus4D (PCPlus4D)
);

// Control Unit
PL_ControlUnit PL_ControlUnit (

    .opcode (instr[6:0]),
    .ZeroFlag (ZeroFlag),
    .NegativeFlag (NegativeFlag),
    .UnsignedLess (UnsignedLess),

    .PCSrc (PCSrc),
    .ResultSrc (ResultSrc),
    .MemWrite (MemWrite),
    .ALUSrc (ALUSrc),
    .ImmSrc (ImmSrc),
    .RegWrite (RegWrite),
    .ALUop (ALUop)

);


// ALU Decode (part of Control Unit)
ALUDecode ALUDecode (
    .funct3 (instr[14:12]), 
    .opcode5 (instr[5]), 
    .funct75 (instr[31:25]),
    .ALUop (ALUop),

    .ALUCtrl (ALUCtrl)
);

// Immediate Sign Extend
Extend Extend ( 
    .IMMsrc (IMMsrc),
    .instr (instr), 
    .ImmExt (ImmExt)
);

// Register File
RegisterFile RegisterFile (

    .clk (clk),
    .TRIGGER (TRIGGER),
    .AdIn (RdW), // Destination register - A3
    .AdOut1 (instr[19:15]),       // Source register 1
    .AdOut2 (instr[24:20]),       // Source register 2
    .DIn (ResultW),           // Write data
    .RegWrite (RegWriteW),         // Write enable
    .RD1 (RD1),           // RD1D
    .RD2 (RD2),           // RD2D
    .A0 (A0)
);

PCD PCDecode(
    .clk (clk),
    .rst (rst),
    
    .RegWriteD (RegWrite),
    .ResultSrcD (ResultSrc),
    .MemWriteD (MemWrite),
    .JumpD (Jump),  
    .BranchD (Branch), 
    .ALUCtrlD (ALUCtrl), 
    .ALUSrcD (ALUSrc),
    .PCSrcD (PCSrc), 

    .opcodeD (instr[6:0]),
    .funct3D (instr[14:12]),

    .RD1D (RD1),   
    .RD2D (RD2),   
    .PCD (PC),       
    .RdD (instr[11:7]),   
    .ImmExtD (ImmExt),
    .PCPlus4D (PCPlus4F),  
    .Rs1D (instr[19:15]),
    .Rs2D (instr[24:20]),
    .stallD (stallD),
    
    .RegWriteE (RegWriteE),
    .ResultSrcE (ResultSrcE),
    .MemWriteE (MemWriteE),
    .JumpE (JumpE), 
    .BranchE (BranchE),
    .ALUCtrlE (ALUCtrlE),
    .ALUSrcE (ALUSrcE),
    .PCSrcE (PCSrcE), 

    .opcodeE (opcodeE),
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

HazardUnit HazardUnit (

    .branchD (branchD), //need to fix
    .flag (ZeroE) //need to fix
    .flush (PCsrc[0]) //need to fix

    .RdM (RdM),
    .RdW (RdM),
    .RegWriteW (RegWriteW),
    .RegWriteM (RegWriteM),
    .Rs1E (Rs1E),
    .Rs2E (Rs1E),

    .ForwardAE (ForwardAE),
    .ForwardBE (ForwardAE),
    .stallF (stallF),
    .stallD (stallD)
    

);
//hazard mux for SrcAE
ForwardAE_mux ForwardAE_mux (
    .ResultW (ResultW),
    .RD1E (RD1E),
    .ALUResultM (ALUResultM),
    .ForwardAE (ForwardAE),

    .SrcAE (SrcAE)
);
//hazard mux for SrcBE
ForwardBE_mux ForwardBE_mux (
    .ResultW (ResultW),
    .RD2E (RD2E),
    .ALUResultM (ALUResultM),
    .ForwardBE (ForwardBE),

    .WriteDataE (WriteDataE)
);

SrcB_mux SrcB_mux (
    .ALUSrc (ALUSrcE),
    .RD2 (WriteDataE),
    .ImmExt (ImmExtE),

    .SrcB (SrcBE)
);

Branch Branch (
    .PC (PCE),
    .ImmExt (ImmExtE),

    .PCTarget (PCTargetE)
);

// ALU
ALU ALU (

    .ALUCtrl (ALUCtrlE),
    .SrcA (SrcAE), 
    .SrcB (SrcBE), 

    .ZeroFlag (ZeroFlag),
    .NegativeFlag (NegativeFlag), 
    .UnsignedLess (UnsignedLess),
    .ALUResult (ALUResult)
);

PCSrc_gate PCSrc_gate (

    .ZeroFlag (ZeroFlag),
    .NegativeFlag (NegativeFlag),
    .UnsignedLess (UnsignedLess),

    .opcode (opcodeE),
    .funct3 (funct3E),

    .PCSrc (PCSrc)
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





// Data Memory formerly ram
DataMemory DataMemory (
    .clk (clk),
    .WriteData (WriteDataM),            // Write data
    .ALUResult (ALUResultM),        // Address
    .MemWrite (MemWriteM),   // Write enable
    .funct3 (instr[14:12]),   // Used for access width

    .ReadData (ReadData)         // Read data
);

PCM PCMemory(

    .clk (clk),
    .rst (rst),

    .RegWriteM (RegWriteM),
    .ResultSrcM (ResultSrcM),
    .ReadDataM (ReadData),     
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
PL_WriteBack mux4WriteBack (

    .ResultSrcW(ResultSrcW),       
    .ALUResultW(ALUResultW),       
    .ReadDataW(ReadDataW),        
    .PCPlus4W(PCPlus4W),       

    .ResultW(ResultW)
);

endmodule
