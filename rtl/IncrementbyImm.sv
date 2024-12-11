module IncrementbyImm #(
    parameter W = 32
)(
    input logic [W-1:0] PC,
    input logic [W-1:0] ImmExt,

    output logic [W-1:0] PCTarget
);

always_comb begin
    PCTarget = PC + ImmExt;
end 

endmodule
