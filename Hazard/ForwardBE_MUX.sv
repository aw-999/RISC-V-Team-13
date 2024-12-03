module forwardBE_mux #(
    parameter W = 32;
)(
    input logic [W-1:0] ResultW,
    input logic [W-1:0] RD2E,
    input logic [W-1:0] ALUResultM,
    input logic [1:0] ForwardBE,

    output logic [W-1:0] SrcBE
);

always_comb begin
    case(ForwardBE)
        2'b00: SrcBE = RD2E;
        2'b01: SrcBE = ResultW;
        2'b10: SrcBE = ALUResultM;
    default: SrcBE = RD2E;
    endcase
end 

endmodule
