
module  mux_pcsrc #(parameter W = 32)(
    input logic [W-1:0] pcplus4F,
    input logic [W-1:0] pctargetE,

    input logic pcsrcE,

    output logic [W-1:0] pcnextF
);

always_comb 
    case (pcsrcE)
        1'b0: pcnextF = pcplus4F; // common
        1'b1: pcnextF = pctargetE; // jal, auipc
        default pcnextF = pcplus4F;
    endcase
    
endmodule
