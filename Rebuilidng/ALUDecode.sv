module ALUDecode (
    input logic opcode5, // 5:5 of instr
    input logic [2:0] funct3, //14:12 of instr
    input logic funct75, //30:30 bit of instr
    
    input logic [2:0] ALUop, // links aludecode with control

    output logic [3:0] ALUCtrl
);

r, i 

always_comb begin
    case({funct3, funct75})
        4'b0000: ALUCtrl = // add | addi
        4'b0001: // sub
        4'b1100:
        4'b1110:
        4'b0010:
        4'b1010:
        4'b1011:
        4'b0100:
        4'b0110:

end
