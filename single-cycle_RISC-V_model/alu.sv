module alu #(parameter W = 32)(
    input logic [2: 0] ALUctrl,
    input logic [2: 0] ALUflag,
    input logic [W-1: 0] N1,
    input logic [W-1: 0] N2,
    output logic [W-1: 0] out,
    output logic flag
);

always_comb
    case (ALUctrl)
        3'b000: out = N1 + N2; // add
        3'b001: out = N1 - N2; // sub
        3'b010: out = N1 & N2; // and
        3'b011: out = N1 | N2; // or
        3'b100: out = N1 ^ N2; // xor
        3'b101: out = (N1 < N2) ? 32'b1 : 32'b0; // set less than, slt
        3'b110: out = N1 << N2;  // sll
        3'b111: out = N1 >> N2;  // srl

        default out = N1 + N2;
    endcase

always_comb 
    case (ALUflag)
        3'b000: flag = ((out == 0)? 1 : 0); // beq
        3'b001: flag = ((out != 0)? 1 : 0); // bne
        3'b010: flag = 0;
        3'b011: flag = 1;
        3'b100: flag = ((out < 0)? 1 : 0); // blt
        3'b101: flag = (out >= 0)? 1 : 0; // bge
        3'b110: flag = (out < 0)? 1 : 0; // bltu
        3'b111: flag = (out >= 0)? 1 : 0; // bgeu

        default flag = 0;
    endcase

endmodule


