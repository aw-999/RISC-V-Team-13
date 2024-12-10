// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimm.h for the primary calling header

#include "verilated.h"

#include "Vimm__Syms.h"
#include "Vimm___024root.h"

void Vimm___024root___ctor_var_reset(Vimm___024root* vlSelf);

Vimm___024root::Vimm___024root(Vimm__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vimm___024root___ctor_var_reset(this);
}

void Vimm___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vimm___024root::~Vimm___024root() {
}
