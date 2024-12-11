module signextend #(parameter W = 32)(
    input logic [2:0] immsrcD,
    input logic [W-1:0] instrD,
    output logic [W-1:0] immextD
);

logic sign; // for 2's complement

assign sign = instrD[W-1]; // not required by extend (U / J type)

always_comb case(immsrcD)
    3'b000: immextD = {{20{sign}}, instrD[W-1:W-12]}; // I-type
    3'b001: immextD = {{20{sign}}, instrD[W-1:W-7], instrD[W-21:W-25]}; // S-type
    3'b010: immextD = {{19{sign}}, instrD[W-1], instrD[W-25], instrD[W-2:W-7], instrD[W-21:W-24], 1'b0}; //B-type
    3'b011: immextD = {instrD[W-1:W-20], 12'b0}; // U-type
    3'b100: immextD = {{11{sign}}, instrD[W-1], instrD[W-13:W-20], instrD[W-12], instrD[W-2:W-11], 1'b0}; // J-type
    3'b101: immextD = {{20'b0}, instrD[W-1:W-12]}; // unsigned
    default: immextD = {{20{sign}}, instrD[W-1:W-12]}; // I-type
endcase

endmodule
