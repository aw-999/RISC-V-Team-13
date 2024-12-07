module PCSrc_gate (
    input logic ZeroFlag,
    input logic NegativeFlag,
    input logic UnsignedLess,
    input logic [6:0] opcode,
    input logic [2:0] func3,
    input logic Jump,
    input logic Branch,
    output logic [1:0] PCSrc
);

    always_comb begin
        
        PCSrc = 2'b00;

        if (opcode == 7'b1101111) begin // JAL 
            PCSrc = 2'b11;
        end else if (opcode == 7'b1100111) begin // JALR 
            PCSrc = 2'b11;
        end
/*branch, jump signals not needed, opcode tells us instruction, case checks conditions for branching,
 for JAL/JALR, pcsrc set to 2'b11 automatically. */
       
        else if (opcode == 7'b1100011) begin          
            case (func3)
                3'b000: if (ZeroFlag) PCSrc = 2'b01; // BEQ
                3'b001: if (~ZeroFlag) PCSrc = 2'b01; // BNE
                3'b100: if (NegativeFlag) PCSrc = 2'b01; // BLT
                3'b101: if (~NegativeFlag || ZeroFlag) PCSrc = 2'b01; // BGE
                3'b110: if (UnsignedLess) PCSrc = 2'b01; // BLTU
                3'b111: if (~UnsignedLess) PCSrc = 2'b01; // BGEU
                default: PCSrc = 2'b00; 
            endcase
        end
    end

endmodule
