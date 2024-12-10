// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VJerry_PL_main__Syms.h"


void VJerry_PL_main___024root__trace_chg_0_sub_0(VJerry_PL_main___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VJerry_PL_main___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root__trace_chg_0\n"); );
    // Init
    VJerry_PL_main___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VJerry_PL_main___024root*>(voidSelf);
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VJerry_PL_main___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VJerry_PL_main___024root__trace_chg_0_sub_0(VJerry_PL_main___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelfRef.Jerry_PL_main__DOT__ForwardAE),2);
        bufp->chgCData(oldp+1,(vlSelfRef.Jerry_PL_main__DOT__ForwardBE),2);
        bufp->chgBit(oldp+2,(vlSelfRef.Jerry_PL_main__DOT__stallF));
        bufp->chgBit(oldp+3,(vlSelfRef.Jerry_PL_main__DOT__stallD));
        bufp->chgBit(oldp+4,(vlSelfRef.Jerry_PL_main__DOT__flushD));
        bufp->chgBit(oldp+5,(vlSelfRef.Jerry_PL_main__DOT__flushE));
        bufp->chgIData(oldp+6,(((2U & (IData)(vlSelfRef.Jerry_PL_main__DOT__PCSrcE))
                                 ? ((1U & (IData)(vlSelfRef.Jerry_PL_main__DOT__PCSrcE))
                                     ? vlSelfRef.Jerry_PL_main__DOT__ImmExtW
                                     : vlSelfRef.Jerry_PL_main__DOT__ALUResultW)
                                 : ((1U & (IData)(vlSelfRef.Jerry_PL_main__DOT__PCSrcE))
                                     ? vlSelfRef.Jerry_PL_main__DOT__ImmExtW
                                     : vlSelfRef.Jerry_PL_main__DOT__PCPlus4W))),32);
        bufp->chgIData(oldp+7,(vlSelfRef.Jerry_PL_main__DOT__PC),32);
        bufp->chgIData(oldp+8,(((IData)(4U) + vlSelfRef.Jerry_PL_main__DOT__PC)),32);
        bufp->chgIData(oldp+9,(((vlSelfRef.Jerry_PL_main__DOT__PL_InstructionMemory__DOT__RomArray
                                 [(0xffffU & ((IData)(3U) 
                                              + vlSelfRef.Jerry_PL_main__DOT__PC))] 
                                 << 0x18U) | ((vlSelfRef.Jerry_PL_main__DOT__PL_InstructionMemory__DOT__RomArray
                                               [(0xffffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.Jerry_PL_main__DOT__PC))] 
                                               << 0x10U) 
                                              | ((vlSelfRef.Jerry_PL_main__DOT__PL_InstructionMemory__DOT__RomArray
                                                  [
                                                  (0xffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.Jerry_PL_main__DOT__PC))] 
                                                  << 8U) 
                                                 | vlSelfRef.Jerry_PL_main__DOT__PL_InstructionMemory__DOT__RomArray
                                                 [(0xffffU 
                                                   & vlSelfRef.Jerry_PL_main__DOT__PC)])))),32);
        bufp->chgIData(oldp+10,(vlSelfRef.Jerry_PL_main__DOT__InstrD),32);
        bufp->chgIData(oldp+11,(vlSelfRef.Jerry_PL_main__DOT__PCD),32);
        bufp->chgIData(oldp+12,(vlSelfRef.Jerry_PL_main__DOT__PCPlus4D),32);
        bufp->chgCData(oldp+13,(((3U == (0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD))
                                  ? 1U : ((0x6fU == 
                                           (0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD))
                                           ? 2U : (
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.Jerry_PL_main__DOT__InstrD))
                                                    ? 3U
                                                    : 0U)))),2);
        bufp->chgBit(oldp+14,((0x23U == (0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD))));
        bufp->chgBit(oldp+15,(vlSelfRef.Jerry_PL_main__DOT__RegWrite));
        bufp->chgBit(oldp+16,((0x33U != (0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD))));
        bufp->chgCData(oldp+17,(vlSelfRef.Jerry_PL_main__DOT__ImmSrc),3);
        bufp->chgCData(oldp+18,(vlSelfRef.Jerry_PL_main__DOT__ALUop),3);
        bufp->chgCData(oldp+19,(vlSelfRef.Jerry_PL_main__DOT__ALUCtrl),4);
        bufp->chgIData(oldp+20,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
                                [(0x1fU & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr
                                [(0x1fU & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.Jerry_PL_main__DOT__IMM),32);
        bufp->chgBit(oldp+23,(vlSelfRef.Jerry_PL_main__DOT__RegWriteE));
        bufp->chgCData(oldp+24,(vlSelfRef.Jerry_PL_main__DOT__ResultSrcE),2);
        bufp->chgBit(oldp+25,(vlSelfRef.Jerry_PL_main__DOT__MemWriteE));
        bufp->chgCData(oldp+26,(vlSelfRef.Jerry_PL_main__DOT__ALUCtrlE),4);
        bufp->chgBit(oldp+27,(vlSelfRef.Jerry_PL_main__DOT__ALUSrcE));
        bufp->chgCData(oldp+28,(vlSelfRef.Jerry_PL_main__DOT__funct3E),3);
        bufp->chgCData(oldp+29,(vlSelfRef.Jerry_PL_main__DOT__opcodeE),7);
        bufp->chgIData(oldp+30,(vlSelfRef.Jerry_PL_main__DOT__PCE),32);
        bufp->chgIData(oldp+31,(vlSelfRef.Jerry_PL_main__DOT__PCPlus4E),32);
        bufp->chgIData(oldp+32,(vlSelfRef.Jerry_PL_main__DOT__ImmExtE),32);
        bufp->chgIData(oldp+33,(vlSelfRef.Jerry_PL_main__DOT__RD1E),32);
        bufp->chgIData(oldp+34,(vlSelfRef.Jerry_PL_main__DOT__RD2E),32);
        bufp->chgCData(oldp+35,(vlSelfRef.Jerry_PL_main__DOT__Rs1E),5);
        bufp->chgCData(oldp+36,(vlSelfRef.Jerry_PL_main__DOT__Rs2E),5);
        bufp->chgCData(oldp+37,(vlSelfRef.Jerry_PL_main__DOT__RdE),5);
        bufp->chgCData(oldp+38,(vlSelfRef.Jerry_PL_main__DOT__PCSrcE),2);
        bufp->chgIData(oldp+39,(vlSelfRef.Jerry_PL_main__DOT__SrcAE),32);
        bufp->chgIData(oldp+40,(vlSelfRef.Jerry_PL_main__DOT__WriteDataE),32);
        bufp->chgIData(oldp+41,(vlSelfRef.Jerry_PL_main__DOT__SrcBE),32);
        bufp->chgIData(oldp+42,((vlSelfRef.Jerry_PL_main__DOT__ImmExtE 
                                 + vlSelfRef.Jerry_PL_main__DOT__PCE)),32);
        bufp->chgBit(oldp+43,(vlSelfRef.Jerry_PL_main__DOT__ZeroFlag));
        bufp->chgBit(oldp+44,(vlSelfRef.Jerry_PL_main__DOT__NegativeFlag));
        bufp->chgBit(oldp+45,(vlSelfRef.Jerry_PL_main__DOT__UnsignedLess));
        bufp->chgIData(oldp+46,(vlSelfRef.Jerry_PL_main__DOT__ALUResult),32);
        bufp->chgBit(oldp+47,(vlSelfRef.Jerry_PL_main__DOT__RegWriteM));
        bufp->chgCData(oldp+48,(vlSelfRef.Jerry_PL_main__DOT__ResultSrcM),2);
        bufp->chgBit(oldp+49,(vlSelfRef.Jerry_PL_main__DOT__MemWriteM));
        bufp->chgIData(oldp+50,(vlSelfRef.Jerry_PL_main__DOT__ALUResultM),32);
        bufp->chgIData(oldp+51,(vlSelfRef.Jerry_PL_main__DOT__WriteDataM),32);
        bufp->chgIData(oldp+52,(vlSelfRef.Jerry_PL_main__DOT__PCPlus4M),32);
        bufp->chgIData(oldp+53,(vlSelfRef.Jerry_PL_main__DOT__ImmExtM),32);
        bufp->chgCData(oldp+54,(vlSelfRef.Jerry_PL_main__DOT__RdM),5);
        bufp->chgCData(oldp+55,(vlSelfRef.Jerry_PL_main__DOT__funct3M),3);
        bufp->chgIData(oldp+56,(vlSelfRef.Jerry_PL_main__DOT__DOutDM),32);
        bufp->chgBit(oldp+57,(vlSelfRef.Jerry_PL_main__DOT__RegWriteW));
        bufp->chgCData(oldp+58,(vlSelfRef.Jerry_PL_main__DOT__ResultSrcW),2);
        bufp->chgIData(oldp+59,(vlSelfRef.Jerry_PL_main__DOT__ReadDataW),32);
        bufp->chgIData(oldp+60,(vlSelfRef.Jerry_PL_main__DOT__ALUResultW),32);
        bufp->chgIData(oldp+61,(vlSelfRef.Jerry_PL_main__DOT__PCPlus4W),32);
        bufp->chgIData(oldp+62,(vlSelfRef.Jerry_PL_main__DOT__ImmExtW),32);
        bufp->chgCData(oldp+63,(vlSelfRef.Jerry_PL_main__DOT__RdW),5);
        bufp->chgIData(oldp+64,(vlSelfRef.Jerry_PL_main__DOT__DInReg),32);
        bufp->chgIData(oldp+65,((0x1ffffU & vlSelfRef.Jerry_PL_main__DOT__ALUResultM)),17);
        bufp->chgIData(oldp+66,(vlSelfRef.Jerry_PL_main__DOT__DataMemory__DOT__Ad),17);
        bufp->chgCData(oldp+67,((0x1fU & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+68,((0x1fU & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+69,((1U & (IData)(vlSelfRef.Jerry_PL_main__DOT__PCSrcE))));
        bufp->chgBit(oldp+70,((1U & (IData)(vlSelfRef.Jerry_PL_main__DOT__ResultSrcE))));
        bufp->chgIData(oldp+71,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[0]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[1]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[2]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[3]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[4]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[5]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[6]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[7]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[8]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[9]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[10]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[11]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[12]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[13]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[14]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[15]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[16]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[17]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[18]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[19]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[20]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[21]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[22]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[23]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[24]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[25]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[26]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[27]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[28]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[29]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[30]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.Jerry_PL_main__DOT__M4__DOT__RegArr[31]),32);
        bufp->chgCData(oldp+103,((0x7fU & vlSelfRef.Jerry_PL_main__DOT__InstrD)),7);
        bufp->chgCData(oldp+104,((7U & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+105,((0x1fU & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                           >> 7U))),5);
        bufp->chgBit(oldp+106,((1U & (vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+107,((vlSelfRef.Jerry_PL_main__DOT__InstrD 
                                >> 0x1fU)));
        bufp->chgSData(oldp+108,((0xffffU & vlSelfRef.Jerry_PL_main__DOT__PC)),16);
    }
    bufp->chgBit(oldp+109,(vlSelfRef.clk));
    bufp->chgBit(oldp+110,(vlSelfRef.rst));
    bufp->chgBit(oldp+111,(vlSelfRef.TRIGGER));
    bufp->chgIData(oldp+112,(vlSelfRef.A0),32);
    bufp->chgIData(oldp+113,(vlSelfRef.a1),32);
    bufp->chgIData(oldp+114,(vlSelfRef.a2),32);
    bufp->chgIData(oldp+115,(vlSelfRef.a3),32);
    bufp->chgIData(oldp+116,(vlSelfRef.a4),32);
    bufp->chgIData(oldp+117,(vlSelfRef.a5),32);
    bufp->chgIData(oldp+118,(vlSelfRef.a6),32);
    bufp->chgIData(oldp+119,(vlSelfRef.a7),32);
    bufp->chgIData(oldp+120,(vlSelfRef.s0),32);
    bufp->chgIData(oldp+121,(vlSelfRef.s1),32);
    bufp->chgIData(oldp+122,(vlSelfRef.s2),32);
    bufp->chgIData(oldp+123,(vlSelfRef.s3),32);
    bufp->chgIData(oldp+124,(vlSelfRef.s4),32);
    bufp->chgIData(oldp+125,(vlSelfRef.s5),32);
    bufp->chgIData(oldp+126,(vlSelfRef.s6),32);
    bufp->chgIData(oldp+127,(vlSelfRef.s7),32);
    bufp->chgIData(oldp+128,(vlSelfRef.s8),32);
    bufp->chgIData(oldp+129,(vlSelfRef.s9),32);
    bufp->chgIData(oldp+130,(vlSelfRef.s10),32);
    bufp->chgIData(oldp+131,(vlSelfRef.s11),32);
    bufp->chgIData(oldp+132,(vlSelfRef.t0),32);
    bufp->chgIData(oldp+133,(vlSelfRef.t1),32);
    bufp->chgIData(oldp+134,(vlSelfRef.t2),32);
    bufp->chgIData(oldp+135,(vlSelfRef.t3),32);
    bufp->chgIData(oldp+136,(vlSelfRef.t4),32);
    bufp->chgIData(oldp+137,(vlSelfRef.t5),32);
    bufp->chgIData(oldp+138,(vlSelfRef.t6),32);
}

void VJerry_PL_main___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJerry_PL_main___024root__trace_cleanup\n"); );
    // Init
    VJerry_PL_main___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VJerry_PL_main___024root*>(voidSelf);
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
