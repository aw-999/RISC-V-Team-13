// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VJerry_PL_main__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VJerry_PL_main::VJerry_PL_main(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VJerry_PL_main__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , TRIGGER{vlSymsp->TOP.TRIGGER}
    , A0{vlSymsp->TOP.A0}
    , a1{vlSymsp->TOP.a1}
    , a2{vlSymsp->TOP.a2}
    , a3{vlSymsp->TOP.a3}
    , a4{vlSymsp->TOP.a4}
    , a5{vlSymsp->TOP.a5}
    , a6{vlSymsp->TOP.a6}
    , a7{vlSymsp->TOP.a7}
    , s0{vlSymsp->TOP.s0}
    , s1{vlSymsp->TOP.s1}
    , s2{vlSymsp->TOP.s2}
    , s3{vlSymsp->TOP.s3}
    , s4{vlSymsp->TOP.s4}
    , s5{vlSymsp->TOP.s5}
    , s6{vlSymsp->TOP.s6}
    , s7{vlSymsp->TOP.s7}
    , s8{vlSymsp->TOP.s8}
    , s9{vlSymsp->TOP.s9}
    , s10{vlSymsp->TOP.s10}
    , s11{vlSymsp->TOP.s11}
    , t0{vlSymsp->TOP.t0}
    , t1{vlSymsp->TOP.t1}
    , t2{vlSymsp->TOP.t2}
    , t3{vlSymsp->TOP.t3}
    , t4{vlSymsp->TOP.t4}
    , t5{vlSymsp->TOP.t5}
    , t6{vlSymsp->TOP.t6}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VJerry_PL_main::VJerry_PL_main(const char* _vcname__)
    : VJerry_PL_main(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VJerry_PL_main::~VJerry_PL_main() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VJerry_PL_main___024root___eval_debug_assertions(VJerry_PL_main___024root* vlSelf);
#endif  // VL_DEBUG
void VJerry_PL_main___024root___eval_static(VJerry_PL_main___024root* vlSelf);
void VJerry_PL_main___024root___eval_initial(VJerry_PL_main___024root* vlSelf);
void VJerry_PL_main___024root___eval_settle(VJerry_PL_main___024root* vlSelf);
void VJerry_PL_main___024root___eval(VJerry_PL_main___024root* vlSelf);

void VJerry_PL_main::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VJerry_PL_main::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VJerry_PL_main___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VJerry_PL_main___024root___eval_static(&(vlSymsp->TOP));
        VJerry_PL_main___024root___eval_initial(&(vlSymsp->TOP));
        VJerry_PL_main___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VJerry_PL_main___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VJerry_PL_main::eventsPending() { return false; }

uint64_t VJerry_PL_main::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VJerry_PL_main::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VJerry_PL_main___024root___eval_final(VJerry_PL_main___024root* vlSelf);

VL_ATTR_COLD void VJerry_PL_main::final() {
    VJerry_PL_main___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VJerry_PL_main::hierName() const { return vlSymsp->name(); }
const char* VJerry_PL_main::modelName() const { return "VJerry_PL_main"; }
unsigned VJerry_PL_main::threads() const { return 1; }
void VJerry_PL_main::prepareClone() const { contextp()->prepareClone(); }
void VJerry_PL_main::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VJerry_PL_main::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VJerry_PL_main___024root__trace_decl_types(VerilatedVcd* tracep);

void VJerry_PL_main___024root__trace_init_top(VJerry_PL_main___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VJerry_PL_main___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VJerry_PL_main___024root*>(voidSelf);
    VJerry_PL_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VJerry_PL_main___024root__trace_decl_types(tracep);
    VJerry_PL_main___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VJerry_PL_main___024root__trace_register(VJerry_PL_main___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VJerry_PL_main::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VJerry_PL_main::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VJerry_PL_main___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
