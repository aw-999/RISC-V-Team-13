// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram__Syms.h"


VL_ATTR_COLD void Vram___024root__trace_init_sub__TOP__0(Vram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"Ad", false,-1, 31,0);
    tracep->declBit(c+3,"RamWrite", false,-1);
    tracep->declBus(c+4,"func3", false,-1, 2,0);
    tracep->declBus(c+5,"DIn", false,-1, 31,0);
    tracep->declBus(c+6,"DOut", false,-1, 31,0);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+9,"WA", false,-1, 31,0);
    tracep->declBus(c+10,"WAM", false,-1, 31,0);
    tracep->declBus(c+11,"WB", false,-1, 31,0);
    tracep->declBus(c+9,"WD", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"Ad", false,-1, 31,0);
    tracep->declBit(c+3,"RamWrite", false,-1);
    tracep->declBus(c+4,"func3", false,-1, 2,0);
    tracep->declBus(c+5,"DIn", false,-1, 31,0);
    tracep->declBus(c+6,"DOut", false,-1, 31,0);
    tracep->declBus(c+7,"AdM", false,-1, 16,0);
    tracep->declBus(c+8,"show", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vram___024root__trace_init_top(Vram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_init_top\n"); );
    // Body
    Vram___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vram___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vram___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vram___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vram___024root__trace_register(Vram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vram___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vram___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vram___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vram___024root__trace_full_sub_0(Vram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vram___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_full_top_0\n"); );
    // Init
    Vram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vram___024root*>(voidSelf);
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vram___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vram___024root__trace_full_sub_0(Vram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullIData(oldp+2,(vlSelf->Ad),32);
    bufp->fullBit(oldp+3,(vlSelf->RamWrite));
    bufp->fullCData(oldp+4,(vlSelf->func3),3);
    bufp->fullIData(oldp+5,(vlSelf->DIn),32);
    bufp->fullIData(oldp+6,(vlSelf->DOut),32);
    bufp->fullIData(oldp+7,(vlSelf->ram__DOT__AdM),17);
    bufp->fullIData(oldp+8,(((vlSelf->ram__DOT__RamArray
                              [0x10U] << 0x18U) | (
                                                   (vlSelf->ram__DOT__RamArray
                                                    [0x11U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ram__DOT__RamArray
                                                       [0x12U] 
                                                       << 8U) 
                                                      | vlSelf->ram__DOT__RamArray
                                                      [0x13U])))),32);
    bufp->fullIData(oldp+9,(0x20U),32);
    bufp->fullIData(oldp+10,(0x11U),32);
    bufp->fullIData(oldp+11,(8U),32);
}
