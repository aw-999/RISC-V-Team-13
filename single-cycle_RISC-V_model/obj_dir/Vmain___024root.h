// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain.h for the primary calling header

#ifndef VERILATED_VMAIN___024ROOT_H_
#define VERILATED_VMAIN___024ROOT_H_  // guard

#include "verilated.h"

class Vmain__Syms;

class Vmain___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger_in,0,0);
    CData/*2:0*/ main__DOT__func3;
    CData/*0:0*/ main__DOT__ALUsrc;
    CData/*1:0*/ main__DOT__ALUop;
    CData/*0:0*/ main__DOT__RegWrite;
    CData/*2:0*/ main__DOT__IMMsrc;
    CData/*1:0*/ main__DOT__ResultSrc;
    CData/*1:0*/ main__DOT__PCsrc;
    CData/*2:0*/ main__DOT__D1__DOT__ALUctrl;
    CData/*2:0*/ main__DOT__D1__DOT__ALUflag;
    CData/*1:0*/ main__DOT__C1__DOT__PCsrc_req1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(A0,31,0);
    IData/*31:0*/ main__DOT__instr;
    IData/*31:0*/ main__DOT__IMMop;
    IData/*31:0*/ main__DOT__PC;
    IData/*31:0*/ main__DOT__DOutAlu;
    IData/*31:0*/ main__DOT__D1__DOT__DOut1;
    IData/*31:0*/ main__DOT__D1__DOT__DOut2;
    IData/*31:0*/ main__DOT__D1__DOT__N2;
    IData/*31:0*/ main__DOT__D1__DOT__DOutRam;
    IData/*17:0*/ main__DOT__D1__DOT__R2__DOT__AdM;
    IData/*31:0*/ main__DOT__D2__DOT__PCN;
    VlUnpacked<IData/*31:0*/, 32> main__DOT__D1__DOT__R1__DOT__register_array;
    VlUnpacked<CData/*7:0*/, 262144> main__DOT__D1__DOT__R2__DOT__RamArray;
    VlUnpacked<CData/*7:0*/, 256> main__DOT__D2__DOT__R1__DOT__RomArr;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vmain__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmain___024root(Vmain__Syms* symsp, const char* name);
    ~Vmain___024root();
    VL_UNCOPYABLE(Vmain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
