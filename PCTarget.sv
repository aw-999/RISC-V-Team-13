module PCTarget #(
    parameter W = 32
)(
    input logic [W-1:0] PCE,
    input logic [W-1:0] ImmExtE,

    output logic [W-1:0] PCTargetE
);

always_comb begin
    PCTargetE = PCE + ImmExtE;
end 

endmodule
