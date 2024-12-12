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
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBit(c+140,"trigger", false,-1);
    tracep->declBus(c+141,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+144,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBit(c+140,"trigger", false,-1);
    tracep->declBus(c+141,"a0", false,-1, 31,0);
    tracep->declBus(c+4,"pcF", false,-1, 31,0);
    tracep->declBus(c+5,"pcnextF", false,-1, 31,0);
    tracep->declBus(c+6,"pcplus4F", false,-1, 31,0);
    tracep->declBus(c+7,"instrF", false,-1, 31,0);
    tracep->declBit(c+117,"stallF", false,-1);
    tracep->declBus(c+8,"pcD", false,-1, 31,0);
    tracep->declBus(c+9,"instrD", false,-1, 31,0);
    tracep->declBus(c+10,"pcplus4D", false,-1, 31,0);
    tracep->declBus(c+11,"immextD", false,-1, 31,0);
    tracep->declBus(c+12,"RD1D", false,-1, 31,0);
    tracep->declBus(c+13,"RD2D", false,-1, 31,0);
    tracep->declBit(c+14,"regwriteD", false,-1);
    tracep->declBit(c+15,"memwriteD", false,-1);
    tracep->declBit(c+16,"flushD", false,-1);
    tracep->declBit(c+118,"stallD", false,-1);
    tracep->declBit(c+17,"alusrcD", false,-1);
    tracep->declBit(c+18,"jalrD", false,-1);
    tracep->declBus(c+19,"resultsrcD", false,-1, 1,0);
    tracep->declBus(c+20,"pcsrcD", false,-1, 1,0);
    tracep->declBus(c+21,"aluopD", false,-1, 2,0);
    tracep->declBus(c+22,"immsrcD", false,-1, 2,0);
    tracep->declBus(c+23,"aluctrlD", false,-1, 3,0);
    tracep->declBus(c+24,"pcE", false,-1, 31,0);
    tracep->declBus(c+25,"pcplus4E", false,-1, 31,0);
    tracep->declBus(c+26,"immextE", false,-1, 31,0);
    tracep->declBus(c+27,"RD1E", false,-1, 31,0);
    tracep->declBus(c+28,"RD2E", false,-1, 31,0);
    tracep->declBus(c+29,"pctargetE", false,-1, 31,0);
    tracep->declBus(c+30,"writedataE", false,-1, 31,0);
    tracep->declBus(c+31,"srcaE", false,-1, 31,0);
    tracep->declBus(c+32,"srcbE", false,-1, 31,0);
    tracep->declBus(c+33,"aluresultE", false,-1, 31,0);
    tracep->declBus(c+34,"jalrmuxoutE", false,-1, 31,0);
    tracep->declBit(c+35,"regwriteE", false,-1);
    tracep->declBit(c+36,"memwriteE", false,-1);
    tracep->declBit(c+119,"flushE", false,-1);
    tracep->declBit(c+37,"alusrcE", false,-1);
    tracep->declBit(c+38,"flagE", false,-1);
    tracep->declBit(c+39,"jalrE", false,-1);
    tracep->declBus(c+40,"resultsrcE", false,-1, 1,0);
    tracep->declBus(c+41,"pcsrcE", false,-1, 1,0);
    tracep->declBus(c+42,"forwardaE", false,-1, 1,0);
    tracep->declBus(c+43,"forwardbE", false,-1, 1,0);
    tracep->declBus(c+44,"funct3E", false,-1, 2,0);
    tracep->declBus(c+45,"aluctrlE", false,-1, 3,0);
    tracep->declBus(c+46,"rdE", false,-1, 4,0);
    tracep->declBus(c+47,"rs1E", false,-1, 4,0);
    tracep->declBus(c+48,"rs2E", false,-1, 4,0);
    tracep->declBus(c+49,"pcplus4M", false,-1, 31,0);
    tracep->declBus(c+50,"writedataM", false,-1, 31,0);
    tracep->declBus(c+51,"aluresultM", false,-1, 31,0);
    tracep->declBus(c+142,"readdataM", false,-1, 31,0);
    tracep->declBus(c+52,"immextM", false,-1, 31,0);
    tracep->declBit(c+53,"regwriteM", false,-1);
    tracep->declBit(c+54,"memwriteM", false,-1);
    tracep->declBus(c+55,"resultsrcM", false,-1, 1,0);
    tracep->declBus(c+56,"funct3M", false,-1, 2,0);
    tracep->declBus(c+57,"rdM", false,-1, 4,0);
    tracep->declBus(c+58,"pcplus4W", false,-1, 31,0);
    tracep->declBus(c+59,"aluresultW", false,-1, 31,0);
    tracep->declBus(c+60,"readdataW", false,-1, 31,0);
    tracep->declBus(c+61,"resultW", false,-1, 31,0);
    tracep->declBus(c+62,"immextW", false,-1, 31,0);
    tracep->declBit(c+63,"regwriteW", false,-1);
    tracep->declBus(c+64,"resultsrcW", false,-1, 1,0);
    tracep->declBus(c+65,"rdW", false,-1, 4,0);
    tracep->declBit(c+120,"cache_stall", false,-1);
    tracep->pushNamePrefix("CacheMemoryTop ");
    tracep->declBus(c+144,"WA", false,-1, 31,0);
    tracep->declBus(c+144,"WD", false,-1, 31,0);
    tracep->declBus(c+145,"BLOCKSIZE", false,-1, 31,0);
    tracep->declBus(c+146,"BYTE_ADDR_BITS", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst_n", false,-1);
    tracep->declBus(c+51,"aluresultM", false,-1, 31,0);
    tracep->declBit(c+54,"memwriteM", false,-1);
    tracep->declBus(c+56,"funct3M", false,-1, 2,0);
    tracep->declBus(c+50,"writedataM", false,-1, 31,0);
    tracep->declBus(c+142,"readdataM", false,-1, 31,0);
    tracep->declBit(c+120,"stall", false,-1);
    tracep->declBit(c+66,"RamRead", false,-1);
    tracep->declBus(c+121,"mem_request_addr", false,-1, 31,0);
    tracep->declBit(c+143,"mem_read", false,-1);
    tracep->declBit(c+147,"memory_ready", false,-1);
    tracep->declArray(c+122,"memory_data", false,-1, 127,0);
    tracep->declBit(c+148,"BlockReadEnable", false,-1);
    tracep->declBit(c+149,"BlockWriteEnable", false,-1);
    tracep->declBus(c+150,"BlockAddr", false,-1, 31,0);
    tracep->declArray(c+151,"BlockDataIn", false,-1, 127,0);
    tracep->declArray(c+155,"BlockDataOut", false,-1, 127,0);
    tracep->declBus(c+67,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("cache ");
    tracep->declBus(c+146,"DEGREES", false,-1, 31,0);
    tracep->declBus(c+159,"SETNUM", false,-1, 31,0);
    tracep->declBus(c+146,"BYTE_ADDR_BITS", false,-1, 31,0);
    tracep->declBus(c+145,"BLOCKSIZE", false,-1, 31,0);
    tracep->declBus(c+160,"BYTES_PER_BLOCK", false,-1, 31,0);
    tracep->declBus(c+161,"TAGSIZE", false,-1, 31,0);
    tracep->declBit(c+138,"clk_i", false,-1);
    tracep->declBit(c+139,"rst_n", false,-1);
    tracep->declArray(c+68,"cpu_data_in", false,-1, 65,0);
    tracep->declQuad(c+126,"cpu_data_out", false,-1, 32,0);
    tracep->declBus(c+121,"mem_request_addr", false,-1, 31,0);
    tracep->declBit(c+143,"mem_read", false,-1);
    tracep->declBit(c+147,"memory_ready", false,-1);
    tracep->declArray(c+122,"memory_data", false,-1, 127,0);
    tracep->declBus(c+114,"current_state", false,-1, 31,0);
    tracep->declBus(c+128,"next_state", false,-1, 31,0);
    tracep->declBus(c+129,"degree_index", false,-1, 1,0);
    tracep->declBus(c+130,"set_index", false,-1, 5,0);
    tracep->declBus(c+131,"byte_offset", false,-1, 3,0);
    tracep->declBus(c+132,"tag", false,-1, 21,0);
    tracep->declBit(c+133,"cache_hit", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+134+i*1,"last_used_shift_reg", true,(i+0), 1,0);
    }
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+3,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+115,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+116,"j", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+144,"WA", false,-1, 31,0);
    tracep->declBus(c+162,"WAM", false,-1, 31,0);
    tracep->declBus(c+163,"WB", false,-1, 31,0);
    tracep->declBus(c+144,"WD", false,-1, 31,0);
    tracep->declBus(c+145,"BLOCKSIZE", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBus(c+51,"aluresultM", false,-1, 31,0);
    tracep->declBit(c+54,"memwriteM", false,-1);
    tracep->declBus(c+56,"funct3M", false,-1, 2,0);
    tracep->declBus(c+50,"writedataM", false,-1, 31,0);
    tracep->declBus(c+142,"readdataM", false,-1, 31,0);
    tracep->declBit(c+143,"BlockReadEnable", false,-1);
    tracep->declBit(c+149,"BlockWriteEnable", false,-1);
    tracep->declBus(c+121,"BlockAddr", false,-1, 31,0);
    tracep->declArray(c+151,"BlockDataIn", false,-1, 127,0);
    tracep->declArray(c+122,"BlockDataOut", false,-1, 127,0);
    tracep->declBus(c+71,"AdM", false,-1, 16,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+144,"W", false,-1, 31,0);
    tracep->declBus(c+31,"srcaE", false,-1, 31,0);
    tracep->declBus(c+32,"srcbE", false,-1, 31,0);
    tracep->declBus(c+45,"aluctrlE", false,-1, 3,0);
    tracep->declBus(c+33,"aluresultE", false,-1, 31,0);
    tracep->declBit(c+38,"flagE", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aludecode ");
    tracep->declBus(c+72,"funct3D", false,-1, 2,0);
    tracep->declBit(c+73,"funct75D", false,-1);
    tracep->declBus(c+21,"aluopD", false,-1, 2,0);
    tracep->declBus(c+23,"aluctrlD", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("controlunit ");
    tracep->declBus(c+74,"opcodeD", false,-1, 6,0);
    tracep->declBit(c+38,"flagE", false,-1);
    tracep->declBus(c+20,"pcsrcD", false,-1, 1,0);
    tracep->declBus(c+19,"resultsrcD", false,-1, 1,0);
    tracep->declBit(c+15,"memwriteD", false,-1);
    tracep->declBit(c+17,"alusrcD", false,-1);
    tracep->declBus(c+22,"immsrcD", false,-1, 2,0);
    tracep->declBit(c+14,"regwriteD", false,-1);
    tracep->declBus(c+21,"aluopD", false,-1, 2,0);
    tracep->declBit(c+18,"jalrD", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazardunit ");
    tracep->declBit(c+120,"cache_stall", false,-1);
    tracep->declBus(c+46,"rdE", false,-1, 4,0);
    tracep->declBus(c+57,"rdM", false,-1, 4,0);
    tracep->declBus(c+65,"rdW", false,-1, 4,0);
    tracep->declBit(c+53,"regwriteM", false,-1);
    tracep->declBit(c+63,"regwriteW", false,-1);
    tracep->declBus(c+75,"rs1D", false,-1, 4,0);
    tracep->declBus(c+76,"rs2D", false,-1, 4,0);
    tracep->declBus(c+47,"rs1E", false,-1, 4,0);
    tracep->declBus(c+48,"rs2E", false,-1, 4,0);
    tracep->declBit(c+77,"pcsrcE", false,-1);
    tracep->declBit(c+78,"resultsrcE", false,-1);
    tracep->declBus(c+42,"forwardaE", false,-1, 1,0);
    tracep->declBus(c+43,"forwardbE", false,-1, 1,0);
    tracep->declBit(c+16,"flushD", false,-1);
    tracep->declBit(c+119,"flushE", false,-1);
    tracep->declBit(c+117,"stallF", false,-1);
    tracep->declBit(c+118,"stallD", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instructionmemory ");
    tracep->declBus(c+160,"WAD", false,-1, 31,0);
    tracep->declBus(c+163,"WB", false,-1, 31,0);
    tracep->declBus(c+79,"pcF", false,-1, 15,0);
    tracep->declBus(c+7,"instrF", false,-1, 31,0);
    tracep->declBus(c+79,"AInIM", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_alu ");
    tracep->declBus(c+144,"W", false,-1, 31,0);
    tracep->declBus(c+30,"writedataE", false,-1, 31,0);
    tracep->declBus(c+26,"immextE", false,-1, 31,0);
    tracep->declBit(c+37,"alusrcE", false,-1);
    tracep->declBus(c+32,"srcbE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_jalr ");
    tracep->declBus(c+144,"W", false,-1, 31,0);
    tracep->declBus(c+24,"pcE", false,-1, 31,0);
    tracep->declBus(c+27,"RD1E", false,-1, 31,0);
    tracep->declBit(c+39,"jalrE", false,-1);
    tracep->declBus(c+34,"jalrmuxoutE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_pcsrc ");
    tracep->declBus(c+144,"W", false,-1, 31,0);
    tracep->declBus(c+6,"pcplus4F", false,-1, 31,0);
    tracep->declBus(c+29,"pctargetE", false,-1, 31,0);
    tracep->declBus(c+59,"aluresultW", false,-1, 31,0);
    tracep->declBus(c+41,"pcsrcE", false,-1, 1,0);
    tracep->declBus(c+5,"pcnextF", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_srcae ");
    tracep->declBus(c+144,"W", false,-1, 31,0);
    tracep->declBus(c+61,"resultW", false,-1, 31,0);
    tracep->declBus(c+27,"RD1E", false,-1, 31,0);
    tracep->declBus(c+51,"aluresultM", false,-1, 31,0);
    tracep->declBus(c+42,"forwardaE", false,-1, 1,0);
    tracep->declBus(c+31,"srcaE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_srcbe ");
    tracep->declBus(c+144,"W", false,-1, 31,0);
    tracep->declBus(c+61,"resultW", false,-1, 31,0);
    tracep->declBus(c+28,"RD2E", false,-1, 31,0);
    tracep->declBus(c+51,"aluresultM", false,-1, 31,0);
    tracep->declBus(c+43,"forwardbE", false,-1, 1,0);
    tracep->declBus(c+30,"writedataE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_writeback ");
    tracep->declBus(c+144,"W", false,-1, 31,0);
    tracep->declBus(c+59,"aluresultW", false,-1, 31,0);
    tracep->declBus(c+60,"readdataW", false,-1, 31,0);
    tracep->declBus(c+58,"pcplus4W", false,-1, 31,0);
    tracep->declBus(c+62,"immextW", false,-1, 31,0);
    tracep->declBus(c+64,"resultsrcW", false,-1, 1,0);
    tracep->declBus(c+61,"resultW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcadder ");
    tracep->declBus(c+144,"W", false,-1, 31,0);
    tracep->declBus(c+34,"pcE", false,-1, 31,0);
    tracep->declBus(c+26,"immextE", false,-1, 31,0);
    tracep->declBus(c+29,"pctargetE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcedecode ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+14,"regwriteD", false,-1);
    tracep->declBus(c+19,"resultsrcD", false,-1, 1,0);
    tracep->declBit(c+15,"memwriteD", false,-1);
    tracep->declBus(c+72,"funct3D", false,-1, 2,0);
    tracep->declBus(c+23,"aluctrlD", false,-1, 3,0);
    tracep->declBit(c+17,"alusrcD", false,-1);
    tracep->declBus(c+20,"pcsrcD", false,-1, 1,0);
    tracep->declBit(c+18,"jalrD", false,-1);
    tracep->declBit(c+35,"regwriteE", false,-1);
    tracep->declBus(c+40,"resultsrcE", false,-1, 1,0);
    tracep->declBit(c+36,"memwriteE", false,-1);
    tracep->declBus(c+44,"funct3E", false,-1, 2,0);
    tracep->declBit(c+39,"jalrE", false,-1);
    tracep->declBus(c+45,"aluctrlE", false,-1, 3,0);
    tracep->declBit(c+37,"alusrcE", false,-1);
    tracep->declBus(c+41,"pcsrcE", false,-1, 1,0);
    tracep->declBus(c+12,"RD1D", false,-1, 31,0);
    tracep->declBus(c+13,"RD2D", false,-1, 31,0);
    tracep->declBus(c+8,"pcD", false,-1, 31,0);
    tracep->declBus(c+80,"rdD", false,-1, 4,0);
    tracep->declBus(c+11,"immextD", false,-1, 31,0);
    tracep->declBus(c+10,"pcplus4D", false,-1, 31,0);
    tracep->declBus(c+27,"RD1E", false,-1, 31,0);
    tracep->declBus(c+28,"RD2E", false,-1, 31,0);
    tracep->declBus(c+24,"pcE", false,-1, 31,0);
    tracep->declBus(c+46,"rdE", false,-1, 4,0);
    tracep->declBus(c+26,"immextE", false,-1, 31,0);
    tracep->declBus(c+25,"pcplus4E", false,-1, 31,0);
    tracep->declBus(c+75,"rs1D", false,-1, 4,0);
    tracep->declBus(c+76,"rs2D", false,-1, 4,0);
    tracep->declBit(c+119,"flushE", false,-1);
    tracep->declBus(c+47,"rs1E", false,-1, 4,0);
    tracep->declBus(c+48,"rs2E", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcexecute ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+35,"regwriteE", false,-1);
    tracep->declBus(c+40,"resultsrcE", false,-1, 1,0);
    tracep->declBit(c+36,"memwriteE", false,-1);
    tracep->declBus(c+26,"immextE", false,-1, 31,0);
    tracep->declBit(c+53,"regwriteM", false,-1);
    tracep->declBus(c+55,"resultsrcM", false,-1, 1,0);
    tracep->declBit(c+54,"memwriteM", false,-1);
    tracep->declBus(c+52,"immextM", false,-1, 31,0);
    tracep->declBus(c+33,"aluresultE", false,-1, 31,0);
    tracep->declBus(c+30,"writedataE", false,-1, 31,0);
    tracep->declBus(c+46,"rdE", false,-1, 4,0);
    tracep->declBus(c+25,"pcplus4E", false,-1, 31,0);
    tracep->declBus(c+44,"funct3E", false,-1, 2,0);
    tracep->declBus(c+51,"aluresultM", false,-1, 31,0);
    tracep->declBus(c+50,"writedataM", false,-1, 31,0);
    tracep->declBus(c+57,"rdM", false,-1, 4,0);
    tracep->declBus(c+49,"pcplus4M", false,-1, 31,0);
    tracep->declBus(c+56,"funct3M", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcfetch ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+16,"flushD", false,-1);
    tracep->declBit(c+118,"stallD", false,-1);
    tracep->declBus(c+7,"instrF", false,-1, 31,0);
    tracep->declBus(c+4,"pcF", false,-1, 31,0);
    tracep->declBus(c+6,"pcplus4F", false,-1, 31,0);
    tracep->declBus(c+9,"instrD", false,-1, 31,0);
    tracep->declBus(c+8,"pcD", false,-1, 31,0);
    tracep->declBus(c+10,"pcplus4D", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcincrementby4 ");
    tracep->declBus(c+144,"W", false,-1, 31,0);
    tracep->declBus(c+4,"pcF", false,-1, 31,0);
    tracep->declBus(c+6,"pcplus4F", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcmemory ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+53,"regwriteM", false,-1);
    tracep->declBus(c+55,"resultsrcM", false,-1, 1,0);
    tracep->declBit(c+63,"regwriteW", false,-1);
    tracep->declBus(c+64,"resultsrcW", false,-1, 1,0);
    tracep->declBus(c+142,"readdataM", false,-1, 31,0);
    tracep->declBus(c+51,"aluresultM", false,-1, 31,0);
    tracep->declBus(c+57,"rdM", false,-1, 4,0);
    tracep->declBus(c+49,"pcplus4M", false,-1, 31,0);
    tracep->declBus(c+52,"immextM", false,-1, 31,0);
    tracep->declBus(c+60,"readdataW", false,-1, 31,0);
    tracep->declBus(c+59,"aluresultW", false,-1, 31,0);
    tracep->declBus(c+65,"rdW", false,-1, 4,0);
    tracep->declBus(c+58,"pcplus4W", false,-1, 31,0);
    tracep->declBus(c+62,"immextW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcreg ");
    tracep->declBus(c+144,"W", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBit(c+117,"stallF", false,-1);
    tracep->declBus(c+5,"pcnextF", false,-1, 31,0);
    tracep->declBus(c+4,"pcF", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+164,"WAD", false,-1, 31,0);
    tracep->declBus(c+144,"WD", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+63,"regwriteW", false,-1);
    tracep->declBit(c+140,"trigger", false,-1);
    tracep->declBus(c+65,"rdW", false,-1, 4,0);
    tracep->declBus(c+75,"adin1D", false,-1, 4,0);
    tracep->declBus(c+76,"adin2D", false,-1, 4,0);
    tracep->declBus(c+61,"resultW", false,-1, 31,0);
    tracep->declBus(c+12,"RD1D", false,-1, 31,0);
    tracep->declBus(c+13,"RD2D", false,-1, 31,0);
    tracep->declBus(c+141,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+81+i*1,"RegArr", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("signextend ");
    tracep->declBus(c+144,"W", false,-1, 31,0);
    tracep->declBus(c+22,"immsrcD", false,-1, 2,0);
    tracep->declBus(c+9,"instrD", false,-1, 31,0);
    tracep->declBus(c+11,"immextD", false,-1, 31,0);
    tracep->declBit(c+113,"sign", false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__pcF),32);
    bufp->fullIData(oldp+5,(((2U & (IData)(vlSelf->top__DOT__pcsrcE))
                              ? ((1U & (IData)(vlSelf->top__DOT__pcsrcE))
                                  ? vlSelf->top__DOT__pctargetE
                                  : vlSelf->top__DOT__aluresultW)
                              : ((1U & (IData)(vlSelf->top__DOT__pcsrcE))
                                  ? vlSelf->top__DOT__pctargetE
                                  : ((IData)(4U) + vlSelf->top__DOT__pcF)))),32);
    bufp->fullIData(oldp+6,(((IData)(4U) + vlSelf->top__DOT__pcF)),32);
    bufp->fullIData(oldp+7,(((vlSelf->top__DOT__instructionmemory__DOT__RomArray
                              [(0xffffU & ((IData)(3U) 
                                           + vlSelf->top__DOT__pcF))] 
                              << 0x18U) | ((vlSelf->top__DOT__instructionmemory__DOT__RomArray
                                            [(0xffffU 
                                              & ((IData)(2U) 
                                                 + vlSelf->top__DOT__pcF))] 
                                            << 0x10U) 
                                           | ((vlSelf->top__DOT__instructionmemory__DOT__RomArray
                                               [(0xffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->top__DOT__pcF))] 
                                               << 8U) 
                                              | vlSelf->top__DOT__instructionmemory__DOT__RomArray
                                              [(0xffffU 
                                                & vlSelf->top__DOT__pcF)])))),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__pcD),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__instrD),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__pcplus4D),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__immextD),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__regfile__DOT__RegArr
                             [(0x1fU & (vlSelf->top__DOT__instrD 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__regfile__DOT__RegArr
                             [(0x1fU & (vlSelf->top__DOT__instrD 
                                        >> 0x14U))]),32);
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__regwriteD));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__memwriteD));
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__flushD));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__alusrcD));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__jalrD));
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__resultsrcD),2);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__pcsrcD),2);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__aluopD),3);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__immsrcD),3);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__aluctrlD),4);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__pcE),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__pcplus4E),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__immextE),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__RD1E),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__RD2E),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__pctargetE),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__writedataE),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__srcaE),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__srcbE),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__aluresultE),32);
    bufp->fullIData(oldp+34,(((IData)(vlSelf->top__DOT__jalrE)
                               ? vlSelf->top__DOT__RD1E
                               : vlSelf->top__DOT__pcE)),32);
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__regwriteE));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__memwriteE));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__alusrcE));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__flagE));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__jalrE));
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__resultsrcE),2);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__pcsrcE),2);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__forwardaE),2);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__forwardbE),2);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__funct3E),3);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__aluctrlE),4);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__rdE),5);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__rs1E),5);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__rs2E),5);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__pcplus4M),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__writedataM),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__aluresultM),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__immextM),32);
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__regwriteM));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__memwriteM));
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__resultsrcM),2);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__funct3M),3);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__rdM),5);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__pcplus4W),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__aluresultW),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__readdataW),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__resultW),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__immextW),32);
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__regwriteW));
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__resultsrcW),2);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__rdW),5);
    bufp->fullBit(oldp+66,((3U == (0x7fU & vlSelf->top__DOT__aluresultM))));
    bufp->fullCData(oldp+67,((0x7fU & vlSelf->top__DOT__aluresultM)),7);
    bufp->fullWData(oldp+68,(vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in),66);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__AdM),17);
    bufp->fullCData(oldp+72,((7U & (vlSelf->top__DOT__instrD 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+73,((1U & (vlSelf->top__DOT__instrD 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+74,((0x7fU & vlSelf->top__DOT__instrD)),7);
    bufp->fullCData(oldp+75,((0x1fU & (vlSelf->top__DOT__instrD 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+76,((0x1fU & (vlSelf->top__DOT__instrD 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+77,((1U & (IData)(vlSelf->top__DOT__pcsrcE))));
    bufp->fullBit(oldp+78,((1U & (IData)(vlSelf->top__DOT__resultsrcE))));
    bufp->fullSData(oldp+79,((0xffffU & vlSelf->top__DOT__pcF)),16);
    bufp->fullCData(oldp+80,((0x1fU & (vlSelf->top__DOT__instrD 
                                       >> 7U))),5);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__regfile__DOT__RegArr[0]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__regfile__DOT__RegArr[1]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__regfile__DOT__RegArr[2]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__regfile__DOT__RegArr[3]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__regfile__DOT__RegArr[4]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__regfile__DOT__RegArr[5]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__regfile__DOT__RegArr[6]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__regfile__DOT__RegArr[7]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__regfile__DOT__RegArr[8]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__regfile__DOT__RegArr[9]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__regfile__DOT__RegArr[10]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__regfile__DOT__RegArr[11]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__regfile__DOT__RegArr[12]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__regfile__DOT__RegArr[13]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__regfile__DOT__RegArr[14]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__regfile__DOT__RegArr[15]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__regfile__DOT__RegArr[16]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__regfile__DOT__RegArr[17]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__regfile__DOT__RegArr[18]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__regfile__DOT__RegArr[19]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__regfile__DOT__RegArr[20]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__regfile__DOT__RegArr[21]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__regfile__DOT__RegArr[22]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__regfile__DOT__RegArr[23]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__regfile__DOT__RegArr[24]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__regfile__DOT__RegArr[25]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__regfile__DOT__RegArr[26]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__regfile__DOT__RegArr[27]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__regfile__DOT__RegArr[28]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__regfile__DOT__RegArr[29]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__regfile__DOT__RegArr[30]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__regfile__DOT__RegArr[31]),32);
    bufp->fullBit(oldp+113,((vlSelf->top__DOT__instrD 
                             >> 0x1fU)));
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__current_state),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
    bufp->fullBit(oldp+117,(vlSelf->top__DOT__stallF));
    bufp->fullBit(oldp+118,(vlSelf->top__DOT__stallD));
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__flushE));
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__cache_stall));
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr),32);
    bufp->fullWData(oldp+122,(vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data),128);
    bufp->fullQData(oldp+126,(vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellout__cache__cpu_data_out),33);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__next_state),32);
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index),2);
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index),6);
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__byte_offset),4);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__tag),22);
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit));
    bufp->fullCData(oldp+134,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[0]),2);
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[1]),2);
    bufp->fullCData(oldp+136,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[2]),2);
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[3]),2);
    bufp->fullBit(oldp+138,(vlSelf->clk));
    bufp->fullBit(oldp+139,(vlSelf->rst));
    bufp->fullBit(oldp+140,(vlSelf->trigger));
    bufp->fullIData(oldp+141,(vlSelf->a0),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__readdataM),32);
    bufp->fullBit(oldp+143,(vlSelf->top__DOT__CacheMemoryTop__DOT__mem_read));
    bufp->fullIData(oldp+144,(0x20U),32);
    bufp->fullIData(oldp+145,(0x80U),32);
    bufp->fullIData(oldp+146,(4U),32);
    bufp->fullBit(oldp+147,(vlSelf->top__DOT__CacheMemoryTop__DOT__memory_ready));
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__CacheMemoryTop__DOT__BlockReadEnable));
    bufp->fullBit(oldp+149,(vlSelf->top__DOT__CacheMemoryTop__DOT__BlockWriteEnable));
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__CacheMemoryTop__DOT__BlockAddr),32);
    bufp->fullWData(oldp+151,(vlSelf->top__DOT__CacheMemoryTop__DOT__BlockDataIn),128);
    bufp->fullWData(oldp+155,(vlSelf->top__DOT__CacheMemoryTop__DOT__BlockDataOut),128);
    bufp->fullIData(oldp+159,(0x40U),32);
    bufp->fullIData(oldp+160,(0x10U),32);
    bufp->fullIData(oldp+161,(0x16U),32);
    bufp->fullIData(oldp+162,(0x11U),32);
    bufp->fullIData(oldp+163,(8U),32);
    bufp->fullIData(oldp+164,(5U),32);
}
