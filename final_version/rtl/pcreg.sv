module pcreg #(parameter W = 32)(
    input logic clk,
    input logic stallFD,
    input logic [W-1: 0] pcnextF,

    output logic [W-1: 0] pcF
);

always_ff@(posedge clk)
    
    if (!stallFD) begin
        pcF <= pcnextF;
    end

endmodule
