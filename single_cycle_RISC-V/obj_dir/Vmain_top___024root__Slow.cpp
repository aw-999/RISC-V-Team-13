// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain_top.h for the primary calling header

#include "verilated.h"

#include "Vmain_top__Syms.h"
#include "Vmain_top___024root.h"

void Vmain_top___024root___ctor_var_reset(Vmain_top___024root* vlSelf);

Vmain_top___024root::Vmain_top___024root(Vmain_top__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmain_top___024root___ctor_var_reset(this);
}

void Vmain_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmain_top___024root::~Vmain_top___024root() {
}
