// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain_top__Syms.h"


VL_ATTR_COLD void Vmain_top___024root__trace_init_sub__TOP__0(Vmain_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+59,"clk", false,-1);
    tracep->declBit(c+60,"rst", false,-1);
    tracep->declBit(c+61,"TRIGGER", false,-1);
    tracep->declBus(c+62,"Result", false,-1, 31,0);
    tracep->declBus(c+63,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("main_top ");
    tracep->declBus(c+66,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+59,"clk", false,-1);
    tracep->declBit(c+60,"rst", false,-1);
    tracep->declBit(c+61,"TRIGGER", false,-1);
    tracep->declBus(c+62,"Result", false,-1, 31,0);
    tracep->declBus(c+63,"a0", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+64,"PCN", false,-1, 31,0);
    tracep->declBus(c+2,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+65,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->declBus(c+45,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+4,"RD1", false,-1, 31,0);
    tracep->declBus(c+5,"RD2", false,-1, 31,0);
    tracep->declBus(c+46,"SrcB", false,-1, 31,0);
    tracep->declBus(c+47,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+48,"ReadData", false,-1, 31,0);
    tracep->declBus(c+67,"DIn", false,-1, 31,0);
    tracep->declBit(c+49,"MemWrite", false,-1);
    tracep->declBit(c+50,"ALUSrc", false,-1);
    tracep->declBit(c+51,"RegWrite", false,-1);
    tracep->declBus(c+52,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+53,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+54,"IMMsrc", false,-1, 2,0);
    tracep->declBus(c+55,"ALUop", false,-1, 2,0);
    tracep->declBus(c+56,"ALUCtrl", false,-1, 3,0);
    tracep->declBit(c+57,"branch", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+66,"W", false,-1, 31,0);
    tracep->declBus(c+4,"SrcA", false,-1, 31,0);
    tracep->declBus(c+46,"SrcB", false,-1, 31,0);
    tracep->declBus(c+56,"ALUCtrl", false,-1, 3,0);
    tracep->declBus(c+47,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+57,"branch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUDecode ");
    tracep->declBus(c+6,"funct3", false,-1, 2,0);
    tracep->declBit(c+7,"funct75", false,-1);
    tracep->declBus(c+55,"ALUop", false,-1, 2,0);
    tracep->declBus(c+56,"ALUCtrl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch ");
    tracep->declBus(c+66,"W", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+45,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+65,"PCTarget", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+8,"opcode", false,-1, 6,0);
    tracep->declBit(c+57,"branch", false,-1);
    tracep->declBus(c+52,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+53,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+49,"MemWrite", false,-1);
    tracep->declBit(c+50,"ALUSrc", false,-1);
    tracep->declBus(c+54,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+51,"RegWrite", false,-1);
    tracep->declBus(c+55,"ALUop", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DataMemory ");
    tracep->declBus(c+66,"WA", false,-1, 31,0);
    tracep->declBus(c+68,"WAM", false,-1, 31,0);
    tracep->declBus(c+69,"WB", false,-1, 31,0);
    tracep->declBus(c+66,"WD", false,-1, 31,0);
    tracep->declBit(c+59,"clk", false,-1);
    tracep->declBus(c+47,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+49,"MemWrite", false,-1);
    tracep->declBus(c+6,"funct3", false,-1, 2,0);
    tracep->declBus(c+67,"WriteData", false,-1, 31,0);
    tracep->declBus(c+48,"ReadData", false,-1, 31,0);
    tracep->declBus(c+58,"AdM", false,-1, 16,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Extend ");
    tracep->declBus(c+66,"W", false,-1, 31,0);
    tracep->declBus(c+54,"IMMsrc", false,-1, 2,0);
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->declBus(c+45,"ImmExt", false,-1, 31,0);
    tracep->declBit(c+9,"sign", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Incrementby4 ");
    tracep->declBus(c+66,"W", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+2,"PCPlus4", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstructionMemory ");
    tracep->declBus(c+68,"WAD", false,-1, 31,0);
    tracep->declBus(c+69,"WD", false,-1, 31,0);
    tracep->declBus(c+66,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"AddrIn", false,-1, 31,0);
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCReg ");
    tracep->declBus(c+66,"W", false,-1, 31,0);
    tracep->declBit(c+59,"clk", false,-1);
    tracep->declBit(c+60,"rst", false,-1);
    tracep->declBus(c+64,"PCN", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCSrc_mux ");
    tracep->declBus(c+66,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+65,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+52,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+2,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+47,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+64,"PCN", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBus(c+70,"WAD", false,-1, 31,0);
    tracep->declBus(c+66,"WD", false,-1, 31,0);
    tracep->declBit(c+59,"clk", false,-1);
    tracep->declBit(c+51,"RegWrite", false,-1);
    tracep->declBit(c+61,"TRIGGER", false,-1);
    tracep->declBus(c+10,"AdIn", false,-1, 4,0);
    tracep->declBus(c+11,"AdOut1", false,-1, 4,0);
    tracep->declBus(c+12,"AdOut2", false,-1, 4,0);
    tracep->declBus(c+62,"DIn", false,-1, 31,0);
    tracep->declBus(c+4,"RD1", false,-1, 31,0);
    tracep->declBus(c+5,"RD2", false,-1, 31,0);
    tracep->declBus(c+63,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+13+i*1,"RegArr", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SrcB_mux ");
    tracep->declBus(c+66,"W", false,-1, 31,0);
    tracep->declBit(c+50,"ALUSrc", false,-1);
    tracep->declBus(c+5,"RD2", false,-1, 31,0);
    tracep->declBus(c+45,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+46,"SrcB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WriteBack_mux ");
    tracep->declBus(c+66,"W", false,-1, 31,0);
    tracep->declBus(c+48,"ReadData", false,-1, 31,0);
    tracep->declBus(c+47,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+53,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+62,"Result", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vmain_top___024root__trace_init_top(Vmain_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root__trace_init_top\n"); );
    // Body
    Vmain_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmain_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmain_top___024root__trace_register(Vmain_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmain_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmain_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmain_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmain_top___024root__trace_full_sub_0(Vmain_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root__trace_full_top_0\n"); );
    // Init
    Vmain_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_top___024root*>(voidSelf);
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain_top___024root__trace_full_sub_0(Vmain_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->main_top__DOT__PC),32);
    bufp->fullIData(oldp+2,(((IData)(4U) + vlSelf->main_top__DOT__PC)),32);
    bufp->fullIData(oldp+3,(vlSelf->main_top__DOT__instr),32);
    bufp->fullIData(oldp+4,(vlSelf->main_top__DOT__RD1),32);
    bufp->fullIData(oldp+5,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
                            [(0x1fU & (vlSelf->main_top__DOT__instr 
                                       >> 0x14U))]),32);
    bufp->fullCData(oldp+6,((7U & (vlSelf->main_top__DOT__instr 
                                   >> 0xcU))),3);
    bufp->fullBit(oldp+7,((1U & (vlSelf->main_top__DOT__instr 
                                 >> 0x1eU))));
    bufp->fullCData(oldp+8,((0x7fU & vlSelf->main_top__DOT__instr)),7);
    bufp->fullBit(oldp+9,((vlSelf->main_top__DOT__instr 
                           >> 0x1fU)));
    bufp->fullCData(oldp+10,((0x1fU & (vlSelf->main_top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->main_top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+12,((0x1fU & (vlSelf->main_top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+13,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[0]),32);
    bufp->fullIData(oldp+14,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[1]),32);
    bufp->fullIData(oldp+15,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[2]),32);
    bufp->fullIData(oldp+16,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[3]),32);
    bufp->fullIData(oldp+17,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[4]),32);
    bufp->fullIData(oldp+18,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[5]),32);
    bufp->fullIData(oldp+19,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[6]),32);
    bufp->fullIData(oldp+20,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[7]),32);
    bufp->fullIData(oldp+21,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[8]),32);
    bufp->fullIData(oldp+22,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[9]),32);
    bufp->fullIData(oldp+23,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[10]),32);
    bufp->fullIData(oldp+24,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[11]),32);
    bufp->fullIData(oldp+25,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[12]),32);
    bufp->fullIData(oldp+26,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[13]),32);
    bufp->fullIData(oldp+27,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[14]),32);
    bufp->fullIData(oldp+28,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[15]),32);
    bufp->fullIData(oldp+29,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[16]),32);
    bufp->fullIData(oldp+30,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[17]),32);
    bufp->fullIData(oldp+31,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[18]),32);
    bufp->fullIData(oldp+32,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[19]),32);
    bufp->fullIData(oldp+33,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[20]),32);
    bufp->fullIData(oldp+34,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[21]),32);
    bufp->fullIData(oldp+35,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[22]),32);
    bufp->fullIData(oldp+36,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[23]),32);
    bufp->fullIData(oldp+37,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[24]),32);
    bufp->fullIData(oldp+38,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[25]),32);
    bufp->fullIData(oldp+39,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[26]),32);
    bufp->fullIData(oldp+40,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[27]),32);
    bufp->fullIData(oldp+41,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[28]),32);
    bufp->fullIData(oldp+42,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[29]),32);
    bufp->fullIData(oldp+43,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[30]),32);
    bufp->fullIData(oldp+44,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[31]),32);
    bufp->fullIData(oldp+45,(vlSelf->main_top__DOT__ImmExt),32);
    bufp->fullIData(oldp+46,(vlSelf->main_top__DOT__SrcB),32);
    bufp->fullIData(oldp+47,(vlSelf->main_top__DOT__ALUResult),32);
    bufp->fullIData(oldp+48,(vlSelf->main_top__DOT__ReadData),32);
    bufp->fullBit(oldp+49,(vlSelf->main_top__DOT__MemWrite));
    bufp->fullBit(oldp+50,(vlSelf->main_top__DOT__ALUSrc));
    bufp->fullBit(oldp+51,(vlSelf->main_top__DOT__RegWrite));
    bufp->fullCData(oldp+52,(vlSelf->main_top__DOT__PCSrc),2);
    bufp->fullCData(oldp+53,(vlSelf->main_top__DOT__ResultSrc),2);
    bufp->fullCData(oldp+54,(vlSelf->main_top__DOT__IMMsrc),3);
    bufp->fullCData(oldp+55,(vlSelf->main_top__DOT__ALUop),3);
    bufp->fullCData(oldp+56,(vlSelf->main_top__DOT__ALUCtrl),4);
    bufp->fullBit(oldp+57,(vlSelf->main_top__DOT__branch));
    bufp->fullIData(oldp+58,(vlSelf->main_top__DOT__DataMemory__DOT__AdM),17);
    bufp->fullBit(oldp+59,(vlSelf->clk));
    bufp->fullBit(oldp+60,(vlSelf->rst));
    bufp->fullBit(oldp+61,(vlSelf->TRIGGER));
    bufp->fullIData(oldp+62,(vlSelf->Result),32);
    bufp->fullIData(oldp+63,(vlSelf->a0),32);
    bufp->fullIData(oldp+64,(((0U == (IData)(vlSelf->main_top__DOT__PCSrc))
                               ? ((IData)(4U) + vlSelf->main_top__DOT__PC)
                               : ((1U == (IData)(vlSelf->main_top__DOT__PCSrc))
                                   ? (vlSelf->main_top__DOT__PC 
                                      + vlSelf->main_top__DOT__ImmExt)
                                   : ((3U == (IData)(vlSelf->main_top__DOT__PCSrc))
                                       ? vlSelf->main_top__DOT__ALUResult
                                       : ((IData)(4U) 
                                          + vlSelf->main_top__DOT__PC))))),32);
    bufp->fullIData(oldp+65,((vlSelf->main_top__DOT__PC 
                              + vlSelf->main_top__DOT__ImmExt)),32);
    bufp->fullIData(oldp+66,(0x20U),32);
    bufp->fullIData(oldp+67,(vlSelf->main_top__DOT__DIn),32);
    bufp->fullIData(oldp+68,(0x11U),32);
    bufp->fullIData(oldp+69,(8U),32);
    bufp->fullIData(oldp+70,(5U),32);
}
