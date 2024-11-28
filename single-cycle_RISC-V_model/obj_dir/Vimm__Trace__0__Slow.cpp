// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vimm__Syms.h"


VL_ATTR_COLD void Vimm___024root__trace_init_sub__TOP__0(Vimm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"IMMsrc", false,-1, 2,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+3,"out", false,-1, 31,0);
    tracep->pushNamePrefix("imm ");
    tracep->declBus(c+5,"W", false,-1, 31,0);
    tracep->declBus(c+1,"IMMsrc", false,-1, 2,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+3,"out", false,-1, 31,0);
    tracep->declBit(c+4,"sign", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vimm___024root__trace_init_top(Vimm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root__trace_init_top\n"); );
    // Body
    Vimm___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vimm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vimm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vimm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vimm___024root__trace_register(Vimm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vimm___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vimm___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vimm___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vimm___024root__trace_full_sub_0(Vimm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vimm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root__trace_full_top_0\n"); );
    // Init
    Vimm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimm___024root*>(voidSelf);
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vimm___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vimm___024root__trace_full_sub_0(Vimm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->IMMsrc),3);
    bufp->fullIData(oldp+2,(vlSelf->instr),32);
    bufp->fullIData(oldp+3,(vlSelf->out),32);
    bufp->fullBit(oldp+4,((vlSelf->instr >> 0x1fU)));
    bufp->fullIData(oldp+5,(0x20U),32);
}
