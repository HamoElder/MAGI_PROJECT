// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIQDemod.h for the primary calling header

#include "VIQDemod.h"
#include "VIQDemod__Syms.h"

//==========

void VIQDemod::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIQDemod::eval\n"); );
    VIQDemod__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/IQDemod.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VIQDemod::_eval_initial_loop(VIQDemod__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/IQDemod.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VIQDemod::_sequent__TOP__1(VIQDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemod::_sequent__TOP__1\n"); );
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IQDemod__DOT__unit_valid = ((~ (IData)(vlTOPp->reset)) 
                                        & (IData)(vlTOPp->IQDemod__DOT__demod_valid));
    vlTOPp->unit_data_valid = vlTOPp->IQDemod__DOT__unit_valid;
}

VL_INLINE_OPT void VIQDemod::_sequent__TOP__2(VIQDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemod::_sequent__TOP__2\n"); );
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IQDemod__DOT__unit_data_q = ((IData)(vlTOPp->IQDemod__DOT__demod_valid) 
                                         & (IData)(vlTOPp->IQDemod__DOT__codeTable_q));
    vlTOPp->IQDemod__DOT__unit_data_i = ((IData)(vlTOPp->IQDemod__DOT__demod_valid) 
                                         & (IData)(vlTOPp->IQDemod__DOT__compTable_i));
    vlTOPp->unit_data_payload = (((IData)(vlTOPp->IQDemod__DOT__unit_data_i) 
                                  << 1U) | (IData)(vlTOPp->IQDemod__DOT__unit_data_q));
}

VL_INLINE_OPT void VIQDemod::_sequent__TOP__4(VIQDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemod::_sequent__TOP__4\n"); );
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IQDemod__DOT__codeTable_q = ((~ (IData)(vlTOPp->reset)) 
                                         & VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->IQDemod__DOT__demod_data_q)));
    vlTOPp->IQDemod__DOT__compTable_i = ((~ (IData)(vlTOPp->reset)) 
                                         & VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->IQDemod__DOT__demod_data_i)));
    vlTOPp->IQDemod__DOT__demod_valid = ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->IQDemod__DOT__demod_valid_i) 
                                            & (IData)(vlTOPp->IQDemod__DOT__demod_valid_q)));
    vlTOPp->IQDemod__DOT__demod_data_q = ((IData)(vlTOPp->reset)
                                           ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q));
    vlTOPp->IQDemod__DOT__demod_data_i = ((IData)(vlTOPp->reset)
                                           ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i));
    vlTOPp->IQDemod__DOT__demod_valid_i = ((~ (IData)(vlTOPp->reset)) 
                                           & (IData)(vlTOPp->mod_iq_valid));
    vlTOPp->IQDemod__DOT__demod_valid_q = ((~ (IData)(vlTOPp->reset)) 
                                           & (IData)(vlTOPp->mod_iq_valid));
}

void VIQDemod::_eval(VIQDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemod::_eval\n"); );
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VIQDemod::_change_request(VIQDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemod::_change_request\n"); );
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VIQDemod::_change_request_1(VIQDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemod::_change_request_1\n"); );
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VIQDemod::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemod::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((mod_iq_valid & 0xfeU))) {
        Verilated::overWidthError("mod_iq_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
