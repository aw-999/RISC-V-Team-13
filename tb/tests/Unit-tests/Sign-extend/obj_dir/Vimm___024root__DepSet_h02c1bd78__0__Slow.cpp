// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimm.h for the primary calling header

#include "verilated.h"

#include "Vimm___024root.h"

VL_ATTR_COLD void Vimm___024root___eval_initial(Vimm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root___eval_initial\n"); );
}

void Vimm___024root___combo__TOP__0(Vimm___024root* vlSelf);

VL_ATTR_COLD void Vimm___024root___eval_settle(Vimm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root___eval_settle\n"); );
    // Body
    Vimm___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vimm___024root___final(Vimm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root___final\n"); );
}

VL_ATTR_COLD void Vimm___024root___ctor_var_reset(Vimm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->IMMsrc = VL_RAND_RESET_I(3);
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->out = VL_RAND_RESET_I(32);
}
