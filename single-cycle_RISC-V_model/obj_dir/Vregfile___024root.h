// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregfile.h for the primary calling header

#ifndef VERILATED_VREGFILE___024ROOT_H_
#define VERILATED_VREGFILE___024ROOT_H_  // guard

#include "verilated.h"

class Vregfile__Syms;

class Vregfile___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(RegWrite,0,0);
    VL_IN8(write_addr,4,0);
    VL_IN8(A1,4,0);
    VL_IN8(A2,4,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(DIn,31,0);
    VL_OUT(DOut1,31,0);
    VL_OUT(DOut2,31,0);
    VL_OUT(A0,31,0);
    VlUnpacked<IData/*31:0*/, 32> regfile__DOT__register_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vregfile__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregfile___024root(Vregfile__Syms* symsp, const char* name);
    ~Vregfile___024root();
    VL_UNCOPYABLE(Vregfile___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
