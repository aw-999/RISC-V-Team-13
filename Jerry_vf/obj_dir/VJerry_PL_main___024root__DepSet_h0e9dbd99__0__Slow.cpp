// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VJerry_PL_main.h for the primary calling header

#include "VJerry_PL_main__pch.h"
#include "VJerry_PL_main___024root.h"

VL_ATTR_COLD void VJerry_PL_main___024root___eval_static(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VJerry_PL_main___024root___eval_initial__TOP(VJerry_PL_main___024root* vlSelf);
VL_ATTR_COLD void VJerry_PL_main___024root____Vm_traceActivitySetAll(VJerry_PL_main___024root* vlSelf);

VL_ATTR_COLD void VJerry_PL_main___024root___eval_initial(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VJerry_PL_main___024root___eval_initial__TOP(vlSelf);
    VJerry_PL_main___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void VJerry_PL_main___024root___eval_initial__TOP(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___eval_initial__TOP\n"); );
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
                 ,  &(vlSelfRef.Jerry_PL_main__DOT__PL_InstructionMemory__DOT__RomArray)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e6d656dU;
    __Vtemp_2[1U] = 0x7369616eU;
    __Vtemp_2[2U] = 0x67617573U;
    __Vtemp_2[3U] = 0x5aU;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray)
                 , 0x10000U, ~0ULL);
}

VL_ATTR_COLD void VJerry_PL_main___024root___eval_final(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VJerry_PL_main___024root___dump_triggers__stl(VJerry_PL_main___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VJerry_PL_main___024root___eval_phase__stl(VJerry_PL_main___024root* vlSelf);

VL_ATTR_COLD void VJerry_PL_main___024root___eval_settle(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___eval_settle\n"); );
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
            VJerry_PL_main___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Jerry_PL_main.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VJerry_PL_main___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VJerry_PL_main___024root___dump_triggers__stl(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void VJerry_PL_main___024root___stl_sequent__TOP__0(VJerry_PL_main___024root* vlSelf);

VL_ATTR_COLD void VJerry_PL_main___024root___eval_stl(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VJerry_PL_main___024root___stl_sequent__TOP__0(vlSelf);
        VJerry_PL_main___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VJerry_PL_main__ConstPool__TABLE_h58911159_0;
extern const VlUnpacked<CData/*2:0*/, 128> VJerry_PL_main__ConstPool__TABLE_h72886b9e_0;
extern const VlUnpacked<CData/*2:0*/, 128> VJerry_PL_main__ConstPool__TABLE_hfe30a113_0;
extern const VlUnpacked<CData/*3:0*/, 128> VJerry_PL_main__ConstPool__TABLE_hd1c1786d_0;

VL_ATTR_COLD void VJerry_PL_main___024root___stl_sequent__TOP__0(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.t0 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [5U];
    vlSelfRef.t3 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x1cU];
    vlSelfRef.a6 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x10U];
    vlSelfRef.A0 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0xaU];
    vlSelfRef.t2 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [7U];
    vlSelfRef.t1 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [6U];
    vlSelfRef.s0 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [8U];
    vlSelfRef.s1 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [9U];
    vlSelfRef.a1 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0xbU];
    vlSelfRef.a2 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0xcU];
    vlSelfRef.a3 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0xdU];
    vlSelfRef.a4 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0xeU];
    vlSelfRef.a5 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0xfU];
    vlSelfRef.a7 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x11U];
    vlSelfRef.s2 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x12U];
    vlSelfRef.s3 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x13U];
    vlSelfRef.s4 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x14U];
    vlSelfRef.s5 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x15U];
    vlSelfRef.s6 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x16U];
    vlSelfRef.s7 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x17U];
    vlSelfRef.s8 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x18U];
    vlSelfRef.s9 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x19U];
    vlSelfRef.s10 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x1aU];
    vlSelfRef.s11 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x1bU];
    vlSelfRef.t4 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x1dU];
    vlSelfRef.t5 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x1eU];
    vlSelfRef.t6 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x1fU];
    vlSelfRef.Jerry_PL_main__DOT__stallF = 0U;
    vlSelfRef.Jerry_PL_main__DOT__stallD = 0U;
    __Vtableidx3 = (0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD);
    vlSelfRef.Jerry_PL_main__DOT__RegWrite = VJerry_PL_main__ConstPool__TABLE_h58911159_0
        [__Vtableidx3];
    vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad 
        = (0x1ffffU & vlSelfRef.Jerry_PL_main__DOT__ALUResultM);
    vlSelfRef.Jerry_PL_main__DOT__DOutDM = ((4U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M))
                                                 ? 
                                                ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                  << 0x18U) 
                                                 | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                     << 0x10U) 
                                                    | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                        [
                                                        (0x1ffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                        << 8U) 
                                                       | vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                       [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad])))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M))
                                                  ? 
                                                 ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                   << 8U) 
                                                  | vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                  [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad])
                                                  : 
                                                 vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                 [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad]))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M))
                                                  ? 
                                                 ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(3U) 
                                                       + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                   << 0x18U) 
                                                  | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(2U) 
                                                          + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                      << 0x10U) 
                                                     | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                         [
                                                         (0x1ffffU 
                                                          & ((IData)(1U) 
                                                             + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                         << 8U) 
                                                        | vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                        [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad])))
                                                  : 
                                                 ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(3U) 
                                                       + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                   << 0x18U) 
                                                  | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(2U) 
                                                          + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                      << 0x10U) 
                                                     | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                         [
                                                         (0x1ffffU 
                                                          & ((IData)(1U) 
                                                             + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                         << 8U) 
                                                        | vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                        [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad]))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                                  [
                                                                  (0x1ffffU 
                                                                   & ((IData)(1U) 
                                                                      + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                                  >> 7U)))) 
                                                   << 0x10U) 
                                                  | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(1U) 
                                                          + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                      << 8U) 
                                                     | vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                     [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad]))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                                  [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad] 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                  [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad]))));
    __Vtableidx1 = (0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD);
    vlSelfRef.Jerry_PL_main__DOT__ALUop = VJerry_PL_main__ConstPool__TABLE_h72886b9e_0
        [__Vtableidx1];
    vlSelfRef.Jerry_PL_main__DOT__ForwardAE = (((((IData)(vlSelfRef.Jerry_PL_main__DOT__Rs1E) 
                                                  == (IData)(vlSelfRef.Jerry_PL_main__DOT__RdM)) 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__RegWriteM)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.Jerry_PL_main__DOT__Rs1E)))
                                                ? 2U
                                                : (
                                                   ((((IData)(vlSelfRef.Jerry_PL_main__DOT__Rs1E) 
                                                      == (IData)(vlSelfRef.Jerry_PL_main__DOT__RdW)) 
                                                     & (IData)(vlSelfRef.Jerry_PL_main__DOT__RegWriteW)) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.Jerry_PL_main__DOT__Rs1E)))
                                                    ? 1U
                                                    : 0U));
    __Vtableidx2 = (0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD);
    vlSelfRef.Jerry_PL_main__DOT__ImmSrc = VJerry_PL_main__ConstPool__TABLE_hfe30a113_0
        [__Vtableidx2];
    vlSelfRef.Jerry_PL_main__DOT__ForwardBE = (((((IData)(vlSelfRef.Jerry_PL_main__DOT__Rs2E) 
                                                  == (IData)(vlSelfRef.Jerry_PL_main__DOT__RdM)) 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__RegWriteM)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.Jerry_PL_main__DOT__Rs2E)))
                                                ? 2U
                                                : (
                                                   ((((IData)(vlSelfRef.Jerry_PL_main__DOT__Rs2E) 
                                                      == (IData)(vlSelfRef.Jerry_PL_main__DOT__RdW)) 
                                                     & (IData)(vlSelfRef.Jerry_PL_main__DOT__RegWriteW)) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.Jerry_PL_main__DOT__Rs2E)))
                                                    ? 1U
                                                    : 0U));
    vlSelfRef.Jerry_PL_main__DOT__DInReg = ((2U & (IData)(vlSelfRef.Jerry_PL_main__DOT__ResultSrcW))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__ResultSrcW))
                                                 ? 
                                                (vlSelfRef.Jerry_PL_main__DOT__ImmExtE 
                                                 + vlSelfRef.Jerry_PL_main__DOT__PCE)
                                                 : vlSelfRef.Jerry_PL_main__DOT__PCPlus4W)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__ResultSrcW))
                                                 ? vlSelfRef.Jerry_PL_main__DOT__ReadDataW
                                                 : vlSelfRef.Jerry_PL_main__DOT__ALUResultM));
    __Vtableidx4 = ((0x40U & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                              >> 0x18U)) | ((0x38U 
                                             & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                >> 9U)) 
                                            | (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUop)));
    vlSelfRef.Jerry_PL_main__DOT__ALUCtrl = VJerry_PL_main__ConstPool__TABLE_hd1c1786d_0
        [__Vtableidx4];
    vlSelfRef.Jerry_PL_main__DOT__IMM = ((4U & (IData)(vlSelfRef.Jerry_PL_main__DOT__ImmSrc))
                                          ? ((2U & (IData)(vlSelfRef.Jerry_PL_main__DOT__ImmSrc))
                                              ? (((- (IData)(
                                                             (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                    >> 0x14U))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.Jerry_PL_main__DOT__ImmSrc))
                                                  ? 
                                                 (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                  >> 0x14U)
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                               >> 0x1fU))) 
                                                   << 0x15U) 
                                                  | ((0x100000U 
                                                      & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & vlSelfRef.Jerry_PL_main__DOT__InstrD) 
                                                        | ((0x800U 
                                                            & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                                 >> 0x14U))))))))
                                          : ((2U & (IData)(vlSelfRef.Jerry_PL_main__DOT__ImmSrc))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.Jerry_PL_main__DOT__ImmSrc))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelfRef.Jerry_PL_main__DOT__InstrD)
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
                                                      & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                                 >> 7U)))))))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.Jerry_PL_main__DOT__ImmSrc))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                           >> 7U))))
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                     >> 0x14U)))));
    vlSelfRef.Jerry_PL_main__DOT__SrcAE = ((0U == (IData)(vlSelfRef.Jerry_PL_main__DOT__ForwardAE))
                                            ? vlSelfRef.Jerry_PL_main__DOT__RD1E
                                            : ((1U 
                                                == (IData)(vlSelfRef.Jerry_PL_main__DOT__ForwardAE))
                                                ? vlSelfRef.Jerry_PL_main__DOT__DInReg
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.Jerry_PL_main__DOT__ForwardAE))
                                                    ? vlSelfRef.Jerry_PL_main__DOT__ALUResultM
                                                    : vlSelfRef.Jerry_PL_main__DOT__RD1E)));
    vlSelfRef.Jerry_PL_main__DOT__WriteDataE = ((0U 
                                                 == (IData)(vlSelfRef.Jerry_PL_main__DOT__ForwardBE))
                                                 ? vlSelfRef.Jerry_PL_main__DOT__RD2E
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.Jerry_PL_main__DOT__ForwardBE))
                                                  ? vlSelfRef.Jerry_PL_main__DOT__DInReg
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.Jerry_PL_main__DOT__ForwardBE))
                                                   ? vlSelfRef.Jerry_PL_main__DOT__ALUResultM
                                                   : vlSelfRef.Jerry_PL_main__DOT__RD2E)));
    vlSelfRef.Jerry_PL_main__DOT__SrcBE = ((IData)(vlSelfRef.Jerry_PL_main__DOT__ALUSrcE)
                                            ? vlSelfRef.Jerry_PL_main__DOT__IMM
                                            : vlSelfRef.Jerry_PL_main__DOT__WriteDataE);
    vlSelfRef.Jerry_PL_main__DOT__UnsignedLess = 0U;
    vlSelfRef.Jerry_PL_main__DOT__ALUResult = ((8U 
                                                & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                      ? 
                                                     ((vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                       < vlSelfRef.Jerry_PL_main__DOT__SrcBE)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                       < vlSelfRef.Jerry_PL_main__DOT__SrcBE)
                                                       ? 1U
                                                       : 0U))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.Jerry_PL_main__DOT__SrcAE, 
                                                                    (0x1fU 
                                                                     & vlSelfRef.Jerry_PL_main__DOT__SrcBE))
                                                      : 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelfRef.Jerry_PL_main__DOT__SrcBE)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                      ? 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelfRef.Jerry_PL_main__DOT__SrcBE))
                                                      : 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      ^ vlSelfRef.Jerry_PL_main__DOT__SrcBE)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                      ? 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      | vlSelfRef.Jerry_PL_main__DOT__SrcBE)
                                                      : 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      & vlSelfRef.Jerry_PL_main__DOT__SrcBE))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                      ? 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      - vlSelfRef.Jerry_PL_main__DOT__SrcBE)
                                                      : 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      + vlSelfRef.Jerry_PL_main__DOT__SrcBE)))));
    vlSelfRef.Jerry_PL_main__DOT__ZeroFlag = (0U == vlSelfRef.Jerry_PL_main__DOT__ALUResult);
    vlSelfRef.Jerry_PL_main__DOT__NegativeFlag = (vlSelfRef.Jerry_PL_main__DOT__ALUResult 
                                                  >> 0x1fU);
    if ((9U == (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))) {
        vlSelfRef.Jerry_PL_main__DOT__UnsignedLess 
            = (1U & vlSelfRef.Jerry_PL_main__DOT__ALUResult);
    }
    vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 0U;
    if ((0x6fU == (IData)(vlSelfRef.Jerry_PL_main__DOT__opcodeE))) {
        vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 3U;
    } else if ((0x67U == (IData)(vlSelfRef.Jerry_PL_main__DOT__opcodeE))) {
        vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 3U;
    } else if ((0x63U == (IData)(vlSelfRef.Jerry_PL_main__DOT__opcodeE))) {
        if ((4U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3E))) {
            if ((2U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3E))) {
                if ((1U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3E))) {
                    if ((1U & (~ (IData)(vlSelfRef.Jerry_PL_main__DOT__UnsignedLess)))) {
                        vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 1U;
                    }
                } else if (vlSelfRef.Jerry_PL_main__DOT__UnsignedLess) {
                    vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3E))) {
                if ((1U & ((~ (IData)(vlSelfRef.Jerry_PL_main__DOT__NegativeFlag)) 
                           | (IData)(vlSelfRef.Jerry_PL_main__DOT__ZeroFlag)))) {
                    vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 1U;
                }
            } else if (vlSelfRef.Jerry_PL_main__DOT__NegativeFlag) {
                vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3E))) {
            vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 0U;
        } else if ((1U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3E))) {
            if ((1U & (~ (IData)(vlSelfRef.Jerry_PL_main__DOT__ZeroFlag)))) {
                vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 1U;
            }
        } else if (vlSelfRef.Jerry_PL_main__DOT__ZeroFlag) {
            vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 1U;
        }
    }
    vlSelfRef.Jerry_PL_main__DOT__flushD = 0U;
    vlSelfRef.Jerry_PL_main__DOT__flushE = 0U;
    if (((IData)(vlSelfRef.Jerry_PL_main__DOT__ResultSrcE) 
         & (((IData)(vlSelfRef.Jerry_PL_main__DOT__RdE) 
             == (0x1fU & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                          >> 0xfU))) | ((IData)(vlSelfRef.Jerry_PL_main__DOT__RdE) 
                                        == (0x1fU & 
                                            (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                             >> 0x14U)))))) {
        vlSelfRef.Jerry_PL_main__DOT__stallF = 1U;
        vlSelfRef.Jerry_PL_main__DOT__stallD = 1U;
        vlSelfRef.Jerry_PL_main__DOT__flushE = 1U;
    }
    if ((1U & (IData)(vlSelfRef.Jerry_PL_main__DOT__PCSrcE))) {
        vlSelfRef.Jerry_PL_main__DOT__flushD = 1U;
        vlSelfRef.Jerry_PL_main__DOT__flushE = 1U;
    }
}

VL_ATTR_COLD void VJerry_PL_main___024root___eval_triggers__stl(VJerry_PL_main___024root* vlSelf);

VL_ATTR_COLD bool VJerry_PL_main___024root___eval_phase__stl(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VJerry_PL_main___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VJerry_PL_main___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VJerry_PL_main___024root___dump_triggers__act(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VJerry_PL_main___024root___dump_triggers__nba(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void VJerry_PL_main___024root____Vm_traceActivitySetAll(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void VJerry_PL_main___024root___ctor_var_reset(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->TRIGGER = VL_RAND_RESET_I(1);
    vlSelf->A0 = VL_RAND_RESET_I(32);
    vlSelf->a1 = VL_RAND_RESET_I(32);
    vlSelf->a2 = VL_RAND_RESET_I(32);
    vlSelf->a3 = VL_RAND_RESET_I(32);
    vlSelf->a4 = VL_RAND_RESET_I(32);
    vlSelf->a5 = VL_RAND_RESET_I(32);
    vlSelf->a6 = VL_RAND_RESET_I(32);
    vlSelf->a7 = VL_RAND_RESET_I(32);
    vlSelf->s0 = VL_RAND_RESET_I(32);
    vlSelf->s1 = VL_RAND_RESET_I(32);
    vlSelf->s2 = VL_RAND_RESET_I(32);
    vlSelf->s3 = VL_RAND_RESET_I(32);
    vlSelf->s4 = VL_RAND_RESET_I(32);
    vlSelf->s5 = VL_RAND_RESET_I(32);
    vlSelf->s6 = VL_RAND_RESET_I(32);
    vlSelf->s7 = VL_RAND_RESET_I(32);
    vlSelf->s8 = VL_RAND_RESET_I(32);
    vlSelf->s9 = VL_RAND_RESET_I(32);
    vlSelf->s10 = VL_RAND_RESET_I(32);
    vlSelf->s11 = VL_RAND_RESET_I(32);
    vlSelf->t0 = VL_RAND_RESET_I(32);
    vlSelf->t1 = VL_RAND_RESET_I(32);
    vlSelf->t2 = VL_RAND_RESET_I(32);
    vlSelf->t3 = VL_RAND_RESET_I(32);
    vlSelf->t4 = VL_RAND_RESET_I(32);
    vlSelf->t5 = VL_RAND_RESET_I(32);
    vlSelf->t6 = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__ForwardAE = VL_RAND_RESET_I(2);
    vlSelf->Jerry_PL_main__DOT__ForwardBE = VL_RAND_RESET_I(2);
    vlSelf->Jerry_PL_main__DOT__stallF = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__stallD = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__flushD = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__flushE = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__InstrD = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__PCD = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__PCPlus4D = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->Jerry_PL_main__DOT__ALUop = VL_RAND_RESET_I(3);
    vlSelf->Jerry_PL_main__DOT__ALUCtrl = VL_RAND_RESET_I(4);
    vlSelf->Jerry_PL_main__DOT__IMM = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__RegWriteE = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__ResultSrcE = VL_RAND_RESET_I(2);
    vlSelf->Jerry_PL_main__DOT__MemWriteE = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__ALUCtrlE = VL_RAND_RESET_I(4);
    vlSelf->Jerry_PL_main__DOT__ALUSrcE = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__funct3E = VL_RAND_RESET_I(3);
    vlSelf->Jerry_PL_main__DOT__opcodeE = VL_RAND_RESET_I(7);
    vlSelf->Jerry_PL_main__DOT__PCE = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__PCPlus4E = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__ImmExtE = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__RD1E = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__RD2E = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__Rs1E = VL_RAND_RESET_I(5);
    vlSelf->Jerry_PL_main__DOT__Rs2E = VL_RAND_RESET_I(5);
    vlSelf->Jerry_PL_main__DOT__RdE = VL_RAND_RESET_I(5);
    vlSelf->Jerry_PL_main__DOT__PCSrcE = VL_RAND_RESET_I(2);
    vlSelf->Jerry_PL_main__DOT__SrcAE = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__WriteDataE = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__SrcBE = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__ZeroFlag = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__NegativeFlag = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__UnsignedLess = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    vlSelf->Jerry_PL_main__DOT__MemWriteM = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__PCPlus4M = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__ImmExtM = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->Jerry_PL_main__DOT__funct3M = VL_RAND_RESET_I(3);
    vlSelf->Jerry_PL_main__DOT__DOutDM = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__RegWriteW = VL_RAND_RESET_I(1);
    vlSelf->Jerry_PL_main__DOT__ResultSrcW = VL_RAND_RESET_I(2);
    vlSelf->Jerry_PL_main__DOT__ReadDataW = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__ALUResultW = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__PCPlus4W = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__ImmExtW = VL_RAND_RESET_I(32);
    vlSelf->Jerry_PL_main__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->Jerry_PL_main__DOT__DInReg = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->Jerry_PL_main__DOT__PL_InstructionMemory__DOT__RomArray[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Jerry_PL_main__DOT__M4__DOT__RegArr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 131072; ++__Vi0) {
        vlSelf->Jerry_PL_main__DOT__DataMemory__DOT__RamArray[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->Jerry_PL_main__DOT__DataMemory__DOT__Ad = VL_RAND_RESET_I(17);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
