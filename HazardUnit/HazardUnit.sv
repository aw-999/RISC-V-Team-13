module HazardUnit (

    input logic [4:0] RdE,
    input logic [4:0] RdM,
    input logic [4:0] RdW,
    input logic RegWriteM,
    input logic RegWriteW,
    input logic [4:0] Rs1D,
    input logic [4:0] Rs2D,
    input logic [4:0] Rs1E,
    input logic [4:0] Rs2E,

    input logic PCSrcE,//first bit of PCSrcE
    input logic ResultSrce, //first bit of ResultSrcE

    output logic [1:0] ForwardAE,
    output logic [1:0] ForwardBE,
    output logic flushD,
    output logic flushE,
    output logic stallF,
    output logic stallD

);

    always_comb begin

        
        ForwardAE = 2'b00;
        ForwardBE = 2'b00;
        stallF = 1'b0;
        stallD = 1'b0;
        flushD = 1'b0;
        flushE = 1'b0;

        //forwardAE
        if (((Rs1E == RdM) && RegWriteM) && (Rs1E != 5'b00000)) begin // Forward from Memory stage
            ForwardAE = 2'b10;
        end

        else if (((Rs1E == RdW) && RegWriteW) && (Rs1E != 5'b00000)) begin // Forward from Writeback stage
            ForwardAE = 2'b01;
        end

        else begin
            ForwardAE = 2'b00;
        end
        
        //forwardBE
        if (((Rs2E == RdM) && RegWriteM) && (Rs2E != 5'b00000)) begin // Forward from Memory stage
            ForwardBE = 2'b10;
        end

        else if (((Rs2E == RdW) && RegWriteW) && (Rs2E != 5'b00000)) begin // Forward from Writeback stage
            ForwardBE = 2'b01;
        end

        else begin
            ForwardBE = 2'b00;
        end

        if (ResultSrce && ((RdE == Rs1D) || (RdE == Rs2D))) begin
            stallF = 1'b1;  
            stallD = 1'b1;  
            flushE = 1'b1; 
        end

        if (PCSrcE) begin
            flushE = 1'b1;
            flushD = 1'b1;
        end
    end
endmodule
