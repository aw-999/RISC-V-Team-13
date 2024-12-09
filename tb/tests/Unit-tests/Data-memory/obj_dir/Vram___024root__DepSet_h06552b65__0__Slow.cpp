// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram.h for the primary calling header

#include "verilated.h"

#include "Vram___024root.h"

VL_ATTR_COLD void Vram___024root___initial__TOP__0(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h0b1accc7__0;
    // Body
    __Vtemp_h0b1accc7__0[0U] = 0x2e6d656dU;
    __Vtemp_h0b1accc7__0[1U] = 0x6e676c65U;
    __Vtemp_h0b1accc7__0[2U] = 0x74726961U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h0b1accc7__0)
                 ,  &(vlSelf->ram__DOT__RamArray), 0
                 , ~0ULL);
}

VL_ATTR_COLD void Vram___024root___eval_initial(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval_initial\n"); );
    // Body
    Vram___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vram___024root___combo__TOP__0(Vram___024root* vlSelf);

VL_ATTR_COLD void Vram___024root___eval_settle(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval_settle\n"); );
    // Body
    Vram___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vram___024root___final(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___final\n"); );
}

VL_ATTR_COLD void Vram___024root___ctor_var_reset(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->Ad = VL_RAND_RESET_I(32);
    vlSelf->RamWrite = VL_RAND_RESET_I(1);
    vlSelf->func3 = VL_RAND_RESET_I(3);
    vlSelf->DIn = VL_RAND_RESET_I(32);
    vlSelf->DOut = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->ram__DOT__RamArray[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ram__DOT__AdM = VL_RAND_RESET_I(17);
}
