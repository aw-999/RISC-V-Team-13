module mux_PCSrc #(
    parameter DATA_WIDTH = 32 // Default data width
)(
    input logic [DATA_WIDTH-1:0] PC, 
    input logic [DATA_WIDTH-1:0] PCTargetE,  
    input logic [1:0]            PCSrcE,  
    input logic [DATA_WIDTH-1:0] ALUResultM

    output logic [DATA_WIDTH-1:0] PCN   
);


    always_comb begin
        case (PCsrcE)
            2'b00: PCN = PC + 4;
            2'b01: PCN = PCTargetE;
            2'b11: PCN = ALUResultM;

        default: PCN = PC + 4;
    endcase
    end

endmodule
