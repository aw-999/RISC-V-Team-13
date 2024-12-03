module HazardUnit (
    input logic [4:0] RdM,
    input logic [4:0] RdW,
    input logic RegWriteW,
    input logic RegWriteM,
    input logic [4:0] Rs1E,
    input logic [4:0] Rs2E,

    output logic [1:0] ForwardAE,
    output logic [1:0] ForwardBE
);

    always_comb begin

        //choosing for ForwardAE
        if (RegWriteM && (RdM != 0) && (RdM == Rs1E)) begin
            ForwardAE = 2'b10; 
        end 
        else if (RegWriteW && (RdW != 0) && (RdW == Rs1E)) begin
            ForwardAE = 2'b01; 
        end 
        else begin
            ForwardAE = 2'b00; 
        end

        //choosing for ForwardBE
        if (RegWriteM && (RdM != 0) && (RdM == Rs2E)) begin
            ForwardBE = 2'b10; 
        end 
        else if (RegWriteW && (RdW != 0) && (RdW == Rs2E)) begin
            ForwardBE = 2'b01; 
        end 
        else begin
            ForwardBE = 2'b00; 
        end
    end
endmodule