module add_pc_imm #(parameter W = 32)(
    input logic [W-1:0] PC,
    input logic [W-1:0] IMM,
    output logic [W-1:0] PCaddIMM
);

assign PCaddIMM = PC + IMM;

endmodule
