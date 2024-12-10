module PL_Extend #(parameter W = 32)(
    input logic [2:0] IMMsrc,
    input logic [W-1:0] instr,
    output logic [W-1:0] ImmExt
);

logic sign; // for 2's complement

assign sign = instr[W-1]; // not required by extend (U / J type)

always_comb case(IMMsrc)
    3'b000: ImmExt = {{20{sign}}, instr[W-1:W-12]}; // I-type
    3'b001: ImmExt = {{20{sign}}, instr[W-1:W-7], instr[W-21:W-25]}; // S-type
    3'b010: ImmExt = {{19{sign}}, instr[W-1], instr[W-25], instr[W-2:W-7], instr[W-21:W-24], 1'b0}; //B-type
    3'b011: ImmExt = {instr[W-1:W-20], 12'b0}; // U-type
    3'b100: ImmExt = {{11{sign}}, instr[W-1], instr[W-13:W-20], instr[W-12], instr[W-2:W-11], 1'b0}; // J-type
    3'b101: ImmExt = {{20'b0}, instr[W-1:W-12]}; // unsigned
    default: ImmExt = {{20{sign}}, instr[W-1:W-12]}; // I-type
endcase

endmodule
