module PCE #(
    parameter WIDTH = 32
)(

    input logic clk,
    // input logic rst,


    //Control
    input logic RegWriteE,
    input logic [1:0] ResultSrcE,
    input logic MemWriteE,
    input logic [WIDTH-1:0] ImmExtE,

    output logic RegWriteM,
    output logic [1:0] ResultSrcM,
    output logic MemWriteM,
    output logic [WIDTH-1:0] ImmExtM,


    //Data

    input logic [WIDTH - 1:0] ALUResultE,
    input logic [WIDTH - 1:0] WriteDataE,
    input logic [4:0] RdE,
    input logic [WIDTH - 1:0] PCPlus4E,
    input logic [2:0] funct3E,

    output logic [WIDTH - 1:0] ALUResultM,
    output logic [WIDTH - 1:0] WriteDataM,
    output logic [4:0] RdM,
    output logic [WIDTH - 1:0] PCPlus4M,
    output logic [2:0] funct3M

);

always_ff @(posedge clk) begin

    // if (rst) begin
    //     //Control
    //     RegWriteM <= 0;
    //     ResultSrcM <= 0;
    //     MemWriteM <= 0;

    //     //Data
    //     ALUResultM <= 0;
    //     WriteDataM <= 0;
    //     RdM <= 0;
    //     PCPlus4M <= 0;
    //     funct3M <= 0;
    //     ImmExtM <= 0;

    // end

    // else begin

        //Control
        RegWriteM <= RegWriteE;
        ResultSrcM <= ResultSrcE;
        MemWriteM <= MemWriteE;
        ImmExtM <= ImmExtE;

        //Data
        ALUResultM <= ALUResultE;
        WriteDataM <= WriteDataE;
        RdM <= RdE;
        PCPlus4M <= PCPlus4E;
        funct3M <= funct3E;
    //end
end

endmodule
