module pcreg #(parameter W = 32)(
    input logic clk,
    input logic rst,
    input logic stallF,
    input logic [W-1: 0] pcnextF,

    output logic [W-1: 0] pcF
);

always_ff@(posedge clk)
    if (rst) pcF <= {W{1'b0}};
    else if (stallF == 0) begin
        pcF <= pcnextF;
    end

endmodule
