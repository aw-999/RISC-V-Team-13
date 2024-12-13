// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__cache_2__DOT__unnamedblk1__DOT__set),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__cache_2__DOT__unnamedblk1__DOT__unnamedblk2__DOT__way),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__pcF),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__pcnextF),32);
        bufp->chgIData(oldp+4,(((IData)(4U) + vlSelf->top__DOT__pcF)),32);
        bufp->chgIData(oldp+5,(((vlSelf->top__DOT__instructionmemory__DOT__RomArr
                                 [(0xffffU & ((IData)(3U) 
                                              + vlSelf->top__DOT__pcF))] 
                                 << 0x18U) | ((vlSelf->top__DOT__instructionmemory__DOT__RomArr
                                               [(0xffffU 
                                                 & ((IData)(2U) 
                                                    + vlSelf->top__DOT__pcF))] 
                                               << 0x10U) 
                                              | ((vlSelf->top__DOT__instructionmemory__DOT__RomArr
                                                  [
                                                  (0xffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__pcF))] 
                                                  << 8U) 
                                                 | vlSelf->top__DOT__instructionmemory__DOT__RomArr
                                                 [(0xffffU 
                                                   & vlSelf->top__DOT__pcF)])))),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__pcD),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__instrD),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__pcplus4D),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__immextD),32);
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__regwriteD));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__memwriteD));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__flushED));
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__stallFD));
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__alusrcD));
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__jalrD));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__jumpD));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__branchD));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__memreadD));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__storeD));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__loadD));
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__resultsrcD),2);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__aluopD),3);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__immsrcD),3);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__memctrlD),3);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__aluctrlD),5);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__pcE),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__pcplus4E),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__immextE),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__RD1E),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__RD2E),32);
        bufp->chgIData(oldp+31,((((IData)(vlSelf->top__DOT__jalrE)
                                   ? vlSelf->top__DOT__RD1E
                                   : vlSelf->top__DOT__pcE) 
                                 + vlSelf->top__DOT__immextE)),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__writedataE),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__srcaE),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__srcbE),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__aluresultE),32);
        bufp->chgIData(oldp+36,(((IData)(vlSelf->top__DOT__jalrE)
                                  ? vlSelf->top__DOT__RD1E
                                  : vlSelf->top__DOT__pcE)),32);
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__regwriteE));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__memwriteE));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__alusrcE));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__flagE));
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__jalrE));
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__jumpE));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__branchE));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__pcsrcE));
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__memreadE));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__storeE));
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__loadE));
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__resultsrcE),2);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__forwardaE),2);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__forwardbE),2);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__memctrlE),3);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__aluctrlE),5);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__rdE),5);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__rs1E),5);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__rs2E),5);
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__hit));
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__Cacheout),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__memoryout),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__pcplus4M),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__writedataM),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__aluresultM),32);
        bufp->chgIData(oldp+62,(((IData)(vlSelf->top__DOT__hit)
                                  ? vlSelf->top__DOT__Cacheout
                                  : vlSelf->top__DOT__memoryout)),32);
        bufp->chgBit(oldp+63,(vlSelf->top__DOT__regwriteM));
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__memwriteM));
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__memreadM));
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__storeM));
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__loadM));
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__resultsrcM),2);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__memctrlM),3);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__rdM),5);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__pcplus4W),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__aluresultW),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__readdataW),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__resultW),32);
        bufp->chgBit(oldp+75,(vlSelf->top__DOT__regwriteW));
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__resultsrcW),2);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__rdW),5);
        bufp->chgCData(oldp+78,((7U & (vlSelf->top__DOT__instrD 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+79,((1U & (vlSelf->top__DOT__instrD 
                                     >> 0x1eU))));
        bufp->chgSData(oldp+80,(vlSelf->top__DOT__cache_2__DOT__valid),16);
        bufp->chgWData(oldp+81,(vlSelf->top__DOT__cache_2__DOT__tag),464);
        bufp->chgWData(oldp+96,(vlSelf->top__DOT__cache_2__DOT__data),512);
        bufp->chgCData(oldp+112,(vlSelf->top__DOT__cache_2__DOT__lru),8);
        bufp->chgCData(oldp+113,(vlSelf->top__DOT__cache_2__DOT__way_sel),2);
        bufp->chgIData(oldp+114,((vlSelf->top__DOT__aluresultM 
                                  >> 3U)),29);
        bufp->chgCData(oldp+115,((7U & vlSelf->top__DOT__aluresultM)),3);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__cache_2__DOT__unnamedblk3__DOT__way),32);
        bufp->chgCData(oldp+117,((0x7fU & vlSelf->top__DOT__instrD)),7);
        bufp->chgIData(oldp+118,((0x3ffffU & vlSelf->top__DOT__aluresultM)),18);
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__gate_pcsrc__DOT__anded));
        bufp->chgCData(oldp+120,((0x1fU & (vlSelf->top__DOT__instrD 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+121,((0x1fU & (vlSelf->top__DOT__instrD 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+122,((0x1fU & (vlSelf->top__DOT__instrD 
                                           >> 7U))),5);
        bufp->chgBit(oldp+123,((vlSelf->top__DOT__instrD 
                                >> 0x1fU)));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__regfile__DOT__RegArr[0]),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__regfile__DOT__RegArr[1]),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__regfile__DOT__RegArr[2]),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__regfile__DOT__RegArr[3]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__regfile__DOT__RegArr[4]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__regfile__DOT__RegArr[5]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__regfile__DOT__RegArr[6]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__regfile__DOT__RegArr[7]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__regfile__DOT__RegArr[8]),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__regfile__DOT__RegArr[9]),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__regfile__DOT__RegArr[10]),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__regfile__DOT__RegArr[11]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__regfile__DOT__RegArr[12]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__regfile__DOT__RegArr[13]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__regfile__DOT__RegArr[14]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__regfile__DOT__RegArr[15]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__regfile__DOT__RegArr[16]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__regfile__DOT__RegArr[17]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__regfile__DOT__RegArr[18]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__regfile__DOT__RegArr[19]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__regfile__DOT__RegArr[20]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__regfile__DOT__RegArr[21]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__regfile__DOT__RegArr[22]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__regfile__DOT__RegArr[23]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__regfile__DOT__RegArr[24]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__regfile__DOT__RegArr[25]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__regfile__DOT__RegArr[26]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__regfile__DOT__RegArr[27]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__regfile__DOT__RegArr[28]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__regfile__DOT__RegArr[29]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__regfile__DOT__RegArr[30]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__regfile__DOT__RegArr[31]),32);
    }
    bufp->chgBit(oldp+156,(vlSelf->clk));
    bufp->chgBit(oldp+157,(vlSelf->rst));
    bufp->chgBit(oldp+158,(vlSelf->trigger));
    bufp->chgIData(oldp+159,(vlSelf->a0),32);
    bufp->chgIData(oldp+160,(vlSelf->top__DOT__regfile__DOT__RegArr
                             [(0x1fU & (vlSelf->top__DOT__instrD 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+161,(vlSelf->top__DOT__regfile__DOT__RegArr
                             [(0x1fU & (vlSelf->top__DOT__instrD 
                                        >> 0x14U))]),32);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
