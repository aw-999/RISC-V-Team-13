// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vimm.h for the primary calling header

#ifndef VERILATED_VIMM___024ROOT_H_
#define VERILATED_VIMM___024ROOT_H_  // guard

#include "verilated.h"

class Vimm__Syms;

class Vimm___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(IMMsrc,2,0);
    VL_IN(instr,31,0);
    VL_OUT(out,31,0);

    // INTERNAL VARIABLES
    Vimm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vimm___024root(Vimm__Syms* symsp, const char* name);
    ~Vimm___024root();
    VL_UNCOPYABLE(Vimm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
