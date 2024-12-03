// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vreg32.h"
#include "Vreg32__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vreg32::Vreg32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vreg32__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , RegWrite{vlSymsp->TOP.RegWrite}
    , write_addr{vlSymsp->TOP.write_addr}
    , AdOut1{vlSymsp->TOP.AdOut1}
    , AdOut2{vlSymsp->TOP.AdOut2}
    , DIn{vlSymsp->TOP.DIn}
    , DOut1{vlSymsp->TOP.DOut1}
    , DOut2{vlSymsp->TOP.DOut2}
    , A0{vlSymsp->TOP.A0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vreg32::Vreg32(const char* _vcname__)
    : Vreg32(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vreg32::~Vreg32() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vreg32___024root___eval_initial(Vreg32___024root* vlSelf);
void Vreg32___024root___eval_settle(Vreg32___024root* vlSelf);
void Vreg32___024root___eval(Vreg32___024root* vlSelf);
#ifdef VL_DEBUG
void Vreg32___024root___eval_debug_assertions(Vreg32___024root* vlSelf);
#endif  // VL_DEBUG
void Vreg32___024root___final(Vreg32___024root* vlSelf);

static void _eval_initial_loop(Vreg32__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vreg32___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vreg32___024root___eval_settle(&(vlSymsp->TOP));
        Vreg32___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vreg32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vreg32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vreg32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vreg32___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vreg32::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vreg32::final() {
    Vreg32___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vreg32::hierName() const { return vlSymsp->name(); }
const char* Vreg32::modelName() const { return "Vreg32"; }
unsigned Vreg32::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vreg32::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vreg32___024root__trace_init_top(Vreg32___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vreg32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg32___024root*>(voidSelf);
    Vreg32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vreg32___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vreg32___024root__trace_register(Vreg32___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vreg32::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vreg32___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
