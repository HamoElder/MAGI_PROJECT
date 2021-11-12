// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCordicRotator.h for the primary calling header

#include "VCordicRotator.h"
#include "VCordicRotator__Syms.h"

//==========

void VCordicRotator::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCordicRotator::eval\n"); );
    VCordicRotator__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/CordicRotator.v", 13, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCordicRotator::_eval_initial_loop(VCordicRotator__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/CordicRotator.v", 13, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCordicRotator::_sequent__TOP__1(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCordicRotator::_sequent__TOP__1\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CordicRotator__DOT___zz_1__v0;
    CData/*0:0*/ __Vdlyvset__CordicRotator__DOT___zz_1__v0;
    IData/*31:0*/ __Vdlyvval__CordicRotator__DOT___zz_1__v0;
    IData/*31:0*/ __Vdly__CordicRotator__DOT___zz_result_payload_x_1;
    // Body
    __Vdlyvset__CordicRotator__DOT___zz_1__v0 = 0U;
    __Vdly__CordicRotator__DOT___zz_result_payload_x_1 
        = vlTOPp->CordicRotator__DOT___zz_result_payload_x_1;
    if (vlTOPp->w_en) {
        __Vdlyvval__CordicRotator__DOT___zz_1__v0 = vlTOPp->w_data;
        __Vdlyvset__CordicRotator__DOT___zz_1__v0 = 1U;
        __Vdlyvdim0__CordicRotator__DOT___zz_1__v0 
            = (0xfU & (IData)(vlTOPp->w_addr));
    }
    vlTOPp->CordicRotator__DOT___zz___05Fzz_1_port1 
        = vlTOPp->CordicRotator__DOT___zz_1[(0xfU & (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x))];
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_regNext 
        = vlTOPp->CordicRotator__DOT___zz_result_payload_x;
    if ((1U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
        if (vlTOPp->CordicRotator__DOT__raw_data_fire) {
            __Vdly__CordicRotator__DOT___zz_result_payload_x_1 
                = vlTOPp->raw_data_payload_x;
        }
    } else {
        if ((2U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
            __Vdly__CordicRotator__DOT___zz_result_payload_x_1 
                = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_9)
                                                    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1
                                                    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_1)
                    : ((2U == (IData)(vlTOPp->x_u))
                        ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_9)
                            ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_1
                            : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1)
                        : vlTOPp->CordicRotator__DOT___zz_result_payload_x_1));
        } else {
            if ((3U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
                vlTOPp->CordicRotator__DOT___zz_result_payload_x_4 
                    = vlTOPp->CordicRotator__DOT___zz_result_payload_x_1;
            }
        }
    }
    if ((1U != (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
        if ((2U != (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
            if ((3U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
                vlTOPp->CordicRotator__DOT___zz_result_payload_z 
                    = vlTOPp->CordicRotator__DOT___zz_result_payload_x_3;
            }
        }
    }
    if ((1U != (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
        if ((2U != (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
            if ((3U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
                vlTOPp->CordicRotator__DOT___zz_result_payload_y 
                    = vlTOPp->CordicRotator__DOT___zz_result_payload_x_2;
            }
        }
    }
    if (__Vdlyvset__CordicRotator__DOT___zz_1__v0) {
        vlTOPp->CordicRotator__DOT___zz_1[__Vdlyvdim0__CordicRotator__DOT___zz_1__v0] 
            = __Vdlyvval__CordicRotator__DOT___zz_1__v0;
    }
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_1 
        = __Vdly__CordicRotator__DOT___zz_result_payload_x_1;
    vlTOPp->result_payload_x = vlTOPp->CordicRotator__DOT___zz_result_payload_x_4;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_5 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->CordicRotator__DOT___zz_result_payload_x_1, (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_regNext));
    vlTOPp->result_payload_z = vlTOPp->CordicRotator__DOT___zz_result_payload_z;
    if ((1U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
        if (vlTOPp->CordicRotator__DOT__raw_data_fire) {
            vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
                = vlTOPp->raw_data_payload_z;
        }
    } else {
        if ((2U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
            vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
                = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_9)
                    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3
                    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3_1);
        }
    }
    vlTOPp->result_payload_y = vlTOPp->CordicRotator__DOT___zz_result_payload_y;
    if ((1U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
        if (vlTOPp->CordicRotator__DOT__raw_data_fire) {
            vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
                = vlTOPp->raw_data_payload_y;
        }
    } else {
        if ((2U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
            vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
                = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_9)
                    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2
                    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2_1);
        }
    }
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3 
        = (vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
           - vlTOPp->CordicRotator__DOT___zz___05Fzz_1_port1);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3_1 
        = (vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
           + vlTOPp->CordicRotator__DOT___zz___05Fzz_1_port1);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2 
        = (vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
           + vlTOPp->CordicRotator__DOT___zz_result_payload_x_5);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2_1 
        = (vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
           - vlTOPp->CordicRotator__DOT___zz_result_payload_x_5);
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_6 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->CordicRotator__DOT___zz_result_payload_x_2, (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_regNext));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1 
        = (vlTOPp->CordicRotator__DOT___zz_result_payload_x_1 
           - vlTOPp->CordicRotator__DOT___zz_result_payload_x_6);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_1 
        = (vlTOPp->CordicRotator__DOT___zz_result_payload_x_1 
           + vlTOPp->CordicRotator__DOT___zz_result_payload_x_6);
}

VL_INLINE_OPT void VCordicRotator::_sequent__TOP__2(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCordicRotator::_sequent__TOP__2\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdly__CordicRotator__DOT___zz_result_payload_x;
    // Body
    __Vdly__CordicRotator__DOT___zz_result_payload_x 
        = vlTOPp->CordicRotator__DOT___zz_result_payload_x;
    if (vlTOPp->reset) {
        __Vdly__CordicRotator__DOT___zz_result_payload_x = 0U;
        vlTOPp->CordicRotator__DOT___zz_result_valid = 0U;
        vlTOPp->CordicRotator__DOT___zz_raw_data_ready = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
            if (vlTOPp->CordicRotator__DOT__raw_data_fire) {
                __Vdly__CordicRotator__DOT___zz_result_payload_x 
                    = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x)));
                vlTOPp->CordicRotator__DOT___zz_raw_data_ready = 0U;
            }
        } else {
            if ((2U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
                __Vdly__CordicRotator__DOT___zz_result_payload_x 
                    = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x)));
                vlTOPp->CordicRotator__DOT___zz_raw_data_ready = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
                    __Vdly__CordicRotator__DOT___zz_result_payload_x = 0U;
                    if (vlTOPp->result_valid) {
                        vlTOPp->CordicRotator__DOT___zz_result_valid = 0U;
                        vlTOPp->CordicRotator__DOT___zz_raw_data_ready = 1U;
                    } else {
                        vlTOPp->CordicRotator__DOT___zz_result_valid = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->CordicRotator__DOT___zz_result_payload_x 
        = __Vdly__CordicRotator__DOT___zz_result_payload_x;
    vlTOPp->result_valid = vlTOPp->CordicRotator__DOT___zz_result_valid;
    vlTOPp->raw_data_ready = vlTOPp->CordicRotator__DOT___zz_raw_data_ready;
    vlTOPp->CordicRotator__DOT___zz_3 = ((IData)(vlTOPp->reset)
                                          ? 0U : (IData)(vlTOPp->CordicRotator__DOT___zz_4));
    vlTOPp->CordicRotator__DOT___zz_2 = 0U;
    if ((1U != (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
        if ((2U != (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
            if ((3U != (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
                vlTOPp->CordicRotator__DOT___zz_2 = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VCordicRotator::_combo__TOP__5(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCordicRotator::_combo__TOP__5\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_9 
        = ((IData)(vlTOPp->rotate_mode) ? VL_LTES_III(1,32,32, 0U, vlTOPp->CordicRotator__DOT___zz_result_payload_x_3)
            : VL_GTS_III(1,32,32, 0U, vlTOPp->CordicRotator__DOT___zz_result_payload_x_2));
    vlTOPp->CordicRotator__DOT__raw_data_fire = ((IData)(vlTOPp->raw_data_valid) 
                                                 & (IData)(vlTOPp->raw_data_ready));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->CordicRotator__DOT___zz_2) 
                             << 5U) | (((IData)(vlTOPp->result_valid) 
                                        << 4U) | ((
                                                   ((IData)(vlTOPp->iter_limit) 
                                                    <= (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x)) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->CordicRotator__DOT__raw_data_fire) 
                                                      << 2U) 
                                                     | (IData)(vlTOPp->CordicRotator__DOT___zz_3)))));
    vlTOPp->CordicRotator__DOT___zz_4 = vlTOPp->__Vtable1_CordicRotator__DOT___zz_4
        [vlTOPp->__Vtableidx1];
}

void VCordicRotator::_eval(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCordicRotator::_eval\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCordicRotator::_change_request(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCordicRotator::_change_request\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCordicRotator::_change_request_1(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCordicRotator::_change_request_1\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCordicRotator::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCordicRotator::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((iter_limit & 0xe0U))) {
        Verilated::overWidthError("iter_limit");}
    if (VL_UNLIKELY((rotate_mode & 0xfeU))) {
        Verilated::overWidthError("rotate_mode");}
    if (VL_UNLIKELY((x_u & 0xfcU))) {
        Verilated::overWidthError("x_u");}
    if (VL_UNLIKELY((w_en & 0xfeU))) {
        Verilated::overWidthError("w_en");}
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
