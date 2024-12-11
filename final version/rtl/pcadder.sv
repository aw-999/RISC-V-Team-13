module pcadder #(parameter W = 32)(
    input logic [W-1:0] pcE,
    input logic [W-1:0] immextE,
    
    output logic [W-1:0] pctargetE
);

assign pctargetE = pcE + immext;

endmodule
