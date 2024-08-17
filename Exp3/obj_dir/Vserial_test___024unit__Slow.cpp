// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vserial_test.h for the primary calling header

#include "Vserial_test__pch.h"
#include "Vserial_test__Syms.h"
#include "Vserial_test___024unit.h"

void Vserial_test___024unit___ctor_var_reset(Vserial_test___024unit* vlSelf);

Vserial_test___024unit::Vserial_test___024unit(Vserial_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vserial_test___024unit___ctor_var_reset(this);
}

void Vserial_test___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vserial_test___024unit::~Vserial_test___024unit() {
}
