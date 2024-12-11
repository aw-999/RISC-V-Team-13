// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__pcF),32);
        bufp->chgIData(oldp+1,(((2U & (IData)(vlSelfRef.top__DOT__pcsrcE))
                                 ? ((1U & (IData)(vlSelfRef.top__DOT__pcsrcE))
                                     ? vlSelfRef.top__DOT__pctargetE
                                     : vlSelfRef.top__DOT__aluresultW)
                                 : ((1U & (IData)(vlSelfRef.top__DOT__pcsrcE))
                                     ? vlSelfRef.top__DOT__pctargetE
                                     : ((IData)(4U) 
                                        + vlSelfRef.top__DOT__pcF)))),32);
        bufp->chgIData(oldp+2,(((IData)(4U) + vlSelfRef.top__DOT__pcF)),32);
        bufp->chgIData(oldp+3,(((vlSelfRef.top__DOT__instructionmemory__DOT__RomArray
                                 [(0xffffU & ((IData)(3U) 
                                              + vlSelfRef.top__DOT__pcF))] 
                                 << 0x18U) | ((vlSelfRef.top__DOT__instructionmemory__DOT__RomArray
                                               [(0xffffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.top__DOT__pcF))] 
                                               << 0x10U) 
                                              | ((vlSelfRef.top__DOT__instructionmemory__DOT__RomArray
                                                  [
                                                  (0xffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__pcF))] 
                                                  << 8U) 
                                                 | vlSelfRef.top__DOT__instructionmemory__DOT__RomArray
                                                 [(0xffffU 
                                                   & vlSelfRef.top__DOT__pcF)])))),32);
        bufp->chgBit(oldp+4,(vlSelfRef.top__DOT__stallF));
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__pcD),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__instrD),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top__DOT__pcplus4D),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__immextD),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__regfile__DOT__RegArr
                               [(0x1fU & (vlSelfRef.top__DOT__instrD 
                                          >> 0xfU))]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__regfile__DOT__RegArr
                                [(0x1fU & (vlSelfRef.top__DOT__instrD 
                                           >> 0x14U))]),32);
        bufp->chgBit(oldp+11,(vlSelfRef.top__DOT__regwriteD));
        bufp->chgBit(oldp+12,(vlSelfRef.top__DOT__memwriteD));
        bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__flushD));
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__stallD));
        bufp->chgBit(oldp+15,(vlSelfRef.top__DOT__alusrcD));
        bufp->chgBit(oldp+16,(vlSelfRef.top__DOT__jalrD));
        bufp->chgCData(oldp+17,(vlSelfRef.top__DOT__resultsrcD),2);
        bufp->chgCData(oldp+18,(vlSelfRef.top__DOT__pcsrcD),2);
        bufp->chgCData(oldp+19,(vlSelfRef.top__DOT__aluopD),3);
        bufp->chgCData(oldp+20,(vlSelfRef.top__DOT__immsrcD),3);
        bufp->chgCData(oldp+21,(vlSelfRef.top__DOT__aluctrlD),4);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__pcE),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__pcplus4E),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__immextE),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__RD1E),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__RD2E),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__pctargetE),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__writedataE),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__srcaE),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__srcbE),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__aluresultE),32);
        bufp->chgIData(oldp+32,(((IData)(vlSelfRef.top__DOT__jalrE)
                                  ? vlSelfRef.top__DOT__RD1E
                                  : vlSelfRef.top__DOT__pcE)),32);
        bufp->chgBit(oldp+33,(vlSelfRef.top__DOT__regwriteE));
        bufp->chgBit(oldp+34,(vlSelfRef.top__DOT__memwriteE));
        bufp->chgBit(oldp+35,(vlSelfRef.top__DOT__flushE));
        bufp->chgBit(oldp+36,(vlSelfRef.top__DOT__alusrcE));
        bufp->chgBit(oldp+37,(vlSelfRef.top__DOT__flagE));
        bufp->chgBit(oldp+38,(vlSelfRef.top__DOT__jalrE));
        bufp->chgCData(oldp+39,(vlSelfRef.top__DOT__resultsrcE),2);
        bufp->chgCData(oldp+40,(vlSelfRef.top__DOT__pcsrcE),2);
        bufp->chgCData(oldp+41,(vlSelfRef.top__DOT__forwardaE),2);
        bufp->chgCData(oldp+42,(vlSelfRef.top__DOT__forwardbE),2);
        bufp->chgCData(oldp+43,(vlSelfRef.top__DOT__funct3E),3);
        bufp->chgCData(oldp+44,(vlSelfRef.top__DOT__aluctrlE),4);
        bufp->chgCData(oldp+45,(vlSelfRef.top__DOT__rdE),5);
        bufp->chgCData(oldp+46,(vlSelfRef.top__DOT__rs1E),5);
        bufp->chgCData(oldp+47,(vlSelfRef.top__DOT__rs2E),5);
        bufp->chgCData(oldp+48,(vlSelfRef.top__DOT__opcodeE),7);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__pcplus4M),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__writedataM),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__aluresultM),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__readdataM),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__immextM),32);
        bufp->chgBit(oldp+54,(vlSelfRef.top__DOT__regwriteM));
        bufp->chgBit(oldp+55,(vlSelfRef.top__DOT__memwriteM));
        bufp->chgCData(oldp+56,(vlSelfRef.top__DOT__resultsrcM),2);
        bufp->chgCData(oldp+57,(vlSelfRef.top__DOT__funct3M),3);
        bufp->chgCData(oldp+58,(vlSelfRef.top__DOT__rdM),5);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__pcplus4W),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__aluresultW),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__readdataW),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__resultW),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__immextW),32);
        bufp->chgBit(oldp+64,(vlSelfRef.top__DOT__regwriteW));
        bufp->chgCData(oldp+65,(vlSelfRef.top__DOT__resultsrcW),2);
        bufp->chgCData(oldp+66,(vlSelfRef.top__DOT__rdW),5);
        bufp->chgCData(oldp+67,((7U & (vlSelfRef.top__DOT__instrD 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+68,((1U & (vlSelfRef.top__DOT__instrD 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+69,((0x7fU & vlSelfRef.top__DOT__instrD)),7);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__datamemory__DOT__AdM),17);
        bufp->chgCData(oldp+71,((0x1fU & (vlSelfRef.top__DOT__instrD 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+72,((0x1fU & (vlSelfRef.top__DOT__instrD 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+73,((1U & (IData)(vlSelfRef.top__DOT__pcsrcE))));
        bufp->chgBit(oldp+74,((1U & (IData)(vlSelfRef.top__DOT__resultsrcE))));
        bufp->chgSData(oldp+75,((0xffffU & vlSelfRef.top__DOT__pcF)),16);
        bufp->chgCData(oldp+76,((0x1fU & (vlSelfRef.top__DOT__instrD 
                                          >> 7U))),5);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__regfile__DOT__RegArr[0]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__regfile__DOT__RegArr[1]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__regfile__DOT__RegArr[2]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__regfile__DOT__RegArr[3]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__regfile__DOT__RegArr[4]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top__DOT__regfile__DOT__RegArr[5]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__regfile__DOT__RegArr[6]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.top__DOT__regfile__DOT__RegArr[7]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.top__DOT__regfile__DOT__RegArr[8]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top__DOT__regfile__DOT__RegArr[9]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.top__DOT__regfile__DOT__RegArr[10]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.top__DOT__regfile__DOT__RegArr[11]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.top__DOT__regfile__DOT__RegArr[12]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.top__DOT__regfile__DOT__RegArr[13]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.top__DOT__regfile__DOT__RegArr[14]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.top__DOT__regfile__DOT__RegArr[15]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.top__DOT__regfile__DOT__RegArr[16]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.top__DOT__regfile__DOT__RegArr[17]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.top__DOT__regfile__DOT__RegArr[18]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.top__DOT__regfile__DOT__RegArr[19]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.top__DOT__regfile__DOT__RegArr[20]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.top__DOT__regfile__DOT__RegArr[21]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.top__DOT__regfile__DOT__RegArr[22]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.top__DOT__regfile__DOT__RegArr[23]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.top__DOT__regfile__DOT__RegArr[24]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.top__DOT__regfile__DOT__RegArr[25]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.top__DOT__regfile__DOT__RegArr[26]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.top__DOT__regfile__DOT__RegArr[27]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.top__DOT__regfile__DOT__RegArr[28]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.top__DOT__regfile__DOT__RegArr[29]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.top__DOT__regfile__DOT__RegArr[30]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.top__DOT__regfile__DOT__RegArr[31]),32);
        bufp->chgBit(oldp+109,((vlSelfRef.top__DOT__instrD 
                                >> 0x1fU)));
    }
    bufp->chgBit(oldp+110,(vlSelfRef.clk));
    bufp->chgBit(oldp+111,(vlSelfRef.rst));
    bufp->chgBit(oldp+112,(vlSelfRef.trigger));
    bufp->chgIData(oldp+113,(vlSelfRef.a0),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
