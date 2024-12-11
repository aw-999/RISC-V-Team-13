module PL_ALUDecode (
    //input logic opcode5,          // 5th bit of opcode
    input logic [2:0] funct3,     // bits 14:12 of instruction
    input logic funct75,          // bit 30 of instruction
    
    input logic [2:0] ALUop,      // Determines ALU operation based on instruction type

    output logic [3:0] ALUCtrl    // ALU control signal
);

    always_comb begin
        ALUCtrl = 4'b0000; // Default: Add
        case (ALUop)
            3'b000: begin // R-type instructions
                case ({funct3, funct75})
                    4'b0000: ALUCtrl = 4'b0000; // Add
                    4'b0001: ALUCtrl = 4'b0001; // Sub
                    4'b1000: ALUCtrl = 4'b0100; // XOR
                    4'b1100: ALUCtrl = 4'b0011; // OR
                    4'b1110: ALUCtrl = 4'b0010; // AND
                    4'b0010: ALUCtrl = 4'b0101; // SLL
                    4'b1010: ALUCtrl = 4'b0110; // SRL
                    4'b1011: ALUCtrl = 4'b0111; // SRA
                    4'b0100: ALUCtrl = 4'b1000; // SLT
                    4'b0110: ALUCtrl = 4'b1001; // SLTU
                    default: ALUCtrl = 4'b0000;
                endcase
            end

            3'b001: begin // I-type instructions
                case (funct3)
                    3'b000: ALUCtrl = 4'b0000; // Addi
                    3'b100: ALUCtrl = 4'b0100; // Xori
                    3'b110: ALUCtrl = 4'b0011; // Ori
                    3'b111: ALUCtrl = 4'b0010; // Andi
                    3'b001: ALUCtrl = 4'b0101; // SLLI
                    3'b101: begin
                        if(funct75 == 1'b0) 
                            ALUCtrl = 4'b0110; //Shift Right Logical Imm
                        else 
                            ALUCtrl = 4'b0111; //Shift Right Arithmetic Imm
                    
                    end
                    3'b010: ALUCtrl = 4'b1000; // SLTI
                    3'b011: ALUCtrl = 4'b1001; // SLTIU
                    default: ALUCtrl = 4'b0000;
                endcase
            end

            3'b100: begin // Branch instructions
                case (funct3)
                    3'b000: ALUCtrl = 4'b0001; // beq
                    3'b001: ALUCtrl = 4'b0001; // bne
                    3'b100: ALUCtrl = 4'b0001; // blt
                    3'b101: ALUCtrl = 4'b0001; // bge
                    3'b110: ALUCtrl = 4'b1001; // bltu
                    3'b111: ALUCtrl = 4'b1001; // bgeu
                    default: ALUCtrl = 4'b0000;
                endcase
            end

            3'b101: begin // JALR 
                case (funct3)
                    3'b000: ALUCtrl = 4'b0000; 
                    default: ALUCtrl = 4'b0000;
                endcase
            end

            default: ALUCtrl = 4'b0000; 
        endcase
    end
endmodule
