module mux2 #(
    parameter DATA_WIDTH = 32 // Default data width
)(
    input  logic [DATA_WIDTH-1:0] PCPlus4F, 
    input  logic [DATA_WIDTH-1:0] PCTargetE,  
    input  logic                  PCSrcE1bit,  
    output logic [DATA_WIDTH-1:0] PCN   
);

    // MUX logic
    always_comb begin
        case (sel)
            1'b0: out = in0; 
            1'b1: out = in1; 
            default: out = {DATA_WIDTH{1'bx}}; 
        endcase
    end

endmodule
