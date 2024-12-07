module HazardUnit (

    
    input logic flush, 

    input logic [4:0] RdM,
    input logic [4:0] RdW,
    input logic RegWriteW,
    input logic RegWriteM,
    input logic [4:0] Rs1E,
    input logic [4:0] Rs2E,

    output logic [1:0] ForwardAE,
    output logic [1:0] ForwardBE,
    output logic flushE,
    output logic stallF,
    output logic stallD

);

    always_comb begin

        
        ForwardAE = 2'b00;
        ForwardBE = 2'b00;
        stallF = 1'b0;
        stallD = 1'b0;
        flushE = 1'b0;

        
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

        if (MemReadE && ((RdE == Rs1D) || (RdE == Rs2D))) begin
            stallF = 1'b1;  
            stallD = 1'b1;  
            flushE = 1'b1; 
        end
    end
endmodule