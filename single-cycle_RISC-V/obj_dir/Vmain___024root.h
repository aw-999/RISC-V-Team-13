// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN___024ROOT_H_
#define VERILATED_VMAIN___024ROOT_H_  // guard

#include "verilated.h"


class VMain__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMain___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*1:0*/ Main__DOT__PCsrc;
    CData/*0:0*/ Main__DOT__ALUsrc;
    CData/*1:0*/ Main__DOT__ResultSrc;
    CData/*2:0*/ Main__DOT__IMMctrl;
    CData/*1:0*/ Main__DOT__ALUop;
    CData/*3:0*/ Main__DOT__ALUctrl;
    CData/*0:0*/ Main__DOT__flag;
    CData/*0:0*/ Main__DOT__RegWrite;
    CData/*2:0*/ Main__DOT____Vcellinp__C1__func3;
    CData/*6:0*/ Main__DOT____Vcellinp__C2__Opcode;
    CData/*0:0*/ Main__DOT__A1__DOT__flagZ;
    CData/*0:0*/ Main__DOT__A1__DOT__flagC;
    CData/*0:0*/ Main__DOT__A1__DOT__flagS;
    CData/*0:0*/ Main__DOT__A1__DOT__flagV;
    CData/*0:0*/ Main__DOT__M4__DOT__trigger;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ __VdfgRegularize_h6171c202_0_0;
    VL_OUT(A0,31,0);
    IData/*31:0*/ Main__DOT__PC;
    IData/*31:0*/ Main__DOT__PCN;
    IData/*31:0*/ Main__DOT__PCaddIMM;
    IData/*31:0*/ Main__DOT__instr;
    IData/*31:0*/ Main__DOT__DOutReg1;
    IData/*31:0*/ Main__DOT__DOutReg2;
    IData/*31:0*/ Main__DOT__IMM;
    IData/*31:0*/ Main__DOT__N1;
    IData/*31:0*/ Main__DOT__N2;
    IData/*31:0*/ Main__DOT__DOutAlu;
    IData/*31:0*/ Main__DOT__AdDM;
    IData/*31:0*/ Main__DOT__DInDM;
    IData/*31:0*/ Main__DOT__DOutDM;
    IData/*19:0*/ Main__DOT__M1__DOT__Ad;
    IData/*23:0*/ __VdfgRegularize_h6171c202_0_1;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 1048576> Main__DOT__M1__DOT__RamArray;
    VlUnpacked<CData/*7:0*/, 65536> Main__DOT__M2__DOT__RomArray;
    VlUnpacked<IData/*31:0*/, 32> Main__DOT__M4__DOT__RegArray;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain___024root(VMain__Syms* symsp, const char* v__name);
    ~VMain___024root();
    VL_UNCOPYABLE(VMain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
