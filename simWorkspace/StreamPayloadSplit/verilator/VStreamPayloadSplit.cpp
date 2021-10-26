// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamPayloadSplit.h for the primary calling header

#include "VStreamPayloadSplit.h"
#include "VStreamPayloadSplit__Syms.h"

//==========

void VStreamPayloadSplit::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VStreamPayloadSplit::eval\n"); );
    VStreamPayloadSplit__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/StreamPayloadSplit.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VStreamPayloadSplit::_eval_initial_loop(VStreamPayloadSplit__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/StreamPayloadSplit.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VStreamPayloadSplit::_sequent__TOP__1(VStreamPayloadSplit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadSplit::_sequent__TOP__1\n"); );
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdly__StreamPayloadSplit__DOT__data_buf;
    // Body
    __Vdly__StreamPayloadSplit__DOT__data_buf = vlTOPp->StreamPayloadSplit__DOT__data_buf;
    if (vlTOPp->StreamPayloadSplit__DOT__raw_data_fire) {
        __Vdly__StreamPayloadSplit__DOT__data_buf = vlTOPp->raw_data_payload;
    } else {
        if (vlTOPp->StreamPayloadSplit__DOT__split_data_fire) {
            __Vdly__StreamPayloadSplit__DOT__data_buf 
                = (vlTOPp->StreamPayloadSplit__DOT__data_buf 
                   << 8U);
        }
    }
    vlTOPp->StreamPayloadSplit__DOT__data_buf = __Vdly__StreamPayloadSplit__DOT__data_buf;
    vlTOPp->split_data_payload = (0xffU & (vlTOPp->StreamPayloadSplit__DOT__data_buf 
                                           >> 0x18U));
}

VL_INLINE_OPT void VStreamPayloadSplit::_sequent__TOP__2(VStreamPayloadSplit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadSplit::_sequent__TOP__2\n"); );
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__StreamPayloadSplit__DOT__cnt;
    // Body
    __Vdly__StreamPayloadSplit__DOT__cnt = vlTOPp->StreamPayloadSplit__DOT__cnt;
    if (vlTOPp->reset) {
        __Vdly__StreamPayloadSplit__DOT__cnt = 0U;
    } else {
        if (vlTOPp->StreamPayloadSplit__DOT__raw_data_fire) {
            __Vdly__StreamPayloadSplit__DOT__cnt = 4U;
        } else {
            if (vlTOPp->StreamPayloadSplit__DOT__split_data_fire) {
                __Vdly__StreamPayloadSplit__DOT__cnt 
                    = (7U & ((IData)(vlTOPp->StreamPayloadSplit__DOT__cnt) 
                             - (IData)(1U)));
            }
        }
    }
    vlTOPp->StreamPayloadSplit__DOT__cnt = __Vdly__StreamPayloadSplit__DOT__cnt;
    vlTOPp->raw_data_ready = (0U == (IData)(vlTOPp->StreamPayloadSplit__DOT__cnt));
    vlTOPp->split_data_valid = (0U != (IData)(vlTOPp->StreamPayloadSplit__DOT__cnt));
}

VL_INLINE_OPT void VStreamPayloadSplit::_combo__TOP__4(VStreamPayloadSplit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadSplit::_combo__TOP__4\n"); );
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->StreamPayloadSplit__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready));
    vlTOPp->StreamPayloadSplit__DOT__split_data_fire 
        = ((IData)(vlTOPp->split_data_valid) & (IData)(vlTOPp->split_data_ready));
}

void VStreamPayloadSplit::_eval(VStreamPayloadSplit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadSplit::_eval\n"); );
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData VStreamPayloadSplit::_change_request(VStreamPayloadSplit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadSplit::_change_request\n"); );
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VStreamPayloadSplit::_change_request_1(VStreamPayloadSplit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadSplit::_change_request_1\n"); );
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VStreamPayloadSplit::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadSplit::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((split_data_ready & 0xfeU))) {
        Verilated::overWidthError("split_data_ready");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
