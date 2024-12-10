module PCD #(
    parameter WIDTH = 32

)(

    input logic clk,
    input logic rst,
    

    //input logic [WIDTH-1:0] instr,

    //Control
    input logic RegWriteD,
    input logic [1:0] ResultSrcD,
    input logic MemWriteD,
    // input logic JumpD,
    // input logic BranchD,
    input logic [6:0] opcodeD,
    input logic [2:0] funct3D,

    input logic [2:0] ALUCtrlD,
    input logic ALUSrcD,
    

    output logic RegWriteE,
    output logic [1:0] ResultSrcE,
    output logic MemWriteE,
    // output logic JumpE,
    // output logic BranchE,
    input logic [6:0] opcodeE,
    input logic [2:0] funct3E,

    output logic [2:0] ALUCtrlE,
    output logic ALUSrcE,
    


    //DATA
    input logic [WIDTH - 1:0] RD1D,
    input logic [WIDTH - 1:0] RD2D,
    input logic [WIDTH - 1:0] PCD,
    input logic [4:0] RdD,
    input logic [WIDTH - 1:0] ImmExtD,
    input logic [WIDTH - 1:0] PCPlus4D,

    output logic [WIDTH - 1:0] RD1E,
    output logic [WIDTH - 1:0] RD2E,
    output logic [WIDTH - 1:0] PCE,
    output logic [4:0] RdE,
    output logic [WIDTH - 1:0] ImmExtE,
    output logic [WIDTH - 1:0] PCPlus4E,

    //Hazard
    input logic [4:0] Rs1D,
    input logic [4:0] Rs2D,
    input logic flush,

    output logic [4:0] Rs1E,
    output logic [4:0] Rs2E

);

always_ff @(posedge clk) begin

    if (flush) begin
        //control
        RegWriteE <= 0;
        ResultSrcE <= 0;
        MemWriteE <= 0;
        JumpE <= 0;
        BranchE <= 0;
        ALUCtrlE <= 0;
        ALUSrcE <= 0;
        PCsrcE <= 0;
        opcodeE <= 0;
        funct3E <= 0;


        //data
        RD1E <= 0;
        RD2E <= 0;
        PCE <= 0;
        RdE <= 0;
        ImmExtE <= 0;
        PCPlus4E <= 0;

        //Hazard
        Rs1E <= 0;
        Rs2E <= 0;

    end
    else begin
        //control
        RegWriteE <= RegWriteD;
        ResultSrcE <= ResulSrcD;
        MemWriteE <= MemWriteD;
        JumpE <= JumpD;
        BranchE <= BranchD;
        ALUCtrlE <= ALUCtrlD;
        ALUSrcE <= ALUSrcD;
        opcodeE <= opcodeD;
        funct3E <= funct3D;

        //data
        RD1E <= RD1D;
        RD2E <= RD2D;
        PCE <= PCD;
        RdE <= RdD;
        ImmExtE <= ImmExtD;
        PCPlus4E <= PCPlus4D;
        PCsrcE <= PCsrcD;

         //Hazard
        Rs1E <= Rs1D;
        Rs2E <= Rs2D;
    end
end

endmodule
