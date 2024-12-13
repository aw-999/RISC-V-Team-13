module gate_pcsrc (
    input logic flagE,
    input logic branchE,
    input logic jumpE,

    output logic pcsrcE
);

    logic anded;

always_comb begin
    
    anded = flagE && branchE;
    pcsrcE = anded || jumpE;

end

endmodule
