// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vserial_test.h for the primary calling header

#ifndef VERILATED_VSERIAL_TEST___024ROOT_H_
#define VERILATED_VSERIAL_TEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vserial_test___024unit;


class Vserial_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vserial_test___024root final : public VerilatedModule {
  public:
    // CELLS
    Vserial_test___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ serial_test__DOT__a;
    CData/*0:0*/ serial_test__DOT__b;
    CData/*0:0*/ serial_test__DOT__clk;
    CData/*0:0*/ serial_test__DOT__rst;
    CData/*0:0*/ serial_test__DOT___comp__DOT__mg;
    CData/*0:0*/ serial_test__DOT___comp__DOT__qg;
    CData/*0:0*/ serial_test__DOT___comp__DOT__me;
    CData/*0:0*/ serial_test__DOT___comp__DOT__qe;
    CData/*0:0*/ serial_test__DOT___comp__DOT__ms;
    CData/*0:0*/ serial_test__DOT___comp__DOT__qs;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qg__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qe__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__mg__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qs__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__ms__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__me__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qg__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qe__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__mg__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qs__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__ms__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__me__1;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<6> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vserial_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vserial_test___024root(Vserial_test__Syms* symsp, const char* v__name);
    ~Vserial_test___024root();
    VL_UNCOPYABLE(Vserial_test___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
