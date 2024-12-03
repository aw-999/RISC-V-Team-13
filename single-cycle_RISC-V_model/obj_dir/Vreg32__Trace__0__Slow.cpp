// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vreg32__Syms.h"


VL_ATTR_COLD void Vreg32___024root__trace_init_sub__TOP__0(Vreg32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg32___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+34,"RegWrite", false,-1);
    tracep->declBus(c+35,"write_addr", false,-1, 4,0);
    tracep->declBus(c+36,"AdOut1", false,-1, 4,0);
    tracep->declBus(c+37,"AdOut2", false,-1, 4,0);
    tracep->declBus(c+38,"DIn", false,-1, 31,0);
    tracep->declBus(c+39,"DOut1", false,-1, 31,0);
    tracep->declBus(c+40,"DOut2", false,-1, 31,0);
    tracep->declBus(c+41,"A0", false,-1, 31,0);
    tracep->pushNamePrefix("reg32 ");
    tracep->declBus(c+42,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+43,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+34,"RegWrite", false,-1);
    tracep->declBus(c+35,"write_addr", false,-1, 4,0);
    tracep->declBus(c+36,"AdOut1", false,-1, 4,0);
    tracep->declBus(c+37,"AdOut2", false,-1, 4,0);
    tracep->declBus(c+38,"DIn", false,-1, 31,0);
    tracep->declBus(c+39,"DOut1", false,-1, 31,0);
    tracep->declBus(c+40,"DOut2", false,-1, 31,0);
    tracep->declBus(c+41,"A0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"register_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vreg32___024root__trace_init_top(Vreg32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg32___024root__trace_init_top\n"); );
    // Body
    Vreg32___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vreg32___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreg32___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreg32___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vreg32___024root__trace_register(Vreg32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg32___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vreg32___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vreg32___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vreg32___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vreg32___024root__trace_full_sub_0(Vreg32___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vreg32___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg32___024root__trace_full_top_0\n"); );
    // Init
    Vreg32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg32___024root*>(voidSelf);
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vreg32___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vreg32___024root__trace_full_sub_0(Vreg32___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg32___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->reg32__DOT__register_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->reg32__DOT__register_array[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->reg32__DOT__register_array[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->reg32__DOT__register_array[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->reg32__DOT__register_array[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->reg32__DOT__register_array[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->reg32__DOT__register_array[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->reg32__DOT__register_array[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->reg32__DOT__register_array[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->reg32__DOT__register_array[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->reg32__DOT__register_array[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->reg32__DOT__register_array[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->reg32__DOT__register_array[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->reg32__DOT__register_array[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->reg32__DOT__register_array[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->reg32__DOT__register_array[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->reg32__DOT__register_array[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->reg32__DOT__register_array[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->reg32__DOT__register_array[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->reg32__DOT__register_array[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->reg32__DOT__register_array[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->reg32__DOT__register_array[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->reg32__DOT__register_array[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->reg32__DOT__register_array[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->reg32__DOT__register_array[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->reg32__DOT__register_array[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->reg32__DOT__register_array[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->reg32__DOT__register_array[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->reg32__DOT__register_array[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->reg32__DOT__register_array[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->reg32__DOT__register_array[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->reg32__DOT__register_array[31]),32);
    bufp->fullBit(oldp+33,(vlSelf->clk));
    bufp->fullBit(oldp+34,(vlSelf->RegWrite));
    bufp->fullCData(oldp+35,(vlSelf->write_addr),5);
    bufp->fullCData(oldp+36,(vlSelf->AdOut1),5);
    bufp->fullCData(oldp+37,(vlSelf->AdOut2),5);
    bufp->fullIData(oldp+38,(vlSelf->DIn),32);
    bufp->fullIData(oldp+39,(vlSelf->DOut1),32);
    bufp->fullIData(oldp+40,(vlSelf->DOut2),32);
    bufp->fullIData(oldp+41,(vlSelf->A0),32);
    bufp->fullIData(oldp+42,(5U),32);
    bufp->fullIData(oldp+43,(0x20U),32);
}
