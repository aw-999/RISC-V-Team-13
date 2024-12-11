module jalr_mux # ( parameter W = 32)(
    input logic jalr, //select
    input logic [W-1:0] rs1,
    input logic [W-1:0] PC,

    output logic [W-1:0] PC_out
);

always_comb begin 
    if(jalr)
        PC_out = rs1;
    else 
        PC_out = PC;

end

endmodule



