module WriteBack_mux #(
    parameter W = 32
)(
    input logic [W-1:0] ReadData,
    input logic [W-1:0] ALUResult,
    input logic ResultSrc,

    output logic [W-1:0] Result
);

always_comb begin
    case(ResultSrc)
        1'b0: Result = ALUResult;
        1'b1: Result = ReadData;
    endcase
end

endmodule
