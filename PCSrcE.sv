module PCSrcE_gate (
    input logic JumpE,
    input logic BranchE,
    input logic ZeroE,

    output logic PCSrcE
);

always_comb begin
    Anded = BranchE & ZeroE;
    PCSrcE = Anded | JumpE;
end

endmodule
