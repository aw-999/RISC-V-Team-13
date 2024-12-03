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
    vlSelf->ALUresult = ((8U & (IData)(vlSelf->ALUctrl))
                          ? ((4U & (IData)(vlSelf->ALUctrl))
                              ? (vlSelf->SrcA + vlSelf->SrcB)
                              : ((2U & (IData)(vlSelf->ALUctrl))
                                  ? (vlSelf->SrcA + vlSelf->SrcB)
                                  : ((1U & (IData)(vlSelf->ALUctrl))
                                      ? (vlSelf->SrcA 
                                         < vlSelf->SrcB)
                                      : (vlSelf->SrcA 
                                         >> 1U)))) : 
                         ((4U & (IData)(vlSelf->ALUctrl))
                           ? ((2U & (IData)(vlSelf->ALUctrl))
                               ? ((1U & (IData)(vlSelf->ALUctrl))
                                   ? ((0x1fU >= vlSelf->SrcB)
                                       ? (vlSelf->SrcA 
                                          >> vlSelf->SrcB)
                                       : 0U) : ((0x1fU 
                                                 >= vlSelf->SrcB)
                                                 ? 
                                                (vlSelf->SrcA 
                                                 << vlSelf->SrcB)
                                                 : 0U))
                               : ((1U & (IData)(vlSelf->ALUctrl))
                                   ? (VL_LTS_III(32, vlSelf->SrcA, vlSelf->SrcB)
                                       ? 1U : 0U) : 
                                  (vlSelf->SrcA ^ vlSelf->SrcB)))
                           : ((2U & (IData)(vlSelf->ALUctrl))
                               ? ((1U & (IData)(vlSelf->ALUctrl))
                                   ? (vlSelf->SrcA 
                                      | vlSelf->SrcB)
                                   : (vlSelf->SrcA 
                                      & vlSelf->SrcB))
                               : ((1U & (IData)(vlSelf->ALUctrl))
                                   ? (vlSelf->SrcA 
                                      - vlSelf->SrcB)
                                   : (vlSelf->SrcA 
                                      + vlSelf->SrcB)))));
    vlSelf->flag = (1U & ((4U & (IData)(vlSelf->ALUflag))
                           ? ((2U & (IData)(vlSelf->ALUflag))
                               ? ((1U & (IData)(vlSelf->ALUflag))
                                   ? ((vlSelf->ALUresult 
                                       >= vlSelf->SrcB)
                                       ? 1U : 0U) : 
                                  ((vlSelf->ALUresult 
                                    < vlSelf->SrcB)
                                    ? 1U : 0U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->ALUflag))
                                                    ? 
                                                   (VL_LTES_III(32, 0U, vlSelf->ALUresult)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_GTS_III(32, 0U, vlSelf->ALUresult)
                                                     ? 1U
                                                     : 0U)))
                           : ((~ ((IData)(vlSelf->ALUflag) 
                                  >> 1U)) & ((1U & (IData)(vlSelf->ALUflag))
                                              ? ((0U 
                                                  != vlSelf->ALUresult)
                                                  ? 1U
                                                  : 0U)
                                              : ((0U 
                                                  == vlSelf->ALUresult)
                                                  ? 1U
                                                  : 0U)))));
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
    if (VL_UNLIKELY((vlSelf->ALUctrl & 0xf0U))) {
        Verilated::overWidthError("ALUctrl");}
    if (VL_UNLIKELY((vlSelf->ALUflag & 0xf8U))) {
        Verilated::overWidthError("ALUflag");}
}
#endif  // VL_DEBUG
