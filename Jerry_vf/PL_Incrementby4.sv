module PL_Incrementby4 #(parameter W = 32)(
    input logic [W-1:0] PC,
    output logic [W-1:0] PCadd4
);

assign PCadd4 = PC + 4;

endmodule
