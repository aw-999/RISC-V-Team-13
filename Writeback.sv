module Writeback #(
    parameter W = 32,
    parameter AW = 5
)(
    input logic [1:0] ResultSrcW,
    input logic [W-1:0] ALUResultW,
    input logic [W-1:0] ReadDataW,
    input logic [W-1:0] PCPlus4W,

    output logic [W-1:0] ResultW
);

always_comb begin
    case(ResultSrcW)
    2'b00: ResultW = ALUResultW;
    2'b01: ResultW = ReadDataW;
    2'b10: ResultW = PCPlus4W;
    2'b11: ResultW = ALUResultW;
    default: ResultW = ALUResultW;
endcase

endmodule
