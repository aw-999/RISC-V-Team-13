// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIMM__SYMS_H_
#define VERILATED_VIMM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vimm.h"

// INCLUDE MODULE CLASSES
#include "Vimm___024root.h"

// SYMS CLASS (contains all model state)
class Vimm__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vimm* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vimm___024root                 TOP;

    // CONSTRUCTORS
    Vimm__Syms(VerilatedContext* contextp, const char* namep, Vimm* modelp);
    ~Vimm__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
