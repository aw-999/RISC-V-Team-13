module alu #(parameter W = 32)(
    input logic [3: 0] ALUctrl,
    input logic [W-1: 0] N1,
    input logic [W-1: 0] N2,
    output logic [W-1: 0] out,
    output logic flag
);

logic flagZ; // zero
logic flagC; // carry
logic flagS; // sign
logic flagV; // overflow

always_comb begin
    casez (ALUctrl)
        4'b1???: {flagC, out} = {1'b0, N1} + {1'b0, ~N2+1}; // used in sub and flag operation and slt / sltu (depend by aluflag)
        4'b0000: out = N1 + N2; // add
        4'b0001: out = N2; // lui
        4'b0010: out = N1 & N2; // and
        4'b0011: out = N1 | N2; // or
        4'b0100: out = N1 ^ N2; // xor
        4'b0101: out = N1 << N2;  // sll
        4'b0110: out = N1 >> N2;  // srl
        4'b0111: out = $signed(N1) >>> N2;  // sra

        default out = N1 + N2;
    endcase

    flagS = out[W-1];

    if (out == 0) flagZ = 1'b1;
    else flagZ = 1'b0;

    if ((N1[W-1] == 0 && N2[W-1] == 1 && out < 0) || (N1[W-1] == 1 && N2[W-1] == 0 && out >= 0)) flagV = 1'b1;
    else flagV = 1'b0;

    case (ALUctrl)
        4'b1000: flag = flagZ; // beq
        4'b1001: flag = ~flagZ; // bne
        4'b1100: flag = (flagS != flagV); // blt, slt
        4'b1101: flag = (flagS == flagV); // bge
        4'b1110: flag = ~flagC; // bltu, sltu
        4'b1111: flag = flagC; // bgeu

        4'b1010: flag = 1'b0; // sub, place it here because they are same instructions

        // jump related instruction: set flag = 1
        4'b0000: flag = 1'b1; // add, jal, jalr
        4'b0001: flag = 1'b1; // auipc

        default flag = 1'b1;
    endcase

    if (ALUctrl == 4'b1100 || ALUctrl == 4'b1110) out = {{W-1{1'b0}}, flag};
end

endmodule


