module control (
    input logic [6:0] opcodeD, // 6:0 of instr
    input logic [2:0] funct3D,
    input logic stallFD,
    
    output logic [1:0] resultsrcD, // 4 different cases
    output logic memwriteD,
    output logic alusrcD,
    output logic [2:0] immsrcD,
    output logic regwriteD,
    output logic [2:0] aluopD,
    output logic jalrD,
    output logic jumpD,          //pipelining needs jump and branch for pcsrc gate
    output logic branchD,
    output logic [2:0] memctrlD,
    output logic memreadD
);

    //aluoperation
    always_comb begin
                       
        resultsrcD = 0;  //define everything as 0 to begin with.
        immsrcD = 0;
        regwriteD = 0;
        aluopD = 0;
        jalrD = 0;
        jumpD = 0;
        branchD = 0;
        memctrlD = 0;
        memreadD = 0;
        
        //aludecode
        case(opcodeD)

        7'b0110011: aluopD = 3'b000; //r-type
        7'b0010011: aluopD = 3'b001; //i-type
        7'b0000011: aluopD = 3'b010; //l-type
        7'b0100011: aluopD = 3'b011; //s-type
        7'b1100011: aluopD = 3'b100; //b-type
        7'b1101111: aluopD = 3'b101; //j-type + jump and link - distinguished using funct3

        7'b1100111: aluopD = 3'b101; //had to use this for jalr to make sense in the aludecode

        7'b0110111: aluopD = 3'b110; //u-type - lui
        7'b0010111: aluopD = 3'b111; //u-type auipc

        default: aluopD = 3'b000;
        endcase

    
    //jalr instr
    case(opcodeD)
        7'b1100111: jalrD= 1;
        default: jalrD = 0;
    endcase

    //Result Src
    case(opcodeD)
        7'b0110011: resultsrcD = 2'b00; // R-type ALU instructions
        7'b0010011: resultsrcD = 2'b00; // I-type ALU instructions (addi, andi, ori, etc.)
        7'b0000011: resultsrcD = 2'b01; // I-type load instructions (lw, lh, lb, etc.)
        7'b1101111: resultsrcD = 2'b10; // J-type instructions (jal)
        7'b1100111: resultsrcD = 2'b10; // I-type jalr (Jump and Link Register)
        7'b0010111: resultsrcD = 2'b00; // U-type auipc
        default: resultsrcD = 2'b00;
    endcase

    

//MemWrite
    
    case (opcodeD)
    7'b0100011: memwriteD = 1'b1; // s-type

    default: memwriteD = 1'b0;
    endcase

    case (opcodeD)
    7'b0000011: begin 
        case(funct3D)
            3'b000: begin 
                    memctrlD = 3'b010; //lb
                    memreadD = 1;
            end
            3'b001: begin
                    memctrlD = 3'b001; //lh
                    memreadD = 1;
            end
            3'b010: begin 
                    memctrlD = 3'b000; //lw
                    memreadD = 1;
            end
            3'b100: begin 
                    memctrlD = 3'b011; //lbu
                    memreadD = 1;
            end
            3'b101: begin
                    memctrlD = 3'b100; //lhu
                    memreadD = 1;
            end
            default: begin
                    memctrlD = 3'b000; //w
                    memreadD = 0;
            end
        endcase
    end
        
    7'b0100011: begin//store
        case(funct3D)
        3'b000: memctrlD = 3'b010; //sb
        3'b001: memctrlD = 3'b001; //sh
        3'b010: memctrlD = 3'b000; //sw
        
        default: memctrlD = 3'b000; //sw
        endcase
    end

    default: memwriteD = 0;
    endcase


    //ALUSrc

    case (opcodeD)
    
    7'b0110011: alusrcD = 1'b0; //r-type
    7'b0010011: alusrcD = 1'b1; //i-type
    7'b0000011: alusrcD = 1'b1; //l-type
    7'b0100011: alusrcD = 1'b1; //s-type
    
    7'b1100011: alusrcD = 1'b0; //b-type -- compares 2 register values

    7'b1101111: alusrcD = 1'b1; //jump and link
    7'b1100111: alusrcD = 1'b1; //jump and link register
    7'b0110111: alusrcD = 1'b1; //u-type - lui
    7'b0010111: alusrcD = 1'b1; //u-type auipc

    default: alusrcD = 1'b0;
    endcase

    //ImmSrc
    case (opcodeD)

    7'b0010011: immsrcD = 3'b000;//i-type
    7'b0100011: immsrcD = 3'b001;//s-type
    7'b1100011: immsrcD = 3'b010;//b-type
    7'b0110111: immsrcD = 3'b011;//u-type
    7'b0010111: immsrcD = 3'b011; //auipc
    7'b1101111: immsrcD = 3'b100;//j-type
    7'b0000011: immsrcD = 3'b000; //load instr
    7'b0110011: immsrcD = 3'b000; //R-type

    default: immsrcD = 3'b000;
    endcase

//RegWrite

    case(opcodeD)

    7'b0110011: regwriteD = 1'b1; //r-type
    7'b0010011: regwriteD = 1'b1; //i-type

    7'b0000011: regwriteD = 1'b1; //l-type

    7'b0100011: regwriteD = 1'b0; //s-type       //s-type doesnt write to reg
    7'b1100011: regwriteD = 1'b0; //b-type       //b-type doesnt write to reg
    7'b1101111: regwriteD = 1'b1; //jump and link                
    7'b1100111: regwriteD = 1'b1; //jump and link register
    7'b0110111: regwriteD = 1'b1; //u-type - lui
    7'b0010111: regwriteD = 1'b1; //u-type auipc

    default: regwriteD = 1'b0;
    endcase

    //jump and branch to pcsrc gate
    case(opcodeD)
        7'b1100011: branchD = 1'b1;     //b - type
        7'b1100111: jumpD = 1'b1;  //jalr
        7'b1101111: jumpD = 1'b1;  //jal - might need to look into that later
        default: begin
        branchD = 1'b0;
        jumpD = 1'b0;
        end
    endcase

    if(stallFD) begin
        memwriteD = 0;
        memreadD = 0;
        regwriteD = 0;
    end

end

endmodule






