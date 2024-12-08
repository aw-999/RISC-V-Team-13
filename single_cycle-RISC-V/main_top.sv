module Main_Top #(
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [DATA_WIDTH-1:0] Result
);

    // Internal signals
    logic [DATA_WIDTH-1:0] PC;
    logic [DATA_WIDTH-1:0] PCN;        // Next PC
    logic [DATA_WIDTH-1:0] PCPlus4;   // PC + 4
    logic [DATA_WIDTH-1:0] PCTarget;  // Branch Target
    logic [DATA_WIDTH-1:0] instr;     // Current instruction
    logic [DATA_WIDTH-1:0] ImmExt;    // Extended immediate
    logic [DATA_WIDTH-1:0] RD1, RD2;  // Register read data
    logic [DATA_WIDTH-1:0] SrcB;      // ALU operand B
    logic [DATA_WIDTH-1:0] ALUResult; // ALU result
    logic [DATA_WIDTH-1:0] ReadData;  // Memory read data
    logic [DATA_WIDTH-1:0] DIn;       // Data to write to memory

    // Control signals
    logic PCSrc, ResultSrc, MemWrite, ALUSrc, RegWrite;
    logic [2:0] ImmSrc;
    logic [1:0] ALUop;
    logic [3:0] ALUCtrl;
    logic ZeroFlag, NegativeFlag, UnsignedLess;

    // Instruction Memory
    InstructionMemory InstructionMemory(
        .AddrIn (PC), 
        .instr (instr)
    );

    // PC Increment by 4
    Incrementby4 Incrementby4 (
        .PC (PC), 
        .PCPlus4 (PCPlus4)
    );

    // PC Source Mux
    PCSrc_mux PCSrc_mux(
        .PCTarget (PCTarget),
        .PCSrc (PCSrc), 
        .ALUResult (ALUResult),
        .PCPlus4F (PCPlus4),

        .PCN (PCN) // Next PC
    );

    // Program Counter Register
    PCReg PCReg (
        .clk (clk),
        .rst (rst),
        .PCN (PCN), // PC next

        .PC (PC)    // Current PC
    );

    Branch Branch (
        .PC (PC),
        .ImmExt (ImmExt),
        .PCTarget (PCTarget)
    );

    SrcB_mux SrcB_mux (
        .ALUSrc (ALUSrc),
        .RD2 (RD2),
        .ImmExt (ImmExt),

        .SrcB (SrcB)
    );

    // Control Unit
    ControlUnit ControlUnit (

        .opcode (opcode),
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
        .AdIn (instr[11:7]), // Destination register - A3
        .AdOut1 (instr[19:15]),       // Source register 1
        .AdOut2 (instr[24:20]),       // Source register 2
        .DIn (DIn),           // Write data
        .RegWrite (RegWrite),         // Write enable
        .RD1 (RD1),           // Read data 1
        .RD2 (RD2)            // Read data 2
    );

    // ALU
    alu ALU (

        .ALUCtrl (ALUCtrl),
        .SrcA (RD1), 
        .SrcB (SrcB), 

        .ZeroFlag (ZeroFlag),
        .NegativeFlag (NegativeFlag), 
        .UnsignedLess (UnsignedLess),
        .ALUResult (ALUResult)
    );

    // ALU Decode (part of Control Unit)
    aludecode ALUDecode (
        .funct3 (instr[14:12]), 
        .opcode5 (instr[5]), 
        .funct75 (instr[31:25]),
        .ALUop (ALUop),

        .ALUCtrl (ALUCtrl)
    );


    // Data Memory formerly ram
    DataMemory DataMemory (
        .clk (clk),
        .WriteData (DIn),            // Write data
        .ALUResult (ALUResult),        // Address
        .MemWrite (MemWrite),   // Write enable
        .funct3 (instr[14:12]),   // Used for access width

        .ReadData (ReadData)         // Read data
    );

    // Write-back Mux
    WriteBack_mux WriteBack_mux (
        .ALUResult (ALUResult),
        .ReadData (ReadData),
        .ResultSrc (ResultSrc), 
        .Result (Result)        // Write-back result
    );

endmodule
