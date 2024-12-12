// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


void Vmain___024root__trace_chg_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_chg_top_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmain___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmain___024root__trace_chg_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->main__DOT__instr),32);
        bufp->chgIData(oldp+1,(vlSelf->main__DOT__IMMop),32);
        bufp->chgCData(oldp+2,((0x1fU & (vlSelf->main__DOT__instr 
                                         >> 7U))),5);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelf->main__DOT__instr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+4,((0x1fU & (vlSelf->main__DOT__instr 
                                         >> 0x14U))),5);
        bufp->chgBit(oldp+5,(vlSelf->main__DOT__ALUsrc));
        bufp->chgCData(oldp+6,(vlSelf->main__DOT__ALUop),2);
        bufp->chgBit(oldp+7,((0x23U == (0x7fU & vlSelf->main__DOT__instr))));
        bufp->chgBit(oldp+8,(vlSelf->main__DOT__RegWrite));
        bufp->chgCData(oldp+9,(vlSelf->main__DOT__IMMsrc),3);
        bufp->chgCData(oldp+10,(vlSelf->main__DOT__ResultSrc),2);
        bufp->chgCData(oldp+11,(vlSelf->main__DOT__PCsrc),2);
        bufp->chgIData(oldp+12,(vlSelf->main__DOT__PC),32);
        bufp->chgIData(oldp+13,(vlSelf->main__DOT__DOutAlu),32);
        bufp->chgBit(oldp+14,((1U & ((4U & (IData)(vlSelf->main__DOT__D1__DOT__ALUflag))
                                      ? (IData)(vlSelf->main__DOT__D1__DOT__ALUflag)
                                      : ((2U & (IData)(vlSelf->main__DOT__D1__DOT__ALUflag))
                                          ? (IData)(vlSelf->main__DOT__D1__DOT__ALUflag)
                                          : ((1U & (IData)(vlSelf->main__DOT__D1__DOT__ALUflag))
                                              ? ((0U 
                                                  != vlSelf->main__DOT__DOutAlu)
                                                  ? 1U
                                                  : 0U)
                                              : ((0U 
                                                  == vlSelf->main__DOT__DOutAlu)
                                                  ? 1U
                                                  : 0U)))))));
        bufp->chgCData(oldp+15,((0x7fU & vlSelf->main__DOT__instr)),7);
        bufp->chgCData(oldp+16,(vlSelf->main__DOT__C1__DOT__PCsrc_req1),2);
        bufp->chgIData(oldp+17,(vlSelf->main__DOT__D1__DOT__DOut1),32);
        bufp->chgIData(oldp+18,(vlSelf->main__DOT__D1__DOT__DOut2),32);
        bufp->chgIData(oldp+19,(vlSelf->main__DOT__D1__DOT__N2),32);
        bufp->chgIData(oldp+20,(((2U & (IData)(vlSelf->main__DOT__ResultSrc))
                                  ? ((1U & (IData)(vlSelf->main__DOT__ResultSrc))
                                      ? vlSelf->main__DOT__D1__DOT__N2
                                      : ((IData)(4U) 
                                         + vlSelf->main__DOT__PC))
                                  : ((1U & (IData)(vlSelf->main__DOT__ResultSrc))
                                      ? vlSelf->main__DOT__D1__DOT__DOutRam
                                      : vlSelf->main__DOT__DOutAlu))),32);
        bufp->chgIData(oldp+21,(vlSelf->main__DOT__D1__DOT__DOutRam),32);
        bufp->chgBit(oldp+22,((1U & (vlSelf->main__DOT__instr 
                                     >> 1U))));
        bufp->chgBit(oldp+23,((1U & (vlSelf->main__DOT__instr 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+24,((7U & (vlSelf->main__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+25,(vlSelf->main__DOT__D1__DOT__ALUctrl),3);
        bufp->chgCData(oldp+26,(vlSelf->main__DOT__D1__DOT__ALUflag),3);
        bufp->chgBit(oldp+27,((vlSelf->main__DOT__instr 
                               >> 0x1fU)));
        bufp->chgIData(oldp+28,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[0]),32);
        bufp->chgIData(oldp+29,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[1]),32);
        bufp->chgIData(oldp+30,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[2]),32);
        bufp->chgIData(oldp+31,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[3]),32);
        bufp->chgIData(oldp+32,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[4]),32);
        bufp->chgIData(oldp+33,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[5]),32);
        bufp->chgIData(oldp+34,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[6]),32);
        bufp->chgIData(oldp+35,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[7]),32);
        bufp->chgIData(oldp+36,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[8]),32);
        bufp->chgIData(oldp+37,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[9]),32);
        bufp->chgIData(oldp+38,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[10]),32);
        bufp->chgIData(oldp+39,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[11]),32);
        bufp->chgIData(oldp+40,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[12]),32);
        bufp->chgIData(oldp+41,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[13]),32);
        bufp->chgIData(oldp+42,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[14]),32);
        bufp->chgIData(oldp+43,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[15]),32);
        bufp->chgIData(oldp+44,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[16]),32);
        bufp->chgIData(oldp+45,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[17]),32);
        bufp->chgIData(oldp+46,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[18]),32);
        bufp->chgIData(oldp+47,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[19]),32);
        bufp->chgIData(oldp+48,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[20]),32);
        bufp->chgIData(oldp+49,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[21]),32);
        bufp->chgIData(oldp+50,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[22]),32);
        bufp->chgIData(oldp+51,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[23]),32);
        bufp->chgIData(oldp+52,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[24]),32);
        bufp->chgIData(oldp+53,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[25]),32);
        bufp->chgIData(oldp+54,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[26]),32);
        bufp->chgIData(oldp+55,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[27]),32);
        bufp->chgIData(oldp+56,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[28]),32);
        bufp->chgIData(oldp+57,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[29]),32);
        bufp->chgIData(oldp+58,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[30]),32);
        bufp->chgIData(oldp+59,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[31]),32);
        bufp->chgIData(oldp+60,(vlSelf->main__DOT__D1__DOT__R2__DOT__AdM),18);
        bufp->chgIData(oldp+61,(((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                  [0x10U] << 0x18U) 
                                 | ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                     [0x11U] << 0x10U) 
                                    | ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                        [0x12U] << 8U) 
                                       | vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                       [0x13U])))),32);
        bufp->chgIData(oldp+62,(((0U == (IData)(vlSelf->main__DOT__PCsrc))
                                  ? ((IData)(4U) + vlSelf->main__DOT__PC)
                                  : ((1U == (IData)(vlSelf->main__DOT__PCsrc))
                                      ? (vlSelf->main__DOT__PC 
                                         + vlSelf->main__DOT__IMMop)
                                      : ((3U == (IData)(vlSelf->main__DOT__PCsrc))
                                          ? vlSelf->main__DOT__DOutAlu
                                          : ((IData)(4U) 
                                             + vlSelf->main__DOT__PC))))),32);
        bufp->chgIData(oldp+63,((vlSelf->main__DOT__PC 
                                 + vlSelf->main__DOT__IMMop)),32);
        bufp->chgCData(oldp+64,((0xffU & vlSelf->main__DOT__PC)),8);
    }
    bufp->chgBit(oldp+65,(vlSelf->clk));
    bufp->chgBit(oldp+66,(vlSelf->rst));
    bufp->chgBit(oldp+67,(vlSelf->trigger_in));
    bufp->chgIData(oldp+68,(vlSelf->A0),32);
}

void Vmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_cleanup\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
