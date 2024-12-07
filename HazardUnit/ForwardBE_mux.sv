module ForwardBE_mux #(
    parameter W = 32;
)(
    input logic [W-1:0] ResultW,
    input logic [W-1:0] RD2E,
    input logic [W-1:0] ALUResultM,
    input logic [1:0] ForwardBE,

    output logic [W-1:0] WriteDataE
);

always_comb begin
    case(ForwardBE)
        2'b00: WriteDataE = RD2E;
        2'b01: WriteDataE = ResultW;
        2'b10: WriteDataE = ALUResultM;
    default: WriteDataE = RD2E;
    endcase
end 

endmodule