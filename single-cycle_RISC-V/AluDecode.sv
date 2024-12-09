module AluDecode (
    input logic [2:0] func3,
    input logic [1:0] ALUop,
    input logic func75,
    input logic op5,
    output logic [3:0] ALUctrl // first bit: whether using flag operation ? 1 : 0
);

always_comb begin 
    case ({ALUop, func3})
        5'b10111: ALUctrl = 4'b0010; // and
        5'b10110: ALUctrl = 4'b0011; // or
        5'b10100: ALUctrl = 4'b0100; // xor
        5'b10001: ALUctrl = 4'b0101; // sll

        // ----- with ALUcrtl[3] = 1 (and 4'b0001), we have flag related operations -----

        5'b10010: ALUctrl = 4'b1100; // slt (based on blt)
        5'b10011: ALUctrl = 4'b1110; // sltu (based on bltu)

        5'b01000: ALUctrl = 4'b1000; // beq
        5'b01001: ALUctrl = 4'b1001; // bne
        //as ALUctrl misses 4'b1010, we implement sub here
        5'b01100: ALUctrl = 4'b1100; // blt
        5'b01101: ALUctrl = 4'b1101; // bge
        5'b01110: ALUctrl = 4'b1110; // bltu
        5'b01111: ALUctrl = 4'b1111; // bgeu

        default: ALUctrl = 4'b0001;  // for lui
    endcase

    case ({func3, op5, func75})
        5'b00011: ALUctrl = 4'b1010; // sub
        5'b00000: ALUctrl = 4'b0000; // add
        5'b00001: ALUctrl = 4'b0000; // add
        5'b00010: ALUctrl = 4'b0000; // add
        default: ALUctrl = ALUctrl;
    endcase

    case ({ALUop, func3, func75})
        6'b101010: ALUctrl = 4'b0110; // srl
        6'b101011: ALUctrl = 4'b0111; // sra
        default: ALUctrl = ALUctrl;
    endcase

    case (ALUop)
        2'b00: ALUctrl = 4'b0000; // add, flag = 1 (used in s-type, load, j-type)
        2'b11: ALUctrl = 4'b0001; // N2, flag = 1 (used in u-type)
        default: ALUctrl = ALUctrl;
    endcase
end
    
endmodule

/*  ALUdecode Logbook text:

The input logics of ALUdecode and the way to decode them are listed below:

ALUop indicates whether to use func3 and flags: 
For load, s-type, j-type instructions, ALUop = 0, ALUctrl = 0, ALU simply adds 2 operand
For u-type instruction, ALUop = 3, ALUctrl = 1, ALU simply equates the output to N2 (IMM), since no registers are involved.
For most i-type and r-type instructions, we look at func3 but not flag value (except slt and sltu). ALUop = 2
For b-type instructions, we look at both func3 and flag values.

func3 determined what type of operation that is going to conduct, 
according to the instruction list, I implement cases of {op, func3} and it set ALUctrl[3:0],
which is the output linked to ALU to match each instructions to specific calculations. The following tables shows instructions, func3 and ALUctrl values.

Generally, I use ALUctrl[3] to determine whether this is a flag operation, though there are some special ALUctrl values:
For sub, ALUctrl is 0b1010, this is because sub is used to determine the values of the flags. 
The ALUctrl of slt is exactly same as blt, and ALUctrl of sltu is exactly same as bltu. This is because they can be seen as the same operation.
The difference is that slt/sltu write whether N1 < N2 to regfile, while their flag results are considered invalid in control unit (see Control Unit at page _)

Additionally, operation pair (add, sub), pair (srl, srla), pair (srli and srai) are distinguised by func7[5] (func75); 
since there is no subi, which is exactly the same as addi, Opcode[5] (op5) is used to indicate whether IMM is used.
Therefore, I add extra case statements considering func75 and op5 to change ALUctrl.

END */

