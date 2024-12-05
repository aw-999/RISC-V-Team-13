// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"
#include "Vmain___024root.h"

VL_ATTR_COLD void Vmain___024root___eval_static(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmain___024root___eval_initial__TOP(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_initial(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmain___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vtrigprevexpr___TOP__main__DOT__flag__0 
        = vlSelfRef.main__DOT__flag;
    vlSelfRef.__Vtrigprevexpr___TOP__main__DOT__flag__1 
        = vlSelfRef.main__DOT__flag;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vmain___024root___eval_initial__TOP(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x7369616eU;
    __Vtemp_1[2U] = 0x67617573U;
    VL_READMEM_N(true, 8, 1048576, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray)
                 , 0x10000U, ~0ULL);
    VL_READMEM_N(true, 8, 65536, 0, std::string{"test.mem"}
                 ,  &(vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vmain___024root___eval_final(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(Vmain___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmain___024root___eval_phase__stl(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_settle(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_settle\n"); );
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
            Vmain___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("main.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmain___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] main.flag)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmain___024root___stl_sequent__TOP__0(Vmain___024root* vlSelf);
void Vmain___024root___act_sequent__TOP__0(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_stl(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmain___024root___stl_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmain___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vmain___024root___stl_sequent__TOP__0(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A0 = vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr
        [0xaU];
    vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign = (1U 
                                                   & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                      [
                                                      (0xffffU 
                                                       & vlSelfRef.main__DOT__PC)] 
                                                      >> 7U));
    vlSelfRef.main__DOT__D1__DOT__func3 = (7U & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                 [(0xffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.main__DOT__PC))] 
                                                 >> 4U));
    vlSelfRef.__VdfgRegularize_h6171c202_0_0 = ((vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                 [(0xffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.main__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                [(0xffffU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.main__DOT__PC))]);
    vlSelfRef.__VdfgRegularize_h6171c202_0_1 = ((vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                 [(0xffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.main__DOT__PC))] 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_0));
    vlSelfRef.main__DOT__D1__DOT__DOut1 = vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr
        [(0x1fU & (vlSelfRef.__VdfgRegularize_h6171c202_0_1 
                   >> 0xfU))];
    vlSelfRef.main__DOT__instr = ((vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                   [(0xffffU & vlSelfRef.main__DOT__PC)] 
                                   << 0x18U) | vlSelfRef.__VdfgRegularize_h6171c202_0_1);
    vlSelfRef.main__DOT__D1__DOT__DOut2 = vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr
        [(0x1fU & (vlSelfRef.main__DOT__instr >> 0x14U))];
}

VL_ATTR_COLD void Vmain___024root___eval_triggers__stl(Vmain___024root* vlSelf);

VL_ATTR_COLD bool Vmain___024root___eval_phase__stl(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmain___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmain___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__act(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] main.flag)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__nba(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] main.flag)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmain___024root___ctor_var_reset(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->A0 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__PCaddIMM = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__PCadd4 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__DOutAlu = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__ALUop = VL_RAND_RESET_I(2);
    vlSelf->main__DOT__RamWrite = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__IMMsrc = VL_RAND_RESET_I(3);
    vlSelf->main__DOT__ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->main__DOT__PCsrc = VL_RAND_RESET_I(2);
    vlSelf->main__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__D1__DOT__DOut1 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D1__DOT__DOut2 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D1__DOT__IMM = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D1__DOT__N2 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D1__DOT__DInReg = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D1__DOT__DOutRam = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D1__DOT__ALUctrl = VL_RAND_RESET_I(4);
    vlSelf->main__DOT__D1__DOT__func3 = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->main__DOT__D1__DOT__R1__DOT__RegArr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->main__DOT__D1__DOT__A1__DOT__flagZ = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__D1__DOT__A1__DOT__flagC = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__D1__DOT__A1__DOT__flagS = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__D1__DOT__A1__DOT__flagV = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__D1__DOT__I1__DOT__sign = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->main__DOT__D1__DOT__R2__DOT__AdM = VL_RAND_RESET_I(20);
    vlSelf->main__DOT__C1__DOT__op7 = VL_RAND_RESET_I(7);
    vlSelf->main__DOT__C1__DOT__PCsrc_req1 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->main__DOT__D2__DOT__R1__DOT__RomArr[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__VdfgRegularize_h6171c202_0_0 = VL_RAND_RESET_I(16);
    vlSelf->__VdfgRegularize_h6171c202_0_1 = VL_RAND_RESET_I(24);
    vlSelf->__Vtrigprevexpr___TOP__main__DOT__flag__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__main__DOT__flag__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
