// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


void Vmain___024root__trace_chg_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmain___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_chg_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmain___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmain___024root__trace_chg_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.main__DOT__instr),32);
        bufp->chgIData(oldp+1,(vlSelfRef.main__DOT__IMMop),32);
        bufp->chgCData(oldp+2,((0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_0) 
                                         >> 7U))),5);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelfRef.__VdfgRegularize_h6171c202_0_1 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+4,((0x1fU & (vlSelfRef.main__DOT__instr 
                                         >> 0x14U))),5);
        bufp->chgBit(oldp+5,(vlSelfRef.main__DOT__ALUsrc));
        bufp->chgCData(oldp+6,(vlSelfRef.main__DOT__ALUop),2);
        bufp->chgBit(oldp+7,((0x23U == (IData)(vlSelfRef.main__DOT__C1__DOT__op7))));
        bufp->chgBit(oldp+8,(vlSelfRef.main__DOT__RegWrite));
        bufp->chgCData(oldp+9,(vlSelfRef.main__DOT__IMMsrc),3);
        bufp->chgCData(oldp+10,(vlSelfRef.main__DOT__ResultSrc),2);
        bufp->chgCData(oldp+11,(vlSelfRef.main__DOT__PCsrc),2);
        bufp->chgIData(oldp+12,(vlSelfRef.main__DOT__PC),32);
        bufp->chgIData(oldp+13,(vlSelfRef.main__DOT__DOutAlu),32);
        bufp->chgBit(oldp+14,((1U & ((4U & (IData)(vlSelfRef.main__DOT__D1__DOT__ALUflag))
                                      ? (IData)(vlSelfRef.main__DOT__D1__DOT__ALUflag)
                                      : ((2U & (IData)(vlSelfRef.main__DOT__D1__DOT__ALUflag))
                                          ? (IData)(vlSelfRef.main__DOT__D1__DOT__ALUflag)
                                          : ((1U & (IData)(vlSelfRef.main__DOT__D1__DOT__ALUflag))
                                              ? ((0U 
                                                  != vlSelfRef.main__DOT__DOutAlu)
                                                  ? 1U
                                                  : 0U)
                                              : ((0U 
                                                  == vlSelfRef.main__DOT__DOutAlu)
                                                  ? 1U
                                                  : 0U)))))));
        bufp->chgCData(oldp+15,(vlSelfRef.main__DOT__C1__DOT__op7),7);
        bufp->chgCData(oldp+16,(vlSelfRef.main__DOT__C1__DOT__PCsrc_req1),2);
        bufp->chgIData(oldp+17,(vlSelfRef.main__DOT__D1__DOT__DOut1),32);
        bufp->chgIData(oldp+18,(vlSelfRef.main__DOT__D1__DOT__DOut2),32);
        bufp->chgIData(oldp+19,(vlSelfRef.main__DOT__D1__DOT__N2),32);
        bufp->chgIData(oldp+20,(((2U & (IData)(vlSelfRef.main__DOT__ResultSrc))
                                  ? ((1U & (IData)(vlSelfRef.main__DOT__ResultSrc))
                                      ? vlSelfRef.main__DOT__D1__DOT__N2
                                      : ((IData)(4U) 
                                         + vlSelfRef.main__DOT__PC))
                                  : ((1U & (IData)(vlSelfRef.main__DOT__ResultSrc))
                                      ? vlSelfRef.main__DOT__D1__DOT__DOutRam
                                      : vlSelfRef.main__DOT__DOutAlu))),32);
        bufp->chgIData(oldp+21,(vlSelfRef.main__DOT__D1__DOT__DOutRam),32);
        bufp->chgBit(oldp+22,((1U & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                     [(0xffU & ((IData)(3U) 
                                                + vlSelfRef.main__DOT__PC))] 
                                     >> 1U))));
        bufp->chgBit(oldp+23,((1U & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                     [(0xffU & vlSelfRef.main__DOT__PC)] 
                                     >> 6U))));
        bufp->chgCData(oldp+24,(vlSelfRef.main__DOT__D1__DOT__func3),3);
        bufp->chgCData(oldp+25,(vlSelfRef.main__DOT__D1__DOT__ALUctrl),3);
        bufp->chgCData(oldp+26,(vlSelfRef.main__DOT__D1__DOT__ALUflag),3);
        bufp->chgBit(oldp+27,(vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign));
        bufp->chgIData(oldp+28,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[0]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[1]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[2]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[3]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[4]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[5]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[6]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[7]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[8]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[9]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[10]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[11]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[12]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[13]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[14]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[15]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[16]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[17]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[18]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[19]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[20]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[21]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[22]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[23]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[24]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[25]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[26]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[27]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[28]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[29]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[30]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RomArr[31]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM),18);
        bufp->chgIData(oldp+61,(((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                  [0x10U] << 0x18U) 
                                 | ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                     [0x11U] << 0x10U) 
                                    | ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                        [0x12U] << 8U) 
                                       | vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                       [0x13U])))),32);
        bufp->chgIData(oldp+62,(((0U == (IData)(vlSelfRef.main__DOT__PCsrc))
                                  ? ((IData)(4U) + vlSelfRef.main__DOT__PC)
                                  : ((1U == (IData)(vlSelfRef.main__DOT__PCsrc))
                                      ? (vlSelfRef.main__DOT__IMMop 
                                         + vlSelfRef.main__DOT__PC)
                                      : ((3U == (IData)(vlSelfRef.main__DOT__PCsrc))
                                          ? vlSelfRef.main__DOT__DOutAlu
                                          : ((IData)(4U) 
                                             + vlSelfRef.main__DOT__PC))))),32);
        bufp->chgIData(oldp+63,((vlSelfRef.main__DOT__IMMop 
                                 + vlSelfRef.main__DOT__PC)),32);
        bufp->chgCData(oldp+64,((0xffU & vlSelfRef.main__DOT__PC)),8);
    }
    bufp->chgBit(oldp+65,(vlSelfRef.clk));
    bufp->chgBit(oldp+66,(vlSelfRef.rst));
    bufp->chgIData(oldp+67,(vlSelfRef.A0),32);
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
