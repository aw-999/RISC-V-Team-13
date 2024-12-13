module signextend #(parameter W = 32)(
    input logic [2:0] immsrcD,
    input logic [W-1:0] instrD,
    output logic [W-1:0] immextD
);

logic sign; // for 2's complement

assign sign = instrD[W-1]; // not required by extend (U / J type)

always_comb case(immsrcD)
    3'b000: immextD = {{20{sign}}, instrD[31:20]}; // I-type
    3'b001: immextD = {{20{instrD[31]}}, instrD[31:25], instrD[11:7]}; // S-type
    3'b010: immextD = {{20{instrD[31]}}, instrD[7], instrD[30:25], instrD[11:8], 1'b0}; //B-type
    3'b011: immextD = {instrD[31:12], 12'b0}; // U-type
    3'b100: immextD = {{12{instrD[31]}}, instrD[19:12], instrD[20], instrD[30:21], 1'b0}; // J-type
    default: immextD = 32'b0;
endcase

endmodule
