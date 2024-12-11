module regfile #(parameter WAD = 5, WD = 32)( // A0 = reg[10] or reg 01010   R0 = 10 NOT USED
    input logic clk,
    input logic regwriteW,
    input logic trigger, 

    input logic [WAD-1:0] rdW, //A3, instr[11:7]
    input logic [WAD-1:0] adin1D, //instr[19:15]
    input logic [WAD-1:0] adin2D, //instr[24:20]
    input logic [WD-1:0] resultW, //formerly DIn 
    output logic [WD-1:0] RD1D, //formerly Dout1
    output logic [WD-1:0] RD2D, //formerly Dout2
    
    output logic [WD-1:0] a0

);

logic [WD-1: 0] RegArr [2**WAD-1: 0];

always_ff@(posedge clk)
begin
    if (regwriteW) RegArr[rdW] <= resultW;

    if (trigger) begin
        RegArr[5] <= 32'b1; 
    end

    RegArr[0] <= 32'b0;
end
always_comb begin
    RD1D = RegArr[adin1D];
    RD2D = RegArr[adin2D];
end

assign a0 = RegArr[10];

endmodule
