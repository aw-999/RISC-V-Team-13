// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"

#include "Vmain___024root.h"

VL_ATTR_COLD void Vmain___024root___initial__TOP__0(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h0b1accc7__0;
    VlWide<4>/*127:0*/ __Vtemp_h72f072e9__0;
    // Body
    __Vtemp_h0b1accc7__0[0U] = 0x2e6d656dU;
    __Vtemp_h0b1accc7__0[1U] = 0x6e676c65U;
    __Vtemp_h0b1accc7__0[2U] = 0x74726961U;
    VL_READMEM_N(true, 8, 262144, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h0b1accc7__0)
                 ,  &(vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray)
                 , 0, ~0ULL);
    __Vtemp_h72f072e9__0[0U] = 0x2e6d656dU;
    __Vtemp_h72f072e9__0[1U] = 0x6d626c79U;
    __Vtemp_h72f072e9__0[2U] = 0x61737365U;
    __Vtemp_h72f072e9__0[3U] = 0x4631U;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h72f072e9__0)
                 ,  &(vlSelf->main__DOT__D2__DOT__R1__DOT__RomArr)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 128> Vmain__ConstPool__TABLE_ha3782434_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vmain__ConstPool__TABLE_he8ad1c2e_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vmain__ConstPool__TABLE_h402f2331_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vmain__ConstPool__TABLE_ha7a4c332_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vmain__ConstPool__TABLE_he86e7fae_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain__ConstPool__TABLE_h67e84ab2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain__ConstPool__TABLE_h7b669437_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vmain__ConstPool__TABLE_h4fc149cf_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vmain__ConstPool__TABLE_h44dd6dc4_0;

VL_ATTR_COLD void Vmain___024root___settle__TOP__0(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___settle__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*2:0*/ __Vtableidx3;
    CData/*6:0*/ __Vtableidx4;
    CData/*6:0*/ __Vtableidx5;
    CData/*6:0*/ __Vtableidx6;
    CData/*6:0*/ __Vtableidx7;
    // Body
    vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[0U] = 0U;
    vlSelf->main__DOT__instr = ((vlSelf->main__DOT__D2__DOT__R1__DOT__RomArr
                                 [(0xffU & vlSelf->main__DOT__PC)] 
                                 << 0x18U) | ((vlSelf->main__DOT__D2__DOT__R1__DOT__RomArr
                                               [(0xffU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->main__DOT__PC))] 
                                               << 0x10U) 
                                              | ((vlSelf->main__DOT__D2__DOT__R1__DOT__RomArr
                                                  [
                                                  (0xffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->main__DOT__PC))] 
                                                  << 8U) 
                                                 | vlSelf->main__DOT__D2__DOT__R1__DOT__RomArr
                                                 [(0xffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->main__DOT__PC))])));
    vlSelf->A0 = vlSelf->main__DOT__D1__DOT__R1__DOT__register_array
        [0xaU];
    vlSelf->main__DOT__ResultSrc = ((3U == (0x7fU & vlSelf->main__DOT__instr))
                                     ? 1U : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->main__DOT__instr))
                                              ? 2U : 
                                             ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->main__DOT__instr))
                                               ? 3U
                                               : 0U)));
    __Vtableidx7 = (0x7fU & vlSelf->main__DOT__instr);
    vlSelf->main__DOT__RegWrite = Vmain__ConstPool__TABLE_ha3782434_0
        [__Vtableidx7];
    vlSelf->main__DOT__C1__DOT__PCsrc_req1 = ((0x63U 
                                               == (0x7fU 
                                                   & vlSelf->main__DOT__instr))
                                               ? 1U
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->main__DOT__instr))
                                                   ? 1U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->main__DOT__instr))
                                                    ? 3U
                                                    : 0U)));
    __Vtableidx3 = (7U & (vlSelf->main__DOT__instr 
                          >> 0xcU));
    vlSelf->main__DOT__D1__DOT__ALUflag = Vmain__ConstPool__TABLE_he8ad1c2e_0
        [__Vtableidx3];
    vlSelf->main__DOT__D1__DOT__DOut1 = vlSelf->main__DOT__D1__DOT__R1__DOT__register_array
        [(0x1fU & (vlSelf->main__DOT__instr >> 0xfU))];
    __Vtableidx1 = (7U & (vlSelf->main__DOT__instr 
                          >> 0xcU));
    vlSelf->main__DOT__D1__DOT__ALUctrl = Vmain__ConstPool__TABLE_h402f2331_0
        [__Vtableidx1];
    __Vtableidx2 = ((0x10U & (vlSelf->main__DOT__instr 
                              >> 0x1aU)) | ((8U & (vlSelf->main__DOT__instr 
                                                   << 2U)) 
                                            | (7U & 
                                               (vlSelf->main__DOT__instr 
                                                >> 0xcU))));
    if (Vmain__ConstPool__TABLE_ha7a4c332_0[__Vtableidx2]) {
        vlSelf->main__DOT__D1__DOT__ALUctrl = Vmain__ConstPool__TABLE_he86e7fae_0
            [__Vtableidx2];
    }
    vlSelf->main__DOT__D1__DOT__DOut2 = vlSelf->main__DOT__D1__DOT__R1__DOT__register_array
        [(0x1fU & (vlSelf->main__DOT__instr >> 0x14U))];
    __Vtableidx5 = (0x7fU & vlSelf->main__DOT__instr);
    if (Vmain__ConstPool__TABLE_h67e84ab2_0[__Vtableidx5]) {
        vlSelf->main__DOT__ALUsrc = Vmain__ConstPool__TABLE_h7b669437_0
            [__Vtableidx5];
    }
    __Vtableidx6 = (0x7fU & vlSelf->main__DOT__instr);
    vlSelf->main__DOT__ALUop = Vmain__ConstPool__TABLE_h4fc149cf_0
        [__Vtableidx6];
    __Vtableidx4 = (0x7fU & vlSelf->main__DOT__instr);
    vlSelf->main__DOT__IMMsrc = Vmain__ConstPool__TABLE_h44dd6dc4_0
        [__Vtableidx4];
    if ((3U == (IData)(vlSelf->main__DOT__ALUop))) {
        vlSelf->main__DOT__D1__DOT__ALUflag = 3U;
    }
    if ((0U == (IData)(vlSelf->main__DOT__ALUop))) {
        vlSelf->main__DOT__D1__DOT__ALUctrl = 0U;
    } else if ((1U == (IData)(vlSelf->main__DOT__ALUop))) {
        vlSelf->main__DOT__D1__DOT__ALUctrl = 1U;
    } else if ((3U == (IData)(vlSelf->main__DOT__ALUop))) {
        vlSelf->main__DOT__D1__DOT__ALUctrl = 0U;
    }
    vlSelf->main__DOT__IMMop = ((4U & (IData)(vlSelf->main__DOT__IMMsrc))
                                 ? ((2U & (IData)(vlSelf->main__DOT__IMMsrc))
                                     ? (((- (IData)(
                                                    (vlSelf->main__DOT__instr 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelf->main__DOT__instr 
                                         >> 0x14U))
                                     : ((1U & (IData)(vlSelf->main__DOT__IMMsrc))
                                         ? (((- (IData)(
                                                        (vlSelf->main__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->main__DOT__instr 
                                               >> 0x14U))
                                         : (((- (IData)(
                                                        (vlSelf->main__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0x15U) 
                                            | ((0x100000U 
                                                & (vlSelf->main__DOT__instr 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->main__DOT__instr) 
                                                  | ((0x800U 
                                                      & (vlSelf->main__DOT__instr 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->main__DOT__instr 
                                                           >> 0x14U))))))))
                                 : ((2U & (IData)(vlSelf->main__DOT__IMMsrc))
                                     ? ((1U & (IData)(vlSelf->main__DOT__IMMsrc))
                                         ? (0xfffff000U 
                                            & vlSelf->main__DOT__instr)
                                         : (((- (IData)(
                                                        (vlSelf->main__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xdU) 
                                            | ((0x1000U 
                                                & (vlSelf->main__DOT__instr 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSelf->main__DOT__instr 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->main__DOT__instr 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->main__DOT__instr 
                                                           >> 7U)))))))
                                     : ((1U & (IData)(vlSelf->main__DOT__IMMsrc))
                                         ? (((- (IData)(
                                                        (vlSelf->main__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->main__DOT__instr 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->main__DOT__instr 
                                                     >> 7U))))
                                         : (((- (IData)(
                                                        (vlSelf->main__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->main__DOT__instr 
                                               >> 0x14U)))));
    vlSelf->main__DOT__D1__DOT__N2 = ((IData)(vlSelf->main__DOT__ALUsrc)
                                       ? vlSelf->main__DOT__IMMop
                                       : vlSelf->main__DOT__D1__DOT__DOut2);
    vlSelf->main__DOT__DOutAlu = ((4U & (IData)(vlSelf->main__DOT__D1__DOT__ALUctrl))
                                   ? ((2U & (IData)(vlSelf->main__DOT__D1__DOT__ALUctrl))
                                       ? ((1U & (IData)(vlSelf->main__DOT__D1__DOT__ALUctrl))
                                           ? ((0x1fU 
                                               >= vlSelf->main__DOT__D1__DOT__N2)
                                               ? (vlSelf->main__DOT__D1__DOT__DOut1 
                                                  >> vlSelf->main__DOT__D1__DOT__N2)
                                               : 0U)
                                           : ((0x1fU 
                                               >= vlSelf->main__DOT__D1__DOT__N2)
                                               ? (vlSelf->main__DOT__D1__DOT__DOut1 
                                                  << vlSelf->main__DOT__D1__DOT__N2)
                                               : 0U))
                                       : ((1U & (IData)(vlSelf->main__DOT__D1__DOT__ALUctrl))
                                           ? ((vlSelf->main__DOT__D1__DOT__DOut1 
                                               < vlSelf->main__DOT__D1__DOT__N2)
                                               ? 1U
                                               : 0U)
                                           : (vlSelf->main__DOT__D1__DOT__DOut1 
                                              ^ vlSelf->main__DOT__D1__DOT__N2)))
                                   : ((2U & (IData)(vlSelf->main__DOT__D1__DOT__ALUctrl))
                                       ? ((1U & (IData)(vlSelf->main__DOT__D1__DOT__ALUctrl))
                                           ? (vlSelf->main__DOT__D1__DOT__DOut1 
                                              | vlSelf->main__DOT__D1__DOT__N2)
                                           : (vlSelf->main__DOT__D1__DOT__DOut1 
                                              & vlSelf->main__DOT__D1__DOT__N2))
                                       : ((1U & (IData)(vlSelf->main__DOT__D1__DOT__ALUctrl))
                                           ? (vlSelf->main__DOT__D1__DOT__DOut1 
                                              - vlSelf->main__DOT__D1__DOT__N2)
                                           : (vlSelf->main__DOT__D1__DOT__DOut1 
                                              + vlSelf->main__DOT__D1__DOT__N2))));
    vlSelf->main__DOT__D1__DOT__R2__DOT__AdM = (0x3ffffU 
                                                & vlSelf->main__DOT__DOutAlu);
    vlSelf->main__DOT__D1__DOT__DOutRam = ((0x4000U 
                                            & vlSelf->main__DOT__instr)
                                            ? ((0x2000U 
                                                & vlSelf->main__DOT__instr)
                                                ? (
                                                   (vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                    [vlSelf->main__DOT__D1__DOT__R2__DOT__AdM] 
                                                    << 0x18U) 
                                                   | ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                       [
                                                       (0x3ffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM))] 
                                                       << 0x10U) 
                                                      | ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                          [
                                                          (0x3ffffU 
                                                           & ((IData)(2U) 
                                                              + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM))] 
                                                          << 8U) 
                                                         | vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                         [
                                                         (0x3ffffU 
                                                          & ((IData)(3U) 
                                                             + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM))])))
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->main__DOT__instr)
                                                    ? 
                                                   ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                     [vlSelf->main__DOT__D1__DOT__R2__DOT__AdM] 
                                                     << 8U) 
                                                    | vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                    [
                                                    (0x3ffffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM))])
                                                    : 
                                                   vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                   [vlSelf->main__DOT__D1__DOT__R2__DOT__AdM]))
                                            : ((0x2000U 
                                                & vlSelf->main__DOT__instr)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->main__DOT__instr)
                                                    ? 
                                                   ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                     [vlSelf->main__DOT__D1__DOT__R2__DOT__AdM] 
                                                     << 0x18U) 
                                                    | ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                        [
                                                        (0x3ffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM))] 
                                                        << 0x10U) 
                                                       | ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                           [
                                                           (0x3ffffU 
                                                            & ((IData)(2U) 
                                                               + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM))] 
                                                           << 8U) 
                                                          | vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                          [
                                                          (0x3ffffU 
                                                           & ((IData)(3U) 
                                                              + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM))])))
                                                    : 
                                                   ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                     [vlSelf->main__DOT__D1__DOT__R2__DOT__AdM] 
                                                     << 0x18U) 
                                                    | ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                        [
                                                        (0x3ffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM))] 
                                                        << 0x10U) 
                                                       | ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                           [
                                                           (0x3ffffU 
                                                            & ((IData)(2U) 
                                                               + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM))] 
                                                           << 8U) 
                                                          | vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                          [
                                                          (0x3ffffU 
                                                           & ((IData)(3U) 
                                                              + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM))]))))
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->main__DOT__instr)
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                                    [vlSelf->main__DOT__D1__DOT__R2__DOT__AdM] 
                                                                    >> 7U)))) 
                                                     << 0x10U) 
                                                    | ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                        [vlSelf->main__DOT__D1__DOT__R2__DOT__AdM] 
                                                        << 8U) 
                                                       | vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                       [
                                                       (0x3ffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM))]))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                                    [vlSelf->main__DOT__D1__DOT__R2__DOT__AdM] 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                                    [vlSelf->main__DOT__D1__DOT__R2__DOT__AdM]))));
    vlSelf->main__DOT__PCsrc = ((2U & (IData)(vlSelf->main__DOT__C1__DOT__PCsrc_req1)) 
                                | (1U & ((IData)(vlSelf->main__DOT__C1__DOT__PCsrc_req1) 
                                         & ((4U & (IData)(vlSelf->main__DOT__D1__DOT__ALUflag))
                                             ? (IData)(vlSelf->main__DOT__D1__DOT__ALUflag)
                                             : ((2U 
                                                 & (IData)(vlSelf->main__DOT__D1__DOT__ALUflag))
                                                 ? (IData)(vlSelf->main__DOT__D1__DOT__ALUflag)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->main__DOT__D1__DOT__ALUflag))
                                                  ? 
                                                 ((0U 
                                                   != vlSelf->main__DOT__DOutAlu)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 ((0U 
                                                   == vlSelf->main__DOT__DOutAlu)
                                                   ? 1U
                                                   : 0U)))))));
    vlSelf->main__DOT__D2__DOT__PCN = ((0U == (IData)(vlSelf->main__DOT__PCsrc))
                                        ? ((IData)(4U) 
                                           + vlSelf->main__DOT__PC)
                                        : ((1U == (IData)(vlSelf->main__DOT__PCsrc))
                                            ? (vlSelf->main__DOT__PC 
                                               + vlSelf->main__DOT__IMMop)
                                            : ((3U 
                                                == (IData)(vlSelf->main__DOT__PCsrc))
                                                ? vlSelf->main__DOT__DOutAlu
                                                : ((IData)(4U) 
                                                   + vlSelf->main__DOT__PC))));
}

VL_ATTR_COLD void Vmain___024root___eval_initial(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial\n"); );
    // Body
    Vmain___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vmain___024root___eval_settle(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_settle\n"); );
    // Body
    Vmain___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vmain___024root___final(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___final\n"); );
}

VL_ATTR_COLD void Vmain___024root___ctor_var_reset(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger_in = VL_RAND_RESET_I(1);
    vlSelf->A0 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__IMMop = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__func3 = VL_RAND_RESET_I(3);
    vlSelf->main__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__ALUop = VL_RAND_RESET_I(2);
    vlSelf->main__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__IMMsrc = VL_RAND_RESET_I(3);
    vlSelf->main__DOT__ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->main__DOT__PCsrc = VL_RAND_RESET_I(2);
    vlSelf->main__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__DOutAlu = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D1__DOT__DOut1 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D1__DOT__DOut2 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D1__DOT__N2 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D1__DOT__DOutRam = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__D1__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->main__DOT__D1__DOT__ALUflag = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<262144; ++__Vi0) {
        vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->main__DOT__D1__DOT__R2__DOT__AdM = VL_RAND_RESET_I(18);
    vlSelf->main__DOT__C1__DOT__PCsrc_req1 = VL_RAND_RESET_I(2);
    vlSelf->main__DOT__D2__DOT__PCN = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->main__DOT__D2__DOT__R1__DOT__RomArr[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
