// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALUDecode.h for the primary calling header

#ifndef VERILATED_VALUDECODE___024ROOT_H_
#define VERILATED_VALUDECODE___024ROOT_H_  // guard

#include "verilated.h"

class VALUDecode__Syms;

class VALUDecode___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(opcode5,0,0);
    VL_IN8(funct3,2,0);
    VL_IN8(funct75,0,0);
    VL_IN8(ALUop,2,0);
    VL_OUT8(ALUCtrl,3,0);

    // INTERNAL VARIABLES
    VALUDecode__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALUDecode___024root(VALUDecode__Syms* symsp, const char* name);
    ~VALUDecode___024root();
    VL_UNCOPYABLE(VALUDecode___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
