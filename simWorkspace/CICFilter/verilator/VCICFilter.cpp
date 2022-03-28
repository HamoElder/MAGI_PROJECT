// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCICFilter.h for the primary calling header

#include "VCICFilter.h"
#include "VCICFilter__Syms.h"

//==========

void VCICFilter::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCICFilter::eval\n"); );
    VCICFilter__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/CICFilter.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCICFilter::_eval_initial_loop(VCICFilter__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/CICFilter.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCICFilter::_sequent__TOP__2(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::_sequent__TOP__2\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*16:0*/ __Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_0;
    IData/*16:0*/ __Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_1;
    // Body
    vlTOPp->__Vdly__CICFilter__DOT__decimator_1__DOT__cnt 
        = vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt;
    vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_2 
        = vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2;
    __Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_1 
        = vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_1;
    __Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_0 
        = vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_0;
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__CICFilter__DOT__decimator_1__DOT__cnt = 0U;
    } else {
        if ((8U & (IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en))) {
            vlTOPp->__Vdly__CICFilter__DOT__decimator_1__DOT__cnt 
                = ((4U == (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt))
                    ? 0U : (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT___zz_cnt));
        }
    }
    if (vlTOPp->reset) {
        __Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_0 = 0U;
        __Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_1 = 0U;
        vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_2 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en))) {
            __Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_0 
                = (0x1ffffU & (vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_0 
                               + ((0x10000U & ((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__raw_data_buf) 
                                               << 1U)) 
                                  | (IData)(vlTOPp->CICFilter__DOT__integrator__DOT__raw_data_buf))));
        }
        if ((2U & (IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en))) {
            __Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_1 
                = (0x1ffffU & (vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_1 
                               + vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_0));
        }
        if ((4U & (IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en))) {
            vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_2 
                = (0x1ffffU & (vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2 
                               + vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_1));
        }
    }
    vlTOPp->CICFilter__DOT__combor__DOT__result_data_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1));
    if (vlTOPp->reset) {
        vlTOPp->CICFilter__DOT__combor__DOT__result_data_payload_1 = 0U;
    } else {
        if (vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1) {
            vlTOPp->CICFilter__DOT__combor__DOT__result_data_payload_1 
                = (0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2 
                               - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_2));
        }
    }
    vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_0 
        = __Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_0;
    vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_1 
        = __Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_1;
    vlTOPp->filtered_data_valid = vlTOPp->CICFilter__DOT__combor__DOT__result_data_valid_1;
    vlTOPp->filtered_data_payload = vlTOPp->CICFilter__DOT__combor__DOT__result_data_payload_1;
    if (vlTOPp->reset) {
        vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_2 = 0U;
    } else {
        if (vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1) {
            vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_2 
                = vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2 = 0U;
    } else {
        if (vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1) {
            vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2 
                = (0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1 
                               - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_1 = 0U;
    } else {
        if (vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1) {
            vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_1 
                = vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1 = 0U;
    } else {
        if (vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1) {
            vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1 
                = (0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0 
                               - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_0));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_0 = 0U;
    } else {
        if (vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1) {
            vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_0 
                = vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0 = 0U;
    } else {
        if (vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1) {
            vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0 
                = (0x1ffffU & vlTOPp->CICFilter__DOT__decimator_1__DOT__out_data);
        }
    }
}

VL_INLINE_OPT void VCICFilter::_sequent__TOP__3(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::_sequent__TOP__3\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
                                          >> 3U) & 
                                         (4U == (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt))));
}

VL_INLINE_OPT void VCICFilter::_sequent__TOP__5(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::_sequent__TOP__5\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CICFilter__DOT__integrator__DOT__raw_data_buf 
        = vlTOPp->raw_data_payload;
    if ((8U & (IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en))) {
        if ((4U == (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt))) {
            vlTOPp->CICFilter__DOT__decimator_1__DOT__out_data 
                = ((0x1e0000U & (VL_NEGATE_I((IData)(
                                                     (1U 
                                                      & (vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2 
                                                         >> 0x10U)))) 
                                 << 0x11U)) | vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2);
        }
    }
}

VL_INLINE_OPT void VCICFilter::_sequent__TOP__6(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::_sequent__TOP__6\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2 
        = vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_2;
    vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt = vlTOPp->__Vdly__CICFilter__DOT__decimator_1__DOT__cnt;
    vlTOPp->CICFilter__DOT__decimator_1__DOT___zz_cnt 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt)));
    vlTOPp->CICFilter__DOT__integrator__DOT__internal_en 
        = ((IData)(vlTOPp->reset) ? 0U : (0xfU & (IData)(vlTOPp->CICFilter__DOT__integrator__DOT___zz_internal_en)));
}

VL_INLINE_OPT void VCICFilter::_combo__TOP__7(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::_combo__TOP__7\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CICFilter__DOT__integrator__DOT___zz_internal_en 
        = (((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
            << 1U) | (IData)(vlTOPp->raw_data_valid));
}

void VCICFilter::_eval(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::_eval\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCICFilter::_change_request(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::_change_request\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCICFilter::_change_request_1(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::_change_request_1\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCICFilter::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
