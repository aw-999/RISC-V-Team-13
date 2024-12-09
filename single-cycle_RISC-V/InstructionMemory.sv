module InstructionMemory #(parameter WD = 32, WAD = 16, WB = 8)(
    input logic [WD-1: 0] PC,
    output logic [WB*4-1: 0] instr
);

logic [WAD-1: 0] AInIM;
logic [WB-1: 0] RomArray [2**WAD-1: 0]; // too large to simulate 2**32 rom so using 2*16

initial begin
    $readmemh("Zall_test.mem", RomArray);
end;

assign AInIM = PC[WAD-1: 0];
assign instr = {RomArray[AInIM], RomArray[AInIM+1], RomArray[AInIM+2], RomArray[AInIM+3]};

/*
Already successfully tested program

from project brief:
Zasm1.mem, solution: 0xFE (254)
Zasm2.mem, solution: 0x3E8 (1000)
Zasm3.mem, solution: 0x12C (300)
Zasm4.mem, solution: 0x35 (53)
Zasm5.mem, solution: 0x3C03 (15363) (note this needs about 300000 cycles in testbench)

self written:
Zrom.mem (only addi and bne)
Zrom2.mem (many other instructions)

Undertest program
...

 */

endmodule


