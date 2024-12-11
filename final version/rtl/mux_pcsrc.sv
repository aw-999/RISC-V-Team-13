
module  mux_pcsrc #(parameter W = 32)(
    input logic [W-1:0] pcplus4F,
    input logic [W-1:0] pctargetE,
    input logic [W-1:0] aluresultW,

    input logic [1:0] pcsrcE,

    output logic [W-1:0] pcnextF
);

always_comb 
    case (pcsrcE)
        2'b00: pcnextF = pcplus4F; // common
        2'b01: pcnextF = pctargetE; // jal, auipc
        2'b10: pcnextF = aluresultW; // jalr
        2'b11: pcnextF = pctargetE; // branch

        default pcnextF = pcplus4F;
    endcase
    
endmodule
