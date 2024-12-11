module mux_srcbe #(
    parameter W = 32
)(
    input logic [W-1:0] resultW,
    input logic [W-1:0] RD2E,
    input logic [W-1:0] aluresultM,
    input logic [1:0] forwardbE,

    output logic [W-1:0] writedataE
);

always_comb begin
    case(forwardbE)
        2'b00: writedataE = RD2E;
        2'b01: writedataE = resultW;
        2'b10: writedataE = aluresultM;
    default: writedataE = RD2E;
    endcase
end 

endmodule
