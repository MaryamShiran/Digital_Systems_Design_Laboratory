// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vserial_test.h for the primary calling header

#include "Vserial_test__pch.h"
#include "Vserial_test___024root.h"

VL_ATTR_COLD void Vserial_test___024root___eval_static(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vserial_test___024root___eval_final(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vserial_test___024root___dump_triggers__stl(Vserial_test___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vserial_test___024root___eval_phase__stl(Vserial_test___024root* vlSelf);

VL_ATTR_COLD void Vserial_test___024root___eval_settle(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vserial_test___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/serial_test.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vserial_test___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vserial_test___024root___dump_triggers__stl(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] serial_test._comp.qg or [hybrid] serial_test._comp.qe or [hybrid] serial_test._comp.mg)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] serial_test._comp.qg or [hybrid] serial_test._comp.mg)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] serial_test._comp.qe or [hybrid] serial_test._comp.qs or [hybrid] serial_test._comp.ms)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] serial_test._comp.qe or [hybrid] serial_test._comp.me)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] serial_test._comp.qs or [hybrid] serial_test._comp.ms)\n");
    }
}
#endif  // VL_DEBUG

void Vserial_test___024root___act_comb__TOP__0(Vserial_test___024root* vlSelf);
void Vserial_test___024root___act_comb__TOP__1(Vserial_test___024root* vlSelf);
void Vserial_test___024root___act_comb__TOP__2(Vserial_test___024root* vlSelf);
void Vserial_test___024root___act_comb__TOP__3(Vserial_test___024root* vlSelf);
void Vserial_test___024root___act_comb__TOP__4(Vserial_test___024root* vlSelf);
void Vserial_test___024root___act_comb__TOP__5(Vserial_test___024root* vlSelf);

VL_ATTR_COLD void Vserial_test___024root___eval_stl(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_stl\n"); );
    // Body
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vserial_test___024root___act_comb__TOP__0(vlSelf);
    }
    if ((9ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vserial_test___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vserial_test___024root___act_comb__TOP__2(vlSelf);
    }
    if ((5ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vserial_test___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vserial_test___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x35ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vserial_test___024root___act_comb__TOP__5(vlSelf);
    }
}

VL_ATTR_COLD void Vserial_test___024root___eval_triggers__stl(Vserial_test___024root* vlSelf);

VL_ATTR_COLD bool Vserial_test___024root___eval_phase__stl(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vserial_test___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vserial_test___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vserial_test___024root___dump_triggers__act(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] serial_test._comp.qg or [hybrid] serial_test._comp.qe or [hybrid] serial_test._comp.mg)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] serial_test._comp.qg or [hybrid] serial_test._comp.mg)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] serial_test._comp.qe or [hybrid] serial_test._comp.qs or [hybrid] serial_test._comp.ms)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] serial_test._comp.qe or [hybrid] serial_test._comp.me)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] serial_test._comp.qs or [hybrid] serial_test._comp.ms)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vserial_test___024root___dump_triggers__nba(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] serial_test._comp.qg or [hybrid] serial_test._comp.qe or [hybrid] serial_test._comp.mg)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] serial_test._comp.qg or [hybrid] serial_test._comp.mg)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] serial_test._comp.qe or [hybrid] serial_test._comp.qs or [hybrid] serial_test._comp.ms)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] serial_test._comp.qe or [hybrid] serial_test._comp.me)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] serial_test._comp.qs or [hybrid] serial_test._comp.ms)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vserial_test___024root___ctor_var_reset(Vserial_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vserial_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_test___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->serial_test__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->serial_test__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->serial_test__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->serial_test__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->serial_test__DOT___comp__DOT__mg = VL_RAND_RESET_I(1);
    vlSelf->serial_test__DOT___comp__DOT__qg = VL_RAND_RESET_I(1);
    vlSelf->serial_test__DOT___comp__DOT__me = VL_RAND_RESET_I(1);
    vlSelf->serial_test__DOT___comp__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->serial_test__DOT___comp__DOT__ms = VL_RAND_RESET_I(1);
    vlSelf->serial_test__DOT___comp__DOT__qs = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qg__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qe__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__mg__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qs__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__ms__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__me__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qg__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qe__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__mg__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__qs__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__ms__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__serial_test__DOT___comp__DOT__me__1 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
