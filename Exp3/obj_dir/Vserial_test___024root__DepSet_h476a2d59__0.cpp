// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vserial_test.h for the primary calling header

#include "Vserial_test__pch.h"
#include "Vserial_test___024root.h"

VlCoroutine Vserial_test___024root___eval_initial__TOP__Vtiming__0(Vserial_test___024root* vlSelf);
VlCoroutine Vserial_test___024root___eval_initial__TOP__Vtiming__1(Vserial_test___024root* vlSelf);

void Vserial_test___024root___eval_initial(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_initial\n"); );
    // Body
    Vserial_test___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vserial_test___024root___eval_initial__TOP__Vtiming__1(vlSelf);
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
}

VL_INLINE_OPT VlCoroutine Vserial_test___024root___eval_initial__TOP__Vtiming__1(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "src/serial_test.sv", 
                                           14);
        vlSelf->serial_test__DOT__clk = (1U & (~ (IData)(vlSelf->serial_test__DOT__clk)));
    }
}

void Vserial_test___024root___act_comb__TOP__0(Vserial_test___024root* vlSelf);
void Vserial_test___024root___act_comb__TOP__1(Vserial_test___024root* vlSelf);
void Vserial_test___024root___act_comb__TOP__2(Vserial_test___024root* vlSelf);
void Vserial_test___024root___act_comb__TOP__3(Vserial_test___024root* vlSelf);
void Vserial_test___024root___act_comb__TOP__4(Vserial_test___024root* vlSelf);
void Vserial_test___024root___act_comb__TOP__5(Vserial_test___024root* vlSelf);

void Vserial_test___024root___eval_act(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_act\n"); );
    // Body
    if ((0x21ULL & vlSelf->__VactTriggered.word(0U))) {
        Vserial_test___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x24ULL & vlSelf->__VactTriggered.word(0U))) {
        Vserial_test___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x28ULL & vlSelf->__VactTriggered.word(0U))) {
        Vserial_test___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x22ULL & vlSelf->__VactTriggered.word(0U))) {
        Vserial_test___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x30ULL & vlSelf->__VactTriggered.word(0U))) {
        Vserial_test___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x3aULL & vlSelf->__VactTriggered.word(0U))) {
        Vserial_test___024root___act_comb__TOP__5(vlSelf);
    }
}

VL_INLINE_OPT void Vserial_test___024root___act_comb__TOP__0(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->serial_test__DOT___comp__DOT__mg = ((IData)(vlSelf->serial_test__DOT__rst)
                                                 ? 0U
                                                 : 
                                                (1U 
                                                 & ((IData)(vlSelf->serial_test__DOT__clk)
                                                     ? (IData)(vlSelf->serial_test__DOT___comp__DOT__mg)
                                                     : 
                                                    ((IData)(vlSelf->serial_test__DOT___comp__DOT__qg) 
                                                     | ((IData)(vlSelf->serial_test__DOT___comp__DOT__qe) 
                                                        & ((~ (IData)(vlSelf->serial_test__DOT__b)) 
                                                           & (IData)(vlSelf->serial_test__DOT__a)))))));
}

VL_INLINE_OPT void Vserial_test___024root___act_comb__TOP__1(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->serial_test__DOT___comp__DOT__ms = ((IData)(vlSelf->serial_test__DOT__rst)
                                                 ? 0U
                                                 : 
                                                (1U 
                                                 & ((IData)(vlSelf->serial_test__DOT__clk)
                                                     ? (IData)(vlSelf->serial_test__DOT___comp__DOT__ms)
                                                     : 
                                                    ((IData)(vlSelf->serial_test__DOT___comp__DOT__qs) 
                                                     | ((IData)(vlSelf->serial_test__DOT___comp__DOT__qe) 
                                                        & ((~ (IData)(vlSelf->serial_test__DOT__a)) 
                                                           & (IData)(vlSelf->serial_test__DOT__b)))))));
}

VL_INLINE_OPT void Vserial_test___024root___act_comb__TOP__2(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___act_comb__TOP__2\n"); );
    // Body
    if (vlSelf->serial_test__DOT__rst) {
        vlSelf->serial_test__DOT___comp__DOT__me = 1U;
        vlSelf->serial_test__DOT___comp__DOT__qe = 1U;
    } else if (vlSelf->serial_test__DOT__clk) {
        vlSelf->serial_test__DOT___comp__DOT__me = 
            (1U & (IData)(vlSelf->serial_test__DOT___comp__DOT__me));
        vlSelf->serial_test__DOT___comp__DOT__qe = 
            (1U & (IData)(vlSelf->serial_test__DOT___comp__DOT__me));
    } else {
        vlSelf->serial_test__DOT___comp__DOT__me = 
            (1U & ((IData)(vlSelf->serial_test__DOT___comp__DOT__qe) 
                   & ((~ (IData)(vlSelf->serial_test__DOT__b)) 
                      ^ (IData)(vlSelf->serial_test__DOT__a))));
        vlSelf->serial_test__DOT___comp__DOT__qe = 
            (1U & (IData)(vlSelf->serial_test__DOT___comp__DOT__qe));
    }
}

VL_INLINE_OPT void Vserial_test___024root___act_comb__TOP__3(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___act_comb__TOP__3\n"); );
    // Body
    vlSelf->serial_test__DOT___comp__DOT__qg = ((IData)(vlSelf->serial_test__DOT__rst)
                                                 ? 0U
                                                 : 
                                                (1U 
                                                 & ((IData)(vlSelf->serial_test__DOT__clk)
                                                     ? (IData)(vlSelf->serial_test__DOT___comp__DOT__mg)
                                                     : (IData)(vlSelf->serial_test__DOT___comp__DOT__qg))));
}

VL_INLINE_OPT void Vserial_test___024root___act_comb__TOP__4(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->serial_test__DOT___comp__DOT__qs = ((IData)(vlSelf->serial_test__DOT__rst)
                                                 ? 0U
                                                 : 
                                                (1U 
                                                 & ((IData)(vlSelf->serial_test__DOT__clk)
                                                     ? (IData)(vlSelf->serial_test__DOT___comp__DOT__ms)
                                                     : (IData)(vlSelf->serial_test__DOT___comp__DOT__qs))));
}

void Vserial_test___024root___eval_nba(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_nba\n"); );
    // Body
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vserial_test___024root___act_comb__TOP__5(vlSelf);
    }
}

void Vserial_test___024root___timing_resume(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___timing_resume\n"); );
    // Body
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vserial_test___024root___eval_triggers__act(Vserial_test___024root* vlSelf);

bool Vserial_test___024root___eval_phase__act(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vserial_test___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vserial_test___024root___timing_resume(vlSelf);
        Vserial_test___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vserial_test___024root___eval_phase__nba(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vserial_test___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vserial_test___024root___dump_triggers__nba(Vserial_test___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vserial_test___024root___dump_triggers__act(Vserial_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vserial_test___024root___eval(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vserial_test___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/serial_test.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vserial_test___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/serial_test.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vserial_test___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vserial_test___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vserial_test___024root___eval_debug_assertions(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
