// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest.h for the primary calling header

#ifndef VERILATED_VTEST___024ROOT_H_
#define VERILATED_VTEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtest___024unit;


class Vtest__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtest___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ test__DOT__a;
    CData/*3:0*/ test__DOT__b;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest___024root(Vtest__Syms* symsp, const char* v__name);
    ~Vtest___024root();
    VL_UNCOPYABLE(Vtest___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
