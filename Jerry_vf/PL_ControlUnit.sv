module PL_ControlUnit (
    input logic [6:0] opcode,     //instr[6:0]
    //input logic ZeroFlag,         
    //input logic NegativeFlag,     
    //input logic UnsignedLess,     


    
          
    output logic [1:0] ResultSrc, 
    output logic MemWrite,        
    output logic ALUSrc,          
    output logic [2:0] ImmSrc,    
    output logic RegWrite,        
    output logic [2:0] ALUop    

   
);

    // ALU operation decoding
    always_comb begin
        case (opcode)
            7'b0110011: ALUop = 3'b000; // R-type
            7'b0010011: ALUop = 3'b001; // I-type
            7'b0000011: ALUop = 3'b010; // Load
            7'b0100011: ALUop = 3'b011; // Store
            7'b1100011: ALUop = 3'b100; // Branch
            7'b1101111: ALUop = 3'b101; // Jump (JAL)
            7'b1100111: ALUop = 3'b101; // JALR
            7'b0110111: ALUop = 3'b110; // LUI
            7'b0010111: ALUop = 3'b111; // AUIPC
            default:    ALUop = 3'b000;
        endcase
    end

    // Result source decoding
    always_comb begin
        case (opcode)
            7'b0000011: ResultSrc = 2'b01; // Load
            7'b1101111: ResultSrc = 2'b10; // JAL
            7'b0010111: ResultSrc = 2'b11; // AUIPC
            default:    ResultSrc = 2'b00; // ALU result
        endcase
    end


    always_comb begin
        MemWrite = (opcode == 7'b0100011); // Store
    end

   
    always_comb begin
        ALUSrc = (opcode != 7'b0110011); 
    end

    
    always_comb begin
        case (opcode)
            7'b0010011: ImmSrc = 3'b000; // I-type
            7'b0100011: ImmSrc = 3'b001; // S-type
            7'b1100011: ImmSrc = 3'b010; // B-type
            7'b0110111: ImmSrc = 3'b011; // LUI
            7'b0010111: ImmSrc = 3'b011; // AUIPC
            7'b1101111: ImmSrc = 3'b100; // J-type
            7'b1100111: ImmSrc = 3'b100; // JALR
            default:    ImmSrc = 3'b000;
        endcase
    end

    
    always_comb begin

        case (opcode)
            7'b0110011, 7'b0010011, 7'b0000011, 7'b1101111, 7'b1100111, 7'b0110111, 7'b0010111: 
                RegWrite = 1'b1; 
            default: 
                RegWrite = 1'b0; 
        endcase
    end


    /*always_comb begin
        branch = (opcode == 7'b1100011); // Branch
        jump = (opcode == 7'b1101111 || opcode == 7'b1100111); // JAL or JALR
    end*/

endmodule
