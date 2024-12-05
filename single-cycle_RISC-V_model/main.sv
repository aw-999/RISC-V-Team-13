module main #(WA = 5, WD = 32)(
    input logic clk,
    input logic rst,
    output logic [WD-1:0] A0
);

// data transfer
logic [WD-1:0] instr;
logic [WD-1:0] IMM;
logic [WD-1:0] PC;
logic [WD-1:0] DOutAlu;

// control signals
logic ALUsrc;
logic [1:0] ALUop;
logic RamWrite;
logic RegWrite;
logic [2:0] IMMsrc;
logic [1:0] ResultSrc;
logic [1:0] PCsrc;

logic flag;


datapath1 D1(
    .clk(clk),

    // input data
    .PC(PC),
    .instr(instr),

    // input control signals
    .ALUsrc(ALUsrc),
    .ALUop(ALUop),
    .RamWrite(RamWrite),
    .RegWrite(RegWrite),
    .IMMsrc(IMMsrc),
    .ResultSrc(ResultSrc),

    // output
    .IMM(IMM),
    .flag(flag),
    .A0(A0),
    .DOutAlu(DOutAlu)
);

control C1(
    .instr(instr),
    .flag(flag),

    .RegWrite(RegWrite),
    .RamWrite(RamWrite),
    .ALUop(ALUop),
    .ALUsrc(ALUsrc),
    .IMMsrc(IMMsrc),
    .PCsrc(PCsrc),
    .ResultSrc(ResultSrc)
);

datapath2 D2(
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc),
    .IMM(IMM),

    .instr(instr),
    .PC(PC),
    .DOutAlu(DOutAlu)
);

endmodule


