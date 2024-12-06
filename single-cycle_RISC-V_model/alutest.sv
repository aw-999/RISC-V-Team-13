module alutest #( parameter W = 32)(
    input logic [3:0] ALUctrl,
    input logic [W - 1: 0] SrcA,
    input logic [W-1: 0] SrcB,
    output logic [W-1: 0] ALUresult,
    output logic zero,
);

always_comb begin
    case (ALUctrl)
        4'b0000: ALUresult = SrcA + SrcB //add
        4'b0001: ALUresult = SrcA - SrcB //sub
        4'b0010: ALUresult = SrcA & SrcB //and
        4'b0011: ALUresult = SrcA | SrcB //or
        4'b00
    endcase
end 
