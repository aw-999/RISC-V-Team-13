module PCMemory #(
    parameter WIDTH = 32
)(

    input logic clk,

    //Control
    input logic RegWriteM,
    input logic [1:0] ResultSrcM,

    output logic RegWriteW,
    output logic [1:0] ResultSrcW,

    //Data
    input logic [WIDTH - 1:0] ReadDataM,
    input logic [WIDTH - 1:0] ALUResultM,
    input logic [4:0] RdM,
    input logic [WIDTH - 1:0] PCPlus4M,

    output logic [WIDTH - 1:0] ReadDataW,
    output logic [WIDTH - 1:0] ALuResultW,
    output logic [4:0] RdW,
    output logic [WIDTH - 1:0] PCPlus4W

);

always_ff @(posedge clk) begin

    //control
    RegWriteW <= RegWriteM;
    ResultSrcW <= ResultSrcM;

    //data
    ReadDataW <= ReadDataM;
    ALuResultW<= ALuResultM;
    RdW <= RdM;
    PCPlus4W <= PCPlus4W;
end

endmodule
