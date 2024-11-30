module PCExecute #(
    parameter WIDTH = 32
)(

    input logic clk,

    //Control
    input logic RegWriteE,
    input logic [1:0] ResultSrcE,
    input logic MemWriteE,

    output logic RegWriteM,
    output logic [1:0] ResultSrcM,
    output logic MemWriteM,


    //Data

    input logic [WIDTH - 1:0] ALUResultE,
    input logic [WIDTH - 1:0] WriteDataE,
    input logic 4:0] RdE,
    input logic [WIDTH - 1:0] PCPlus4E,

    output logic [WIDTH - 1:0] ALUResultM,
    output logic [WIDTH - 1:0] WriteDataM,
    output logic [4:0] RdM,
    output logic [WIDTH - 1:0] PCPlus4M
);

always_ff @(posedge clk) begin

    //Control
    RegWriteM <= RegWriteE;
    ResultSrcM <= ResultSrcE;
    MemWriteM <= MemWriteE;

    //Data
    ALUResultM <= ALUResultE;
    WriteDataM <= WriteDataE;
    RdM <= RdM;
    PCPlus4M <= PCPlus4E;
end

endmodule
