// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"

#include "Vmain___024root.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vmain__ConstPool__TABLE_ha3782434_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vmain__ConstPool__TABLE_he8ad1c2e_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vmain__ConstPool__TABLE_h402f2331_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vmain__ConstPool__TABLE_ha7a4c332_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vmain__ConstPool__TABLE_he86e7fae_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain__ConstPool__TABLE_h67e84ab2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain__ConstPool__TABLE_h7b669437_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vmain__ConstPool__TABLE_h4fc149cf_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vmain__ConstPool__TABLE_h44dd6dc4_0;

VL_INLINE_OPT void Vmain___024root___sequent__TOP__0(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*2:0*/ __Vtableidx3;
    CData/*6:0*/ __Vtableidx4;
    CData/*6:0*/ __Vtableidx5;
    CData/*6:0*/ __Vtableidx6;
    CData/*6:0*/ __Vtableidx7;
    CData/*4:0*/ __Vdlyvdim0__main__DOT__D1__DOT__R1__DOT__register_array__v0;
    IData/*31:0*/ __Vdlyvval__main__DOT__D1__DOT__R1__DOT__register_array__v0;
    CData/*0:0*/ __Vdlyvset__main__DOT__D1__DOT__R1__DOT__register_array__v0;
    CData/*0:0*/ __Vdlyvset__main__DOT__D1__DOT__R1__DOT__register_array__v1;
    IData/*17:0*/ __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v0;
    CData/*7:0*/ __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v0;
    CData/*0:0*/ __Vdlyvset__main__DOT__D1__DOT__R2__DOT__RamArray__v0;
    IData/*17:0*/ __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v1;
    CData/*7:0*/ __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v1;
    IData/*17:0*/ __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v2;
    CData/*7:0*/ __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v2;
    IData/*17:0*/ __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v3;
    CData/*7:0*/ __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v3;
    IData/*17:0*/ __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v4;
    CData/*7:0*/ __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v4;
    CData/*0:0*/ __Vdlyvset__main__DOT__D1__DOT__R2__DOT__RamArray__v4;
    IData/*17:0*/ __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v5;
    CData/*7:0*/ __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v5;
    IData/*17:0*/ __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v6;
    CData/*7:0*/ __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v6;
    CData/*0:0*/ __Vdlyvset__main__DOT__D1__DOT__R2__DOT__RamArray__v6;
    // Body
    __Vdlyvset__main__DOT__D1__DOT__R2__DOT__RamArray__v0 = 0U;
    __Vdlyvset__main__DOT__D1__DOT__R2__DOT__RamArray__v4 = 0U;
    __Vdlyvset__main__DOT__D1__DOT__R2__DOT__RamArray__v6 = 0U;
    __Vdlyvset__main__DOT__D1__DOT__R1__DOT__register_array__v0 = 0U;
    __Vdlyvset__main__DOT__D1__DOT__R1__DOT__register_array__v1 = 0U;
    if ((0x23U == (0x7fU & vlSelf->main__DOT__instr))) {
        if ((2U == (3U & (vlSelf->main__DOT__instr 
                          >> 0xcU)))) {
            __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v0 
                = (vlSelf->main__DOT__D1__DOT__DOut2 
                   >> 0x18U);
            __Vdlyvset__main__DOT__D1__DOT__R2__DOT__RamArray__v0 = 1U;
            __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v0 
                = vlSelf->main__DOT__D1__DOT__R2__DOT__AdM;
            __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v1 
                = (0xffU & (vlSelf->main__DOT__D1__DOT__DOut2 
                            >> 0x10U));
            __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v1 
                = (0x3ffffU & ((IData)(1U) + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM));
            __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v2 
                = (0xffU & (vlSelf->main__DOT__D1__DOT__DOut2 
                            >> 8U));
            __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v2 
                = (0x3ffffU & ((IData)(2U) + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM));
            __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v3 
                = (0xffU & vlSelf->main__DOT__D1__DOT__DOut2);
            __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v3 
                = (0x3ffffU & ((IData)(3U) + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM));
        } else if ((1U == (3U & (vlSelf->main__DOT__instr 
                                 >> 0xcU)))) {
            __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v4 
                = (0xffU & (vlSelf->main__DOT__D1__DOT__DOut2 
                            >> 8U));
            __Vdlyvset__main__DOT__D1__DOT__R2__DOT__RamArray__v4 = 1U;
            __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v4 
                = vlSelf->main__DOT__D1__DOT__R2__DOT__AdM;
            __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v5 
                = (0xffU & vlSelf->main__DOT__D1__DOT__DOut2);
            __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v5 
                = (0x3ffffU & ((IData)(1U) + vlSelf->main__DOT__D1__DOT__R2__DOT__AdM));
        } else if ((0U == (3U & (vlSelf->main__DOT__instr 
                                 >> 0xcU)))) {
            __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v6 
                = (0xffU & vlSelf->main__DOT__D1__DOT__DOut2);
            __Vdlyvset__main__DOT__D1__DOT__R2__DOT__RamArray__v6 = 1U;
            __Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v6 
                = vlSelf->main__DOT__D1__DOT__R2__DOT__AdM;
        }
    }
    if (((IData)(vlSelf->main__DOT__RegWrite) & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->main__DOT__instr 
                                                     >> 7U))))) {
        __Vdlyvval__main__DOT__D1__DOT__R1__DOT__register_array__v0 
            = ((2U & (IData)(vlSelf->main__DOT__ResultSrc))
                ? ((1U & (IData)(vlSelf->main__DOT__ResultSrc))
                    ? vlSelf->main__DOT__D1__DOT__N2
                    : ((IData)(4U) + vlSelf->main__DOT__PC))
                : ((1U & (IData)(vlSelf->main__DOT__ResultSrc))
                    ? vlSelf->main__DOT__D1__DOT__DOutRam
                    : vlSelf->main__DOT__DOutAlu));
        __Vdlyvset__main__DOT__D1__DOT__R1__DOT__register_array__v0 = 1U;
        __Vdlyvdim0__main__DOT__D1__DOT__R1__DOT__register_array__v0 
            = (0x1fU & (vlSelf->main__DOT__instr >> 7U));
    }
    if (vlSelf->trigger_in) {
        __Vdlyvset__main__DOT__D1__DOT__R1__DOT__register_array__v1 = 1U;
    }
    if (__Vdlyvset__main__DOT__D1__DOT__R2__DOT__RamArray__v0) {
        vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray[__Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v0] 
            = __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v0;
        vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray[__Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v1] 
            = __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v1;
        vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray[__Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v2] 
            = __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v2;
        vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray[__Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v3] 
            = __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v3;
    }
    if (__Vdlyvset__main__DOT__D1__DOT__R2__DOT__RamArray__v4) {
        vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray[__Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v4] 
            = __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v4;
        vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray[__Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v5] 
            = __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v5;
    }
    if (__Vdlyvset__main__DOT__D1__DOT__R2__DOT__RamArray__v6) {
        vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray[__Vdlyvdim0__main__DOT__D1__DOT__R2__DOT__RamArray__v6] 
            = __Vdlyvval__main__DOT__D1__DOT__R2__DOT__RamArray__v6;
    }
    if (__Vdlyvset__main__DOT__D1__DOT__R1__DOT__register_array__v0) {
        vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[__Vdlyvdim0__main__DOT__D1__DOT__R1__DOT__register_array__v0] 
            = __Vdlyvval__main__DOT__D1__DOT__R1__DOT__register_array__v0;
    }
    if (__Vdlyvset__main__DOT__D1__DOT__R1__DOT__register_array__v1) {
        vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[5U] = 1U;
    }
    vlSelf->A0 = vlSelf->main__DOT__D1__DOT__R1__DOT__register_array
        [0xaU];
    vlSelf->main__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                              : vlSelf->main__DOT__D2__DOT__PCN);
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

void Vmain___024root___eval(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vmain___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vmain___024root___eval_debug_assertions(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger_in & 0xfeU))) {
        Verilated::overWidthError("trigger_in");}
}
#endif  // VL_DEBUG
