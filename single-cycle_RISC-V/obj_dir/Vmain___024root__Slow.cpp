// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "VMain__pch.h"
#include "VMain__Syms.h"
#include "VMain___024root.h"

void VMain___024root___ctor_var_reset(VMain___024root* vlSelf);

VMain___024root::VMain___024root(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain___024root___ctor_var_reset(this);
}

void VMain___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMain___024root::~VMain___024root() {
}
