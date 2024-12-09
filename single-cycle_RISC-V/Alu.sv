module Alu #(parameter W = 32)(
    input logic [3: 0] ALUctrl,
    input logic [W-1: 0] N1,
    input logic [W-1: 0] N2,
    output logic [W-1: 0] DOutAlu,
    output logic flag
);

logic flagZ; // zero
logic flagC; // carry
logic flagS; // sign
logic flagV; // overflow

always_comb begin
    casez (ALUctrl) // using casez to use ? sign to reduce the length of code. Note this z is not mistyped
        4'b1???: {flagC, DOutAlu} = {1'b0, N1} + {1'b0, ~N2+1}; // used in sub and flag operation and slt / sltu (depend by aluflag)
        4'b0000: DOutAlu = N1 + N2; // add, load, save
        4'b0001: DOutAlu = N2; // lui
        4'b0010: DOutAlu = N1 & N2; // and
        4'b0011: DOutAlu = N1 | N2; // or
        4'b0100: DOutAlu = N1 ^ N2; // xor
        4'b0101: DOutAlu = N1 << N2[4:0];  // sll
        4'b0110: DOutAlu = N1 >> N2[4:0];  // srl
        4'b0111: DOutAlu = $signed(N1) >>> N2[4:0];  // sra

        default DOutAlu = N1 + N2;
    endcase

    flagS = DOutAlu[W-1];

    if (DOutAlu == 0) flagZ = 1'b1;
    else flagZ = 1'b0;

    if ((~N1[W-1] && N2[W-1] && DOutAlu[W-1]) || (N1[W-1] && ~N2[W-1] && ~DOutAlu[W-1])) flagV = 1'b1;
    else flagV = 1'b0;

    case (ALUctrl)
        4'b1000: flag = flagZ; // beq
        4'b1001: flag = ~flagZ; // bne
        4'b1100: flag = (flagS != flagV); // blt, slt
        4'b1101: flag = (flagS == flagV); // bge
        4'b1110: flag = ~flagC; // bltu, sltu
        4'b1111: flag = flagC; // bgeu

        // sub, place it here because they are the same instructions

        default flag = 1'b0;
    endcase

    if (ALUctrl == 4'b1100 || ALUctrl == 4'b1110) DOutAlu = {31'b0, flag};
end

endmodule


