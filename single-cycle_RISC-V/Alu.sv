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
        4'b1???: {flagC, DOutAlu} = {1'b0, N1} + {1'b0, ~N2+1}; // sub, flag operation and slt / sltu 
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

/*  ALU Logbook text 

BEGIN

According to ALUctrl, I match the calculation logics to instructions.
Note that the maximum value shifted is 31, so we only need to take 5 bits from N2

For flag operations, I use flagZ (output == zero), flagS (output[31]), flagC (carry) and flagV(overflow)

To implement flagC, I change the subtraction logic so that it first implement 2's complement to N2, add an extra bit to the top and add them together. 
(The other way is to add an extra bit equal to their first bit) and the output gives its carry bit
For flagV, I list case of overflow: if N1 and -N2 are all positive but N1-N2 is negative; if N1 and -N2 are all negative but N1-N2 are positive, overflow happens
so I write:

After getting the four flags, I can implement flag operations: 

Finally, the output of slt, slti, sltu and sltui should be {31'b0, flag}, we do not care about the alu output of branch instructions

END */


