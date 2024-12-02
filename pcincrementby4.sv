module PCIncrementby4 #(
    parameter W = 32 
)(
    input logic [W-1:0] PC,      
    input logic [W-1:0] IMMop,      
    input logic [W-1:0] DOutAlu,    
    input logic [1:0] PCSrc,       
    output logic [W-1:0] PCN       
);


    logic [W-1:0] branch_pc;
    assign branch_pc = PC + IMMop;

   
    always_comb begin
        case (PCSrc)
            2'b00: PCN = PC + 4;
            2'b01: PCN = branch_pc; 
            2'b11: PCN = DOutAlu;
            default: PCN = PC + 4;    
        endcase
    end

endmodule
