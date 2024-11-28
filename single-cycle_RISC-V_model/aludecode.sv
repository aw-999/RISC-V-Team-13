module aludecode (
    input logic [2:0] func3,
    input logic [1:0] ALUop,
    input logic func75,
    input logic op5,
    output logic [2:0] ALUctrl
);

always_comb
case (func3)
    3'b001: ALUctrl = 3'b110; // sla
    3'b010: ALUctrl = 3'b101; // slt
    3'b011: ALUctrl = 3'b101; // sltu
    3'b100: ALUctrl = 3'b100; // xor
    3'b101: ALUctrl = 3'b111; // sll
    3'b110: ALUctrl = 3'b011; // or
    3'b111: ALUctrl = 3'b010; // and


    default: ALUctrl = 3'b000;
endcase

always_comb
case ({func3, op5, func75})
    5'b00011: ALUctrl = 3'b001;
    5'b00000: ALUctrl = 3'b000;
    5'b00001: ALUctrl = 3'b000;
    5'b00010: ALUctrl = 3'b000;
    default: ALUctrl = ALUctrl;
endcase

always_comb
case (ALUop)
    2'b00: ALUctrl = 3'b000;
    2'b01: ALUctrl = 3'b001;
    2'b11: ALUctrl = 3'b000;
    default: ALUctrl = ALUctrl;
endcase
    
endmodule
