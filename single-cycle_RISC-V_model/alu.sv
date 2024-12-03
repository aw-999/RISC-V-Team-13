module alu #(parameter W = 32)(
    input logic [2: 0] ALUctrl,
    input logic [2: 0] ALUflag,
    input logic [W-1: 0] N1,
    input logic [W-1: 0] N2,
    output logic [W-1: 0] out,
    output logic flag
);

logic flagZ; // zero
logic flagC; // carry
logic flagS; // sign
logic flagV; // overflow

logic [W:0] N1c;
logic [W:0] N2c;
assign N1c = {1'b0, N1};
assign N2c = {1'b0, ~N2+1};

always_comb
    case (ALUctrl)
        3'b000: out = N1 + N2; // add
        3'b001: {flagC, out} = N1c + N2c; // sub, used in all flag operations
        3'b010: out = N1 &  N2; // and
        3'b011: out = N1 | N2; // or
        3'b100: out = N1 ^ N2; // xor
        3'b101: out = (N1 < N2) ? 32'b1 : 32'b0; // set less than, slt
        3'b110: out = N1 << N2;  // sll
        3'b111: out = N1 >> N2;  // srl

        default out = N1 + N2;
    endcase

always_comb begin
    flagS = out[W-1];

    if (out == 0) flagZ = 1'b1;
    else flagZ = 1'b0;

    if ((N1[W-1] == 0 && N2[W-1] == 1 && out < 0) || (N1[W-1] == 1 && N2[W-1] == 0 && out >= 0)) flagV = 1'b1;
    else flagV = 1'b0;
end 

always_comb
    case (ALUflag)
        3'b000: flag = flagZ; // beq
        3'b001: flag = ~flagZ; // bne
        3'b010: flag = 0;
        3'b011: flag = 1;
        3'b100: flag = flagS != flagV; // blt
        3'b101: flag = (flagS == flagV); // bge
        3'b110: flag = ~flagC; // bltu
        3'b111: flag = flagC; // bgeu

        default flag = 0;
    endcase

endmodule


