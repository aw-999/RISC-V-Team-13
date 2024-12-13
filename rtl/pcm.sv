module pcm #(
    parameter WIDTH = 32
)(

    input logic clk,

    //Control
    input logic regwriteM,
    input logic [1:0] resultsrcM,

    output logic regwriteW,
    output logic [1:0] resultsrcW,

    //Data
    input logic [WIDTH - 1:0] readdataM,
    input logic [WIDTH - 1:0] aluresultM,
    input logic [4:0] rdM,
    input logic [WIDTH - 1:0] pcplus4M,
    
    output logic [WIDTH - 1:0] readdataW,
    output logic [WIDTH - 1:0] aluresultW,
    output logic [4:0] rdW,
    output logic [WIDTH - 1:0] pcplus4W

);

always_ff @(posedge clk) begin

    //control
    regwriteW <= regwriteM;
    resultsrcW <= resultsrcM;

    //data
    readdataW <= readdataM;
    aluresultW <= aluresultM;
    rdW <= rdM;
    pcplus4W <= pcplus4M;
    //immextW <= immextM;
    
end

endmodule
