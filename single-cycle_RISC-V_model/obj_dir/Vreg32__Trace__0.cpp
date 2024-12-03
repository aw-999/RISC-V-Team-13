// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vreg32__Syms.h"


void Vreg32___024root__trace_chg_sub_0(Vreg32___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vreg32___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg32___024root__trace_chg_top_0\n"); );
    // Init
    Vreg32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg32___024root*>(voidSelf);
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vreg32___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vreg32___024root__trace_chg_sub_0(Vreg32___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg32___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->reg32__DOT__register_array[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->reg32__DOT__register_array[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->reg32__DOT__register_array[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->reg32__DOT__register_array[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->reg32__DOT__register_array[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->reg32__DOT__register_array[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->reg32__DOT__register_array[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->reg32__DOT__register_array[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->reg32__DOT__register_array[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->reg32__DOT__register_array[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->reg32__DOT__register_array[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->reg32__DOT__register_array[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->reg32__DOT__register_array[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->reg32__DOT__register_array[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->reg32__DOT__register_array[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->reg32__DOT__register_array[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->reg32__DOT__register_array[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->reg32__DOT__register_array[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->reg32__DOT__register_array[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->reg32__DOT__register_array[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->reg32__DOT__register_array[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->reg32__DOT__register_array[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->reg32__DOT__register_array[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->reg32__DOT__register_array[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->reg32__DOT__register_array[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->reg32__DOT__register_array[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->reg32__DOT__register_array[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->reg32__DOT__register_array[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->reg32__DOT__register_array[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->reg32__DOT__register_array[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->reg32__DOT__register_array[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->reg32__DOT__register_array[31]),32);
    }
    bufp->chgBit(oldp+32,(vlSelf->clk));
    bufp->chgBit(oldp+33,(vlSelf->RegWrite));
    bufp->chgCData(oldp+34,(vlSelf->write_addr),5);
    bufp->chgCData(oldp+35,(vlSelf->AdOut1),5);
    bufp->chgCData(oldp+36,(vlSelf->AdOut2),5);
    bufp->chgIData(oldp+37,(vlSelf->DIn),32);
    bufp->chgIData(oldp+38,(vlSelf->DOut1),32);
    bufp->chgIData(oldp+39,(vlSelf->DOut2),32);
    bufp->chgIData(oldp+40,(vlSelf->A0),32);
}

void Vreg32___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg32___024root__trace_cleanup\n"); );
    // Init
    Vreg32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg32___024root*>(voidSelf);
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
