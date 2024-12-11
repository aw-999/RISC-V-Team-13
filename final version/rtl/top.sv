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
logic regwriteD, memwriteD, flushD, stallD, alusrcD;
//logic jumpD, branchD;
logic [1:0] resultsrcD, pcsrcD;
logic [2:0] funct3D, aluopD, immsrcD;
logic [3:0] aluctrlD;
logic [4:0] rdD, rs1D, rs2D;
logic [6:0] opcodeD;


//execute
logic [DATA_WIDTH-1:0] pcE, instrE, pcplus4E, immextE, RD1E, RD2E, pctargetE, writedataE, srcaE, srcbE, aluresultE;
logic regwriteE, memwriteE, flushE, alusrcE, branchE;
//logic jumpE;
logic [1:0] resultsrcE, pcsrcE, forwardaE, forwardbE;
logic [2:0] funct3E;
logic [3:0] aluctrlE;
logic [4:0] rdE, rs1E, rs2E;
logic [6:0] opcodeE;

//memory
logic [DATA_WIDTH-1:0] pcplus4M, writedataM, aluresultM, readdataM;
logic regwriteM, memwriteM;
logic [1:0] resultsrcM;;
logic [2:0] funct3M;
logic [4:0] rdM;

//write back
logic [DATA_WIDTH-1:0] pcplus4W, aluresultW, readdataW, resultW;
logic regwriteW;
logic [1:0] resultsrcW;
logic [4:0] rdW;


instructionmemory instructionmemory (
    .pcF (pcF),
    .instrF (instrF)
);

mux_pcsrc mux_pcsrc (
    .pcplus4F (pcplus4F),
    .pcTargetE (pcTarget),
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
    .branchE (branchE),

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
    
    output logic [WD-1:0] a0
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
    .opcodeD (instrD[6:0]),
    .funct3D (instrD[14:12]),

    .aluctrlD (aluctrlD),
    .alusrcD (alusrcD),
    

    .regwriteE (regwriteE),
    .resultsrcE (resultsrcE),
    .memwriteE (memwriteE),
    //.jumpE (jumpE),
    //.branchE (branchE),
    .opcodeE (opcodeE),
    .funct3E (funct3E),

    .aluctrlE (aluctrlE),
    .alusrcE (alusrcE),

    //DATA
    .RD1D (RD1D),
    .RD2D (RD2D),
    .pcD (pcD),
    .rdD (rdD),
    .immextD (immextD),
    .pcplus4D (pcplus4D),

    .RD1E (RD1E),
    .RD2E (RD2E),
    .pcE (pcE),
    .rdE (rdE),
    .immextE (immextE),
    .pcplus4E (pcplus4E),

    //Hazard
    .rs1D (rs1D),
    .rs2D (rs2D),
    .flushE (flushE),

    .rs1E (rs1E),
    .rs2E (rs2E)

);

// mux_jalr mux_jalr (

// );

alu alu (
    .srcaE (srcaE),
    .srcbE (srcbE),
    .aluctrlE (aluctrlE),

    .aluresultE (aluresultE),
    .branchE (branchE)
);

mux_srcae mux_srcae (
    .resultW (resultW),
    .RD1E (RD1E),
    .aluresultM (aluresultM),
    .forwardE (forwardE),

    .srcaE (srcaE)
);

mux_srcbe mux_srcbe (

    .resultW (resultW),
    .RD2E (RD2E),
    .aluresultM (aluresultM),
    .forwardE (forwardE),

    .writedataE (writedataE)
);

mux_alu mux_alu (
    .writedataE (writedataE),
    .immextE (immextE),
    .alusrcE (alusrcE),

    .srcbE (srcbE)
);

gate_pcsrc gate_pcsrc (

);

pcadder pcadder (
    .pcE (pcE),
    .immextE (immextE),
    
    .pctargetE (pctargetE)
);

pce pcexecute (
    .clk (clk),
    //Control
    .regwriteE (regwriteE),
    .resultsrcE (resultsrcE),
    .memwriteE (memwriteE),
    .immextE (immextE),

    .regwriteM (regwriteM),
    .resultsrcM (resultsrcM),
    .memwriteM (memwriteM),
    .immextM (immextM),

    //Data
    .aluresultE (aluresultE),
    .writedataE (writedataE),
    .rdE (rdE),
    .pcplus4E (pcplus4E),
    .funct3E (funct3E),

    .aluresultM (aluresultM),
    .writedataM (writedataM),
    .rdM (rdM),
    .pcplus4M (pcplus4M),
    .funct3M (funct3M)
);

datamemory datamemory (
    .clk (clk),
    .aluresult (aluresult), // aluresult formerly Ad
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
    .rs1D (rs1D),
    .rs2D (rs2D),
    .rs1E (rs1E),
    .rs2E (rs2E),

    .pcsrcE (pcsrcE[0]),//first bit of PCSrcE
    .resultsrcE (resultsrcE[0]), //first bit of ResultSrcE

    .forwardaE (forwardaE),
    .forwardbE (forwardbE),
    .flushD (flushD),
    .flushE (flushE),
    .stallF (stallF),
    .stallD (stallD)
);