module mux_srcae #(
    parameter W = 32
)(
    input logic [W-1:0] resultW,
    input logic [W-1:0] RD1E,
    input logic [W-1:0] aluresultM,
    input logic [1:0] forwardaE,

    output logic [W-1:0] srcaE
);

always_comb begin
    case(forwardaE)
        2'b00: srcaE = RD1E;
        2'b01: srcaE = resultW;
        2'b10: srcaE = aluresultM;
    default: srcaE = RD1E;
    endcase
end 

endmodule


