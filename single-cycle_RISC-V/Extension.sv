module Extension #(parameter W = 32)(
    input logic [2:0] IMMctrl,
    input logic [W-1:0] instr,
    output logic [W-1:0] IMM
);

always_comb case(IMMctrl)
    3'b000: IMM = {{20{instr[W-1]}}, instr[W-1:W-12]}; // I-type
    3'b001: IMM = {{20{instr[W-1]}}, instr[W-1:W-7], instr[W-21:W-25]}; // S-type
    3'b010: IMM = {{19{instr[W-1]}}, instr[W-1], instr[W-25], instr[W-2:W-7], instr[W-21:W-24], 1'b0}; //B-type
    3'b011: IMM = {instr[W-1:W-20], 12'b0}; // U-type
    3'b100: IMM = {{11{instr[W-1]}}, instr[W-1], instr[W-13:W-20], instr[W-12], instr[W-2:W-11], 1'b0}; // J-type
    default: IMM = {{20{instr[W-1]}}, instr[W-1:W-12]}; // I-type
endcase

endmodule
