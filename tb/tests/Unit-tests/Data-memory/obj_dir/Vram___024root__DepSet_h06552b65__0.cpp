// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram.h for the primary calling header

#include "verilated.h"

#include "Vram___024root.h"

VL_INLINE_OPT void Vram___024root___sequent__TOP__0(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___sequent__TOP__0\n"); );
    // Init
    IData/*16:0*/ __Vdlyvdim0__ram__DOT__RamArray__v0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__RamArray__v0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__RamArray__v0;
    IData/*16:0*/ __Vdlyvdim0__ram__DOT__RamArray__v1;
    CData/*7:0*/ __Vdlyvval__ram__DOT__RamArray__v1;
    IData/*16:0*/ __Vdlyvdim0__ram__DOT__RamArray__v2;
    CData/*7:0*/ __Vdlyvval__ram__DOT__RamArray__v2;
    IData/*16:0*/ __Vdlyvdim0__ram__DOT__RamArray__v3;
    CData/*7:0*/ __Vdlyvval__ram__DOT__RamArray__v3;
    IData/*16:0*/ __Vdlyvdim0__ram__DOT__RamArray__v4;
    CData/*7:0*/ __Vdlyvval__ram__DOT__RamArray__v4;
    CData/*0:0*/ __Vdlyvset__ram__DOT__RamArray__v4;
    IData/*16:0*/ __Vdlyvdim0__ram__DOT__RamArray__v5;
    CData/*7:0*/ __Vdlyvval__ram__DOT__RamArray__v5;
    IData/*16:0*/ __Vdlyvdim0__ram__DOT__RamArray__v6;
    CData/*7:0*/ __Vdlyvval__ram__DOT__RamArray__v6;
    CData/*0:0*/ __Vdlyvset__ram__DOT__RamArray__v6;
    // Body
    __Vdlyvset__ram__DOT__RamArray__v0 = 0U;
    __Vdlyvset__ram__DOT__RamArray__v4 = 0U;
    __Vdlyvset__ram__DOT__RamArray__v6 = 0U;
    if (vlSelf->RamWrite) {
        if ((2U == (3U & (IData)(vlSelf->func3)))) {
            __Vdlyvval__ram__DOT__RamArray__v0 = (vlSelf->DIn 
                                                  >> 0x18U);
            __Vdlyvset__ram__DOT__RamArray__v0 = 1U;
            __Vdlyvdim0__ram__DOT__RamArray__v0 = vlSelf->ram__DOT__AdM;
            __Vdlyvval__ram__DOT__RamArray__v1 = (0xffU 
                                                  & (vlSelf->DIn 
                                                     >> 0x10U));
            __Vdlyvdim0__ram__DOT__RamArray__v1 = (0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->ram__DOT__AdM));
            __Vdlyvval__ram__DOT__RamArray__v2 = (0xffU 
                                                  & (vlSelf->DIn 
                                                     >> 8U));
            __Vdlyvdim0__ram__DOT__RamArray__v2 = (0x1ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->ram__DOT__AdM));
            __Vdlyvval__ram__DOT__RamArray__v3 = (0xffU 
                                                  & vlSelf->DIn);
            __Vdlyvdim0__ram__DOT__RamArray__v3 = (0x1ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->ram__DOT__AdM));
        } else if ((1U == (3U & (IData)(vlSelf->func3)))) {
            __Vdlyvval__ram__DOT__RamArray__v4 = (0xffU 
                                                  & (vlSelf->DIn 
                                                     >> 8U));
            __Vdlyvset__ram__DOT__RamArray__v4 = 1U;
            __Vdlyvdim0__ram__DOT__RamArray__v4 = vlSelf->ram__DOT__AdM;
            __Vdlyvval__ram__DOT__RamArray__v5 = (0xffU 
                                                  & vlSelf->DIn);
            __Vdlyvdim0__ram__DOT__RamArray__v5 = (0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->ram__DOT__AdM));
        } else if ((0U == (3U & (IData)(vlSelf->func3)))) {
            __Vdlyvval__ram__DOT__RamArray__v6 = (0xffU 
                                                  & vlSelf->DIn);
            __Vdlyvset__ram__DOT__RamArray__v6 = 1U;
            __Vdlyvdim0__ram__DOT__RamArray__v6 = vlSelf->ram__DOT__AdM;
        }
    }
    if (__Vdlyvset__ram__DOT__RamArray__v0) {
        vlSelf->ram__DOT__RamArray[__Vdlyvdim0__ram__DOT__RamArray__v0] 
            = __Vdlyvval__ram__DOT__RamArray__v0;
        vlSelf->ram__DOT__RamArray[__Vdlyvdim0__ram__DOT__RamArray__v1] 
            = __Vdlyvval__ram__DOT__RamArray__v1;
        vlSelf->ram__DOT__RamArray[__Vdlyvdim0__ram__DOT__RamArray__v2] 
            = __Vdlyvval__ram__DOT__RamArray__v2;
        vlSelf->ram__DOT__RamArray[__Vdlyvdim0__ram__DOT__RamArray__v3] 
            = __Vdlyvval__ram__DOT__RamArray__v3;
    }
    if (__Vdlyvset__ram__DOT__RamArray__v4) {
        vlSelf->ram__DOT__RamArray[__Vdlyvdim0__ram__DOT__RamArray__v4] 
            = __Vdlyvval__ram__DOT__RamArray__v4;
        vlSelf->ram__DOT__RamArray[__Vdlyvdim0__ram__DOT__RamArray__v5] 
            = __Vdlyvval__ram__DOT__RamArray__v5;
    }
    if (__Vdlyvset__ram__DOT__RamArray__v6) {
        vlSelf->ram__DOT__RamArray[__Vdlyvdim0__ram__DOT__RamArray__v6] 
            = __Vdlyvval__ram__DOT__RamArray__v6;
    }
}

VL_INLINE_OPT void Vram___024root___combo__TOP__0(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->ram__DOT__AdM = (0x1ffffU & vlSelf->Ad);
    vlSelf->DOut = ((4U & (IData)(vlSelf->func3)) ? 
                    ((2U & (IData)(vlSelf->func3)) ? 
                     ((vlSelf->ram__DOT__RamArray[vlSelf->ram__DOT__AdM] 
                       << 0x18U) | ((vlSelf->ram__DOT__RamArray
                                     [(0x1ffffU & ((IData)(1U) 
                                                   + vlSelf->ram__DOT__AdM))] 
                                     << 0x10U) | ((
                                                   vlSelf->ram__DOT__RamArray
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->ram__DOT__AdM))] 
                                                   << 8U) 
                                                  | vlSelf->ram__DOT__RamArray
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->ram__DOT__AdM))])))
                      : ((1U & (IData)(vlSelf->func3))
                          ? ((vlSelf->ram__DOT__RamArray
                              [vlSelf->ram__DOT__AdM] 
                              << 8U) | vlSelf->ram__DOT__RamArray
                             [(0x1ffffU & ((IData)(1U) 
                                           + vlSelf->ram__DOT__AdM))])
                          : vlSelf->ram__DOT__RamArray
                         [vlSelf->ram__DOT__AdM])) : 
                    ((2U & (IData)(vlSelf->func3)) ? 
                     ((1U & (IData)(vlSelf->func3))
                       ? ((vlSelf->ram__DOT__RamArray
                           [vlSelf->ram__DOT__AdM] 
                           << 0x18U) | ((vlSelf->ram__DOT__RamArray
                                         [(0x1ffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->ram__DOT__AdM))] 
                                         << 0x10U) 
                                        | ((vlSelf->ram__DOT__RamArray
                                            [(0x1ffffU 
                                              & ((IData)(2U) 
                                                 + vlSelf->ram__DOT__AdM))] 
                                            << 8U) 
                                           | vlSelf->ram__DOT__RamArray
                                           [(0x1ffffU 
                                             & ((IData)(3U) 
                                                + vlSelf->ram__DOT__AdM))])))
                       : ((vlSelf->ram__DOT__RamArray
                           [vlSelf->ram__DOT__AdM] 
                           << 0x18U) | ((vlSelf->ram__DOT__RamArray
                                         [(0x1ffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->ram__DOT__AdM))] 
                                         << 0x10U) 
                                        | ((vlSelf->ram__DOT__RamArray
                                            [(0x1ffffU 
                                              & ((IData)(2U) 
                                                 + vlSelf->ram__DOT__AdM))] 
                                            << 8U) 
                                           | vlSelf->ram__DOT__RamArray
                                           [(0x1ffffU 
                                             & ((IData)(3U) 
                                                + vlSelf->ram__DOT__AdM))]))))
                      : ((1U & (IData)(vlSelf->func3))
                          ? (((- (IData)((1U & (vlSelf->ram__DOT__RamArray
                                                [vlSelf->ram__DOT__AdM] 
                                                >> 7U)))) 
                              << 0x10U) | ((vlSelf->ram__DOT__RamArray
                                            [vlSelf->ram__DOT__AdM] 
                                            << 8U) 
                                           | vlSelf->ram__DOT__RamArray
                                           [(0x1ffffU 
                                             & ((IData)(1U) 
                                                + vlSelf->ram__DOT__AdM))]))
                          : (((- (IData)((1U & (vlSelf->ram__DOT__RamArray
                                                [vlSelf->ram__DOT__AdM] 
                                                >> 7U)))) 
                              << 8U) | vlSelf->ram__DOT__RamArray
                             [vlSelf->ram__DOT__AdM]))));
}

void Vram___024root___eval(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vram___024root___sequent__TOP__0(vlSelf);
    }
    Vram___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vram___024root___eval_debug_assertions(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->RamWrite & 0xfeU))) {
        Verilated::overWidthError("RamWrite");}
    if (VL_UNLIKELY((vlSelf->func3 & 0xf8U))) {
        Verilated::overWidthError("func3");}
}
#endif  // VL_DEBUG
