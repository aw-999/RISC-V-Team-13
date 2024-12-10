// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJERRY_PL_MAIN__SYMS_H_
#define VERILATED_VJERRY_PL_MAIN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VJerry_PL_main.h"

// INCLUDE MODULE CLASSES
#include "VJerry_PL_main___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VJerry_PL_main__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VJerry_PL_main* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VJerry_PL_main___024root       TOP;

    // CONSTRUCTORS
    VJerry_PL_main__Syms(VerilatedContext* contextp, const char* namep, VJerry_PL_main* modelp);
    ~VJerry_PL_main__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
