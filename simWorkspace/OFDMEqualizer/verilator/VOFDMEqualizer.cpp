// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOFDMEqualizer.h for the primary calling header

#include "VOFDMEqualizer.h"
#include "VOFDMEqualizer__Syms.h"

//==========

void VOFDMEqualizer::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VOFDMEqualizer::eval\n"); );
    VOFDMEqualizer__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VOFDMEqualizer::_eval_initial_loop(VOFDMEqualizer__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__9(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__9\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_16 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_15;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_48 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_47 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_47 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_46 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_46 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_45 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_45 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_44 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_44 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_43 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_43 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_42 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_42 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_41 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_41 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_40 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_40 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_39 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_39 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_38 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_38 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_37 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_37 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_36 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_36 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_35 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_35 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_34 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_34 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_33 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_33 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_32 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_32 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_31 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_31 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_30 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_30 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_29 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_29 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_28 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_28 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_27 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_27 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_26 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_26 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_25 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_25 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_24 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_24 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_23 = 0U;
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__10(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__10\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_11 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_10 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_10 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_9 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_9 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_8 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_8 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_7 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_7 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_6 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_6 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_5 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_2 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_1 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_1 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_0 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_0 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_2 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_3 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_3 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_4 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_4 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_5 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_11 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_12 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_12 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_13 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_14 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_14 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_16 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_16 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_18 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_18 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_20 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_20 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_21 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_21 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_22 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_22 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_23 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_48 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_13 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_49 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_49 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_50 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_15 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_50 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_15 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_51 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_51 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_52 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_17 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_52 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_17 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_53 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_53 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_54 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_19 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_54 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_19 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_55 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_55 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_56 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_56 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_57 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_57 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_58 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_58 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_59 = 0xff80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_59 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_60 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_60 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_61 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_61 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_62 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_62 = 0U;
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_63 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_63 = 0U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_14;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_14;
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x3fU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_63 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x3eU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_62 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x3cU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_60 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x3bU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_59 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x39U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_57 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x38U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_56 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x36U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_54 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x35U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_53 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x33U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_51 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x32U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_50 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x30U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_48 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x2fU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_47 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__11(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__11\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x2dU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_45 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x2cU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_44 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x2aU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_42 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x29U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_41 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x28U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_40 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x27U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_39 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x26U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_38 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x23U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_35 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x22U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_34 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x20U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_32 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x1fU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_31 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x1dU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_29 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x1cU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_28 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x1aU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_26 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x19U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_25 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x17U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_23 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x16U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_22 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x14U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_20 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x13U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_19 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x11U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_17 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x10U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_16 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0xeU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_14 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0xdU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_13 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0xbU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_11 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0xaU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_10 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 8U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_8 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 7U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_7 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 5U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_5 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 4U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_4 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 2U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_2 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 1U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_1 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt))))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_0 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__12(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__12\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x3eU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_62 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x3dU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_61 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x3bU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_59 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x3aU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_58 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x38U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_56 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x37U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_55 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x35U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_53 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x34U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_52 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x32U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_50 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x31U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_49 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x2fU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_47 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x2eU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_46 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x2cU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_44 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x2bU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_43 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x29U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_41 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x28U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_40 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x26U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_38 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x25U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_37 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x23U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_35 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x22U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_34 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0xcU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_12 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 9U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_9 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 6U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_6 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 3U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_3 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x3fU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_63 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x3cU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_60 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x39U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_57 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 3U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_3 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x36U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_54 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x25U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_37 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x33U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_51 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x30U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_48 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__13(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__13\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x2dU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_45 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x2aU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_42 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x15U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_21 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x3aU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_58 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x10U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_16 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x12U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_18 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x37U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_55 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0xdU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_13 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0xfU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_15 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x34U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_52 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0xaU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_10 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 4U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_4 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 6U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_6 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x2bU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_43 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x2eU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_46 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 9U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_9 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 7U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_7 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x31U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_49 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0xcU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_12 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x13U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_19 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x3dU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_61 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x18U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_24 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x16U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_22 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x19U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_25 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x1cU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_28 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x1fU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_31 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x24U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_36 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x27U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_39 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0xfU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_15 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x1bU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_27 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x12U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_18 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x1eU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_30 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__14(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__14\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x15U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_21 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x21U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_33 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x18U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_24 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x1bU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_27 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x1eU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_30 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x21U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_33 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x24U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_q_scale_36 
                    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt))))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_0 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 1U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_1 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 2U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_2 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 5U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_5 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 8U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_8 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0xbU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_11 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0xeU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_14 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x11U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_17 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x14U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_20 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x17U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_23 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x1aU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_26 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x1dU)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_29 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
                               >> 0x20U)))) {
                vlTOPp->OFDMEqualizer__DOT__cha_i_scale_32 
                    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
            }
        }
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))));
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))));
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__16(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__16\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_15 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_14;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_14 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_13;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_14 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_13;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload 
        = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16)
                       ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
                           ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                           : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                       : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
                           ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
                           : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))));
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload 
        = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16)
                       ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
                           ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                           : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                       : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
                           ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
                           : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))));
    }
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_14 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_13;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_13 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_12;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_13 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_12;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74 = 0U;
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))));
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__17(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__17\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))));
    }
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_13 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_12;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_12 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_11;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_12 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_11;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73 = 1U;
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))));
    }
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_12 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_11;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_11 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_10;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_11 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_10;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72 = 2U;
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))));
    }
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_11 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_10;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_10 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_9;
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__18(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__18\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_10 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_9;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71 = 4U;
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))));
    }
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_10 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_9;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_9 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_8;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_9 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_8;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70 = 8U;
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))));
    }
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_9 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_8;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_8 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_7;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_8 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_7;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69 = 0x10U;
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))));
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__19(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__19\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_8 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_7;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_7 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_6;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_7 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_6;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68 = 0x20U;
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))));
    }
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_7 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_6;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_6 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_5;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_6 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_5;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67 = 0x40U;
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))));
    }
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_6 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_5;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_5 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_4;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_5 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_4;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66 = 0x80U;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66 = 0x80U;
}
