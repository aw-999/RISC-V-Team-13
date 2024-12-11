// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(trigger,0,0);
        CData/*0:0*/ top__DOT__stallF;
        CData/*0:0*/ top__DOT__regwriteD;
        CData/*0:0*/ top__DOT__memwriteD;
        CData/*0:0*/ top__DOT__flushD;
        CData/*0:0*/ top__DOT__stallD;
        CData/*0:0*/ top__DOT__alusrcD;
        CData/*0:0*/ top__DOT__jalrD;
        CData/*1:0*/ top__DOT__resultsrcD;
        CData/*1:0*/ top__DOT__pcsrcD;
        CData/*2:0*/ top__DOT__funct3D;
        CData/*2:0*/ top__DOT__aluopD;
        CData/*2:0*/ top__DOT__immsrcD;
        CData/*3:0*/ top__DOT__aluctrlD;
        CData/*4:0*/ top__DOT__rdD;
        CData/*6:0*/ top__DOT__opcodeD;
        CData/*0:0*/ top__DOT__regwriteE;
        CData/*0:0*/ top__DOT__memwriteE;
        CData/*0:0*/ top__DOT__flushE;
        CData/*0:0*/ top__DOT__alusrcE;
        CData/*0:0*/ top__DOT__flagE;
        CData/*0:0*/ top__DOT__jalrE;
        CData/*1:0*/ top__DOT__resultsrcE;
        CData/*1:0*/ top__DOT__pcsrcE;
        CData/*1:0*/ top__DOT__forwardaE;
        CData/*1:0*/ top__DOT__forwardbE;
        CData/*2:0*/ top__DOT__funct3E;
        CData/*3:0*/ top__DOT__aluctrlE;
        CData/*4:0*/ top__DOT__rdE;
        CData/*4:0*/ top__DOT__rs1E;
        CData/*4:0*/ top__DOT__rs2E;
        CData/*6:0*/ top__DOT__opcodeE;
        CData/*0:0*/ top__DOT__regwriteM;
        CData/*0:0*/ top__DOT__memwriteM;
        CData/*1:0*/ top__DOT__resultsrcM;
        CData/*2:0*/ top__DOT__funct3M;
        CData/*4:0*/ top__DOT__rdM;
        CData/*0:0*/ top__DOT__regwriteW;
        CData/*1:0*/ top__DOT__resultsrcW;
        CData/*4:0*/ top__DOT__rdW;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT(a0,31,0);
        IData/*31:0*/ top__DOT__pcF;
        IData/*31:0*/ top__DOT__pcnextF;
        IData/*31:0*/ top__DOT__pcD;
        IData/*31:0*/ top__DOT__instrD;
        IData/*31:0*/ top__DOT__pcplus4D;
        IData/*31:0*/ top__DOT__immextD;
        IData/*31:0*/ top__DOT__pcE;
        IData/*31:0*/ top__DOT__instrE;
        IData/*31:0*/ top__DOT__pcplus4E;
        IData/*31:0*/ top__DOT__immextE;
        IData/*31:0*/ top__DOT__RD1E;
        IData/*31:0*/ top__DOT__RD2E;
        IData/*31:0*/ top__DOT__pctargetE;
        IData/*31:0*/ top__DOT__writedataE;
        IData/*31:0*/ top__DOT__srcaE;
        IData/*31:0*/ top__DOT__srcbE;
        IData/*31:0*/ top__DOT__aluresultE;
        IData/*31:0*/ top__DOT__pcplus4M;
    };
    struct {
        IData/*31:0*/ top__DOT__writedataM;
        IData/*31:0*/ top__DOT__aluresultM;
        IData/*31:0*/ top__DOT__readdataM;
        IData/*31:0*/ top__DOT__immextM;
        IData/*31:0*/ top__DOT__pcplus4W;
        IData/*31:0*/ top__DOT__aluresultW;
        IData/*31:0*/ top__DOT__readdataW;
        IData/*31:0*/ top__DOT__resultW;
        IData/*31:0*/ top__DOT__immextW;
        IData/*16:0*/ top__DOT__datamemory__DOT__AdM;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 65536> top__DOT__instructionmemory__DOT__RomArray;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__regfile__DOT__RegArr;
        VlUnpacked<CData/*7:0*/, 131072> top__DOT__datamemory__DOT__RamArray;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
