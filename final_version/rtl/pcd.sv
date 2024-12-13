module pcd #(
    parameter WIDTH = 32

)(

    input logic clk,    

    //Control
    input logic regwriteD,
    input logic [1:0] resultsrcD,
    input logic memwriteD,

    input logic [4:0] aluctrlD,
    input logic alusrcD,
    input logic jumpD,
    input logic branchD,
    input logic jalrD,
    input logic memreadD,
    input logic [2:0] memctrlD,
    

    output logic regwriteE,
    output logic [1:0] resultsrcE,
    output logic memwriteE,
    output logic jalrE,
    output logic branchE,
    output logic jumpE,
    output logic memreadE,
    output logic [2:0] memctrlE,

    output logic [4:0] aluctrlE,
    output logic alusrcE,
    


    //DATA
    input logic [WIDTH - 1:0] RD1D,
    input logic [WIDTH - 1:0] RD2D,
    input logic [WIDTH - 1:0] pcD,
    input logic [4:0] rdD,
    input logic [WIDTH - 1:0] immextD,
    input logic [WIDTH - 1:0] pcplus4D,

    output logic [WIDTH - 1:0] RD1E,
    output logic [WIDTH - 1:0] RD2E,
    output logic [WIDTH - 1:0] pcE,
    output logic [4:0] rdE,
    output logic [WIDTH - 1:0] immextE,
    output logic [WIDTH - 1:0] pcplus4E,

    //Hazard
    input logic [4:0] rs1D,
    input logic [4:0] rs2D,
    input logic flushED,

    output logic [4:0] rs1E,
    output logic [4:0] rs2E

    

);

always_ff @(posedge clk) begin

    if (flushED) begin
        //control
        regwriteE <= 0;
        resultsrcE <= 0;
        memwriteE <= 0;
        aluctrlE <= 0;
        alusrcE <= 0;
        jalrE <= 0;
        jumpE <= 0;
        branchE <= 0;
        memctrlE <= 0;
        memreadE <= 0;


        //data
        RD1E <= 0;
        RD2E <= 0;
        pcE <= 0;
        rdE <= 0;
        immextE <= 0;
        pcplus4E <= 0;

        //Hazard
        rs1E <= 0;
        rs2E <= 0;

    end
    else begin
        //control
        regwriteE <= regwriteD;
        resultsrcE <= resultsrcD;
        memwriteE <= memwriteD;
        aluctrlE <= aluctrlD;
        alusrcE <= alusrcD;
        jalrE <= jalrD;
        branchE <= branchD;
        jumpE <= jumpD;
        memctrlE <= memctrlD;
        memreadE <= memreadD;

        //data
        RD1E <= RD1D;
        RD2E <= RD2D;
        pcE <= pcD;
        rdE <= rdD;
        immextE <= immextD;
        pcplus4E <= pcplus4D;

         //Hazard
        rs1E <= rs1D;
        rs2E <= rs2D;
    end
end

endmodule
