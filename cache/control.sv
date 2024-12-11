module control #(parameter W = 32)(
    input logic [W-1:0] instr,
    input logic flag,
    output logic RegWrite,
    output logic RamWrite,
    output logic RamRead, //added for cache1 reset ---
    output logic [1:0] ALUop,
    output logic ALUsrc,
    output logic [2:0] IMMsrc,
    output logic [1:0] PCsrc,
    output logic [1:0] ResultSrc
);

/*
name    parameter       |   op      func3   func7       explanation

Already tested instructions:

addi    Rd, Ra, IMM12   |   0010011 000     x
slli    Rd, Ra, IMM12   |   0110011 001     x
slti    Rd, Ra, IMM12   |   0110011 010     x
xori    Rd, Ra, IMM12   |   0110011 100     x
srli    Rd, Ra, IMM12   |   0110011 101     x
ori     Rd, Ra, IMM12   |   0110011 110     x
andi    Rd, Ra, IMM12   |   0110011 111     x

add     Rd, Ra, Rb      |   0110011 000     0000000 
sub     Rd, Ra, Rb      |   0110011 000     0100000
sll     Rd, Ra, Rb      |   0110011 001     0000000     logic shift left
slt     Rd, Ra, Rb      |   0110011 010     0000000     set less than
xor     Rd, Ra, Rb      |   0110011 100     0000000
srl     Rd, Ra, Rb      |   0110011 101     0000000     logic shift right
or      Rd, Ra, Rb      |   0110011 110     0000000
and     Rd, Ra, Rb      |   0110011 111     0000000

lui     Rd, IMM20       |   0110111 x       x

bne     Rd, Ra, IMM     |   1100011 001     x
bnez    Rd, Ra, IMM     |
beq     Rd, Ra, IMM     |   1100011 000     x
blt     Rd, Ra, IMM     |   1100011 100     x
bge     Rd, Ra, IMM     |   1100011 101     x

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

under-testing instructions:

bltu    Rd, Ra, IMM     |   1100011 110     x
bgeu    Rd, Ra, IMM     |   1100011 111     x
sltu    Rd, Ra, Rb      |   0110011 011     0000000     
sra     Rd, Ra, Rb      |   0110011 101     0100000     arithmetic shift left

*/

logic [6:0] op7;

logic [1:0] PCsrc_req1;

always_comb begin
    // fixed from W-32:W-26 to W-7:W-1, since op7 is the LSB
    op7 = instr[W-6:W-0];
end

// to imm.sv
always_comb 
case (op7)
    7'b0010011: IMMsrc = 3'b000; // i-type
    7'b0000011: IMMsrc = 3'b000; 
    7'b1100111: IMMsrc = 3'b000; // jalr

    7'b0100011: IMMsrc = 3'b001; // s-type

    7'b1100011: IMMsrc = 3'b010; // b-type

    7'b0110111: IMMsrc = 3'b011; // u-type
    7'b0010111: IMMsrc = 3'b011;

    
    7'b1101111: IMMsrc = 3'b100; // j-type

    default: IMMsrc = 3'b000;
endcase

// to alu.sv
always_comb 
case (op7)
// ALUsrc logic added: r-type & b-type missing
    7'b0110011: ALUsrc = 1'b0; // r-type
    7'b0100011: ALUsrc = 1'b1; // s-type
    7'b0010011: ALUsrc = 1'b1; // i-type
    7'b1100011: ALUsrc = 1'b0; // b-type
    7'b1100111: ALUsrc = 1'b1; // jalr
    7'b0110111: ALUsrc = 1'b1; // u-type
endcase

// to datapath1.sv
always_comb 
case (op7)
    7'b0100011: ALUop = 2'b00; // s-type
    7'b0000011: ALUop = 2'b00; // load

    7'b1100011: ALUop = 2'b01; // b-type

    7'b0010011: ALUop = 2'b10; // i-type
    
    7'b0110011: ALUop = 2'b10; // r-type

    7'b1101111: ALUop = 2'b11; // j-type
    7'b1100111: ALUop = 2'b11; // jalr

    default: ALUop = 2'b00;
endcase

// to reg32.sv
always_comb 
case (op7)
    7'b0110011: RegWrite = 1'b1; // r-type
    7'b0010011: RegWrite = 1'b1; // i-type
    7'b0000011: RegWrite = 1'b1;
    7'b0110111: RegWrite = 1'b1; // u-type
    7'b0010111: RegWrite = 1'b1;
    7'b1100111: RegWrite = 1'b1; // jalr
    7'b1101111: RegWrite = 1'b1; // j-type
    default: RegWrite = 1'b0;
endcase

// to datapath2.sv
always_comb 
case (op7)
    7'b1100011: PCsrc_req1 = 2'b01; // b-type
    7'b1101111: PCsrc_req1 = 2'b01; // j-type
    7'b1100111: PCsrc_req1 = 2'b11; // jalr
    default: PCsrc_req1 = 2'b00;
endcase



always_comb 
case (op7)
    7'b0100011: RamWrite = 1'b1; // s-type
    default: RamWrite = 1'b0;
endcase

always_comb 
case (op7)
    7'b0000011: RamRead = 1'b1; // load
    default: RamRead = 1'b0;
endcase

always_comb begin
    PCsrc = {PCsrc_req1[1], {PCsrc_req1[0] && flag}};
end

always_comb 
case (op7)
    7'b0000011: ResultSrc = 2'b01; // load
    7'b1101111: ResultSrc = 2'b10; // j-type
    7'b0110111: ResultSrc = 2'b11; // u-type
    default: ResultSrc = 2'b00;
endcase

endmodule
