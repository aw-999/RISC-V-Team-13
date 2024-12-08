// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontrol__Syms.h"


VL_ATTR_COLD void Vcontrol___024root__trace_init_sub__TOP__0(Vcontrol___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"opcode", false,-1, 6,0);
    tracep->declBit(c+2,"ZeroFlag", false,-1);
    tracep->declBit(c+3,"NegativeFlag", false,-1);
    tracep->declBit(c+4,"UnsignedLess", false,-1);
    tracep->declBus(c+5,"funct3", false,-1, 2,0);
    tracep->declBus(c+6,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+7,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+8,"MemWrite", false,-1);
    tracep->declBit(c+9,"ALUSrc", false,-1);
    tracep->declBus(c+10,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+11,"RegWrite", false,-1);
    tracep->declBus(c+12,"ALUop", false,-1, 2,0);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+1,"opcode", false,-1, 6,0);
    tracep->declBit(c+2,"ZeroFlag", false,-1);
    tracep->declBit(c+3,"NegativeFlag", false,-1);
    tracep->declBit(c+4,"UnsignedLess", false,-1);
    tracep->declBus(c+5,"funct3", false,-1, 2,0);
    tracep->declBus(c+6,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+7,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+8,"MemWrite", false,-1);
    tracep->declBit(c+9,"ALUSrc", false,-1);
    tracep->declBus(c+10,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+11,"RegWrite", false,-1);
    tracep->declBus(c+12,"ALUop", false,-1, 2,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcontrol___024root__trace_init_top(Vcontrol___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_init_top\n"); );
    // Body
    Vcontrol___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcontrol___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontrol___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontrol___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcontrol___024root__trace_register(Vcontrol___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcontrol___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcontrol___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcontrol___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcontrol___024root__trace_full_sub_0(Vcontrol___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcontrol___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_full_top_0\n"); );
    // Init
    Vcontrol___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol___024root*>(voidSelf);
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcontrol___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcontrol___024root__trace_full_sub_0(Vcontrol___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->opcode),7);
    bufp->fullBit(oldp+2,(vlSelf->ZeroFlag));
    bufp->fullBit(oldp+3,(vlSelf->NegativeFlag));
    bufp->fullBit(oldp+4,(vlSelf->UnsignedLess));
    bufp->fullCData(oldp+5,(vlSelf->funct3),3);
    bufp->fullCData(oldp+6,(vlSelf->PCSrc),2);
    bufp->fullCData(oldp+7,(vlSelf->ResultSrc),2);
    bufp->fullBit(oldp+8,(vlSelf->MemWrite));
    bufp->fullBit(oldp+9,(vlSelf->ALUSrc));
    bufp->fullCData(oldp+10,(vlSelf->ImmSrc),3);
    bufp->fullBit(oldp+11,(vlSelf->RegWrite));
    bufp->fullCData(oldp+12,(vlSelf->ALUop),3);
}
