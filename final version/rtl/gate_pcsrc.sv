module pcSrcGates(
    input logic         jumpE,
    input logic         branchE,
    input logic         flagE,
    output logic        pcsrcE
);

assign pcsrce = (jumpE || (branchE && zeroflag));

endmodule
