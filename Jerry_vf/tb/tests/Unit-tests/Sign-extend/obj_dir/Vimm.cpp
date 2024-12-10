// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vimm.h"
#include "Vimm__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vimm::Vimm(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vimm__Syms(contextp(), _vcname__, this)}
    , IMMsrc{vlSymsp->TOP.IMMsrc}
    , instr{vlSymsp->TOP.instr}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vimm::Vimm(const char* _vcname__)
    : Vimm(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vimm::~Vimm() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vimm___024root___eval_initial(Vimm___024root* vlSelf);
void Vimm___024root___eval_settle(Vimm___024root* vlSelf);
void Vimm___024root___eval(Vimm___024root* vlSelf);
#ifdef VL_DEBUG
void Vimm___024root___eval_debug_assertions(Vimm___024root* vlSelf);
#endif  // VL_DEBUG
void Vimm___024root___final(Vimm___024root* vlSelf);

static void _eval_initial_loop(Vimm__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vimm___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vimm___024root___eval_settle(&(vlSymsp->TOP));
        Vimm___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vimm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vimm::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vimm___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vimm___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vimm::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vimm::final() {
    Vimm___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vimm::hierName() const { return vlSymsp->name(); }
const char* Vimm::modelName() const { return "Vimm"; }
unsigned Vimm::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vimm::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vimm___024root__trace_init_top(Vimm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vimm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimm___024root*>(voidSelf);
    Vimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vimm___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vimm___024root__trace_register(Vimm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vimm::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vimm___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
