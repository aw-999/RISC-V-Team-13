// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VJerry_PL_main.h for the primary calling header

#include "VJerry_PL_main__pch.h"
#include "VJerry_PL_main___024root.h"

void VJerry_PL_main___024root___eval_act(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void VJerry_PL_main___024root___nba_sequent__TOP__0(VJerry_PL_main___024root* vlSelf);

void VJerry_PL_main___024root___eval_nba(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VJerry_PL_main___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VJerry_PL_main__ConstPool__TABLE_h58911159_0;
extern const VlUnpacked<CData/*2:0*/, 128> VJerry_PL_main__ConstPool__TABLE_h72886b9e_0;
extern const VlUnpacked<CData/*2:0*/, 128> VJerry_PL_main__ConstPool__TABLE_hfe30a113_0;
extern const VlUnpacked<CData/*3:0*/, 128> VJerry_PL_main__ConstPool__TABLE_hd1c1786d_0;

VL_INLINE_OPT void VJerry_PL_main___024root___nba_sequent__TOP__0(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    IData/*31:0*/ __Vdly__Jerry_PL_main__DOT__PCPlus4W;
    __Vdly__Jerry_PL_main__DOT__PCPlus4W = 0;
    IData/*31:0*/ __VdlyVal__Jerry_PL_main__DOT__M4__DOT__RegArr__v0;
    __VdlyVal__Jerry_PL_main__DOT__M4__DOT__RegArr__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Jerry_PL_main__DOT__M4__DOT__RegArr__v0;
    __VdlyDim0__Jerry_PL_main__DOT__M4__DOT__RegArr__v0 = 0;
    CData/*0:0*/ __VdlySet__Jerry_PL_main__DOT__M4__DOT__RegArr__v0;
    __VdlySet__Jerry_PL_main__DOT__M4__DOT__RegArr__v0 = 0;
    CData/*0:0*/ __VdlySet__Jerry_PL_main__DOT__M4__DOT__RegArr__v1;
    __VdlySet__Jerry_PL_main__DOT__M4__DOT__RegArr__v1 = 0;
    CData/*7:0*/ __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v0;
    __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v0 = 0;
    IData/*16:0*/ __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v0;
    __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v0 = 0;
    CData/*0:0*/ __VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v0;
    __VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v0 = 0;
    CData/*7:0*/ __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v1;
    __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v1 = 0;
    IData/*16:0*/ __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v1;
    __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v1 = 0;
    CData/*7:0*/ __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v2;
    __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v2 = 0;
    IData/*16:0*/ __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v2;
    __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v2 = 0;
    CData/*7:0*/ __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v3;
    __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v3 = 0;
    IData/*16:0*/ __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v3;
    __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v3 = 0;
    CData/*7:0*/ __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v4;
    __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v4 = 0;
    IData/*16:0*/ __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v4;
    __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v4 = 0;
    CData/*0:0*/ __VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v4;
    __VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v4 = 0;
    CData/*7:0*/ __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v5;
    __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v5 = 0;
    IData/*16:0*/ __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v5;
    __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v5 = 0;
    CData/*7:0*/ __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v6;
    __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v6 = 0;
    IData/*16:0*/ __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v6;
    __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v6 = 0;
    CData/*0:0*/ __VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v6;
    __VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v6 = 0;
    // Body
    __Vdly__Jerry_PL_main__DOT__PCPlus4W = vlSelfRef.Jerry_PL_main__DOT__PCPlus4W;
    __VdlySet__Jerry_PL_main__DOT__M4__DOT__RegArr__v0 = 0U;
    __VdlySet__Jerry_PL_main__DOT__M4__DOT__RegArr__v1 = 0U;
    __VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v0 = 0U;
    __VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v4 = 0U;
    __VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v6 = 0U;
    __Vdly__Jerry_PL_main__DOT__PCPlus4W = vlSelfRef.Jerry_PL_main__DOT__PCPlus4M;
    if (vlSelfRef.Jerry_PL_main__DOT__RegWriteW) {
        __VdlyVal__Jerry_PL_main__DOT__M4__DOT__RegArr__v0 
            = vlSelfRef.Jerry_PL_main__DOT__DInReg;
        __VdlyDim0__Jerry_PL_main__DOT__M4__DOT__RegArr__v0 
            = vlSelfRef.Jerry_PL_main__DOT__RdW;
        __VdlySet__Jerry_PL_main__DOT__M4__DOT__RegArr__v0 = 1U;
    }
    if (vlSelfRef.TRIGGER) {
        __VdlySet__Jerry_PL_main__DOT__M4__DOT__RegArr__v1 = 1U;
    }
    if (vlSelfRef.Jerry_PL_main__DOT__MemWriteM) {
        if ((2U == (3U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M)))) {
            __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v0 
                = (0xffU & vlSelfRef.Jerry_PL_main__DOT__WriteDataM);
            __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v0 
                = vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad;
            __VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v0 = 1U;
            __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v1 
                = (0xffU & (vlSelfRef.Jerry_PL_main__DOT__WriteDataM 
                            >> 8U));
            __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v1 
                = (0x1ffffU & ((IData)(1U) + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad));
            __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v2 
                = (0xffU & (vlSelfRef.Jerry_PL_main__DOT__WriteDataM 
                            >> 0x10U));
            __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v2 
                = (0x1ffffU & ((IData)(2U) + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad));
            __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v3 
                = (vlSelfRef.Jerry_PL_main__DOT__WriteDataM 
                   >> 0x18U);
            __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v3 
                = (0x1ffffU & ((IData)(3U) + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad));
        } else if ((1U == (3U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M)))) {
            __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v4 
                = (0xffU & vlSelfRef.Jerry_PL_main__DOT__WriteDataM);
            __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v4 
                = vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad;
            __VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v4 = 1U;
            __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v5 
                = (0xffU & (vlSelfRef.Jerry_PL_main__DOT__WriteDataM 
                            >> 8U));
            __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v5 
                = (0x1ffffU & ((IData)(1U) + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad));
        } else if ((0U == (3U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M)))) {
            __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v6 
                = (0xffU & vlSelfRef.Jerry_PL_main__DOT__WriteDataM);
            __VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v6 
                = vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad;
            __VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v6 = 1U;
        }
    }
    vlSelfRef.Jerry_PL_main__DOT__ReadDataW = vlSelfRef.Jerry_PL_main__DOT__DOutDM;
    vlSelfRef.Jerry_PL_main__DOT__ALUSrcE = ((1U & 
                                              (~ (IData)(vlSelfRef.Jerry_PL_main__DOT__flushE))) 
                                             && (0x33U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelfRef.Jerry_PL_main__DOT__InstrD)));
    vlSelfRef.Jerry_PL_main__DOT__ResultSrcW = vlSelfRef.Jerry_PL_main__DOT__ResultSrcM;
    if (__VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v0) {
        vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray[__VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v0] 
            = __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v0;
        vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray[__VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v1] 
            = __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v1;
        vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray[__VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v2] 
            = __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v2;
        vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray[__VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v3] 
            = __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v3;
    }
    if (__VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v4) {
        vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray[__VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v4] 
            = __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v4;
        vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray[__VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v5] 
            = __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v5;
    }
    if (__VdlySet__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v6) {
        vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray[__VdlyDim0__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v6] 
            = __VdlyVal__Jerry_PL_main__DOT__DataMemory__DOT__RamArray__v6;
    }
    if (vlSelfRef.Jerry_PL_main__DOT__flushE) {
        vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE = 0U;
        vlSelfRef.Jerry_PL_main__DOT__PCE = 0U;
        vlSelfRef.Jerry_PL_main__DOT__opcodeE = 0U;
        vlSelfRef.Jerry_PL_main__DOT__Rs1E = 0U;
        vlSelfRef.Jerry_PL_main__DOT__Rs2E = 0U;
        vlSelfRef.Jerry_PL_main__DOT__RD1E = 0U;
        vlSelfRef.Jerry_PL_main__DOT__RD2E = 0U;
    } else {
        vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE = vlSelfRef.Jerry_PL_main__DOT__ALUCtrl;
        vlSelfRef.Jerry_PL_main__DOT__PCE = vlSelfRef.Jerry_PL_main__DOT__PCD;
        vlSelfRef.Jerry_PL_main__DOT__opcodeE = (0x7fU 
                                                 & vlSelfRef.Jerry_PL_main__DOT__InstrD);
        vlSelfRef.Jerry_PL_main__DOT__Rs1E = (0x1fU 
                                              & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                 >> 0xfU));
        vlSelfRef.Jerry_PL_main__DOT__Rs2E = (0x1fU 
                                              & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                 >> 0x14U));
        vlSelfRef.Jerry_PL_main__DOT__RD1E = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
            [(0x1fU & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                       >> 0xfU))];
        vlSelfRef.Jerry_PL_main__DOT__RD2E = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
            [(0x1fU & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                       >> 0x14U))];
    }
    if (__VdlySet__Jerry_PL_main__DOT__M4__DOT__RegArr__v0) {
        vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[__VdlyDim0__Jerry_PL_main__DOT__M4__DOT__RegArr__v0] 
            = __VdlyVal__Jerry_PL_main__DOT__M4__DOT__RegArr__v0;
    }
    if (__VdlySet__Jerry_PL_main__DOT__M4__DOT__RegArr__v1) {
        vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[5U] = 1U;
    }
    vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[0U] = 0U;
    vlSelfRef.Jerry_PL_main__DOT__PCPlus4M = vlSelfRef.Jerry_PL_main__DOT__PCPlus4E;
    vlSelfRef.Jerry_PL_main__DOT__RegWriteW = vlSelfRef.Jerry_PL_main__DOT__RegWriteM;
    vlSelfRef.Jerry_PL_main__DOT__RdW = vlSelfRef.Jerry_PL_main__DOT__RdM;
    vlSelfRef.Jerry_PL_main__DOT__WriteDataM = vlSelfRef.Jerry_PL_main__DOT__WriteDataE;
    vlSelfRef.Jerry_PL_main__DOT__MemWriteM = vlSelfRef.Jerry_PL_main__DOT__MemWriteE;
    vlSelfRef.Jerry_PL_main__DOT__funct3M = vlSelfRef.Jerry_PL_main__DOT__funct3E;
    vlSelfRef.t0 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [5U];
    vlSelfRef.t3 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x1cU];
    vlSelfRef.a6 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x10U];
    vlSelfRef.A0 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0xaU];
    vlSelfRef.t2 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [7U];
    vlSelfRef.t1 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [6U];
    vlSelfRef.s0 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [8U];
    vlSelfRef.s1 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [9U];
    vlSelfRef.a1 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0xbU];
    vlSelfRef.a2 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0xcU];
    vlSelfRef.a3 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0xdU];
    vlSelfRef.a4 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0xeU];
    vlSelfRef.a5 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0xfU];
    vlSelfRef.a7 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x11U];
    vlSelfRef.s2 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x12U];
    vlSelfRef.s3 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x13U];
    vlSelfRef.s4 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x14U];
    vlSelfRef.s5 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x15U];
    vlSelfRef.s6 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x16U];
    vlSelfRef.s7 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x17U];
    vlSelfRef.s8 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x18U];
    vlSelfRef.s9 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x19U];
    vlSelfRef.s10 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x1aU];
    vlSelfRef.s11 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x1bU];
    vlSelfRef.t4 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x1dU];
    vlSelfRef.t5 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x1eU];
    vlSelfRef.t6 = vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
        [0x1fU];
    vlSelfRef.Jerry_PL_main__DOT__ResultSrcM = vlSelfRef.Jerry_PL_main__DOT__ResultSrcE;
    vlSelfRef.Jerry_PL_main__DOT__RegWriteM = vlSelfRef.Jerry_PL_main__DOT__RegWriteE;
    vlSelfRef.Jerry_PL_main__DOT__RdM = vlSelfRef.Jerry_PL_main__DOT__RdE;
    vlSelfRef.Jerry_PL_main__DOT__MemWriteE = ((1U 
                                                & (~ (IData)(vlSelfRef.Jerry_PL_main__DOT__flushE))) 
                                               && (0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.Jerry_PL_main__DOT__InstrD)));
    if (vlSelfRef.Jerry_PL_main__DOT__flushD) {
        vlSelfRef.Jerry_PL_main__DOT__PCD = vlSelfRef.Jerry_PL_main__DOT__PC;
    } else if ((1U & (~ (IData)(vlSelfRef.Jerry_PL_main__DOT__stallD)))) {
        vlSelfRef.Jerry_PL_main__DOT__PCD = vlSelfRef.Jerry_PL_main__DOT__PC;
    }
    vlSelfRef.Jerry_PL_main__DOT__PCPlus4E = ((IData)(vlSelfRef.Jerry_PL_main__DOT__flushE)
                                               ? 0U
                                               : vlSelfRef.Jerry_PL_main__DOT__PCPlus4D);
    if (vlSelfRef.Jerry_PL_main__DOT__flushD) {
        vlSelfRef.Jerry_PL_main__DOT__PCPlus4D = ((IData)(4U) 
                                                  + vlSelfRef.Jerry_PL_main__DOT__PC);
    } else if ((1U & (~ (IData)(vlSelfRef.Jerry_PL_main__DOT__stallD)))) {
        vlSelfRef.Jerry_PL_main__DOT__PCPlus4D = ((IData)(4U) 
                                                  + vlSelfRef.Jerry_PL_main__DOT__PC);
    }
    if (vlSelfRef.Jerry_PL_main__DOT__flushE) {
        vlSelfRef.Jerry_PL_main__DOT__funct3E = 0U;
        vlSelfRef.Jerry_PL_main__DOT__ResultSrcE = 0U;
        vlSelfRef.Jerry_PL_main__DOT__RdE = 0U;
    } else {
        vlSelfRef.Jerry_PL_main__DOT__funct3E = (7U 
                                                 & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                    >> 0xcU));
        vlSelfRef.Jerry_PL_main__DOT__ResultSrcE = 
            ((3U == (0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD))
              ? 1U : ((0x6fU == (0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD))
                       ? 2U : ((0x17U == (0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD))
                                ? 3U : 0U)));
        vlSelfRef.Jerry_PL_main__DOT__RdE = (0x1fU 
                                             & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                >> 7U));
    }
    if (vlSelfRef.Jerry_PL_main__DOT__flushD) {
        vlSelfRef.Jerry_PL_main__DOT__InstrD = 0x13U;
    } else if ((1U & (~ (IData)(vlSelfRef.Jerry_PL_main__DOT__stallD)))) {
        vlSelfRef.Jerry_PL_main__DOT__InstrD = ((vlSelfRef.Jerry_PL_main__DOT__PL_InstructionMemory__DOT__RomArray
                                                 [(0xffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.Jerry_PL_main__DOT__PC))] 
                                                 << 0x18U) 
                                                | ((vlSelfRef.Jerry_PL_main__DOT__PL_InstructionMemory__DOT__RomArray
                                                    [
                                                    (0xffffU 
                                                     & ((IData)(2U) 
                                                        + vlSelfRef.Jerry_PL_main__DOT__PC))] 
                                                    << 0x10U) 
                                                   | ((vlSelfRef.Jerry_PL_main__DOT__PL_InstructionMemory__DOT__RomArray
                                                       [
                                                       (0xffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelfRef.Jerry_PL_main__DOT__PC))] 
                                                       << 8U) 
                                                      | vlSelfRef.Jerry_PL_main__DOT__PL_InstructionMemory__DOT__RomArray
                                                      [
                                                      (0xffffU 
                                                       & vlSelfRef.Jerry_PL_main__DOT__PC)])));
    }
    vlSelfRef.Jerry_PL_main__DOT__RegWriteE = ((1U 
                                                & (~ (IData)(vlSelfRef.Jerry_PL_main__DOT__flushE))) 
                                               && (IData)(vlSelfRef.Jerry_PL_main__DOT__RegWrite));
    vlSelfRef.Jerry_PL_main__DOT__ForwardAE = (((((IData)(vlSelfRef.Jerry_PL_main__DOT__Rs1E) 
                                                  == (IData)(vlSelfRef.Jerry_PL_main__DOT__RdM)) 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__RegWriteM)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.Jerry_PL_main__DOT__Rs1E)))
                                                ? 2U
                                                : (
                                                   ((((IData)(vlSelfRef.Jerry_PL_main__DOT__Rs1E) 
                                                      == (IData)(vlSelfRef.Jerry_PL_main__DOT__RdW)) 
                                                     & (IData)(vlSelfRef.Jerry_PL_main__DOT__RegWriteW)) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.Jerry_PL_main__DOT__Rs1E)))
                                                    ? 1U
                                                    : 0U));
    vlSelfRef.Jerry_PL_main__DOT__ForwardBE = (((((IData)(vlSelfRef.Jerry_PL_main__DOT__Rs2E) 
                                                  == (IData)(vlSelfRef.Jerry_PL_main__DOT__RdM)) 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__RegWriteM)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.Jerry_PL_main__DOT__Rs2E)))
                                                ? 2U
                                                : (
                                                   ((((IData)(vlSelfRef.Jerry_PL_main__DOT__Rs2E) 
                                                      == (IData)(vlSelfRef.Jerry_PL_main__DOT__RdW)) 
                                                     & (IData)(vlSelfRef.Jerry_PL_main__DOT__RegWriteW)) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.Jerry_PL_main__DOT__Rs2E)))
                                                    ? 1U
                                                    : 0U));
    vlSelfRef.Jerry_PL_main__DOT__stallD = 0U;
    __Vtableidx3 = (0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD);
    vlSelfRef.Jerry_PL_main__DOT__RegWrite = VJerry_PL_main__ConstPool__TABLE_h58911159_0
        [__Vtableidx3];
    __Vtableidx1 = (0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD);
    vlSelfRef.Jerry_PL_main__DOT__ALUop = VJerry_PL_main__ConstPool__TABLE_h72886b9e_0
        [__Vtableidx1];
    __Vtableidx2 = (0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD);
    vlSelfRef.Jerry_PL_main__DOT__ImmSrc = VJerry_PL_main__ConstPool__TABLE_hfe30a113_0
        [__Vtableidx2];
    if (vlSelfRef.rst) {
        vlSelfRef.Jerry_PL_main__DOT__PC = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.Jerry_PL_main__DOT__stallF)))) {
        vlSelfRef.Jerry_PL_main__DOT__PC = ((2U & (IData)(vlSelfRef.Jerry_PL_main__DOT__PCSrcE))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__PCSrcE))
                                                 ? vlSelfRef.Jerry_PL_main__DOT__ImmExtW
                                                 : vlSelfRef.Jerry_PL_main__DOT__ALUResultW)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__PCSrcE))
                                                 ? vlSelfRef.Jerry_PL_main__DOT__ImmExtW
                                                 : vlSelfRef.Jerry_PL_main__DOT__PCPlus4W));
    }
    __Vtableidx4 = ((0x40U & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                              >> 0x18U)) | ((0x38U 
                                             & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                >> 9U)) 
                                            | (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUop)));
    vlSelfRef.Jerry_PL_main__DOT__ALUCtrl = VJerry_PL_main__ConstPool__TABLE_hd1c1786d_0
        [__Vtableidx4];
    vlSelfRef.Jerry_PL_main__DOT__stallF = 0U;
    vlSelfRef.Jerry_PL_main__DOT__PCPlus4W = __Vdly__Jerry_PL_main__DOT__PCPlus4W;
    vlSelfRef.Jerry_PL_main__DOT__ImmExtW = vlSelfRef.Jerry_PL_main__DOT__ImmExtM;
    vlSelfRef.Jerry_PL_main__DOT__ALUResultW = vlSelfRef.Jerry_PL_main__DOT__ALUResultM;
    vlSelfRef.Jerry_PL_main__DOT__ImmExtM = vlSelfRef.Jerry_PL_main__DOT__ImmExtE;
    vlSelfRef.Jerry_PL_main__DOT__ImmExtE = ((IData)(vlSelfRef.Jerry_PL_main__DOT__flushE)
                                              ? 0U : vlSelfRef.Jerry_PL_main__DOT__IMM);
    vlSelfRef.Jerry_PL_main__DOT__ALUResultM = vlSelfRef.Jerry_PL_main__DOT__ALUResult;
    vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad 
        = (0x1ffffU & vlSelfRef.Jerry_PL_main__DOT__ALUResultM);
    vlSelfRef.Jerry_PL_main__DOT__DOutDM = ((4U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M))
                                                 ? 
                                                ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                  << 0x18U) 
                                                 | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                     << 0x10U) 
                                                    | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                        [
                                                        (0x1ffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                        << 8U) 
                                                       | vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                       [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad])))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M))
                                                  ? 
                                                 ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                   << 8U) 
                                                  | vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                  [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad])
                                                  : 
                                                 vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                 [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad]))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M))
                                                  ? 
                                                 ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(3U) 
                                                       + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                   << 0x18U) 
                                                  | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(2U) 
                                                          + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                      << 0x10U) 
                                                     | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                         [
                                                         (0x1ffffU 
                                                          & ((IData)(1U) 
                                                             + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                         << 8U) 
                                                        | vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                        [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad])))
                                                  : 
                                                 ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(3U) 
                                                       + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                   << 0x18U) 
                                                  | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(2U) 
                                                          + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                      << 0x10U) 
                                                     | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                         [
                                                         (0x1ffffU 
                                                          & ((IData)(1U) 
                                                             + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                         << 8U) 
                                                        | vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                        [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad]))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3M))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                                  [
                                                                  (0x1ffffU 
                                                                   & ((IData)(1U) 
                                                                      + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                                  >> 7U)))) 
                                                   << 0x10U) 
                                                  | ((vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(1U) 
                                                          + vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad))] 
                                                      << 8U) 
                                                     | vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                     [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad]))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                                  [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad] 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__RamArray
                                                  [vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad]))));
    vlSelfRef.Jerry_PL_main__DOT__IMM = ((4U & (IData)(vlSelfRef.Jerry_PL_main__DOT__ImmSrc))
                                          ? ((2U & (IData)(vlSelfRef.Jerry_PL_main__DOT__ImmSrc))
                                              ? (((- (IData)(
                                                             (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                    >> 0x14U))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.Jerry_PL_main__DOT__ImmSrc))
                                                  ? 
                                                 (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                  >> 0x14U)
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                               >> 0x1fU))) 
                                                   << 0x15U) 
                                                  | ((0x100000U 
                                                      & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & vlSelfRef.Jerry_PL_main__DOT__InstrD) 
                                                        | ((0x800U 
                                                            & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                                 >> 0x14U))))))))
                                          : ((2U & (IData)(vlSelfRef.Jerry_PL_main__DOT__ImmSrc))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.Jerry_PL_main__DOT__ImmSrc))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelfRef.Jerry_PL_main__DOT__InstrD)
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
                                                      & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                                 >> 7U)))))))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.Jerry_PL_main__DOT__ImmSrc))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                           >> 7U))))
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                                     >> 0x14U)))));
    vlSelfRef.Jerry_PL_main__DOT__DInReg = ((2U & (IData)(vlSelfRef.Jerry_PL_main__DOT__ResultSrcW))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__ResultSrcW))
                                                 ? 
                                                (vlSelfRef.Jerry_PL_main__DOT__ImmExtE 
                                                 + vlSelfRef.Jerry_PL_main__DOT__PCE)
                                                 : vlSelfRef.Jerry_PL_main__DOT__PCPlus4W)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.Jerry_PL_main__DOT__ResultSrcW))
                                                 ? vlSelfRef.Jerry_PL_main__DOT__ReadDataW
                                                 : vlSelfRef.Jerry_PL_main__DOT__ALUResultM));
    vlSelfRef.Jerry_PL_main__DOT__SrcAE = ((0U == (IData)(vlSelfRef.Jerry_PL_main__DOT__ForwardAE))
                                            ? vlSelfRef.Jerry_PL_main__DOT__RD1E
                                            : ((1U 
                                                == (IData)(vlSelfRef.Jerry_PL_main__DOT__ForwardAE))
                                                ? vlSelfRef.Jerry_PL_main__DOT__DInReg
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.Jerry_PL_main__DOT__ForwardAE))
                                                    ? vlSelfRef.Jerry_PL_main__DOT__ALUResultM
                                                    : vlSelfRef.Jerry_PL_main__DOT__RD1E)));
    vlSelfRef.Jerry_PL_main__DOT__WriteDataE = ((0U 
                                                 == (IData)(vlSelfRef.Jerry_PL_main__DOT__ForwardBE))
                                                 ? vlSelfRef.Jerry_PL_main__DOT__RD2E
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.Jerry_PL_main__DOT__ForwardBE))
                                                  ? vlSelfRef.Jerry_PL_main__DOT__DInReg
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.Jerry_PL_main__DOT__ForwardBE))
                                                   ? vlSelfRef.Jerry_PL_main__DOT__ALUResultM
                                                   : vlSelfRef.Jerry_PL_main__DOT__RD2E)));
    vlSelfRef.Jerry_PL_main__DOT__SrcBE = ((IData)(vlSelfRef.Jerry_PL_main__DOT__ALUSrcE)
                                            ? vlSelfRef.Jerry_PL_main__DOT__IMM
                                            : vlSelfRef.Jerry_PL_main__DOT__WriteDataE);
    vlSelfRef.Jerry_PL_main__DOT__UnsignedLess = 0U;
    vlSelfRef.Jerry_PL_main__DOT__ALUResult = ((8U 
                                                & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                      ? 
                                                     ((vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                       < vlSelfRef.Jerry_PL_main__DOT__SrcBE)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                       < vlSelfRef.Jerry_PL_main__DOT__SrcBE)
                                                       ? 1U
                                                       : 0U))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.Jerry_PL_main__DOT__SrcAE, 
                                                                    (0x1fU 
                                                                     & vlSelfRef.Jerry_PL_main__DOT__SrcBE))
                                                      : 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelfRef.Jerry_PL_main__DOT__SrcBE)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                      ? 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelfRef.Jerry_PL_main__DOT__SrcBE))
                                                      : 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      ^ vlSelfRef.Jerry_PL_main__DOT__SrcBE)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                      ? 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      | vlSelfRef.Jerry_PL_main__DOT__SrcBE)
                                                      : 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      & vlSelfRef.Jerry_PL_main__DOT__SrcBE))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))
                                                      ? 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      - vlSelfRef.Jerry_PL_main__DOT__SrcBE)
                                                      : 
                                                     (vlSelfRef.Jerry_PL_main__DOT__SrcAE 
                                                      + vlSelfRef.Jerry_PL_main__DOT__SrcBE)))));
    vlSelfRef.Jerry_PL_main__DOT__ZeroFlag = (0U == vlSelfRef.Jerry_PL_main__DOT__ALUResult);
    vlSelfRef.Jerry_PL_main__DOT__NegativeFlag = (vlSelfRef.Jerry_PL_main__DOT__ALUResult 
                                                  >> 0x1fU);
    if ((9U == (IData)(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE))) {
        vlSelfRef.Jerry_PL_main__DOT__UnsignedLess 
            = (1U & vlSelfRef.Jerry_PL_main__DOT__ALUResult);
    }
    vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 0U;
    if ((0x6fU == (IData)(vlSelfRef.Jerry_PL_main__DOT__opcodeE))) {
        vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 3U;
    } else if ((0x67U == (IData)(vlSelfRef.Jerry_PL_main__DOT__opcodeE))) {
        vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 3U;
    } else if ((0x63U == (IData)(vlSelfRef.Jerry_PL_main__DOT__opcodeE))) {
        if ((4U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3E))) {
            if ((2U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3E))) {
                if ((1U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3E))) {
                    if ((1U & (~ (IData)(vlSelfRef.Jerry_PL_main__DOT__UnsignedLess)))) {
                        vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 1U;
                    }
                } else if (vlSelfRef.Jerry_PL_main__DOT__UnsignedLess) {
                    vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3E))) {
                if ((1U & ((~ (IData)(vlSelfRef.Jerry_PL_main__DOT__NegativeFlag)) 
                           | (IData)(vlSelfRef.Jerry_PL_main__DOT__ZeroFlag)))) {
                    vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 1U;
                }
            } else if (vlSelfRef.Jerry_PL_main__DOT__NegativeFlag) {
                vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3E))) {
            vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 0U;
        } else if ((1U & (IData)(vlSelfRef.Jerry_PL_main__DOT__funct3E))) {
            if ((1U & (~ (IData)(vlSelfRef.Jerry_PL_main__DOT__ZeroFlag)))) {
                vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 1U;
            }
        } else if (vlSelfRef.Jerry_PL_main__DOT__ZeroFlag) {
            vlSelfRef.Jerry_PL_main__DOT__PCSrcE = 1U;
        }
    }
    vlSelfRef.Jerry_PL_main__DOT__flushD = 0U;
    vlSelfRef.Jerry_PL_main__DOT__flushE = 0U;
    if (((IData)(vlSelfRef.Jerry_PL_main__DOT__ResultSrcE) 
         & (((IData)(vlSelfRef.Jerry_PL_main__DOT__RdE) 
             == (0x1fU & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                          >> 0xfU))) | ((IData)(vlSelfRef.Jerry_PL_main__DOT__RdE) 
                                        == (0x1fU & 
                                            (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                             >> 0x14U)))))) {
        vlSelfRef.Jerry_PL_main__DOT__stallD = 1U;
        vlSelfRef.Jerry_PL_main__DOT__stallF = 1U;
        vlSelfRef.Jerry_PL_main__DOT__flushE = 1U;
    }
    if ((1U & (IData)(vlSelfRef.Jerry_PL_main__DOT__PCSrcE))) {
        vlSelfRef.Jerry_PL_main__DOT__flushD = 1U;
        vlSelfRef.Jerry_PL_main__DOT__flushE = 1U;
    }
}

void VJerry_PL_main___024root___eval_triggers__act(VJerry_PL_main___024root* vlSelf);

bool VJerry_PL_main___024root___eval_phase__act(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VJerry_PL_main___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VJerry_PL_main___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VJerry_PL_main___024root___eval_phase__nba(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VJerry_PL_main___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VJerry_PL_main___024root___dump_triggers__nba(VJerry_PL_main___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VJerry_PL_main___024root___dump_triggers__act(VJerry_PL_main___024root* vlSelf);
#endif  // VL_DEBUG

void VJerry_PL_main___024root___eval(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VJerry_PL_main___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Jerry_PL_main.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VJerry_PL_main___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Jerry_PL_main.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VJerry_PL_main___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VJerry_PL_main___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VJerry_PL_main___024root___eval_debug_assertions(VJerry_PL_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.TRIGGER & 0xfeU))) {
        Verilated::overWidthError("TRIGGER");}
}
#endif  // VL_DEBUG
