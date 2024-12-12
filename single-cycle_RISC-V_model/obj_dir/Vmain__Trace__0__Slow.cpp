// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


VL_ATTR_COLD void Vmain___024root__trace_init_sub__TOP__0(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBit(c+68,"trigger_in", false,-1);
    tracep->declBus(c+69,"A0", false,-1, 31,0);
    tracep->pushNamePrefix("main ");
    tracep->declBus(c+70,"WA", false,-1, 31,0);
    tracep->declBus(c+71,"WD", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBit(c+68,"trigger_in", false,-1);
    tracep->declBus(c+69,"A0", false,-1, 31,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+2,"IMMop", false,-1, 31,0);
    tracep->declBus(c+3,"AdIn", false,-1, 4,0);
    tracep->declBus(c+4,"AdOut1", false,-1, 4,0);
    tracep->declBus(c+5,"AdOut2", false,-1, 4,0);
    tracep->declBus(c+72,"func3", false,-1, 2,0);
    tracep->declBit(c+6,"ALUsrc", false,-1);
    tracep->declBus(c+7,"ALUop", false,-1, 1,0);
    tracep->declBit(c+8,"RamWrite", false,-1);
    tracep->declBit(c+9,"RegWrite", false,-1);
    tracep->declBus(c+10,"IMMsrc", false,-1, 2,0);
    tracep->declBus(c+11,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+12,"PCsrc", false,-1, 1,0);
    tracep->declBus(c+13,"PC", false,-1, 31,0);
    tracep->declBus(c+14,"DOutAlu", false,-1, 31,0);
    tracep->declBit(c+15,"flag", false,-1);
    tracep->pushNamePrefix("C1 ");
    tracep->declBus(c+71,"W", false,-1, 31,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBit(c+15,"flag", false,-1);
    tracep->declBit(c+9,"RegWrite", false,-1);
    tracep->declBit(c+8,"RamWrite", false,-1);
    tracep->declBus(c+7,"ALUop", false,-1, 1,0);
    tracep->declBit(c+6,"ALUsrc", false,-1);
    tracep->declBus(c+10,"IMMsrc", false,-1, 2,0);
    tracep->declBus(c+12,"PCsrc", false,-1, 1,0);
    tracep->declBus(c+11,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+16,"op7", false,-1, 6,0);
    tracep->declBus(c+17,"PCsrc_req1", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("D1 ");
    tracep->declBus(c+70,"WAD", false,-1, 31,0);
    tracep->declBus(c+71,"WD", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+68,"trigger", false,-1);
    tracep->declBus(c+3,"AdIn", false,-1, 4,0);
    tracep->declBus(c+4,"AdOut1", false,-1, 4,0);
    tracep->declBus(c+5,"AdOut2", false,-1, 4,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+13,"PC", false,-1, 31,0);
    tracep->declBit(c+6,"ALUsrc", false,-1);
    tracep->declBus(c+7,"ALUop", false,-1, 1,0);
    tracep->declBus(c+11,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+9,"RegWrite", false,-1);
    tracep->declBit(c+8,"RamWrite", false,-1);
    tracep->declBus(c+10,"IMMsrc", false,-1, 2,0);
    tracep->declBus(c+69,"A0", false,-1, 31,0);
    tracep->declBit(c+15,"flag", false,-1);
    tracep->declBus(c+2,"IMM", false,-1, 31,0);
    tracep->declBus(c+14,"DOutAlu", false,-1, 31,0);
    tracep->declBus(c+18,"DOut1", false,-1, 31,0);
    tracep->declBus(c+19,"DOut2", false,-1, 31,0);
    tracep->declBus(c+20,"N2", false,-1, 31,0);
    tracep->declBus(c+21,"DInReg", false,-1, 31,0);
    tracep->declBus(c+22,"DOutRam", false,-1, 31,0);
    tracep->declBit(c+23,"op5", false,-1);
    tracep->declBit(c+24,"func75", false,-1);
    tracep->declBus(c+25,"func3", false,-1, 2,0);
    tracep->declBus(c+26,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+27,"ALUflag", false,-1, 2,0);
    tracep->pushNamePrefix("A1 ");
    tracep->declBus(c+71,"W", false,-1, 31,0);
    tracep->declBus(c+26,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+27,"ALUflag", false,-1, 2,0);
    tracep->declBus(c+18,"N1", false,-1, 31,0);
    tracep->declBus(c+20,"N2", false,-1, 31,0);
    tracep->declBus(c+14,"out", false,-1, 31,0);
    tracep->declBit(c+15,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("A11 ");
    tracep->declBus(c+25,"func3", false,-1, 2,0);
    tracep->declBus(c+7,"ALUop", false,-1, 1,0);
    tracep->declBit(c+24,"func75", false,-1);
    tracep->declBit(c+23,"op5", false,-1);
    tracep->declBus(c+26,"ALUctrl", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("A12 ");
    tracep->declBus(c+25,"func3", false,-1, 2,0);
    tracep->declBus(c+7,"ALUop", false,-1, 1,0);
    tracep->declBus(c+27,"ALUflag", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("I1 ");
    tracep->declBus(c+71,"W", false,-1, 31,0);
    tracep->declBus(c+10,"IMMsrc", false,-1, 2,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+2,"out", false,-1, 31,0);
    tracep->declBit(c+28,"sign", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+70,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+9,"WE3", false,-1);
    tracep->declBus(c+3,"write_addr", false,-1, 4,0);
    tracep->declBus(c+4,"A1", false,-1, 4,0);
    tracep->declBus(c+5,"A2", false,-1, 4,0);
    tracep->declBus(c+21,"WD3", false,-1, 31,0);
    tracep->declBit(c+68,"TRIGGER", false,-1);
    tracep->declBus(c+18,"DOut1", false,-1, 31,0);
    tracep->declBus(c+19,"DOut2", false,-1, 31,0);
    tracep->declBus(c+69,"A0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+29+i*1,"register_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+71,"WA", false,-1, 31,0);
    tracep->declBus(c+73,"WAM", false,-1, 31,0);
    tracep->declBus(c+74,"WB", false,-1, 31,0);
    tracep->declBus(c+71,"WD", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+14,"Ad", false,-1, 31,0);
    tracep->declBit(c+8,"RamWrite", false,-1);
    tracep->declBus(c+25,"func3", false,-1, 2,0);
    tracep->declBus(c+19,"DIn", false,-1, 31,0);
    tracep->declBus(c+22,"DOut", false,-1, 31,0);
    tracep->declBus(c+61,"AdM", false,-1, 17,0);
    tracep->declBus(c+62,"show", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("D2 ");
    tracep->declBus(c+71,"W", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBus(c+12,"PCsrc", false,-1, 1,0);
    tracep->declBus(c+2,"IMMop", false,-1, 31,0);
    tracep->declBus(c+14,"DOutAlu", false,-1, 31,0);
    tracep->declBus(c+13,"PC", false,-1, 31,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+63,"PCN", false,-1, 31,0);
    tracep->declBus(c+64,"branch_pc", false,-1, 31,0);
    tracep->pushNamePrefix("P1 ");
    tracep->declBus(c+71,"W", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBus(c+63,"PCN", false,-1, 31,0);
    tracep->declBus(c+13,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+74,"WAD", false,-1, 31,0);
    tracep->declBus(c+74,"WD", false,-1, 31,0);
    tracep->declBus(c+65,"AddrIn", false,-1, 7,0);
    tracep->declBus(c+1,"DOut", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vmain___024root__trace_init_top(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_top\n"); );
    // Body
    Vmain___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmain___024root__trace_register(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmain___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmain___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmain___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmain___024root__trace_full_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_top_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain___024root__trace_full_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->main__DOT__instr),32);
    bufp->fullIData(oldp+2,(vlSelf->main__DOT__IMMop),32);
    bufp->fullCData(oldp+3,((0x1fU & (vlSelf->main__DOT__instr 
                                      >> 7U))),5);
    bufp->fullCData(oldp+4,((0x1fU & (vlSelf->main__DOT__instr 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+5,((0x1fU & (vlSelf->main__DOT__instr 
                                      >> 0x14U))),5);
    bufp->fullBit(oldp+6,(vlSelf->main__DOT__ALUsrc));
    bufp->fullCData(oldp+7,(vlSelf->main__DOT__ALUop),2);
    bufp->fullBit(oldp+8,((0x23U == (0x7fU & vlSelf->main__DOT__instr))));
    bufp->fullBit(oldp+9,(vlSelf->main__DOT__RegWrite));
    bufp->fullCData(oldp+10,(vlSelf->main__DOT__IMMsrc),3);
    bufp->fullCData(oldp+11,(vlSelf->main__DOT__ResultSrc),2);
    bufp->fullCData(oldp+12,(vlSelf->main__DOT__PCsrc),2);
    bufp->fullIData(oldp+13,(vlSelf->main__DOT__PC),32);
    bufp->fullIData(oldp+14,(vlSelf->main__DOT__DOutAlu),32);
    bufp->fullBit(oldp+15,((1U & ((4U & (IData)(vlSelf->main__DOT__D1__DOT__ALUflag))
                                   ? (IData)(vlSelf->main__DOT__D1__DOT__ALUflag)
                                   : ((2U & (IData)(vlSelf->main__DOT__D1__DOT__ALUflag))
                                       ? (IData)(vlSelf->main__DOT__D1__DOT__ALUflag)
                                       : ((1U & (IData)(vlSelf->main__DOT__D1__DOT__ALUflag))
                                           ? ((0U != vlSelf->main__DOT__DOutAlu)
                                               ? 1U
                                               : 0U)
                                           : ((0U == vlSelf->main__DOT__DOutAlu)
                                               ? 1U
                                               : 0U)))))));
    bufp->fullCData(oldp+16,((0x7fU & vlSelf->main__DOT__instr)),7);
    bufp->fullCData(oldp+17,(vlSelf->main__DOT__C1__DOT__PCsrc_req1),2);
    bufp->fullIData(oldp+18,(vlSelf->main__DOT__D1__DOT__DOut1),32);
    bufp->fullIData(oldp+19,(vlSelf->main__DOT__D1__DOT__DOut2),32);
    bufp->fullIData(oldp+20,(vlSelf->main__DOT__D1__DOT__N2),32);
    bufp->fullIData(oldp+21,(((2U & (IData)(vlSelf->main__DOT__ResultSrc))
                               ? ((1U & (IData)(vlSelf->main__DOT__ResultSrc))
                                   ? vlSelf->main__DOT__D1__DOT__N2
                                   : ((IData)(4U) + vlSelf->main__DOT__PC))
                               : ((1U & (IData)(vlSelf->main__DOT__ResultSrc))
                                   ? vlSelf->main__DOT__D1__DOT__DOutRam
                                   : vlSelf->main__DOT__DOutAlu))),32);
    bufp->fullIData(oldp+22,(vlSelf->main__DOT__D1__DOT__DOutRam),32);
    bufp->fullBit(oldp+23,((1U & (vlSelf->main__DOT__instr 
                                  >> 1U))));
    bufp->fullBit(oldp+24,((1U & (vlSelf->main__DOT__instr 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+25,((7U & (vlSelf->main__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+26,(vlSelf->main__DOT__D1__DOT__ALUctrl),3);
    bufp->fullCData(oldp+27,(vlSelf->main__DOT__D1__DOT__ALUflag),3);
    bufp->fullBit(oldp+28,((vlSelf->main__DOT__instr 
                            >> 0x1fU)));
    bufp->fullIData(oldp+29,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[0]),32);
    bufp->fullIData(oldp+30,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[1]),32);
    bufp->fullIData(oldp+31,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[2]),32);
    bufp->fullIData(oldp+32,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[3]),32);
    bufp->fullIData(oldp+33,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[4]),32);
    bufp->fullIData(oldp+34,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[5]),32);
    bufp->fullIData(oldp+35,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[6]),32);
    bufp->fullIData(oldp+36,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[7]),32);
    bufp->fullIData(oldp+37,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[8]),32);
    bufp->fullIData(oldp+38,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[9]),32);
    bufp->fullIData(oldp+39,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[10]),32);
    bufp->fullIData(oldp+40,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[11]),32);
    bufp->fullIData(oldp+41,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[12]),32);
    bufp->fullIData(oldp+42,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[13]),32);
    bufp->fullIData(oldp+43,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[14]),32);
    bufp->fullIData(oldp+44,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[15]),32);
    bufp->fullIData(oldp+45,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[16]),32);
    bufp->fullIData(oldp+46,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[17]),32);
    bufp->fullIData(oldp+47,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[18]),32);
    bufp->fullIData(oldp+48,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[19]),32);
    bufp->fullIData(oldp+49,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[20]),32);
    bufp->fullIData(oldp+50,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[21]),32);
    bufp->fullIData(oldp+51,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[22]),32);
    bufp->fullIData(oldp+52,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[23]),32);
    bufp->fullIData(oldp+53,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[24]),32);
    bufp->fullIData(oldp+54,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[25]),32);
    bufp->fullIData(oldp+55,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[26]),32);
    bufp->fullIData(oldp+56,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[27]),32);
    bufp->fullIData(oldp+57,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[28]),32);
    bufp->fullIData(oldp+58,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[29]),32);
    bufp->fullIData(oldp+59,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[30]),32);
    bufp->fullIData(oldp+60,(vlSelf->main__DOT__D1__DOT__R1__DOT__register_array[31]),32);
    bufp->fullIData(oldp+61,(vlSelf->main__DOT__D1__DOT__R2__DOT__AdM),18);
    bufp->fullIData(oldp+62,(((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                               [0x10U] << 0x18U) | 
                              ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                [0x11U] << 0x10U) | 
                               ((vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                 [0x12U] << 8U) | vlSelf->main__DOT__D1__DOT__R2__DOT__RamArray
                                [0x13U])))),32);
    bufp->fullIData(oldp+63,(((0U == (IData)(vlSelf->main__DOT__PCsrc))
                               ? ((IData)(4U) + vlSelf->main__DOT__PC)
                               : ((1U == (IData)(vlSelf->main__DOT__PCsrc))
                                   ? (vlSelf->main__DOT__PC 
                                      + vlSelf->main__DOT__IMMop)
                                   : ((3U == (IData)(vlSelf->main__DOT__PCsrc))
                                       ? vlSelf->main__DOT__DOutAlu
                                       : ((IData)(4U) 
                                          + vlSelf->main__DOT__PC))))),32);
    bufp->fullIData(oldp+64,((vlSelf->main__DOT__PC 
                              + vlSelf->main__DOT__IMMop)),32);
    bufp->fullCData(oldp+65,((0xffU & vlSelf->main__DOT__PC)),8);
    bufp->fullBit(oldp+66,(vlSelf->clk));
    bufp->fullBit(oldp+67,(vlSelf->rst));
    bufp->fullBit(oldp+68,(vlSelf->trigger_in));
    bufp->fullIData(oldp+69,(vlSelf->A0),32);
    bufp->fullIData(oldp+70,(5U),32);
    bufp->fullIData(oldp+71,(0x20U),32);
    bufp->fullCData(oldp+72,(vlSelf->main__DOT__func3),3);
    bufp->fullIData(oldp+73,(0x12U),32);
    bufp->fullIData(oldp+74,(8U),32);
}
