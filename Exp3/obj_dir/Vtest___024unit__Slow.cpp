// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest__pch.h"
#include "Vtest__Syms.h"
#include "Vtest___024unit.h"

void Vtest___024unit___ctor_var_reset(Vtest___024unit* vlSelf);

Vtest___024unit::Vtest___024unit(Vtest__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest___024unit___ctor_var_reset(this);
}

void Vtest___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest___024unit::~Vtest___024unit() {
}
