module pcSrcGates(
    input logic         jumpE,
    input logic         branchE,
    input logic         zero,
    output logic        pcSrcE
);

assign pcSrc_e = (jump_e || (branch_e && zero));

endmodule