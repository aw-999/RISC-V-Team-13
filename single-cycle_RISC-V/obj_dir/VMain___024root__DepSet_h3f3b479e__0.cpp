// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "VMain__pch.h"
#include "VMain___024root.h"

void VMain___024root___eval_act(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void VMain___024root___nba_sequent__TOP__0(VMain___024root* vlSelf);

void VMain___024root___eval_nba(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMain___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 128> VMain__ConstPool__TABLE_hf299bc9d_0;

VL_INLINE_OPT void VMain___024root___nba_sequent__TOP__0(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __VdlyVal__Main__DOT__M1__DOT__RamArray__v0;
    __VdlyVal__Main__DOT__M1__DOT__RamArray__v0 = 0;
    IData/*19:0*/ __VdlyDim0__Main__DOT__M1__DOT__RamArray__v0;
    __VdlyDim0__Main__DOT__M1__DOT__RamArray__v0 = 0;
    CData/*7:0*/ __VdlyVal__Main__DOT__M1__DOT__RamArray__v1;
    __VdlyVal__Main__DOT__M1__DOT__RamArray__v1 = 0;
    IData/*19:0*/ __VdlyDim0__Main__DOT__M1__DOT__RamArray__v1;
    __VdlyDim0__Main__DOT__M1__DOT__RamArray__v1 = 0;
    CData/*7:0*/ __VdlyVal__Main__DOT__M1__DOT__RamArray__v2;
    __VdlyVal__Main__DOT__M1__DOT__RamArray__v2 = 0;
    IData/*19:0*/ __VdlyDim0__Main__DOT__M1__DOT__RamArray__v2;
    __VdlyDim0__Main__DOT__M1__DOT__RamArray__v2 = 0;
    CData/*7:0*/ __VdlyVal__Main__DOT__M1__DOT__RamArray__v3;
    __VdlyVal__Main__DOT__M1__DOT__RamArray__v3 = 0;
    IData/*19:0*/ __VdlyDim0__Main__DOT__M1__DOT__RamArray__v3;
    __VdlyDim0__Main__DOT__M1__DOT__RamArray__v3 = 0;
    CData/*7:0*/ __VdlyVal__Main__DOT__M1__DOT__RamArray__v4;
    __VdlyVal__Main__DOT__M1__DOT__RamArray__v4 = 0;
    IData/*19:0*/ __VdlyDim0__Main__DOT__M1__DOT__RamArray__v4;
    __VdlyDim0__Main__DOT__M1__DOT__RamArray__v4 = 0;
    CData/*7:0*/ __VdlyVal__Main__DOT__M1__DOT__RamArray__v5;
    __VdlyVal__Main__DOT__M1__DOT__RamArray__v5 = 0;
    IData/*19:0*/ __VdlyDim0__Main__DOT__M1__DOT__RamArray__v5;
    __VdlyDim0__Main__DOT__M1__DOT__RamArray__v5 = 0;
    CData/*7:0*/ __VdlyVal__Main__DOT__M1__DOT__RamArray__v6;
    __VdlyVal__Main__DOT__M1__DOT__RamArray__v6 = 0;
    IData/*19:0*/ __VdlyDim0__Main__DOT__M1__DOT__RamArray__v6;
    __VdlyDim0__Main__DOT__M1__DOT__RamArray__v6 = 0;
    IData/*31:0*/ __VdlyVal__Main__DOT__M4__DOT__RegArray__v0;
    __VdlyVal__Main__DOT__M4__DOT__RegArray__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Main__DOT__M4__DOT__RegArray__v0;
    __VdlyDim0__Main__DOT__M4__DOT__RegArray__v0 = 0;
    CData/*0:0*/ __VdlySet__Main__DOT__M1__DOT__RamArray__v0;
    __VdlySet__Main__DOT__M1__DOT__RamArray__v0 = 0;
    CData/*0:0*/ __VdlySet__Main__DOT__M1__DOT__RamArray__v4;
    __VdlySet__Main__DOT__M1__DOT__RamArray__v4 = 0;
    CData/*0:0*/ __VdlySet__Main__DOT__M1__DOT__RamArray__v6;
    __VdlySet__Main__DOT__M1__DOT__RamArray__v6 = 0;
    CData/*0:0*/ __VdlySet__Main__DOT__M4__DOT__RegArray__v0;
    __VdlySet__Main__DOT__M4__DOT__RegArray__v0 = 0;
    CData/*0:0*/ __VdlySet__Main__DOT__M4__DOT__RegArray__v1;
    __VdlySet__Main__DOT__M4__DOT__RegArray__v1 = 0;
    // Body
    __VdlySet__Main__DOT__M1__DOT__RamArray__v0 = 0U;
    __VdlySet__Main__DOT__M1__DOT__RamArray__v4 = 0U;
    __VdlySet__Main__DOT__M1__DOT__RamArray__v6 = 0U;
    __VdlySet__Main__DOT__M4__DOT__RegArray__v0 = 0U;
    __VdlySet__Main__DOT__M4__DOT__RegArray__v1 = 0U;
    if ((0x23U == (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
        if ((2U == (3U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C1__func3)))) {
            __VdlyVal__Main__DOT__M1__DOT__RamArray__v0 
                = (vlSelfRef.Main__DOT__DOutReg2 >> 0x18U);
            __VdlyDim0__Main__DOT__M1__DOT__RamArray__v0 
                = vlSelfRef.Main__DOT__M1__DOT__Ad;
            __VdlySet__Main__DOT__M1__DOT__RamArray__v0 = 1U;
            __VdlyVal__Main__DOT__M1__DOT__RamArray__v1 
                = (0xffU & (vlSelfRef.Main__DOT__DOutReg2 
                            >> 0x10U));
            __VdlyDim0__Main__DOT__M1__DOT__RamArray__v1 
                = (0xfffffU & ((IData)(1U) + vlSelfRef.Main__DOT__M1__DOT__Ad));
            __VdlyVal__Main__DOT__M1__DOT__RamArray__v2 
                = (0xffU & (vlSelfRef.Main__DOT__DOutReg2 
                            >> 8U));
            __VdlyDim0__Main__DOT__M1__DOT__RamArray__v2 
                = (0xfffffU & ((IData)(2U) + vlSelfRef.Main__DOT__M1__DOT__Ad));
            __VdlyVal__Main__DOT__M1__DOT__RamArray__v3 
                = (0xffU & vlSelfRef.Main__DOT__DOutReg2);
            __VdlyDim0__Main__DOT__M1__DOT__RamArray__v3 
                = (0xfffffU & ((IData)(3U) + vlSelfRef.Main__DOT__M1__DOT__Ad));
        } else if ((1U == (3U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C1__func3)))) {
            __VdlyVal__Main__DOT__M1__DOT__RamArray__v4 
                = (0xffU & (vlSelfRef.Main__DOT__DOutReg2 
                            >> 8U));
            __VdlyDim0__Main__DOT__M1__DOT__RamArray__v4 
                = vlSelfRef.Main__DOT__M1__DOT__Ad;
            __VdlySet__Main__DOT__M1__DOT__RamArray__v4 = 1U;
            __VdlyVal__Main__DOT__M1__DOT__RamArray__v5 
                = (0xffU & vlSelfRef.Main__DOT__DOutReg2);
            __VdlyDim0__Main__DOT__M1__DOT__RamArray__v5 
                = (0xfffffU & ((IData)(1U) + vlSelfRef.Main__DOT__M1__DOT__Ad));
        } else if ((0U == (3U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C1__func3)))) {
            __VdlyVal__Main__DOT__M1__DOT__RamArray__v6 
                = (0xffU & vlSelfRef.Main__DOT__DOutReg2);
            __VdlyDim0__Main__DOT__M1__DOT__RamArray__v6 
                = vlSelfRef.Main__DOT__M1__DOT__Ad;
            __VdlySet__Main__DOT__M1__DOT__RamArray__v6 = 1U;
        }
    }
    if (((IData)(vlSelfRef.Main__DOT__RegWrite) & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_0) 
                                                       >> 7U))))) {
        __VdlyVal__Main__DOT__M4__DOT__RegArray__v0 
            = ((2U & (IData)(vlSelfRef.Main__DOT__ResultSrc))
                ? ((1U & (IData)(vlSelfRef.Main__DOT__ResultSrc))
                    ? vlSelfRef.Main__DOT__PCaddIMM
                    : ((IData)(4U) + vlSelfRef.Main__DOT__PC))
                : ((1U & (IData)(vlSelfRef.Main__DOT__ResultSrc))
                    ? vlSelfRef.Main__DOT__DOutDM : vlSelfRef.Main__DOT__DOutAlu));
        __VdlyDim0__Main__DOT__M4__DOT__RegArray__v0 
            = (0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_0) 
                        >> 7U));
        __VdlySet__Main__DOT__M4__DOT__RegArray__v0 = 1U;
    }
    if (vlSelfRef.Main__DOT__M4__DOT__trigger) {
        __VdlySet__Main__DOT__M4__DOT__RegArray__v1 = 1U;
    }
    if (__VdlySet__Main__DOT__M1__DOT__RamArray__v0) {
        vlSelfRef.Main__DOT__M1__DOT__RamArray[__VdlyDim0__Main__DOT__M1__DOT__RamArray__v0] 
            = __VdlyVal__Main__DOT__M1__DOT__RamArray__v0;
        vlSelfRef.Main__DOT__M1__DOT__RamArray[__VdlyDim0__Main__DOT__M1__DOT__RamArray__v1] 
            = __VdlyVal__Main__DOT__M1__DOT__RamArray__v1;
        vlSelfRef.Main__DOT__M1__DOT__RamArray[__VdlyDim0__Main__DOT__M1__DOT__RamArray__v2] 
            = __VdlyVal__Main__DOT__M1__DOT__RamArray__v2;
        vlSelfRef.Main__DOT__M1__DOT__RamArray[__VdlyDim0__Main__DOT__M1__DOT__RamArray__v3] 
            = __VdlyVal__Main__DOT__M1__DOT__RamArray__v3;
    }
    if (__VdlySet__Main__DOT__M1__DOT__RamArray__v4) {
        vlSelfRef.Main__DOT__M1__DOT__RamArray[__VdlyDim0__Main__DOT__M1__DOT__RamArray__v4] 
            = __VdlyVal__Main__DOT__M1__DOT__RamArray__v4;
        vlSelfRef.Main__DOT__M1__DOT__RamArray[__VdlyDim0__Main__DOT__M1__DOT__RamArray__v5] 
            = __VdlyVal__Main__DOT__M1__DOT__RamArray__v5;
    }
    if (__VdlySet__Main__DOT__M1__DOT__RamArray__v6) {
        vlSelfRef.Main__DOT__M1__DOT__RamArray[__VdlyDim0__Main__DOT__M1__DOT__RamArray__v6] 
            = __VdlyVal__Main__DOT__M1__DOT__RamArray__v6;
    }
    if (__VdlySet__Main__DOT__M4__DOT__RegArray__v0) {
        vlSelfRef.Main__DOT__M4__DOT__RegArray[__VdlyDim0__Main__DOT__M4__DOT__RegArray__v0] 
            = __VdlyVal__Main__DOT__M4__DOT__RegArray__v0;
    }
    if (__VdlySet__Main__DOT__M4__DOT__RegArray__v1) {
        vlSelfRef.Main__DOT__M4__DOT__RegArray[5U] = 1U;
    }
    vlSelfRef.A0 = vlSelfRef.Main__DOT__M4__DOT__RegArray
        [0xaU];
    vlSelfRef.Main__DOT__PC = ((IData)(vlSelfRef.rst)
                                ? 0U : vlSelfRef.Main__DOT__PCN);
    vlSelfRef.Main__DOT____Vcellinp__C1__func3 = (7U 
                                                  & (vlSelfRef.Main__DOT__M2__DOT__RomArray
                                                     [
                                                     (0xffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelfRef.Main__DOT__PC))] 
                                                     >> 4U));
    vlSelfRef.__VdfgRegularize_h6171c202_0_0 = ((vlSelfRef.Main__DOT__M2__DOT__RomArray
                                                 [(0xffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.Main__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelfRef.Main__DOT__M2__DOT__RomArray
                                                [(0xffffU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.Main__DOT__PC))]);
    vlSelfRef.Main__DOT____Vcellinp__C2__Opcode = (0x7fU 
                                                   & vlSelfRef.Main__DOT__M2__DOT__RomArray
                                                   [
                                                   (0xffffU 
                                                    & ((IData)(3U) 
                                                       + vlSelfRef.Main__DOT__PC))]);
    vlSelfRef.__VdfgRegularize_h6171c202_0_1 = ((vlSelfRef.Main__DOT__M2__DOT__RomArray
                                                 [(0xffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.Main__DOT__PC))] 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_0));
    vlSelfRef.Main__DOT__ResultSrc = ((3U == (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                       ? 1U : ((0x6fU 
                                                == (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                                ? 2U
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                                    ? 3U
                                                    : 0U)));
    if ((0x40U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
        vlSelfRef.Main__DOT__RegWrite = ((1U & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                >> 5U)) 
                                         && ((1U & 
                                              (~ ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                  >> 4U))) 
                                             && ((8U 
                                                  & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                      >> 2U)) 
                                                  && ((1U 
                                                       & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                      >> 2U)) 
                                                  && ((1U 
                                                       & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode)))))));
        vlSelfRef.Main__DOT__ALUsrc = ((1U & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                              >> 5U)) 
                                       && ((1U & (~ 
                                                  ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                   >> 4U))) 
                                           && ((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                    >> 3U))) 
                                               && ((1U 
                                                    & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                       >> 2U)) 
                                                   && ((1U 
                                                        & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                           >> 1U)) 
                                                       && (1U 
                                                           & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode)))))));
        if ((0x20U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
            if ((0x10U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                vlSelfRef.Main__DOT__ALUop = 0U;
                vlSelfRef.Main__DOT__IMMctrl = 0U;
                vlSelfRef.Main__DOT__PCsrc = 0U;
            } else if ((8U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                vlSelfRef.Main__DOT__ALUop = 0U;
                if ((4U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                    if ((2U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                        if ((1U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                            vlSelfRef.Main__DOT__IMMctrl = 4U;
                            vlSelfRef.Main__DOT__PCsrc = 1U;
                        } else {
                            vlSelfRef.Main__DOT__IMMctrl = 0U;
                            vlSelfRef.Main__DOT__PCsrc = 0U;
                        }
                    } else {
                        vlSelfRef.Main__DOT__IMMctrl = 0U;
                        vlSelfRef.Main__DOT__PCsrc = 0U;
                    }
                } else {
                    vlSelfRef.Main__DOT__IMMctrl = 0U;
                    vlSelfRef.Main__DOT__PCsrc = 0U;
                }
            } else if ((4U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                vlSelfRef.Main__DOT__ALUop = 0U;
                vlSelfRef.Main__DOT__IMMctrl = 0U;
                vlSelfRef.Main__DOT__PCsrc = ((2U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                                   ? 2U
                                                   : 0U)
                                               : 0U);
            } else if ((2U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                if ((1U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                    vlSelfRef.Main__DOT__ALUop = 1U;
                    vlSelfRef.Main__DOT__IMMctrl = 2U;
                    vlSelfRef.Main__DOT__PCsrc = 3U;
                } else {
                    vlSelfRef.Main__DOT__ALUop = 0U;
                    vlSelfRef.Main__DOT__IMMctrl = 0U;
                    vlSelfRef.Main__DOT__PCsrc = 0U;
                }
            } else {
                vlSelfRef.Main__DOT__ALUop = 0U;
                vlSelfRef.Main__DOT__IMMctrl = 0U;
                vlSelfRef.Main__DOT__PCsrc = 0U;
            }
        } else {
            vlSelfRef.Main__DOT__ALUop = 0U;
            vlSelfRef.Main__DOT__IMMctrl = 0U;
            vlSelfRef.Main__DOT__PCsrc = 0U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
        vlSelfRef.Main__DOT__RegWrite = ((1U & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                >> 4U)) 
                                         && ((1U & 
                                              (~ ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                  >> 3U))) 
                                             && ((4U 
                                                  & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode)))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))))));
        if ((0x10U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
            vlSelfRef.Main__DOT__ALUsrc = ((1U & (~ 
                                                  ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                   >> 3U))) 
                                           && ((1U 
                                                & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                   >> 2U)) 
                                               && ((1U 
                                                    & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                       >> 1U)) 
                                                   && (1U 
                                                       & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode)))));
            if ((8U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                vlSelfRef.Main__DOT__ALUop = 0U;
                vlSelfRef.Main__DOT__IMMctrl = 0U;
            } else if ((4U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                if ((2U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                    if ((1U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                        vlSelfRef.Main__DOT__ALUop = 3U;
                        vlSelfRef.Main__DOT__IMMctrl = 3U;
                    } else {
                        vlSelfRef.Main__DOT__ALUop = 0U;
                        vlSelfRef.Main__DOT__IMMctrl = 0U;
                    }
                } else {
                    vlSelfRef.Main__DOT__ALUop = 0U;
                    vlSelfRef.Main__DOT__IMMctrl = 0U;
                }
            } else {
                vlSelfRef.Main__DOT__ALUop = ((2U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                                   ? 2U
                                                   : 0U)
                                               : 0U);
                vlSelfRef.Main__DOT__IMMctrl = 0U;
            }
        } else {
            vlSelfRef.Main__DOT__ALUsrc = ((1U & (~ 
                                                  ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                   >> 3U))) 
                                           && ((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                    >> 2U))) 
                                               && ((1U 
                                                    & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                       >> 1U)) 
                                                   && (1U 
                                                       & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode)))));
            vlSelfRef.Main__DOT__ALUop = 0U;
            vlSelfRef.Main__DOT__IMMctrl = ((8U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                             ? 0U : 
                                            ((4U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                                   ? 1U
                                                   : 0U)
                                               : 0U)));
        }
        vlSelfRef.Main__DOT__PCsrc = 0U;
    } else if ((0x10U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
        if ((8U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
            vlSelfRef.Main__DOT__RegWrite = ((1U & 
                                              (~ ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                  >> 2U))) 
                                             && ((1U 
                                                  & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))));
            vlSelfRef.Main__DOT__ALUsrc = ((1U & (~ 
                                                  ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                   >> 2U))) 
                                           && ((1U 
                                                & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                   >> 1U)) 
                                               && (1U 
                                                   & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))));
            vlSelfRef.Main__DOT__ALUop = 0U;
            vlSelfRef.Main__DOT__IMMctrl = 0U;
            vlSelfRef.Main__DOT__PCsrc = 0U;
        } else {
            if ((4U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                vlSelfRef.Main__DOT__RegWrite = ((1U 
                                                  & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode)));
                if ((2U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                    if ((1U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))) {
                        vlSelfRef.Main__DOT__ALUop = 3U;
                        vlSelfRef.Main__DOT__IMMctrl = 3U;
                        vlSelfRef.Main__DOT__PCsrc = 1U;
                    } else {
                        vlSelfRef.Main__DOT__ALUop = 0U;
                        vlSelfRef.Main__DOT__IMMctrl = 0U;
                        vlSelfRef.Main__DOT__PCsrc = 0U;
                    }
                } else {
                    vlSelfRef.Main__DOT__ALUop = 0U;
                    vlSelfRef.Main__DOT__IMMctrl = 0U;
                    vlSelfRef.Main__DOT__PCsrc = 0U;
                }
            } else {
                vlSelfRef.Main__DOT__RegWrite = ((1U 
                                                  & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode)));
                vlSelfRef.Main__DOT__ALUop = ((2U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))
                                                   ? 2U
                                                   : 0U)
                                               : 0U);
                vlSelfRef.Main__DOT__IMMctrl = 0U;
                vlSelfRef.Main__DOT__PCsrc = 0U;
            }
            vlSelfRef.Main__DOT__ALUsrc = ((1U & (~ 
                                                  ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                   >> 2U))) 
                                           && ((1U 
                                                & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                   >> 1U)) 
                                               && (1U 
                                                   & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode))));
        }
    } else {
        vlSelfRef.Main__DOT__RegWrite = ((1U & (~ ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                   >> 3U))) 
                                         && ((1U & 
                                              (~ ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                  >> 2U))) 
                                             && ((1U 
                                                  & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode)))));
        vlSelfRef.Main__DOT__ALUsrc = ((1U & (~ ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                 >> 3U))) 
                                       && ((1U & (~ 
                                                  ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                   >> 2U))) 
                                           && ((1U 
                                                & ((IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode) 
                                                   >> 1U)) 
                                               && (1U 
                                                   & (IData)(vlSelfRef.Main__DOT____Vcellinp__C2__Opcode)))));
        vlSelfRef.Main__DOT__ALUop = 0U;
        vlSelfRef.Main__DOT__IMMctrl = 0U;
        vlSelfRef.Main__DOT__PCsrc = 0U;
    }
    vlSelfRef.Main__DOT__DOutReg1 = vlSelfRef.Main__DOT__M4__DOT__RegArray
        [(0x1fU & (vlSelfRef.__VdfgRegularize_h6171c202_0_1 
                   >> 0xfU))];
    vlSelfRef.Main__DOT__instr = ((vlSelfRef.Main__DOT__M2__DOT__RomArray
                                   [(0xffffU & vlSelfRef.Main__DOT__PC)] 
                                   << 0x18U) | vlSelfRef.__VdfgRegularize_h6171c202_0_1);
    __Vtableidx1 = ((0x40U & vlSelfRef.Main__DOT__M2__DOT__RomArray
                     [(0xffffU & vlSelfRef.Main__DOT__PC)]) 
                    | ((0x20U & vlSelfRef.Main__DOT__M2__DOT__RomArray
                        [(0xffffU & ((IData)(3U) + vlSelfRef.Main__DOT__PC))]) 
                       | (((IData)(vlSelfRef.Main__DOT____Vcellinp__C1__func3) 
                           << 2U) | (IData)(vlSelfRef.Main__DOT__ALUop))));
    vlSelfRef.Main__DOT__ALUctrl = VMain__ConstPool__TABLE_hf299bc9d_0
        [__Vtableidx1];
    vlSelfRef.Main__DOT__DOutReg2 = vlSelfRef.Main__DOT__M4__DOT__RegArray
        [(0x1fU & (vlSelfRef.Main__DOT__instr >> 0x14U))];
    vlSelfRef.Main__DOT__IMM = ((4U & (IData)(vlSelfRef.Main__DOT__IMMctrl))
                                 ? ((2U & (IData)(vlSelfRef.Main__DOT__IMMctrl))
                                     ? (((- (IData)(
                                                    (vlSelfRef.Main__DOT__instr 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelfRef.Main__DOT__instr 
                                         >> 0x14U))
                                     : ((1U & (IData)(vlSelfRef.Main__DOT__IMMctrl))
                                         ? (((- (IData)(
                                                        (vlSelfRef.Main__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelfRef.Main__DOT__instr 
                                               >> 0x14U))
                                         : (((- (IData)(
                                                        (vlSelfRef.Main__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0x15U) 
                                            | ((0x100000U 
                                                & (vlSelfRef.Main__DOT__instr 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelfRef.Main__DOT__instr) 
                                                  | ((0x800U 
                                                      & (vlSelfRef.Main__DOT__instr 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelfRef.Main__DOT__instr 
                                                           >> 0x14U))))))))
                                 : ((2U & (IData)(vlSelfRef.Main__DOT__IMMctrl))
                                     ? ((1U & (IData)(vlSelfRef.Main__DOT__IMMctrl))
                                         ? (0xfffff000U 
                                            & vlSelfRef.Main__DOT__instr)
                                         : (((- (IData)(
                                                        (vlSelfRef.Main__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xdU) 
                                            | ((0x1000U 
                                                & (vlSelfRef.Main__DOT__instr 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSelfRef.Main__DOT__instr 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelfRef.Main__DOT__instr 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelfRef.Main__DOT__instr 
                                                           >> 7U)))))))
                                     : ((1U & (IData)(vlSelfRef.Main__DOT__IMMctrl))
                                         ? (((- (IData)(
                                                        (vlSelfRef.Main__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelfRef.Main__DOT__instr 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.Main__DOT__instr 
                                                     >> 7U))))
                                         : (((- (IData)(
                                                        (vlSelfRef.Main__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelfRef.Main__DOT__instr 
                                               >> 0x14U)))));
    vlSelfRef.Main__DOT__PCaddIMM = (vlSelfRef.Main__DOT__IMM 
                                     + vlSelfRef.Main__DOT__PC);
    vlSelfRef.Main__DOT__N2 = ((IData)(vlSelfRef.Main__DOT__ALUsrc)
                                ? vlSelfRef.Main__DOT__IMM
                                : vlSelfRef.Main__DOT__M4__DOT__RegArray
                               [(0x1fU & (vlSelfRef.Main__DOT__instr 
                                          >> 0x14U))]);
    if ((8U & (IData)(vlSelfRef.Main__DOT__ALUctrl))) {
        vlSelfRef.Main__DOT__A1__DOT__flagC = (1U & (IData)(
                                                            (1ULL 
                                                             & (((QData)((IData)(vlSelfRef.Main__DOT__DOutReg1)) 
                                                                 + (QData)((IData)(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (~ vlSelfRef.Main__DOT__N2))))) 
                                                                >> 0x20U))));
        vlSelfRef.Main__DOT__DOutAlu = ((IData)(1U) 
                                        + (vlSelfRef.Main__DOT__DOutReg1 
                                           + (~ vlSelfRef.Main__DOT__N2)));
    } else {
        vlSelfRef.Main__DOT__DOutAlu = ((4U & (IData)(vlSelfRef.Main__DOT__ALUctrl))
                                         ? ((2U & (IData)(vlSelfRef.Main__DOT__ALUctrl))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.Main__DOT__ALUctrl))
                                                 ? 
                                                VL_SHIFTRS_III(32,32,5, vlSelfRef.Main__DOT__DOutReg1, 
                                                               (0x1fU 
                                                                & vlSelfRef.Main__DOT__N2))
                                                 : 
                                                (vlSelfRef.Main__DOT__DOutReg1 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelfRef.Main__DOT__N2)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.Main__DOT__ALUctrl))
                                                 ? 
                                                (vlSelfRef.Main__DOT__DOutReg1 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelfRef.Main__DOT__N2))
                                                 : 
                                                (vlSelfRef.Main__DOT__DOutReg1 
                                                 ^ vlSelfRef.Main__DOT__N2)))
                                         : ((2U & (IData)(vlSelfRef.Main__DOT__ALUctrl))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.Main__DOT__ALUctrl))
                                                 ? 
                                                (vlSelfRef.Main__DOT__DOutReg1 
                                                 | vlSelfRef.Main__DOT__N2)
                                                 : 
                                                (vlSelfRef.Main__DOT__DOutReg1 
                                                 & vlSelfRef.Main__DOT__N2))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.Main__DOT__ALUctrl))
                                                 ? vlSelfRef.Main__DOT__N2
                                                 : 
                                                (vlSelfRef.Main__DOT__DOutReg1 
                                                 + vlSelfRef.Main__DOT__N2))));
    }
    vlSelfRef.Main__DOT__A1__DOT__flagS = (vlSelfRef.Main__DOT__DOutAlu 
                                           >> 0x1fU);
    vlSelfRef.Main__DOT__A1__DOT__flagZ = (0U == vlSelfRef.Main__DOT__DOutAlu);
    vlSelfRef.Main__DOT__A1__DOT__flagV = (1U & (((
                                                   (~ 
                                                    (vlSelfRef.Main__DOT__DOutReg1 
                                                     >> 0x1fU)) 
                                                   & (vlSelfRef.Main__DOT__N2 
                                                      >> 0x1fU)) 
                                                  & (vlSelfRef.Main__DOT__DOutAlu 
                                                     >> 0x1fU)) 
                                                 | (((vlSelfRef.Main__DOT__DOutReg1 
                                                      >> 0x1fU) 
                                                     & (~ 
                                                        (vlSelfRef.Main__DOT__N2 
                                                         >> 0x1fU))) 
                                                    & (~ 
                                                       (vlSelfRef.Main__DOT__DOutAlu 
                                                        >> 0x1fU)))));
    vlSelfRef.Main__DOT__flag = ((1U & ((IData)(vlSelfRef.Main__DOT__ALUctrl) 
                                        >> 3U)) && 
                                 (1U & ((4U & (IData)(vlSelfRef.Main__DOT__ALUctrl))
                                         ? ((2U & (IData)(vlSelfRef.Main__DOT__ALUctrl))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.Main__DOT__ALUctrl))
                                                 ? (IData)(vlSelfRef.Main__DOT__A1__DOT__flagC)
                                                 : 
                                                (~ (IData)(vlSelfRef.Main__DOT__A1__DOT__flagC)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.Main__DOT__ALUctrl))
                                                 ? 
                                                ((IData)(vlSelfRef.Main__DOT__A1__DOT__flagS) 
                                                 == (IData)(vlSelfRef.Main__DOT__A1__DOT__flagV))
                                                 : 
                                                ((IData)(vlSelfRef.Main__DOT__A1__DOT__flagS) 
                                                 != (IData)(vlSelfRef.Main__DOT__A1__DOT__flagV))))
                                         : ((1U & (~ 
                                                   ((IData)(vlSelfRef.Main__DOT__ALUctrl) 
                                                    >> 1U))) 
                                            && (1U 
                                                & ((1U 
                                                    & (IData)(vlSelfRef.Main__DOT__ALUctrl))
                                                    ? 
                                                   (~ (IData)(vlSelfRef.Main__DOT__A1__DOT__flagZ))
                                                    : (IData)(vlSelfRef.Main__DOT__A1__DOT__flagZ)))))));
    if (((0xcU == (IData)(vlSelfRef.Main__DOT__ALUctrl)) 
         | (0xeU == (IData)(vlSelfRef.Main__DOT__ALUctrl)))) {
        vlSelfRef.Main__DOT__DOutAlu = vlSelfRef.Main__DOT__flag;
    }
    vlSelfRef.Main__DOT__PCsrc = ((2U & ((((IData)(vlSelfRef.Main__DOT__flag) 
                                           & (IData)(vlSelfRef.Main__DOT__PCsrc)) 
                                          | (IData)(
                                                    (2U 
                                                     == (IData)(vlSelfRef.Main__DOT__PCsrc)))) 
                                         << 1U)) | 
                                  (1U & (((IData)(vlSelfRef.Main__DOT__flag) 
                                          & ((IData)(vlSelfRef.Main__DOT__PCsrc) 
                                             >> 1U)) 
                                         | (IData)(
                                                   (1U 
                                                    == (IData)(vlSelfRef.Main__DOT__PCsrc))))));
    vlSelfRef.Main__DOT__M1__DOT__Ad = (0xfffffU & vlSelfRef.Main__DOT__DOutAlu);
    vlSelfRef.Main__DOT__DOutDM = ((4U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C1__func3))
                                    ? ((2U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C1__func3))
                                        ? ((vlSelfRef.Main__DOT__M1__DOT__RamArray
                                            [vlSelfRef.Main__DOT__M1__DOT__Ad] 
                                            << 0x18U) 
                                           | ((vlSelfRef.Main__DOT__M1__DOT__RamArray
                                               [(0xfffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelfRef.Main__DOT__M1__DOT__Ad))] 
                                               << 0x10U) 
                                              | ((vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                  [
                                                  (0xfffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.Main__DOT__M1__DOT__Ad))] 
                                                  << 8U) 
                                                 | vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                 [(0xfffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.Main__DOT__M1__DOT__Ad))])))
                                        : ((1U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C1__func3))
                                            ? ((vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                [vlSelfRef.Main__DOT__M1__DOT__Ad] 
                                                << 8U) 
                                               | vlSelfRef.Main__DOT__M1__DOT__RamArray
                                               [(0xfffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelfRef.Main__DOT__M1__DOT__Ad))])
                                            : vlSelfRef.Main__DOT__M1__DOT__RamArray
                                           [vlSelfRef.Main__DOT__M1__DOT__Ad]))
                                    : ((2U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C1__func3))
                                        ? ((1U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C1__func3))
                                            ? ((vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                [vlSelfRef.Main__DOT__M1__DOT__Ad] 
                                                << 0x18U) 
                                               | ((vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                   [
                                                   (0xfffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelfRef.Main__DOT__M1__DOT__Ad))] 
                                                   << 0x10U) 
                                                  | ((vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                      [
                                                      (0xfffffU 
                                                       & ((IData)(2U) 
                                                          + vlSelfRef.Main__DOT__M1__DOT__Ad))] 
                                                      << 8U) 
                                                     | vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                     [
                                                     (0xfffffU 
                                                      & ((IData)(3U) 
                                                         + vlSelfRef.Main__DOT__M1__DOT__Ad))])))
                                            : ((vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                [vlSelfRef.Main__DOT__M1__DOT__Ad] 
                                                << 0x18U) 
                                               | ((vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                   [
                                                   (0xfffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelfRef.Main__DOT__M1__DOT__Ad))] 
                                                   << 0x10U) 
                                                  | ((vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                      [
                                                      (0xfffffU 
                                                       & ((IData)(2U) 
                                                          + vlSelfRef.Main__DOT__M1__DOT__Ad))] 
                                                      << 8U) 
                                                     | vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                     [
                                                     (0xfffffU 
                                                      & ((IData)(3U) 
                                                         + vlSelfRef.Main__DOT__M1__DOT__Ad))]))))
                                        : ((1U & (IData)(vlSelfRef.Main__DOT____Vcellinp__C1__func3))
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                               [vlSelfRef.Main__DOT__M1__DOT__Ad] 
                                                               >> 7U)))) 
                                                << 0x10U) 
                                               | ((vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                   [vlSelfRef.Main__DOT__M1__DOT__Ad] 
                                                   << 8U) 
                                                  | vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                  [
                                                  (0xfffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.Main__DOT__M1__DOT__Ad))]))
                                            : (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.Main__DOT__M1__DOT__RamArray
                                                               [vlSelfRef.Main__DOT__M1__DOT__Ad] 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | vlSelfRef.Main__DOT__M1__DOT__RamArray
                                               [vlSelfRef.Main__DOT__M1__DOT__Ad]))));
    vlSelfRef.Main__DOT__PCN = ((2U & (IData)(vlSelfRef.Main__DOT__PCsrc))
                                 ? ((1U & (IData)(vlSelfRef.Main__DOT__PCsrc))
                                     ? vlSelfRef.Main__DOT__PCaddIMM
                                     : vlSelfRef.Main__DOT__DOutAlu)
                                 : ((1U & (IData)(vlSelfRef.Main__DOT__PCsrc))
                                     ? vlSelfRef.Main__DOT__PCaddIMM
                                     : ((IData)(4U) 
                                        + vlSelfRef.Main__DOT__PC)));
}

void VMain___024root___eval_triggers__act(VMain___024root* vlSelf);

bool VMain___024root___eval_phase__act(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMain___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VMain___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMain___024root___eval_phase__nba(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMain___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__nba(VMain___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__act(VMain___024root* vlSelf);
#endif  // VL_DEBUG

void VMain___024root___eval(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval\n"); );
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
            VMain___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Main.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VMain___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Main.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VMain___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VMain___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMain___024root___eval_debug_assertions(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
