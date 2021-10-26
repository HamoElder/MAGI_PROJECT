// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamPayloadUnite.h for the primary calling header

#include "VStreamPayloadUnite.h"
#include "VStreamPayloadUnite__Syms.h"

//==========

void VStreamPayloadUnite::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VStreamPayloadUnite::eval\n"); );
    VStreamPayloadUnite__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/StreamPayloadUnite.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VStreamPayloadUnite::_eval_initial_loop(VStreamPayloadUnite__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/StreamPayloadUnite.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VStreamPayloadUnite::_sequent__TOP__1(VStreamPayloadUnite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadUnite::_sequent__TOP__1\n"); );
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->StreamPayloadUnite__DOT__raw_data_fire) {
        vlTOPp->StreamPayloadUnite__DOT__data_buf = (IData)(
                                                            (vlTOPp->StreamPayloadUnite__DOT___zz_data_buf 
                                                             >> 8U));
    }
    vlTOPp->unite_data_payload = vlTOPp->StreamPayloadUnite__DOT__data_buf;
}

VL_INLINE_OPT void VStreamPayloadUnite::_sequent__TOP__2(VStreamPayloadUnite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadUnite::_sequent__TOP__2\n"); );
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__StreamPayloadUnite__DOT__cnt;
    // Body
    __Vdly__StreamPayloadUnite__DOT__cnt = vlTOPp->StreamPayloadUnite__DOT__cnt;
    if (vlTOPp->reset) {
        __Vdly__StreamPayloadUnite__DOT__cnt = 4U;
    } else {
        if (vlTOPp->StreamPayloadUnite__DOT__raw_data_fire) {
            __Vdly__StreamPayloadUnite__DOT__cnt = 
                (7U & ((IData)(vlTOPp->StreamPayloadUnite__DOT__cnt) 
                       - (IData)(1U)));
        } else {
            if (((IData)(vlTOPp->unite_data_valid) 
                 & (IData)(vlTOPp->unite_data_ready))) {
                __Vdly__StreamPayloadUnite__DOT__cnt = 4U;
            }
        }
    }
    vlTOPp->StreamPayloadUnite__DOT__cnt = __Vdly__StreamPayloadUnite__DOT__cnt;
    vlTOPp->unite_data_valid = (0U == (IData)(vlTOPp->StreamPayloadUnite__DOT__cnt));
    vlTOPp->raw_data_ready = (0U != (IData)(vlTOPp->StreamPayloadUnite__DOT__cnt));
}

VL_INLINE_OPT void VStreamPayloadUnite::_combo__TOP__4(VStreamPayloadUnite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadUnite::_combo__TOP__4\n"); );
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->StreamPayloadUnite__DOT___zz_data_buf = 
        (((QData)((IData)(vlTOPp->raw_data_payload)) 
          << 0x20U) | (QData)((IData)(vlTOPp->StreamPayloadUnite__DOT__data_buf)));
    vlTOPp->StreamPayloadUnite__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready));
}

void VStreamPayloadUnite::_eval(VStreamPayloadUnite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadUnite::_eval\n"); );
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VStreamPayloadUnite::_change_request(VStreamPayloadUnite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadUnite::_change_request\n"); );
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VStreamPayloadUnite::_change_request_1(VStreamPayloadUnite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadUnite::_change_request_1\n"); );
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VStreamPayloadUnite::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadUnite::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((unite_data_ready & 0xfeU))) {
        Verilated::overWidthError("unite_data_ready");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
