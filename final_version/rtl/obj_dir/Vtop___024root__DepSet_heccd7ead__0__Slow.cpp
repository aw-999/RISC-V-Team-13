// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hfb5a4ebb__0;
    VlWide<4>/*127:0*/ __Vtemp_ha35e70af__0;
    // Body
    __Vtemp_hfb5a4ebb__0[0U] = 0x2e686578U;
    __Vtemp_hfb5a4ebb__0[1U] = 0x6d6f7279U;
    __Vtemp_hfb5a4ebb__0[2U] = 0x615f6d65U;
    __Vtemp_hfb5a4ebb__0[3U] = 0x646174U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hfb5a4ebb__0)
                 ,  &(vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray)
                 , 0, ~0ULL);
    vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellout__cache__cpu_data_out = 0ULL;
    vlSelf->top__DOT__CacheMemoryTop__DOT__mem_read = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[1U] = 1U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[2U] = 2U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[3U] = 3U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk3__DOT__i = 4U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][0U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][1U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][2U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[0U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[1U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[2U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][0U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][1U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][2U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][3U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[3U][3U][4U] = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 4U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk4__DOT__i = 0x40U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__current_state = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr = 0U;
    __Vtemp_ha35e70af__0[0U] = 0x2e6d656dU;
    __Vtemp_ha35e70af__0[1U] = 0x74657374U;
    __Vtemp_ha35e70af__0[2U] = 0x616c6c5fU;
    __Vtemp_ha35e70af__0[3U] = 0x5aU;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_ha35e70af__0)
                 ,  &(vlSelf->top__DOT__instructionmemory__DOT__RomArray)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_h9a4f4dcb_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hf23309df_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_hc2be98cd_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h9bdefb87_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h4d4d9445_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_h052850f8_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h59a61ae6_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_hdf3b7833_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_h46db96b2_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    VlWide<5>/*159:0*/ __Vtemp_hf54bd067__0;
    VlWide<3>/*95:0*/ __Vtemp_hebe0dc91__0;
    // Body
    vlSelf->a0 = vlSelf->top__DOT__regfile__DOT__RegArr
        [0xaU];
    vlSelf->top__DOT__resultW = ((2U & (IData)(vlSelf->top__DOT__resultsrcW))
                                  ? ((1U & (IData)(vlSelf->top__DOT__resultsrcW))
                                      ? vlSelf->top__DOT__immextW
                                      : vlSelf->top__DOT__pcplus4W)
                                  : ((1U & (IData)(vlSelf->top__DOT__resultsrcW))
                                      ? vlSelf->top__DOT__readdataW
                                      : vlSelf->top__DOT__aluresultW));
    vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in[0U] 
        = (IData)((((QData)((IData)(vlSelf->top__DOT__aluresultM)) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__writedataM))));
    vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in[1U] 
        = (IData)(((((QData)((IData)(vlSelf->top__DOT__aluresultM)) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__writedataM))) 
                   >> 0x20U));
    vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in[2U] 
        = (((3U == (0x7fU & vlSelf->top__DOT__aluresultM)) 
            << 1U) | (IData)(vlSelf->top__DOT__memwriteM));
    vlSelf->top__DOT__pctargetE = (((IData)(vlSelf->top__DOT__jalrE)
                                     ? vlSelf->top__DOT__RD1E
                                     : vlSelf->top__DOT__pcE) 
                                   + vlSelf->top__DOT__immextE);
    vlSelf->top__DOT__forwardaE = (((((IData)(vlSelf->top__DOT__rs1E) 
                                      == (IData)(vlSelf->top__DOT__rdM)) 
                                     & (IData)(vlSelf->top__DOT__regwriteM)) 
                                    & (0U != (IData)(vlSelf->top__DOT__rs1E)))
                                    ? 2U : (((((IData)(vlSelf->top__DOT__rs1E) 
                                               == (IData)(vlSelf->top__DOT__rdW)) 
                                              & (IData)(vlSelf->top__DOT__regwriteW)) 
                                             & (0U 
                                                != (IData)(vlSelf->top__DOT__rs1E)))
                                             ? 1U : 0U));
    vlSelf->top__DOT__forwardbE = (((((IData)(vlSelf->top__DOT__rs2E) 
                                      == (IData)(vlSelf->top__DOT__rdM)) 
                                     & (IData)(vlSelf->top__DOT__regwriteM)) 
                                    & (0U != (IData)(vlSelf->top__DOT__rs2E)))
                                    ? 2U : (((((IData)(vlSelf->top__DOT__rs2E) 
                                               == (IData)(vlSelf->top__DOT__rdW)) 
                                              & (IData)(vlSelf->top__DOT__regwriteW)) 
                                             & (0U 
                                                != (IData)(vlSelf->top__DOT__rs2E)))
                                             ? 1U : 0U));
    vlSelf->top__DOT__flushD = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__AdM 
        = (0x1ffffU & vlSelf->top__DOT__aluresultM);
    vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellout__cache__cpu_data_out = 0ULL;
    vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__mem_read = 0U;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__next_state 
        = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__current_state;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index 
        = (0x3fU & (vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in[1U] 
                    >> 4U));
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__tag 
        = (vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in[1U] 
           >> 0xaU);
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__byte_offset 
        = (0xfU & vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in[1U]);
    if ((0U == vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__current_state)) {
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[3U][0U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [3U][0U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[3U][1U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [3U][1U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[3U][2U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [3U][2U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[3U][3U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [3U][3U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[3U][4U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [3U][4U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[2U][0U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [2U][0U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[2U][1U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [2U][1U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[2U][2U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [2U][2U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[2U][3U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [2U][3U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[2U][4U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [2U][4U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[1U][0U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [1U][0U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[1U][1U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [1U][1U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[1U][2U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [1U][2U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[1U][3U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [1U][3U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[1U][4U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [1U][4U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[0U][0U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [0U][0U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[0U][1U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [0U][1U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[0U][2U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [0U][2U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[0U][3U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [0U][3U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[0U][4U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [0U][4U];
        vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__in_tag 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__tag;
        {
            {
                vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__hit_index = 0U;
                if (((vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set
                      [0U][4U] >> 0x17U) & ((0x3fffffU 
                                             & vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set
                                             [0U][4U]) 
                                            == vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__in_tag))) {
                    vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__hit_index = 0U;
                    vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__Vfuncout = 1U;
                    goto __Vlabel2;
                }
                if (((vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set
                      [1U][4U] >> 0x17U) & ((0x3fffffU 
                                             & vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set
                                             [1U][4U]) 
                                            == vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__in_tag))) {
                    vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__hit_index = 1U;
                    vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__Vfuncout = 1U;
                    goto __Vlabel2;
                }
                if (((vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set
                      [2U][4U] >> 0x17U) & ((0x3fffffU 
                                             & vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set
                                             [2U][4U]) 
                                            == vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__in_tag))) {
                    vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__hit_index = 2U;
                    vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__Vfuncout = 1U;
                    goto __Vlabel2;
                }
                if (((vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set
                      [3U][4U] >> 0x17U) & ((0x3fffffU 
                                             & vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set
                                             [3U][4U]) 
                                            == vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__in_tag))) {
                    vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__hit_index = 3U;
                    vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__Vfuncout = 1U;
                    goto __Vlabel2;
                }
                vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__Vfuncout = 0U;
                goto __Vlabel1;
                __Vlabel2: ;
            }
            __Vlabel1: ;
        }
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index 
            = vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__hit_index;
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit 
            = vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__Vfuncout;
        if ((2U & vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in[2U])) {
            if (vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit) {
                vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__next_state 
                    = ((1U & vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in[2U])
                        ? 4U : 5U);
            } else {
                vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index 
                    = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg
                    [3U];
                vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__next_state = 1U;
            }
        }
    } else if ((1U == vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__current_state)) {
        vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr 
            = (0xfffffff0U & vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in[1U]);
        vlSelf->top__DOT__CacheMemoryTop__DOT__mem_read = 1U;
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__next_state = 2U;
    } else if ((2U == vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__current_state)) {
        if (vlSelf->top__DOT__CacheMemoryTop__DOT__memory_ready) {
            vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__next_state = 3U;
        }
    } else if ((3U == vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__current_state)) {
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index][vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][0U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data[0U];
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index][vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][1U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data[1U];
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index][vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][2U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data[2U];
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index][vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][3U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data[3U];
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index][vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][4U] 
            = (0x800000U | vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__tag);
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__next_state = 5U;
    } else if ((4U == vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__current_state)) {
        VL_ASSIGNSEL_WI(152,32,(0x7fU & (((((IData)(4U) 
                                            + (IData)(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__byte_offset)) 
                                           << 3U) - (IData)(1U)) 
                                         - (IData)(0x1fU))), 
                        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
                        [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
                        [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index], 
                        vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in[0U]);
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__next_state = 5U;
    } else if ((5U == vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__current_state)) {
        __Vtemp_hf54bd067__0[0U] = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][0U];
        __Vtemp_hf54bd067__0[1U] = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][1U];
        __Vtemp_hf54bd067__0[2U] = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][2U];
        __Vtemp_hf54bd067__0[3U] = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][3U];
        __Vtemp_hf54bd067__0[4U] = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index]
            [vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][4U];
        vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellout__cache__cpu_data_out 
            = (0x100000000ULL | (QData)((IData)((((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (((((IData)(4U) 
                                                          + (IData)(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__byte_offset)) 
                                                         << 3U) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x1fU))))
                                                   ? 0U
                                                   : 
                                                  (__Vtemp_hf54bd067__0[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((((IData)(4U) 
                                                            + (IData)(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__byte_offset)) 
                                                           << 3U) 
                                                          - (IData)(1U)) 
                                                         - (IData)(0x1fU)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((((IData)(4U) 
                                                           + (IData)(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__byte_offset)) 
                                                          << 3U) 
                                                         - (IData)(1U)) 
                                                        - (IData)(0x1fU)))))) 
                                                 | (__Vtemp_hf54bd067__0[
                                                    (3U 
                                                     & ((((((IData)(4U) 
                                                            + (IData)(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__byte_offset)) 
                                                           << 3U) 
                                                          - (IData)(1U)) 
                                                         - (IData)(0x1fU)) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & (((((IData)(4U) 
                                                           + (IData)(vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__byte_offset)) 
                                                          << 3U) 
                                                         - (IData)(1U)) 
                                                        - (IData)(0x1fU))))))));
        vlSelf->__Vtask_top__DOT__CacheMemoryTop__DOT__cache__DOT__update_shift_reg__1__access_index 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index;
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[3U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg
            [2U];
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[2U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg
            [1U];
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[1U] 
            = vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg
            [0U];
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[0U] 
            = vlSelf->__Vtask_top__DOT__CacheMemoryTop__DOT__cache__DOT__update_shift_reg__1__access_index;
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__next_state = 0U;
    } else if ((6U == vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__current_state)) {
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index][vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][0U] = 0U;
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index][vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][1U] = 0U;
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index][vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][2U] = 0U;
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index][vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][3U] = 0U;
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index][vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index][4U] 
            = (0x800000U | vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__tag);
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__next_state = 0U;
    }
    vlSelf->top__DOT__pcnextF = ((2U & (IData)(vlSelf->top__DOT__pcsrcE))
                                  ? ((1U & (IData)(vlSelf->top__DOT__pcsrcE))
                                      ? vlSelf->top__DOT__pctargetE
                                      : vlSelf->top__DOT__aluresultW)
                                  : ((1U & (IData)(vlSelf->top__DOT__pcsrcE))
                                      ? vlSelf->top__DOT__pctargetE
                                      : ((IData)(4U) 
                                         + vlSelf->top__DOT__pcF)));
    vlSelf->top__DOT__srcaE = ((0U == (IData)(vlSelf->top__DOT__forwardaE))
                                ? vlSelf->top__DOT__RD1E
                                : ((1U == (IData)(vlSelf->top__DOT__forwardaE))
                                    ? vlSelf->top__DOT__resultW
                                    : ((2U == (IData)(vlSelf->top__DOT__forwardaE))
                                        ? vlSelf->top__DOT__aluresultM
                                        : vlSelf->top__DOT__RD1E)));
    vlSelf->top__DOT__writedataE = ((0U == (IData)(vlSelf->top__DOT__forwardbE))
                                     ? vlSelf->top__DOT__RD2E
                                     : ((1U == (IData)(vlSelf->top__DOT__forwardbE))
                                         ? vlSelf->top__DOT__resultW
                                         : ((2U == (IData)(vlSelf->top__DOT__forwardbE))
                                             ? vlSelf->top__DOT__aluresultM
                                             : vlSelf->top__DOT__RD2E)));
    vlSelf->top__DOT__readdataM = (IData)(vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellout__cache__cpu_data_out);
    (~ vlSelf->top__DOT__cache_stall) = (1U & (IData)(
                                                      (vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellout__cache__cpu_data_out 
                                                       >> 0x20U)));
    __Vtemp_hebe0dc91__0[1U] = (IData)((((QData)((IData)(
                                                         ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                           [
                                                           (0x1ffffU 
                                                            & ((IData)(0xfU) 
                                                               + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                                           << 0x18U) 
                                                          | ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                              [
                                                              (0x1ffffU 
                                                               & ((IData)(0xeU) 
                                                                  + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                                              << 0x10U) 
                                                             | ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                                 [
                                                                 (0x1ffffU 
                                                                  & ((IData)(0xdU) 
                                                                     + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                                                 << 8U) 
                                                                | vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                                [
                                                                (0x1ffffU 
                                                                 & ((IData)(0xcU) 
                                                                    + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))]))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                            [
                                                            (0x1ffffU 
                                                             & ((IData)(0xbU) 
                                                                + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                                            << 0x18U) 
                                                           | ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                               [
                                                               (0x1ffffU 
                                                                & ((IData)(0xaU) 
                                                                   + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                                               << 0x10U) 
                                                              | ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                                  [
                                                                  (0x1ffffU 
                                                                   & ((IData)(9U) 
                                                                      + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                                                  << 8U) 
                                                                 | vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                                 [
                                                                 (0x1ffffU 
                                                                  & ((IData)(8U) 
                                                                     + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))])))))));
    __Vtemp_hebe0dc91__0[2U] = (IData)(((((QData)((IData)(
                                                          ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                            [
                                                            (0x1ffffU 
                                                             & ((IData)(0xfU) 
                                                                + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                                            << 0x18U) 
                                                           | ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                               [
                                                               (0x1ffffU 
                                                                & ((IData)(0xeU) 
                                                                   + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                                               << 0x10U) 
                                                              | ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                                  [
                                                                  (0x1ffffU 
                                                                   & ((IData)(0xdU) 
                                                                      + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                                                  << 8U) 
                                                                 | vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                                 [
                                                                 (0x1ffffU 
                                                                  & ((IData)(0xcU) 
                                                                     + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))]))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                             [
                                                             (0x1ffffU 
                                                              & ((IData)(0xbU) 
                                                                 + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                                             << 0x18U) 
                                                            | ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                                [
                                                                (0x1ffffU 
                                                                 & ((IData)(0xaU) 
                                                                    + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                                                << 0x10U) 
                                                               | ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                                   [
                                                                   (0x1ffffU 
                                                                    & ((IData)(9U) 
                                                                       + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                                                   << 8U) 
                                                                  | vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                                                  [
                                                                  (0x1ffffU 
                                                                   & ((IData)(8U) 
                                                                      + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))])))))) 
                                        >> 0x20U));
    if (vlSelf->top__DOT__CacheMemoryTop__DOT__mem_read) {
        vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data[0U] 
            = ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                [(0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                << 0x18U) | ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                              [(0x1ffffU & ((IData)(2U) 
                                            + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                              << 0x10U) | ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                            [(0x1ffffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                            << 8U) 
                                           | vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                           [(0x1ffffU 
                                             & vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr)])));
        vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data[1U] 
            = ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                [(0x1ffffU & ((IData)(7U) + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                << 0x18U) | ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                              [(0x1ffffU & ((IData)(6U) 
                                            + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                              << 0x10U) | ((vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                            [(0x1ffffU 
                                              & ((IData)(5U) 
                                                 + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))] 
                                            << 8U) 
                                           | vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray
                                           [(0x1ffffU 
                                             & ((IData)(4U) 
                                                + vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr))])));
        vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data[2U] 
            = __Vtemp_hebe0dc91__0[1U];
        vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data[3U] 
            = __Vtemp_hebe0dc91__0[2U];
        vlSelf->top__DOT__cache_stall = (1U & (~ (IData)(vlSelf->top__DOT__CacheMemoryTop__DOT__memory_ready)));
    } else {
        vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data[0U] = 0U;
        vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data[1U] = 0U;
        vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data[2U] = 0U;
        vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data[3U] = 0U;
        vlSelf->top__DOT__cache_stall = 0U;
    }
    vlSelf->top__DOT__srcbE = ((IData)(vlSelf->top__DOT__alusrcE)
                                ? vlSelf->top__DOT__immextE
                                : vlSelf->top__DOT__writedataE);
    vlSelf->top__DOT__stallD = 0U;
    vlSelf->top__DOT__flushE = 0U;
    if ((1U & (IData)(vlSelf->top__DOT__pcsrcE))) {
        vlSelf->top__DOT__flushD = 1U;
    }
    if ((((IData)(vlSelf->top__DOT__cache_stall) & (IData)(vlSelf->top__DOT__resultsrcE)) 
         & (((IData)(vlSelf->top__DOT__rdE) == (0x1fU 
                                                & (vlSelf->top__DOT__instrD 
                                                   >> 0xfU))) 
            | ((IData)(vlSelf->top__DOT__rdE) == (0x1fU 
                                                  & (vlSelf->top__DOT__instrD 
                                                     >> 0x14U)))))) {
        vlSelf->top__DOT__stallD = 1U;
        vlSelf->top__DOT__flushE = 1U;
    }
    if ((1U & (IData)(vlSelf->top__DOT__pcsrcE))) {
        vlSelf->top__DOT__flushE = 1U;
    }
    vlSelf->top__DOT__stallF = 0U;
    if ((((IData)(vlSelf->top__DOT__cache_stall) & (IData)(vlSelf->top__DOT__resultsrcE)) 
         & (((IData)(vlSelf->top__DOT__rdE) == (0x1fU 
                                                & (vlSelf->top__DOT__instrD 
                                                   >> 0xfU))) 
            | ((IData)(vlSelf->top__DOT__rdE) == (0x1fU 
                                                  & (vlSelf->top__DOT__instrD 
                                                     >> 0x14U)))))) {
        vlSelf->top__DOT__stallF = 1U;
    }
    vlSelf->top__DOT__aluresultE = 0U;
    vlSelf->top__DOT__flagE = 0U;
    if ((8U & (IData)(vlSelf->top__DOT__aluctrlE))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__aluctrlE) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__aluctrlE) 
                          >> 1U)))) {
                vlSelf->top__DOT__aluresultE = ((1U 
                                                 & (IData)(vlSelf->top__DOT__aluctrlE))
                                                 ? 
                                                ((vlSelf->top__DOT__srcaE 
                                                  < vlSelf->top__DOT__srcbE)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                ((vlSelf->top__DOT__srcaE 
                                                  < vlSelf->top__DOT__srcbE)
                                                  ? 1U
                                                  : 0U));
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__aluctrlE))) {
            vlSelf->top__DOT__flagE = (1U & ((2U & (IData)(vlSelf->top__DOT__aluctrlE))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__aluctrlE))
                                                  ? 
                                                 (VL_GTES_III(32, vlSelf->top__DOT__srcaE, vlSelf->top__DOT__srcbE)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (VL_LTS_III(32, vlSelf->top__DOT__srcaE, vlSelf->top__DOT__srcbE)
                                                   ? 1U
                                                   : 0U))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__aluctrlE))
                                                  ? 
                                                 ((vlSelf->top__DOT__srcaE 
                                                   >= vlSelf->top__DOT__srcbE)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 ((vlSelf->top__DOT__srcaE 
                                                   < vlSelf->top__DOT__srcbE)
                                                   ? 1U
                                                   : 0U))));
        } else if ((2U & (IData)(vlSelf->top__DOT__aluctrlE))) {
            vlSelf->top__DOT__flagE = (1U & ((1U & (IData)(vlSelf->top__DOT__aluctrlE))
                                              ? ((vlSelf->top__DOT__srcaE 
                                                  != vlSelf->top__DOT__srcbE)
                                                  ? 1U
                                                  : 0U)
                                              : ((vlSelf->top__DOT__srcaE 
                                                  == vlSelf->top__DOT__srcbE)
                                                  ? 1U
                                                  : 0U)));
        }
    } else {
        vlSelf->top__DOT__aluresultE = ((4U & (IData)(vlSelf->top__DOT__aluctrlE))
                                         ? ((2U & (IData)(vlSelf->top__DOT__aluctrlE))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__aluctrlE))
                                                 ? 
                                                VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__srcaE, 
                                                               (0x1fU 
                                                                & vlSelf->top__DOT__srcbE))
                                                 : 
                                                (vlSelf->top__DOT__srcaE 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__srcbE)))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__aluctrlE))
                                                 ? 
                                                (vlSelf->top__DOT__srcaE 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__srcbE))
                                                 : 
                                                (vlSelf->top__DOT__srcaE 
                                                 ^ vlSelf->top__DOT__srcbE)))
                                         : ((2U & (IData)(vlSelf->top__DOT__aluctrlE))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__aluctrlE))
                                                 ? 
                                                (vlSelf->top__DOT__srcaE 
                                                 | vlSelf->top__DOT__srcbE)
                                                 : 
                                                (vlSelf->top__DOT__srcaE 
                                                 & vlSelf->top__DOT__srcbE))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__aluctrlE))
                                                 ? 
                                                (vlSelf->top__DOT__srcaE 
                                                 - vlSelf->top__DOT__srcbE)
                                                 : 
                                                (vlSelf->top__DOT__srcaE 
                                                 + vlSelf->top__DOT__srcbE))));
    }
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__flagE) 
                     << 7U) | (0x7fU & vlSelf->top__DOT__instrD));
    vlSelf->top__DOT__aluopD = Vtop__ConstPool__TABLE_h9a4f4dcb_0
        [__Vtableidx1];
    vlSelf->top__DOT__jalrD = Vtop__ConstPool__TABLE_hf23309df_0
        [__Vtableidx1];
    vlSelf->top__DOT__resultsrcD = Vtop__ConstPool__TABLE_hc2be98cd_0
        [__Vtableidx1];
    vlSelf->top__DOT__memwriteD = Vtop__ConstPool__TABLE_h9bdefb87_0
        [__Vtableidx1];
    vlSelf->top__DOT__alusrcD = Vtop__ConstPool__TABLE_h4d4d9445_0
        [__Vtableidx1];
    vlSelf->top__DOT__immsrcD = Vtop__ConstPool__TABLE_h052850f8_0
        [__Vtableidx1];
    vlSelf->top__DOT__regwriteD = Vtop__ConstPool__TABLE_h59a61ae6_0
        [__Vtableidx1];
    vlSelf->top__DOT__pcsrcD = Vtop__ConstPool__TABLE_hdf3b7833_0
        [__Vtableidx1];
    vlSelf->top__DOT__immextD = ((4U & (IData)(vlSelf->top__DOT__immsrcD))
                                  ? ((2U & (IData)(vlSelf->top__DOT__immsrcD))
                                      ? (((- (IData)(
                                                     (vlSelf->top__DOT__instrD 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->top__DOT__instrD 
                                            >> 0x14U))
                                      : ((1U & (IData)(vlSelf->top__DOT__immsrcD))
                                          ? (vlSelf->top__DOT__instrD 
                                             >> 0x14U)
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__instrD 
                                                          >> 0x1fU))) 
                                              << 0x15U) 
                                             | ((0x100000U 
                                                 & (vlSelf->top__DOT__instrD 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->top__DOT__instrD) 
                                                   | ((0x800U 
                                                       & (vlSelf->top__DOT__instrD 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->top__DOT__instrD 
                                                            >> 0x14U))))))))
                                  : ((2U & (IData)(vlSelf->top__DOT__immsrcD))
                                      ? ((1U & (IData)(vlSelf->top__DOT__immsrcD))
                                          ? (0xfffff000U 
                                             & vlSelf->top__DOT__instrD)
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__instrD 
                                                          >> 0x1fU))) 
                                              << 0xdU) 
                                             | ((0x1000U 
                                                 & (vlSelf->top__DOT__instrD 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__instrD 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->top__DOT__instrD 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->top__DOT__instrD 
                                                            >> 7U)))))))
                                      : ((1U & (IData)(vlSelf->top__DOT__immsrcD))
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__instrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->top__DOT__instrD 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__instrD 
                                                      >> 7U))))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__instrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->top__DOT__instrD 
                                                >> 0x14U)))));
    __Vtableidx2 = ((0x40U & (vlSelf->top__DOT__instrD 
                              >> 0x18U)) | ((0x38U 
                                             & (vlSelf->top__DOT__instrD 
                                                >> 9U)) 
                                            | (IData)(vlSelf->top__DOT__aluopD)));
    vlSelf->top__DOT__aluctrlD = Vtop__ConstPool__TABLE_h46db96b2_0
        [__Vtableidx2];
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pcF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pcnextF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__stallF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pcD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instrD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pcplus4D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__immextD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regwriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memwriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flushD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__stallD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alusrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__jalrD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resultsrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pcsrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__aluopD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__immsrcD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__aluctrlD = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pcE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pcplus4E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__immextE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD1E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD2E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pctargetE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__writedataE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__srcaE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__srcbE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__aluresultE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regwriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memwriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flushE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alusrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flagE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__jalrE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resultsrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pcsrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__forwardaE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__forwardbE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__funct3E = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__aluctrlE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__rdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs1E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs2E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pcplus4M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__writedataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__aluresultM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__readdataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__immextM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regwriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memwriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resultsrcM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__funct3M = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__rdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pcplus4W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__aluresultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__readdataW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__resultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__immextW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regwriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resultsrcW = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__rdW = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cache_stall = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->top__DOT__instructionmemory__DOT__RomArray[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__regfile__DOT__RegArr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__CacheMemoryTop__DOT__mem_request_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CacheMemoryTop__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CacheMemoryTop__DOT__memory_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__CacheMemoryTop__DOT__memory_data);
    vlSelf->top__DOT__CacheMemoryTop__DOT__BlockReadEnable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CacheMemoryTop__DOT__BlockWriteEnable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CacheMemoryTop__DOT__BlockAddr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__CacheMemoryTop__DOT__BlockDataIn);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__CacheMemoryTop__DOT__BlockDataOut);
    vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellout__cache__cpu_data_out = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(66, vlSelf->top__DOT__CacheMemoryTop__DOT____Vcellinp__cache__cpu_data_in);
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__current_state = 0;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__next_state = 0;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__degree_index = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__set_index = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__byte_offset = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__tag = VL_RAND_RESET_I(22);
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            VL_RAND_RESET_W(152, vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[__Vi0][__Vi1]);
        }
    }
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->top__DOT__CacheMemoryTop__DOT__cache__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 0;
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__RamArray[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__CacheMemoryTop__DOT__ram__DOT__AdM = VL_RAND_RESET_I(17);
    vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__in_tag = VL_RAND_RESET_I(22);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(152, vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__cache_set[__Vi0]);
    }
    vlSelf->__Vfunc_top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_hit_detect__0__hit_index = VL_RAND_RESET_I(2);
    vlSelf->__Vtask_top__DOT__CacheMemoryTop__DOT__cache__DOT__update_shift_reg__1__access_index = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->__Vchglast__TOP__top__DOT__CacheMemoryTop__DOT__memory_data);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vchglast__TOP__top__DOT__CacheMemoryTop__DOT__cache__DOT__last_used_shift_reg[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            VL_RAND_RESET_W(152, vlSelf->__Vchglast__TOP__top__DOT__CacheMemoryTop__DOT__cache__DOT__cache_arr[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
