// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VJerry_PL_main.h for the primary calling header

#include "VJerry_PL_main__pch.h"
#include "VJerry_PL_main__Syms.h"
#include "VJerry_PL_main___024root.h"

void VJerry_PL_main___024root___ctor_var_reset(VJerry_PL_main___024root* vlSelf);

VJerry_PL_main___024root::VJerry_PL_main___024root(VJerry_PL_main__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VJerry_PL_main___024root___ctor_var_reset(this);
}

void VJerry_PL_main___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VJerry_PL_main___024root::~VJerry_PL_main___024root() {
}
