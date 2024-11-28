module aluflagdecode (
    input logic [2:0] func3,
    input logic [1:0] ALUop,
    output logic [2:0] ALUflag
);

always_comb
case (func3)
    3'b000: ALUflag = 3'b000; // beq
    3'b001: ALUflag = 3'b001; // bne
    3'b100: ALUflag = 3'b101; // blt
    3'b101: ALUflag = 3'b100; // bge
    3'b110: ALUflag = 3'b111; // bltu
    3'b111: ALUflag = 3'b011; // bgeu

    default: ALUflag = 3'b010;
endcase

always_comb begin
    if (ALUop == 2'b11) ALUflag = 3'b011;
end
    
endmodule
