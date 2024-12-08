// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol.h for the primary calling header

#include "verilated.h"

#include "Vcontrol___024root.h"

extern const VlUnpacked<CData/*2:0*/, 8192> Vcontrol__ConstPool__TABLE_hb51b31ac_0;
extern const VlUnpacked<CData/*1:0*/, 8192> Vcontrol__ConstPool__TABLE_hffbac355_0;
extern const VlUnpacked<CData/*0:0*/, 8192> Vcontrol__ConstPool__TABLE_h53dd93db_0;
extern const VlUnpacked<CData/*0:0*/, 8192> Vcontrol__ConstPool__TABLE_h13b86d95_0;
extern const VlUnpacked<CData/*2:0*/, 8192> Vcontrol__ConstPool__TABLE_hb065c7f9_0;
extern const VlUnpacked<CData/*0:0*/, 8192> Vcontrol__ConstPool__TABLE_hc4c3ee54_0;
extern const VlUnpacked<CData/*6:0*/, 8192> Vcontrol__ConstPool__TABLE_hae30f990_0;
extern const VlUnpacked<CData/*1:0*/, 8192> Vcontrol__ConstPool__TABLE_hf62526c6_0;

VL_INLINE_OPT void Vcontrol___024root___combo__TOP__0(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___combo__TOP__0\n"); );
    // Init
    SData/*12:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->ZeroFlag) << 0xcU) 
                    | (((IData)(vlSelf->NegativeFlag) 
                        << 0xbU) | (((IData)(vlSelf->UnsignedLess) 
                                     << 0xaU) | (((IData)(vlSelf->funct3) 
                                                  << 7U) 
                                                 | (IData)(vlSelf->opcode)))));
    vlSelf->ALUop = Vcontrol__ConstPool__TABLE_hb51b31ac_0
        [__Vtableidx1];
    vlSelf->ResultSrc = Vcontrol__ConstPool__TABLE_hffbac355_0
        [__Vtableidx1];
    vlSelf->MemWrite = Vcontrol__ConstPool__TABLE_h53dd93db_0
        [__Vtableidx1];
    vlSelf->ALUSrc = Vcontrol__ConstPool__TABLE_h13b86d95_0
        [__Vtableidx1];
    vlSelf->ImmSrc = Vcontrol__ConstPool__TABLE_hb065c7f9_0
        [__Vtableidx1];
    vlSelf->RegWrite = Vcontrol__ConstPool__TABLE_hc4c3ee54_0
        [__Vtableidx1];
    if ((0x40U & Vcontrol__ConstPool__TABLE_hae30f990_0
         [__Vtableidx1])) {
        vlSelf->PCSrc = Vcontrol__ConstPool__TABLE_hf62526c6_0
            [__Vtableidx1];
    }
}

void Vcontrol___024root___eval(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval\n"); );
    // Body
    Vcontrol___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vcontrol___024root___eval_debug_assertions(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->opcode & 0x80U))) {
        Verilated::overWidthError("opcode");}
    if (VL_UNLIKELY((vlSelf->ZeroFlag & 0xfeU))) {
        Verilated::overWidthError("ZeroFlag");}
    if (VL_UNLIKELY((vlSelf->NegativeFlag & 0xfeU))) {
        Verilated::overWidthError("NegativeFlag");}
    if (VL_UNLIKELY((vlSelf->UnsignedLess & 0xfeU))) {
        Verilated::overWidthError("UnsignedLess");}
    if (VL_UNLIKELY((vlSelf->funct3 & 0xf8U))) {
        Verilated::overWidthError("funct3");}
}
#endif  // VL_DEBUG
