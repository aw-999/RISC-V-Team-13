module SrcB_mux #(
    parameter W = 32
    //parameter AW = 5
)(
    input logic ALUSrc,
    input logic [W-1:0] RD2,
    input logic [W-1:0] ImmExt,

    output logic [W-1:0] SrcB

);

always_comb begin 
    if(ALUSrc) begin
        SrcB = ImmExt;
    end
    else begin 
        SrcB = RD2;
    end
end

endmodule
