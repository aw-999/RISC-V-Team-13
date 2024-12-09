// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALUDecode__Syms.h"


void VALUDecode___024root__trace_chg_sub_0(VALUDecode___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VALUDecode___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root__trace_chg_top_0\n"); );
    // Init
    VALUDecode___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALUDecode___024root*>(voidSelf);
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VALUDecode___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VALUDecode___024root__trace_chg_sub_0(VALUDecode___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->opcode5));
    bufp->chgCData(oldp+1,(vlSelf->funct3),3);
    bufp->chgBit(oldp+2,(vlSelf->funct75));
    bufp->chgCData(oldp+3,(vlSelf->ALUop),3);
    bufp->chgCData(oldp+4,(vlSelf->ALUCtrl),4);
}

void VALUDecode___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root__trace_cleanup\n"); );
    // Init
    VALUDecode___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALUDecode___024root*>(voidSelf);
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
