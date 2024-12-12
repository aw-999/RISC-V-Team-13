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
        CData/*0:0*/ top__DOT__stallF;
        CData/*0:0*/ top__DOT__regwriteD;
        CData/*0:0*/ top__DOT__memwriteD;
        CData/*0:0*/ top__DOT__flushD;
        CData/*0:0*/ top__DOT__stallD;
        CData/*0:0*/ top__DOT__alusrcD;
        CData/*0:0*/ top__DOT__jalrD;
        CData/*1:0*/ top__DOT__resultsrcD;
        CData/*1:0*/ top__DOT__pcsrcD;
        CData/*2:0*/ top__DOT__aluopD;
        CData/*2:0*/ top__DOT__immsrcD;
        CData/*3:0*/ top__DOT__aluctrlD;
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
        CData/*0:0*/ top__DOT__regwriteM;
        CData/*0:0*/ top__DOT__memwriteM;
        CData/*1:0*/ top__DOT__resultsrcM;
        CData/*2:0*/ top__DOT__funct3M;
        CData/*4:0*/ top__DOT__rdM;
        CData/*0:0*/ top__DOT__regwriteW;
        CData/*1:0*/ top__DOT__resultsrcW;
        CData/*4:0*/ top__DOT__rdW;
        CData/*0:0*/ top__DOT__cache_stall;
        CData/*0:0*/ top__DOT__CacheMemoryTop__DOT__mem_read;
        CData/*0:0*/ top__DOT__CacheMemoryTop__DOT__memory_ready;
        CData/*0:0*/ top__DOT__CacheMemoryTop__DOT__BlockReadEnable;
        CData/*0:0*/ top__DOT__CacheMemoryTop__DOT__BlockWriteEnable;
        CData/*1:0*/ top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index;
        CData/*5:0*/ top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index;
        CData/*3:0*/ top__DOT__CacheMemoryTop__DOT__cache__DOT__byte_offset;
        CData/*0:0*/ top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit;
        CData/*0:0*/ __Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__Vfuncout;
        CData/*1:0*/ __Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__hit_index;
        CData/*1:0*/ __Vtask_top__DOT__CacheMemoryTop__DOT__cache__DOT__update_shift_reg__1__access_index;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__rst;
        VL_OUT(a0,31,0);
        IData/*31:0*/ top__DOT__pcF;
        IData/*31:0*/ top__DOT__pcnextF;
        IData/*31:0*/ top__DOT__pcD;
        IData/*31:0*/ top__DOT__instrD;
        IData/*31:0*/ top__DOT__pcplus4D;
        IData/*31:0*/ top__DOT__immextD;
        IData/*31:0*/ top__DOT__pcE;
        IData/*31:0*/ top__DOT__pcplus4E;
        IData/*31:0*/ top__DOT__immextE;
        IData/*31:0*/ top__DOT__RD1E;
        IData/*31:0*/ top__DOT__RD2E;
    };
    struct {
        IData/*31:0*/ top__DOT__pctargetE;
        IData/*31:0*/ top__DOT__writedataE;
        IData/*31:0*/ top__DOT__srcaE;
        IData/*31:0*/ top__DOT__srcbE;
        IData/*31:0*/ top__DOT__aluresultE;
        IData/*31:0*/ top__DOT__pcplus4M;
        IData/*31:0*/ top__DOT__writedataM;
        IData/*31:0*/ top__DOT__aluresultM;
        IData/*31:0*/ top__DOT__readdataM;
        IData/*31:0*/ top__DOT__immextM;
        IData/*31:0*/ top__DOT__pcplus4W;
        IData/*31:0*/ top__DOT__aluresultW;
        IData/*31:0*/ top__DOT__readdataW;
        IData/*31:0*/ top__DOT__resultW;
        IData/*31:0*/ top__DOT__immextW;
        IData/*31:0*/ top__DOT__CacheMemoryTop__DOT__mem_request_addr;
        VlWide<4>/*127:0*/ top__DOT__CacheMemoryTop__DOT__memory_data;
        IData/*31:0*/ top__DOT__CacheMemoryTop__DOT__BlockAddr;
        VlWide<4>/*127:0*/ top__DOT__CacheMemoryTop__DOT__BlockDataIn;
        VlWide<4>/*127:0*/ top__DOT__CacheMemoryTop__DOT__BlockDataOut;
        IData/*31:0*/ top__DOT__CacheMemoryTop__DOT__cache__DOT__current_state;
        IData/*31:0*/ top__DOT__CacheMemoryTop__DOT__cache__DOT__next_state;
        IData/*21:0*/ top__DOT__CacheMemoryTop__DOT__cache__DOT__tag;
        IData/*31:0*/ top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j;
        IData/*31:0*/ top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j;
        IData/*16:0*/ top__DOT__CacheMemoryTop__DOT__ram__DOT__AdM;
        IData/*21:0*/ __Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__in_tag;
        VlWide<4>/*127:0*/ __Vchglast__TOP__top__DOT__CacheMemoryTop__DOT__memory_data;
        QData/*32:0*/ top__DOT__CacheMemoryTop__DOT____Vcellout__cache__cpu_data_out;
        VlWide<3>/*65:0*/ top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in;
        VlUnpacked<CData/*7:0*/, 65536> top__DOT__instructionmemory__DOT__RomArray;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__regfile__DOT__RegArr;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg;
        VlUnpacked<VlUnpacked<VlWide<5>/*151:0*/, 4>, 64> top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr;
        VlUnpacked<CData/*7:0*/, 131072> top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray;
        VlUnpacked<VlWide<5>/*151:0*/, 4> __Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set;
        VlUnpacked<CData/*1:0*/, 4> __Vchglast__TOP__top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg;
        VlUnpacked<VlUnpacked<VlWide<5>/*151:0*/, 4>, 64> __Vchglast__TOP__top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
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
