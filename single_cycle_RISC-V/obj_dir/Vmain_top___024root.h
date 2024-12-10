// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain_top.h for the primary calling header

#ifndef VERILATED_VMAIN_TOP___024ROOT_H_
#define VERILATED_VMAIN_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vmain_top__Syms;

class Vmain_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(TRIGGER,0,0);
    CData/*0:0*/ main_top__DOT__MemWrite;
    CData/*0:0*/ main_top__DOT__ALUSrc;
    CData/*0:0*/ main_top__DOT__RegWrite;
    CData/*1:0*/ main_top__DOT__PCSrc;
    CData/*1:0*/ main_top__DOT__ResultSrc;
    CData/*2:0*/ main_top__DOT__IMMsrc;
    CData/*2:0*/ main_top__DOT__ALUop;
    CData/*3:0*/ main_top__DOT__ALUCtrl;
    CData/*0:0*/ main_top__DOT__branch;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vchglast__TOP__main_top__DOT__branch;
    VL_OUT(Result,31,0);
    VL_OUT(a0,31,0);
    IData/*31:0*/ main_top__DOT__PC;
    IData/*31:0*/ main_top__DOT__PCN;
    IData/*31:0*/ main_top__DOT__instr;
    IData/*31:0*/ main_top__DOT__ImmExt;
    IData/*31:0*/ main_top__DOT__RD1;
    IData/*31:0*/ main_top__DOT__SrcB;
    IData/*31:0*/ main_top__DOT__ALUResult;
    IData/*31:0*/ main_top__DOT__ReadData;
    IData/*31:0*/ main_top__DOT__DIn;
    IData/*16:0*/ main_top__DOT__DataMemory__DOT__AdM;
    VlUnpacked<CData/*7:0*/, 131072> main_top__DOT__InstructionMemory__DOT__RomArr;
    VlUnpacked<IData/*31:0*/, 32> main_top__DOT__RegisterFile__DOT__RegArr;
    VlUnpacked<CData/*7:0*/, 131072> main_top__DOT__DataMemory__DOT__RamArray;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vmain_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmain_top___024root(Vmain_top__Syms* symsp, const char* name);
    ~Vmain_top___024root();
    VL_UNCOPYABLE(Vmain_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
