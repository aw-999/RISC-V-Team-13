module pce #(
    parameter WIDTH = 32
)(

    input logic clk,
    // input logic rst,


    //Control
    input logic regwriteE,
    input logic [1:0] resultsrcE,
    input logic memwriteE,
    input logic [WIDTH-1:0] immextE,
/
    output logic regwriteM,
    output logic [1:0] resultsrcM,
    output logic memwriteM,
    output logic [WIDTH-1:0] immextM,


    //Data

    input logic [WIDTH - 1:0] aluresultE,
    input logic [WIDTH - 1:0] writedataE,
    input logic [4:0] rdE,
    input logic [WIDTH - 1:0] pcplus4E,
    input logic [2:0] funct3E,

    output logic [WIDTH - 1:0] aluresultM,
    output logic [WIDTH - 1:0] writedataM,
    output logic [4:0] rdM,
    output logic [WIDTH - 1:0] pcplus4M,
    output logic [2:0] funct3M

);

always_ff @(posedge clk) begin
    //Control
    regwriteM <= regwriteE;
    resultsrcM <= resultsrcE;
    memwriteM <= memwriteE;
    immextM <= immextE;

    //Data
    aluresultM <= aluresultE;
    writedataM <= writedataE;
    rdM <= rdE;
    pcplus4M <= pcplus4E;
    funct3M <= funct3E;
    
end

endmodule
