// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmain_top.h"
#include "Vmain_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmain_top::Vmain_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmain_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , TRIGGER{vlSymsp->TOP.TRIGGER}
    , Result{vlSymsp->TOP.Result}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmain_top::Vmain_top(const char* _vcname__)
    : Vmain_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmain_top::~Vmain_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmain_top___024root___eval_initial(Vmain_top___024root* vlSelf);
void Vmain_top___024root___eval_settle(Vmain_top___024root* vlSelf);
void Vmain_top___024root___eval(Vmain_top___024root* vlSelf);
QData Vmain_top___024root___change_request(Vmain_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vmain_top___024root___eval_debug_assertions(Vmain_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vmain_top___024root___final(Vmain_top___024root* vlSelf);

static void _eval_initial_loop(Vmain_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmain_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmain_top___024root___eval_settle(&(vlSymsp->TOP));
        Vmain_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmain_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("main_top.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmain_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmain_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmain_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmain_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmain_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmain_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("main_top.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmain_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vmain_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmain_top::final() {
    Vmain_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmain_top::hierName() const { return vlSymsp->name(); }
const char* Vmain_top::modelName() const { return "Vmain_top"; }
unsigned Vmain_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vmain_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmain_top___024root__trace_init_top(Vmain_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmain_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_top___024root*>(voidSelf);
    Vmain_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmain_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmain_top___024root__trace_register(Vmain_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmain_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmain_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
