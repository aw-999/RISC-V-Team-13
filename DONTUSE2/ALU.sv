module ALU #(
    parameter W = 32
)(
    //from Registerfiles
    input logic [W-1:0] SrcA,
    input logic [W-1:0] SrcB,

    //from ALU decode
    input logic [3:0] ALUCtrl,

    output logic [W-1:0] ALUResult,
    output logic ZeroFlag,
    output logic NegativeFlag,
    output logic UnsignedLess
);


always_comb begin 
    ALUResult = 0;
    ZeroFlag = 0;
    NegativeFlag = 0;
    
    case(ALUCtrl)
            4'b0000: ALUResult = SrcA + SrcB;  // ADD
            4'b0001: ALUResult = SrcA - SrcB;  // Sub
            4'b0010: ALUResult = SrcA & SrcB;  // AND
            4'b0011: ALUResult = SrcA | SrcB;  // OR
            4'b0100: ALUResult = SrcA ^ SrcB;  // XOR
            4'b0101: ALUResult = SrcA << SrcB[4:0];  // Shift Left Logical
            4'b0110: ALUResult = SrcA >> SrcB[4:0];  // Shift Right Logical
            4'b0111: ALUResult = $signed(SrcA) >>> SrcB[4:0];  // Shift Right Arithmetic
            4'b1000: ALUResult = (SrcA < SrcB) ? 1 : 0;  // Set Less Than Unsigned
            4'b1001: ALUResult = ($unsigned(SrcA) < $unsigned(SrcB)) ? 1 : 0;  // Set Less Than Unsigned
            default: ALUResult = 0; 
    endcase

        if(ALUResult == 0) 
            ZeroFlag = 1;
        else
            ZeroFlag = 0;
        
        NegativeFlag = ALUResult[W-1];

        if(ALUCtrl == 4'b1001) //if instr is bltu or bgeu, check if unsigned srca is less than b, and set to 1, 0 accordingly
            UnsignedLess = (ALUResult == 0) ? 1 : 0;

    end

endmodule
    


    