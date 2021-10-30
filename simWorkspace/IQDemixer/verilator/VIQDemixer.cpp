// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIQDemixer.h for the primary calling header

#include "VIQDemixer.h"
#include "VIQDemixer__Syms.h"

//==========

void VIQDemixer::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIQDemixer::eval\n"); );
    VIQDemixer__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/IQDemixer.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VIQDemixer::_eval_initial_loop(VIQDemixer__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/IQDemixer.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VIQDemixer::_sequent__TOP__1(VIQDemixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemixer::_sequent__TOP__1\n"); );
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_iq_valid_1 = 0U;
        vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_i_data = 0U;
        vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_q_data = 0U;
    } else {
        if (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__iq_en) {
            vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_iq_valid_1 = 1U;
            vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_i_data 
                = (0xffffU & ((0x10000U & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1)
                               ? ((3U != (3U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 
                                                >> 0xfU)))
                                   ? 0x8000U : vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1)
                               : ((0x8000U & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1)
                                   ? 0x7fffU : vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1)));
            vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_q_data 
                = (0xffffU & ((0x10000U & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1)
                               ? ((3U != (3U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 
                                                >> 0xfU)))
                                   ? 0x8000U : vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1)
                               : ((0x8000U & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1)
                                   ? 0x7fffU : vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1)));
        } else {
            vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_iq_valid_1 = 0U;
            vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_i_data = 0U;
            vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_q_data = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__carries_i_data = 0U;
    } else {
        if (vlTOPp->carries_iq_valid) {
            vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__carries_i_data 
                = vlTOPp->carries_iq_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__carries_q_data = 0U;
    } else {
        if (vlTOPp->carries_iq_valid) {
            vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__carries_q_data 
                = vlTOPp->carries_iq_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__if_iq_data = 0U;
    } else {
        if (vlTOPp->if_iq_0_valid) {
            vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__if_iq_data 
                = vlTOPp->if_iq_0_payload;
        }
    }
    vlTOPp->base_iq_0_valid = vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_iq_valid_1;
    vlTOPp->base_iq_0_payload_cha_i = vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_i_data;
    vlTOPp->base_iq_0_payload_cha_q = vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_q_data;
    vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__iq_en 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->if_iq_0_valid) 
                                         & (IData)(vlTOPp->carries_iq_valid)));
    vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__if_iq_data)), 
                      VL_EXTENDS_II(32,16, (IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__carries_i_data)));
    vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__if_iq_data)), 
                      VL_EXTENDS_II(32,16, (IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__carries_q_data)));
    vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_2 
        = (0xffffU & ((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data))
                       ? ((IData)(1U) + (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                                         >> 0x10U))
                       : (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                          >> 0x10U)));
    vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_2 
        = (0xffffU & ((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data))
                       ? ((IData)(1U) + (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                                         >> 0x10U))
                       : (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                          >> 0x10U)));
    vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 
        = ((0x80000000U & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data)
            ? ((0x10000U & ((IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_2) 
                            << 1U)) | (IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_2))
            : (0xffffU & ((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data))
                           ? ((IData)(1U) + (0x7fffU 
                                             & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                                                >> 0x10U)))
                           : (0x7fffU & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                                         >> 0x10U)))));
    vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 
        = ((0x80000000U & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data)
            ? ((0x10000U & ((IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_2) 
                            << 1U)) | (IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_2))
            : (0xffffU & ((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data))
                           ? ((IData)(1U) + (0x7fffU 
                                             & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                                                >> 0x10U)))
                           : (0x7fffU & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                                         >> 0x10U)))));
}

void VIQDemixer::_eval(VIQDemixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemixer::_eval\n"); );
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VIQDemixer::_change_request(VIQDemixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemixer::_change_request\n"); );
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VIQDemixer::_change_request_1(VIQDemixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemixer::_change_request_1\n"); );
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VIQDemixer::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemixer::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((if_iq_0_valid & 0xfeU))) {
        Verilated::overWidthError("if_iq_0_valid");}
    if (VL_UNLIKELY((carries_iq_valid & 0xfeU))) {
        Verilated::overWidthError("carries_iq_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
