// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALUDecode.h for the primary calling header

#include "verilated.h"

#include "VALUDecode__Syms.h"
#include "VALUDecode___024root.h"

void VALUDecode___024root___ctor_var_reset(VALUDecode___024root* vlSelf);

VALUDecode___024root::VALUDecode___024root(VALUDecode__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VALUDecode___024root___ctor_var_reset(this);
}

void VALUDecode___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VALUDecode___024root::~VALUDecode___024root() {
}
