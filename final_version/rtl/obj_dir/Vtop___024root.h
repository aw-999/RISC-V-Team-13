// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(trigger,0,0);
        CData/*0:0*/ top__DOT__regwriteD;
        CData/*0:0*/ top__DOT__memwriteD;
        CData/*0:0*/ top__DOT__flushED;
        CData/*0:0*/ top__DOT__stallFD;
        CData/*0:0*/ top__DOT__alusrcD;
        CData/*0:0*/ top__DOT__jalrD;
        CData/*0:0*/ top__DOT__jumpD;
        CData/*0:0*/ top__DOT__branchD;
        CData/*0:0*/ top__DOT__memreadD;
        CData/*0:0*/ top__DOT__storeD;
        CData/*0:0*/ top__DOT__loadD;
        CData/*1:0*/ top__DOT__resultsrcD;
        CData/*2:0*/ top__DOT__aluopD;
        CData/*2:0*/ top__DOT__immsrcD;
        CData/*2:0*/ top__DOT__memctrlD;
        CData/*4:0*/ top__DOT__aluctrlD;
        CData/*0:0*/ top__DOT__regwriteE;
        CData/*0:0*/ top__DOT__memwriteE;
        CData/*0:0*/ top__DOT__alusrcE;
        CData/*0:0*/ top__DOT__flagE;
        CData/*0:0*/ top__DOT__jalrE;
        CData/*0:0*/ top__DOT__jumpE;
        CData/*0:0*/ top__DOT__branchE;
        CData/*0:0*/ top__DOT__pcsrcE;
        CData/*0:0*/ top__DOT__memreadE;
        CData/*0:0*/ top__DOT__storeE;
        CData/*0:0*/ top__DOT__loadE;
        CData/*1:0*/ top__DOT__resultsrcE;
        CData/*1:0*/ top__DOT__forwardaE;
        CData/*1:0*/ top__DOT__forwardbE;
        CData/*2:0*/ top__DOT__memctrlE;
        CData/*4:0*/ top__DOT__aluctrlE;
        CData/*4:0*/ top__DOT__rdE;
        CData/*4:0*/ top__DOT__rs1E;
        CData/*4:0*/ top__DOT__rs2E;
        CData/*0:0*/ top__DOT__hit;
        CData/*0:0*/ top__DOT__regwriteM;
        CData/*0:0*/ top__DOT__memwriteM;
        CData/*0:0*/ top__DOT__memreadM;
        CData/*0:0*/ top__DOT__storeM;
        CData/*0:0*/ top__DOT__loadM;
        CData/*1:0*/ top__DOT__resultsrcM;
        CData/*2:0*/ top__DOT__memctrlM;
        CData/*4:0*/ top__DOT__rdM;
        CData/*0:0*/ top__DOT__regwriteW;
        CData/*1:0*/ top__DOT__resultsrcW;
        CData/*4:0*/ top__DOT__rdW;
        CData/*0:0*/ top__DOT__gate_pcsrc__DOT__anded;
        CData/*7:0*/ top__DOT__datamemory__DOT____Vlvbound_hfe31f8bd__0;
        CData/*7:0*/ top__DOT__datamemory__DOT____Vlvbound_h70147747__0;
        CData/*7:0*/ top__DOT__datamemory__DOT____Vlvbound_h70147707__0;
        CData/*7:0*/ top__DOT__datamemory__DOT____Vlvbound_h7014770e__0;
        CData/*7:0*/ top__DOT__datamemory__DOT____Vlvbound_h70146ccf__0;
        SData/*15:0*/ top__DOT__cache_2__DOT__valid;
        CData/*7:0*/ top__DOT__cache_2__DOT__lru;
        CData/*1:0*/ top__DOT__cache_2__DOT__way_sel;
        CData/*0:0*/ __Vclklast__TOP__clk;
        VL_OUT(a0,31,0);
        IData/*31:0*/ top__DOT__pcF;
        IData/*31:0*/ top__DOT__pcnextF;
        IData/*31:0*/ top__DOT__pcD;
    };
    struct {
        IData/*31:0*/ top__DOT__instrD;
        IData/*31:0*/ top__DOT__pcplus4D;
        IData/*31:0*/ top__DOT__immextD;
        IData/*31:0*/ top__DOT__pcE;
        IData/*31:0*/ top__DOT__pcplus4E;
        IData/*31:0*/ top__DOT__immextE;
        IData/*31:0*/ top__DOT__RD1E;
        IData/*31:0*/ top__DOT__RD2E;
        IData/*31:0*/ top__DOT__writedataE;
        IData/*31:0*/ top__DOT__srcaE;
        IData/*31:0*/ top__DOT__srcbE;
        IData/*31:0*/ top__DOT__aluresultE;
        IData/*31:0*/ top__DOT__Cacheout;
        IData/*31:0*/ top__DOT__memoryout;
        IData/*31:0*/ top__DOT__pcplus4M;
        IData/*31:0*/ top__DOT__writedataM;
        IData/*31:0*/ top__DOT__aluresultM;
        IData/*31:0*/ top__DOT__pcplus4W;
        IData/*31:0*/ top__DOT__aluresultW;
        IData/*31:0*/ top__DOT__readdataW;
        IData/*31:0*/ top__DOT__resultW;
        VlWide<15>/*463:0*/ top__DOT__cache_2__DOT__tag;
        VlWide<16>/*511:0*/ top__DOT__cache_2__DOT__data;
        IData/*31:0*/ top__DOT__cache_2__DOT__unnamedblk1__DOT__set;
        IData/*31:0*/ top__DOT__cache_2__DOT__unnamedblk1__DOT__unnamedblk2__DOT__way;
        IData/*31:0*/ top__DOT__cache_2__DOT__unnamedblk3__DOT__way;
        IData/*28:0*/ top__DOT__cache_2__DOT____Vlvbound_h73a07c04__0;
        IData/*28:0*/ top__DOT__cache_2__DOT____Vlvbound_h73a07c04__1;
        VlUnpacked<CData/*7:0*/, 65536> top__DOT__instructionmemory__DOT__RomArr;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__regfile__DOT__RegArr;
        VlUnpacked<CData/*7:0*/, 131073> top__DOT__datamemory__DOT__RamArray;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
