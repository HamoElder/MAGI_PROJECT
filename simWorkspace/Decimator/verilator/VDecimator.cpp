// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecimator.h for the primary calling header

#include "VDecimator.h"
#include "VDecimator__Syms.h"

//==========

void VDecimator::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDecimator::eval\n"); );
    VDecimator__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/Decimator.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDecimator::_eval_initial_loop(VDecimator__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/Decimator.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VDecimator::_sequent__TOP__1(VDecimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimator::_sequent__TOP__1\n"); );
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->in_valid) {
        if ((4U == (IData)(vlTOPp->Decimator__DOT__cnt))) {
            vlTOPp->Decimator__DOT__out_data = vlTOPp->in_payload;
        }
    }
    vlTOPp->out_payload = vlTOPp->Decimator__DOT__out_data;
}

VL_INLINE_OPT void VDecimator::_sequent__TOP__2(VDecimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimator::_sequent__TOP__2\n"); );
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__Decimator__DOT__cnt;
    // Body
    __Vdly__Decimator__DOT__cnt = vlTOPp->Decimator__DOT__cnt;
    vlTOPp->Decimator__DOT__out_valid_1 = ((~ (IData)(vlTOPp->reset)) 
                                           & ((IData)(vlTOPp->in_valid) 
                                              & (4U 
                                                 == (IData)(vlTOPp->Decimator__DOT__cnt))));
    if (vlTOPp->reset) {
        __Vdly__Decimator__DOT__cnt = 0U;
    } else {
        if (vlTOPp->in_valid) {
            __Vdly__Decimator__DOT__cnt = ((4U == (IData)(vlTOPp->Decimator__DOT__cnt))
                                            ? 0U : (IData)(vlTOPp->Decimator__DOT___zz_cnt));
        }
    }
    vlTOPp->Decimator__DOT__cnt = __Vdly__Decimator__DOT__cnt;
    vlTOPp->out_valid = vlTOPp->Decimator__DOT__out_valid_1;
    vlTOPp->Decimator__DOT___zz_cnt = (7U & ((IData)(1U) 
                                             + (IData)(vlTOPp->Decimator__DOT__cnt)));
}

void VDecimator::_eval(VDecimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimator::_eval\n"); );
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VDecimator::_change_request(VDecimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimator::_change_request\n"); );
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VDecimator::_change_request_1(VDecimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimator::_change_request_1\n"); );
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDecimator::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimator::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((in_valid & 0xfeU))) {
        Verilated::overWidthError("in_valid");}
    if (VL_UNLIKELY((in_payload & 0xf000U))) {
        Verilated::overWidthError("in_payload");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
