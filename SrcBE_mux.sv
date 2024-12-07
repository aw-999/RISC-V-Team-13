module SrcBEmux #(
    parameter W = 32,
    parameter AW = 5
)(
    input logic ALUSrcE,
    input logic [W-1:0] RD2E,
    input logic [W-1:0] ImmExtE,

    output logic [W-1:0] SrcBE

);

always_comb begin 
    if(ALUSrcE) begin
        SrcBE = ImmExtE;
    end
    else begin 
        SrcBE = RD2E;
    end
end

endmodule
