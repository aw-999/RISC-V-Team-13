// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


VL_ATTR_COLD void Vmain___024root__trace_init_sub__TOP__0(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+66,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"A0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("main", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+69,0,"WAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"A0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"PCN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"PCadd4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"PCaddIMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"DOutReg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"DOutReg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"N1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"N2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"DOutAlu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"AdDM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"DInDM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"DOutDM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"DInReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"PCsrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+14,0,"ALUsrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"ResultSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+74,0,"Opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+75,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+76,0,"func75",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"op5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"IMMctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"ALUop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"ALUctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+19,0,"flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"DMwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"ALUctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"N1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"N2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"DOutAlu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"flagZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"flagC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"flagS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"flagV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("A2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"IMM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"PCaddIMM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("A3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"PCadd4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("C1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"ALUop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+76,0,"func75",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"op5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"ALUctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("C2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+27,0,"Opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+19,0,"flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"DMwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"ALUop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+14,0,"ALUsrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"IMMctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"PCsrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"ResultSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("E1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"IMMctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+5,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"IMM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("M1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"WA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"WAM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"AdDM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"DMwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"DInDM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"DOutDM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"Ad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+29,0,"show",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("M2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"WAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"AInIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("M3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"PCN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("M4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+69,0,"WAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"R0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"AdInReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"AdOutReg1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+33,0,"AdOutReg2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"DInReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"DOutReg1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"DOutReg2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"A0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("RegArray", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+34+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("S1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"DOutReg2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"IMM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"ALUsrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"N2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("S2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"PCadd4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"PCaddIMM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"DOutAlu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"PCsrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"PCN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("S3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"DOutAlu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"DOutDM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"PCadd4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"PCaddIMM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"ResultSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"DInReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmain___024root__trace_init_top(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmain___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmain___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmain___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmain___024root__trace_register(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmain___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmain___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmain___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmain___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmain___024root__trace_const_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_const_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain___024root__trace_const_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+69,(5U),32);
    bufp->fullIData(oldp+70,(0x20U),32);
    bufp->fullIData(oldp+71,(vlSelfRef.main__DOT__N1),32);
    bufp->fullIData(oldp+72,(vlSelfRef.main__DOT__AdDM),32);
    bufp->fullIData(oldp+73,(vlSelfRef.main__DOT__DInDM),32);
    bufp->fullCData(oldp+74,(vlSelfRef.main__DOT__Opcode),7);
    bufp->fullCData(oldp+75,(vlSelfRef.main__DOT__func3),3);
    bufp->fullBit(oldp+76,(vlSelfRef.main__DOT__func75));
    bufp->fullBit(oldp+77,(vlSelfRef.main__DOT__op5));
    bufp->fullIData(oldp+78,(0x14U),32);
    bufp->fullIData(oldp+79,(8U),32);
    bufp->fullIData(oldp+80,(0x10U),32);
    bufp->fullIData(oldp+81,(0xaU),32);
}

VL_ATTR_COLD void Vmain___024root__trace_full_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain___024root__trace_full_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.main__DOT__PC),32);
    bufp->fullIData(oldp+2,(((2U & (IData)(vlSelfRef.main__DOT__PCsrc))
                              ? ((1U & (IData)(vlSelfRef.main__DOT__PCsrc))
                                  ? vlSelfRef.main__DOT__PCaddIMM
                                  : vlSelfRef.main__DOT__DOutAlu)
                              : ((1U & (IData)(vlSelfRef.main__DOT__PCsrc))
                                  ? vlSelfRef.main__DOT__PCaddIMM
                                  : ((IData)(4U) + vlSelfRef.main__DOT__PC)))),32);
    bufp->fullIData(oldp+3,(((IData)(4U) + vlSelfRef.main__DOT__PC)),32);
    bufp->fullIData(oldp+4,(vlSelfRef.main__DOT__PCaddIMM),32);
    bufp->fullIData(oldp+5,(vlSelfRef.main__DOT__instr),32);
    bufp->fullIData(oldp+6,(vlSelfRef.main__DOT__DOutReg1),32);
    bufp->fullIData(oldp+7,(vlSelfRef.main__DOT__DOutReg2),32);
    bufp->fullIData(oldp+8,(vlSelfRef.main__DOT__IMM),32);
    bufp->fullIData(oldp+9,(vlSelfRef.main__DOT__N2),32);
    bufp->fullIData(oldp+10,(vlSelfRef.main__DOT__DOutAlu),32);
    bufp->fullIData(oldp+11,(vlSelfRef.main__DOT__DOutDM),32);
    bufp->fullIData(oldp+12,(((2U & (IData)(vlSelfRef.main__DOT__ResultSrc))
                               ? ((1U & (IData)(vlSelfRef.main__DOT__ResultSrc))
                                   ? vlSelfRef.main__DOT__PCaddIMM
                                   : ((IData)(4U) + vlSelfRef.main__DOT__PC))
                               : ((1U & (IData)(vlSelfRef.main__DOT__ResultSrc))
                                   ? vlSelfRef.main__DOT__DOutDM
                                   : vlSelfRef.main__DOT__DOutAlu))),32);
    bufp->fullCData(oldp+13,(vlSelfRef.main__DOT__PCsrc),2);
    bufp->fullBit(oldp+14,(vlSelfRef.main__DOT__ALUsrc));
    bufp->fullCData(oldp+15,(vlSelfRef.main__DOT__ResultSrc),2);
    bufp->fullCData(oldp+16,(vlSelfRef.main__DOT__IMMctrl),3);
    bufp->fullCData(oldp+17,(vlSelfRef.main__DOT__ALUop),2);
    bufp->fullCData(oldp+18,(vlSelfRef.main__DOT__ALUctrl),4);
    bufp->fullBit(oldp+19,(vlSelfRef.main__DOT__flag));
    bufp->fullBit(oldp+20,((0x23U == (IData)(vlSelfRef.main__DOT____Vcellinp__C2__Opcode))));
    bufp->fullBit(oldp+21,(vlSelfRef.main__DOT__RegWrite));
    bufp->fullBit(oldp+22,(vlSelfRef.main__DOT__A1__DOT__flagZ));
    bufp->fullBit(oldp+23,(vlSelfRef.main__DOT__A1__DOT__flagC));
    bufp->fullBit(oldp+24,(vlSelfRef.main__DOT__A1__DOT__flagS));
    bufp->fullBit(oldp+25,(vlSelfRef.main__DOT__A1__DOT__flagV));
    bufp->fullCData(oldp+26,(vlSelfRef.main__DOT____Vcellinp__C1__func3),3);
    bufp->fullCData(oldp+27,(vlSelfRef.main__DOT____Vcellinp__C2__Opcode),7);
    bufp->fullIData(oldp+28,(vlSelfRef.main__DOT__M1__DOT__Ad),20);
    bufp->fullIData(oldp+29,(((vlSelfRef.main__DOT__M1__DOT__RamArray
                               [0x10000U] << 0x18U) 
                              | ((vlSelfRef.main__DOT__M1__DOT__RamArray
                                  [0x10001U] << 0x10U) 
                                 | ((vlSelfRef.main__DOT__M1__DOT__RamArray
                                     [0x10002U] << 8U) 
                                    | vlSelfRef.main__DOT__M1__DOT__RamArray
                                    [0x10003U])))),32);
    bufp->fullSData(oldp+30,((0xffffU & vlSelfRef.main__DOT__PC)),16);
    bufp->fullCData(oldp+31,((0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_0) 
                                       >> 7U))),5);
    bufp->fullCData(oldp+32,((0x1fU & (vlSelfRef.__VdfgRegularize_h6171c202_0_1 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+33,((0x1fU & (vlSelfRef.main__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+34,(vlSelfRef.main__DOT__M4__DOT__RegArray[0]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.main__DOT__M4__DOT__RegArray[1]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.main__DOT__M4__DOT__RegArray[2]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.main__DOT__M4__DOT__RegArray[3]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.main__DOT__M4__DOT__RegArray[4]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.main__DOT__M4__DOT__RegArray[5]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.main__DOT__M4__DOT__RegArray[6]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.main__DOT__M4__DOT__RegArray[7]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.main__DOT__M4__DOT__RegArray[8]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.main__DOT__M4__DOT__RegArray[9]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.main__DOT__M4__DOT__RegArray[10]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.main__DOT__M4__DOT__RegArray[11]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.main__DOT__M4__DOT__RegArray[12]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.main__DOT__M4__DOT__RegArray[13]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.main__DOT__M4__DOT__RegArray[14]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.main__DOT__M4__DOT__RegArray[15]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.main__DOT__M4__DOT__RegArray[16]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.main__DOT__M4__DOT__RegArray[17]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.main__DOT__M4__DOT__RegArray[18]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.main__DOT__M4__DOT__RegArray[19]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.main__DOT__M4__DOT__RegArray[20]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.main__DOT__M4__DOT__RegArray[21]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.main__DOT__M4__DOT__RegArray[22]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.main__DOT__M4__DOT__RegArray[23]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.main__DOT__M4__DOT__RegArray[24]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.main__DOT__M4__DOT__RegArray[25]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.main__DOT__M4__DOT__RegArray[26]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.main__DOT__M4__DOT__RegArray[27]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.main__DOT__M4__DOT__RegArray[28]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.main__DOT__M4__DOT__RegArray[29]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.main__DOT__M4__DOT__RegArray[30]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.main__DOT__M4__DOT__RegArray[31]),32);
    bufp->fullBit(oldp+66,(vlSelfRef.clk));
    bufp->fullBit(oldp+67,(vlSelfRef.rst));
    bufp->fullIData(oldp+68,(vlSelfRef.A0),32);
}
