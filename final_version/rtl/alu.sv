module alu #(
    parameter W = 32
)(
    //from Registerfiles
    input logic [W-1:0] srcaE,
    input logic [W-1:0] srcbE,

    //from ALU decode
    input logic [3:0] aluctrlE,

    output logic [W-1:0] aluresultE,
    output logic flagE

);


always_comb begin 
    flagE = 0;
    aluresultE = 0;

    case(aluctrlE)
            4'b0000: aluresultE = srcaE + srcbE;  // ADD
            4'b0001: aluresultE = srcaE - srcbE;  // Sub
            4'b0010: aluresultE = srcaE & srcbE;  // AND
            4'b0011: aluresultE = srcaE | srcbE;  // OR
            4'b0100: aluresultE = srcaE ^ srcbE;  // XOR
            4'b0101: aluresultE = srcaE << srcbE[4:0];  // Shift Left Logical
            4'b0110: aluresultE = srcaE >> srcbE[4:0];  // Shift Right Logical
            4'b0111: aluresultE = $signed(srcaE) >>> srcbE[4:0];  // Shift Right Arithmetic
            4'b1000: aluresultE = (srcaE < srcbE) ? 1 : 0;  // Set Less Than signed
            4'b1001: aluresultE = ($unsigned(srcaE) < $unsigned(srcbE)) ? 1 : 0;  // Set Less Than Unsigned
            
            4'b1010: flagE = (srcaE == srcbE) ? 1 : 0; //beq
            4'b1011: flagE = (srcaE != srcbE) ? 1 : 0; //bne
            4'b1100: flagE = (srcaE < srcbE) ? 1 : 0; //blt
            4'b1101: flagE = (srcaE >= srcbE) ? 1: 0; //bge
            4'b1110: flagE = ($signed(srcaE) < $signed(srcbE)) ? 1 : 0; //bltu
            4'b1111: flagE = ($signed(srcaE) >= $signed(srcbE)) ? 1 : 0; //bgeu
            default: begin
                aluresultE = srcaE + srcbE;
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
    


    