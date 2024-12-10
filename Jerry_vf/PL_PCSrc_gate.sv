module PL_PCSrc_gate (
    input logic ZeroFlag,
    input logic NegativeFlag,
    input logic UnsignedLess,
    input logic [6:0] opcode,
    input logic [2:0] funct3,

    output logic [1:0] PCSrcE
);

    always_comb begin

        PCSrcE = 2'b00;

        if (opcode == 7'b1101111) begin // JAL 
            PCSrcE = 2'b11;
        end else if (opcode == 7'b1100111) begin // JALR 
            PCSrcE = 2'b11;
        end
    
/*branch, jump signals not needed, opcode tells us instruction, case checks conditions for branching,
for JAL/JALR, pcsrc set to 2'b11 automatically. */

        else if (opcode == 7'b1100011) begin          
            case (funct3)
                3'b000: if (ZeroFlag) PCSrcE = 2'b01; // BEQ
                3'b001: if (~ZeroFlag) PCSrcE = 2'b01; // BNE
                3'b100: if (NegativeFlag) PCSrcE = 2'b01; // BLT
                3'b101: if (~NegativeFlag || ZeroFlag) PCSrcE = 2'b01; // BGE
                3'b110: if (UnsignedLess) PCSrcE = 2'b01; // BLTU
                3'b111: if (~UnsignedLess) PCSrcE = 2'b01; // BGEU
                default: PCSrcE = 2'b00; 
            endcase
        end
    end

endmodule
