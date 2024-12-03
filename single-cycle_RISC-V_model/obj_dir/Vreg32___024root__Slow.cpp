// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg32.h for the primary calling header

#include "verilated.h"

#include "Vreg32__Syms.h"
#include "Vreg32___024root.h"

void Vreg32___024root___ctor_var_reset(Vreg32___024root* vlSelf);

Vreg32___024root::Vreg32___024root(Vreg32__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vreg32___024root___ctor_var_reset(this);
}

void Vreg32___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vreg32___024root::~Vreg32___024root() {
}
