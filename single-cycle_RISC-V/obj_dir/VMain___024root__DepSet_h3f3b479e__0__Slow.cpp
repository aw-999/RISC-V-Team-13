// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "VMain__pch.h"
#include "VMain___024root.h"

VL_ATTR_COLD void VMain___024root___eval_static(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VMain___024root___eval_initial__TOP(VMain___024root* vlSelf);

VL_ATTR_COLD void VMain___024root___eval_initial(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMain___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void VMain___024root___eval_initial__TOP(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x7369616eU;
    __Vtemp_1[2U] = 0x67617573U;
    __Vtemp_1[3U] = 0x5aU;
    VL_READMEM_N(true, 8, 1048576, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.Main__DOT__M1__DOT__RamArray)
                 , 0x10000U, ~0ULL);
    __Vtemp_2[0U] = 0x2e6d656dU;
    __Vtemp_2[1U] = 0x74657374U;
    __Vtemp_2[2U] = 0x5aU;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelfRef.Main__DOT__M2__DOT__RomArray)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VMain___024root___eval_final(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__stl(VMain___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMain___024root___eval_phase__stl(VMain___024root* vlSelf);

VL_ATTR_COLD void VMain___024root___eval_settle(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VMain___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Main.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VMain___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__stl(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMain___024root___stl_sequent__TOP__0(VMain___024root* vlSelf);

VL_ATTR_COLD void VMain___024root___eval_stl(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VMain___024root___stl_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 128> VMain__ConstPool__TABLE_hf299bc9d_0;

VL_ATTR_COLD void VMain___024root___stl_sequent__TOP__0(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.A0 = vlSelfRef.Main__DOT__M4__DOT__RegArray
        [0xaU];
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
                        vlSelfRef.Main__DOT__PCsrc = 2U;
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
    __Vtableidx1 = (((IData)(vlSelfRef.Main__DOT__func75) 
                     << 6U) | (((IData)(vlSelfRef.Main__DOT__op5) 
                                << 5U) | (((IData)(vlSelfRef.Main__DOT____Vcellinp__C1__func3) 
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
                                                VL_SHIFTRS_III(32,32,32, vlSelfRef.Main__DOT__DOutReg1, vlSelfRef.Main__DOT__N2)
                                                 : 
                                                VL_SHIFTR_III(32,32,32, vlSelfRef.Main__DOT__DOutReg1, vlSelfRef.Main__DOT__N2))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.Main__DOT__ALUctrl))
                                                 ? 
                                                VL_SHIFTL_III(32,32,32, vlSelfRef.Main__DOT__DOutReg1, vlSelfRef.Main__DOT__N2)
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
    vlSelfRef.Main__DOT__A1__DOT__flagV = ((vlSelfRef.Main__DOT__DOutReg1 
                                            >> 0x1fU) 
                                           & (~ (vlSelfRef.Main__DOT__N2 
                                                 >> 0x1fU)));
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
    vlSelfRef.Main__DOT__PCsrc = ((((IData)(vlSelfRef.Main__DOT__flag) 
                                    | (2U == (IData)(vlSelfRef.Main__DOT__PCsrc))) 
                                   << 1U) | ((IData)(vlSelfRef.Main__DOT__flag) 
                                             | (1U 
                                                == (IData)(vlSelfRef.Main__DOT__PCsrc))));
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

VL_ATTR_COLD void VMain___024root___eval_triggers__stl(VMain___024root* vlSelf);

VL_ATTR_COLD bool VMain___024root___eval_phase__stl(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMain___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VMain___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__act(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__nba(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMain___024root___ctor_var_reset(VMain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->A0 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__PCN = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__PCaddIMM = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__DOutReg1 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__DOutReg2 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__IMM = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__N1 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__N2 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__DOutAlu = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__AdDM = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__DInDM = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__DOutDM = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__PCsrc = VL_RAND_RESET_I(2);
    vlSelf->Main__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->Main__DOT__Opcode = VL_RAND_RESET_I(7);
    vlSelf->Main__DOT__func3 = VL_RAND_RESET_I(3);
    vlSelf->Main__DOT__func75 = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__op5 = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__IMMctrl = VL_RAND_RESET_I(3);
    vlSelf->Main__DOT__ALUop = VL_RAND_RESET_I(2);
    vlSelf->Main__DOT__ALUctrl = VL_RAND_RESET_I(4);
    vlSelf->Main__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT____Vcellinp__C1__func3 = VL_RAND_RESET_I(3);
    vlSelf->Main__DOT____Vcellinp__C2__Opcode = VL_RAND_RESET_I(7);
    vlSelf->Main__DOT__A1__DOT__flagZ = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__A1__DOT__flagC = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__A1__DOT__flagS = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__A1__DOT__flagV = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->Main__DOT__M1__DOT__RamArray[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->Main__DOT__M1__DOT__Ad = VL_RAND_RESET_I(20);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->Main__DOT__M2__DOT__RomArray[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->Main__DOT__M4__DOT__trigger = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Main__DOT__M4__DOT__RegArray[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdfgRegularize_h6171c202_0_0 = VL_RAND_RESET_I(16);
    vlSelf->__VdfgRegularize_h6171c202_0_1 = VL_RAND_RESET_I(24);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
