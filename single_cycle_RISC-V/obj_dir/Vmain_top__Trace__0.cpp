// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain_top__Syms.h"


void Vmain_top___024root__trace_chg_sub_0(Vmain_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmain_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root__trace_chg_top_0\n"); );
    // Init
    Vmain_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_top___024root*>(voidSelf);
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmain_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmain_top___024root__trace_chg_sub_0(Vmain_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->main_top__DOT__PC),32);
        bufp->chgIData(oldp+1,(((IData)(4U) + vlSelf->main_top__DOT__PC)),32);
        bufp->chgIData(oldp+2,((vlSelf->main_top__DOT__PC 
                                + vlSelf->main_top__DOT__ImmExt)),32);
        bufp->chgIData(oldp+3,(vlSelf->main_top__DOT__instr),32);
        bufp->chgIData(oldp+4,(vlSelf->main_top__DOT__ImmExt),32);
        bufp->chgIData(oldp+5,(vlSelf->main_top__DOT__RD1),32);
        bufp->chgIData(oldp+6,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
                               [(0x1fU & (vlSelf->main_top__DOT__instr 
                                          >> 0x14U))]),32);
        bufp->chgBit(oldp+7,((1U & (vlSelf->main_top__DOT__instr 
                                    >> 5U))));
        bufp->chgCData(oldp+8,((7U & (vlSelf->main_top__DOT__instr 
                                      >> 0xcU))),3);
        bufp->chgBit(oldp+9,((1U & (vlSelf->main_top__DOT__instr 
                                    >> 0x1eU))));
        bufp->chgCData(oldp+10,((0x7fU & vlSelf->main_top__DOT__instr)),7);
        bufp->chgIData(oldp+11,(((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                  [0x10000U] << 0x18U) 
                                 | ((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                     [0x10001U] << 0x10U) 
                                    | ((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                        [0x10002U] 
                                        << 8U) | vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                       [0x10003U])))),32);
        bufp->chgBit(oldp+12,((vlSelf->main_top__DOT__instr 
                               >> 0x1fU)));
        bufp->chgCData(oldp+13,((0x1fU & (vlSelf->main_top__DOT__instr 
                                          >> 7U))),5);
        bufp->chgCData(oldp+14,((0x1fU & (vlSelf->main_top__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+15,((0x1fU & (vlSelf->main_top__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+16,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[0]),32);
        bufp->chgIData(oldp+17,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[1]),32);
        bufp->chgIData(oldp+18,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[2]),32);
        bufp->chgIData(oldp+19,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[3]),32);
        bufp->chgIData(oldp+20,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[4]),32);
        bufp->chgIData(oldp+21,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[5]),32);
        bufp->chgIData(oldp+22,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[6]),32);
        bufp->chgIData(oldp+23,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[7]),32);
        bufp->chgIData(oldp+24,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[8]),32);
        bufp->chgIData(oldp+25,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[9]),32);
        bufp->chgIData(oldp+26,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[10]),32);
        bufp->chgIData(oldp+27,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[11]),32);
        bufp->chgIData(oldp+28,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[12]),32);
        bufp->chgIData(oldp+29,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[13]),32);
        bufp->chgIData(oldp+30,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[14]),32);
        bufp->chgIData(oldp+31,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[15]),32);
        bufp->chgIData(oldp+32,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[16]),32);
        bufp->chgIData(oldp+33,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[17]),32);
        bufp->chgIData(oldp+34,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[18]),32);
        bufp->chgIData(oldp+35,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[19]),32);
        bufp->chgIData(oldp+36,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[20]),32);
        bufp->chgIData(oldp+37,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[21]),32);
        bufp->chgIData(oldp+38,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[22]),32);
        bufp->chgIData(oldp+39,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[23]),32);
        bufp->chgIData(oldp+40,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[24]),32);
        bufp->chgIData(oldp+41,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[25]),32);
        bufp->chgIData(oldp+42,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[26]),32);
        bufp->chgIData(oldp+43,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[27]),32);
        bufp->chgIData(oldp+44,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[28]),32);
        bufp->chgIData(oldp+45,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[29]),32);
        bufp->chgIData(oldp+46,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[30]),32);
        bufp->chgIData(oldp+47,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+48,(vlSelf->main_top__DOT__SrcB),32);
        bufp->chgIData(oldp+49,(vlSelf->main_top__DOT__ALUResult),32);
        bufp->chgIData(oldp+50,(vlSelf->main_top__DOT__ReadData),32);
        bufp->chgBit(oldp+51,(vlSelf->main_top__DOT__MemWrite));
        bufp->chgBit(oldp+52,(vlSelf->main_top__DOT__ALUSrc));
        bufp->chgBit(oldp+53,(vlSelf->main_top__DOT__RegWrite));
        bufp->chgCData(oldp+54,(vlSelf->main_top__DOT__PCSrc),2);
        bufp->chgCData(oldp+55,(vlSelf->main_top__DOT__ResultSrc),2);
        bufp->chgCData(oldp+56,(vlSelf->main_top__DOT__ALUop),3);
        bufp->chgCData(oldp+57,(vlSelf->main_top__DOT__ALUCtrl),4);
        bufp->chgBit(oldp+58,(vlSelf->main_top__DOT__ZeroFlag));
        bufp->chgBit(oldp+59,(vlSelf->main_top__DOT__NegativeFlag));
        bufp->chgBit(oldp+60,(vlSelf->main_top__DOT__UnsignedLess));
        bufp->chgBit(oldp+61,((1U & (IData)(vlSelf->main_top__DOT____Vcellout__ControlUnit__ImmSrc))));
        bufp->chgCData(oldp+62,(vlSelf->main_top__DOT____Vcellout__ControlUnit__ImmSrc),3);
        bufp->chgIData(oldp+63,(vlSelf->main_top__DOT__DataMemory__DOT__AdM),20);
        bufp->chgBit(oldp+64,((1U & (IData)(vlSelf->main_top__DOT__ResultSrc))));
    }
    bufp->chgBit(oldp+65,(vlSelf->clk));
    bufp->chgBit(oldp+66,(vlSelf->rst));
    bufp->chgIData(oldp+67,(vlSelf->Result),32);
    bufp->chgIData(oldp+68,(vlSelf->a0),32);
    bufp->chgIData(oldp+69,(vlSelf->a1),32);
    bufp->chgIData(oldp+70,(vlSelf->a2),32);
    bufp->chgIData(oldp+71,(vlSelf->a3),32);
    bufp->chgIData(oldp+72,(vlSelf->a4),32);
    bufp->chgIData(oldp+73,(vlSelf->a5),32);
    bufp->chgIData(oldp+74,(vlSelf->a6),32);
    bufp->chgIData(oldp+75,(vlSelf->a7),32);
    bufp->chgIData(oldp+76,(vlSelf->s0),32);
    bufp->chgIData(oldp+77,(vlSelf->s1),32);
    bufp->chgIData(oldp+78,(vlSelf->s2),32);
    bufp->chgIData(oldp+79,(vlSelf->s3),32);
    bufp->chgIData(oldp+80,(vlSelf->s4),32);
    bufp->chgIData(oldp+81,(vlSelf->s5),32);
    bufp->chgIData(oldp+82,(vlSelf->s6),32);
    bufp->chgIData(oldp+83,(vlSelf->s7),32);
    bufp->chgIData(oldp+84,(vlSelf->s8),32);
    bufp->chgIData(oldp+85,(vlSelf->s9),32);
    bufp->chgIData(oldp+86,(vlSelf->s10),32);
    bufp->chgIData(oldp+87,(vlSelf->s11),32);
    bufp->chgIData(oldp+88,(vlSelf->t0),32);
    bufp->chgIData(oldp+89,(vlSelf->t1),32);
    bufp->chgIData(oldp+90,(vlSelf->t2),32);
    bufp->chgIData(oldp+91,(vlSelf->t3),32);
    bufp->chgIData(oldp+92,(vlSelf->t4),32);
    bufp->chgIData(oldp+93,(vlSelf->t5),32);
    bufp->chgIData(oldp+94,(vlSelf->t6),32);
    bufp->chgIData(oldp+95,(((0U == (IData)(vlSelf->main_top__DOT__PCSrc))
                              ? ((IData)(4U) + vlSelf->main_top__DOT__PC)
                              : ((1U == (IData)(vlSelf->main_top__DOT__PCSrc))
                                  ? (vlSelf->main_top__DOT__PC 
                                     + vlSelf->main_top__DOT__ImmExt)
                                  : ((3U == (IData)(vlSelf->main_top__DOT__PCSrc))
                                      ? vlSelf->main_top__DOT__ALUResult
                                      : ((IData)(4U) 
                                         + vlSelf->main_top__DOT__PC))))),32);
}

void Vmain_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root__trace_cleanup\n"); );
    // Init
    Vmain_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_top___024root*>(voidSelf);
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
