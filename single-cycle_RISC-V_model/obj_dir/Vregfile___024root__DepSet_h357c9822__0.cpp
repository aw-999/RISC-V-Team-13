// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "verilated.h"

#include "Vregfile___024root.h"

VL_INLINE_OPT void Vregfile___024root___sequent__TOP__0(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__regfile__DOT__register_array__v0;
    IData/*31:0*/ __Vdlyvval__regfile__DOT__register_array__v0;
    CData/*0:0*/ __Vdlyvset__regfile__DOT__register_array__v0;
    // Body
    __Vdlyvset__regfile__DOT__register_array__v0 = 0U;
    if (((IData)(vlSelf->RegWrite) & (0U != (IData)(vlSelf->write_addr)))) {
        __Vdlyvval__regfile__DOT__register_array__v0 
            = vlSelf->DIn;
        __Vdlyvset__regfile__DOT__register_array__v0 = 1U;
        __Vdlyvdim0__regfile__DOT__register_array__v0 
            = vlSelf->write_addr;
    }
    if (__Vdlyvset__regfile__DOT__register_array__v0) {
        vlSelf->regfile__DOT__register_array[__Vdlyvdim0__regfile__DOT__register_array__v0] 
            = __Vdlyvval__regfile__DOT__register_array__v0;
    }
    vlSelf->A0 = vlSelf->regfile__DOT__register_array
        [0xaU];
}

VL_INLINE_OPT void Vregfile___024root___combo__TOP__0(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->DOut1 = vlSelf->regfile__DOT__register_array
        [vlSelf->A1];
    vlSelf->DOut2 = vlSelf->regfile__DOT__register_array
        [vlSelf->A2];
}

void Vregfile___024root___eval(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vregfile___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vregfile___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vregfile___024root___eval_debug_assertions(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->RegWrite & 0xfeU))) {
        Verilated::overWidthError("RegWrite");}
    if (VL_UNLIKELY((vlSelf->write_addr & 0xe0U))) {
        Verilated::overWidthError("write_addr");}
    if (VL_UNLIKELY((vlSelf->A1 & 0xe0U))) {
        Verilated::overWidthError("A1");}
    if (VL_UNLIKELY((vlSelf->A2 & 0xe0U))) {
        Verilated::overWidthError("A2");}
}
#endif  // VL_DEBUG
