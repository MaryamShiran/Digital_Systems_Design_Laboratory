// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest__pch.h"
#include "Vtest__Syms.h"
#include "Vtest___024root.h"

VL_INLINE_OPT VlCoroutine Vtest___024root___eval_initial__TOP__Vtiming__0(Vtest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->test__DOT__a = 0xcU;
    vlSelf->test__DOT__b = 0xcU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "src/test.sv", 
                                       16);
    vlSelf->test__DOT__a = 0xeU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "src/test.sv", 
                                       17);
    vlSelf->test__DOT__b = 4U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "src/test.sv", 
                                       18);
    vlSelf->test__DOT__a = 3U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "src/test.sv", 
                                       19);
    vlSelf->test__DOT__b = 3U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "src/test.sv", 
                                       20);
    vlSelf->test__DOT__a = 7U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "src/test.sv", 
                                       21);
    vlSelf->test__DOT__b = 0xfU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "src/test.sv", 
                                       22);
    vlSelf->test__DOT__a = 8U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__act(Vtest___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest___024root___eval_triggers__act(Vtest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtest___024root___act_sequent__TOP__0(Vtest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ test__DOT___comp__DOT____Vcellout__casc__BRA__4__KET____DOT___casc__o_e;
    test__DOT___comp__DOT____Vcellout__casc__BRA__4__KET____DOT___casc__o_e = 0;
    CData/*0:0*/ test__DOT___comp__DOT____Vcellout__casc__BRA__3__KET____DOT___casc__o_e;
    test__DOT___comp__DOT____Vcellout__casc__BRA__3__KET____DOT___casc__o_e = 0;
    // Body
    test__DOT___comp__DOT____Vcellout__casc__BRA__4__KET____DOT___casc__o_e 
        = (1U ^ (((IData)(vlSelf->test__DOT__b) ^ (IData)(vlSelf->test__DOT__a)) 
                 >> 3U));
    test__DOT___comp__DOT____Vcellout__casc__BRA__3__KET____DOT___casc__o_e 
        = ((IData)(test__DOT___comp__DOT____Vcellout__casc__BRA__4__KET____DOT___casc__o_e) 
           & ((~ ((IData)(vlSelf->test__DOT__b) >> 2U)) 
              ^ ((IData)(vlSelf->test__DOT__a) >> 2U)));
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("%2# vs %2# => %b%b%b\n",0,4,vlSelf->test__DOT__a,
                     4,(IData)(vlSelf->test__DOT__b),
                     1,(1U & (((((~ ((IData)(vlSelf->test__DOT__b) 
                                     >> 3U)) & ((IData)(vlSelf->test__DOT__a) 
                                                >> 3U)) 
                                | ((IData)(test__DOT___comp__DOT____Vcellout__casc__BRA__4__KET____DOT___casc__o_e) 
                                   & ((~ ((IData)(vlSelf->test__DOT__b) 
                                          >> 2U)) & 
                                      ((IData)(vlSelf->test__DOT__a) 
                                       >> 2U)))) | 
                               ((IData)(test__DOT___comp__DOT____Vcellout__casc__BRA__3__KET____DOT___casc__o_e) 
                                & ((~ ((IData)(vlSelf->test__DOT__b) 
                                       >> 1U)) & ((IData)(vlSelf->test__DOT__a) 
                                                  >> 1U)))) 
                              | (((IData)(test__DOT___comp__DOT____Vcellout__casc__BRA__3__KET____DOT___casc__o_e) 
                                  & ((~ ((IData)(vlSelf->test__DOT__b) 
                                         >> 1U)) ^ 
                                     ((IData)(vlSelf->test__DOT__a) 
                                      >> 1U))) & ((~ (IData)(vlSelf->test__DOT__b)) 
                                                  & (IData)(vlSelf->test__DOT__a))))),
                     1,(((IData)(test__DOT___comp__DOT____Vcellout__casc__BRA__3__KET____DOT___casc__o_e) 
                         & ((~ ((IData)(vlSelf->test__DOT__b) 
                                >> 1U)) ^ ((IData)(vlSelf->test__DOT__a) 
                                           >> 1U))) 
                        & ((~ (IData)(vlSelf->test__DOT__b)) 
                           ^ (IData)(vlSelf->test__DOT__a))),
                     1,(1U & (((((~ ((IData)(vlSelf->test__DOT__a) 
                                     >> 3U)) & ((IData)(vlSelf->test__DOT__b) 
                                                >> 3U)) 
                                | ((IData)(test__DOT___comp__DOT____Vcellout__casc__BRA__4__KET____DOT___casc__o_e) 
                                   & ((~ ((IData)(vlSelf->test__DOT__a) 
                                          >> 2U)) & 
                                      ((IData)(vlSelf->test__DOT__b) 
                                       >> 2U)))) | 
                               ((IData)(test__DOT___comp__DOT____Vcellout__casc__BRA__3__KET____DOT___casc__o_e) 
                                & ((~ ((IData)(vlSelf->test__DOT__a) 
                                       >> 1U)) & ((IData)(vlSelf->test__DOT__b) 
                                                  >> 1U)))) 
                              | (((IData)(test__DOT___comp__DOT____Vcellout__casc__BRA__3__KET____DOT___casc__o_e) 
                                  & ((~ ((IData)(vlSelf->test__DOT__b) 
                                         >> 1U)) ^ 
                                     ((IData)(vlSelf->test__DOT__a) 
                                      >> 1U))) & ((~ (IData)(vlSelf->test__DOT__a)) 
                                                  & (IData)(vlSelf->test__DOT__b))))));
    }
}
