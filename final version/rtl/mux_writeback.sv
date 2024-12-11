module mux_writeback #(parameter W = 32)(
    input logic [W-1:0] aluresultW,
    input logic [W-1:0] readdataW,
    input logic [W-1:0] pcplus4W,
    input logic [W-1:0] immextW,

    input logic [1:0] resultsrcW,
    output logic [W-1:0] resultW
);

always_comb 
    case (ResultSrc)
        2'b00: resultW = aluresultW;
        2'b01: resultW = readdataW;
        2'b10: resultW = pcplus4W;
        2'b11: resultW = immextW;
        default resultW = aluresultW;
    endcase
    
endmodule
