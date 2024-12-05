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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.main__DOT__IMM),32);
        bufp->chgBit(oldp+1,(vlSelfRef.main__DOT__ALUsrc));
        bufp->chgCData(oldp+2,(vlSelfRef.main__DOT__ALUop),2);
        bufp->chgBit(oldp+3,(vlSelfRef.main__DOT__RamWrite));
        bufp->chgBit(oldp+4,(vlSelfRef.main__DOT__RegWrite));
        bufp->chgCData(oldp+5,(vlSelfRef.main__DOT__IMMsrc),3);
        bufp->chgCData(oldp+6,(vlSelfRef.main__DOT__ResultSrc),2);
        bufp->chgCData(oldp+7,(vlSelfRef.main__DOT__PCsrc),2);
        bufp->chgCData(oldp+8,(vlSelfRef.main__DOT__C1__DOT__op7),7);
        bufp->chgCData(oldp+9,(vlSelfRef.main__DOT__C1__DOT__PCsrc_req1),2);
        bufp->chgCData(oldp+10,(vlSelfRef.main__DOT__D1__DOT__ALUctrl),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U] 
                     | vlSelfRef.__Vm_traceActivity
                     [5U]))) {
        bufp->chgIData(oldp+11,(vlSelfRef.main__DOT__DOutAlu),32);
        bufp->chgBit(oldp+12,(vlSelfRef.main__DOT__flag));
        bufp->chgIData(oldp+13,(vlSelfRef.main__DOT__D1__DOT__N2),32);
        bufp->chgIData(oldp+14,(vlSelfRef.main__DOT__D1__DOT__DInReg),32);
        bufp->chgBit(oldp+15,(vlSelfRef.main__DOT__D1__DOT__A1__DOT__flagZ));
        bufp->chgBit(oldp+16,(vlSelfRef.main__DOT__D1__DOT__A1__DOT__flagC));
        bufp->chgBit(oldp+17,(vlSelfRef.main__DOT__D1__DOT__A1__DOT__flagS));
        bufp->chgBit(oldp+18,(vlSelfRef.main__DOT__D1__DOT__A1__DOT__flagV));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+19,(vlSelfRef.main__DOT__instr),32);
        bufp->chgIData(oldp+20,(vlSelfRef.main__DOT__PC),32);
        bufp->chgIData(oldp+21,(vlSelfRef.main__DOT__D1__DOT__DOut1),32);
        bufp->chgIData(oldp+22,(vlSelfRef.main__DOT__D1__DOT__DOut2),32);
        bufp->chgCData(oldp+23,((0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_0) 
                                          >> 7U))),5);
        bufp->chgCData(oldp+24,((0x1fU & (vlSelfRef.__VdfgRegularize_h6171c202_0_1 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+25,((0x1fU & (vlSelfRef.main__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+26,(vlSelfRef.main__DOT__D1__DOT__func3),3);
        bufp->chgBit(oldp+27,((1U & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                     [(0xffffU & ((IData)(3U) 
                                                  + vlSelfRef.main__DOT__PC))] 
                                     >> 5U))));
        bufp->chgBit(oldp+28,((1U & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                     [(0xffffU & vlSelfRef.main__DOT__PC)] 
                                     >> 6U))));
        bufp->chgBit(oldp+29,(vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign));
        bufp->chgIData(oldp+30,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[0]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[1]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[2]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[3]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[4]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[5]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[6]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[7]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[8]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[9]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[10]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[11]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[12]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[13]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[14]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[15]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[16]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[17]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[18]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[19]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[20]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[21]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[22]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[23]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[24]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[25]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[26]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[27]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[28]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[29]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[30]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[31]),32);
        bufp->chgIData(oldp+62,(((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                  [0x10000U] << 0x18U) 
                                 | ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                     [0x10001U] << 0x10U) 
                                    | ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                        [0x10002U] 
                                        << 8U) | vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                       [0x10003U])))),32);
        bufp->chgSData(oldp+63,((0xffffU & vlSelfRef.main__DOT__PC)),16);
    }
    bufp->chgBit(oldp+64,(vlSelfRef.clk));
    bufp->chgBit(oldp+65,(vlSelfRef.rst));
    bufp->chgIData(oldp+66,(vlSelfRef.A0),32);
    bufp->chgIData(oldp+67,(vlSelfRef.main__DOT__D1__DOT__DOutRam),32);
    bufp->chgIData(oldp+68,(vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM),20);
    bufp->chgIData(oldp+69,(((0U == (IData)(vlSelfRef.main__DOT__PCsrc))
                              ? ((IData)(4U) + vlSelfRef.main__DOT__PC)
                              : ((1U == (IData)(vlSelfRef.main__DOT__PCsrc))
                                  ? (vlSelfRef.main__DOT__PC 
                                     + vlSelfRef.main__DOT__IMM)
                                  : ((3U == (IData)(vlSelfRef.main__DOT__PCsrc))
                                      ? vlSelfRef.main__DOT__DOutAlu
                                      : ((IData)(4U) 
                                         + vlSelfRef.main__DOT__PC))))),32);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
