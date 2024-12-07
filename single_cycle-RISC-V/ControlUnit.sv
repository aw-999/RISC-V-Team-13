module ControlUnit (
    input logic [6:0] opcode, // 6:0 of instr
    input logic ZeroFlag,
    input logic NegativeFlag,
    input logic UnsignedLess,
    
    output logic [1:0] PCSrc,
    output logic [1:0] ResultSrc, // 4 different cases
    output logic MemWrite,
    output logic ALUSrc,
    output logic [2:0] ImmSrc,
    output logic RegWrite,

    //this is for aludecode
    output logic [2:0] ALUop
);

    logic branch;
    logic jump;



    //aluoperation
    always_comb begin
        case(opcode)

        7'b0110011: ALUop = 3'b000; //r-type
        7'b0010011: ALUop = 3'b001; //i-type
        7'b0000011: ALUop = 3'b010; //l-type
        7'b0100011: ALUop = 3'b011; //s-type
        7'b1100011: ALUop = 3'b100; //b-type
        7'b1101111: ALUop = 3'b101; //j-type + jump and link - distinguished using func3

        7'b1100111: ALUop = 3'b101; //had to use this for jalr to make sense in the aludecode

        7'b0110111: ALUop = 3'b110; //u-type - lui
        7'b0010111: ALUop = 3'b111; //u-type auipc

        default: ALUop = 3'b000;
        endcase

    //Result Src

    
        case(opcode)

        7'b0110011: ResultSrc = 2'b00;//alu instructions
        7'b0000011: ResultSrc = 2'b01; //load
        7'b1101111: ResultSrc = 2'b10; //j-type,
        7'b0010111: ResultSrc = 2'b11; //auipc

        default: ResultSrc = 2'b00;
        endcase
    

    //MemWrite
     
        case (opcode)
        7'b0100011: RamWrite = 1'b1; // s-type

        default: RamWrite = 1'b0;
        endcase


    //ALUSrc

        case (opcode)
        
        7'b0110011: ALUSrc = 1'b0; //r-type
        7'b0010011: ALUSrc = 1'b1; //i-type
        7'b0000011: ALUSrc = 1'b1; //l-type
        7'b0100011: ALUSrc = 1'b1; //s-type
        7'b1100011: ALUSrc = 1'b1; //b-type
        7'b1101111: ALUSrc = 1'b1; //jump and link
        7'b1100111: ALUSrc = 1'b1; //jump and link register
        7'b0110111: ALUSrc = 1'b1; //u-type - lui
        7'b0010111: ALUSrc = 1'b1; //u-type auipc

        default: ALUsrc = 1'b0;
        endcase

    //ImmSrc
        case (opcode)

        7'b0010011: ImmSrc = 3'b000;//i-type
        7'b0100011: ImmSrc = 3'b001;//s-type
        7'b1100011: ImmSrc = 3'b010;//b-type
        7'b0110111: ImmSrc = 3'b011;//u-type
        7'b0010111: ImmSrc = 3'b011;
        7'b1101111: ImmSrc = 3'b100;//j-type
        7'b1100111: ImmSrc = 3'b100;

        default: ImmSrc = 3'b000;
        endcase

    //RegWrite

        case(opcode)

        7'b0110011: RegWrite = 1'b0; //r-type
        7'b0010011: RegWrite = 1'b1; //i-type

        7'b0000011: RegWrite = 1'b0; //l-type

        7'b0100011: RegWrite = 1'b1; //s-type
        7'b1100011: RegWrite = 1'b1; //b-type
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

    if (opcode == 7'b1100011)
        assign branch = 1'b1;
    else 
        assign branch = 1'b0;
    

    if (opcode == 7'b1100011 || opcode == 7'b1101111) 
        assign jump = 1'b1;
    else 
        assign jump = 1'b0;

    /*3 different stages
    1- no branch and no jump, 
    2- branch and no jump
    3 - no branch and jump
    4- stall (not needed for now) */

    3 bit branch

    case ({branch, jump})
        2'b00: PCsrc = 2'b00; // No branch and no jump
        2'b10: PCsrc = 2'b01; // no branch and jump
        2'b01: PCsrc = 2'b11; // branch and jump
        default: PCsrc = 2'b00; // Default case
    endcase

    //pcsrc zero and negflag version (for single cycle)
    /*if(opcode == 7b'1100011)
        case(func3)
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
            case(func3)
                3'b000: if(ZeroFlag) PCSrc = 2'b01; //beq
                3'b001: if(~ZeroFlag) PCSrc = 2'b01; //bne
                3'b100: if(NegativeFlag) PCSrc = 2'b01; //blt
                3'b101: if(~NegativeFlag || ZeroFlag) PCSrc = 2'b01; //bge
                3'b110: if(Unsigned) PCSrc = 2'b01; //bltu
                3'b111: if(~Unsigned) PCSrc = 2'b01; //bgeu  
                //how to deal with unsigned branch - bltu bgeu??
                default: PCSrc = 2'b00;
            endcase
        7'b1100111: PCSrc = 2'b11;
    endcase



end







    





endmodule