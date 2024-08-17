// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vserial_test__pch.h"
#include "Vserial_test.h"
#include "Vserial_test___024root.h"
#include "Vserial_test___024unit.h"

// FUNCTIONS
Vserial_test__Syms::~Vserial_test__Syms()
{
}

Vserial_test__Syms::Vserial_test__Syms(VerilatedContext* contextp, const char* namep, Vserial_test* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(18);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_serial_test.configure(this, name(), "serial_test", "serial_test", -12, VerilatedScope::SCOPE_OTHER);
}
