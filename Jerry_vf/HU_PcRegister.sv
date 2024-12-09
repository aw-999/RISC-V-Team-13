module PcRegister #(parameter W = 32)(
    input logic clk,
    input logic rst,
    input logic stallF,
    input logic [W-1: 0] PCN,

    output logic [W-1: 0] PC
);

always_ff@(posedge clk)
    if (rst) PC <= {W{1'b0}};
    else if (stallF == 0) begin
        PC <= PCN;
    end

endmodule
