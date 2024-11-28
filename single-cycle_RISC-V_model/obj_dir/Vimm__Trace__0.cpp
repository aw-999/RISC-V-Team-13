// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vimm__Syms.h"


void Vimm___024root__trace_chg_sub_0(Vimm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vimm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root__trace_chg_top_0\n"); );
    // Init
    Vimm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimm___024root*>(voidSelf);
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vimm___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vimm___024root__trace_chg_sub_0(Vimm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->IMMsrc),3);
    bufp->chgIData(oldp+1,(vlSelf->instr),32);
    bufp->chgIData(oldp+2,(vlSelf->out),32);
    bufp->chgBit(oldp+3,((vlSelf->instr >> 0x1fU)));
}

void Vimm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root__trace_cleanup\n"); );
    // Init
    Vimm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimm___024root*>(voidSelf);
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
