module top #(parameter DATA_WIDTH = 32)(
    input logic clk,
    input logic rst,
    input logic trigger,
    output logic [DATA_WIDTH-1:0] a0

);

//internal logics

//fetch
logic [DATA_WIDTH-1:0] pcF, pcnextF, pcplus4F, instrF;
logic stallF;

//decode
logic [DATA_WIDTH-1:0] pcD, instrD, pcplus4D, immextD, RD1D, RD2D;
logic regwriteD, memwriteD, flushD, stallD, alusrcD, jalrD;
//logic jumpD, branchD;
logic [1:0] resultsrcD, pcsrcD;
logic [2:0] aluopD, immsrcD;
logic [3:0] aluctrlD;

//execute
logic [DATA_WIDTH-1:0] pcE, pcplus4E, immextE, RD1E, RD2E, pctargetE, writedataE, srcaE, srcbE, aluresultE, jalrmuxoutE;
logic regwriteE, memwriteE, flushE, alusrcE, flagE, jalrE;
//logic jumpE, branchE;
logic [1:0] resultsrcE, pcsrcE, forwardaE, forwardbE;
logic [2:0] funct3E;
logic [3:0] aluctrlE;
logic [4:0] rdE, rs1E, rs2E;


//memory
logic [DATA_WIDTH-1:0] pcplus4M, writedataM, aluresultM, readdataM, immextM;
logic regwriteM, memwriteM;
logic [1:0] resultsrcM;
logic [2:0] funct3M;
logic [4:0] rdM;

//write back
logic [DATA_WIDTH-1:0] pcplus4W, aluresultW, readdataW, resultW, immextW;
logic regwriteW;
logic [1:0] resultsrcW;
logic [4:0] rdW;


instructionmemory instructionmemory (
    .pcF (pcF),

    .instrF (instrF)
);

mux_pcsrc mux_pcsrc (
    .pcplus4F (pcplus4F),
    .pctargetE (pctargetE),
    .aluresultW (aluresultW),
    .pcsrcE (pcsrcE),

    .pcnextF (pcnextF)
);

pcincrementby4 pcincrementby4 (
    .pcF (pcF),

    .pcplus4F (pcplus4F)
);

pcreg pcreg (
    .clk (clk),
    .rst (rst),
    .stallF (stallF),
    .pcnextF (pcnextF),

    .pcF (pcF)
);

pcf pcfetch (
    .clk (clk),
    .flushD (flushD),
    .stallD (stallD),
    .instrF (instrF),
    .pcF (pcF),
    .pcplus4F (pcplus4F),

    .instrD (instrD),
    .pcD (pcD),
    .pcplus4D (pcplus4D)
);



control controlunit (

    .opcodeD (instrD[6:0]),
    .flagE (flagE),

    //.jumpD (jumpD),
    //.branchD (branchD),
    .jalrD (jalrD),
    .pcsrcD (pcsrcD),
    .resultsrcD (resultsrcD),
    .memwriteD (memwriteD),
    .alusrcD (alusrcD),
    .immsrcD (immsrcD),
    .regwriteD (regwriteD),
    .aluopD (aluopD)
);



aludecode aludecode (
    .funct3D (instrD[14:12]),
    .funct75D (instrD[30]),
    .aluopD (aluopD),
    
    .aluctrlD (aluctrlD)
);


signextend signextend (
    .immsrcD (immsrcD),
    .instrD (instrD),

    .immextD (immextD)
);

regfile regfile (
    
    .clk (clk),
    .regwriteW (regwriteW),
    .trigger (trigger),
    .rdW (rdW),
    .adin1D (instrD[19:15]),
    .adin2D (instrD[24:20]),
    .resultW (resultW),

    .RD1D (RD1D),
    .RD2D (RD2D),
    .a0 (a0)
);




pcd pcedecode (

    .clk (clk),    

    //input logic [WIDTH-1:0] instr,

    //Control
    .regwriteD (regwriteD),
    .resultsrcD (resultsrcD),
    .memwriteD (memwriteD),
    //.jumpD (jumpD),
    //.branchD (branchD),
    .funct3D (instrD[14:12]),
    .aluctrlD (aluctrlD),
    .alusrcD (alusrcD),
    .RD1D (RD1D),
    .RD2D (RD2D),
    .pcD (pcD),
    .rdD (instrD[11:7]),
    .immextD (immextD),
    .pcplus4D (pcplus4D),
    .jalrD (jalrD),
    .pcsrcD (pcsrcD),
    //Hazard
    .rs1D (instrD[19:15]),
    .rs2D (instrD[24:20]),
    .flushE (flushE),
    
    .regwriteE (regwriteE),
    .resultsrcE (resultsrcE),
    .memwriteE (memwriteE),
    //.jumpE (jumpE),
    //.branchE (branchE),
    .funct3E (funct3E),
    .aluctrlE (aluctrlE),
    .alusrcE (alusrcE),
    .RD1E (RD1E),
    .RD2E (RD2E),
    .pcE (pcE),
    .rdE (rdE),
    .immextE (immextE),
    .pcplus4E (pcplus4E),
    .jalrE (jalrE),
    .pcsrcE (pcsrcE),
    .rs1E (rs1E),
    .rs2E (rs2E)

);

mux_jalr mux_jalr (
    .pcE (pcE),
    .RD1E (RD1E),
    .jalrE (jalrE),

    .jalrmuxoutE (jalrmuxoutE)
);




alu alu (
    .srcaE (srcaE),
    .srcbE (srcbE),
    .aluctrlE (aluctrlE),

    .aluresultE (aluresultE),
    .flagE (flagE) //zeroflag
);

mux_srcae mux_srcae (
    .resultW (resultW),
    .RD1E (RD1E),
    .aluresultM (aluresultM),
    .forwardaE (forwardaE),

    .srcaE (srcaE)
);

mux_srcbe mux_srcbe (

    .resultW (resultW),
    .RD2E (RD2E),
    .aluresultM (aluresultM),
    .forwardbE (forwardbE),

    .writedataE (writedataE)
);

mux_alu mux_alu (
    .writedataE (writedataE),
    .immextE (immextE),
    .alusrcE (alusrcE),

    .srcbE (srcbE)
);

pcadder pcadder (
    .pcE (jalrmuxoutE),
    .immextE (immextE),
    
    .pctargetE (pctargetE)
);

pce pcexecute (
    .clk (clk),

    .regwriteE (regwriteE),
    .resultsrcE (resultsrcE),
    .memwriteE (memwriteE),
    .immextE (immextE),
    .aluresultE (aluresultE),
    .writedataE (writedataE),
    .rdE (rdE),
    .pcplus4E (pcplus4E),
    .funct3E (funct3E),

    .regwriteM (regwriteM),
    .resultsrcM (resultsrcM),
    .memwriteM (memwriteM),
    .immextM (immextM),
    .aluresultM (aluresultM),
    .writedataM (writedataM),
    .rdM (rdM),
    .pcplus4M (pcplus4M),
    .funct3M (funct3M)
);
datamemory datamemory (
    .clk (clk),
    .aluresultM (aluresultM), // aluresult formerly Ad
    .memwriteM (memwriteM), 
    .funct3M (funct3M),
    .writedataM (writedataM), //write data formerly DIn

    .readdataM (readdataM)
);

pcm pcmemory (
    .clk (clk),
    //Control
    .regwriteM (regwriteM),
    .resultsrcM (resultsrcM),

    .regwriteW (regwriteW),
    .resultsrcW (resultsrcW),

    //Data
    .readdataM (readdataM),
    .aluresultM (aluresultM),
    .rdM (rdM),
    .pcplus4M (pcplus4M),
    .immextM (immextM),

    .readdataW (readdataW),
    .aluresultW (aluresultW),
    .rdW (rdW),
    .pcplus4W (pcplus4W),
    .immextW (immextW)
);

mux_writeback mux_writeback (
    .aluresultW (aluresultW),
    .readdataW (readdataW),
    .pcplus4W (pcplus4W),
    .immextW (immextW),

    .resultsrcW (resultsrcW),
    .resultW (resultW)
);

hazardunit hazardunit (
    .rdE (rdE),
    .rdM (rdM),
    .rdW (rdW),
    .regwriteM (regwriteM),
    .regwriteW (regwriteW),
    .rs1D (instrD[19:15]),
    .rs2D (instrD[24:20]),
    .rs1E (rs1E),
    .rs2E (rs2E),
    //jumpE (jumpE),
    //branchE (branchE),

    .pcsrcE (pcsrcE[0]),//first bit of PCSrcE
    .resultsrcE (resultsrcE[0]), //first bit of ResultSrcE

    .forwardaE (forwardaE),
    .forwardbE (forwardbE),
    .flushD (flushD),
    .flushE (flushE),
    .stallF (stallF),
    .stallD (stallD)
);

endmodule

