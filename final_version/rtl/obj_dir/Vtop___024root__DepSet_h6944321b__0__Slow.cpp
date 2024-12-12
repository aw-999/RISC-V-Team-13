// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x74657374U;
    __Vtemp_1[2U] = 0x616c6c5fU;
    __Vtemp_1[3U] = 0x5aU;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.top__DOT__instructionmemory__DOT__RomArray)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6d6f7279U;
    __Vtemp_2[2U] = 0x615f6d65U;
    __Vtemp_2[3U] = 0x646174U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelfRef.top__DOT__datamemory__DOT__RamArray)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_h16d0d9a0_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h2ceb4d49_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_hc2b5e764_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hbbfcfc79_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hfd45bb85_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_hf13893f2_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hafddcf19_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_ha3f34f09_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_hd1c1786d_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.top__DOT__flushD = 0U;
    vlSelfRef.a0 = vlSelfRef.top__DOT__regfile__DOT__RegArr
        [0xaU];
    vlSelfRef.top__DOT__stallF = 0U;
    vlSelfRef.top__DOT__stallD = 0U;
    vlSelfRef.top__DOT__flushE = 0U;
    if (((IData)(vlSelfRef.top__DOT__resultsrcE) & 
         (((IData)(vlSelfRef.top__DOT__rdE) == (0x1fU 
                                                & (vlSelfRef.top__DOT__instrD 
                                                   >> 0xfU))) 
          | ((IData)(vlSelfRef.top__DOT__rdE) == (0x1fU 
                                                  & (vlSelfRef.top__DOT__instrD 
                                                     >> 0x14U)))))) {
        vlSelfRef.top__DOT__stallF = 1U;
        vlSelfRef.top__DOT__stallD = 1U;
        vlSelfRef.top__DOT__flushE = 1U;
    }
    if ((1U & (IData)(vlSelfRef.top__DOT__pcsrcE))) {
        vlSelfRef.top__DOT__flushD = 1U;
        vlSelfRef.top__DOT__flushE = 1U;
    }
    vlSelfRef.top__DOT__datamemory__DOT__AdM = (0x1ffffU 
                                                & vlSelfRef.top__DOT__aluresultM);
    vlSelfRef.top__DOT__readdataM = ((4U & (IData)(vlSelfRef.top__DOT__funct3M))
                                      ? ((2U & (IData)(vlSelfRef.top__DOT__funct3M))
                                          ? ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                              [(0x1ffffU 
                                                & ((IData)(3U) 
                                                   + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                              << 0x18U) 
                                             | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                 [(0x1ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                 << 0x10U) 
                                                | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(1U) 
                                                        + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                    << 8U) 
                                                   | vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                   [vlSelfRef.top__DOT__datamemory__DOT__AdM])))
                                          : ((1U & (IData)(vlSelfRef.top__DOT__funct3M))
                                              ? ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                  << 8U) 
                                                 | vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                 [vlSelfRef.top__DOT__datamemory__DOT__AdM])
                                              : vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                             [vlSelfRef.top__DOT__datamemory__DOT__AdM]))
                                      : ((2U & (IData)(vlSelfRef.top__DOT__funct3M))
                                          ? ((1U & (IData)(vlSelfRef.top__DOT__funct3M))
                                              ? ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                  << 0x18U) 
                                                 | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                     << 0x10U) 
                                                    | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                        [
                                                        (0x1ffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                        << 8U) 
                                                       | vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                       [vlSelfRef.top__DOT__datamemory__DOT__AdM])))
                                              : ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                  << 0x18U) 
                                                 | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                     << 0x10U) 
                                                    | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                        [
                                                        (0x1ffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                        << 8U) 
                                                       | vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                       [vlSelfRef.top__DOT__datamemory__DOT__AdM]))))
                                          : ((1U & (IData)(vlSelfRef.top__DOT__funct3M))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                                 [vlSelfRef.top__DOT__datamemory__DOT__AdM] 
                                                                 >> 7U)))) 
                                                  << 0x10U) 
                                                 | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(1U) 
                                                         + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                     << 8U) 
                                                    | vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                    [vlSelfRef.top__DOT__datamemory__DOT__AdM]))
                                              : (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                                 [vlSelfRef.top__DOT__datamemory__DOT__AdM] 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                 [vlSelfRef.top__DOT__datamemory__DOT__AdM]))));
    vlSelfRef.top__DOT__pctargetE = (vlSelfRef.top__DOT__immextE 
                                     + ((IData)(vlSelfRef.top__DOT__jalrE)
                                         ? vlSelfRef.top__DOT__RD1E
                                         : vlSelfRef.top__DOT__pcE));
    vlSelfRef.top__DOT__forwardaE = (((((IData)(vlSelfRef.top__DOT__rs1E) 
                                        == (IData)(vlSelfRef.top__DOT__rdM)) 
                                       & (IData)(vlSelfRef.top__DOT__regwriteM)) 
                                      & (0U != (IData)(vlSelfRef.top__DOT__rs1E)))
                                      ? 2U : (((((IData)(vlSelfRef.top__DOT__rs1E) 
                                                 == (IData)(vlSelfRef.top__DOT__rdW)) 
                                                & (IData)(vlSelfRef.top__DOT__regwriteW)) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.top__DOT__rs1E)))
                                               ? 1U
                                               : 0U));
    vlSelfRef.top__DOT__forwardbE = (((((IData)(vlSelfRef.top__DOT__rs2E) 
                                        == (IData)(vlSelfRef.top__DOT__rdM)) 
                                       & (IData)(vlSelfRef.top__DOT__regwriteM)) 
                                      & (0U != (IData)(vlSelfRef.top__DOT__rs2E)))
                                      ? 2U : (((((IData)(vlSelfRef.top__DOT__rs2E) 
                                                 == (IData)(vlSelfRef.top__DOT__rdW)) 
                                                & (IData)(vlSelfRef.top__DOT__regwriteW)) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.top__DOT__rs2E)))
                                               ? 1U
                                               : 0U));
    vlSelfRef.top__DOT__resultW = ((2U & (IData)(vlSelfRef.top__DOT__resultsrcW))
                                    ? ((1U & (IData)(vlSelfRef.top__DOT__resultsrcW))
                                        ? vlSelfRef.top__DOT__immextW
                                        : vlSelfRef.top__DOT__pcplus4W)
                                    : ((1U & (IData)(vlSelfRef.top__DOT__resultsrcW))
                                        ? vlSelfRef.top__DOT__readdataW
                                        : vlSelfRef.top__DOT__aluresultW));
    vlSelfRef.top__DOT__pcnextF = ((2U & (IData)(vlSelfRef.top__DOT__pcsrcE))
                                    ? ((1U & (IData)(vlSelfRef.top__DOT__pcsrcE))
                                        ? vlSelfRef.top__DOT__pctargetE
                                        : vlSelfRef.top__DOT__aluresultW)
                                    : ((1U & (IData)(vlSelfRef.top__DOT__pcsrcE))
                                        ? vlSelfRef.top__DOT__pctargetE
                                        : ((IData)(4U) 
                                           + vlSelfRef.top__DOT__pcF)));
    vlSelfRef.top__DOT__srcaE = ((0U == (IData)(vlSelfRef.top__DOT__forwardaE))
                                  ? vlSelfRef.top__DOT__RD1E
                                  : ((1U == (IData)(vlSelfRef.top__DOT__forwardaE))
                                      ? vlSelfRef.top__DOT__resultW
                                      : ((2U == (IData)(vlSelfRef.top__DOT__forwardaE))
                                          ? vlSelfRef.top__DOT__aluresultM
                                          : vlSelfRef.top__DOT__RD1E)));
    vlSelfRef.top__DOT__writedataE = ((0U == (IData)(vlSelfRef.top__DOT__forwardbE))
                                       ? vlSelfRef.top__DOT__RD2E
                                       : ((1U == (IData)(vlSelfRef.top__DOT__forwardbE))
                                           ? vlSelfRef.top__DOT__resultW
                                           : ((2U == (IData)(vlSelfRef.top__DOT__forwardbE))
                                               ? vlSelfRef.top__DOT__aluresultM
                                               : vlSelfRef.top__DOT__RD2E)));
    vlSelfRef.top__DOT__srcbE = ((IData)(vlSelfRef.top__DOT__alusrcE)
                                  ? vlSelfRef.top__DOT__immextE
                                  : vlSelfRef.top__DOT__writedataE);
    vlSelfRef.top__DOT__aluresultE = 0U;
    vlSelfRef.top__DOT__flagE = 0U;
    if ((8U & (IData)(vlSelfRef.top__DOT__aluctrlE))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__aluctrlE) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__aluctrlE) 
                          >> 1U)))) {
                vlSelfRef.top__DOT__aluresultE = ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                   ? 
                                                  ((vlSelfRef.top__DOT__srcaE 
                                                    < vlSelfRef.top__DOT__srcbE)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((vlSelfRef.top__DOT__srcaE 
                                                    < vlSelfRef.top__DOT__srcbE)
                                                    ? 1U
                                                    : 0U));
            }
        }
        if ((4U & (IData)(vlSelfRef.top__DOT__aluctrlE))) {
            vlSelfRef.top__DOT__flagE = (1U & ((2U 
                                                & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                    ? 
                                                   (VL_GTES_III(32, vlSelfRef.top__DOT__srcaE, vlSelfRef.top__DOT__srcbE)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelfRef.top__DOT__srcaE, vlSelfRef.top__DOT__srcbE)
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                    ? 
                                                   ((vlSelfRef.top__DOT__srcaE 
                                                     >= vlSelfRef.top__DOT__srcbE)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((vlSelfRef.top__DOT__srcaE 
                                                     < vlSelfRef.top__DOT__srcbE)
                                                     ? 1U
                                                     : 0U))));
        } else if ((2U & (IData)(vlSelfRef.top__DOT__aluctrlE))) {
            vlSelfRef.top__DOT__flagE = (1U & ((1U 
                                                & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                ? (
                                                   (vlSelfRef.top__DOT__srcaE 
                                                    != vlSelfRef.top__DOT__srcbE)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   (vlSelfRef.top__DOT__srcaE 
                                                    == vlSelfRef.top__DOT__srcbE)
                                                    ? 1U
                                                    : 0U)));
        }
    } else {
        vlSelfRef.top__DOT__aluresultE = ((4U & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                           ? ((2U & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__srcaE, 
                                                                 (0x1fU 
                                                                  & vlSelfRef.top__DOT__srcbE))
                                                   : 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelfRef.top__DOT__srcbE)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                   ? 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelfRef.top__DOT__srcbE))
                                                   : 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   ^ vlSelfRef.top__DOT__srcbE)))
                                           : ((2U & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                   ? 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   | vlSelfRef.top__DOT__srcbE)
                                                   : 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   & vlSelfRef.top__DOT__srcbE))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                   ? 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   - vlSelfRef.top__DOT__srcbE)
                                                   : 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   + vlSelfRef.top__DOT__srcbE))));
    }
    __Vtableidx1 = (((IData)(vlSelfRef.top__DOT__flagE) 
                     << 7U) | (0x7fU & vlSelfRef.top__DOT__instrD));
    vlSelfRef.top__DOT__aluopD = Vtop__ConstPool__TABLE_h16d0d9a0_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__jalrD = Vtop__ConstPool__TABLE_h2ceb4d49_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__resultsrcD = Vtop__ConstPool__TABLE_hc2b5e764_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__memwriteD = Vtop__ConstPool__TABLE_hbbfcfc79_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__alusrcD = Vtop__ConstPool__TABLE_hfd45bb85_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__immsrcD = Vtop__ConstPool__TABLE_hf13893f2_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__regwriteD = Vtop__ConstPool__TABLE_hafddcf19_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__pcsrcD = Vtop__ConstPool__TABLE_ha3f34f09_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__immextD = ((4U & (IData)(vlSelfRef.top__DOT__immsrcD))
                                    ? ((2U & (IData)(vlSelfRef.top__DOT__immsrcD))
                                        ? vlSelfRef.top__DOT__instrD
                                        : ((1U & (IData)(vlSelfRef.top__DOT__immsrcD))
                                            ? vlSelfRef.top__DOT__instrD
                                            : (((- (IData)(
                                                           (vlSelfRef.top__DOT__instrD 
                                                            >> 0x1fU))) 
                                                << 0x15U) 
                                               | ((0x100000U 
                                                   & (vlSelfRef.top__DOT__instrD 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelfRef.top__DOT__instrD) 
                                                     | ((0x800U 
                                                         & (vlSelfRef.top__DOT__instrD 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelfRef.top__DOT__instrD 
                                                              >> 0x14U))))))))
                                    : ((2U & (IData)(vlSelfRef.top__DOT__immsrcD))
                                        ? ((1U & (IData)(vlSelfRef.top__DOT__immsrcD))
                                            ? (0xfffff000U 
                                               & vlSelfRef.top__DOT__instrD)
                                            : (((- (IData)(
                                                           (vlSelfRef.top__DOT__instrD 
                                                            >> 0x1fU))) 
                                                << 0xdU) 
                                               | ((0x1000U 
                                                   & (vlSelfRef.top__DOT__instrD 
                                                      >> 0x13U)) 
                                                  | ((0x800U 
                                                      & (vlSelfRef.top__DOT__instrD 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelfRef.top__DOT__instrD 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelfRef.top__DOT__instrD 
                                                              >> 7U)))))))
                                        : ((1U & (IData)(vlSelfRef.top__DOT__immsrcD))
                                            ? (((- (IData)(
                                                           (vlSelfRef.top__DOT__instrD 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelfRef.top__DOT__instrD 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.top__DOT__instrD 
                                                        >> 7U))))
                                            : (((- (IData)(
                                                           (vlSelfRef.top__DOT__instrD 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.top__DOT__instrD 
                                                  >> 0x14U)))));
    __Vtableidx2 = ((0x40U & (vlSelfRef.top__DOT__instrD 
                              >> 0x18U)) | ((0x38U 
                                             & (vlSelfRef.top__DOT__instrD 
                                                >> 9U)) 
                                            | (IData)(vlSelfRef.top__DOT__aluopD)));
    vlSelfRef.top__DOT__aluctrlD = Vtop__ConstPool__TABLE_hd1c1786d_0
        [__Vtableidx2];
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pcF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pcnextF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__stallF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pcD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instrD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pcplus4D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__immextD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regwriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memwriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flushD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__stallD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alusrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__jalrD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resultsrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pcsrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__aluopD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__immsrcD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__aluctrlD = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pcE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pcplus4E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__immextE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD1E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD2E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pctargetE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__writedataE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__srcaE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__srcbE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__aluresultE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regwriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memwriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flushE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alusrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flagE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__jalrE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resultsrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pcsrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__forwardaE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__forwardbE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__funct3E = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__aluctrlE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__rdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs1E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs2E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pcplus4M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__writedataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__aluresultM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__readdataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__immextM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regwriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memwriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resultsrcM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__funct3M = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__rdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pcplus4W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__aluresultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__readdataW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__resultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__immextW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regwriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resultsrcW = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__rdW = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->top__DOT__instructionmemory__DOT__RomArray[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__regfile__DOT__RegArr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 131072; ++__Vi0) {
        vlSelf->top__DOT__datamemory__DOT__RamArray[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__datamemory__DOT__AdM = VL_RAND_RESET_I(17);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
