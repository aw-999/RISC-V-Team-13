// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VJerry_PL_main.h for the primary calling header

#ifndef VERILATED_VJERRY_PL_MAIN___024ROOT_H_
#define VERILATED_VJERRY_PL_MAIN___024ROOT_H_  // guard

#include "verilated.h"


class VJerry_PL_main__Syms;

class alignas(VL_CACHE_LINE_BYTES) VJerry_PL_main___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(TRIGGER,0,0);
        CData/*1:0*/ Jerry_PL_main__DOT__ForwardAE;
        CData/*1:0*/ Jerry_PL_main__DOT__ForwardBE;
        CData/*0:0*/ Jerry_PL_main__DOT__stallF;
        CData/*0:0*/ Jerry_PL_main__DOT__stallD;
        CData/*0:0*/ Jerry_PL_main__DOT__flushD;
        CData/*0:0*/ Jerry_PL_main__DOT__flushE;
        CData/*0:0*/ Jerry_PL_main__DOT__RegWrite;
        CData/*2:0*/ Jerry_PL_main__DOT__ImmSrc;
        CData/*2:0*/ Jerry_PL_main__DOT__ALUop;
        CData/*3:0*/ Jerry_PL_main__DOT__ALUCtrl;
        CData/*0:0*/ Jerry_PL_main__DOT__RegWriteE;
        CData/*1:0*/ Jerry_PL_main__DOT__ResultSrcE;
        CData/*0:0*/ Jerry_PL_main__DOT__MemWriteE;
        CData/*3:0*/ Jerry_PL_main__DOT__ALUCtrlE;
        CData/*0:0*/ Jerry_PL_main__DOT__ALUSrcE;
        CData/*2:0*/ Jerry_PL_main__DOT__funct3E;
        CData/*6:0*/ Jerry_PL_main__DOT__opcodeE;
        CData/*4:0*/ Jerry_PL_main__DOT__Rs1E;
        CData/*4:0*/ Jerry_PL_main__DOT__Rs2E;
        CData/*4:0*/ Jerry_PL_main__DOT__RdE;
        CData/*1:0*/ Jerry_PL_main__DOT__PCSrcE;
        CData/*0:0*/ Jerry_PL_main__DOT__ZeroFlag;
        CData/*0:0*/ Jerry_PL_main__DOT__NegativeFlag;
        CData/*0:0*/ Jerry_PL_main__DOT__UnsignedLess;
        CData/*0:0*/ Jerry_PL_main__DOT__RegWriteM;
        CData/*1:0*/ Jerry_PL_main__DOT__ResultSrcM;
        CData/*0:0*/ Jerry_PL_main__DOT__MemWriteM;
        CData/*4:0*/ Jerry_PL_main__DOT__RdM;
        CData/*2:0*/ Jerry_PL_main__DOT__funct3M;
        CData/*0:0*/ Jerry_PL_main__DOT__RegWriteW;
        CData/*1:0*/ Jerry_PL_main__DOT__ResultSrcW;
        CData/*4:0*/ Jerry_PL_main__DOT__RdW;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT(A0,31,0);
        VL_OUT(a1,31,0);
        VL_OUT(a2,31,0);
        VL_OUT(a3,31,0);
        VL_OUT(a4,31,0);
        VL_OUT(a5,31,0);
        VL_OUT(a6,31,0);
        VL_OUT(a7,31,0);
        VL_OUT(s0,31,0);
        VL_OUT(s1,31,0);
        VL_OUT(s2,31,0);
        VL_OUT(s3,31,0);
        VL_OUT(s4,31,0);
        VL_OUT(s5,31,0);
        VL_OUT(s6,31,0);
        VL_OUT(s7,31,0);
        VL_OUT(s8,31,0);
        VL_OUT(s9,31,0);
        VL_OUT(s10,31,0);
        VL_OUT(s11,31,0);
        VL_OUT(t0,31,0);
        VL_OUT(t1,31,0);
        VL_OUT(t2,31,0);
        VL_OUT(t3,31,0);
        VL_OUT(t4,31,0);
        VL_OUT(t5,31,0);
    };
    struct {
        VL_OUT(t6,31,0);
        IData/*31:0*/ Jerry_PL_main__DOT__PC;
        IData/*31:0*/ Jerry_PL_main__DOT__InstrD;
        IData/*31:0*/ Jerry_PL_main__DOT__PCD;
        IData/*31:0*/ Jerry_PL_main__DOT__PCPlus4D;
        IData/*31:0*/ Jerry_PL_main__DOT__IMM;
        IData/*31:0*/ Jerry_PL_main__DOT__PCE;
        IData/*31:0*/ Jerry_PL_main__DOT__PCPlus4E;
        IData/*31:0*/ Jerry_PL_main__DOT__ImmExtE;
        IData/*31:0*/ Jerry_PL_main__DOT__RD1E;
        IData/*31:0*/ Jerry_PL_main__DOT__RD2E;
        IData/*31:0*/ Jerry_PL_main__DOT__SrcAE;
        IData/*31:0*/ Jerry_PL_main__DOT__WriteDataE;
        IData/*31:0*/ Jerry_PL_main__DOT__SrcBE;
        IData/*31:0*/ Jerry_PL_main__DOT__ALUResult;
        IData/*31:0*/ Jerry_PL_main__DOT__ALUResultM;
        IData/*31:0*/ Jerry_PL_main__DOT__WriteDataM;
        IData/*31:0*/ Jerry_PL_main__DOT__PCPlus4M;
        IData/*31:0*/ Jerry_PL_main__DOT__ImmExtM;
        IData/*31:0*/ Jerry_PL_main__DOT__DOutDM;
        IData/*31:0*/ Jerry_PL_main__DOT__ReadDataW;
        IData/*31:0*/ Jerry_PL_main__DOT__ALUResultW;
        IData/*31:0*/ Jerry_PL_main__DOT__PCPlus4W;
        IData/*31:0*/ Jerry_PL_main__DOT__ImmExtW;
        IData/*31:0*/ Jerry_PL_main__DOT__DInReg;
        IData/*16:0*/ Jerry_PL_main__DOT__DataMemory__DOT__Ad;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 65536> Jerry_PL_main__DOT__PL_InstructionMemory__DOT__RomArray;
        VlUnpacked<IData/*31:0*/, 32> Jerry_PL_main__DOT__M4__DOT__RegArr;
        VlUnpacked<CData/*7:0*/, 131072> Jerry_PL_main__DOT__DataMemory__DOT__RamArray;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VJerry_PL_main__Syms* const vlSymsp;

    // CONSTRUCTORS
    VJerry_PL_main___024root(VJerry_PL_main__Syms* symsp, const char* v__name);
    ~VJerry_PL_main___024root();
    VL_UNCOPYABLE(VJerry_PL_main___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
