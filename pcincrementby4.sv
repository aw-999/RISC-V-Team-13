module PCIncrementby4 #(
    parameter W = 32 
)(
    input logic [W-1:0] PC,
    output logic [W-1:0] PCPlus4
    
);   
    always_comb begin
        PCPlus4 = PC + 4;
    end

endmodule
