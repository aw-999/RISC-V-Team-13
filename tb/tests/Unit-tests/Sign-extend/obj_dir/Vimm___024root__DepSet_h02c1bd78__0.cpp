// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimm.h for the primary calling header

#include "verilated.h"

#include "Vimm___024root.h"

VL_INLINE_OPT void Vimm___024root___combo__TOP__0(Vimm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->out = ((4U & (IData)(vlSelf->IMMsrc)) ? 
                   ((2U & (IData)(vlSelf->IMMsrc)) ? vlSelf->instr
                     : ((1U & (IData)(vlSelf->IMMsrc))
                         ? vlSelf->instr : (((- (IData)(
                                                        (vlSelf->instr 
                                                         >> 0x1fU))) 
                                             << 0x15U) 
                                            | ((0x100000U 
                                                & (vlSelf->instr 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->instr) 
                                                  | ((0x800U 
                                                      & (vlSelf->instr 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->instr 
                                                           >> 0x14U))))))))
                    : ((2U & (IData)(vlSelf->IMMsrc))
                        ? ((1U & (IData)(vlSelf->IMMsrc))
                            ? (0xfffff000U & vlSelf->instr)
                            : (((- (IData)((vlSelf->instr 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->instr 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->instr 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->instr 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->instr 
                                                        >> 7U)))))))
                        : ((1U & (IData)(vlSelf->IMMsrc))
                            ? (((- (IData)((vlSelf->instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->instr 
                                                  >> 7U))))
                            : (((- (IData)((vlSelf->instr 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->instr 
                                            >> 0x14U)))));
}

void Vimm___024root___eval(Vimm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root___eval\n"); );
    // Body
    Vimm___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vimm___024root___eval_debug_assertions(Vimm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->IMMsrc & 0xf8U))) {
        Verilated::overWidthError("IMMsrc");}
}
#endif  // VL_DEBUG
