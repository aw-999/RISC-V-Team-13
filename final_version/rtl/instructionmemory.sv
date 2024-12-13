module instructionmemory #(parameter WAD = 16, WD = 8, DATA_WIDTH = 32)(
    input logic [DATA_WIDTH-1: 0] pcF,
    output logic [WD*4-1: 0] instrF 
);

logic [WD-1: 0] RomArr [2**WAD-1: 0]; // too large to simulate 2**32 rom so using 2*16

initial begin
    $readmemh("pdf.hex", RomArr);
end;

assign instrF = {RomArr[pcF+3], RomArr[pcF+2], RomArr[pcF+1], RomArr[pcF]};

endmodule

