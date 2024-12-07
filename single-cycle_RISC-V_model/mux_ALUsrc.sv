module mux_ALUsrc #(parameter W = 32)(
    input logic [W-1:0] DOutReg2,
    input logic [W-1:0] IMM,
    input logic ALUsrc,
    output logic [W-1:0] N2
);

always_comb begin
    if (ALUsrc) N2 = IMM;
    else N2 = DOutReg2;
end
    
endmodule
