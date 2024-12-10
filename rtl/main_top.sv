module main_top #(
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic rst,
    input logic trigger,
    output logic [DATA_WIDTH-1:0] Result,
    output logic [DATA_WIDTH-1:0] a0
    /*
    output logic [DATA_WIDTH-1:0] a1,
    output logic [DATA_WIDTH-1:0] a2,
    output logic [DATA_WIDTH-1:0] a3,
    output logic [DATA_WIDTH-1:0] a4,
    output logic [DATA_WIDTH-1:0] a5,
    output logic [DATA_WIDTH-1:0] a6,
    output logic [DATA_WIDTH-1:0] a7,

    output logic [DATA_WIDTH-1:0] s0,
    output logic [DATA_WIDTH-1:0] s1,
    output logic [DATA_WIDTH-1:0] s2,
    output logic [DATA_WIDTH-1:0] s3,
    output logic [DATA_WIDTH-1:0] s4,
    output logic [DATA_WIDTH-1:0] s5,
    output logic [DATA_WIDTH-1:0] s6,
    output logic [DATA_WIDTH-1:0] s7,
    output logic [DATA_WIDTH-1:0] s8,
    output logic [DATA_WIDTH-1:0] s9,
    output logic [DATA_WIDTH-1:0] s10,
    output logic [DATA_WIDTH-1:0] s11,

    output logic [DATA_WIDTH-1:0] t0,
    output logic [DATA_WIDTH-1:0] t1,
    output logic [DATA_WIDTH-1:0] t2,
    output logic [DATA_WIDTH-1:0] t3,
    output logic [DATA_WIDTH-1:0] t4,
    output logic [DATA_WIDTH-1:0] t5,
    output logic [DATA_WIDTH-1:0] t6    */
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
    logic MemWrite, ALUSrc, RegWrite;
    logic [1:0] PCSrc;
    logic [1:0] ResultSrc;
    logic [2:0] IMMsrc;
    logic [2:0] ALUop;
    logic [3:0] ALUCtrl;
    
    //logic ZeroFlag, NegativeFlag, UnsignedLess; 
    logic branch;




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
        .PCPlus4 (PCPlus4),

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

        .opcode (instr[6:0]),
        /*
        .ZeroFlag (ZeroFlag),
        .NegativeFlag (NegativeFlag),
        .UnsignedLess (UnsignedLess),
        */
        .branch(branch),
        //.funct3(instr[14:12]),
        .PCSrc (PCSrc),
        .ResultSrc (ResultSrc),
        .MemWrite (MemWrite),
        .ALUSrc (ALUSrc),
        .ImmSrc (IMMsrc),
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
        .TRIGGER (trigger),
        .AdIn (instr[11:7]), // Destination register - A3
        .AdOut1 (instr[19:15]),       // Source register 1
        .AdOut2 (instr[24:20]),       // Source register 2
        .DIn (Result),           // Write data
        .RegWrite (RegWrite),         // Write enable
        .RD1 (RD1),           // Read data 1
        .RD2 (RD2),           // Read data 2

        .a0 (a0)
        /*
        .a1 (a1),
        .a2 (a2),
        .a3 (a3),
        .a4 (a4),
        .a5 (a5),
        .a6 (a6),
        .a7 (a7),

        .s0 (s0),
        .s1 (s1),
        .s2 (s2),
        .s3 (s3),
        .s4 (s4),
        .s5 (s5),
        .s6 (s6),
        .s7 (s7),
        .s8 (s8),
        .s9 (s9),
        .s10 (s10),
        .s11 (s11),

        .t0 (t0),
        .t1 (t1),
        .t2 (t2),
        .t3 (t3),
        .t4 (t4),
        .t5 (t5),
        .t6 (t6)
        */

    );

    // ALU
    ALU ALU (

        .ALUCtrl (ALUCtrl),
        .SrcA (RD1), 
        .SrcB (SrcB), 
        .branch(branch),
        /*
        .ZeroFlag (ZeroFlag),
        .NegativeFlag (NegativeFlag), 
        .UnsignedLess (UnsignedLess),
        */

        .ALUResult (ALUResult)
    );

    // ALU Decode (part of Control Unit)
    ALUDecode ALUDecode (
        .funct3 (instr[14:12]), 
        //.opcode5 (instr[5]), 
        .funct75 (instr[30]),
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
