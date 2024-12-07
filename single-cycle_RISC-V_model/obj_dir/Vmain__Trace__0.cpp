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
        bufp->chgIData(oldp+0,(vlSelfRef.main__DOT__PC),32);
        bufp->chgIData(oldp+1,(((2U & (IData)(vlSelfRef.main__DOT__PCsrc))
                                 ? ((1U & (IData)(vlSelfRef.main__DOT__PCsrc))
                                     ? vlSelfRef.main__DOT__PCaddIMM
                                     : vlSelfRef.main__DOT__DOutAlu)
                                 : ((1U & (IData)(vlSelfRef.main__DOT__PCsrc))
                                     ? vlSelfRef.main__DOT__PCaddIMM
                                     : ((IData)(4U) 
                                        + vlSelfRef.main__DOT__PC)))),32);
        bufp->chgIData(oldp+2,(((IData)(4U) + vlSelfRef.main__DOT__PC)),32);
        bufp->chgIData(oldp+3,(vlSelfRef.main__DOT__PCaddIMM),32);
        bufp->chgIData(oldp+4,(vlSelfRef.main__DOT__instr),32);
        bufp->chgIData(oldp+5,(vlSelfRef.main__DOT__DOutReg1),32);
        bufp->chgIData(oldp+6,(vlSelfRef.main__DOT__DOutReg2),32);
        bufp->chgIData(oldp+7,(vlSelfRef.main__DOT__IMM),32);
        bufp->chgIData(oldp+8,(vlSelfRef.main__DOT__N2),32);
        bufp->chgIData(oldp+9,(vlSelfRef.main__DOT__DOutAlu),32);
        bufp->chgIData(oldp+10,(vlSelfRef.main__DOT__DOutDM),32);
        bufp->chgIData(oldp+11,(((2U & (IData)(vlSelfRef.main__DOT__ResultSrc))
                                  ? ((1U & (IData)(vlSelfRef.main__DOT__ResultSrc))
                                      ? vlSelfRef.main__DOT__PCaddIMM
                                      : ((IData)(4U) 
                                         + vlSelfRef.main__DOT__PC))
                                  : ((1U & (IData)(vlSelfRef.main__DOT__ResultSrc))
                                      ? vlSelfRef.main__DOT__DOutDM
                                      : vlSelfRef.main__DOT__DOutAlu))),32);
        bufp->chgCData(oldp+12,(vlSelfRef.main__DOT__PCsrc),2);
        bufp->chgBit(oldp+13,(vlSelfRef.main__DOT__ALUsrc));
        bufp->chgCData(oldp+14,(vlSelfRef.main__DOT__ResultSrc),2);
        bufp->chgCData(oldp+15,(vlSelfRef.main__DOT__IMMctrl),3);
        bufp->chgCData(oldp+16,(vlSelfRef.main__DOT__ALUop),2);
        bufp->chgCData(oldp+17,(vlSelfRef.main__DOT__ALUctrl),4);
        bufp->chgBit(oldp+18,(vlSelfRef.main__DOT__flag));
        bufp->chgBit(oldp+19,((0x23U == (IData)(vlSelfRef.main__DOT____Vcellinp__C2__Opcode))));
        bufp->chgBit(oldp+20,(vlSelfRef.main__DOT__RegWrite));
        bufp->chgBit(oldp+21,(vlSelfRef.main__DOT__A1__DOT__flagZ));
        bufp->chgBit(oldp+22,(vlSelfRef.main__DOT__A1__DOT__flagC));
        bufp->chgBit(oldp+23,(vlSelfRef.main__DOT__A1__DOT__flagS));
        bufp->chgBit(oldp+24,(vlSelfRef.main__DOT__A1__DOT__flagV));
        bufp->chgCData(oldp+25,(vlSelfRef.main__DOT____Vcellinp__C1__func3),3);
        bufp->chgCData(oldp+26,(vlSelfRef.main__DOT____Vcellinp__C2__Opcode),7);
        bufp->chgIData(oldp+27,(vlSelfRef.main__DOT__M1__DOT__Ad),20);
        bufp->chgIData(oldp+28,(((vlSelfRef.main__DOT__M1__DOT__RamArray
                                  [0x10000U] << 0x18U) 
                                 | ((vlSelfRef.main__DOT__M1__DOT__RamArray
                                     [0x10001U] << 0x10U) 
                                    | ((vlSelfRef.main__DOT__M1__DOT__RamArray
                                        [0x10002U] 
                                        << 8U) | vlSelfRef.main__DOT__M1__DOT__RamArray
                                       [0x10003U])))),32);
        bufp->chgSData(oldp+29,((0xffffU & vlSelfRef.main__DOT__PC)),16);
        bufp->chgCData(oldp+30,((0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_0) 
                                          >> 7U))),5);
        bufp->chgCData(oldp+31,((0x1fU & (vlSelfRef.__VdfgRegularize_h6171c202_0_1 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+32,((0x1fU & (vlSelfRef.main__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+33,(vlSelfRef.main__DOT__M4__DOT__RegArray[0]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.main__DOT__M4__DOT__RegArray[1]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.main__DOT__M4__DOT__RegArray[2]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.main__DOT__M4__DOT__RegArray[3]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.main__DOT__M4__DOT__RegArray[4]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.main__DOT__M4__DOT__RegArray[5]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.main__DOT__M4__DOT__RegArray[6]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.main__DOT__M4__DOT__RegArray[7]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.main__DOT__M4__DOT__RegArray[8]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.main__DOT__M4__DOT__RegArray[9]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.main__DOT__M4__DOT__RegArray[10]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.main__DOT__M4__DOT__RegArray[11]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.main__DOT__M4__DOT__RegArray[12]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.main__DOT__M4__DOT__RegArray[13]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.main__DOT__M4__DOT__RegArray[14]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.main__DOT__M4__DOT__RegArray[15]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.main__DOT__M4__DOT__RegArray[16]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.main__DOT__M4__DOT__RegArray[17]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.main__DOT__M4__DOT__RegArray[18]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.main__DOT__M4__DOT__RegArray[19]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.main__DOT__M4__DOT__RegArray[20]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.main__DOT__M4__DOT__RegArray[21]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.main__DOT__M4__DOT__RegArray[22]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.main__DOT__M4__DOT__RegArray[23]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.main__DOT__M4__DOT__RegArray[24]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.main__DOT__M4__DOT__RegArray[25]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.main__DOT__M4__DOT__RegArray[26]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.main__DOT__M4__DOT__RegArray[27]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.main__DOT__M4__DOT__RegArray[28]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.main__DOT__M4__DOT__RegArray[29]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.main__DOT__M4__DOT__RegArray[30]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.main__DOT__M4__DOT__RegArray[31]),32);
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
