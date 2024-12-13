module aludecode (
    
    input logic [2:0] funct3D,     // bits 14:12 of instruction
    input logic funct75D,          // bit 30 of instruction
    input logic [2:0] aluopD,      // Determines ALU operation based on instruction type
    output logic [4:0] aluctrlD    // ALU control signal
);

/*
 aluctrlD signals
    0000 - Add
    0001 - Subtract
    0010 - AND
    0011 - OR
    0100 - XOR
    0101 - SLL (Shift Left Logical)
    0110 - SRL (Shift Right Logical)
    0111 - SRA (Shift Right Arithmetic)
    1000 - SLT (Set Less Than)
    1001 - SLTU (Set Less Than Unsigned)
*/

always_comb begin
    aluctrlD = 5'b00000;

    case(aluopD)


        //r-type instructions
        3'b000: begin
            case({funct3D, funct75D})

            4'b0000: aluctrlD = 5'b00000; //Add
            4'b0001: aluctrlD = 5'b00001; //Sub
            4'b1000: aluctrlD = 5'b00010; //Xor
            4'b1001: aluctrlD = 5'b00010; //Xor
            4'b1100: aluctrlD = 5'b00011; //Or
            4'b1101: aluctrlD = 5'b00011; //Or
            4'b1110: aluctrlD = 5'b00100; //AND
            4'b1111: aluctrlD = 5'b00100; //AND
            4'b0010: aluctrlD = 5'b00101; //Shift left logical
            4'b0011: aluctrlD = 5'b00101; //Shift left logical
            4'b1010: aluctrlD = 5'b00110; //Shift Right Logical
            4'b1011: aluctrlD = 5'b00111; //Shift Right Arithmetic
            4'b0100: aluctrlD = 5'b01000; //Set Less Than
            4'b0101: aluctrlD = 5'b01000; //Set Less Than
            4'b0110: aluctrlD = 5'b01001; //Set Less Than Unsigned
            4'b0111: aluctrlD = 5'b01001; //Set Less Than Unsigned

            default: aluctrlD = 5'b00000; //Add
            endcase
        end

        //i-type instructions
        3'b001: begin
            case(funct3D)

            3'b000: aluctrlD = 5'b00000; //Addi
            3'b100: aluctrlD = 5'b00010; //Xori
            3'b110: aluctrlD = 5'b00011; //Ori
            3'b111: aluctrlD = 5'b00100; //ANDi

            3'b001: aluctrlD = 5'b00101; //Shift Left Logical Imm

            3'b101: begin
                if(funct75D == 1'b0) 
                    aluctrlD = 5'b00110; //Shift Right Logical Imm
                else 
                    aluctrlD = 5'b00111; //Shift Right Arithmetic Imm
            end

            3'b010: aluctrlD = 5'b01000; //Set Less Than Imm
            3'b011: aluctrlD = 5'b01001; //Set Less Than Imm Unsigned
        

            //idk if i should keep doing defaults for the rest of the ALUctrls

            default: aluctrlD = 5'b00000;
            endcase
        end

        3'b100: begin
            case(funct3D)                            //need to set aluctrlD values for branch intructions as well
                3'b000: aluctrlD = 5'b01010; //beq
                3'b001: aluctrlD = 5'b01011; //bne
                3'b100: aluctrlD = 5'b01100; //blt
                3'b101: aluctrlD = 5'b01101; //bge
                3'b110: aluctrlD = 5'b01110; //bltu -- ALUResult = ($unsigned(SrcA) < $unsigned(SrcB)) ? 1 : 0;
                3'b111: aluctrlD = 5'b01111; //bgeu same as bltu
            default: aluctrlD = 5'b00000;
            endcase
        end

        3'b101: begin                       //jalr instr , looking back this is prob unnecessary :( 
            case(funct3D)
                3'b000: aluctrlD = 5'b00000;
            default: aluctrlD = 5'b00000;
            endcase
        end

        3'b110: aluctrlD = 5'b10000; //lui

        default: aluctrlD = 5'b00000;
    endcase

    


end




endmodule
