module HazardUnit (


    //need to implement flush - 

    input logic branchD,
    input logic ZeroE,
    output logic flush, 


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

        flush = 1'b0;
        ForwardAE = 2'b00;
        ForwardBE = 2'b00;

        if (branchD && ZeroE) begin
            flush = 1'b1;
        end

        
        if (RegWriteM && (RdM != 0) && (RdM == Rs1E)) begin
            ForwardAE = 2'b10; 
        end 
        else if (RegWriteW && (RdW != 0) && (RdW == Rs1E)) begin
            ForwardAE = 2'b01; 
        end 

       
        if (RegWriteM && (RdM != 0) && (RdM == Rs2E)) begin
            ForwardBE = 2'b10; 
        end 
        else if (RegWriteW && (RdW != 0) && (RdW == Rs2E)) begin
            ForwardBE = 2'b01; 
        end 
    end
endmodule