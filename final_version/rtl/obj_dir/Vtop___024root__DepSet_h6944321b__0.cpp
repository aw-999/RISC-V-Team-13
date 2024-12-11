// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_h16d0d9a0_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h2ceb4d49_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_hc2b5e764_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hbbfcfc79_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hfd45bb85_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_h13cdaea8_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hafddcf19_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_h51830349_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_hd1c1786d_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__regfile__DOT__RegArr__v0;
    __VdlyVal__top__DOT__regfile__DOT__RegArr__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__regfile__DOT__RegArr__v0;
    __VdlyDim0__top__DOT__regfile__DOT__RegArr__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__regfile__DOT__RegArr__v0;
    __VdlySet__top__DOT__regfile__DOT__RegArr__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__regfile__DOT__RegArr__v1;
    __VdlySet__top__DOT__regfile__DOT__RegArr__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__datamemory__DOT__RamArray__v0;
    __VdlyVal__top__DOT__datamemory__DOT__RamArray__v0 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v0;
    __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__datamemory__DOT__RamArray__v0;
    __VdlySet__top__DOT__datamemory__DOT__RamArray__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__datamemory__DOT__RamArray__v1;
    __VdlyVal__top__DOT__datamemory__DOT__RamArray__v1 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v1;
    __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__datamemory__DOT__RamArray__v2;
    __VdlyVal__top__DOT__datamemory__DOT__RamArray__v2 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v2;
    __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__datamemory__DOT__RamArray__v3;
    __VdlyVal__top__DOT__datamemory__DOT__RamArray__v3 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v3;
    __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v3 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__datamemory__DOT__RamArray__v4;
    __VdlyVal__top__DOT__datamemory__DOT__RamArray__v4 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v4;
    __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v4 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__datamemory__DOT__RamArray__v4;
    __VdlySet__top__DOT__datamemory__DOT__RamArray__v4 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__datamemory__DOT__RamArray__v5;
    __VdlyVal__top__DOT__datamemory__DOT__RamArray__v5 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v5;
    __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v5 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__datamemory__DOT__RamArray__v6;
    __VdlyVal__top__DOT__datamemory__DOT__RamArray__v6 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v6;
    __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v6 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__datamemory__DOT__RamArray__v6;
    __VdlySet__top__DOT__datamemory__DOT__RamArray__v6 = 0;
    // Body
    __VdlySet__top__DOT__datamemory__DOT__RamArray__v0 = 0U;
    __VdlySet__top__DOT__datamemory__DOT__RamArray__v4 = 0U;
    __VdlySet__top__DOT__datamemory__DOT__RamArray__v6 = 0U;
    __VdlySet__top__DOT__regfile__DOT__RegArr__v0 = 0U;
    __VdlySet__top__DOT__regfile__DOT__RegArr__v1 = 0U;
    if (vlSelfRef.top__DOT__memwriteM) {
        if ((2U == (3U & (IData)(vlSelfRef.top__DOT__funct3M)))) {
            __VdlyVal__top__DOT__datamemory__DOT__RamArray__v0 
                = (vlSelfRef.top__DOT__writedataM >> 0x18U);
            __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v0 
                = vlSelfRef.top__DOT__datamemory__DOT__AdM;
            __VdlySet__top__DOT__datamemory__DOT__RamArray__v0 = 1U;
            __VdlyVal__top__DOT__datamemory__DOT__RamArray__v1 
                = (0xffU & (vlSelfRef.top__DOT__writedataM 
                            >> 0x10U));
            __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v1 
                = (0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__datamemory__DOT__AdM));
            __VdlyVal__top__DOT__datamemory__DOT__RamArray__v2 
                = (0xffU & (vlSelfRef.top__DOT__writedataM 
                            >> 8U));
            __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v2 
                = (0x1ffffU & ((IData)(2U) + vlSelfRef.top__DOT__datamemory__DOT__AdM));
            __VdlyVal__top__DOT__datamemory__DOT__RamArray__v3 
                = (0xffU & vlSelfRef.top__DOT__writedataM);
            __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v3 
                = (0x1ffffU & ((IData)(3U) + vlSelfRef.top__DOT__datamemory__DOT__AdM));
        } else if ((1U == (3U & (IData)(vlSelfRef.top__DOT__funct3M)))) {
            __VdlyVal__top__DOT__datamemory__DOT__RamArray__v4 
                = (0xffU & (vlSelfRef.top__DOT__writedataM 
                            >> 8U));
            __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v4 
                = vlSelfRef.top__DOT__datamemory__DOT__AdM;
            __VdlySet__top__DOT__datamemory__DOT__RamArray__v4 = 1U;
            __VdlyVal__top__DOT__datamemory__DOT__RamArray__v5 
                = (0xffU & vlSelfRef.top__DOT__writedataM);
            __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v5 
                = (0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__datamemory__DOT__AdM));
        } else if ((0U == (3U & (IData)(vlSelfRef.top__DOT__funct3M)))) {
            __VdlyVal__top__DOT__datamemory__DOT__RamArray__v6 
                = (0xffU & vlSelfRef.top__DOT__writedataM);
            __VdlyDim0__top__DOT__datamemory__DOT__RamArray__v6 
                = vlSelfRef.top__DOT__datamemory__DOT__AdM;
            __VdlySet__top__DOT__datamemory__DOT__RamArray__v6 = 1U;
        }
    }
    if (vlSelfRef.top__DOT__regwriteW) {
        __VdlyVal__top__DOT__regfile__DOT__RegArr__v0 
            = vlSelfRef.top__DOT__resultW;
        __VdlyDim0__top__DOT__regfile__DOT__RegArr__v0 
            = vlSelfRef.top__DOT__rdW;
        __VdlySet__top__DOT__regfile__DOT__RegArr__v0 = 1U;
    }
    if (vlSelfRef.trigger) {
        __VdlySet__top__DOT__regfile__DOT__RegArr__v1 = 1U;
    }
    vlSelfRef.top__DOT__jalrE = ((1U & (~ (IData)(vlSelfRef.top__DOT__flushE))) 
                                 && (IData)(vlSelfRef.top__DOT__jalrD));
    vlSelfRef.top__DOT__alusrcE = ((1U & (~ (IData)(vlSelfRef.top__DOT__flushE))) 
                                   && (IData)(vlSelfRef.top__DOT__alusrcD));
    vlSelfRef.top__DOT__readdataW = vlSelfRef.top__DOT__readdataM;
    vlSelfRef.top__DOT__resultsrcW = vlSelfRef.top__DOT__resultsrcM;
    vlSelfRef.top__DOT__pcplus4W = vlSelfRef.top__DOT__pcplus4M;
    vlSelfRef.top__DOT__immextW = vlSelfRef.top__DOT__immextM;
    vlSelfRef.top__DOT__aluresultW = vlSelfRef.top__DOT__aluresultM;
    if (__VdlySet__top__DOT__datamemory__DOT__RamArray__v0) {
        vlSelfRef.top__DOT__datamemory__DOT__RamArray[__VdlyDim0__top__DOT__datamemory__DOT__RamArray__v0] 
            = __VdlyVal__top__DOT__datamemory__DOT__RamArray__v0;
        vlSelfRef.top__DOT__datamemory__DOT__RamArray[__VdlyDim0__top__DOT__datamemory__DOT__RamArray__v1] 
            = __VdlyVal__top__DOT__datamemory__DOT__RamArray__v1;
        vlSelfRef.top__DOT__datamemory__DOT__RamArray[__VdlyDim0__top__DOT__datamemory__DOT__RamArray__v2] 
            = __VdlyVal__top__DOT__datamemory__DOT__RamArray__v2;
        vlSelfRef.top__DOT__datamemory__DOT__RamArray[__VdlyDim0__top__DOT__datamemory__DOT__RamArray__v3] 
            = __VdlyVal__top__DOT__datamemory__DOT__RamArray__v3;
    }
    if (__VdlySet__top__DOT__datamemory__DOT__RamArray__v4) {
        vlSelfRef.top__DOT__datamemory__DOT__RamArray[__VdlyDim0__top__DOT__datamemory__DOT__RamArray__v4] 
            = __VdlyVal__top__DOT__datamemory__DOT__RamArray__v4;
        vlSelfRef.top__DOT__datamemory__DOT__RamArray[__VdlyDim0__top__DOT__datamemory__DOT__RamArray__v5] 
            = __VdlyVal__top__DOT__datamemory__DOT__RamArray__v5;
    }
    if (__VdlySet__top__DOT__datamemory__DOT__RamArray__v6) {
        vlSelfRef.top__DOT__datamemory__DOT__RamArray[__VdlyDim0__top__DOT__datamemory__DOT__RamArray__v6] 
            = __VdlyVal__top__DOT__datamemory__DOT__RamArray__v6;
    }
    if (vlSelfRef.top__DOT__flushE) {
        vlSelfRef.top__DOT__pcsrcE = 0U;
        vlSelfRef.top__DOT__aluctrlE = 0U;
        vlSelfRef.top__DOT__pcE = 0U;
        vlSelfRef.top__DOT__rs1E = 0U;
        vlSelfRef.top__DOT__RD2E = 0U;
        vlSelfRef.top__DOT__rs2E = 0U;
        vlSelfRef.top__DOT__RD1E = 0U;
    } else {
        vlSelfRef.top__DOT__pcsrcE = vlSelfRef.top__DOT__pcsrcD;
        vlSelfRef.top__DOT__aluctrlE = vlSelfRef.top__DOT__aluctrlD;
        vlSelfRef.top__DOT__pcE = vlSelfRef.top__DOT__pcD;
        vlSelfRef.top__DOT__rs1E = (0x1fU & (vlSelfRef.top__DOT__instrD 
                                             >> 0xfU));
        vlSelfRef.top__DOT__RD2E = vlSelfRef.top__DOT__regfile__DOT__RegArr
            [(0x1fU & (vlSelfRef.top__DOT__instrD >> 0x14U))];
        vlSelfRef.top__DOT__rs2E = (0x1fU & (vlSelfRef.top__DOT__instrD 
                                             >> 0x14U));
        vlSelfRef.top__DOT__RD1E = vlSelfRef.top__DOT__regfile__DOT__RegArr
            [(0x1fU & (vlSelfRef.top__DOT__instrD >> 0xfU))];
    }
    if (__VdlySet__top__DOT__regfile__DOT__RegArr__v0) {
        vlSelfRef.top__DOT__regfile__DOT__RegArr[__VdlyDim0__top__DOT__regfile__DOT__RegArr__v0] 
            = __VdlyVal__top__DOT__regfile__DOT__RegArr__v0;
    }
    if (__VdlySet__top__DOT__regfile__DOT__RegArr__v1) {
        vlSelfRef.top__DOT__regfile__DOT__RegArr[5U] = 1U;
    }
    vlSelfRef.top__DOT__regfile__DOT__RegArr[0U] = 0U;
    vlSelfRef.top__DOT__writedataM = vlSelfRef.top__DOT__writedataE;
    vlSelfRef.top__DOT__memwriteM = vlSelfRef.top__DOT__memwriteE;
    vlSelfRef.top__DOT__funct3M = vlSelfRef.top__DOT__funct3E;
    vlSelfRef.top__DOT__regwriteW = vlSelfRef.top__DOT__regwriteM;
    vlSelfRef.top__DOT__rdW = vlSelfRef.top__DOT__rdM;
    vlSelfRef.top__DOT__resultsrcM = vlSelfRef.top__DOT__resultsrcE;
    vlSelfRef.top__DOT__pcplus4M = vlSelfRef.top__DOT__pcplus4E;
    vlSelfRef.a0 = vlSelfRef.top__DOT__regfile__DOT__RegArr
        [0xaU];
    vlSelfRef.top__DOT__immextM = vlSelfRef.top__DOT__immextE;
    vlSelfRef.top__DOT__resultW = ((2U & (IData)(vlSelfRef.top__DOT__resultsrcW))
                                    ? ((1U & (IData)(vlSelfRef.top__DOT__resultsrcW))
                                        ? vlSelfRef.top__DOT__immextW
                                        : vlSelfRef.top__DOT__pcplus4W)
                                    : ((1U & (IData)(vlSelfRef.top__DOT__resultsrcW))
                                        ? vlSelfRef.top__DOT__readdataW
                                        : vlSelfRef.top__DOT__aluresultW));
    vlSelfRef.top__DOT__aluresultM = vlSelfRef.top__DOT__aluresultE;
    vlSelfRef.top__DOT__memwriteE = ((1U & (~ (IData)(vlSelfRef.top__DOT__flushE))) 
                                     && (IData)(vlSelfRef.top__DOT__memwriteD));
    vlSelfRef.top__DOT__regwriteM = vlSelfRef.top__DOT__regwriteE;
    vlSelfRef.top__DOT__rdM = vlSelfRef.top__DOT__rdE;
    if (vlSelfRef.top__DOT__flushE) {
        vlSelfRef.top__DOT__funct3E = 0U;
        vlSelfRef.top__DOT__resultsrcE = 0U;
        vlSelfRef.top__DOT__pcplus4E = 0U;
        vlSelfRef.top__DOT__immextE = 0U;
        vlSelfRef.top__DOT__rdE = 0U;
    } else {
        vlSelfRef.top__DOT__funct3E = (7U & (vlSelfRef.top__DOT__instrD 
                                             >> 0xcU));
        vlSelfRef.top__DOT__resultsrcE = vlSelfRef.top__DOT__resultsrcD;
        vlSelfRef.top__DOT__pcplus4E = vlSelfRef.top__DOT__pcplus4D;
        vlSelfRef.top__DOT__immextE = vlSelfRef.top__DOT__immextD;
        vlSelfRef.top__DOT__rdE = (0x1fU & (vlSelfRef.top__DOT__instrD 
                                            >> 7U));
    }
    if (vlSelfRef.top__DOT__flushD) {
        vlSelfRef.top__DOT__pcD = vlSelfRef.top__DOT__pcF;
        vlSelfRef.top__DOT__pcplus4D = ((IData)(4U) 
                                        + vlSelfRef.top__DOT__pcF);
        vlSelfRef.top__DOT__instrD = 0x13U;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__stallD)))) {
        vlSelfRef.top__DOT__pcD = vlSelfRef.top__DOT__pcF;
        vlSelfRef.top__DOT__pcplus4D = ((IData)(4U) 
                                        + vlSelfRef.top__DOT__pcF);
        vlSelfRef.top__DOT__instrD = ((vlSelfRef.top__DOT__instructionmemory__DOT__RomArray
                                       [(0xffffU & 
                                         ((IData)(3U) 
                                          + vlSelfRef.top__DOT__pcF))] 
                                       << 0x18U) | 
                                      ((vlSelfRef.top__DOT__instructionmemory__DOT__RomArray
                                        [(0xffffU & 
                                          ((IData)(2U) 
                                           + vlSelfRef.top__DOT__pcF))] 
                                        << 0x10U) | 
                                       ((vlSelfRef.top__DOT__instructionmemory__DOT__RomArray
                                         [(0xffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.top__DOT__pcF))] 
                                         << 8U) | vlSelfRef.top__DOT__instructionmemory__DOT__RomArray
                                        [(0xffffU & vlSelfRef.top__DOT__pcF)])));
    }
    vlSelfRef.top__DOT__datamemory__DOT__AdM = (0x1ffffU 
                                                & vlSelfRef.top__DOT__aluresultM);
    vlSelfRef.top__DOT__readdataM = ((4U & (IData)(vlSelfRef.top__DOT__funct3M))
                                      ? ((2U & (IData)(vlSelfRef.top__DOT__funct3M))
                                          ? ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                              [(0x1ffffU 
                                                & ((IData)(3U) 
                                                   + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                              << 0x18U) 
                                             | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                 [(0x1ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                 << 0x10U) 
                                                | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(1U) 
                                                        + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                    << 8U) 
                                                   | vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                   [vlSelfRef.top__DOT__datamemory__DOT__AdM])))
                                          : ((1U & (IData)(vlSelfRef.top__DOT__funct3M))
                                              ? ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                  << 8U) 
                                                 | vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                 [vlSelfRef.top__DOT__datamemory__DOT__AdM])
                                              : vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                             [vlSelfRef.top__DOT__datamemory__DOT__AdM]))
                                      : ((2U & (IData)(vlSelfRef.top__DOT__funct3M))
                                          ? ((1U & (IData)(vlSelfRef.top__DOT__funct3M))
                                              ? ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                  << 0x18U) 
                                                 | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                     << 0x10U) 
                                                    | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                        [
                                                        (0x1ffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                        << 8U) 
                                                       | vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                       [vlSelfRef.top__DOT__datamemory__DOT__AdM])))
                                              : ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                  << 0x18U) 
                                                 | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                     << 0x10U) 
                                                    | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                        [
                                                        (0x1ffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                        << 8U) 
                                                       | vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                       [vlSelfRef.top__DOT__datamemory__DOT__AdM]))))
                                          : ((1U & (IData)(vlSelfRef.top__DOT__funct3M))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                                 [vlSelfRef.top__DOT__datamemory__DOT__AdM] 
                                                                 >> 7U)))) 
                                                  << 0x10U) 
                                                 | ((vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(1U) 
                                                         + vlSelfRef.top__DOT__datamemory__DOT__AdM))] 
                                                     << 8U) 
                                                    | vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                    [vlSelfRef.top__DOT__datamemory__DOT__AdM]))
                                              : (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                                 [vlSelfRef.top__DOT__datamemory__DOT__AdM] 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | vlSelfRef.top__DOT__datamemory__DOT__RamArray
                                                 [vlSelfRef.top__DOT__datamemory__DOT__AdM]))));
    vlSelfRef.top__DOT__regwriteE = ((1U & (~ (IData)(vlSelfRef.top__DOT__flushE))) 
                                     && (IData)(vlSelfRef.top__DOT__regwriteD));
    vlSelfRef.top__DOT__forwardaE = (((((IData)(vlSelfRef.top__DOT__rs1E) 
                                        == (IData)(vlSelfRef.top__DOT__rdM)) 
                                       & (IData)(vlSelfRef.top__DOT__regwriteM)) 
                                      & (0U != (IData)(vlSelfRef.top__DOT__rs1E)))
                                      ? 2U : (((((IData)(vlSelfRef.top__DOT__rs1E) 
                                                 == (IData)(vlSelfRef.top__DOT__rdW)) 
                                                & (IData)(vlSelfRef.top__DOT__regwriteW)) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.top__DOT__rs1E)))
                                               ? 1U
                                               : 0U));
    vlSelfRef.top__DOT__forwardbE = (((((IData)(vlSelfRef.top__DOT__rs2E) 
                                        == (IData)(vlSelfRef.top__DOT__rdM)) 
                                       & (IData)(vlSelfRef.top__DOT__regwriteM)) 
                                      & (0U != (IData)(vlSelfRef.top__DOT__rs2E)))
                                      ? 2U : (((((IData)(vlSelfRef.top__DOT__rs2E) 
                                                 == (IData)(vlSelfRef.top__DOT__rdW)) 
                                                & (IData)(vlSelfRef.top__DOT__regwriteW)) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.top__DOT__rs2E)))
                                               ? 1U
                                               : 0U));
    vlSelfRef.top__DOT__pctargetE = (vlSelfRef.top__DOT__immextE 
                                     + ((IData)(vlSelfRef.top__DOT__jalrE)
                                         ? vlSelfRef.top__DOT__RD1E
                                         : vlSelfRef.top__DOT__pcE));
    vlSelfRef.top__DOT__srcaE = ((0U == (IData)(vlSelfRef.top__DOT__forwardaE))
                                  ? vlSelfRef.top__DOT__RD1E
                                  : ((1U == (IData)(vlSelfRef.top__DOT__forwardaE))
                                      ? vlSelfRef.top__DOT__resultW
                                      : ((2U == (IData)(vlSelfRef.top__DOT__forwardaE))
                                          ? vlSelfRef.top__DOT__aluresultM
                                          : vlSelfRef.top__DOT__RD1E)));
    vlSelfRef.top__DOT__writedataE = ((0U == (IData)(vlSelfRef.top__DOT__forwardbE))
                                       ? vlSelfRef.top__DOT__RD2E
                                       : ((1U == (IData)(vlSelfRef.top__DOT__forwardbE))
                                           ? vlSelfRef.top__DOT__resultW
                                           : ((2U == (IData)(vlSelfRef.top__DOT__forwardbE))
                                               ? vlSelfRef.top__DOT__aluresultM
                                               : vlSelfRef.top__DOT__RD2E)));
    vlSelfRef.top__DOT__srcbE = ((IData)(vlSelfRef.top__DOT__alusrcE)
                                  ? vlSelfRef.top__DOT__immextE
                                  : vlSelfRef.top__DOT__writedataE);
    vlSelfRef.top__DOT__aluresultE = 0U;
    vlSelfRef.top__DOT__flagE = 0U;
    if ((8U & (IData)(vlSelfRef.top__DOT__aluctrlE))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__aluctrlE) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__aluctrlE) 
                          >> 1U)))) {
                vlSelfRef.top__DOT__aluresultE = ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                   ? 
                                                  ((vlSelfRef.top__DOT__srcaE 
                                                    < vlSelfRef.top__DOT__srcbE)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((vlSelfRef.top__DOT__srcaE 
                                                    < vlSelfRef.top__DOT__srcbE)
                                                    ? 1U
                                                    : 0U));
            }
        }
        if ((4U & (IData)(vlSelfRef.top__DOT__aluctrlE))) {
            vlSelfRef.top__DOT__flagE = (1U & ((2U 
                                                & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                    ? 
                                                   (VL_GTES_III(32, vlSelfRef.top__DOT__srcaE, vlSelfRef.top__DOT__srcbE)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelfRef.top__DOT__srcaE, vlSelfRef.top__DOT__srcbE)
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                    ? 
                                                   ((vlSelfRef.top__DOT__srcaE 
                                                     >= vlSelfRef.top__DOT__srcbE)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((vlSelfRef.top__DOT__srcaE 
                                                     < vlSelfRef.top__DOT__srcbE)
                                                     ? 1U
                                                     : 0U))));
        } else if ((2U & (IData)(vlSelfRef.top__DOT__aluctrlE))) {
            vlSelfRef.top__DOT__flagE = (1U & ((1U 
                                                & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                ? (
                                                   (vlSelfRef.top__DOT__srcaE 
                                                    != vlSelfRef.top__DOT__srcbE)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   (vlSelfRef.top__DOT__srcaE 
                                                    == vlSelfRef.top__DOT__srcbE)
                                                    ? 1U
                                                    : 0U)));
        }
    } else {
        vlSelfRef.top__DOT__aluresultE = ((4U & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                           ? ((2U & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__srcaE, 
                                                                 (0x1fU 
                                                                  & vlSelfRef.top__DOT__srcbE))
                                                   : 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelfRef.top__DOT__srcbE)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                   ? 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelfRef.top__DOT__srcbE))
                                                   : 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   ^ vlSelfRef.top__DOT__srcbE)))
                                           : ((2U & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                   ? 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   | vlSelfRef.top__DOT__srcbE)
                                                   : 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   & vlSelfRef.top__DOT__srcbE))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__aluctrlE))
                                                   ? 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   - vlSelfRef.top__DOT__srcbE)
                                                   : 
                                                  (vlSelfRef.top__DOT__srcaE 
                                                   + vlSelfRef.top__DOT__srcbE))));
    }
    vlSelfRef.top__DOT__flushD = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__pcF = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__stallF)))) {
        vlSelfRef.top__DOT__pcF = vlSelfRef.top__DOT__pcnextF;
    }
    vlSelfRef.top__DOT__stallD = 0U;
    vlSelfRef.top__DOT__flushE = 0U;
    if ((1U & (IData)(vlSelfRef.top__DOT__pcsrcE))) {
        vlSelfRef.top__DOT__flushD = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__resultsrcE) & 
         (((IData)(vlSelfRef.top__DOT__rdE) == (0x1fU 
                                                & (vlSelfRef.top__DOT__instrD 
                                                   >> 0xfU))) 
          | ((IData)(vlSelfRef.top__DOT__rdE) == (0x1fU 
                                                  & (vlSelfRef.top__DOT__instrD 
                                                     >> 0x14U)))))) {
        vlSelfRef.top__DOT__stallD = 1U;
        vlSelfRef.top__DOT__flushE = 1U;
    }
    if ((1U & (IData)(vlSelfRef.top__DOT__pcsrcE))) {
        vlSelfRef.top__DOT__flushE = 1U;
    }
    __Vtableidx1 = (((IData)(vlSelfRef.top__DOT__flagE) 
                     << 7U) | (0x7fU & vlSelfRef.top__DOT__instrD));
    vlSelfRef.top__DOT__aluopD = Vtop__ConstPool__TABLE_h16d0d9a0_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__jalrD = Vtop__ConstPool__TABLE_h2ceb4d49_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__resultsrcD = Vtop__ConstPool__TABLE_hc2b5e764_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__memwriteD = Vtop__ConstPool__TABLE_hbbfcfc79_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__alusrcD = Vtop__ConstPool__TABLE_hfd45bb85_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__immsrcD = Vtop__ConstPool__TABLE_h13cdaea8_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__regwriteD = Vtop__ConstPool__TABLE_hafddcf19_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__pcsrcD = Vtop__ConstPool__TABLE_h51830349_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__stallF = 0U;
    if (((IData)(vlSelfRef.top__DOT__resultsrcE) & 
         (((IData)(vlSelfRef.top__DOT__rdE) == (0x1fU 
                                                & (vlSelfRef.top__DOT__instrD 
                                                   >> 0xfU))) 
          | ((IData)(vlSelfRef.top__DOT__rdE) == (0x1fU 
                                                  & (vlSelfRef.top__DOT__instrD 
                                                     >> 0x14U)))))) {
        vlSelfRef.top__DOT__stallF = 1U;
    }
    vlSelfRef.top__DOT__immextD = ((4U & (IData)(vlSelfRef.top__DOT__immsrcD))
                                    ? ((2U & (IData)(vlSelfRef.top__DOT__immsrcD))
                                        ? (((- (IData)(
                                                       (vlSelfRef.top__DOT__instrD 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelfRef.top__DOT__instrD 
                                              >> 0x14U))
                                        : ((1U & (IData)(vlSelfRef.top__DOT__immsrcD))
                                            ? (vlSelfRef.top__DOT__instrD 
                                               >> 0x14U)
                                            : (((- (IData)(
                                                           (vlSelfRef.top__DOT__instrD 
                                                            >> 0x1fU))) 
                                                << 0x15U) 
                                               | ((0x100000U 
                                                   & (vlSelfRef.top__DOT__instrD 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelfRef.top__DOT__instrD) 
                                                     | ((0x800U 
                                                         & (vlSelfRef.top__DOT__instrD 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelfRef.top__DOT__instrD 
                                                              >> 0x14U))))))))
                                    : ((2U & (IData)(vlSelfRef.top__DOT__immsrcD))
                                        ? ((1U & (IData)(vlSelfRef.top__DOT__immsrcD))
                                            ? (0xfffff000U 
                                               & vlSelfRef.top__DOT__instrD)
                                            : (((- (IData)(
                                                           (vlSelfRef.top__DOT__instrD 
                                                            >> 0x1fU))) 
                                                << 0xdU) 
                                               | ((0x1000U 
                                                   & (vlSelfRef.top__DOT__instrD 
                                                      >> 0x13U)) 
                                                  | ((0x800U 
                                                      & (vlSelfRef.top__DOT__instrD 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelfRef.top__DOT__instrD 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelfRef.top__DOT__instrD 
                                                              >> 7U)))))))
                                        : ((1U & (IData)(vlSelfRef.top__DOT__immsrcD))
                                            ? (((- (IData)(
                                                           (vlSelfRef.top__DOT__instrD 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelfRef.top__DOT__instrD 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.top__DOT__instrD 
                                                        >> 7U))))
                                            : (((- (IData)(
                                                           (vlSelfRef.top__DOT__instrD 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.top__DOT__instrD 
                                                  >> 0x14U)))));
    __Vtableidx2 = ((0x40U & (vlSelfRef.top__DOT__instrD 
                              >> 0x18U)) | ((0x38U 
                                             & (vlSelfRef.top__DOT__instrD 
                                                >> 9U)) 
                                            | (IData)(vlSelfRef.top__DOT__aluopD)));
    vlSelfRef.top__DOT__aluctrlD = Vtop__ConstPool__TABLE_hd1c1786d_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__pcnextF = ((2U & (IData)(vlSelfRef.top__DOT__pcsrcE))
                                    ? ((1U & (IData)(vlSelfRef.top__DOT__pcsrcE))
                                        ? vlSelfRef.top__DOT__pctargetE
                                        : vlSelfRef.top__DOT__aluresultW)
                                    : ((1U & (IData)(vlSelfRef.top__DOT__pcsrcE))
                                        ? vlSelfRef.top__DOT__pctargetE
                                        : ((IData)(4U) 
                                           + vlSelfRef.top__DOT__pcF)));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
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
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
