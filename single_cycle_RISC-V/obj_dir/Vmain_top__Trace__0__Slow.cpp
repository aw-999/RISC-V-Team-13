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
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBus(c+68,"Result", false,-1, 31,0);
    tracep->declBus(c+69,"a0", false,-1, 31,0);
    tracep->declBus(c+70,"a1", false,-1, 31,0);
    tracep->declBus(c+71,"a2", false,-1, 31,0);
    tracep->declBus(c+72,"a3", false,-1, 31,0);
    tracep->declBus(c+73,"a4", false,-1, 31,0);
    tracep->declBus(c+74,"a5", false,-1, 31,0);
    tracep->declBus(c+75,"a6", false,-1, 31,0);
    tracep->declBus(c+76,"a7", false,-1, 31,0);
    tracep->declBus(c+77,"s0", false,-1, 31,0);
    tracep->declBus(c+78,"s1", false,-1, 31,0);
    tracep->declBus(c+79,"s2", false,-1, 31,0);
    tracep->declBus(c+80,"s3", false,-1, 31,0);
    tracep->declBus(c+81,"s4", false,-1, 31,0);
    tracep->declBus(c+82,"s5", false,-1, 31,0);
    tracep->declBus(c+83,"s6", false,-1, 31,0);
    tracep->declBus(c+84,"s7", false,-1, 31,0);
    tracep->declBus(c+85,"s8", false,-1, 31,0);
    tracep->declBus(c+86,"s9", false,-1, 31,0);
    tracep->declBus(c+87,"s10", false,-1, 31,0);
    tracep->declBus(c+88,"s11", false,-1, 31,0);
    tracep->declBus(c+89,"t0", false,-1, 31,0);
    tracep->declBus(c+90,"t1", false,-1, 31,0);
    tracep->declBus(c+91,"t2", false,-1, 31,0);
    tracep->declBus(c+92,"t3", false,-1, 31,0);
    tracep->declBus(c+93,"t4", false,-1, 31,0);
    tracep->declBus(c+94,"t5", false,-1, 31,0);
    tracep->declBus(c+95,"t6", false,-1, 31,0);
    tracep->pushNamePrefix("main_top ");
    tracep->declBus(c+97,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBus(c+68,"Result", false,-1, 31,0);
    tracep->declBus(c+69,"a0", false,-1, 31,0);
    tracep->declBus(c+70,"a1", false,-1, 31,0);
    tracep->declBus(c+71,"a2", false,-1, 31,0);
    tracep->declBus(c+72,"a3", false,-1, 31,0);
    tracep->declBus(c+73,"a4", false,-1, 31,0);
    tracep->declBus(c+74,"a5", false,-1, 31,0);
    tracep->declBus(c+75,"a6", false,-1, 31,0);
    tracep->declBus(c+76,"a7", false,-1, 31,0);
    tracep->declBus(c+77,"s0", false,-1, 31,0);
    tracep->declBus(c+78,"s1", false,-1, 31,0);
    tracep->declBus(c+79,"s2", false,-1, 31,0);
    tracep->declBus(c+80,"s3", false,-1, 31,0);
    tracep->declBus(c+81,"s4", false,-1, 31,0);
    tracep->declBus(c+82,"s5", false,-1, 31,0);
    tracep->declBus(c+83,"s6", false,-1, 31,0);
    tracep->declBus(c+84,"s7", false,-1, 31,0);
    tracep->declBus(c+85,"s8", false,-1, 31,0);
    tracep->declBus(c+86,"s9", false,-1, 31,0);
    tracep->declBus(c+87,"s10", false,-1, 31,0);
    tracep->declBus(c+88,"s11", false,-1, 31,0);
    tracep->declBus(c+89,"t0", false,-1, 31,0);
    tracep->declBus(c+90,"t1", false,-1, 31,0);
    tracep->declBus(c+91,"t2", false,-1, 31,0);
    tracep->declBus(c+92,"t3", false,-1, 31,0);
    tracep->declBus(c+93,"t4", false,-1, 31,0);
    tracep->declBus(c+94,"t5", false,-1, 31,0);
    tracep->declBus(c+95,"t6", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+96,"PCN", false,-1, 31,0);
    tracep->declBus(c+2,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+3,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+4,"instr", false,-1, 31,0);
    tracep->declBus(c+5,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+6,"RD1", false,-1, 31,0);
    tracep->declBus(c+7,"RD2", false,-1, 31,0);
    tracep->declBus(c+49,"SrcB", false,-1, 31,0);
    tracep->declBus(c+50,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+51,"ReadData", false,-1, 31,0);
    tracep->declBus(c+98,"DIn", false,-1, 31,0);
    tracep->declBit(c+52,"MemWrite", false,-1);
    tracep->declBit(c+53,"ALUSrc", false,-1);
    tracep->declBit(c+54,"RegWrite", false,-1);
    tracep->declBus(c+55,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+56,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+99,"IMMsrc", false,-1, 2,0);
    tracep->declBus(c+57,"ALUop", false,-1, 2,0);
    tracep->declBus(c+58,"ALUCtrl", false,-1, 3,0);
    tracep->declBit(c+59,"ZeroFlag", false,-1);
    tracep->declBit(c+60,"NegativeFlag", false,-1);
    tracep->declBit(c+61,"UnsignedLess", false,-1);
    tracep->declBit(c+62,"ImmSrc", false,-1);
    tracep->declBit(c+100,"TRIGGER", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+97,"W", false,-1, 31,0);
    tracep->declBus(c+6,"SrcA", false,-1, 31,0);
    tracep->declBus(c+49,"SrcB", false,-1, 31,0);
    tracep->declBus(c+58,"ALUCtrl", false,-1, 3,0);
    tracep->declBus(c+50,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+59,"ZeroFlag", false,-1);
    tracep->declBit(c+60,"NegativeFlag", false,-1);
    tracep->declBit(c+61,"UnsignedLess", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUDecode ");
    tracep->declBit(c+8,"opcode5", false,-1);
    tracep->declBus(c+9,"funct3", false,-1, 2,0);
    tracep->declBit(c+10,"funct75", false,-1);
    tracep->declBus(c+57,"ALUop", false,-1, 2,0);
    tracep->declBus(c+58,"ALUCtrl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch ");
    tracep->declBus(c+97,"W", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+5,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+3,"PCTarget", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+11,"opcode", false,-1, 6,0);
    tracep->declBit(c+59,"ZeroFlag", false,-1);
    tracep->declBit(c+60,"NegativeFlag", false,-1);
    tracep->declBit(c+61,"UnsignedLess", false,-1);
    tracep->declBus(c+9,"funct3", false,-1, 2,0);
    tracep->declBus(c+55,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+56,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+52,"MemWrite", false,-1);
    tracep->declBit(c+53,"ALUSrc", false,-1);
    tracep->declBus(c+63,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+54,"RegWrite", false,-1);
    tracep->declBus(c+57,"ALUop", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DataMemory ");
    tracep->declBus(c+97,"WA", false,-1, 31,0);
    tracep->declBus(c+101,"WAM", false,-1, 31,0);
    tracep->declBus(c+102,"WB", false,-1, 31,0);
    tracep->declBus(c+97,"WD", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+50,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+52,"MemWrite", false,-1);
    tracep->declBus(c+9,"funct3", false,-1, 2,0);
    tracep->declBus(c+98,"WriteData", false,-1, 31,0);
    tracep->declBus(c+51,"ReadData", false,-1, 31,0);
    tracep->declBus(c+64,"AdM", false,-1, 19,0);
    tracep->declBus(c+12,"show", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Extend ");
    tracep->declBus(c+97,"W", false,-1, 31,0);
    tracep->declBus(c+99,"IMMsrc", false,-1, 2,0);
    tracep->declBus(c+4,"instr", false,-1, 31,0);
    tracep->declBus(c+5,"ImmExt", false,-1, 31,0);
    tracep->declBit(c+13,"sign", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Incrementby4 ");
    tracep->declBus(c+97,"W", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+2,"PCPlus4", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstructionMemory ");
    tracep->declBus(c+103,"WAD", false,-1, 31,0);
    tracep->declBus(c+102,"WD", false,-1, 31,0);
    tracep->declBus(c+97,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"AddrIn", false,-1, 31,0);
    tracep->declBus(c+4,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCReg ");
    tracep->declBus(c+97,"W", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBus(c+96,"PCN", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCSrc_mux ");
    tracep->declBus(c+97,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+55,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+2,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+50,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+96,"PCN", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBus(c+104,"WAD", false,-1, 31,0);
    tracep->declBus(c+97,"WD", false,-1, 31,0);
    tracep->declBus(c+105,"R0", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+54,"RegWrite", false,-1);
    tracep->declBit(c+100,"TRIGGER", false,-1);
    tracep->declBus(c+14,"AdIn", false,-1, 4,0);
    tracep->declBus(c+15,"AdOut1", false,-1, 4,0);
    tracep->declBus(c+16,"AdOut2", false,-1, 4,0);
    tracep->declBus(c+68,"DIn", false,-1, 31,0);
    tracep->declBus(c+6,"RD1", false,-1, 31,0);
    tracep->declBus(c+7,"RD2", false,-1, 31,0);
    tracep->declBus(c+69,"a0", false,-1, 31,0);
    tracep->declBus(c+70,"a1", false,-1, 31,0);
    tracep->declBus(c+71,"a2", false,-1, 31,0);
    tracep->declBus(c+72,"a3", false,-1, 31,0);
    tracep->declBus(c+73,"a4", false,-1, 31,0);
    tracep->declBus(c+74,"a5", false,-1, 31,0);
    tracep->declBus(c+75,"a6", false,-1, 31,0);
    tracep->declBus(c+76,"a7", false,-1, 31,0);
    tracep->declBus(c+77,"s0", false,-1, 31,0);
    tracep->declBus(c+78,"s1", false,-1, 31,0);
    tracep->declBus(c+79,"s2", false,-1, 31,0);
    tracep->declBus(c+80,"s3", false,-1, 31,0);
    tracep->declBus(c+81,"s4", false,-1, 31,0);
    tracep->declBus(c+82,"s5", false,-1, 31,0);
    tracep->declBus(c+83,"s6", false,-1, 31,0);
    tracep->declBus(c+84,"s7", false,-1, 31,0);
    tracep->declBus(c+85,"s8", false,-1, 31,0);
    tracep->declBus(c+86,"s9", false,-1, 31,0);
    tracep->declBus(c+87,"s10", false,-1, 31,0);
    tracep->declBus(c+88,"s11", false,-1, 31,0);
    tracep->declBus(c+89,"t0", false,-1, 31,0);
    tracep->declBus(c+90,"t1", false,-1, 31,0);
    tracep->declBus(c+91,"t2", false,-1, 31,0);
    tracep->declBus(c+92,"t3", false,-1, 31,0);
    tracep->declBus(c+93,"t4", false,-1, 31,0);
    tracep->declBus(c+94,"t5", false,-1, 31,0);
    tracep->declBus(c+95,"t6", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+17+i*1,"RegArr", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SrcB_mux ");
    tracep->declBus(c+97,"W", false,-1, 31,0);
    tracep->declBus(c+104,"AW", false,-1, 31,0);
    tracep->declBit(c+53,"ALUSrc", false,-1);
    tracep->declBus(c+7,"RD2", false,-1, 31,0);
    tracep->declBus(c+5,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+49,"SrcB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WriteBack_mux ");
    tracep->declBus(c+97,"W", false,-1, 31,0);
    tracep->declBus(c+51,"ReadData", false,-1, 31,0);
    tracep->declBus(c+50,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+65,"ResultSrc", false,-1);
    tracep->declBus(c+68,"Result", false,-1, 31,0);
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
    bufp->fullIData(oldp+3,((vlSelf->main_top__DOT__PC 
                             + vlSelf->main_top__DOT__ImmExt)),32);
    bufp->fullIData(oldp+4,(vlSelf->main_top__DOT__instr),32);
    bufp->fullIData(oldp+5,(vlSelf->main_top__DOT__ImmExt),32);
    bufp->fullIData(oldp+6,(vlSelf->main_top__DOT__RD1),32);
    bufp->fullIData(oldp+7,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr
                            [(0x1fU & (vlSelf->main_top__DOT__instr 
                                       >> 0x14U))]),32);
    bufp->fullBit(oldp+8,((1U & (vlSelf->main_top__DOT__instr 
                                 >> 5U))));
    bufp->fullCData(oldp+9,((7U & (vlSelf->main_top__DOT__instr 
                                   >> 0xcU))),3);
    bufp->fullBit(oldp+10,((1U & (vlSelf->main_top__DOT__instr 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+11,((0x7fU & vlSelf->main_top__DOT__instr)),7);
    bufp->fullIData(oldp+12,(((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                               [0x10000U] << 0x18U) 
                              | ((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                  [0x10001U] << 0x10U) 
                                 | ((vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                     [0x10002U] << 8U) 
                                    | vlSelf->main_top__DOT__DataMemory__DOT__RamArray
                                    [0x10003U])))),32);
    bufp->fullBit(oldp+13,((vlSelf->main_top__DOT__instr 
                            >> 0x1fU)));
    bufp->fullCData(oldp+14,((0x1fU & (vlSelf->main_top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->main_top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->main_top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+17,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[0]),32);
    bufp->fullIData(oldp+18,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[1]),32);
    bufp->fullIData(oldp+19,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[2]),32);
    bufp->fullIData(oldp+20,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[3]),32);
    bufp->fullIData(oldp+21,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[4]),32);
    bufp->fullIData(oldp+22,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[5]),32);
    bufp->fullIData(oldp+23,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[6]),32);
    bufp->fullIData(oldp+24,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[7]),32);
    bufp->fullIData(oldp+25,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[8]),32);
    bufp->fullIData(oldp+26,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[9]),32);
    bufp->fullIData(oldp+27,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[10]),32);
    bufp->fullIData(oldp+28,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[11]),32);
    bufp->fullIData(oldp+29,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[12]),32);
    bufp->fullIData(oldp+30,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[13]),32);
    bufp->fullIData(oldp+31,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[14]),32);
    bufp->fullIData(oldp+32,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[15]),32);
    bufp->fullIData(oldp+33,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[16]),32);
    bufp->fullIData(oldp+34,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[17]),32);
    bufp->fullIData(oldp+35,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[18]),32);
    bufp->fullIData(oldp+36,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[19]),32);
    bufp->fullIData(oldp+37,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[20]),32);
    bufp->fullIData(oldp+38,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[21]),32);
    bufp->fullIData(oldp+39,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[22]),32);
    bufp->fullIData(oldp+40,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[23]),32);
    bufp->fullIData(oldp+41,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[24]),32);
    bufp->fullIData(oldp+42,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[25]),32);
    bufp->fullIData(oldp+43,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[26]),32);
    bufp->fullIData(oldp+44,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[27]),32);
    bufp->fullIData(oldp+45,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[28]),32);
    bufp->fullIData(oldp+46,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[29]),32);
    bufp->fullIData(oldp+47,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[30]),32);
    bufp->fullIData(oldp+48,(vlSelf->main_top__DOT__RegisterFile__DOT__RegArr[31]),32);
    bufp->fullIData(oldp+49,(vlSelf->main_top__DOT__SrcB),32);
    bufp->fullIData(oldp+50,(vlSelf->main_top__DOT__ALUResult),32);
    bufp->fullIData(oldp+51,(vlSelf->main_top__DOT__ReadData),32);
    bufp->fullBit(oldp+52,(vlSelf->main_top__DOT__MemWrite));
    bufp->fullBit(oldp+53,(vlSelf->main_top__DOT__ALUSrc));
    bufp->fullBit(oldp+54,(vlSelf->main_top__DOT__RegWrite));
    bufp->fullCData(oldp+55,(vlSelf->main_top__DOT__PCSrc),2);
    bufp->fullCData(oldp+56,(vlSelf->main_top__DOT__ResultSrc),2);
    bufp->fullCData(oldp+57,(vlSelf->main_top__DOT__ALUop),3);
    bufp->fullCData(oldp+58,(vlSelf->main_top__DOT__ALUCtrl),4);
    bufp->fullBit(oldp+59,(vlSelf->main_top__DOT__ZeroFlag));
    bufp->fullBit(oldp+60,(vlSelf->main_top__DOT__NegativeFlag));
    bufp->fullBit(oldp+61,(vlSelf->main_top__DOT__UnsignedLess));
    bufp->fullBit(oldp+62,((1U & (IData)(vlSelf->main_top__DOT____Vcellout__ControlUnit__ImmSrc))));
    bufp->fullCData(oldp+63,(vlSelf->main_top__DOT____Vcellout__ControlUnit__ImmSrc),3);
    bufp->fullIData(oldp+64,(vlSelf->main_top__DOT__DataMemory__DOT__AdM),20);
    bufp->fullBit(oldp+65,((1U & (IData)(vlSelf->main_top__DOT__ResultSrc))));
    bufp->fullBit(oldp+66,(vlSelf->clk));
    bufp->fullBit(oldp+67,(vlSelf->rst));
    bufp->fullIData(oldp+68,(vlSelf->Result),32);
    bufp->fullIData(oldp+69,(vlSelf->a0),32);
    bufp->fullIData(oldp+70,(vlSelf->a1),32);
    bufp->fullIData(oldp+71,(vlSelf->a2),32);
    bufp->fullIData(oldp+72,(vlSelf->a3),32);
    bufp->fullIData(oldp+73,(vlSelf->a4),32);
    bufp->fullIData(oldp+74,(vlSelf->a5),32);
    bufp->fullIData(oldp+75,(vlSelf->a6),32);
    bufp->fullIData(oldp+76,(vlSelf->a7),32);
    bufp->fullIData(oldp+77,(vlSelf->s0),32);
    bufp->fullIData(oldp+78,(vlSelf->s1),32);
    bufp->fullIData(oldp+79,(vlSelf->s2),32);
    bufp->fullIData(oldp+80,(vlSelf->s3),32);
    bufp->fullIData(oldp+81,(vlSelf->s4),32);
    bufp->fullIData(oldp+82,(vlSelf->s5),32);
    bufp->fullIData(oldp+83,(vlSelf->s6),32);
    bufp->fullIData(oldp+84,(vlSelf->s7),32);
    bufp->fullIData(oldp+85,(vlSelf->s8),32);
    bufp->fullIData(oldp+86,(vlSelf->s9),32);
    bufp->fullIData(oldp+87,(vlSelf->s10),32);
    bufp->fullIData(oldp+88,(vlSelf->s11),32);
    bufp->fullIData(oldp+89,(vlSelf->t0),32);
    bufp->fullIData(oldp+90,(vlSelf->t1),32);
    bufp->fullIData(oldp+91,(vlSelf->t2),32);
    bufp->fullIData(oldp+92,(vlSelf->t3),32);
    bufp->fullIData(oldp+93,(vlSelf->t4),32);
    bufp->fullIData(oldp+94,(vlSelf->t5),32);
    bufp->fullIData(oldp+95,(vlSelf->t6),32);
    bufp->fullIData(oldp+96,(((0U == (IData)(vlSelf->main_top__DOT__PCSrc))
                               ? ((IData)(4U) + vlSelf->main_top__DOT__PC)
                               : ((1U == (IData)(vlSelf->main_top__DOT__PCSrc))
                                   ? (vlSelf->main_top__DOT__PC 
                                      + vlSelf->main_top__DOT__ImmExt)
                                   : ((3U == (IData)(vlSelf->main_top__DOT__PCSrc))
                                       ? vlSelf->main_top__DOT__ALUResult
                                       : ((IData)(4U) 
                                          + vlSelf->main_top__DOT__PC))))),32);
    bufp->fullIData(oldp+97,(0x20U),32);
    bufp->fullIData(oldp+98,(vlSelf->main_top__DOT__DIn),32);
    bufp->fullCData(oldp+99,(vlSelf->main_top__DOT__IMMsrc),3);
    bufp->fullBit(oldp+100,(vlSelf->main_top__DOT__TRIGGER));
    bufp->fullIData(oldp+101,(0x14U),32);
    bufp->fullIData(oldp+102,(8U),32);
    bufp->fullIData(oldp+103,(0x10U),32);
    bufp->fullIData(oldp+104,(5U),32);
    bufp->fullIData(oldp+105,(0xaU),32);
}
