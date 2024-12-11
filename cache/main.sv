module main #(WA = 5, WD = 32)(
    input logic clk,
    input logic rst,
    input logic trigger_in, //added logic to control Vbuddy flag
    output logic [WD-1:0] A0
);

logic [WD-1:0] instr;
logic [WD-1:0] IMMop;

logic [WA-1:0] AdIn;
logic [WA-1:0] AdOut1;
logic [WA-1:0] AdOut2;
logic [2:0] func3;

logic ALUsrc;
logic [1:0] ALUop;
logic RamWrite;
logic RamRead; //Valid bit for Data mem ---
logic RegWrite;
logic [2:0] IMMsrc;
logic [1:0] ResultSrc;
logic [1:0] PCsrc;

logic [WD-1:0] PC;
logic [WD-1:0] DOutAlu;

logic flag;

assign AdIn = instr[WD-21:WD-25];
assign AdOut1 = instr[WD-13:WD-17];
assign AdOut2 = instr[WD-8:WD-12];

datapath1 D1(
    .clk(clk),

    .instr(instr),

    .trigger(trigger_in),
    .AdIn(AdIn),
    .AdOut1(AdOut1),
    .AdOut2(AdOut2),
    .ALUsrc(ALUsrc),
    
    .ALUop(ALUop),
    .RamWrite(RamWrite),
    .RamRead(RamRead),
    .RegWrite(RegWrite),
    .IMMsrc(IMMsrc),
    .ResultSrc(ResultSrc),

    .PC(PC),

    .IMM(IMMop),
    .flag(flag),
    .A0(A0),
    .DOutAlu(DOutAlu)
);

control C1(
    .instr(instr),
    .flag(flag),

    .RegWrite(RegWrite),
    .RamWrite(RamWrite),
    .RamRead(RamRead),
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
    .IMMop(IMMop),

    .instr(instr),
    .PC(PC),
    .DOutAlu(DOutAlu)
);

endmodule


