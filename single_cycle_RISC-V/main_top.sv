module main #(
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [DATA_WIDTH-1:0] Result
);

    // Internal signals
    logic [DATA_WIDTH-1:0] PC, PCN, PCPlus4F, PCTargetE, ALUResultM;
    logic [DATA_WIDTH-1:0] instr, IMM, DOut1, DOut2, WriteDataM, ReadData, ResultW, SrcAE, SrcBE, ALUResult;
    logic [3:0] ALUCtrlE, ALUflag;
    logic [2:0] func3;
    logic [6:0] func7;
    logic PCSrcE, ResultSrc, MemWriteM, RegWriteW, flag, ALUsrc, IMMsrc;

    // Instruction Memory
    rom InstrMemory (
        .AddrIn (PC), 
        .DOut (instr)
    );

    // PC Increment by 4
    PCIncrementby4 PCIncrementby4 (
        .PC (PC), 
        .PCPlus4 (PCPlus4F)
    );

    // PC Source Mux
    mux_PCSrc mux_PCSrc (
        .PCTargetE (PCTargetE),
        .PCSrcE (PCSrcE), 
        .ALUResultM (ALUResultM),
        .PCPlus4F (PCPlus4F),
        .PCN (PCN) // Next PC
    );

    // Program Counter Register
    pcreg PCReg (
        .clk (clk),
        .rst (rst),
        .PCN (PCN), // PC next
        .PC (PC)    // Current PC
    );

    // Control Unit
    control ControlUnit (
        .instr (instr), 
        .flag (flag), 
        .RegWrite (RegWriteW), // Write enable for register file
        .RamWrite (MemWriteM), // Memory write enable
        .ALUop (ALUCtrlE), // ALU operation control
        .ALUsrc (ALUsrc), // ALU source
        .IMMsrc (IMMsrc), // Immediate source
        .PCsrc (PCSrcE), 
        .ResultSrc (ResultSrc)
    );

    // Immediate Sign Extend
    imm Sign_Extend ( 
        .IMMsrc (IMMsrc),
        .instr (instr[31:7]), 
        .out (IMM)
    );

    // Register File
    regfile R1 (
        .clk (clk),
        .write_addr (instr[11:7]), // Destination register
        .A1 (instr[19:15]),       // Source register 1
        .A2 (instr[24:20]),       // Source register 2
        .WD3 (ResultW),           // Write data
        .WE3 (RegWriteW),         // Write enable
        .DOut1 (DOut1),           // Read data 1
        .DOut2 (DOut2)            // Read data 2
    );

    // ALU
    alu ALU (
        .ALUctrl (ALUCtrlE),
        .ALUflag (ALUflag),
        .N1 (SrcAE), 
        .N2 (SrcBE), 
        .flag (flag), 
        .out (ALUResult)
    );

    // ALU Decode (part of Control Unit)
    aludecode ALUDecode (
        .func3 (instr[14:12]), 
        .op5 (instr[6:0]), 
        .func7 (instr[31:25]),
        .ALUop (ALUCtrlE)
    );

    // ALU Flag Decode (optional)
    aluflagdecode ALUFlagDecode (
        .func3 (instr[14:12]),
        .ALUop (ALUCtrlE),
        .ALUflag (ALUflag)
    );

    // Data Memory
    ram DataMemory (
        .clk (clk),
        .DIn (DOut2),            // Write data
        .Ad (ALUResultM),        // Address
        .RamWrite (MemWriteM),   // Write enable
        .func3 (instr[14:12]),   // Used for access width
        .DOut (ReadData)         // Read data
    );

    // Write-back Mux
    writeback_mux WritebackMux (
        .ALUResult (ALUResult),
        .ReadData (ReadData),
        .ResultSrc (ResultSrc), 
        .Result (ResultW)        // Write-back result
    );

endmodule