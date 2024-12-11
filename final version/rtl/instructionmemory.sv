module instructionmemory #(parameter W = 32, WAD = 16, WB = 8)(
    input logic [W-1: 0] pcF,
    output logic [WB*4-1: 0] instrF
);

logic [WAD-1: 0] AInIM;
logic [WB-1: 0] RomArray [2**WAD-1: 0]; // too large to simulate 2**32 rom so using 2*16

initial begin
    $readmemh("Zall_test.mem", RomArray);
end;

assign AInIM = pcF[WAD-1: 0];
assign instrF = {RomArray[AInIM+3], RomArray[AInIM+2], RomArray[AInIM+1], RomArray[AInIM]};


endmodule

