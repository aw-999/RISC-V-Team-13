module ALU #(
    parameter W = 32
)(
    //from Registerfiles
    input logic [W-1:0] SrcA,
    input logic [W-1:0] SrcB,

    //from ALU decode
    input logic [3:0] ALUCtrl,

    output logic [W-1:0] ALUResult,
    output logic branch
    /*output logic ZeroFlag,
    output logic NegativeFlag,
    output logic UnsignedLess
    */
);
    /*
    logic ZeroFlag;
    logic UnsignedLess;
    logic NegativeFlag;
    */

always_comb begin 
    branch = 0;
    ALUResult = 0;

    case(ALUCtrl)
            4'b0000: ALUResult = SrcA + SrcB;  // ADD
            4'b0001: ALUResult = SrcA - SrcB;  // Sub
            4'b0010: ALUResult = SrcA & SrcB;  // AND
            4'b0011: ALUResult = SrcA | SrcB;  // OR
            4'b0100: ALUResult = SrcA ^ SrcB;  // XOR
            4'b0101: ALUResult = SrcA << SrcB[4:0];  // Shift Left Logical
            4'b0110: ALUResult = SrcA >> SrcB[4:0];  // Shift Right Logical
            4'b0111: ALUResult = $signed(SrcA) >>> SrcB[4:0];  // Shift Right Arithmetic
            4'b1000: ALUResult = (SrcA < SrcB) ? 1 : 0;  // Set Less Than signed
            4'b1001: ALUResult = ($unsigned(SrcA) < $unsigned(SrcB)) ? 1 : 0;  // Set Less Than Unsigned
            
            4'b1010: branch = (SrcA == SrcB) ? 1 : 0; //beq
            4'b1011: branch = (SrcA != SrcB) ? 1 : 0; //bne
            4'b1100: branch = (SrcA < SrcB) ? 1 : 0; //blt
            4'b1101: branch = (SrcA >= SrcB) ? 1: 0; //bge
            4'b1110: branch = ($unsigned(SrcA) < $unsigned(SrcB)) ? 1 : 0; //bltu
            4'b1111: branch = ($unsigned(SrcA) >= $unsigned(SrcB)) ? 1 : 0; //bgeu
            default: begin
                ALUResult = 0;
                branch = 0;
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
    


    




