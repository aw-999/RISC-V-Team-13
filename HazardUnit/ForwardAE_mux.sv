module ForwardAE_mux #(
    parameter W = 32;
)(
    input logic [W-1:0] ResultW,
    input logic [W-1:0] RD1E,
    input logic [W-1:0] ALUResultM,
    input logic [1:0] ForwardAE,

    output logic [W-1:0] SrcAE
);

always_comb begin
    case(ForwardBE)
        2'b00: SrcAE = RD1E;
        2'b01: SrcAE = ResultW;
        2'b10: SrcAE = ALUResultM;
    default: SrcAE = RD1E;
    endcase
end 

endmodule