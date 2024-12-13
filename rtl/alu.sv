module alu #(
    parameter W = 32
)(
    //from Registerfiles
    input logic [W-1:0] srcaE,
    input logic [W-1:0] srcbE,

    //from ALU decode
    input logic [4:0] aluctrlE,

    output logic [W-1:0] aluresultE,
    output logic flagE

);

logic signed [W-1:0] signed_srcaE;
logic signed [W-1:0] signed_srcbE;

assign signed_srcaE = srcaE;
assign signed_srcbE = srcbE;


always_comb begin 
    flagE = 0;
    aluresultE = 0;

    case(aluctrlE)
            5'b00000: aluresultE = srcaE + srcbE;  // ADD
            5'b00001: aluresultE = srcaE - srcbE;  // Sub
            5'b00010: aluresultE = srcaE & srcbE;  // AND
            5'b00011: aluresultE = srcaE | srcbE;  // OR
            5'b00100: aluresultE = srcaE ^ srcbE;  // XOR
            5'b00101: aluresultE = srcaE << srcbE[4:0];  // Shift Left Logical
            5'b00110: aluresultE = srcaE >> srcbE[4:0];  // Shift Right Logical
            5'b00111: aluresultE = signed_srcaE >>> srcbE[4:0];  // Shift Right Arithmetic
            5'b01000: aluresultE = (signed_srcaE < signed_srcbE) ? 1 : 0;  // Set Less Than signed
            5'b01001: aluresultE = (signed_srcaE < signed_srcbE) ? 1 : 0;  // Set Less Than Unsigned
            5'b10000: aluresultE = srcbE;

            5'b01010: flagE = (srcaE == srcbE) ? 1 : 0; //beq
            5'b01011: flagE = (srcaE != srcbE) ? 1 : 0; //bne
            5'b01100: flagE = (srcaE < srcbE) ? 1 : 0; //blt
            5'b01101: flagE = (srcaE >= srcbE) ? 1: 0; //bge
            5'b01110: flagE = (signed_srcaE < signed_srcbE) ? 1 : 0; //bltu
            5'b01111: flagE = (signed_srcaE >= signed_srcbE) ? 1 : 0; //bgeu
            default: begin
                aluresultE = 0;
                flagE = 0;
            end
             
    endcase

        /*
        ZeroFlag = (ALUResult == 0) ? 1 : 0;
        NegativeFlag = ALUResult[W-1];

        if(ALUCtrl == 4'b1001) begin
            UnsignedLess = ALUResult[0];
        end
        */

    end

endmodule




