// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSERIAL_TEST__SYMS_H_
#define VERILATED_VSERIAL_TEST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vserial_test.h"

// INCLUDE MODULE CLASSES
#include "Vserial_test___024root.h"
#include "Vserial_test___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vserial_test__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vserial_test* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vserial_test___024root         TOP;
    Vserial_test___024unit         TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_serial_test;

    // CONSTRUCTORS
    Vserial_test__Syms(VerilatedContext* contextp, const char* namep, Vserial_test* modelp);
    ~Vserial_test__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
