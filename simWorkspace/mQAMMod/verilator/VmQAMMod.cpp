// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmQAMMod.h for the primary calling header

#include "VmQAMMod.h"
#include "VmQAMMod__Syms.h"

//==========

void VmQAMMod::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmQAMMod::eval\n"); );
    VmQAMMod__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/mQAMMod.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VmQAMMod::_eval_initial_loop(VmQAMMod__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/mQAMMod.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VmQAMMod::_sequent__TOP__1(VmQAMMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmQAMMod::_sequent__TOP__1\n"); );
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mQAMMod__DOT__unit_data = ((IData)(vlTOPp->reset)
                                        ? 0U : (IData)(vlTOPp->unit_data_payload));
    vlTOPp->mQAMMod__DOT__unit_valid = ((~ (IData)(vlTOPp->reset)) 
                                        & (IData)(vlTOPp->unit_data_valid));
    vlTOPp->mod_iq_valid = vlTOPp->mQAMMod__DOT__unit_valid;
    vlTOPp->mod_iq_payload_cha_i = ((IData)(vlTOPp->mQAMMod__DOT__unit_valid)
                                     ? ((0U == (3U 
                                                & ((IData)(vlTOPp->mQAMMod__DOT__unit_data) 
                                                   >> 2U)))
                                         ? 0xc34aU : 
                                        ((1U == (3U 
                                                 & ((IData)(vlTOPp->mQAMMod__DOT__unit_data) 
                                                    >> 2U)))
                                          ? 0xd4a3U
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlTOPp->mQAMMod__DOT__unit_data) 
                                                >> 2U)))
                                              ? 0xf754U
                                              : 0xe5fbU)))
                                     : 0U);
    vlTOPp->mod_iq_payload_cha_q = ((IData)(vlTOPp->mQAMMod__DOT__unit_valid)
                                     ? ((0U == (3U 
                                                & (IData)(vlTOPp->mQAMMod__DOT__unit_data)))
                                         ? 0xc34aU : 
                                        ((1U == (3U 
                                                 & (IData)(vlTOPp->mQAMMod__DOT__unit_data)))
                                          ? 0xd4a3U
                                          : ((2U == 
                                              (3U & (IData)(vlTOPp->mQAMMod__DOT__unit_data)))
                                              ? 0xf754U
                                              : 0xe5fbU)))
                                     : 0U);
}

void VmQAMMod::_eval(VmQAMMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmQAMMod::_eval\n"); );
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData VmQAMMod::_change_request(VmQAMMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmQAMMod::_change_request\n"); );
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VmQAMMod::_change_request_1(VmQAMMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmQAMMod::_change_request_1\n"); );
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmQAMMod::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmQAMMod::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((unit_data_valid & 0xfeU))) {
        Verilated::overWidthError("unit_data_valid");}
    if (VL_UNLIKELY((unit_data_payload & 0xf0U))) {
        Verilated::overWidthError("unit_data_payload");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
