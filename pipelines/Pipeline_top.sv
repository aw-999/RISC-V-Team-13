module Pipeline_top #(
    parameter WIDTH = 32
)(
    input logic clk,
    
    //control
    input logic RegWriteD,
    input logic [1:0] ResultSrcD,
    input logic MemWriteD,
    input logic JumpD,
    input logic BranchD,
    input logic [2:0] ALUCtrlD,
    input logic ALUSrcD,

    //data

    //PCreg
    

    //PCFetch


)