// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vserial_test.h for the primary calling header

#include "Vserial_test__pch.h"
#include "Vserial_test__Syms.h"
#include "Vserial_test___024root.h"

void Vserial_test___024root___ctor_var_reset(Vserial_test___024root* vlSelf);

Vserial_test___024root::Vserial_test___024root(Vserial_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vserial_test___024root___ctor_var_reset(this);
}

void Vserial_test___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vserial_test___024root::~Vserial_test___024root() {
}
