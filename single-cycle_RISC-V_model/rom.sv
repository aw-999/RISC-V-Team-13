module rom #(parameter WAD = 16, WD = 8)(
    input logic [WAD-1: 0] AddrIn,
    output logic [WD*4-1: 0] DOut
);

logic [WD-1: 0] RomArr [2**WAD-1: 0]; // too large to simulate 2**32 rom so using 2*16

initial begin
    $readmemh("asm4.mem", RomArr);
end;

assign DOut = {RomArr[AddrIn], RomArr[AddrIn+1], RomArr[AddrIn+2], RomArr[AddrIn+3]};

/*
Already successfully tested program

from project brief:
asm1.mem, solution: 0xFE (254)
asm2.mem, solution: 0x3E8 (1000)
asm3.mem, solution: 0x12C (300)
asm4.mem, solution: 0x35 (53)
asm5.mem, solution: 0x3C03 (15363) (note this needs about 300000 cycles in testbench)

self written:
rom1.mem (only addi and bne)
rom2.mem (many other instructions)

Undertest program
...

 */

endmodule


