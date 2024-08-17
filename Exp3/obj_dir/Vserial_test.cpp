// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vserial_test__pch.h"

//============================================================
// Constructors

Vserial_test::Vserial_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vserial_test__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vserial_test::Vserial_test(const char* _vcname__)
    : Vserial_test(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vserial_test::~Vserial_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vserial_test___024root___eval_debug_assertions(Vserial_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vserial_test___024root___eval_static(Vserial_test___024root* vlSelf);
void Vserial_test___024root___eval_initial(Vserial_test___024root* vlSelf);
void Vserial_test___024root___eval_settle(Vserial_test___024root* vlSelf);
void Vserial_test___024root___eval(Vserial_test___024root* vlSelf);

void Vserial_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vserial_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vserial_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vserial_test___024root___eval_static(&(vlSymsp->TOP));
        Vserial_test___024root___eval_initial(&(vlSymsp->TOP));
        Vserial_test___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vserial_test___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vserial_test::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vserial_test::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vserial_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vserial_test___024root___eval_final(Vserial_test___024root* vlSelf);

VL_ATTR_COLD void Vserial_test::final() {
    Vserial_test___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vserial_test::hierName() const { return vlSymsp->name(); }
const char* Vserial_test::modelName() const { return "Vserial_test"; }
unsigned Vserial_test::threads() const { return 1; }
void Vserial_test::prepareClone() const { contextp()->prepareClone(); }
void Vserial_test::atClone() const {
    contextp()->threadPoolpOnClone();
}
