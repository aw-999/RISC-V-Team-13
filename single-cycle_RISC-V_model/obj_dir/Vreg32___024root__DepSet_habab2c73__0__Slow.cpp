// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg32.h for the primary calling header

#include "verilated.h"

#include "Vreg32___024root.h"

VL_ATTR_COLD void Vreg32___024root___settle__TOP__0(Vreg32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg32___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->reg32__DOT__register_array[0U] = 0U;
    vlSelf->A0 = vlSelf->reg32__DOT__register_array
        [0xaU];
    vlSelf->DOut1 = vlSelf->reg32__DOT__register_array
        [vlSelf->AdOut1];
    vlSelf->DOut2 = vlSelf->reg32__DOT__register_array
        [vlSelf->AdOut2];
}

VL_ATTR_COLD void Vreg32___024root___eval_initial(Vreg32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg32___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vreg32___024root___eval_settle(Vreg32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg32___024root___eval_settle\n"); );
    // Body
    Vreg32___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vreg32___024root___final(Vreg32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg32___024root___final\n"); );
}

VL_ATTR_COLD void Vreg32___024root___ctor_var_reset(Vreg32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg32___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->RegWrite = VL_RAND_RESET_I(1);
    vlSelf->write_addr = VL_RAND_RESET_I(5);
    vlSelf->AdOut1 = VL_RAND_RESET_I(5);
    vlSelf->AdOut2 = VL_RAND_RESET_I(5);
    vlSelf->DIn = VL_RAND_RESET_I(32);
    vlSelf->DOut1 = VL_RAND_RESET_I(32);
    vlSelf->DOut2 = VL_RAND_RESET_I(32);
    vlSelf->A0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->reg32__DOT__register_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
