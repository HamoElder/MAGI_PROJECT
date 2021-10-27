// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamPackageGen.h for the primary calling header

#include "VStreamPackageGen.h"
#include "VStreamPackageGen__Syms.h"

//==========

void VStreamPackageGen::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VStreamPackageGen::eval\n"); );
    VStreamPackageGen__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/StreamPackageGen.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VStreamPackageGen::_eval_initial_loop(VStreamPackageGen__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/StreamPackageGen.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VStreamPackageGen::_sequent__TOP__1(VStreamPackageGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPackageGen::_sequent__TOP__1\n"); );
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__StreamPackageGen__DOT__strb_buf;
    IData/*31:0*/ __Vdly__StreamPackageGen__DOT__split_core__DOT__data_buf;
    // Body
    __Vdly__StreamPackageGen__DOT__split_core__DOT__data_buf 
        = vlTOPp->StreamPackageGen__DOT__split_core__DOT__data_buf;
    __Vdly__StreamPackageGen__DOT__strb_buf = vlTOPp->StreamPackageGen__DOT__strb_buf;
    if (vlTOPp->StreamPackageGen__DOT__split_core__DOT__raw_data_fire) {
        __Vdly__StreamPackageGen__DOT__split_core__DOT__data_buf 
            = vlTOPp->raw_data_payload_data;
    } else {
        if (vlTOPp->StreamPackageGen__DOT__split_core__DOT__split_data_fire) {
            __Vdly__StreamPackageGen__DOT__split_core__DOT__data_buf 
                = (vlTOPp->StreamPackageGen__DOT__split_core__DOT__data_buf 
                   << 8U);
        }
    }
    if (((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready))) {
        __Vdly__StreamPackageGen__DOT__strb_buf = vlTOPp->raw_data_payload_strb;
    } else {
        if (((0U != (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt)) 
             & (IData)(vlTOPp->pkg_data_ready))) {
            __Vdly__StreamPackageGen__DOT__strb_buf 
                = (0xfU & ((IData)(vlTOPp->StreamPackageGen__DOT__strb_buf) 
                           << 1U));
        }
    }
    vlTOPp->StreamPackageGen__DOT__split_core__DOT__data_buf 
        = __Vdly__StreamPackageGen__DOT__split_core__DOT__data_buf;
    vlTOPp->StreamPackageGen__DOT__strb_buf = __Vdly__StreamPackageGen__DOT__strb_buf;
    vlTOPp->pkg_data_payload = (0xffU & (vlTOPp->StreamPackageGen__DOT__split_core__DOT__data_buf 
                                         >> 0x18U));
}

VL_INLINE_OPT void VStreamPackageGen::_sequent__TOP__2(VStreamPackageGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPackageGen::_sequent__TOP__2\n"); );
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__StreamPackageGen__DOT__split_core__DOT__cnt;
    // Body
    __Vdly__StreamPackageGen__DOT__split_core__DOT__cnt 
        = vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt;
    if (vlTOPp->reset) {
        __Vdly__StreamPackageGen__DOT__split_core__DOT__cnt = 0U;
    } else {
        if (vlTOPp->StreamPackageGen__DOT__split_core__DOT__raw_data_fire) {
            __Vdly__StreamPackageGen__DOT__split_core__DOT__cnt = 4U;
        } else {
            if (vlTOPp->StreamPackageGen__DOT__split_core__DOT__split_data_fire) {
                __Vdly__StreamPackageGen__DOT__split_core__DOT__cnt 
                    = (7U & ((IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt) 
                             - (IData)(1U)));
            }
        }
    }
    vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt 
        = __Vdly__StreamPackageGen__DOT__split_core__DOT__cnt;
    vlTOPp->raw_data_ready = (0U == (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt));
    vlTOPp->pkg_data_valid = ((0U != (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt)) 
                              & ((IData)(vlTOPp->StreamPackageGen__DOT__strb_buf) 
                                 >> 3U));
}

VL_INLINE_OPT void VStreamPackageGen::_combo__TOP__4(VStreamPackageGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPackageGen::_combo__TOP__4\n"); );
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->StreamPackageGen__DOT__split_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_valid) & (0U == (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt)));
    vlTOPp->StreamPackageGen__DOT__split_core__DOT__split_data_fire 
        = ((0U != (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt)) 
           & (IData)(vlTOPp->pkg_data_ready));
}

void VStreamPackageGen::_eval(VStreamPackageGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPackageGen::_eval\n"); );
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData VStreamPackageGen::_change_request(VStreamPackageGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPackageGen::_change_request\n"); );
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VStreamPackageGen::_change_request_1(VStreamPackageGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPackageGen::_change_request_1\n"); );
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VStreamPackageGen::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPackageGen::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_strb & 0xf0U))) {
        Verilated::overWidthError("raw_data_payload_strb");}
    if (VL_UNLIKELY((pkg_data_ready & 0xfeU))) {
        Verilated::overWidthError("pkg_data_ready");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
