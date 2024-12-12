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
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__pcF),32);
        bufp->chgIData(oldp+4,(((2U & (IData)(vlSelf->top__DOT__pcsrcE))
                                 ? ((1U & (IData)(vlSelf->top__DOT__pcsrcE))
                                     ? vlSelf->top__DOT__pctargetE
                                     : vlSelf->top__DOT__aluresultW)
                                 : ((1U & (IData)(vlSelf->top__DOT__pcsrcE))
                                     ? vlSelf->top__DOT__pctargetE
                                     : ((IData)(4U) 
                                        + vlSelf->top__DOT__pcF)))),32);
        bufp->chgIData(oldp+5,(((IData)(4U) + vlSelf->top__DOT__pcF)),32);
        bufp->chgIData(oldp+6,(((vlSelf->top__DOT__instructionmemory__DOT__RomArray
                                 [(0xffffU & ((IData)(3U) 
                                              + vlSelf->top__DOT__pcF))] 
                                 << 0x18U) | ((vlSelf->top__DOT__instructionmemory__DOT__RomArray
                                               [(0xffffU 
                                                 & ((IData)(2U) 
                                                    + vlSelf->top__DOT__pcF))] 
                                               << 0x10U) 
                                              | ((vlSelf->top__DOT__instructionmemory__DOT__RomArray
                                                  [
                                                  (0xffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__pcF))] 
                                                  << 8U) 
                                                 | vlSelf->top__DOT__instructionmemory__DOT__RomArray
                                                 [(0xffffU 
                                                   & vlSelf->top__DOT__pcF)])))),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__pcD),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__instrD),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__pcplus4D),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__immextD),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__regfile__DOT__RegArr
                                [(0x1fU & (vlSelf->top__DOT__instrD 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__regfile__DOT__RegArr
                                [(0x1fU & (vlSelf->top__DOT__instrD 
                                           >> 0x14U))]),32);
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__regwriteD));
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__memwriteD));
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__flushD));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__alusrcD));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__jalrD));
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__resultsrcD),2);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__pcsrcD),2);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__aluopD),3);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__immsrcD),3);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__aluctrlD),4);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__pcE),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__pcplus4E),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__immextE),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__RD1E),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__RD2E),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__pctargetE),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__writedataE),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__srcaE),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__srcbE),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__aluresultE),32);
        bufp->chgIData(oldp+33,(((IData)(vlSelf->top__DOT__jalrE)
                                  ? vlSelf->top__DOT__RD1E
                                  : vlSelf->top__DOT__pcE)),32);
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__regwriteE));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__memwriteE));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__alusrcE));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__flagE));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__jalrE));
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__resultsrcE),2);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__pcsrcE),2);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__forwardaE),2);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__forwardbE),2);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__funct3E),3);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__aluctrlE),4);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__rdE),5);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__rs1E),5);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__rs2E),5);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__pcplus4M),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__writedataM),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__aluresultM),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__immextM),32);
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__regwriteM));
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__memwriteM));
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__resultsrcM),2);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__funct3M),3);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__rdM),5);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__pcplus4W),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__aluresultW),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__readdataW),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__resultW),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__immextW),32);
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__regwriteW));
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__resultsrcW),2);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__rdW),5);
        bufp->chgBit(oldp+65,((3U == (0x7fU & vlSelf->top__DOT__aluresultM))));
        bufp->chgCData(oldp+66,((0x7fU & vlSelf->top__DOT__aluresultM)),7);
        bufp->chgWData(oldp+67,(vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in),66);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__AdM),17);
        bufp->chgCData(oldp+71,((7U & (vlSelf->top__DOT__instrD 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+72,((1U & (vlSelf->top__DOT__instrD 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+73,((0x7fU & vlSelf->top__DOT__instrD)),7);
        bufp->chgCData(oldp+74,((0x1fU & (vlSelf->top__DOT__instrD 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+75,((0x1fU & (vlSelf->top__DOT__instrD 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+76,((1U & (IData)(vlSelf->top__DOT__pcsrcE))));
        bufp->chgBit(oldp+77,((1U & (IData)(vlSelf->top__DOT__resultsrcE))));
        bufp->chgSData(oldp+78,((0xffffU & vlSelf->top__DOT__pcF)),16);
        bufp->chgCData(oldp+79,((0x1fU & (vlSelf->top__DOT__instrD 
                                          >> 7U))),5);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__regfile__DOT__RegArr[0]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__regfile__DOT__RegArr[1]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__regfile__DOT__RegArr[2]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__regfile__DOT__RegArr[3]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__regfile__DOT__RegArr[4]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__regfile__DOT__RegArr[5]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__regfile__DOT__RegArr[6]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__regfile__DOT__RegArr[7]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__regfile__DOT__RegArr[8]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__regfile__DOT__RegArr[9]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__regfile__DOT__RegArr[10]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__regfile__DOT__RegArr[11]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__regfile__DOT__RegArr[12]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__regfile__DOT__RegArr[13]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__regfile__DOT__RegArr[14]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__regfile__DOT__RegArr[15]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__regfile__DOT__RegArr[16]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__regfile__DOT__RegArr[17]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__regfile__DOT__RegArr[18]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__regfile__DOT__RegArr[19]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__regfile__DOT__RegArr[20]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__regfile__DOT__RegArr[21]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__regfile__DOT__RegArr[22]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__regfile__DOT__RegArr[23]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__regfile__DOT__RegArr[24]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__regfile__DOT__RegArr[25]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__regfile__DOT__RegArr[26]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__regfile__DOT__RegArr[27]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__regfile__DOT__RegArr[28]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__regfile__DOT__RegArr[29]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__regfile__DOT__RegArr[30]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__regfile__DOT__RegArr[31]),32);
        bufp->chgBit(oldp+112,((vlSelf->top__DOT__instrD 
                                >> 0x1fU)));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__current_state),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+116,(vlSelf->top__DOT__stallF));
        bufp->chgBit(oldp+117,(vlSelf->top__DOT__stallD));
        bufp->chgBit(oldp+118,(vlSelf->top__DOT__flushE));
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__cache_stall));
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr),32);
        bufp->chgWData(oldp+121,(vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data),128);
        bufp->chgQData(oldp+125,(vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellout__cache__cpu_data_out),33);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__next_state),32);
        bufp->chgCData(oldp+128,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index),2);
        bufp->chgCData(oldp+129,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index),6);
        bufp->chgCData(oldp+130,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__byte_offset),4);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__tag),22);
        bufp->chgBit(oldp+132,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit));
        bufp->chgCData(oldp+133,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[0]),2);
        bufp->chgCData(oldp+134,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[1]),2);
        bufp->chgCData(oldp+135,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[2]),2);
        bufp->chgCData(oldp+136,(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[3]),2);
    }
    bufp->chgBit(oldp+137,(vlSelf->clk));
    bufp->chgBit(oldp+138,(vlSelf->rst));
    bufp->chgBit(oldp+139,(vlSelf->trigger));
    bufp->chgIData(oldp+140,(vlSelf->a0),32);
    bufp->chgIData(oldp+141,(vlSelf->top__DOT__readdataM),32);
    bufp->chgBit(oldp+142,(vlSelf->top__DOT__CacheMemoryTop__DOT__mem_read));
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
