// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest__pch.h"
#include "Vtest.h"
#include "Vtest___024root.h"
#include "Vtest___024unit.h"

// FUNCTIONS
Vtest__Syms::~Vtest__Syms()
{
}

Vtest__Syms::Vtest__Syms(VerilatedContext* contextp, const char* namep, Vtest* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(30);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_test.configure(this, name(), "test", "test", -12, VerilatedScope::SCOPE_OTHER);
}
