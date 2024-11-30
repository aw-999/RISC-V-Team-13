module PCDecode #(
    parameter WIDTH = 32

)(

    input logic clk,

    //Control
    input logic RegWriteD,
    input logic [1:0] ResultSrcD,
    input logic MemWriteD,
    input logic JumpD,
    input logic BranchD,
    input logic [2:0] ALUCtrlD,
    input logic ALUSrcD,

    output logic RegWriteE,
    output logic [1:0] ResultSrcE,
    output logic MemWriteE,
    output logic JumpE,
    output logic BranchE,
    output logic [2:0] ALUCtrlE,
    output logic ALUSrcE,


    //DATA
    input logic [WIDTH - 1:0] RD1D,
    input logic [WIDTH - 1:0] RD2D,
    input logic [WIDTH - 1:0] PCD,
    input logic [4:0] RdD,
    input logic [WIDTH - 1:0] ImmExtD,
    input logic [WIDTH - 1:0] PCPlus4D,

    output logic [WIDTH - 1:0] RD1E,
    output logic [WIDTH - 1:0] RD2E,
    output logic [WIDTH - 1:0] PCE,
    output logic [4:0] RdE,
    output logic [WIDTH - 1:0] ImmExtE,
    output logic [WIDTH - 1:0] PCPlus4E

);

always_ff @(posedge clk) begin

    //control
    RegWriteE <= RegWriteD;
    ResultSrcE <= ResulSrcD;
    MemWriteE <= MemWriteD;
    JumpE <= JumpD;
    BranchE <= BranchD;
    ALUCtrlE <= ALUCtrlD;
    ALUSrcE <= ALUSrcD;

    //data

    RD1E <= RD1D;
    RD2E <= RD2D;
    PCE <= PCD;
    RdE <= RdD;
    ImmExtE <= ImmExtD;
    PCPlus4E <= PCPlus4D;
end

endmodule
