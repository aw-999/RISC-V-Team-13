// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain_top.h for the primary calling header

#include "verilated.h"

#include "Vmain_top___024root.h"

VL_ATTR_COLD void Vmain_top___024root___initial__TOP__0(Vmain_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3a032bfe__0;
    VlWide<3>/*95:0*/ __Vtemp_h3a032bfe__1;
    // Body
    __Vtemp_h3a032bfe__0[0U] = 0x2e686578U;
    __Vtemp_h3a032bfe__0[1U] = 0x6772616dU;
    __Vtemp_h3a032bfe__0[2U] = 0x70726fU;
    VL_READMEM_N(true, 8, 1048576, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h3a032bfe__0)
                 ,  &(vlSelf->main_top__DOT__DataMemory__DOT__RamArray)
                 , 0, ~0ULL);
    __Vtemp_h3a032bfe__1[0U] = 0x2e686578U;
    __Vtemp_h3a032bfe__1[1U] = 0x6772616dU;
    __Vtemp_h3a032bfe__1[2U] = 0x70726fU;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h3a032bfe__1)
                 ,  &(vlSelf->main_top__DOT__InstructionMemory__DOT__RomArr)
                 , 0, ~0ULL);
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

VL_ATTR_COLD void Vmain_top___024root___settle__TOP__0(Vmain_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root___settle__TOP__0\n"); );
    // Init
    SData/*12:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    // Body
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

VL_ATTR_COLD void Vmain_top___024root___eval_initial(Vmain_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root___eval_initial\n"); );
    // Body
    Vmain_top___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vmain_top___024root___eval_settle(Vmain_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root___eval_settle\n"); );
    // Body
    Vmain_top___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vmain_top___024root___final(Vmain_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root___final\n"); );
}

VL_ATTR_COLD void Vmain_top___024root___ctor_var_reset(Vmain_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->Result = VL_RAND_RESET_I(32);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->a1 = VL_RAND_RESET_I(32);
    vlSelf->a2 = VL_RAND_RESET_I(32);
    vlSelf->a3 = VL_RAND_RESET_I(32);
    vlSelf->a4 = VL_RAND_RESET_I(32);
    vlSelf->a5 = VL_RAND_RESET_I(32);
    vlSelf->a6 = VL_RAND_RESET_I(32);
    vlSelf->a7 = VL_RAND_RESET_I(32);
    vlSelf->s0 = VL_RAND_RESET_I(32);
    vlSelf->s1 = VL_RAND_RESET_I(32);
    vlSelf->s2 = VL_RAND_RESET_I(32);
    vlSelf->s3 = VL_RAND_RESET_I(32);
    vlSelf->s4 = VL_RAND_RESET_I(32);
    vlSelf->s5 = VL_RAND_RESET_I(32);
    vlSelf->s6 = VL_RAND_RESET_I(32);
    vlSelf->s7 = VL_RAND_RESET_I(32);
    vlSelf->s8 = VL_RAND_RESET_I(32);
    vlSelf->s9 = VL_RAND_RESET_I(32);
    vlSelf->s10 = VL_RAND_RESET_I(32);
    vlSelf->s11 = VL_RAND_RESET_I(32);
    vlSelf->t0 = VL_RAND_RESET_I(32);
    vlSelf->t1 = VL_RAND_RESET_I(32);
    vlSelf->t2 = VL_RAND_RESET_I(32);
    vlSelf->t3 = VL_RAND_RESET_I(32);
    vlSelf->t4 = VL_RAND_RESET_I(32);
    vlSelf->t5 = VL_RAND_RESET_I(32);
    vlSelf->t6 = VL_RAND_RESET_I(32);
    vlSelf->main_top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->main_top__DOT__PCN = VL_RAND_RESET_I(32);
    vlSelf->main_top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->main_top__DOT__ImmExt = VL_RAND_RESET_I(32);
    vlSelf->main_top__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->main_top__DOT__SrcB = VL_RAND_RESET_I(32);
    vlSelf->main_top__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->main_top__DOT__ReadData = VL_RAND_RESET_I(32);
    vlSelf->main_top__DOT__DIn = VL_RAND_RESET_I(32);
    vlSelf->main_top__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->main_top__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->main_top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->main_top__DOT__PCSrc = VL_RAND_RESET_I(2);
    vlSelf->main_top__DOT__ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->main_top__DOT__IMMsrc = VL_RAND_RESET_I(3);
    vlSelf->main_top__DOT__ALUop = VL_RAND_RESET_I(3);
    vlSelf->main_top__DOT__ALUCtrl = VL_RAND_RESET_I(4);
    vlSelf->main_top__DOT__ZeroFlag = VL_RAND_RESET_I(1);
    vlSelf->main_top__DOT__NegativeFlag = VL_RAND_RESET_I(1);
    vlSelf->main_top__DOT__UnsignedLess = VL_RAND_RESET_I(1);
    vlSelf->main_top__DOT____Vcellout__ControlUnit__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->main_top__DOT__TRIGGER = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->main_top__DOT__InstructionMemory__DOT__RomArr[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->main_top__DOT__DataMemory__DOT__RamArray[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->main_top__DOT__DataMemory__DOT__AdM = VL_RAND_RESET_I(20);
    vlSelf->__Vchglast__TOP__main_top__DOT__ZeroFlag = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__main_top__DOT__NegativeFlag = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__main_top__DOT__UnsignedLess = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
