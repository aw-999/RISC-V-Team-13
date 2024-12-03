// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vreg32.h for the primary calling header

#ifndef VERILATED_VREG32___024ROOT_H_
#define VERILATED_VREG32___024ROOT_H_  // guard

#include "verilated.h"

class Vreg32__Syms;

class Vreg32___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(RegWrite,0,0);
    VL_IN8(write_addr,4,0);
    VL_IN8(AdOut1,4,0);
    VL_IN8(AdOut2,4,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(DIn,31,0);
    VL_OUT(DOut1,31,0);
    VL_OUT(DOut2,31,0);
    VL_OUT(A0,31,0);
    VlUnpacked<IData/*31:0*/, 32> reg32__DOT__register_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vreg32__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vreg32___024root(Vreg32__Syms* symsp, const char* name);
    ~Vreg32___024root();
    VL_UNCOPYABLE(Vreg32___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
