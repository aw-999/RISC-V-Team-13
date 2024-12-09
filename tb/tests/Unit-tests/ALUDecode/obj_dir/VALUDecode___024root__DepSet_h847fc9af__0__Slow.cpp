// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALUDecode.h for the primary calling header

#include "verilated.h"

#include "VALUDecode___024root.h"

VL_ATTR_COLD void VALUDecode___024root___eval_initial(VALUDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root___eval_initial\n"); );
}

void VALUDecode___024root___combo__TOP__0(VALUDecode___024root* vlSelf);

VL_ATTR_COLD void VALUDecode___024root___eval_settle(VALUDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root___eval_settle\n"); );
    // Body
    VALUDecode___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VALUDecode___024root___final(VALUDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root___final\n"); );
}

VL_ATTR_COLD void VALUDecode___024root___ctor_var_reset(VALUDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->opcode5 = VL_RAND_RESET_I(1);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->funct75 = VL_RAND_RESET_I(1);
    vlSelf->ALUop = VL_RAND_RESET_I(3);
    vlSelf->ALUCtrl = VL_RAND_RESET_I(4);
}
