module mux_alu #(parameter W = 32)(
    input logic [W-1:0] writedataE,
    input logic [W-1:0] immextE,
    input logic alusrcE,
    output logic [W-1:0] srcbE
);

always_comb begin
    if (alusrcE) begin
        srcbE = immextE;
    end

    else begin 
        srcbE = writedataE;
    end
end
    
endmodule
