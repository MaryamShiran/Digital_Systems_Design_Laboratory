// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vserial_test.h for the primary calling header

#ifndef VERILATED_VSERIAL_TEST___024UNIT_H_
#define VERILATED_VSERIAL_TEST___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vserial_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vserial_test___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vserial_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vserial_test___024unit(Vserial_test__Syms* symsp, const char* v__name);
    ~Vserial_test___024unit();
    VL_UNCOPYABLE(Vserial_test___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
