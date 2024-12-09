// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram__Syms.h"


void Vram___024root__trace_chg_sub_0(Vram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vram___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_chg_top_0\n"); );
    // Init
    Vram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vram___024root*>(voidSelf);
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vram___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vram___024root__trace_chg_sub_0(Vram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgIData(oldp+1,(vlSelf->Ad),32);
    bufp->chgBit(oldp+2,(vlSelf->RamWrite));
    bufp->chgCData(oldp+3,(vlSelf->func3),3);
    bufp->chgIData(oldp+4,(vlSelf->DIn),32);
    bufp->chgIData(oldp+5,(vlSelf->DOut),32);
    bufp->chgIData(oldp+6,(vlSelf->ram__DOT__AdM),17);
    bufp->chgIData(oldp+7,(((vlSelf->ram__DOT__RamArray
                             [0x10U] << 0x18U) | ((
                                                   vlSelf->ram__DOT__RamArray
                                                   [0x11U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ram__DOT__RamArray
                                                      [0x12U] 
                                                      << 8U) 
                                                     | vlSelf->ram__DOT__RamArray
                                                     [0x13U])))),32);
}

void Vram___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_cleanup\n"); );
    // Init
    Vram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vram___024root*>(voidSelf);
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
