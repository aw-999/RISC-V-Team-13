module alu #(parameter W = 32)(
    input logic [3: 0] ALUctrl,
    input logic [2: 0] ALUflag, //outputs to flag
    input logic [W-1: 0] SrcA, //changed from N1 , N2
    input logic [W-1: 0] SrcB,
    output logic [W-1: 0] ALUresult,
    output logic flag,
    output logic nflag
);

always_comb
    case (ALUctrl)
        4'b0000: ALUresult = SrcA + SrcB; // add
        4'b0001: ALUresult = SrcA - SrcB; // sub
        4'b0010: ALUresult = SrcA & SrcB; // and
        4'b0011: ALUresult = SrcA | SrcB; // or
        4'b0100: ALUresult = SrcA ^ SrcB; // xor
        4'b0101: ALUresult = (SrcA < SrcB) ? 32'b1 : 32'b0; // set less than, slt
        4'b0110: ALUresult = SrcA << SrcB;  // sll
        4'b0111: ALUresult = SrcA >> SrcB;  // srl
        4'b1000: ALUresult = SrcA >> 1      // sra 
        4'b1001: ALUresult = ($SrcA < $SrcB)  // sltu missed flag

        default ALUresult = SrcA + SrcB;
    endcase

always_comb 
    case (ALUflag)
        3'b000: flag = (ALUresult == 0)? 1 : 0; // beq
        3'b001: flag = (ALUresult != 0)? 1 : 0; // bne
        3'b010: flag = 0;                       
        3'b011: flag = 1;
        3'b100: flag = (ALUresult < 0)? 1 : 0; // blt
        3'b101: flag = (ALUresult >= 0)? 1 : 0; // bge
        3'b110: flag = (ALUresult < 0)? 1 : 0; // bltu
        3'b111: flag = (ALUresult >= 0)? 1 : 0; // bgeu

        default flag = 0;
    endcase

endmodule


