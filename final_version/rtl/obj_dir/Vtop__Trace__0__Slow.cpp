// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+157,"clk", false,-1);
    tracep->declBit(c+158,"rst", false,-1);
    tracep->declBit(c+159,"trigger", false,-1);
    tracep->declBus(c+160,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+163,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+157,"clk", false,-1);
    tracep->declBit(c+158,"rst", false,-1);
    tracep->declBit(c+159,"trigger", false,-1);
    tracep->declBus(c+160,"a0", false,-1, 31,0);
    tracep->declBus(c+3,"pcF", false,-1, 31,0);
    tracep->declBus(c+4,"pcnextF", false,-1, 31,0);
    tracep->declBus(c+5,"pcplus4F", false,-1, 31,0);
    tracep->declBus(c+6,"instrF", false,-1, 31,0);
    tracep->declBus(c+7,"pcD", false,-1, 31,0);
    tracep->declBus(c+8,"instrD", false,-1, 31,0);
    tracep->declBus(c+9,"pcplus4D", false,-1, 31,0);
    tracep->declBus(c+10,"immextD", false,-1, 31,0);
    tracep->declBus(c+161,"RD1D", false,-1, 31,0);
    tracep->declBus(c+162,"RD2D", false,-1, 31,0);
    tracep->declBit(c+11,"regwriteD", false,-1);
    tracep->declBit(c+12,"memwriteD", false,-1);
    tracep->declBit(c+13,"flushED", false,-1);
    tracep->declBit(c+14,"stallFD", false,-1);
    tracep->declBit(c+15,"alusrcD", false,-1);
    tracep->declBit(c+16,"jalrD", false,-1);
    tracep->declBit(c+17,"jumpD", false,-1);
    tracep->declBit(c+18,"branchD", false,-1);
    tracep->declBit(c+19,"memreadD", false,-1);
    tracep->declBit(c+20,"storeD", false,-1);
    tracep->declBit(c+21,"loadD", false,-1);
    tracep->declBus(c+22,"resultsrcD", false,-1, 1,0);
    tracep->declBus(c+23,"aluopD", false,-1, 2,0);
    tracep->declBus(c+24,"immsrcD", false,-1, 2,0);
    tracep->declBus(c+25,"memctrlD", false,-1, 2,0);
    tracep->declBus(c+26,"aluctrlD", false,-1, 4,0);
    tracep->declBus(c+27,"pcE", false,-1, 31,0);
    tracep->declBus(c+28,"pcplus4E", false,-1, 31,0);
    tracep->declBus(c+29,"immextE", false,-1, 31,0);
    tracep->declBus(c+30,"RD1E", false,-1, 31,0);
    tracep->declBus(c+31,"RD2E", false,-1, 31,0);
    tracep->declBus(c+32,"pctargetE", false,-1, 31,0);
    tracep->declBus(c+33,"writedataE", false,-1, 31,0);
    tracep->declBus(c+34,"srcaE", false,-1, 31,0);
    tracep->declBus(c+35,"srcbE", false,-1, 31,0);
    tracep->declBus(c+36,"aluresultE", false,-1, 31,0);
    tracep->declBus(c+37,"jalrmuxoutE", false,-1, 31,0);
    tracep->declBit(c+38,"regwriteE", false,-1);
    tracep->declBit(c+39,"memwriteE", false,-1);
    tracep->declBit(c+40,"alusrcE", false,-1);
    tracep->declBit(c+41,"flagE", false,-1);
    tracep->declBit(c+42,"jalrE", false,-1);
    tracep->declBit(c+43,"jumpE", false,-1);
    tracep->declBit(c+44,"branchE", false,-1);
    tracep->declBit(c+45,"pcsrcE", false,-1);
    tracep->declBit(c+46,"memreadE", false,-1);
    tracep->declBit(c+47,"storeE", false,-1);
    tracep->declBit(c+48,"loadE", false,-1);
    tracep->declBus(c+49,"resultsrcE", false,-1, 1,0);
    tracep->declBus(c+50,"forwardaE", false,-1, 1,0);
    tracep->declBus(c+51,"forwardbE", false,-1, 1,0);
    tracep->declBus(c+52,"memctrlE", false,-1, 2,0);
    tracep->declBus(c+53,"aluctrlE", false,-1, 4,0);
    tracep->declBus(c+54,"rdE", false,-1, 4,0);
    tracep->declBus(c+55,"rs1E", false,-1, 4,0);
    tracep->declBus(c+56,"rs2E", false,-1, 4,0);
    tracep->declBit(c+57,"hit", false,-1);
    tracep->declBus(c+58,"Cacheout", false,-1, 31,0);
    tracep->declBus(c+59,"memoryout", false,-1, 31,0);
    tracep->declBus(c+60,"pcplus4M", false,-1, 31,0);
    tracep->declBus(c+61,"writedataM", false,-1, 31,0);
    tracep->declBus(c+62,"aluresultM", false,-1, 31,0);
    tracep->declBus(c+63,"readdataM", false,-1, 31,0);
    tracep->declBit(c+64,"regwriteM", false,-1);
    tracep->declBit(c+65,"memwriteM", false,-1);
    tracep->declBit(c+66,"memreadM", false,-1);
    tracep->declBit(c+67,"storeM", false,-1);
    tracep->declBit(c+68,"loadM", false,-1);
    tracep->declBus(c+69,"resultsrcM", false,-1, 1,0);
    tracep->declBus(c+70,"memctrlM", false,-1, 2,0);
    tracep->declBus(c+71,"rdM", false,-1, 4,0);
    tracep->declBus(c+72,"pcplus4W", false,-1, 31,0);
    tracep->declBus(c+73,"aluresultW", false,-1, 31,0);
    tracep->declBus(c+74,"readdataW", false,-1, 31,0);
    tracep->declBus(c+75,"resultW", false,-1, 31,0);
    tracep->declBit(c+76,"regwriteW", false,-1);
    tracep->declBus(c+77,"resultsrcW", false,-1, 1,0);
    tracep->declBus(c+78,"rdW", false,-1, 4,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+163,"W", false,-1, 31,0);
    tracep->declBus(c+34,"srcaE", false,-1, 31,0);
    tracep->declBus(c+35,"srcbE", false,-1, 31,0);
    tracep->declBus(c+53,"aluctrlE", false,-1, 4,0);
    tracep->declBus(c+36,"aluresultE", false,-1, 31,0);
    tracep->declBit(c+41,"flagE", false,-1);
    tracep->declBus(c+34,"signed_srcaE", false,-1, 31,0);
    tracep->declBus(c+35,"signed_srcbE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aludecode ");
    tracep->declBus(c+79,"funct3D", false,-1, 2,0);
    tracep->declBit(c+80,"funct75D", false,-1);
    tracep->declBus(c+23,"aluopD", false,-1, 2,0);
    tracep->declBus(c+26,"aluctrlD", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_2 ");
    tracep->declBus(c+164,"TAGSIZE", false,-1, 31,0);
    tracep->declBus(c+165,"SETNUM", false,-1, 31,0);
    tracep->declBus(c+166,"DEGREE", false,-1, 31,0);
    tracep->declBus(c+62,"addressIn", false,-1, 31,0);
    tracep->declBus(c+61,"dataIn", false,-1, 31,0);
    tracep->declBit(c+68,"LoadM", false,-1);
    tracep->declBit(c+67,"storeM", false,-1);
    tracep->declBit(c+65,"memwriteM", false,-1);
    tracep->declBit(c+157,"clk", false,-1);
    tracep->declBus(c+59,"memIn", false,-1, 31,0);
    tracep->declBus(c+58,"Dataout", false,-1, 31,0);
    tracep->declBit(c+57,"hit", false,-1);
    tracep->declBus(c+81,"valid", false,-1, 15,0);
    tracep->declArray(c+82,"tag", false,-1, 463,0);
    tracep->declArray(c+97,"data", false,-1, 511,0);
    tracep->declBus(c+113,"lru", false,-1, 7,0);
    tracep->declBus(c+114,"way_sel", false,-1, 1,0);
    tracep->declBus(c+115,"Tag_in", false,-1, 28,0);
    tracep->declBus(c+116,"set_index", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"set", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+2,"way", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+117,"way", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("controlunit ");
    tracep->declBus(c+118,"opcodeD", false,-1, 6,0);
    tracep->declBus(c+79,"funct3D", false,-1, 2,0);
    tracep->declBit(c+14,"stallFD", false,-1);
    tracep->declBus(c+22,"resultsrcD", false,-1, 1,0);
    tracep->declBit(c+12,"memwriteD", false,-1);
    tracep->declBit(c+15,"alusrcD", false,-1);
    tracep->declBus(c+24,"immsrcD", false,-1, 2,0);
    tracep->declBit(c+11,"regwriteD", false,-1);
    tracep->declBus(c+23,"aluopD", false,-1, 2,0);
    tracep->declBit(c+16,"jalrD", false,-1);
    tracep->declBit(c+17,"jumpD", false,-1);
    tracep->declBit(c+18,"branchD", false,-1);
    tracep->declBus(c+25,"memctrlD", false,-1, 2,0);
    tracep->declBit(c+19,"memreadD", false,-1);
    tracep->declBit(c+21,"loadD", false,-1);
    tracep->declBit(c+20,"storeD", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datamemory ");
    tracep->declBus(c+163,"WA", false,-1, 31,0);
    tracep->declBus(c+167,"WAM", false,-1, 31,0);
    tracep->declBus(c+165,"WB", false,-1, 31,0);
    tracep->declBus(c+163,"WD", false,-1, 31,0);
    tracep->declBit(c+157,"clk", false,-1);
    tracep->declBus(c+119,"aluresultM", false,-1, 17,0);
    tracep->declBit(c+65,"memwriteM", false,-1);
    tracep->declBus(c+61,"writedataM", false,-1, 31,0);
    tracep->declBus(c+70,"memctrlM", false,-1, 2,0);
    tracep->declBit(c+66,"memreadM", false,-1);
    tracep->declBus(c+59,"readdataM", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gate_pcsrc ");
    tracep->declBit(c+41,"flagE", false,-1);
    tracep->declBit(c+44,"branchE", false,-1);
    tracep->declBit(c+43,"jumpE", false,-1);
    tracep->declBit(c+45,"pcsrcE", false,-1);
    tracep->declBit(c+120,"anded", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazardunit ");
    tracep->declBus(c+54,"rdE", false,-1, 4,0);
    tracep->declBus(c+71,"rdM", false,-1, 4,0);
    tracep->declBus(c+78,"rdW", false,-1, 4,0);
    tracep->declBit(c+64,"regwriteM", false,-1);
    tracep->declBit(c+76,"regwriteW", false,-1);
    tracep->declBus(c+121,"rs1D", false,-1, 4,0);
    tracep->declBus(c+122,"rs2D", false,-1, 4,0);
    tracep->declBus(c+55,"rs1E", false,-1, 4,0);
    tracep->declBus(c+56,"rs2E", false,-1, 4,0);
    tracep->declBit(c+41,"flagE", false,-1);
    tracep->declBit(c+43,"jumpE", false,-1);
    tracep->declBit(c+46,"memreadE", false,-1);
    tracep->declBus(c+50,"forwardaE", false,-1, 1,0);
    tracep->declBus(c+51,"forwardbE", false,-1, 1,0);
    tracep->declBit(c+13,"flushED", false,-1);
    tracep->declBit(c+14,"stallFD", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instructionmemory ");
    tracep->declBus(c+168,"WAD", false,-1, 31,0);
    tracep->declBus(c+165,"WD", false,-1, 31,0);
    tracep->declBus(c+163,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"pcF", false,-1, 31,0);
    tracep->declBus(c+6,"instrF", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memcache ");
    tracep->declBus(c+163,"WD", false,-1, 31,0);
    tracep->declBit(c+57,"hit", false,-1);
    tracep->declBus(c+58,"Cachein", false,-1, 31,0);
    tracep->declBus(c+59,"Memoryin", false,-1, 31,0);
    tracep->declBus(c+63,"Cacheout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_alu ");
    tracep->declBus(c+163,"W", false,-1, 31,0);
    tracep->declBus(c+33,"writedataE", false,-1, 31,0);
    tracep->declBus(c+29,"immextE", false,-1, 31,0);
    tracep->declBit(c+40,"alusrcE", false,-1);
    tracep->declBus(c+35,"srcbE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_jalr ");
    tracep->declBus(c+163,"W", false,-1, 31,0);
    tracep->declBus(c+27,"pcE", false,-1, 31,0);
    tracep->declBus(c+30,"RD1E", false,-1, 31,0);
    tracep->declBit(c+42,"jalrE", false,-1);
    tracep->declBus(c+37,"jalrmuxoutE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_pcsrc ");
    tracep->declBus(c+163,"W", false,-1, 31,0);
    tracep->declBus(c+5,"pcplus4F", false,-1, 31,0);
    tracep->declBus(c+32,"pctargetE", false,-1, 31,0);
    tracep->declBit(c+45,"pcsrcE", false,-1);
    tracep->declBus(c+4,"pcnextF", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_srcae ");
    tracep->declBus(c+163,"W", false,-1, 31,0);
    tracep->declBus(c+75,"resultW", false,-1, 31,0);
    tracep->declBus(c+30,"RD1E", false,-1, 31,0);
    tracep->declBus(c+62,"aluresultM", false,-1, 31,0);
    tracep->declBus(c+50,"forwardaE", false,-1, 1,0);
    tracep->declBus(c+34,"srcaE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_srcbe ");
    tracep->declBus(c+163,"W", false,-1, 31,0);
    tracep->declBus(c+75,"resultW", false,-1, 31,0);
    tracep->declBus(c+31,"RD2E", false,-1, 31,0);
    tracep->declBus(c+62,"aluresultM", false,-1, 31,0);
    tracep->declBus(c+51,"forwardbE", false,-1, 1,0);
    tracep->declBus(c+33,"writedataE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_writeback ");
    tracep->declBus(c+163,"W", false,-1, 31,0);
    tracep->declBus(c+73,"aluresultW", false,-1, 31,0);
    tracep->declBus(c+74,"readdataW", false,-1, 31,0);
    tracep->declBus(c+72,"pcplus4W", false,-1, 31,0);
    tracep->declBus(c+77,"resultsrcW", false,-1, 1,0);
    tracep->declBus(c+75,"resultW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcadder ");
    tracep->declBus(c+163,"W", false,-1, 31,0);
    tracep->declBus(c+37,"pcE", false,-1, 31,0);
    tracep->declBus(c+29,"immextE", false,-1, 31,0);
    tracep->declBus(c+32,"pctargetE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcedecode ");
    tracep->declBus(c+163,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+157,"clk", false,-1);
    tracep->declBit(c+11,"regwriteD", false,-1);
    tracep->declBus(c+22,"resultsrcD", false,-1, 1,0);
    tracep->declBit(c+12,"memwriteD", false,-1);
    tracep->declBus(c+26,"aluctrlD", false,-1, 4,0);
    tracep->declBit(c+15,"alusrcD", false,-1);
    tracep->declBit(c+17,"jumpD", false,-1);
    tracep->declBit(c+18,"branchD", false,-1);
    tracep->declBit(c+16,"jalrD", false,-1);
    tracep->declBit(c+19,"memreadD", false,-1);
    tracep->declBus(c+25,"memctrlD", false,-1, 2,0);
    tracep->declBit(c+20,"storeD", false,-1);
    tracep->declBit(c+21,"loadD", false,-1);
    tracep->declBit(c+38,"regwriteE", false,-1);
    tracep->declBus(c+49,"resultsrcE", false,-1, 1,0);
    tracep->declBit(c+39,"memwriteE", false,-1);
    tracep->declBit(c+42,"jalrE", false,-1);
    tracep->declBit(c+44,"branchE", false,-1);
    tracep->declBit(c+43,"jumpE", false,-1);
    tracep->declBit(c+46,"memreadE", false,-1);
    tracep->declBus(c+52,"memctrlE", false,-1, 2,0);
    tracep->declBit(c+47,"storeE", false,-1);
    tracep->declBit(c+48,"loadE", false,-1);
    tracep->declBus(c+53,"aluctrlE", false,-1, 4,0);
    tracep->declBit(c+40,"alusrcE", false,-1);
    tracep->declBus(c+161,"RD1D", false,-1, 31,0);
    tracep->declBus(c+162,"RD2D", false,-1, 31,0);
    tracep->declBus(c+7,"pcD", false,-1, 31,0);
    tracep->declBus(c+123,"rdD", false,-1, 4,0);
    tracep->declBus(c+10,"immextD", false,-1, 31,0);
    tracep->declBus(c+9,"pcplus4D", false,-1, 31,0);
    tracep->declBus(c+30,"RD1E", false,-1, 31,0);
    tracep->declBus(c+31,"RD2E", false,-1, 31,0);
    tracep->declBus(c+27,"pcE", false,-1, 31,0);
    tracep->declBus(c+54,"rdE", false,-1, 4,0);
    tracep->declBus(c+29,"immextE", false,-1, 31,0);
    tracep->declBus(c+28,"pcplus4E", false,-1, 31,0);
    tracep->declBus(c+121,"rs1D", false,-1, 4,0);
    tracep->declBus(c+122,"rs2D", false,-1, 4,0);
    tracep->declBit(c+13,"flushED", false,-1);
    tracep->declBus(c+55,"rs1E", false,-1, 4,0);
    tracep->declBus(c+56,"rs2E", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcexecute ");
    tracep->declBus(c+163,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+157,"clk", false,-1);
    tracep->declBit(c+38,"regwriteE", false,-1);
    tracep->declBus(c+49,"resultsrcE", false,-1, 1,0);
    tracep->declBit(c+39,"memwriteE", false,-1);
    tracep->declBit(c+46,"memreadE", false,-1);
    tracep->declBus(c+52,"memctrlE", false,-1, 2,0);
    tracep->declBit(c+47,"storeE", false,-1);
    tracep->declBit(c+48,"loadE", false,-1);
    tracep->declBit(c+64,"regwriteM", false,-1);
    tracep->declBus(c+69,"resultsrcM", false,-1, 1,0);
    tracep->declBit(c+65,"memwriteM", false,-1);
    tracep->declBit(c+66,"memreadM", false,-1);
    tracep->declBus(c+70,"memctrlM", false,-1, 2,0);
    tracep->declBit(c+67,"storeM", false,-1);
    tracep->declBit(c+68,"loadM", false,-1);
    tracep->declBus(c+36,"aluresultE", false,-1, 31,0);
    tracep->declBus(c+33,"writedataE", false,-1, 31,0);
    tracep->declBus(c+54,"rdE", false,-1, 4,0);
    tracep->declBus(c+28,"pcplus4E", false,-1, 31,0);
    tracep->declBus(c+62,"aluresultM", false,-1, 31,0);
    tracep->declBus(c+61,"writedataM", false,-1, 31,0);
    tracep->declBus(c+71,"rdM", false,-1, 4,0);
    tracep->declBus(c+60,"pcplus4M", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcfetch ");
    tracep->declBus(c+163,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+157,"clk", false,-1);
    tracep->declBit(c+13,"flushED", false,-1);
    tracep->declBit(c+14,"stallFD", false,-1);
    tracep->declBus(c+6,"instrF", false,-1, 31,0);
    tracep->declBus(c+3,"pcF", false,-1, 31,0);
    tracep->declBus(c+5,"pcplus4F", false,-1, 31,0);
    tracep->declBus(c+8,"instrD", false,-1, 31,0);
    tracep->declBus(c+7,"pcD", false,-1, 31,0);
    tracep->declBus(c+9,"pcplus4D", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcincrementby4 ");
    tracep->declBus(c+163,"W", false,-1, 31,0);
    tracep->declBus(c+3,"pcF", false,-1, 31,0);
    tracep->declBus(c+5,"pcplus4F", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcmemory ");
    tracep->declBus(c+163,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+157,"clk", false,-1);
    tracep->declBit(c+64,"regwriteM", false,-1);
    tracep->declBus(c+69,"resultsrcM", false,-1, 1,0);
    tracep->declBit(c+76,"regwriteW", false,-1);
    tracep->declBus(c+77,"resultsrcW", false,-1, 1,0);
    tracep->declBus(c+63,"readdataM", false,-1, 31,0);
    tracep->declBus(c+62,"aluresultM", false,-1, 31,0);
    tracep->declBus(c+71,"rdM", false,-1, 4,0);
    tracep->declBus(c+60,"pcplus4M", false,-1, 31,0);
    tracep->declBus(c+74,"readdataW", false,-1, 31,0);
    tracep->declBus(c+73,"aluresultW", false,-1, 31,0);
    tracep->declBus(c+78,"rdW", false,-1, 4,0);
    tracep->declBus(c+72,"pcplus4W", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcreg ");
    tracep->declBus(c+163,"W", false,-1, 31,0);
    tracep->declBit(c+157,"clk", false,-1);
    tracep->declBit(c+158,"rst", false,-1);
    tracep->declBit(c+14,"stallFD", false,-1);
    tracep->declBus(c+4,"pcnextF", false,-1, 31,0);
    tracep->declBus(c+3,"pcF", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+169,"WAD", false,-1, 31,0);
    tracep->declBus(c+163,"WD", false,-1, 31,0);
    tracep->declBit(c+157,"clk", false,-1);
    tracep->declBit(c+76,"regwriteW", false,-1);
    tracep->declBit(c+159,"trigger", false,-1);
    tracep->declBus(c+78,"rdW", false,-1, 4,0);
    tracep->declBus(c+121,"adin1D", false,-1, 4,0);
    tracep->declBus(c+122,"adin2D", false,-1, 4,0);
    tracep->declBus(c+75,"resultW", false,-1, 31,0);
    tracep->declBus(c+161,"RD1D", false,-1, 31,0);
    tracep->declBus(c+162,"RD2D", false,-1, 31,0);
    tracep->declBus(c+160,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+125+i*1,"RegArr", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("signextend ");
    tracep->declBus(c+163,"W", false,-1, 31,0);
    tracep->declBus(c+24,"immsrcD", false,-1, 2,0);
    tracep->declBus(c+8,"instrD", false,-1, 31,0);
    tracep->declBus(c+10,"immextD", false,-1, 31,0);
    tracep->declBit(c+124,"sign", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__cache_2__DOT__unnamedblk1__DOT__set),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__cache_2__DOT__unnamedblk1__DOT__unnamedblk2__DOT__way),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__pcF),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__pcnextF),32);
    bufp->fullIData(oldp+5,(((IData)(4U) + vlSelf->top__DOT__pcF)),32);
    bufp->fullIData(oldp+6,(((vlSelf->top__DOT__instructionmemory__DOT__RomArr
                              [(0xffffU & ((IData)(3U) 
                                           + vlSelf->top__DOT__pcF))] 
                              << 0x18U) | ((vlSelf->top__DOT__instructionmemory__DOT__RomArr
                                            [(0xffffU 
                                              & ((IData)(2U) 
                                                 + vlSelf->top__DOT__pcF))] 
                                            << 0x10U) 
                                           | ((vlSelf->top__DOT__instructionmemory__DOT__RomArr
                                               [(0xffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->top__DOT__pcF))] 
                                               << 8U) 
                                              | vlSelf->top__DOT__instructionmemory__DOT__RomArr
                                              [(0xffffU 
                                                & vlSelf->top__DOT__pcF)])))),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__pcD),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__instrD),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__pcplus4D),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__immextD),32);
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__regwriteD));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__memwriteD));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__flushED));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__stallFD));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__alusrcD));
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__jalrD));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__jumpD));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__branchD));
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__memreadD));
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__storeD));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__loadD));
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__resultsrcD),2);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__aluopD),3);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__immsrcD),3);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__memctrlD),3);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__aluctrlD),5);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__pcE),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__pcplus4E),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__immextE),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__RD1E),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__RD2E),32);
    bufp->fullIData(oldp+32,((((IData)(vlSelf->top__DOT__jalrE)
                                ? vlSelf->top__DOT__RD1E
                                : vlSelf->top__DOT__pcE) 
                              + vlSelf->top__DOT__immextE)),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__writedataE),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__srcaE),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__srcbE),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__aluresultE),32);
    bufp->fullIData(oldp+37,(((IData)(vlSelf->top__DOT__jalrE)
                               ? vlSelf->top__DOT__RD1E
                               : vlSelf->top__DOT__pcE)),32);
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__regwriteE));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__memwriteE));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__alusrcE));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__flagE));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__jalrE));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__jumpE));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__branchE));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__pcsrcE));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__memreadE));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__storeE));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__loadE));
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__resultsrcE),2);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__forwardaE),2);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__forwardbE),2);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__memctrlE),3);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__aluctrlE),5);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__rdE),5);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__rs1E),5);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__rs2E),5);
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__hit));
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__Cacheout),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__memoryout),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__pcplus4M),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__writedataM),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__aluresultM),32);
    bufp->fullIData(oldp+63,(((IData)(vlSelf->top__DOT__hit)
                               ? vlSelf->top__DOT__Cacheout
                               : vlSelf->top__DOT__memoryout)),32);
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__regwriteM));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__memwriteM));
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__memreadM));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__storeM));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__loadM));
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__resultsrcM),2);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__memctrlM),3);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__rdM),5);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__pcplus4W),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__aluresultW),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__readdataW),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__resultW),32);
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__regwriteW));
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__resultsrcW),2);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__rdW),5);
    bufp->fullCData(oldp+79,((7U & (vlSelf->top__DOT__instrD 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+80,((1U & (vlSelf->top__DOT__instrD 
                                  >> 0x1eU))));
    bufp->fullSData(oldp+81,(vlSelf->top__DOT__cache_2__DOT__valid),16);
    bufp->fullWData(oldp+82,(vlSelf->top__DOT__cache_2__DOT__tag),464);
    bufp->fullWData(oldp+97,(vlSelf->top__DOT__cache_2__DOT__data),512);
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__cache_2__DOT__lru),8);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__cache_2__DOT__way_sel),2);
    bufp->fullIData(oldp+115,((vlSelf->top__DOT__aluresultM 
                               >> 3U)),29);
    bufp->fullCData(oldp+116,((7U & vlSelf->top__DOT__aluresultM)),3);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__cache_2__DOT__unnamedblk3__DOT__way),32);
    bufp->fullCData(oldp+118,((0x7fU & vlSelf->top__DOT__instrD)),7);
    bufp->fullIData(oldp+119,((0x3ffffU & vlSelf->top__DOT__aluresultM)),18);
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__gate_pcsrc__DOT__anded));
    bufp->fullCData(oldp+121,((0x1fU & (vlSelf->top__DOT__instrD 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+122,((0x1fU & (vlSelf->top__DOT__instrD 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+123,((0x1fU & (vlSelf->top__DOT__instrD 
                                        >> 7U))),5);
    bufp->fullBit(oldp+124,((vlSelf->top__DOT__instrD 
                             >> 0x1fU)));
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__regfile__DOT__RegArr[0]),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__regfile__DOT__RegArr[1]),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__regfile__DOT__RegArr[2]),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__regfile__DOT__RegArr[3]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__regfile__DOT__RegArr[4]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__regfile__DOT__RegArr[5]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__regfile__DOT__RegArr[6]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__regfile__DOT__RegArr[7]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__regfile__DOT__RegArr[8]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__regfile__DOT__RegArr[9]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__regfile__DOT__RegArr[10]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__regfile__DOT__RegArr[11]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__regfile__DOT__RegArr[12]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__regfile__DOT__RegArr[13]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__regfile__DOT__RegArr[14]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__regfile__DOT__RegArr[15]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__regfile__DOT__RegArr[16]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__regfile__DOT__RegArr[17]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__regfile__DOT__RegArr[18]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__regfile__DOT__RegArr[19]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__regfile__DOT__RegArr[20]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__regfile__DOT__RegArr[21]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__regfile__DOT__RegArr[22]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__regfile__DOT__RegArr[23]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__regfile__DOT__RegArr[24]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__regfile__DOT__RegArr[25]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__regfile__DOT__RegArr[26]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__regfile__DOT__RegArr[27]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__regfile__DOT__RegArr[28]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__regfile__DOT__RegArr[29]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__regfile__DOT__RegArr[30]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__regfile__DOT__RegArr[31]),32);
    bufp->fullBit(oldp+157,(vlSelf->clk));
    bufp->fullBit(oldp+158,(vlSelf->rst));
    bufp->fullBit(oldp+159,(vlSelf->trigger));
    bufp->fullIData(oldp+160,(vlSelf->a0),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__regfile__DOT__RegArr
                              [(0x1fU & (vlSelf->top__DOT__instrD 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__regfile__DOT__RegArr
                              [(0x1fU & (vlSelf->top__DOT__instrD 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+163,(0x20U),32);
    bufp->fullIData(oldp+164,(0x1dU),32);
    bufp->fullIData(oldp+165,(8U),32);
    bufp->fullIData(oldp+166,(2U),32);
    bufp->fullIData(oldp+167,(0x11U),32);
    bufp->fullIData(oldp+168,(0x10U),32);
    bufp->fullIData(oldp+169,(5U),32);
}
