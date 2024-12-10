// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VJerry_PL_main__pch.h"
#include "VJerry_PL_main.h"
#include "VJerry_PL_main___024root.h"

// FUNCTIONS
VJerry_PL_main__Syms::~VJerry_PL_main__Syms()
{
}

VJerry_PL_main__Syms::VJerry_PL_main__Syms(VerilatedContext* contextp, const char* namep, VJerry_PL_main* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(164);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
