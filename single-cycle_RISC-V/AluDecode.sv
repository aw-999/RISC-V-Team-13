module AluDecode (
    input logic [2:0] func3,
    input logic [1:0] ALUop,
    input logic func75,
    input logic op5,
    output logic [3:0] ALUctrl // first bit: whether using flag operation ? 1 : 0
);

always_comb begin 
    case ({ALUop, func3})
        5'b10111: ALUctrl = 4'b0010; // and
        5'b10110: ALUctrl = 4'b0011; // or
        5'b10100: ALUctrl = 4'b0100; // xor
        5'b10001: ALUctrl = 4'b0101; // sll

        // ----- with ALUcrtl[3] = 1 (and 4'b0001), we have flag related operations -----

        5'b10010: ALUctrl = 4'b1100; // slt (based on blt)
        5'b10011: ALUctrl = 4'b1110; // sltu (based on bltu)

        5'b01000: ALUctrl = 4'b1000; // beq
        5'b01001: ALUctrl = 4'b1001; // bne
        //as ALUctrl misses 4'b1010, we implement sub here
        5'b01100: ALUctrl = 4'b1100; // blt
        5'b01101: ALUctrl = 4'b1101; // bge
        5'b01110: ALUctrl = 4'b1110; // bltu
        5'b01111: ALUctrl = 4'b1111; // bgeu

        default: ALUctrl = 4'b0001;  // for lui
    endcase

    case ({func3, op5, func75})
        5'b00011: ALUctrl = 4'b1010; // sub
        5'b00000: ALUctrl = 4'b0000; // add
        5'b00001: ALUctrl = 4'b0000; // add
        5'b00010: ALUctrl = 4'b0000; // add
        default: ALUctrl = ALUctrl;
    endcase

    case ({ALUop, func3, func75})
        6'b101010: ALUctrl = 4'b0110; // srl
        6'b101011: ALUctrl = 4'b0111; // sra
        default: ALUctrl = ALUctrl;
    endcase

    case (ALUop)
        2'b00: ALUctrl = 4'b0000; // add, flag = 1 (used in s-type, load, j-type)
        2'b11: ALUctrl = 4'b0001; // N2, flag = 1 (used in u-type)
        default: ALUctrl = ALUctrl;
    endcase
end
    
endmodule


