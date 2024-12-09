module PCSrcGate (
    input logic Branch,           // Branch signal
    input logic Jump,             // Jump signal
    input logic ZeroFlag,         // Zero flag from ALU
    input logic NegativeFlag,     // Negative flag from ALU
    input logic UnsignedLess,     // Unsigned comparison result
    input logic [2:0] func3,      // Function code for branch type
    output logic [1:0] PCSrc      // Program Counter source
);

    always_comb begin
        // Default: No branch or jump
        PCSrc = 2'b00;

        if (Jump) begin
            // Jump instruction
            PCSrc = 2'b10;
        end else if (Branch) begin
            // Branch instruction: check condition
            case (func3)
                3'b000: if (ZeroFlag) PCSrc = 2'b01;  // BEQ
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