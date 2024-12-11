module mux_jalr #(parameter W = 32)(
    input logic [W-1:0] pcE,
    input logic [W-1:0] RD1E,
    input logic jalrE,

    output logic [W-1:0] jalrmuxoutE
);

always_comb begin
    if(jalrE) jalrmuxoutE = RD1E;
    else jalrmuxoutE = pcE;
end

endmodule
