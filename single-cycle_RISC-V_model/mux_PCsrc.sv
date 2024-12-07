module mux_PCsrc #(parameter W = 32)(
    input logic [W-1:0] PCadd4,
    input logic [W-1:0] PCaddIMM,
    input logic [W-1:0] DOutAlu,

    input logic [1:0] PCsrc,

    output logic [W-1:0] PCN
);

always_comb 
    case (PCsrc)
        2'b00: PCN = PCadd4; // common
        2'b01: PCN = PCaddIMM; // jal
        2'b10: PCN = DOutAlu; // jalr, auipc
        2'b11: PCN = PCaddIMM; // branch

        default PCN = PCadd4;
    endcase
    
endmodule
