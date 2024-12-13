module top #(parameter DATA_WIDTH = 32)(
    input logic clk,
    input logic rst,
    input logic trigger,
    output logic [DATA_WIDTH-1:0] a0

);

//internal logics

//fetch
logic [DATA_WIDTH-1:0] pcF, pcnextF, pcplus4F, instrF;

//decode
logic [DATA_WIDTH-1:0] pcD, instrD, pcplus4D, immextD, RD1D, RD2D;
logic regwriteD, memwriteD, flushED, stallFD, alusrcD, jalrD, jumpD, branchD, memreadD, storeD, loadD;
//logic jumpD, branchD;
logic [1:0] resultsrcD;
logic [2:0] aluopD, immsrcD, memctrlD;
logic [4:0] aluctrlD;

//execute
logic [DATA_WIDTH-1:0] pcE, pcplus4E, immextE, RD1E, RD2E, pctargetE, writedataE, srcaE, srcbE, aluresultE, jalrmuxoutE;
logic regwriteE, memwriteE, alusrcE, flagE, jalrE, jumpE, branchE, pcsrcE, memreadE, storeE, loadE;
//logic jumpE, branchE;
logic [1:0] resultsrcE, forwardaE, forwardbE;
logic [2:0] memctrlE;
logic [4:0] aluctrlE;
logic [4:0] rdE, rs1E, rs2E;

//cache hit logic
logic hit;
logic [DATA_WIDTH-1:0] Cacheout;
logic [DATA_WIDTH-1:0] memoryout;

//memory
logic [DATA_WIDTH-1:0] pcplus4M, writedataM, aluresultM, readdataM /*immextM*/;
logic regwriteM, memwriteM, memreadM, storeM, loadM;
logic [1:0] resultsrcM;
logic [2:0] memctrlM;
logic [4:0] rdM;

//write back
logic [DATA_WIDTH-1:0] pcplus4W, aluresultW, readdataW, resultW /*immextW*/;
logic regwriteW;
logic [1:0] resultsrcW;
logic [4:0] rdW;

mux_pcsrc mux_pcsrc (
    .pcplus4F (pcplus4F),
    .pctargetE (pctargetE),
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
    .stallFD (stallFD),
    .pcnextF (pcnextF),
    

    .pcF (pcF)
);

instructionmemory instructionmemory (
    .pcF (pcF),

    .instrF (instrF)
);

pcf pcfetch (
    .clk (clk),

    .flushED (flushED),
    .stallFD (stallFD),

    .instrF (instrF),
    .pcF (pcF),
    .pcplus4F (pcplus4F),

    .instrD (instrD),
    .pcD (pcD),
    .pcplus4D (pcplus4D)
);



control controlunit (

    .opcodeD (instrD[6:0]),
    .funct3D (instrD[14:12]),
    .stallFD (stallFD),

    .jalrD (jalrD),
    .resultsrcD (resultsrcD),
    .memwriteD (memwriteD),
    .alusrcD (alusrcD),
    .immsrcD (immsrcD),
    .regwriteD (regwriteD),
    .aluopD (aluopD),
    .jumpD (jumpD),
    .branchD (branchD),
    .memreadD (memreadD),
    .memctrlD (memctrlD),
    .storeD (storeD),
    .loadD (loadD)
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
    .aluctrlD (aluctrlD),
    .alusrcD (alusrcD),
    .RD1D (RD1D),
    .RD2D (RD2D),
    .pcD (pcD),
    .rdD (instrD[11:7]),
    .immextD (immextD),
    .pcplus4D (pcplus4D),
    .jalrD (jalrD),
    .jumpD (jumpD),
    .branchD (branchD),
    .memctrlD (memctrlD),
    .memreadD (memreadD),
    .storeD (storeD),
    .loadD (loadD),

    //Hazard
    .rs1D (instrD[19:15]),
    .rs2D (instrD[24:20]),
    .flushED (flushED),
    
    .regwriteE (regwriteE),
    .resultsrcE (resultsrcE),
    .memwriteE (memwriteE),
    .aluctrlE (aluctrlE),
    .alusrcE (alusrcE),
    .RD1E (RD1E),
    .RD2E (RD2E),
    .pcE (pcE),
    .rdE (rdE),
    .immextE (immextE),
    .pcplus4E (pcplus4E),
    .jalrE (jalrE),
    .jumpE (jumpE),
    .branchE (branchE),
    .memctrlE (memctrlE),
    .memreadE (memreadE),
    .storeE (storeE),
    .loadE (loadE),

    .rs1E (rs1E),
    .rs2E (rs2E)

);

mux_jalr mux_jalr (
    .pcE (pcE),
    .RD1E (RD1E),
    .jalrE (jalrE),

    .jalrmuxoutE (jalrmuxoutE)
);

gate_pcsrc gate_pcsrc (
    .jumpE (jumpE),
    .branchE (branchE),
    .flagE (flagE),

    .pcsrcE (pcsrcE)
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
    .memctrlE (memctrlE),
    .memreadE (memreadE),
    //.immextE (immextE),
    .aluresultE (aluresultE),
    .writedataE (writedataE),
    .rdE (rdE),
    .pcplus4E (pcplus4E),
    .storeE (storeE),
    .loadE (loadE),

    .regwriteM (regwriteM),
    .resultsrcM (resultsrcM),
    .memwriteM (memwriteM),
    .memctrlM (memctrlM),
    .memreadM (memreadM),
    .storeM (storeM),
    .loadM (loadM),
    .aluresultM (aluresultM),
    .writedataM (writedataM),
    .rdM (rdM),
    .pcplus4M (pcplus4M)
);

data_2 datamemory (

    .clk (clk),
    .aluresultM (aluresultM[17:0]), 
    .memwriteM (memwriteM), 
    .memctrlM (memctrlM),
    .memreadM (memreadM),
    .writedataM (writedataM), 

    .readdataM (memoryout)
);

cache_2 cache_2 (
    .addressIn (aluresultM),
    .dataIn (writedataM),
    .LoadM (loadM),
    .storeM (storeM),
    .memwriteM (memwriteM),
    .clk (clk),
    .memIn (memoryout),

    .Dataout (Cacheout),
    .hit (hit)
);

memcache memcache (
    .hit (hit),
    .Cachein (Cacheout),
    .Memoryin (memoryout),

    .Cacheout (readdataM)
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
    //.immextM (immextM),

    .readdataW (readdataW),
    .aluresultW (aluresultW),
    .rdW (rdW),
    .pcplus4W (pcplus4W)
    //.immextW (immextW)
);

mux_writeback mux_writeback (

    .aluresultW (aluresultW),
    .readdataW (readdataW),
    .pcplus4W (pcplus4W),
    //.immextW (immextW),
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

    .jumpE (jumpE),
    .flagE (flagE),

    .memreadE (memreadE), //first bit of ResultSrcE
    //.pcsrcE (pcsrcE),

    .forwardaE (forwardaE),
    .forwardbE (forwardbE),
    .flushED (flushED),
    .stallFD (stallFD)
);

endmodule

