// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___combo__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->ALUResult = 0U;
    vlSelf->ZeroFlag = 0U;
    vlSelf->NegativeFlag = 0U;
    vlSelf->ALUResult = ((8U & (IData)(vlSelf->ALUCtrl))
                          ? ((4U & (IData)(vlSelf->ALUCtrl))
                              ? 0U : ((2U & (IData)(vlSelf->ALUCtrl))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->ALUCtrl))
                                                ? (
                                                   (vlSelf->SrcA 
                                                    < vlSelf->SrcB)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   (vlSelf->SrcA 
                                                    < vlSelf->SrcB)
                                                    ? 1U
                                                    : 0U))))
                          : ((4U & (IData)(vlSelf->ALUCtrl))
                              ? ((2U & (IData)(vlSelf->ALUCtrl))
                                  ? ((1U & (IData)(vlSelf->ALUCtrl))
                                      ? VL_SHIFTRS_III(32,32,5, vlSelf->SrcA, 
                                                       (0x1fU 
                                                        & vlSelf->SrcB))
                                      : (vlSelf->SrcA 
                                         >> (0x1fU 
                                             & vlSelf->SrcB)))
                                  : ((1U & (IData)(vlSelf->ALUCtrl))
                                      ? (vlSelf->SrcA 
                                         << (0x1fU 
                                             & vlSelf->SrcB))
                                      : (vlSelf->SrcA 
                                         ^ vlSelf->SrcB)))
                              : ((2U & (IData)(vlSelf->ALUCtrl))
                                  ? ((1U & (IData)(vlSelf->ALUCtrl))
                                      ? (vlSelf->SrcA 
                                         | vlSelf->SrcB)
                                      : (vlSelf->SrcA 
                                         & vlSelf->SrcB))
                                  : ((1U & (IData)(vlSelf->ALUCtrl))
                                      ? (vlSelf->SrcA 
                                         - vlSelf->SrcB)
                                      : (vlSelf->SrcA 
                                         + vlSelf->SrcB)))));
    vlSelf->ZeroFlag = (0U == vlSelf->ALUResult);
    vlSelf->NegativeFlag = (vlSelf->ALUResult >> 0x1fU);
    if ((9U == (IData)(vlSelf->ALUCtrl))) {
        vlSelf->UnsignedLess = (1U & vlSelf->ALUResult);
    }
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Body
    Valu___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ALUCtrl & 0xf0U))) {
        Verilated::overWidthError("ALUCtrl");}
}
#endif  // VL_DEBUG
