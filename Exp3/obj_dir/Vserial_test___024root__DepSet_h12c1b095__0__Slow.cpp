// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vserial_test.h for the primary calling header

#include "Vserial_test__pch.h"
#include "Vserial_test__Syms.h"
#include "Vserial_test___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vserial_test___024root___dump_triggers__stl(Vserial_test___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vserial_test___024root___eval_triggers__stl(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, ((((IData)(vlSelf->serial_test__DOT___comp__DOT__qg) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qg__0)) 
                                      | ((IData)(vlSelf->serial_test__DOT___comp__DOT__qe) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qe__0))) 
                                     | ((IData)(vlSelf->serial_test__DOT___comp__DOT__mg) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__mg__0))));
    vlSelf->__VstlTriggered.set(2U, (((IData)(vlSelf->serial_test__DOT___comp__DOT__qg) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qg__0)) 
                                     | ((IData)(vlSelf->serial_test__DOT___comp__DOT__mg) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__mg__0))));
    vlSelf->__VstlTriggered.set(3U, ((((IData)(vlSelf->serial_test__DOT___comp__DOT__qe) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qe__0)) 
                                      | ((IData)(vlSelf->serial_test__DOT___comp__DOT__qs) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qs__0))) 
                                     | ((IData)(vlSelf->serial_test__DOT___comp__DOT__ms) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__ms__0))));
    vlSelf->__VstlTriggered.set(4U, (((IData)(vlSelf->serial_test__DOT___comp__DOT__qe) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qe__0)) 
                                     | ((IData)(vlSelf->serial_test__DOT___comp__DOT__me) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__me__0))));
    vlSelf->__VstlTriggered.set(5U, (((IData)(vlSelf->serial_test__DOT___comp__DOT__qs) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qs__0)) 
                                     | ((IData)(vlSelf->serial_test__DOT___comp__DOT__ms) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__ms__0))));
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qg__0 
        = vlSelf->serial_test__DOT___comp__DOT__qg;
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qe__0 
        = vlSelf->serial_test__DOT___comp__DOT__qe;
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__mg__0 
        = vlSelf->serial_test__DOT___comp__DOT__mg;
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qs__0 
        = vlSelf->serial_test__DOT___comp__DOT__qs;
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__ms__0 
        = vlSelf->serial_test__DOT___comp__DOT__ms;
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__me__0 
        = vlSelf->serial_test__DOT___comp__DOT__me;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
        vlSelf->__VstlTriggered.set(3U, 1U);
        vlSelf->__VstlTriggered.set(4U, 1U);
        vlSelf->__VstlTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vserial_test___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
