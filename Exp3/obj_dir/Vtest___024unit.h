// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest.h for the primary calling header

#ifndef VERILATED_VTEST___024UNIT_H_
#define VERILATED_VTEST___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vtest__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest___024unit(Vtest__Syms* symsp, const char* v__name);
    ~Vtest___024unit();
    VL_UNCOPYABLE(Vtest___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
