module MUX_PCsrc #(parameter W = 32)(
    input logic [W-1:0] PCadd4,
    input logic [W-1:0] PCaddIMM,
    input logic [W-1:0] DOutAlu,

    input logic [1:0] PCsrc,

    output logic [W-1:0] PCN
);

always_comb 
    case (PCsrc)
        2'b00: PCN = PCadd4; // common
        2'b01: PCN = PCaddIMM; // jal, auipc, branch
        2'b10: PCN = DOutAlu; // jalr
        2'b11: PCN = PCadd4; // spare
    endcase
    
endmodule
