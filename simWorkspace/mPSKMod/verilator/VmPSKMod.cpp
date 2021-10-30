// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmPSKMod.h for the primary calling header

#include "VmPSKMod.h"
#include "VmPSKMod__Syms.h"

//==========

void VmPSKMod::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmPSKMod::eval\n"); );
    VmPSKMod__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/mPSKMod.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VmPSKMod::_eval_initial_loop(VmPSKMod__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/mPSKMod.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VmPSKMod::_sequent__TOP__1(VmPSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmPSKMod::_sequent__TOP__1\n"); );
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mPSKMod__DOT__unit_valid = ((~ (IData)(vlTOPp->reset)) 
                                        & (IData)(vlTOPp->unit_data_valid));
    vlTOPp->mPSKMod__DOT__unit_data = ((IData)(vlTOPp->reset)
                                        ? 0U : (IData)(vlTOPp->unit_data_payload));
    vlTOPp->mod_iq_valid = vlTOPp->mPSKMod__DOT__unit_valid;
    vlTOPp->mPSKMod__DOT___zz___05Fzz_mod_iq_0 = ((0U 
                                                   == (IData)(vlTOPp->mPSKMod__DOT__unit_data))
                                                   ? 0xa7a7U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlTOPp->mPSKMod__DOT__unit_data))
                                                    ? 0xa759U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->mPSKMod__DOT__unit_data))
                                                     ? 0x59a7U
                                                     : 0x5959U)));
    vlTOPp->mod_iq_payload_cha_i = ((IData)(vlTOPp->mPSKMod__DOT__unit_valid)
                                     ? (0xffU & ((IData)(vlTOPp->mPSKMod__DOT___zz___05Fzz_mod_iq_0) 
                                                 >> 8U))
                                     : 0U);
    vlTOPp->mod_iq_payload_cha_q = ((IData)(vlTOPp->mPSKMod__DOT__unit_valid)
                                     ? (0xffU & (IData)(vlTOPp->mPSKMod__DOT___zz___05Fzz_mod_iq_0))
                                     : 0U);
}

void VmPSKMod::_eval(VmPSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmPSKMod::_eval\n"); );
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData VmPSKMod::_change_request(VmPSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmPSKMod::_change_request\n"); );
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VmPSKMod::_change_request_1(VmPSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmPSKMod::_change_request_1\n"); );
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmPSKMod::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmPSKMod::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((unit_data_valid & 0xfeU))) {
        Verilated::overWidthError("unit_data_valid");}
    if (VL_UNLIKELY((unit_data_payload & 0xfcU))) {
        Verilated::overWidthError("unit_data_payload");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
