module PCSrc_mux #(
    parameter DATA_WIDTH = 32 // Default data width
)(
    input logic [DATA_WIDTH-1:0] PCTarget,  
    input logic [1:0]            PCSrc,  
    input logic [DATA_WIDTH-1:0] PCPlus4,
    input logic [DATA_WIDTH-1:0] ALUResult,

    output logic [DATA_WIDTH-1:0] PCN   
);


    always_comb begin
        case (PCSrc)
            2'b00: PCN = PCPlus4;
            2'b01: PCN = PCTarget;
            2'b11: PCN = ALUResult;

        default: PCN = PCPlus4;
    endcase
    end

endmodule
