// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamPkgGen.h for the primary calling header

#include "VStreamPkgGen.h"
#include "VStreamPkgGen__Syms.h"

//==========

void VStreamPkgGen::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VStreamPkgGen::eval\n"); );
    VStreamPkgGen__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/StreamPkgGen.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VStreamPkgGen::_eval_initial_loop(VStreamPkgGen__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/StreamPkgGen.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VStreamPkgGen::_sequent__TOP__1(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPkgGen::_sequent__TOP__1\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__StreamPkgGen__DOT__split_core__DOT__cnt;
    // Body
    __Vdly__StreamPkgGen__DOT__split_core__DOT__cnt 
        = vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt;
    if (vlTOPp->reset) {
        vlTOPp->StreamPkgGen__DOT__raw_data_last = 0U;
    } else {
        if (vlTOPp->StreamPkgGen__DOT__raw_data_stream_fire) {
            vlTOPp->StreamPkgGen__DOT__raw_data_last 
                = vlTOPp->raw_data_tlast;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->StreamPkgGen__DOT__raw_data_stream_fire)))) {
            if (vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire) {
                vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt 
                    = ((IData)(vlTOPp->pkg_data_payload_last)
                        ? 0U : (IData)(vlTOPp->StreamPkgGen__DOT___zz_pkg_slices_cnt));
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__StreamPkgGen__DOT__split_core__DOT__cnt = 0U;
    } else {
        if (vlTOPp->StreamPkgGen__DOT__split_core__DOT__raw_data_fire) {
            __Vdly__StreamPkgGen__DOT__split_core__DOT__cnt = 4U;
        } else {
            if (vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire) {
                __Vdly__StreamPkgGen__DOT__split_core__DOT__cnt 
                    = (7U & ((IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt) 
                             - (IData)(1U)));
            }
        }
    }
    vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt 
        = __Vdly__StreamPkgGen__DOT__split_core__DOT__cnt;
    vlTOPp->StreamPkgGen__DOT___zz_pkg_slices_cnt = 
        (0xfffU & ((IData)(1U) + (IData)(vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt)));
    vlTOPp->slices_cnt = vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt;
    vlTOPp->raw_data_tready = (0U == (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt));
}

VL_INLINE_OPT void VStreamPkgGen::_sequent__TOP__2(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPkgGen::_sequent__TOP__2\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__StreamPkgGen__DOT__strb_buf;
    IData/*31:0*/ __Vdly__StreamPkgGen__DOT__split_core__DOT__data_buf;
    // Body
    __Vdly__StreamPkgGen__DOT__split_core__DOT__data_buf 
        = vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf;
    __Vdly__StreamPkgGen__DOT__strb_buf = vlTOPp->StreamPkgGen__DOT__strb_buf;
    if (vlTOPp->StreamPkgGen__DOT__split_core__DOT__raw_data_fire) {
        __Vdly__StreamPkgGen__DOT__split_core__DOT__data_buf 
            = vlTOPp->raw_data_tdata;
    } else {
        if (vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire) {
            __Vdly__StreamPkgGen__DOT__split_core__DOT__data_buf 
                = (vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf 
                   >> 8U);
        }
    }
    if (vlTOPp->StreamPkgGen__DOT__raw_data_stream_fire) {
        __Vdly__StreamPkgGen__DOT__strb_buf = vlTOPp->raw_data_tstrb;
    } else {
        if (vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire) {
            __Vdly__StreamPkgGen__DOT__strb_buf = (0xfU 
                                                   & ((IData)(vlTOPp->StreamPkgGen__DOT__strb_buf) 
                                                      >> 1U));
        }
    }
    vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf 
        = __Vdly__StreamPkgGen__DOT__split_core__DOT__data_buf;
    vlTOPp->StreamPkgGen__DOT__strb_buf = __Vdly__StreamPkgGen__DOT__strb_buf;
    vlTOPp->pkg_data_payload_fragment = (0xffU & vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf);
}

VL_INLINE_OPT void VStreamPkgGen::_combo__TOP__4(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPkgGen::_combo__TOP__4\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->StreamPkgGen__DOT__split_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_tvalid) & (0U == (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt)));
    vlTOPp->StreamPkgGen__DOT__raw_data_stream_fire 
        = ((IData)(vlTOPp->raw_data_tvalid) & (IData)(vlTOPp->raw_data_tready));
    vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire 
        = ((0U != (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt)) 
           & (IData)(vlTOPp->pkg_data_ready));
    vlTOPp->pkg_data_payload_last = (((IData)(vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt) 
                                      == (0xfffU & 
                                          ((IData)(vlTOPp->slices_limit) 
                                           - (IData)(1U)))) 
                                     | ((IData)(vlTOPp->StreamPkgGen__DOT__raw_data_last) 
                                        & (1U == (IData)(vlTOPp->StreamPkgGen__DOT__strb_buf))));
}

VL_INLINE_OPT void VStreamPkgGen::_sequent__TOP__5(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPkgGen::_sequent__TOP__5\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->pkg_data_valid = ((0U != (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt)) 
                              & (IData)(vlTOPp->StreamPkgGen__DOT__strb_buf));
}

void VStreamPkgGen::_eval(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPkgGen::_eval\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VStreamPkgGen::_change_request(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPkgGen::_change_request\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VStreamPkgGen::_change_request_1(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPkgGen::_change_request_1\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VStreamPkgGen::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPkgGen::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((slices_limit & 0xf000U))) {
        Verilated::overWidthError("slices_limit");}
    if (VL_UNLIKELY((raw_data_tvalid & 0xfeU))) {
        Verilated::overWidthError("raw_data_tvalid");}
    if (VL_UNLIKELY((raw_data_tstrb & 0xf0U))) {
        Verilated::overWidthError("raw_data_tstrb");}
    if (VL_UNLIKELY((raw_data_tlast & 0xfeU))) {
        Verilated::overWidthError("raw_data_tlast");}
    if (VL_UNLIKELY((pkg_data_ready & 0xfeU))) {
        Verilated::overWidthError("pkg_data_ready");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
