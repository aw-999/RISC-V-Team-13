module PCSrc_mux #(
    parameter DATA_WIDTH = 32 // Default data width
)(
    input logic [DATA_WIDTH-1:0] PCTarget,  
    input logic            PCSrc,       //2bit to 1bit
    input logic [DATA_WIDTH-1:0] PCPlus4,
    //input logic [DATA_WIDTH-1:0] ALUResult,

    output logic [DATA_WIDTH-1:0] PCN   
);


    always_comb begin
        case (PCSrc)
            1'b0: PCN = PCPlus4;
            1'b1: PCN = PCTarget;
            //2'b11: PCN = ALUResult;         

        default: PCN = PCPlus4;
    endcase
    end

endmodule
