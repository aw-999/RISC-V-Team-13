module pce #(
    parameter WIDTH = 32
)(

    input logic clk,


    //Control
    input logic regwriteE,
    input logic [1:0] resultsrcE,
    input logic memwriteE,
    input logic memreadE,
    input logic [2:0] memctrlE,

    output logic regwriteM,
    output logic [1:0] resultsrcM,
    output logic memwriteM,
    output logic memreadM,
    output logic [2:0] memctrlM,


    //Data

    input logic [WIDTH - 1:0] aluresultE,
    input logic [WIDTH - 1:0] writedataE,
    input logic [4:0] rdE,
    input logic [WIDTH - 1:0] pcplus4E,

    output logic [WIDTH - 1:0] aluresultM,
    output logic [WIDTH - 1:0] writedataM,
    output logic [4:0] rdM,
    output logic [WIDTH - 1:0] pcplus4M

);

always_ff @(posedge clk) begin
    //Control
    regwriteM <= regwriteE;
    resultsrcM <= resultsrcE;
    memwriteM <= memwriteE;
    memctrlM <= memctrlE;
    memreadM <= memreadE;

    //Data
    aluresultM <= aluresultE;
    writedataM <= writedataE;
    rdM <= rdE;
    pcplus4M <= pcplus4E;
    
end

endmodule
