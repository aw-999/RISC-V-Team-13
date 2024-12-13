module pcreg #(parameter W = 32)(
    input logic clk,
    input logic rst,
    input logic stallFD,
    input logic [W-1: 0] pcnextF,

    output logic [W-1: 0] pcF
);

always_ff@(posedge clk) begin

    if (rst) begin
        pcF <= 32'h0;
    end
    if (!stallFD) begin
        pcF <= pcnextF;
    end
end

endmodule
