// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCFOEstimator.h for the primary calling header

#include "VCFOEstimator.h"
#include "VCFOEstimator__Syms.h"

//==========

void VCFOEstimator::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCFOEstimator::eval\n"); );
    VCFOEstimator__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/CFOEstimator.v", 13, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCFOEstimator::_eval_initial_loop(VCFOEstimator__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/CFOEstimator.v", 13, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__1(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__1\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_1_port0 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_1
        [(0xfU & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x))];
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_regNext 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x;
    if ((1U != (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
        if ((2U != (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
            if ((3U == (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
                vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_y 
                    = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2;
            }
        }
    }
    if ((1U != (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
        if ((2U != (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
            if ((3U == (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
                vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
                    = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1;
            }
        }
    }
    if ((1U != (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
        if ((2U != (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
            if ((3U == (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
                vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z 
                    = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3;
            }
        }
    }
    if ((1U == (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
        if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT__raw_data_fire) {
            vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1 = 0xfc00U;
        }
    } else {
        if ((2U == (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
            vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
                = (VL_GTS_III(1,16,16, 0U, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2))
                    ? (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_1)
                    : (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_1_1));
        }
    }
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5 
        = (((QData)((IData)((1U & (VL_MULS_III(32,32,32, (IData)(2U), 
                                               VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z))) 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(VL_MULS_III(32,32,32, (IData)(2U), 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z))))));
    if ((1U == (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
        if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT__raw_data_fire) {
            vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3 = 0U;
        }
    } else {
        if ((2U == (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
            vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
                = (VL_GTS_III(1,16,16, 0U, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2))
                    ? (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_3)
                    : (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_3_1));
        }
    }
    vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1 
        = (0x1ffffU & ((1U & (IData)((VL_ULL(1) & (
                                                   (VL_ULL(0x1ffff8000) 
                                                    + vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5) 
                                                   >> 0x20U))))
                        ? ((0U != (0xffffU & ((IData)(0x8000U) 
                                              + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5))))
                            ? ((IData)(1U) + (IData)(
                                                     (VL_ULL(0x1ffff) 
                                                      & ((VL_ULL(0x1ffff8000) 
                                                          + vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5) 
                                                         >> 0x10U))))
                            : (IData)((VL_ULL(0x1ffff) 
                                       & ((VL_ULL(0x1ffff8000) 
                                           + vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5) 
                                          >> 0x10U))))
                        : (IData)((VL_ULL(0x1ffff) 
                                   & ((VL_ULL(0x8000) 
                                       + (((QData)((IData)(
                                                           (1U 
                                                            & (VL_MULS_III(32,32,32, (IData)(2U), 
                                                                           VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z))) 
                                                               >> 0x1fU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            VL_MULS_III(32,32,32, (IData)(2U), 
                                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z))))))) 
                                      >> 0x10U)))));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1), (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_regNext)));
    vlTOPp->delta_phi_payload = (0xffffU & VL_NEGATE_I(
                                                       ((0x10000U 
                                                         & vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1)
                                                         ? 
                                                        ((3U 
                                                          != 
                                                          (3U 
                                                           & (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1 
                                                              >> 0xfU)))
                                                          ? 0x8000U
                                                          : vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1)
                                                         : 
                                                        ((0x8000U 
                                                          & vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1)
                                                          ? 0x7fffU
                                                          : vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1))));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_3 
        = (0xffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3) 
                      - (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_1_port0)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_3_1 
        = (0xffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3) 
                      + (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_1_port0)));
    if ((1U == (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
        if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT__raw_data_fire) {
            vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2 = 0x400U;
        }
    } else {
        if ((2U == (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
            vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
                = ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9)
                    ? (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_2)
                    : (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_2_1));
        }
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
        = VL_GTS_III(1,16,16, 0U, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_2 
        = (0xffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2) 
                      + (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_2_1 
        = (0xffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2) 
                      - (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2), (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_regNext)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_1 
        = (0xffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1) 
                      - (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_1_1 
        = (0xffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1) 
                      + (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6)));
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__4(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__4\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdly__CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x;
    // Body
    __Vdly__CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x;
    vlTOPp->CFOEstimator__DOT__impluse_cnt = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : ((IData)(vlTOPp->rotated_data_valid)
                                                   ? 
                                                  ((0x10U 
                                                    == (IData)(vlTOPp->CFOEstimator__DOT__impluse_cnt))
                                                    ? 0U
                                                    : (IData)(vlTOPp->CFOEstimator__DOT___zz_impluse_cnt))
                                                   : 0U));
    if (vlTOPp->reset) {
        __Vdly__CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x = 0U;
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid = 0U;
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_raw_data_ready = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
            if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT__raw_data_fire) {
                __Vdly__CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x 
                    = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x)));
                vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_raw_data_ready = 0U;
            }
        } else {
            if ((2U == (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
                __Vdly__CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x 
                    = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x)));
                vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_raw_data_ready = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
                    __Vdly__CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x = 0U;
                    if (vlTOPp->CFOEstimator__DOT__cordic_core_result_valid) {
                        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid = 0U;
                        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_raw_data_ready = 1U;
                    } else {
                        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid = 1U;
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = 0U;
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = 0U;
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = 1U;
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                = (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
                   + vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i);
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                = (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
                   + vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q);
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x 
        = __Vdly__CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x;
    vlTOPp->CFOEstimator__DOT___zz_impluse_cnt = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->CFOEstimator__DOT__impluse_cnt)));
    vlTOPp->CFOEstimator__DOT__cordic_core_result_valid 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid;
    vlTOPp->delta_phi_valid = ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid) 
                               & (0x10U == (IData)(vlTOPp->CFOEstimator__DOT__impluse_cnt)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_4));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1) 
           & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_raw_data_ready));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
        = (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
           - vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
        = (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
           - vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_2 = 0U;
    if ((1U != (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
        if ((2U != (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
            if ((3U != (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
                vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_2 = 1U;
            }
        }
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12
                                           : 0U));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_2) 
                             << 5U) | (((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid) 
                                        << 4U) | ((
                                                   (0xfU 
                                                    <= (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x)) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT__raw_data_fire) 
                                                      << 2U) 
                                                     | (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3)))));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_4 
        = vlTOPp->__Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4
        [vlTOPp->__Vtableidx1];
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6
                                           : 0U));
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__5(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__5\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q 
        = ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
                                          - VL_MULS_III(32,32,32, 
                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->rotated_data_payload_cha_i)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      (0xffffU 
                                                                       & ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q) 
                                                                          + (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i)))))));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i 
        = ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
                                          - VL_MULS_III(32,32,32, 
                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->rotated_data_payload_cha_q)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      (0xffffU 
                                                                       & ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i) 
                                                                          - (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q)))))));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q)
                                           : 0U));
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__6(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__6\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->rotated_data_valid));
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__7(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__7\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->rotated_data_payload_cha_q)
                                           : 0U));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->rotated_data_valid)
                                           ? (IData)(vlTOPp->rotated_data_payload_cha_i)
                                           : 0U));
}

VL_INLINE_OPT void VCFOEstimator::_combo__TOP__10(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_combo__TOP__10\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & ((IData)(vlTOPp->rotated_data_payload_cha_i) 
                                               + (IData)(vlTOPp->rotated_data_payload_cha_q)))));
}

void VCFOEstimator::_eval(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_eval\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCFOEstimator::_change_request(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_change_request\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCFOEstimator::_change_request_1(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_change_request_1\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCFOEstimator::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((rotated_data_valid & 0xfeU))) {
        Verilated::overWidthError("rotated_data_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
