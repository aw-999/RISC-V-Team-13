module imm #(parameter W = 32)(
    input logic [2:0] IMMsrc,
    input logic [W-1:0] instr,
    output logic [W-1:0] out
);

logic sign; // for 2's complement

assign sign = instr[W-1]; // not required by extend (U / J type)

always_comb case(IMMsrc)
    3'b000: out = {{20{sign}}, instr[W-1:W-12]}; // I-type
    3'b001: out = {{20{sign}}, instr[W-1:W-7], instr[W-21:W-25]}; // S-type
    3'b010: out = {{19{sign}}, instr[W-1], instr[W-25], instr[W-2:W-7], instr[W-21:W-24], 1'b0}; //B-type
    3'b011: out = {instr[W-1:W-20], 12'b0}; // U-type
    3'b100: out = {{11{sign}}, instr[W-1], instr[W-13:W-20], instr[W-12], instr[W-2:W-11], 1'b0}; // J-type
    3'b101: out = {{20'b0}, instr[W-1:W-12]}; // unsigned
    default: out = {{20{sign}}, instr[W-1:W-12]}; // I-type
endcase

endmodule
