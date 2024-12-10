# RISC-V RV32I Processor Coursework
___

Personal Statement of Contribution

Name: Wenjie Mei

___

## Content
* Module: ALU Decode
* Module: ALU
* Module: Data Memory

<br>

## Module: ALU Decode
The input logics of ALUdecode and the way to decode them are listed below:
___

ALUop indicates whether to use func3 and flags: 
* For load, s-type, j-type instructions, ALUop = 0, ALUctrl = 0, ALU simply adds 2 operand
* For u-type instruction, ALUop = 3, ALUctrl = 1, ALU simply equates the output to N2 (IMM), since no registers are involved.
* For most i-type and r-type instructions, we look at func3 but not flag value (except slt and sltu). ALUop = 2
* For b-type instructions, we look at both func3 and flag values.

func3 determined what type of operation that is going to conduct, so according to the instruction list, I implement cases of {op, func3} and it set ALUctrl[3:0],
which is the output linked to ALU to match each instructions to specific calculations. 

The following tables shows instructions, ALUop, func3 and ALUctrl values:

instruction name | ALUop | func3 | ALUctrl | Additional note
--- | --- | --- | --- | ---
add / addi | 10 | 000 | 0000 |
any else | 00 | x | 0000 | simply add 
lui | 11 | x | 0001 | simply take IMM
and / andi | 10 | 111 | 0010 
or / ori | 10 | 110 | 0011
xor / xori | 10 | 100 | 0100
sll / slli | 10 | 001 | 0101 
srl / srli | 10 | 101 | 0110 | func7[5] = 0
sra / srai | 10 | 101 | 0111 | func7[5] = 1
beq | 01 | 000 | 1000
bne | 01 | 001 | 1001
sub | 10 | 000 | 1010 | func7[5] = 1, op5 = 1
blt | 01 | 100 | 1100
slt / slti | 10 | 010 | 1100 | same as blt
bltu | 01 | 110 | 1110
sltu / sltui | 10 | 011 | 1110 | same as bltu
bge | 01 | 101 | 1101
bgeu | 01 | 111 | 1111

Generally, I use ALUctrl[3] to determine whether this is a flag operation, though there are some special ALUctrl values:
* For sub, ALUctrl is 0b1010, this is because sub is used to determine the values of the flags. 
* The ALUctrl of slt is exactly same as blt, and ALUctrl of sltu is exactly same as bltu. This is because they can be seen as the same operation.
The difference is that slt/sltu write whether N1 < N2 to regfile, while their flag results are considered invalid in control unit (see Control Unit)

Additionally, operation pair (add, sub), pair (srl, srla), pair (srli and srai) are distinguised by func7[5] (func75); 
since there is no subi, which is exactly the same as addi, Opcode[5] (op5) is used to indicate whether IMM is used.
Therefore, I add extra case statements considering func75 and op5 to change ALUctrl.

<br>

## Module: ALU
___
According to ALUctrl, I match the calculation logics to instructions:

```
    casez (ALUctrl) // using casez to use ? sign to reduce the length of code.

        4'b1???: {flagC, DOutAlu} = {1'b0, N1} + {1'b0, ~N2+1}; // sub, flag operation and slt / sltu 
        4'b0000: DOutAlu = N1 + N2; // add, load, save, ... 
        4'b0001: DOutAlu = N2; // lui
        4'b0010: DOutAlu = N1 & N2; // and
        4'b0011: DOutAlu = N1 | N2; // or
        4'b0100: DOutAlu = N1 ^ N2; // xor
        4'b0101: DOutAlu = N1 << N2[4:0];  // sll
        4'b0110: DOutAlu = N1 >> N2[4:0];  // srl
        4'b0111: DOutAlu = $signed(N1) >>> N2[4:0];  // sra
    endcase
```

Note that the maximum value shifted is 31, so we only need to take 5 bits from N2

For flag operations, I use flagZ (output == zero), flagS (output[31]), flagC (carry) and flagV(overflow)
* To implement flagC, I change the subtraction logic so that it first implement 2's complement to N2, add an extra bit to the top and add them together. (The other way is to add an extra bit equal to their first bit) and the output gives its carry bit
* To implement flagV, I list case of overflow: if N1 and -N2 are all positive but N1-N2 is negative, or if N1 and -N2 are all negative but N1-N2 is positive, overflow happens.

After getting the four flags, I can implement flag operations: 
```
    case (ALUctrl)

        4'b1000: flag = flagZ; // beq
        4'b1001: flag = ~flagZ; // bne
        4'b1100: flag = (flagS != flagV); // blt, slt
        4'b1101: flag = (flagS == flagV); // bge
        4'b1110: flag = ~flagC; // bltu, sltu
        4'b1111: flag = flagC; // bgeu
        default flag = 1'b0;
    endcase
```
Finally, the output of slt, slti, sltu and sltui should be {31'b0, flag}, we do not care about the alu output of branch instructions

<br>

## Module: Data Memory
___

A typical data memory have address input (AdIn), data input (DInDM), data write enabler (DMwrite), data output (DOutDM) and clock signal. 
Additionally, func3 is also introduced because there are different read and write instructions:

instruction name | func3 | implement code
--- | --- | --- 
lw | 010 | DOutDM = {RamArray[Ad+3], RamArray[Ad+2], RamArray[Ad+1], RamArray[Ad]};
lh | 001 | DOutDM = {{16{RamArray[Ad+1][WB-1]}},RamArray[Ad+1], RamArray[Ad]};
lb | 000 | DOutDM = {{24{RamArray[Ad][WB-1]}},RamArray[Ad]};
lhu | 101 | DOutDM = {{16'b0},RamArray[Ad+1], RamArray[Ad]};
lbu | 100 | DOutDM = {{24'b0},RamArray[Ad]};
sw | 010 | {RamArray[Ad+3], RamArray[Ad+2], RamArray[Ad+1], RamArray[Ad]} <= DInDM;
sh | 001 | {RamArray[Ad+1], RamArray[Ad]} <= DInDM[15:0];
sb | 000 | RamArray[Ad] <= DInDM[7:0];

As above, in RISC-V architecture, memory is stored in bytes. 
* For storing word, the direction is such that the address byte stores word[7:0], the address+1 byte stores word[15:8]... and so on
* This means reading bit should start from address+n loaded as output[7+8n:8n] ... to address+0 loaded output[7:0]

<br><br><br><br><br><br><br><br><br><br>
