// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain_top.h for the primary calling header

#include "verilated.h"

#include "Vmain_top___024root.h"

VL_INLINE_OPT void Vmain_top___024root___sequent__TOP__0(Vmain_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__main_top__DOT__RegisterFile__DOT__RegArr__v0;
    IData/*31:0*/ __Vdlyvval__main_top__DOT__RegisterFile__DOT__RegArr__v0;
    CData/*0:0*/ __Vdlyvset__main_top__DOT__RegisterFile__DOT__RegArr__v0;
    CData/*0:0*/ __Vdlyvset__main_top__DOT__RegisterFile__DOT__RegArr__v1;
    IData/*19:0*/ __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v0;
    CData/*7:0*/ __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v0;
    CData/*0:0*/ __Vdlyvset__main_top__DOT__DataMemory__DOT__RamArray__v0;
    IData/*19:0*/ __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v1;
    CData/*7:0*/ __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v1;
    IData/*19:0*/ __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v2;
    CData/*7:0*/ __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v2;
    IData/*19:0*/ __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v3;
    CData/*7:0*/ __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v3;
    IData/*19:0*/ __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v4;
    CData/*7:0*/ __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v4;
    CData/*0:0*/ __Vdlyvset__main_top__DOT__DataMemory__DOT__RamArray__v4;
    IData/*19:0*/ __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v5;
    CData/*7:0*/ __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v5;
    IData/*19:0*/ __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v6;
    CData/*7:0*/ __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v6;
    CData/*0:0*/ __Vdlyvset__main_top__DOT__DataMemory__DOT__RamArray__v6;
    // Body
    __Vdlyvset__main_top__DOT__DataMemory__DOT__RamArray__v0 = 0U;
    __Vdlyvset__main_top__DOT__DataMemory__DOT__RamArray__v4 = 0U;
    __Vdlyvset__main_top__DOT__DataMemory__DOT__RamArray__v6 = 0U;
    __Vdlyvset__main_top__DOT__RegisterFile__DOT__RegArr__v0 = 0U;
    __Vdlyvset__main_top__DOT__RegisterFile__DOT__RegArr__v1 = 0U;
    vlSelf->main_top__DOT__PC = ((IData)(vlSelf->rst)
                                  ? 0U : vlSelf->main_top__DOT__PCN);
    if (vlSelf->main_top__DOT__MemWrite) {
        if ((2U == (3U & (vlSelf->main_top__DOT__instr 
                          >> 0xcU)))) {
            __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v0 
                = (vlSelf->main_top__DOT__DIn >> 0x18U);
            __Vdlyvset__main_top__DOT__DataMemory__DOT__RamArray__v0 = 1U;
            __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v0 
                = vlSelf->main_top__DOT__DataMemory__DOT__AdM;
            __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v1 
                = (0xffU & (vlSelf->main_top__DOT__DIn 
                            >> 0x10U));
            __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v1 
                = (0xfffffU & ((IData)(1U) + vlSelf->main_top__DOT__DataMemory__DOT__AdM));
            __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v2 
                = (0xffU & (vlSelf->main_top__DOT__DIn 
                            >> 8U));
            __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v2 
                = (0xfffffU & ((IData)(2U) + vlSelf->main_top__DOT__DataMemory__DOT__AdM));
            __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v3 
                = (0xffU & vlSelf->main_top__DOT__DIn);
            __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v3 
                = (0xfffffU & ((IData)(3U) + vlSelf->main_top__DOT__DataMemory__DOT__AdM));
        } else if ((1U == (3U & (vlSelf->main_top__DOT__instr 
                                 >> 0xcU)))) {
            __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v4 
                = (0xffU & (vlSelf->main_top__DOT__DIn 
                            >> 8U));
            __Vdlyvset__main_top__DOT__DataMemory__DOT__RamArray__v4 = 1U;
            __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v4 
                = vlSelf->main_top__DOT__DataMemory__DOT__AdM;
            __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v5 
                = (0xffU & vlSelf->main_top__DOT__DIn);
            __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v5 
                = (0xfffffU & ((IData)(1U) + vlSelf->main_top__DOT__DataMemory__DOT__AdM));
        } else if ((0U == (3U & (vlSelf->main_top__DOT__instr 
                                 >> 0xcU)))) {
            __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v6 
                = (0xffU & vlSelf->main_top__DOT__DIn);
            __Vdlyvset__main_top__DOT__DataMemory__DOT__RamArray__v6 = 1U;
            __Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v6 
                = vlSelf->main_top__DOT__DataMemory__DOT__AdM;
        }
    }
    if (vlSelf->main_top__DOT__RegWrite) {
        __Vdlyvval__main_top__DOT__RegisterFile__DOT__RegArr__v0 
            = vlSelf->Result;
        __Vdlyvset__main_top__DOT__RegisterFile__DOT__RegArr__v0 = 1U;
        __Vdlyvdim0__main_top__DOT__RegisterFile__DOT__RegArr__v0 
            = (0x1fU & (vlSelf->main_top__DOT__instr 
                        >> 7U));
    }
    if (vlSelf->main_top__DOT__TRIGGER) {
        __Vdlyvset__main_top__DOT__RegisterFile__DOT__RegArr__v1 = 1U;
    }
    if (__Vdlyvset__main_top__DOT__DataMemory__DOT__RamArray__v0) {
        vlSelf->main_top__DOT__DataMemory__DOT__RamArray[__Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v0] 
            = __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v0;
        vlSelf->main_top__DOT__DataMemory__DOT__RamArray[__Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v1] 
            = __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v1;
        vlSelf->main_top__DOT__DataMemory__DOT__RamArray[__Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v2] 
            = __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v2;
        vlSelf->main_top__DOT__DataMemory__DOT__RamArray[__Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v3] 
            = __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v3;
    }
    if (__Vdlyvset__main_top__DOT__DataMemory__DOT__RamArray__v4) {
        vlSelf->main_top__DOT__DataMemory__DOT__RamArray[__Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v4] 
            = __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v4;
        vlSelf->main_top__DOT__DataMemory__DOT__RamArray[__Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v5] 
            = __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v5;
    }
    if (__Vdlyvset__main_top__DOT__DataMemory__DOT__RamArray__v6) {
        vlSelf->main_top__DOT__DataMemory__DOT__RamArray[__Vdlyvdim0__main_top__DOT__DataMemory__DOT__RamArray__v6] 
            = __Vdlyvval__main_top__DOT__DataMemory__DOT__RamArray__v6;
    }
    if (__Vdlyvset__main_top__DOT__RegisterFile__DOT__RegArr__v0) {
        vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[__Vdlyvdim0__main_top__DOT__RegisterFile__DOT__RegArr__v0] 
            = __Vdlyvval__main_top__DOT__RegisterFile__DOT__RegArr__v0;
    }
    if (__Vdlyvset__main_top__DOT__RegisterFile__DOT__RegArr__v1) {
        vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[5U] = 1U;
    }
    vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[0U] = 0U;
    vlSelf->main_top__DOT__instr = ((vlSelf->main_top__DOT__InstructionMemory__DOT__RomArr
                                     [(0xffffU & vlSelf->main_top__DOT__PC)] 
                                     << 0x18U) | ((
                                                   vlSelf->main_top__DOT__InstructionMemory__DOT__RomArr
                                                   [
                                                   (0xffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->main_top__DOT__PC))] 
                                                   << 0x10U) 
                                                  | ((vlSelf->main_top__DOT__InstructionMemory__DOT__RomArr
                                                      [
                                                      (0xffffU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->main_top__DOT__PC))] 
                                                      << 8U) 
                                                     | vlSelf->main_top__DOT__InstructionMemory__DOT__RomArr
                                                     [
                                                     (0xffffU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->main_top__DOT__PC))])));
    vlSelf->a7 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x11U];
    vlSelf->a6 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x10U];
    vlSelf->a5 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0xfU];
    vlSelf->a4 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0xeU];
    vlSelf->a3 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0xdU];
    vlSelf->a2 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0xcU];
    vlSelf->a0 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0xaU];
    vlSelf->s1 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [9U];
    vlSelf->s0 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [8U];
    vlSelf->t2 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [7U];
    vlSelf->t1 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [6U];
    vlSelf->a1 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0xbU];
    vlSelf->t0 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [5U];
    vlSelf->s3 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x13U];
    vlSelf->s2 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x12U];
    vlSelf->s4 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x14U];
    vlSelf->s5 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x15U];
    vlSelf->s6 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x16U];
    vlSelf->s7 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x17U];
    vlSelf->s8 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x18U];
    vlSelf->s9 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x19U];
    vlSelf->s10 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x1aU];
    vlSelf->s11 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x1bU];
    vlSelf->t3 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x1cU];
    vlSelf->t4 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x1dU];
    vlSelf->t5 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x1eU];
    vlSelf->t6 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [0x1fU];
    vlSelf->main_top__DOT__RD1 = vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
        [(0x1fU & (vlSelf->main_top__DOT__instr >> 0xfU))];
    vlSelf->main_top__DOT__ImmExt = ((4U & (IData)(vlSelf->main_top__DOT__IMMsrc))
                                      ? ((2U & (IData)(vlSelf->main_top__DOT__IMMsrc))
                                          ? (((- (IData)(
                                                         (vlSelf->main_top__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->main_top__DOT__instr 
                                                >> 0x14U))
                                          : ((1U & (IData)(vlSelf->main_top__DOT__IMMsrc))
                                              ? (vlSelf->main_top__DOT__instr 
                                                 >> 0x14U)
                                              : (((- (IData)(
                                                             (vlSelf->main_top__DOT__instr 
                                                              >> 0x1fU))) 
                                                  << 0x15U) 
                                                 | ((0x100000U 
                                                     & (vlSelf->main_top__DOT__instr 
                                                        >> 0xbU)) 
                                                    | ((0xff000U 
                                                        & vlSelf->main_top__DOT__instr) 
                                                       | ((0x800U 
                                                           & (vlSelf->main_top__DOT__instr 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlSelf->main_top__DOT__instr 
                                                                >> 0x14U))))))))
                                      : ((2U & (IData)(vlSelf->main_top__DOT__IMMsrc))
                                          ? ((1U & (IData)(vlSelf->main_top__DOT__IMMsrc))
                                              ? (0xfffff000U 
                                                 & vlSelf->main_top__DOT__instr)
                                              : (((- (IData)(
                                                             (vlSelf->main_top__DOT__instr 
                                                              >> 0x1fU))) 
                                                  << 0xdU) 
                                                 | ((0x1000U 
                                                     & (vlSelf->main_top__DOT__instr 
                                                        >> 0x13U)) 
                                                    | ((0x800U 
                                                        & (vlSelf->main_top__DOT__instr 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->main_top__DOT__instr 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->main_top__DOT__instr 
                                                                >> 7U)))))))
                                          : ((1U & (IData)(vlSelf->main_top__DOT__IMMsrc))
                                              ? (((- (IData)(
                                                             (vlSelf->main_top__DOT__instr 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSelf->main_top__DOT__instr 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->main_top__DOT__instr 
                                                          >> 7U))))
                                              : (((- (IData)(
                                                             (vlSelf->main_top__DOT__instr 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->main_top__DOT__instr 
                                                    >> 0x14U)))));
}

extern const VlUnpacked<CData/*2:0*/, 8192> Vmain_top__ConstPool__TABLE_hb51b31ac_0;
extern const VlUnpacked<CData/*1:0*/, 8192> Vmain_top__ConstPool__TABLE_hffbac355_0;
extern const VlUnpacked<CData/*0:0*/, 8192> Vmain_top__ConstPool__TABLE_h53dd93db_0;
extern const VlUnpacked<CData/*0:0*/, 8192> Vmain_top__ConstPool__TABLE_h13b86d95_0;
extern const VlUnpacked<CData/*2:0*/, 8192> Vmain_top__ConstPool__TABLE_hb065c7f9_0;
extern const VlUnpacked<CData/*0:0*/, 8192> Vmain_top__ConstPool__TABLE_hc4c3ee54_0;
extern const VlUnpacked<CData/*6:0*/, 8192> Vmain_top__ConstPool__TABLE_hae30f990_0;
extern const VlUnpacked<CData/*1:0*/, 8192> Vmain_top__ConstPool__TABLE_hf62526c6_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vmain_top__ConstPool__TABLE_h866776ce_0;

VL_INLINE_OPT void Vmain_top___024root___combo__TOP__0(Vmain_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root___combo__TOP__0\n"); );
    // Init
    SData/*12:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->main_top__DOT__ZeroFlag) 
                     << 0xcU) | (((IData)(vlSelf->main_top__DOT__NegativeFlag) 
                                  << 0xbU) | (((IData)(vlSelf->main_top__DOT__UnsignedLess) 
                                               << 0xaU) 
                                              | ((0x380U 
                                                  & (vlSelf->main_top__DOT__instr 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & vlSelf->main_top__DOT__instr)))));
    vlSelf->main_top__DOT__ALUop = Vmain_top__ConstPool__TABLE_hb51b31ac_0
        [__Vtableidx1];
    vlSelf->main_top__DOT__ResultSrc = Vmain_top__ConstPool__TABLE_hffbac355_0
        [__Vtableidx1];
    vlSelf->main_top__DOT__MemWrite = Vmain_top__ConstPool__TABLE_h53dd93db_0
        [__Vtableidx1];
    vlSelf->main_top__DOT__ALUSrc = Vmain_top__ConstPool__TABLE_h13b86d95_0
        [__Vtableidx1];
    vlSelf->main_top__DOT____Vcellout__ControlUnit__ImmSrc 
        = Vmain_top__ConstPool__TABLE_hb065c7f9_0[__Vtableidx1];
    vlSelf->main_top__DOT__RegWrite = Vmain_top__ConstPool__TABLE_hc4c3ee54_0
        [__Vtableidx1];
    if ((0x40U & Vmain_top__ConstPool__TABLE_hae30f990_0
         [__Vtableidx1])) {
        vlSelf->main_top__DOT__PCSrc = Vmain_top__ConstPool__TABLE_hf62526c6_0
            [__Vtableidx1];
    }
    vlSelf->main_top__DOT__SrcB = ((IData)(vlSelf->main_top__DOT__ALUSrc)
                                    ? vlSelf->main_top__DOT__ImmExt
                                    : vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
                                   [(0x1fU & (vlSelf->main_top__DOT__instr 
                                              >> 0x14U))]);
    __Vtableidx2 = ((0x40U & (vlSelf->main_top__DOT__instr 
                              >> 0x18U)) | ((0x38U 
                                             & (vlSelf->main_top__DOT__instr 
                                                >> 9U)) 
                                            | (IData)(vlSelf->main_top__DOT__ALUop)));
    vlSelf->main_top__DOT__ALUCtrl = Vmain_top__ConstPool__TABLE_h866776ce_0
        [__Vtableidx2];
    vlSelf->main_top__DOT__ALUResult = ((8U & (IData)(vlSelf->main_top__DOT__ALUCtrl))
                                         ? ((4U & (IData)(vlSelf->main_top__DOT__ALUCtrl))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelf->main_top__DOT__ALUCtrl))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->main_top__DOT__ALUCtrl))
                                               ? ((vlSelf->main_top__DOT__RD1 
                                                   < vlSelf->main_top__DOT__SrcB)
                                                   ? 1U
                                                   : 0U)
                                               : ((vlSelf->main_top__DOT__RD1 
                                                   < vlSelf->main_top__DOT__SrcB)
                                                   ? 1U
                                                   : 0U))))
                                         : ((4U & (IData)(vlSelf->main_top__DOT__ALUCtrl))
                                             ? ((2U 
                                                 & (IData)(vlSelf->main_top__DOT__ALUCtrl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->main_top__DOT__ALUCtrl))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, vlSelf->main_top__DOT__RD1, 
                                                                (0x1fU 
                                                                 & vlSelf->main_top__DOT__SrcB))
                                                  : 
                                                 (vlSelf->main_top__DOT__RD1 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->main_top__DOT__SrcB)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->main_top__DOT__ALUCtrl))
                                                  ? 
                                                 (vlSelf->main_top__DOT__RD1 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->main_top__DOT__SrcB))
                                                  : 
                                                 (vlSelf->main_top__DOT__RD1 
                                                  ^ vlSelf->main_top__DOT__SrcB)))
                                             : ((2U 
                                                 & (IData)(vlSelf->main_top__DOT__ALUCtrl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->main_top__DOT__ALUCtrl))
                                                  ? 
                                                 (vlSelf->main_top__DOT__RD1 
                                                  | vlSelf->main_top__DOT__SrcB)
                                                  : 
                                                 (vlSelf->main_top__DOT__RD1 
                                                  & vlSelf->main_top__DOT__SrcB))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->main_top__DOT__ALUCtrl))
                                                  ? 
                                                 (vlSelf->main_top__DOT__RD1 
                                                  - vlSelf->main_top__DOT__SrcB)
                                                  : 
                                                 (vlSelf->main_top__DOT__RD1 
                                                  + vlSelf->main_top__DOT__SrcB)))));
    vlSelf->main_top__DOT__ZeroFlag = (0U == vlSelf->main_top__DOT__ALUResult);
    vlSelf->main_top__DOT__NegativeFlag = (vlSelf->main_top__DOT__ALUResult 
                                           >> 0x1fU);
    if ((9U == (IData)(vlSelf->main_top__DOT__ALUCtrl))) {
        vlSelf->main_top__DOT__UnsignedLess = (1U & vlSelf->main_top__DOT__ALUResult);
    }
    vlSelf->main_top__DOT__PCN = ((0U == (IData)(vlSelf->main_top__DOT__PCSrc))
                                   ? ((IData)(4U) + vlSelf->main_top__DOT__PC)
                                   : ((1U == (IData)(vlSelf->main_top__DOT__PCSrc))
                                       ? (vlSelf->main_top__DOT__PC 
                                          + vlSelf->main_top__DOT__ImmExt)
                                       : ((3U == (IData)(vlSelf->main_top__DOT__PCSrc))
                                           ? vlSelf->main_top__DOT__ALUResult
                                           : ((IData)(4U) 
                                              + vlSelf->main_top__DOT__PC))));
    vlSelf->main_top__DOT__DataMemory__DOT__AdM = (0xfffffU 
                                                   & vlSelf->main_top__DOT__ALUResult);
    vlSelf->main_top__DOT__ReadData = ((0x4000U & vlSelf->main_top__DOT__instr)
                                        ? ((0x2000U 
                                            & vlSelf->main_top__DOT__instr)
                                            ? ((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                [vlSelf->main_top__DOT__DataMemory__DOT__AdM] 
                                                << 0x18U) 
                                               | ((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                   [
                                                   (0xfffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->main_top__DOT__DataMemory__DOT__AdM))] 
                                                   << 0x10U) 
                                                  | ((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                      [
                                                      (0xfffffU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->main_top__DOT__DataMemory__DOT__AdM))] 
                                                      << 8U) 
                                                     | vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                     [
                                                     (0xfffffU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->main_top__DOT__DataMemory__DOT__AdM))])))
                                            : ((0x1000U 
                                                & vlSelf->main_top__DOT__instr)
                                                ? (
                                                   (vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                    [vlSelf->main_top__DOT__DataMemory__DOT__AdM] 
                                                    << 8U) 
                                                   | vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                   [
                                                   (0xfffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->main_top__DOT__DataMemory__DOT__AdM))])
                                                : vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                               [vlSelf->main_top__DOT__DataMemory__DOT__AdM]))
                                        : ((0x2000U 
                                            & vlSelf->main_top__DOT__instr)
                                            ? ((0x1000U 
                                                & vlSelf->main_top__DOT__instr)
                                                ? (
                                                   (vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                    [vlSelf->main_top__DOT__DataMemory__DOT__AdM] 
                                                    << 0x18U) 
                                                   | ((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->main_top__DOT__DataMemory__DOT__AdM))] 
                                                       << 0x10U) 
                                                      | ((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                          [
                                                          (0xfffffU 
                                                           & ((IData)(2U) 
                                                              + vlSelf->main_top__DOT__DataMemory__DOT__AdM))] 
                                                          << 8U) 
                                                         | vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                         [
                                                         (0xfffffU 
                                                          & ((IData)(3U) 
                                                             + vlSelf->main_top__DOT__DataMemory__DOT__AdM))])))
                                                : (
                                                   (vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                    [vlSelf->main_top__DOT__DataMemory__DOT__AdM] 
                                                    << 0x18U) 
                                                   | ((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->main_top__DOT__DataMemory__DOT__AdM))] 
                                                       << 0x10U) 
                                                      | ((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                          [
                                                          (0xfffffU 
                                                           & ((IData)(2U) 
                                                              + vlSelf->main_top__DOT__DataMemory__DOT__AdM))] 
                                                          << 8U) 
                                                         | vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                         [
                                                         (0xfffffU 
                                                          & ((IData)(3U) 
                                                             + vlSelf->main_top__DOT__DataMemory__DOT__AdM))]))))
                                            : ((0x1000U 
                                                & vlSelf->main_top__DOT__instr)
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                                   [vlSelf->main_top__DOT__DataMemory__DOT__AdM] 
                                                                   >> 7U)))) 
                                                    << 0x10U) 
                                                   | ((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                       [vlSelf->main_top__DOT__DataMemory__DOT__AdM] 
                                                       << 8U) 
                                                      | vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                      [
                                                      (0xfffffU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->main_top__DOT__DataMemory__DOT__AdM))]))
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                                   [vlSelf->main_top__DOT__DataMemory__DOT__AdM] 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                                   [vlSelf->main_top__DOT__DataMemory__DOT__AdM]))));
    if ((1U & (IData)(vlSelf->main_top__DOT__ResultSrc))) {
        if ((1U & (IData)(vlSelf->main_top__DOT__ResultSrc))) {
            vlSelf->Result = vlSelf->main_top__DOT__ReadData;
        }
    } else {
        vlSelf->Result = vlSelf->main_top__DOT__ALUResult;
    }
}

void Vmain_top___024root___eval(Vmain_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vmain_top___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vmain_top___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vmain_top___024root___change_request_1(Vmain_top___024root* vlSelf);

VL_INLINE_OPT QData Vmain_top___024root___change_request(Vmain_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root___change_request\n"); );
    // Body
    return (Vmain_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vmain_top___024root___change_request_1(Vmain_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->main_top__DOT__ZeroFlag ^ vlSelf->__Vchglast__TOP__main_top__DOT__ZeroFlag)
         | (vlSelf->main_top__DOT__NegativeFlag ^ vlSelf->__Vchglast__TOP__main_top__DOT__NegativeFlag)
         | (vlSelf->main_top__DOT__UnsignedLess ^ vlSelf->__Vchglast__TOP__main_top__DOT__UnsignedLess));
    VL_DEBUG_IF( if(__req && ((vlSelf->main_top__DOT__ZeroFlag ^ vlSelf->__Vchglast__TOP__main_top__DOT__ZeroFlag))) VL_DBG_MSGF("        CHANGE: main_top.sv:58: main_top.ZeroFlag\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->main_top__DOT__NegativeFlag ^ vlSelf->__Vchglast__TOP__main_top__DOT__NegativeFlag))) VL_DBG_MSGF("        CHANGE: main_top.sv:58: main_top.NegativeFlag\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->main_top__DOT__UnsignedLess ^ vlSelf->__Vchglast__TOP__main_top__DOT__UnsignedLess))) VL_DBG_MSGF("        CHANGE: main_top.sv:58: main_top.UnsignedLess\n"); );
    // Final
    vlSelf->__Vchglast__TOP__main_top__DOT__ZeroFlag 
        = vlSelf->main_top__DOT__ZeroFlag;
    vlSelf->__Vchglast__TOP__main_top__DOT__NegativeFlag 
        = vlSelf->main_top__DOT__NegativeFlag;
    vlSelf->__Vchglast__TOP__main_top__DOT__UnsignedLess 
        = vlSelf->main_top__DOT__UnsignedLess;
    return __req;
}

#ifdef VL_DEBUG
void Vmain_top___024root___eval_debug_assertions(Vmain_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
