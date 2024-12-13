module pcincrementby4 #(parameter W = 32)(
    input logic [W-1:0] pcF,
    output logic [W-1:0] pcplus4F
);

assign pcplus4F = pcF + 4;

endmodule
