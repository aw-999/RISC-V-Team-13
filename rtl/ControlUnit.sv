module ControlUnit (
    input logic [6:0] opcode, // 6:0 of instr
    
    /*
    input logic ZeroFlag,
    input logic NegativeFlag,
    input logic UnsignedLess,
    */
    input logic branch,
    //input logic [2:0] funct3,
    
    output logic PCSrc, //2bit to 1bit
    output logic [1:0] ResultSrc, // 4 different cases
    output logic MemWrite,
    output logic ALUSrc,
    output logic [2:0] ImmSrc,
    output logic RegWrite,
    output logic jalr,

    //this is for aludecode
    output logic [2:0] ALUop
);



    //aluoperation
    always_comb begin
        case(opcode)

        7'b0110011: ALUop = 3'b000; //r-type
        7'b0010011: ALUop = 3'b001; //i-type
        7'b0000011: ALUop = 3'b010; //l-type
        7'b0100011: ALUop = 3'b011; //s-type
        7'b1100011: ALUop = 3'b100; //b-type
        7'b1101111: ALUop = 3'b101; //j-type + jump and link - distinguished using funct3

        7'b1100111: ALUop = 3'b101; //had to use this for jalr to make sense in the aludecode

        7'b0110111: ALUop = 3'b110; //u-type - lui
        7'b0010111: ALUop = 3'b111; //u-type auipc

        default: ALUop = 3'b000;
        endcase

    
    //jalr instr
    case(opcode)
        7'b1100111: jalr = 1;
        default: jalr = 0;
    endcase

    //Result Src
    case(opcode)
        7'b0110011: ResultSrc = 2'b00; // R-type ALU instructions
        7'b0010011: ResultSrc = 2'b00; // I-type ALU instructions (addi, andi, ori, etc.)
        7'b0000011: ResultSrc = 2'b01; // I-type load instructions (lw, lh, lb, etc.)
        7'b1101111: ResultSrc = 2'b10; // J-type instructions (jal)
        7'b1100111: ResultSrc = 2'b10; // I-type jalr (Jump and Link Register)
        7'b0010111: ResultSrc = 2'b11; // U-type auipc
        default: ResultSrc = 2'b00;
    endcase

    

    //MemWrite
     
        case (opcode)
        7'b0100011: MemWrite = 1'b1; // s-type

        default: MemWrite = 1'b0;
        endcase


    //ALUSrc

        case (opcode)
        
        7'b0110011: ALUSrc = 1'b0; //r-type
        7'b0010011: ALUSrc = 1'b1; //i-type
        7'b0000011: ALUSrc = 1'b1; //l-type
        7'b0100011: ALUSrc = 1'b1; //s-type
        
        7'b1100011: ALUSrc = 1'b0; //b-type -- compares 2 register values

        7'b1101111: ALUSrc = 1'b1; //jump and link
        7'b1100111: ALUSrc = 1'b1; //jump and link register
        7'b0110111: ALUSrc = 1'b1; //u-type - lui
        7'b0010111: ALUSrc = 1'b1; //u-type auipc

        default: ALUSrc = 1'b0;
        endcase

    //ImmSrc
        case (opcode)

        7'b0010011: ImmSrc = 3'b000;//i-type
        7'b0100011: ImmSrc = 3'b001;//s-type
        7'b1100011: ImmSrc = 3'b010;//b-type
        7'b0110111: ImmSrc = 3'b011;//u-type
        7'b0010111: ImmSrc = 3'b011;
        7'b1101111: ImmSrc = 3'b100;//j-type
        7'b1100111: ImmSrc = 3'b000;
        7'b0000011: ImmSrc = 3'b000; //load instr
        7'b0110011: ImmSrc = 3'b000; //R-type

        default: ImmSrc = 3'b000;
        endcase

    //RegWrite

        case(opcode)

        7'b0110011: RegWrite = 1'b1; //r-type
        7'b0010011: RegWrite = 1'b1; //i-type

        7'b0000011: RegWrite = 1'b1; //l-type

        7'b0100011: RegWrite = 1'b0; //s-type       //s-type doesnt write to reg
        7'b1100011: RegWrite = 1'b0; //b-type       //b-type doesnt write to reg
        7'b1101111: RegWrite = 1'b1; //jump and link                
        7'b1100111: RegWrite = 1'b1; //jump and link register
        7'b0110111: RegWrite = 1'b1; //u-type - lui
        7'b0010111: RegWrite = 1'b1; //u-type auipc

        default: RegWrite = 1'b0;
        endcase

    //pcsrc
    // remove when doing pipelining, needs to be outside

    //uses zeroflag, branch - internal logic, jump - internal logic an
    
    // high when branch is being used (high)

    /*3 different stages
    1- no branch and no jump, 
    2- branch and no jump
    3 - no branch and jump
    4- stall (not needed for now) */

    //pcsrc zero and negflag version (for single cycle)
    /*if(opcode == 7b'1100011)
        case(funct3)
            3'b000: if(ZeroFlag) PCSrc = 2'b01; //beq
            3'b001: if(~ZeroFlag) PCSrc = 2'b01; //bne
            3'b100: if(NegativeFlag) PCSrc = 2'b01; //blt
            3'b101: if(~NegativeFlag || ZeroFlag) PCSrc = 2'b01; //bge
            3'b110: if(NegativeFlag) PCSrc = 2'b01; //bltu
            3'b111: if(~NegativeFlag || ZeroFlag) PCSrc = 2'b01; //bgeu  
            //how to deal with unsigned branch - bltu bgeu??
            default: PCSrc = 2'b00;
        endcase

    if(opcode == 7b'1100111)
        PCSrc = 2'b11;*/

    case(opcode)
        7'b1100011: 
            if(branch) PCSrc = 1'b1;
            else PCSrc = 1'b0;
            /*
            case(funct3)
                3'b000: if(ZeroFlag) PCSrc = 2'b01; //beq
                3'b001: if(~ZeroFlag) PCSrc = 2'b01; //bne
                3'b100: if(NegativeFlag) PCSrc = 2'b01; //blt
                3'b101: if(~NegativeFlag || ZeroFlag) PCSrc = 2'b01; //bge
                3'b110: if(UnsignedLess) PCSrc = 2'b01; //bltu
                3'b111: if(~UnsignedLess) PCSrc = 2'b01; //bgeu  
                default: PCSrc = 2'b00;
            endcase
            */
        7'b1100111: PCSrc = 1'b1;  //jalr - rs1 + imm - from mux
        7'b1101111: PCSrc = 1'b1;  //jal - might need to look into that later
        default: PCSrc = 1'b0;
    endcase



end







    





endmodule

