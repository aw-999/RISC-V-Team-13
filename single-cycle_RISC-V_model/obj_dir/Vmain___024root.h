// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain.h for the primary calling header

#ifndef VERILATED_VMAIN___024ROOT_H_
#define VERILATED_VMAIN___024ROOT_H_  // guard

#include "verilated.h"


class Vmain__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmain___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ main__DOT__ALUsrc;
    CData/*1:0*/ main__DOT__ALUop;
    CData/*0:0*/ main__DOT__RamWrite;
    CData/*0:0*/ main__DOT__RegWrite;
    CData/*2:0*/ main__DOT__IMMsrc;
    CData/*1:0*/ main__DOT__ResultSrc;
    CData/*1:0*/ main__DOT__PCsrc;
    CData/*0:0*/ main__DOT__flag;
    CData/*3:0*/ main__DOT__D1__DOT__ALUctrl;
    CData/*2:0*/ main__DOT__D1__DOT__func3;
    CData/*0:0*/ main__DOT__D1__DOT__A1__DOT__flagZ;
    CData/*0:0*/ main__DOT__D1__DOT__A1__DOT__flagC;
    CData/*0:0*/ main__DOT__D1__DOT__A1__DOT__flagS;
    CData/*0:0*/ main__DOT__D1__DOT__A1__DOT__flagV;
    CData/*0:0*/ main__DOT__D1__DOT__I1__DOT__sign;
    CData/*6:0*/ main__DOT__C1__DOT__op7;
    CData/*1:0*/ main__DOT__C1__DOT__PCsrc_req1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__main__DOT__flag__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__main__DOT__flag__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ __VdfgRegularize_h6171c202_0_0;
    VL_OUT(A0,31,0);
    IData/*31:0*/ main__DOT__instr;
    IData/*31:0*/ main__DOT__PCaddIMM;
    IData/*31:0*/ main__DOT__PCadd4;
    IData/*31:0*/ main__DOT__PC;
    IData/*31:0*/ main__DOT__DOutAlu;
    IData/*31:0*/ main__DOT__D1__DOT__DOut1;
    IData/*31:0*/ main__DOT__D1__DOT__DOut2;
    IData/*31:0*/ main__DOT__D1__DOT__IMM;
    IData/*31:0*/ main__DOT__D1__DOT__N2;
    IData/*31:0*/ main__DOT__D1__DOT__DInReg;
    IData/*31:0*/ main__DOT__D1__DOT__DOutRam;
    IData/*19:0*/ main__DOT__D1__DOT__R2__DOT__AdM;
    IData/*23:0*/ __VdfgRegularize_h6171c202_0_1;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> main__DOT__D1__DOT__R1__DOT__RegArr;
    VlUnpacked<CData/*7:0*/, 1048576> main__DOT__D1__DOT__R2__DOT__RamArray;
    VlUnpacked<CData/*7:0*/, 65536> main__DOT__D2__DOT__R1__DOT__RomArr;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmain__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmain___024root(Vmain__Syms* symsp, const char* v__name);
    ~Vmain___024root();
    VL_UNCOPYABLE(Vmain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
