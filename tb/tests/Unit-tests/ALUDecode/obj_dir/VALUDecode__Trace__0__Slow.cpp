// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALUDecode__Syms.h"


VL_ATTR_COLD void VALUDecode___024root__trace_init_sub__TOP__0(VALUDecode___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"opcode5", false,-1);
    tracep->declBus(c+2,"funct3", false,-1, 2,0);
    tracep->declBit(c+3,"funct75", false,-1);
    tracep->declBus(c+4,"ALUop", false,-1, 2,0);
    tracep->declBus(c+5,"ALUCtrl", false,-1, 3,0);
    tracep->pushNamePrefix("ALUDecode ");
    tracep->declBit(c+1,"opcode5", false,-1);
    tracep->declBus(c+2,"funct3", false,-1, 2,0);
    tracep->declBit(c+3,"funct75", false,-1);
    tracep->declBus(c+4,"ALUop", false,-1, 2,0);
    tracep->declBus(c+5,"ALUCtrl", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VALUDecode___024root__trace_init_top(VALUDecode___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root__trace_init_top\n"); );
    // Body
    VALUDecode___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALUDecode___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALUDecode___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALUDecode___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALUDecode___024root__trace_register(VALUDecode___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VALUDecode___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VALUDecode___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VALUDecode___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALUDecode___024root__trace_full_sub_0(VALUDecode___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALUDecode___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root__trace_full_top_0\n"); );
    // Init
    VALUDecode___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALUDecode___024root*>(voidSelf);
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALUDecode___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALUDecode___024root__trace_full_sub_0(VALUDecode___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALUDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUDecode___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->opcode5));
    bufp->fullCData(oldp+2,(vlSelf->funct3),3);
    bufp->fullBit(oldp+3,(vlSelf->funct75));
    bufp->fullCData(oldp+4,(vlSelf->ALUop),3);
    bufp->fullCData(oldp+5,(vlSelf->ALUCtrl),4);
}
