// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"
#include "Vmain___024root.h"

void Vmain___024root___eval_act(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vmain___024root___nba_sequent__TOP__0(Vmain___024root* vlSelf);

void Vmain___024root___eval_nba(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 8> Vmain__ConstPool__TABLE_h4916227f_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vmain__ConstPool__TABLE_haa54c7b8_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vmain__ConstPool__TABLE_h762817db_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vmain__ConstPool__TABLE_h5fbabd16_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain__ConstPool__TABLE_h81e3774a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain__ConstPool__TABLE_h2f4b16b8_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vmain__ConstPool__TABLE_h1e407645_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vmain__ConstPool__TABLE_h53be32e5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain__ConstPool__TABLE_h02750ca1_0;

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__0(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    IData/*31:0*/ __VdlyVal__main__DOT__D1__DOT__R1__DOT__RegArr__v0;
    __VdlyVal__main__DOT__D1__DOT__R1__DOT__RegArr__v0 = 0;
    CData/*4:0*/ __VdlyDim0__main__DOT__D1__DOT__R1__DOT__RegArr__v0;
    __VdlyDim0__main__DOT__D1__DOT__R1__DOT__RegArr__v0 = 0;
    CData/*7:0*/ __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v0;
    __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v0 = 0;
    IData/*19:0*/ __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v0;
    __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v0 = 0;
    CData/*7:0*/ __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v1;
    __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v1 = 0;
    IData/*19:0*/ __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v1;
    __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v1 = 0;
    CData/*7:0*/ __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v2;
    __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v2 = 0;
    IData/*19:0*/ __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v2;
    __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v2 = 0;
    CData/*7:0*/ __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v3;
    __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v3 = 0;
    IData/*19:0*/ __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v3;
    __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v3 = 0;
    CData/*7:0*/ __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v4;
    __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v4 = 0;
    IData/*19:0*/ __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v4;
    __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v4 = 0;
    CData/*7:0*/ __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v5;
    __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v5 = 0;
    IData/*19:0*/ __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v5;
    __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v5 = 0;
    CData/*7:0*/ __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v6;
    __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v6 = 0;
    IData/*19:0*/ __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v6;
    __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v6 = 0;
    CData/*0:0*/ __VdlySet__main__DOT__D1__DOT__R1__DOT__RegArr__v0;
    __VdlySet__main__DOT__D1__DOT__R1__DOT__RegArr__v0 = 0;
    CData/*0:0*/ __VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v0;
    __VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v0 = 0;
    CData/*0:0*/ __VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v4;
    __VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v4 = 0;
    CData/*0:0*/ __VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v6;
    __VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v6 = 0;
    // Body
    __VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v0 = 0U;
    __VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v4 = 0U;
    __VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v6 = 0U;
    __VdlySet__main__DOT__D1__DOT__R1__DOT__RegArr__v0 = 0U;
    if ((0x23U == (IData)(vlSelfRef.main__DOT__C1__DOT__op7))) {
        if ((2U == (3U & (IData)(vlSelfRef.main__DOT__D1__DOT__func3)))) {
            __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v0 
                = (vlSelfRef.main__DOT__D1__DOT__DOut2 
                   >> 0x18U);
            __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v0 
                = vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM;
            __VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v0 = 1U;
            __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v1 
                = (0xffU & (vlSelfRef.main__DOT__D1__DOT__DOut2 
                            >> 0x10U));
            __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v1 
                = (0xfffffU & ((IData)(1U) + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM));
            __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v2 
                = (0xffU & (vlSelfRef.main__DOT__D1__DOT__DOut2 
                            >> 8U));
            __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v2 
                = (0xfffffU & ((IData)(2U) + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM));
            __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v3 
                = (0xffU & vlSelfRef.main__DOT__D1__DOT__DOut2);
            __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v3 
                = (0xfffffU & ((IData)(3U) + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM));
        } else if ((1U == (3U & (IData)(vlSelfRef.main__DOT__D1__DOT__func3)))) {
            __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v4 
                = (0xffU & (vlSelfRef.main__DOT__D1__DOT__DOut2 
                            >> 8U));
            __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v4 
                = vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM;
            __VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v4 = 1U;
            __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v5 
                = (0xffU & vlSelfRef.main__DOT__D1__DOT__DOut2);
            __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v5 
                = (0xfffffU & ((IData)(1U) + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM));
        } else if ((0U == (3U & (IData)(vlSelfRef.main__DOT__D1__DOT__func3)))) {
            __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v6 
                = (0xffU & vlSelfRef.main__DOT__D1__DOT__DOut2);
            __VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v6 
                = vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM;
            __VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v6 = 1U;
        }
    }
    if (vlSelfRef.main__DOT__RegWrite) {
        __VdlyVal__main__DOT__D1__DOT__R1__DOT__RegArr__v0 
            = ((2U & (IData)(vlSelfRef.main__DOT__ResultSrc))
                ? ((1U & (IData)(vlSelfRef.main__DOT__ResultSrc))
                    ? vlSelfRef.main__DOT__D1__DOT__N2
                    : ((IData)(4U) + vlSelfRef.main__DOT__PC))
                : ((1U & (IData)(vlSelfRef.main__DOT__ResultSrc))
                    ? vlSelfRef.main__DOT__D1__DOT__DOutRam
                    : vlSelfRef.main__DOT__DOutAlu));
        __VdlyDim0__main__DOT__D1__DOT__R1__DOT__RegArr__v0 
            = (0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_0) 
                        >> 7U));
        __VdlySet__main__DOT__D1__DOT__R1__DOT__RegArr__v0 = 1U;
    }
    if (__VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v0) {
        vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray[__VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v0] 
            = __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v0;
        vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray[__VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v1] 
            = __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v1;
        vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray[__VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v2] 
            = __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v2;
        vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray[__VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v3] 
            = __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v3;
    }
    if (__VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v4) {
        vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray[__VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v4] 
            = __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v4;
        vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray[__VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v5] 
            = __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v5;
    }
    if (__VdlySet__main__DOT__D1__DOT__R2__DOT__RamArray__v6) {
        vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray[__VdlyDim0__main__DOT__D1__DOT__R2__DOT__RamArray__v6] 
            = __VdlyVal__main__DOT__D1__DOT__R2__DOT__RamArray__v6;
    }
    if (__VdlySet__main__DOT__D1__DOT__R1__DOT__RegArr__v0) {
        vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[__VdlyDim0__main__DOT__D1__DOT__R1__DOT__RegArr__v0] 
            = __VdlyVal__main__DOT__D1__DOT__R1__DOT__RegArr__v0;
    }
    vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr[0U] = 0U;
    vlSelfRef.A0 = vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr
        [0xaU];
    vlSelfRef.main__DOT__PC = ((IData)(vlSelfRef.rst)
                                ? 0U : vlSelfRef.main__DOT__D2__DOT__PCN);
    vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign = (1U 
                                                   & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                      [
                                                      (0xffU 
                                                       & vlSelfRef.main__DOT__PC)] 
                                                      >> 7U));
    vlSelfRef.main__DOT__D1__DOT__func3 = (7U & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                 [(0xffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.main__DOT__PC))] 
                                                 >> 4U));
    vlSelfRef.main__DOT__C1__DOT__op7 = (0x7fU & vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                         [(0xffU & 
                                           ((IData)(3U) 
                                            + vlSelfRef.main__DOT__PC))]);
    vlSelfRef.__VdfgRegularize_h6171c202_0_0 = ((vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                 [(0xffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.main__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.main__DOT__PC))]);
    __Vtableidx4 = vlSelfRef.main__DOT__D1__DOT__func3;
    vlSelfRef.main__DOT__D1__DOT__ALUflag = Vmain__ConstPool__TABLE_h4916227f_0
        [__Vtableidx4];
    __Vtableidx2 = vlSelfRef.main__DOT__D1__DOT__func3;
    vlSelfRef.main__DOT__D1__DOT__ALUctrl = Vmain__ConstPool__TABLE_haa54c7b8_0
        [__Vtableidx2];
    __Vtableidx3 = ((0x10U & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                              [(0xffU & vlSelfRef.main__DOT__PC)] 
                              >> 2U)) | ((8U & (vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.main__DOT__PC))] 
                                                >> 2U)) 
                                         | (IData)(vlSelfRef.main__DOT__D1__DOT__func3)));
    if (Vmain__ConstPool__TABLE_h762817db_0[__Vtableidx3]) {
        vlSelfRef.main__DOT__D1__DOT__ALUctrl = Vmain__ConstPool__TABLE_h5fbabd16_0
            [__Vtableidx3];
    }
    vlSelfRef.main__DOT__ResultSrc = ((3U == (IData)(vlSelfRef.main__DOT__C1__DOT__op7))
                                       ? 1U : ((0x6fU 
                                                == (IData)(vlSelfRef.main__DOT__C1__DOT__op7))
                                                ? 2U
                                                : (
                                                   (0x37U 
                                                    == (IData)(vlSelfRef.main__DOT__C1__DOT__op7))
                                                    ? 3U
                                                    : 0U)));
    __Vtableidx8 = vlSelfRef.main__DOT__C1__DOT__op7;
    vlSelfRef.main__DOT__RegWrite = Vmain__ConstPool__TABLE_h81e3774a_0
        [__Vtableidx8];
    vlSelfRef.main__DOT__C1__DOT__PCsrc_req1 = ((0x63U 
                                                 == (IData)(vlSelfRef.main__DOT__C1__DOT__op7))
                                                 ? 1U
                                                 : 
                                                ((0x6fU 
                                                  == (IData)(vlSelfRef.main__DOT__C1__DOT__op7))
                                                  ? 1U
                                                  : 
                                                 ((0x67U 
                                                   == (IData)(vlSelfRef.main__DOT__C1__DOT__op7))
                                                   ? 3U
                                                   : 0U)));
    __Vtableidx6 = vlSelfRef.main__DOT__C1__DOT__op7;
    vlSelfRef.main__DOT__ALUsrc = Vmain__ConstPool__TABLE_h2f4b16b8_0
        [__Vtableidx6];
    __Vtableidx7 = vlSelfRef.main__DOT__C1__DOT__op7;
    vlSelfRef.main__DOT__ALUop = Vmain__ConstPool__TABLE_h1e407645_0
        [__Vtableidx7];
    __Vtableidx5 = vlSelfRef.main__DOT__C1__DOT__op7;
    vlSelfRef.main__DOT__IMMsrc = Vmain__ConstPool__TABLE_h53be32e5_0
        [__Vtableidx5];
    vlSelfRef.__VdfgRegularize_h6171c202_0_1 = ((vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                                 [(0xffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.main__DOT__PC))] 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_0));
    if ((3U == (IData)(vlSelfRef.main__DOT__ALUop))) {
        vlSelfRef.main__DOT__D1__DOT__ALUflag = 3U;
    }
    if ((0U == (IData)(vlSelfRef.main__DOT__ALUop))) {
        vlSelfRef.main__DOT__D1__DOT__ALUctrl = 0U;
    } else if ((1U == (IData)(vlSelfRef.main__DOT__ALUop))) {
        vlSelfRef.main__DOT__D1__DOT__ALUctrl = 1U;
    } else if ((3U == (IData)(vlSelfRef.main__DOT__ALUop))) {
        vlSelfRef.main__DOT__D1__DOT__ALUctrl = 0U;
    }
    vlSelfRef.main__DOT__D1__DOT__DOut1 = vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr
        [(0x1fU & (vlSelfRef.__VdfgRegularize_h6171c202_0_1 
                   >> 0xfU))];
    vlSelfRef.main__DOT__instr = ((vlSelfRef.main__DOT__D2__DOT__R1__DOT__RomArr
                                   [(0xffU & vlSelfRef.main__DOT__PC)] 
                                   << 0x18U) | vlSelfRef.__VdfgRegularize_h6171c202_0_1);
    vlSelfRef.main__DOT__D1__DOT__DOut2 = vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr
        [(0x1fU & (vlSelfRef.main__DOT__instr >> 0x14U))];
    vlSelfRef.main__DOT__IMMop = ((4U & (IData)(vlSelfRef.main__DOT__IMMsrc))
                                   ? ((2U & (IData)(vlSelfRef.main__DOT__IMMsrc))
                                       ? (((- (IData)((IData)(vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign))) 
                                           << 0xcU) 
                                          | (vlSelfRef.main__DOT__instr 
                                             >> 0x14U))
                                       : ((1U & (IData)(vlSelfRef.main__DOT__IMMsrc))
                                           ? (vlSelfRef.main__DOT__instr 
                                              >> 0x14U)
                                           : (((- (IData)((IData)(vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign))) 
                                               << 0x15U) 
                                              | ((0x100000U 
                                                  & (vlSelfRef.main__DOT__instr 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelfRef.main__DOT__instr) 
                                                    | ((0x800U 
                                                        & (vlSelfRef.main__DOT__instr 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelfRef.main__DOT__instr 
                                                             >> 0x14U))))))))
                                   : ((2U & (IData)(vlSelfRef.main__DOT__IMMsrc))
                                       ? ((1U & (IData)(vlSelfRef.main__DOT__IMMsrc))
                                           ? (0xfffff000U 
                                              & vlSelfRef.main__DOT__instr)
                                           : (((- (IData)((IData)(vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign))) 
                                               << 0xdU) 
                                              | ((0x1000U 
                                                  & (vlSelfRef.main__DOT__instr 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlSelfRef.main__DOT__instr 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelfRef.main__DOT__instr 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelfRef.main__DOT__instr 
                                                             >> 7U)))))))
                                       : ((1U & (IData)(vlSelfRef.main__DOT__IMMsrc))
                                           ? (((- (IData)((IData)(vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign))) 
                                               << 0xcU) 
                                              | ((0xfe0U 
                                                  & (vlSelfRef.main__DOT__instr 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelfRef.main__DOT__instr 
                                                       >> 7U))))
                                           : (((- (IData)((IData)(vlSelfRef.main__DOT__D1__DOT__I1__DOT__sign))) 
                                               << 0xcU) 
                                              | (vlSelfRef.main__DOT__instr 
                                                 >> 0x14U)))));
    vlSelfRef.main__DOT__D1__DOT__N2 = ((IData)(vlSelfRef.main__DOT__ALUsrc)
                                         ? vlSelfRef.main__DOT__IMMop
                                         : vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr
                                        [(0x1fU & (vlSelfRef.main__DOT__instr 
                                                   >> 0x14U))]);
    if ((1U & (~ ((IData)(vlSelfRef.main__DOT__D1__DOT__ALUctrl) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.main__DOT__D1__DOT__ALUctrl) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.main__DOT__D1__DOT__ALUctrl))) {
                vlSelfRef.main__DOT__D1__DOT__A1__DOT__flagC 
                    = (1U & (IData)((1ULL & (((QData)((IData)(
                                                              vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr
                                                              [
                                                              (0x1fU 
                                                               & (vlSelfRef.__VdfgRegularize_h6171c202_0_1 
                                                                  >> 0xfU))])) 
                                              + (QData)((IData)(
                                                                ((IData)(1U) 
                                                                 + 
                                                                 (~ vlSelfRef.main__DOT__D1__DOT__N2))))) 
                                             >> 0x20U))));
            }
        }
    }
    vlSelfRef.main__DOT__DOutAlu = ((4U & (IData)(vlSelfRef.main__DOT__D1__DOT__ALUctrl))
                                     ? ((2U & (IData)(vlSelfRef.main__DOT__D1__DOT__ALUctrl))
                                         ? ((1U & (IData)(vlSelfRef.main__DOT__D1__DOT__ALUctrl))
                                             ? VL_SHIFTR_III(32,32,32, vlSelfRef.main__DOT__D1__DOT__DOut1, vlSelfRef.main__DOT__D1__DOT__N2)
                                             : VL_SHIFTL_III(32,32,32, vlSelfRef.main__DOT__D1__DOT__DOut1, vlSelfRef.main__DOT__D1__DOT__N2))
                                         : ((1U & (IData)(vlSelfRef.main__DOT__D1__DOT__ALUctrl))
                                             ? ((vlSelfRef.main__DOT__D1__DOT__DOut1 
                                                 < vlSelfRef.main__DOT__D1__DOT__N2)
                                                 ? 1U
                                                 : 0U)
                                             : (vlSelfRef.main__DOT__D1__DOT__DOut1 
                                                ^ vlSelfRef.main__DOT__D1__DOT__N2)))
                                     : ((2U & (IData)(vlSelfRef.main__DOT__D1__DOT__ALUctrl))
                                         ? ((1U & (IData)(vlSelfRef.main__DOT__D1__DOT__ALUctrl))
                                             ? (vlSelfRef.main__DOT__D1__DOT__DOut1 
                                                | vlSelfRef.main__DOT__D1__DOT__N2)
                                             : (vlSelfRef.main__DOT__D1__DOT__DOut1 
                                                & vlSelfRef.main__DOT__D1__DOT__N2))
                                         : ((1U & (IData)(vlSelfRef.main__DOT__D1__DOT__ALUctrl))
                                             ? ((IData)(1U) 
                                                + (
                                                   vlSelfRef.main__DOT__D1__DOT__R1__DOT__RegArr
                                                   [
                                                   (0x1fU 
                                                    & (vlSelfRef.__VdfgRegularize_h6171c202_0_1 
                                                       >> 0xfU))] 
                                                   + 
                                                   (~ vlSelfRef.main__DOT__D1__DOT__N2)))
                                             : (vlSelfRef.main__DOT__D1__DOT__DOut1 
                                                + vlSelfRef.main__DOT__D1__DOT__N2))));
    vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM = (0xfffffU 
                                                  & vlSelfRef.main__DOT__DOutAlu);
    vlSelfRef.main__DOT__D1__DOT__DOutRam = ((4U & (IData)(vlSelfRef.main__DOT__D1__DOT__func3))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.main__DOT__D1__DOT__func3))
                                                  ? 
                                                 ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                   [vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM] 
                                                   << 0x18U) 
                                                  | ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                      [
                                                      (0xfffffU 
                                                       & ((IData)(1U) 
                                                          + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM))] 
                                                      << 0x10U) 
                                                     | ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                         [
                                                         (0xfffffU 
                                                          & ((IData)(2U) 
                                                             + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM))] 
                                                         << 8U) 
                                                        | vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                        [
                                                        (0xfffffU 
                                                         & ((IData)(3U) 
                                                            + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM))])))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.main__DOT__D1__DOT__func3))
                                                   ? 
                                                  ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                    [vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM] 
                                                    << 8U) 
                                                   | vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                   [
                                                   (0xfffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM))])
                                                   : 
                                                  vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                  [vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM]))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.main__DOT__D1__DOT__func3))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.main__DOT__D1__DOT__func3))
                                                   ? 
                                                  ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                    [vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM] 
                                                    << 0x18U) 
                                                   | ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM))] 
                                                       << 0x10U) 
                                                      | ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                          [
                                                          (0xfffffU 
                                                           & ((IData)(2U) 
                                                              + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM))] 
                                                          << 8U) 
                                                         | vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                         [
                                                         (0xfffffU 
                                                          & ((IData)(3U) 
                                                             + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM))])))
                                                   : 
                                                  ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                    [vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM] 
                                                    << 0x18U) 
                                                   | ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM))] 
                                                       << 0x10U) 
                                                      | ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                          [
                                                          (0xfffffU 
                                                           & ((IData)(2U) 
                                                              + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM))] 
                                                          << 8U) 
                                                         | vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                         [
                                                         (0xfffffU 
                                                          & ((IData)(3U) 
                                                             + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM))]))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.main__DOT__D1__DOT__func3))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                                   [vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM] 
                                                                   >> 7U)))) 
                                                    << 0x10U) 
                                                   | ((vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                       [vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM] 
                                                       << 8U) 
                                                      | vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                      [
                                                      (0xfffffU 
                                                       & ((IData)(1U) 
                                                          + vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM))]))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                                   [vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM] 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | vlSelfRef.main__DOT__D1__DOT__R2__DOT__RamArray
                                                   [vlSelfRef.main__DOT__D1__DOT__R2__DOT__AdM]))));
    __Vtableidx1 = (((0U == vlSelfRef.main__DOT__DOutAlu) 
                     << 6U) | ((0x20U & ((vlSelfRef.main__DOT__D1__DOT__DOut1 
                                          >> 0x1aU) 
                                         & ((~ (vlSelfRef.main__DOT__D1__DOT__N2 
                                                >> 0x1fU)) 
                                            << 5U))) 
                               | ((0x10U & (vlSelfRef.main__DOT__DOutAlu 
                                            >> 0x1bU)) 
                                  | (((IData)(vlSelfRef.main__DOT__D1__DOT__A1__DOT__flagC) 
                                      << 3U) | (IData)(vlSelfRef.main__DOT__D1__DOT__ALUflag)))));
    vlSelfRef.main__DOT__flag = Vmain__ConstPool__TABLE_h02750ca1_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__PCsrc = ((2U & (IData)(vlSelfRef.main__DOT__C1__DOT__PCsrc_req1)) 
                                  | ((IData)(vlSelfRef.main__DOT__C1__DOT__PCsrc_req1) 
                                     & (IData)(vlSelfRef.main__DOT__flag)));
    vlSelfRef.main__DOT__D2__DOT__PCN = ((0U == (IData)(vlSelfRef.main__DOT__PCsrc))
                                          ? ((IData)(4U) 
                                             + vlSelfRef.main__DOT__PC)
                                          : ((1U == (IData)(vlSelfRef.main__DOT__PCsrc))
                                              ? (vlSelfRef.main__DOT__IMMop 
                                                 + vlSelfRef.main__DOT__PC)
                                              : ((3U 
                                                  == (IData)(vlSelfRef.main__DOT__PCsrc))
                                                  ? vlSelfRef.main__DOT__DOutAlu
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.main__DOT__PC))));
}

void Vmain___024root___eval_triggers__act(Vmain___024root* vlSelf);

bool Vmain___024root___eval_phase__act(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmain___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmain___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmain___024root___eval_phase__nba(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmain___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__nba(Vmain___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__act(Vmain___024root* vlSelf);
#endif  // VL_DEBUG

void Vmain___024root___eval(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval\n"); );
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
            Vmain___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("main.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vmain___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("main.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmain___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmain___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmain___024root___eval_debug_assertions(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
