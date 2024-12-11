/*
module WriteBack_mux #(
    parameter W = 32
)(
    input logic [W-1:0] ReadData,
    input logic [W-1:0] ALUResult,
    input logic [1:0] ResultSrc,

    output logic [W-1:0] Result
);

always_comb begin
    case(ResultSrc)
        1'b0: Result = ALUResult;
        1'b1: Result = ReadData;
        default: Result = ALUResult;
    endcase
end

endmodule
*/

module WriteBack_mux #(parameter W = 32)(
    input logic [W-1:0] ALUResult,
    input logic [W-1:0] ReadData,
    input logic [W-1:0] PCadd4,   //jal
    input logic [W-1:0] PCaddIMM, //jalr

    input logic [1:0] ResultSrc,
    
    output logic [W-1:0] Result
);

always_comb 
    case (ResultSrc)
        2'b00: Result = ALUResult;
        2'b01: Result = ReadData;
        2'b10: Result = PCadd4;
        2'b11: Result = PCaddIMM;
        default Result = ALUResult;
    endcase
    
endmodule

