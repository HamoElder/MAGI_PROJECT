// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIQMixer.h for the primary calling header

#include "VIQMixer.h"
#include "VIQMixer__Syms.h"

//==========

void VIQMixer::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIQMixer::eval\n"); );
    VIQMixer__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/IQMixer.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VIQMixer::_eval_initial_loop(VIQMixer__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/IQMixer.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VIQMixer::_sequent__TOP__1(VIQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQMixer::_sequent__TOP__1\n"); );
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdly__IQMixer__DOT__iQMixerCore_1__DOT__if_i_data;
    IData/*31:0*/ __Vdly__IQMixer__DOT__iQMixerCore_1__DOT__if_q_data;
    // Body
    __Vdly__IQMixer__DOT__iQMixerCore_1__DOT__if_q_data 
        = vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_q_data;
    __Vdly__IQMixer__DOT__iQMixerCore_1__DOT__if_i_data 
        = vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_i_data;
    if (vlTOPp->reset) {
        vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_iq_valid_1 = 0U;
        __Vdly__IQMixer__DOT__iQMixerCore_1__DOT__if_i_data = 0U;
        __Vdly__IQMixer__DOT__iQMixerCore_1__DOT__if_q_data = 0U;
        vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_iq_data = 0U;
    } else {
        if (vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__iq_en) {
            vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_iq_valid_1 = 1U;
            vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_iq_data 
                = (vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_i_data 
                   + vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_q_data);
            __Vdly__IQMixer__DOT__iQMixerCore_1__DOT__if_i_data 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__base_i_data)), 
                              VL_EXTENDS_II(32,16, (IData)(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__carrier_i_data)));
            __Vdly__IQMixer__DOT__iQMixerCore_1__DOT__if_q_data 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__base_q_data)), 
                              VL_EXTENDS_II(32,16, (IData)(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__carrier_q_data)));
        } else {
            vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_iq_valid_1 = 0U;
            __Vdly__IQMixer__DOT__iQMixerCore_1__DOT__if_i_data = 0U;
            __Vdly__IQMixer__DOT__iQMixerCore_1__DOT__if_q_data = 0U;
        }
    }
    vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_i_data 
        = __Vdly__IQMixer__DOT__iQMixerCore_1__DOT__if_i_data;
    vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_q_data 
        = __Vdly__IQMixer__DOT__iQMixerCore_1__DOT__if_q_data;
    vlTOPp->if_iq_0_valid = vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_iq_valid_1;
    vlTOPp->if_iq_0_payload = vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_iq_data;
    if (vlTOPp->reset) {
        vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__base_i_data = 0U;
    } else {
        if (vlTOPp->base_iq_0_valid) {
            vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__base_i_data 
                = vlTOPp->base_iq_0_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__carrier_i_data = 0U;
    } else {
        if (vlTOPp->carries_iq_valid) {
            vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__carrier_i_data 
                = vlTOPp->carries_iq_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__base_q_data = 0U;
    } else {
        if (vlTOPp->base_iq_0_valid) {
            vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__base_q_data 
                = vlTOPp->base_iq_0_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__carrier_q_data = 0U;
    } else {
        if (vlTOPp->carries_iq_valid) {
            vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__carrier_q_data 
                = vlTOPp->carries_iq_payload_cha_q;
        }
    }
    vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__iq_en 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->base_iq_0_valid) 
                                         & (IData)(vlTOPp->carries_iq_valid)));
}

void VIQMixer::_eval(VIQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQMixer::_eval\n"); );
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData VIQMixer::_change_request(VIQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQMixer::_change_request\n"); );
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VIQMixer::_change_request_1(VIQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQMixer::_change_request_1\n"); );
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VIQMixer::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQMixer::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((base_iq_0_valid & 0xfeU))) {
        Verilated::overWidthError("base_iq_0_valid");}
    if (VL_UNLIKELY((carries_iq_valid & 0xfeU))) {
        Verilated::overWidthError("carries_iq_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
