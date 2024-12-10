module ALUDecode (
    //input logic opcode5, // 5:5 of instr
    input logic [2:0] funct3, //14:12 of instr
    input logic funct75, //30:30 bit of instr
    
    input logic [2:0] ALUop, // links aludecode with control - used to distinguish all the different types of instructions for ALUCtrl to work with

    output logic [3:0] ALUCtrl
);

/*
 ALUCtrl signals
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
    case(ALUop)


        //r-type instructions
        3'b000: begin
            case({funct3, funct75})

            4'b0000: ALUCtrl = 4'b0000; //Add
            4'b0001: ALUCtrl = 4'b0001; //Sub
            4'b1000: ALUCtrl = 4'b0010; //Xor
            4'b1100: ALUCtrl = 4'b0011; //Or
            4'b1110: ALUCtrl = 4'b0100; //AND
            4'b0010: ALUCtrl = 4'b0101; //Shift left logical
            4'b1010: ALUCtrl = 4'b0110; //Shift Right Logical
            4'b1011: ALUCtrl = 4'b0111; //Shift Right Arithmetic
            4'b0100: ALUCtrl = 4'b1000; //Set Less Than
            4'b0110: ALUCtrl = 4'b1001; //SEt Less Than Unsigned

            default: ALUCtrl = 4'b0000; //Add
            endcase
        end

        //i-type instructions
        3'b001: begin
            case(funct3)

            3'b000: ALUCtrl = 4'b0000; //Addi
            3'b100: ALUCtrl = 4'b0010; //Xori
            3'b110: ALUCtrl = 4'b0011; //Ori
            3'b111: ALUCtrl = 4'b0100; //ANDi

            3'b001: ALUCtrl = 4'b0101; //Shift Left Logical Imm

            3'b101: begin
                if(funct75 == 1'b0) 
                    ALUCtrl = 4'b0110; //Shift Right Logical Imm
                else 
                    ALUCtrl = 4'b0111; //Shift Right Arithmetic Imm
            end

            3'b010: ALUCtrl = 4'b1000; //Set Less Than Imm
            3'b011: ALUCtrl = 4'b1001; //Set Less Than Imm Unsigned
        

            //idk if i should keep doing defaults for the rest of the ALUctrls

            default: ALUCtrl = 4'b0000;
            endcase
        end

        3'b100: begin
            case(funct3)                            //need to set aluctrl values for branch intructions as well
                3'b000: ALUCtrl = 4'b1010; //beq
                3'b001: ALUCtrl = 4'b1011; //bne
                3'b100: ALUCtrl = 4'b1100; //blt
                3'b101: ALUCtrl = 4'b1101; //bge
                3'b110: ALUCtrl = 4'b1110; //bltu -- ALUResult = ($unsigned(SrcA) < $unsigned(SrcB)) ? 1 : 0;
                3'b111: ALUCtrl = 4'b1111; //bgeu same as bltu
            default: ALUCtrl = 4'b0000;
            endcase
        end

        3'b101: begin                       //jalr instr , looking back this is prob unnecessary :( 
            case(funct3)
                3'b000: ALUCtrl = 4'b0000;
            default: ALUCtrl = 4'b0000;
            endcase
        end
        default: ALUCtrl = 4'b0000;
    endcase

    


end




endmodule

