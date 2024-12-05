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
    output logic NegativeFlag
);


always_comb begin 
    case()
    


    
