module Main #(WAD = 5, W = 32)(
    input logic clk,
    input logic rst,
    output logic [W-1:0] A0
);

// PC
logic [W-1:0] PC;
logic [W-1:0] PCN;
logic [W-1:0] PCadd4;
logic [W-1:0] PCaddIMM;

// data
logic [W-1:0] instr;
logic [W-1:0] DOutReg1;
logic [W-1:0] DOutReg2;
logic [W-1:0] IMM;
logic [W-1:0] N1;
logic [W-1:0] N2;
logic [W-1:0] DOutAlu;
logic [W-1:0] AdDM;
logic [W-1:0] DInDM;
logic [W-1:0] DOutDM;
logic [W-1:0] DInReg;

// mux selection
logic [1:0] PCsrc;
logic ALUsrc;
logic [1:0] ResultSrc;

// alu
logic [2:0] IMMctrl;
logic [1:0] ALUop;
logic [3:0] ALUctrl;
logic flag;

// write
logic DMwrite;
logic RegWrite;

Alu A1 (
    .ALUctrl(ALUctrl),
    .N1(DOutReg1),
    .N2(N2),
    .DOutAlu(DOutAlu),
    .flag(flag)
);

AluDecode C1 (
    .func3(instr[14:12]),
    .ALUop(ALUop),
    .func75(instr[30]),
    .op5(instr[5]),
    .ALUctrl(ALUctrl)
);

ControlUnit C2 (
    .Opcode(instr[6:0]),
    .flag(flag),
    .RegWrite(RegWrite),
    .DMwrite(DMwrite),
    .ALUop(ALUop),
    .ALUsrc(ALUsrc),
    .IMMctrl(IMMctrl),
    .PCsrc(PCsrc),
    .ResultSrc(ResultSrc)
);

DataMemory M1 (
    .clk(clk),
    .AdDM(DOutAlu),
    .DMwrite(DMwrite),
    .func3(instr[14:12]),
    .DInDM(DOutReg2),
    .DOutDM(DOutDM)
);

Extension E1 (
    .IMMctrl(IMMctrl),
    .instr(instr),
    .IMM(IMM)
);

InstructionMemory M2 (
    .PC(PC),
    .instr(instr)
);

MUX_ALUsrc S1 (
    .DOutReg2(DOutReg2),
    .IMM(IMM),
    .ALUsrc(ALUsrc),
    .N2(N2)
);

MUX_PCsrc S2 (
    .PCadd4(PCadd4),
    .PCaddIMM(PCaddIMM),
    .DOutAlu(DOutAlu),
    .PCsrc(PCsrc),
    .PCN(PCN)
);

MUX_Resultsrc S3 (
    .DOutAlu(DOutAlu),
    .DOutDM(DOutDM),
    .PCadd4(PCadd4),
    .PCaddIMM(PCaddIMM),
    .ResultSrc(ResultSrc),
    .DInReg(DInReg)
);

Add_pc_imm A2 (
    .PC(PC),
    .IMM(IMM),
    .PCaddIMM(PCaddIMM)
);

PcIncrement4 A3 (
    .PC(PC),
    .PCadd4(PCadd4)
);

PcRegister M3 (
    .clk(clk),
    .rst(rst),
    .PC(PC),
    .PCN(PCN)
);

RegisterFile M4 (
    .clk(clk),
    .RegWrite(RegWrite),
    .AdInReg(instr[11:7]),
    .AdOutReg1(instr[19:15]),
    .AdOutReg2(instr[24:20]),
    .DInReg(DInReg),
    .DOutReg1(DOutReg1),
    .DOutReg2(DOutReg2),
    .A0(A0)
);

endmodule


