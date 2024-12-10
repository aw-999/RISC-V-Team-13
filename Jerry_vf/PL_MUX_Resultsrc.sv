module PL_MUX_Resultsrc #(parameter W = 32)(
    input logic [W-1:0] DOutAlu,
    input logic [W-1:0] DOutDM,
    input logic [W-1:0] PCadd4,
    input logic [W-1:0] PCaddIMM,

    input logic [1:0] ResultSrc,
    output logic [W-1:0] DInReg
);

always_comb 
    case (ResultSrc)
        2'b00: DInReg = DOutAlu;
        2'b01: DInReg = DOutDM;
        2'b10: DInReg = PCadd4;
        2'b11: DInReg = PCaddIMM;
        default DInReg = DOutAlu;
    endcase
    
endmodule
