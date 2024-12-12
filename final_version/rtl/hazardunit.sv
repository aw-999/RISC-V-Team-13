module hazardunit (

    input logic [4:0] rdE,
    input logic [4:0] rdM,
    input logic [4:0] rdW,
    input logic regwriteM,
    input logic regwriteW,
    input logic [4:0] rs1D,
    input logic [4:0] rs2D,
    input logic [4:0] rs1E,
    input logic [4:0] rs2E,
    //input logic branchE,
    //input logic jumpE,

    input logic pcsrcE,//first bit of PCSrcE
    input logic resultsrcE, //first bit of ResultSrcE

    output logic [1:0] forwardaE,
    output logic [1:0] forwardbE,
    output logic flushD,
    output logic flushE,
    output logic stallF,
    output logic stallD

);

    always_comb begin

        
        forwardaE = 2'b00;
        forwardbE = 2'b00;
        stallF = 1'b0;
        stallD = 1'b0;
        flushD = 1'b0;
        flushE = 1'b0;

        //forwardAE
        if (((rs1E == rdM) && regwriteM) && (rs1E != 5'b00000)) begin // Forward from Memory stage
            forwardaE = 2'b10;
        end

        else if (((rs1E == rdW) && regwriteW) && (rs1E != 5'b00000)) begin // Forward from Writeback stage
            forwardaE = 2'b01;
        end

        else begin
            forwardaE = 2'b00;
        end
        
        //forwardBE
        if (((rs2E == rdM) && regwriteM) && (rs2E != 5'b00000)) begin // forward from Memory stage
            forwardbE = 2'b10;
        end

        else if (((rs2E == rdW) && regwriteW) && (rs2E != 5'b00000)) begin // forward from Writeback stage
            forwardbE = 2'b01;
        end

        else begin
            forwardbE = 2'b00;
        end

        if (resultsrcE && ((rdE == rs1D) || (rdE == rs2D))) begin
            stallF = 1'b1;  
            stallD = 1'b1;  
            flushE = 1'b1; 
        end
        else begin 
            stallF = 1'b0;
            stallD = 1'b0;
        end

        if (pcsrcE) begin
            flushE = 1'b1;
            flushD = 1'b1;
        end
    end
endmodule
