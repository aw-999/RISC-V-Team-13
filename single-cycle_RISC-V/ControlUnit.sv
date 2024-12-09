module ControlUnit (
    input logic [6:0] Opcode,
    input logic flag,

    output logic RegWrite,
    output logic DMwrite,
    output logic [1:0] ALUop,
    output logic ALUsrc,
    output logic [2:0] IMMctrl,
    output logic [1:0] PCsrc,
    output logic [1:0] ResultSrc
);

/*
name    parameter       |   op      func3   func7       explanation

Already tested instructions:

addi    Rd, Ra, IMM12   |   0010011 000     x
slli    Rd, Ra, IMM12   |   0010011 001     x
slti    Rd, Ra, IMM12   |   0010011 010     x
xori    Rd, Ra, IMM12   |   0010011 100     x
srli    Rd, Ra, IMM12   |   0010011 101     x
ori     Rd, Ra, IMM12   |   0010011 110     x
andi    Rd, Ra, IMM12   |   0010011 111     x
sltui   Rd, Ra, Rb      |   0110011 011     x     
srai    Rd, Ra, Rb      |   0110011 101     x

add     Rd, Ra, Rb      |   0110011 000     0000000 
sub     Rd, Ra, Rb      |   0110011 000     0100000
sll     Rd, Ra, Rb      |   0110011 001     0000000     logic shift left
slt     Rd, Ra, Rb      |   0110011 010     0000000     set less than
xor     Rd, Ra, Rb      |   0110011 100     0000000
srl     Rd, Ra, Rb      |   0110011 101     0000000     logic shift right
or      Rd, Ra, Rb      |   0110011 110     0000000
and     Rd, Ra, Rb      |   0110011 111     0000000
sltu    Rd, Ra, Rb      |   0110011 011     0000000     
sra     Rd, Ra, Rb      |   0110011 101     0100000     arithmetic shift left

lui     Rd, IMM20       |   0110111 x       x
auipc   Rd, IMM         |   0010111 x       x

bne     Rd, Ra, IMM     |   1100011 001     x
beq     Rd, Ra, IMM     |   1100011 000     x
blt     Rd, Ra, IMM     |   1100011 100     x
bge     Rd, Ra, IMM     |   1100011 101     x
bltu    Rd, Ra, IMM     |   1100011 110     x
bgeu    Rd, Ra, IMM     |   1100011 111     x

sb      Rb, IMM12(Ra)   |   0100011 000     x
sh      Rb, IMM12(Ra)   |   0000011 001     x
sw      Rb, IMM12(Ra)   |   0100011 010     x

lb      Rd, IMM12(Ra)   |   0000011 000     x
lh      Rd, IMM12(Ra)   |   0000011 001     x
lw      Rd, IMM12(Ra)   |   0000011 010     x
lbu     Rd, IMM12(Ra)   |   0000011 100     x
lhu     Rd, IMM12(Ra)   |   0000011 101     x

jal     Rd, IMM20       |   1101111 x       x
jalr    Rd, Ra, IMM12   |   1100111 000     x           actually belongs to i-type


 

*/


always_comb begin

    // IMMsrc to datapath1/imm
    case (Opcode)
        7'b0010011: IMMctrl = 3'b000; // i-type
        7'b0000011: IMMctrl = 3'b000; 
        7'b0011011: IMMctrl = 3'b000;
        7'b1100111: IMMctrl = 3'b000; // jalr

        7'b0100011: IMMctrl = 3'b001; // s-type

        7'b1100011: IMMctrl = 3'b010; // b-type

        7'b0110111: IMMctrl = 3'b011; // u-type
        7'b0010111: IMMctrl = 3'b011; // auipc
        
        7'b1101111: IMMctrl = 3'b100; // j-type

        default: IMMctrl = 3'b000;
    endcase


    // ALUop to datapath1/alu
    case (Opcode)
        7'b0100011: ALUop = 2'b00; // s-type
        7'b0000011: ALUop = 2'b00; // load

        7'b1101111: ALUop = 2'b00; // j-type
        7'b1100111: ALUop = 2'b00; // jalr

        7'b1100011: ALUop = 2'b01; // b-type

        7'b0010011: ALUop = 2'b10; // i-type
        7'b0110011: ALUop = 2'b10; // r-type

        7'b0110111: ALUop = 2'b11; // u-type
        7'b0010111: ALUop = 2'b11; // auipc

        default: ALUop = 2'b00;
    endcase


    // RegWrite to datapath1/reg32
    case (Opcode)
        7'b0110011: RegWrite = 1'b1; // r-type
        7'b0010011: RegWrite = 1'b1; // i-type
        7'b0011011: RegWrite = 1'b1;
        7'b0000011: RegWrite = 1'b1;
        7'b0110111: RegWrite = 1'b1; // u-type
        7'b0010111: RegWrite = 1'b1;
        7'b1100111: RegWrite = 1'b1; // jalr
        7'b1101111: RegWrite = 1'b1; // j-type
        default: RegWrite = 1'b0;
    endcase


    // RamWrite to datapath1/ram
    case (Opcode)
        7'b0100011: DMwrite = 1'b1; // s-type
        default: DMwrite = 1'b0;
    endcase


    // ALUsrc to datapath1
    case (Opcode)
        7'b0100011: ALUsrc = 1'b1; // s-type
        7'b0010011: ALUsrc = 1'b1; // i-type
        7'b0000011: ALUsrc = 1'b1; 
        7'b1100111: ALUsrc = 1'b1; // jalr
        7'b0110111: ALUsrc = 1'b1; // u-type
        7'b0011011: ALUsrc = 1'b1;
        default: ALUsrc = 1'b0;
    endcase


    // ResultSrc to datapath1
    case (Opcode)
        7'b0000011: ResultSrc = 2'b01; // load
        7'b1101111: ResultSrc = 2'b10; // j-type
        7'b0010111: ResultSrc = 2'b11; // auipc
        default: ResultSrc = 2'b00;
    endcase


    // PCsrc to datapath2
    case (Opcode)
        7'b1101111: PCsrc = 2'b01; // j-type
        7'b0010111: PCsrc = 2'b01; // auipc
        7'b1100111: PCsrc = 2'b10; // jalr
        7'b1100011: PCsrc = 2'b11; // b-type
        default: PCsrc = 2'b00;
    endcase

    // case ({PCsrc, flag}): branch: 111; jump: 010; auipc, jalr: 100; common: 000, 110 (branch, flag = 9), 001 (consider slt and sltu)

    // PCsrc'[1] = flag OR P2 AND NOT P1
    // PCsrc'[0] = flag OR P1 AND NOT P2
    

    PCsrc = {{(flag && PCsrc[0]) || (~PCsrc[0] && PCsrc[1])}, {(flag && PCsrc[1]) || (PCsrc[0] && ~PCsrc[1])}}; 
end

endmodule
