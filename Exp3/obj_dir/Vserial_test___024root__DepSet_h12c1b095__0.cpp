// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vserial_test.h for the primary calling header

#include "Vserial_test__pch.h"
#include "Vserial_test__Syms.h"
#include "Vserial_test___024root.h"

VL_INLINE_OPT VlCoroutine Vserial_test___024root___eval_initial__TOP__Vtiming__0(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->serial_test__DOT__clk = 0U;
    vlSelf->serial_test__DOT__a = 0U;
    vlSelf->serial_test__DOT__b = 0U;
    vlSelf->serial_test__DOT__rst = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "src/serial_test.sv", 
                                       21);
    vlSelf->serial_test__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "src/serial_test.sv", 
                                       22);
    vlSelf->serial_test__DOT__a = 1U;
    vlSelf->serial_test__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "src/serial_test.sv", 
                                       24);
    vlSelf->serial_test__DOT__a = 0U;
    vlSelf->serial_test__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "src/serial_test.sv", 
                                       26);
    vlSelf->serial_test__DOT__a = 1U;
    vlSelf->serial_test__DOT__b = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vserial_test___024root___dump_triggers__act(Vserial_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vserial_test___024root___eval_triggers__act(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((((IData)(vlSelf->serial_test__DOT___comp__DOT__qg) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qg__1)) 
                                      | ((IData)(vlSelf->serial_test__DOT___comp__DOT__qe) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qe__1))) 
                                     | ((IData)(vlSelf->serial_test__DOT___comp__DOT__mg) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__mg__1))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->serial_test__DOT___comp__DOT__qg) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qg__1)) 
                                     | ((IData)(vlSelf->serial_test__DOT___comp__DOT__mg) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__mg__1))));
    vlSelf->__VactTriggered.set(2U, ((((IData)(vlSelf->serial_test__DOT___comp__DOT__qe) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qe__1)) 
                                      | ((IData)(vlSelf->serial_test__DOT___comp__DOT__qs) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qs__1))) 
                                     | ((IData)(vlSelf->serial_test__DOT___comp__DOT__ms) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__ms__1))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->serial_test__DOT___comp__DOT__qe) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qe__1)) 
                                     | ((IData)(vlSelf->serial_test__DOT___comp__DOT__me) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__me__1))));
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSelf->serial_test__DOT___comp__DOT__qs) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qs__1)) 
                                     | ((IData)(vlSelf->serial_test__DOT___comp__DOT__ms) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__ms__1))));
    vlSelf->__VactTriggered.set(5U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qg__1 
        = vlSelf->serial_test__DOT___comp__DOT__qg;
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qe__1 
        = vlSelf->serial_test__DOT___comp__DOT__qe;
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__mg__1 
        = vlSelf->serial_test__DOT___comp__DOT__mg;
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qs__1 
        = vlSelf->serial_test__DOT___comp__DOT__qs;
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__ms__1 
        = vlSelf->serial_test__DOT___comp__DOT__ms;
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__me__1 
        = vlSelf->serial_test__DOT___comp__DOT__me;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vserial_test___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vserial_test___024root___act_comb__TOP__5(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___act_comb__TOP__5\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("%1#%1# => %1#%1#%1#\n",0,1,vlSelf->serial_test__DOT__a,
                     1,(IData)(vlSelf->serial_test__DOT__b),
                     1,((IData)(vlSelf->serial_test__DOT___comp__DOT__qg) 
                        | ((IData)(vlSelf->serial_test__DOT___comp__DOT__qe) 
                           & ((~ (IData)(vlSelf->serial_test__DOT__b)) 
                              & (IData)(vlSelf->serial_test__DOT__a)))),
                     1,((IData)(vlSelf->serial_test__DOT___comp__DOT__qe) 
                        & ((~ (IData)(vlSelf->serial_test__DOT__b)) 
                           ^ (IData)(vlSelf->serial_test__DOT__a))),
                     1,((IData)(vlSelf->serial_test__DOT___comp__DOT__qs) 
                        | ((IData)(vlSelf->serial_test__DOT___comp__DOT__qe) 
                           & ((~ (IData)(vlSelf->serial_test__DOT__a)) 
                              & (IData)(vlSelf->serial_test__DOT__b)))));
    }
}
