// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALUDecode.h for the primary calling header

#include "verilated.h"

#include "VALUDecode___024root.h"

extern const VlUnpacked<CData/*3:0*/, 128> VALUDecode__ConstPool__TABLE_h866776ce_0;

VL_INLINE_OPT void VALUDecode___024root___combo__TOP__0(VALUDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root___combo__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->funct75) << 6U) 
                    | (((IData)(vlSelf->funct3) << 3U) 
                       | (IData)(vlSelf->ALUop)));
    vlSelf->ALUCtrl = VALUDecode__ConstPool__TABLE_h866776ce_0
        [__Vtableidx1];
}

void VALUDecode___024root___eval(VALUDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root___eval\n"); );
    // Body
    VALUDecode___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VALUDecode___024root___eval_debug_assertions(VALUDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->opcode5 & 0xfeU))) {
        Verilated::overWidthError("opcode5");}
    if (VL_UNLIKELY((vlSelf->funct3 & 0xf8U))) {
        Verilated::overWidthError("funct3");}
    if (VL_UNLIKELY((vlSelf->funct75 & 0xfeU))) {
        Verilated::overWidthError("funct75");}
    if (VL_UNLIKELY((vlSelf->ALUop & 0xf8U))) {
        Verilated::overWidthError("ALUop");}
}
#endif  // VL_DEBUG
