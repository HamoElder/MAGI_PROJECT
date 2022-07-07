// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSCEqualizer.h for the primary calling header

#include "VSCEqualizer.h"
#include "VSCEqualizer__Syms.h"

//==========

void VSCEqualizer::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSCEqualizer::eval\n"); );
    VSCEqualizer__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/SCEqualizer.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSCEqualizer::_eval_initial_loop(VSCEqualizer__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/SCEqualizer.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSCEqualizer::_sequent__TOP__6(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_sequent__TOP__6\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_16 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_15;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_63 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_63 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_62 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_62 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_61 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_61 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_60 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_60 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_59 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_59 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_58 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_58 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_57 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_57 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_56 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_56 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_55 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_55 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_54 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_54 = 0xff80U;
}

VL_INLINE_OPT void VSCEqualizer::_sequent__TOP__7(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_sequent__TOP__7\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SCEqualizer__DOT__cha_q_ref_53 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_53 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_52 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_52 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_51 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_51 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_50 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_50 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_49 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_49 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_48 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_23 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_22 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_22 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_21 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_21 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_20 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_20 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_19 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_19 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_18 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_18 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_17 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_17 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_16 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_16 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_15 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_15 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_14 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_14 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_13 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_13 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_12 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_12 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_11 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_5 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_4 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_4 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_3 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_3 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_2 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_0 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_0 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_1 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_1 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_2 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_5 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_6 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_6 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_7 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_7 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_8 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_8 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_9 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_9 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_10 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_10 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_11 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_23 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_24 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_24 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_25 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_25 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_26 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_26 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_27 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_27 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_28 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_28 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_29 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_29 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_30 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_30 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_31 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_31 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_32 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_32 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_33 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_33 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_34 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_34 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_35 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_35 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_36 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_36 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_37 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_37 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_38 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_38 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_39 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_39 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_40 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_40 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_41 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_41 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_42 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_42 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_43 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_43 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_44 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_44 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_45 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_45 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_46 = 0xff80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_46 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_47 = 0x80U;
    vlTOPp->SCEqualizer__DOT__cha_q_ref_47 = 0U;
    vlTOPp->SCEqualizer__DOT__cha_i_ref_48 = 0x80U;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__x_sign 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_14;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__x_sign 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_14;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))));
    }
}

VL_INLINE_OPT void VSCEqualizer::_sequent__TOP__8(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_sequent__TOP__8\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))));
    }
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_15 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_14;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_14 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_13;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_14 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_13;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
}

VL_INLINE_OPT void VSCEqualizer::_sequent__TOP__9(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_sequent__TOP__9\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))));
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))));
    }
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_14 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_13;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_13 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_12;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_13 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_12;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74 = 0U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73))));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))));
    }
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_13 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_12;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_12 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_11;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_12 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_11;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73 = 1U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72))));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))));
    }
}

VL_INLINE_OPT void VSCEqualizer::_sequent__TOP__10(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_sequent__TOP__10\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_12 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_11;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_11 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_10;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_11 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_10;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72 = 2U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71))));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))));
    }
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_11 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_10;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_10 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_9;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_10 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_9;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71 = 4U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70))));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))));
    }
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_10 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_9;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_9 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_8;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_9 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_8;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70 = 8U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69))));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))));
    }
}

VL_INLINE_OPT void VSCEqualizer::_sequent__TOP__11(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_sequent__TOP__11\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_9 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_8;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_8 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_7;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_8 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_7;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69 = 0x10U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68))));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))));
    }
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_8 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_7;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_7 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_6;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_7 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_6;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68 = 0x20U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67))));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))));
    }
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_7 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_6;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_6 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_5;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_6 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_5;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67 = 0x40U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66))));
    }
}

VL_INLINE_OPT void VSCEqualizer::_sequent__TOP__12(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_sequent__TOP__12\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))));
    }
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_6 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_5;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_5 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_4;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_5 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_4;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66 = 0x80U;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66 = 0x80U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65))));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))));
    }
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_5 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_4;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_4 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_3;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_4 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_3;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65 = 0x100U;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65 = 0x100U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64))));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))));
    }
}

VL_INLINE_OPT void VSCEqualizer::_sequent__TOP__13(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_sequent__TOP__13\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_4 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_3;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_3 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_2;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_3 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_2;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64 = 0x200U;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64 = 0x200U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63))));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))));
    }
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_3 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_2;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_2 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_1;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_2 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_1;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63 = 0x400U;
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63 = 0x400U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62))));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1;
    }
    if (vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))));
    }
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_2 
        = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_1;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_1 
        = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_1 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign;
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2 
        = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1;
    if (vlTOPp->raw_data_valid) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46 
            = (1U & (~ (IData)(vlTOPp->SCEqualizer__DOT__train_en)));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62 = 0x800U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61))));
    }
}

VL_INLINE_OPT void VSCEqualizer::_sequent__TOP__14(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_sequent__TOP__14\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62 = 0x800U;
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61))));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1 
            = vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x))));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
                                     >> 0xfU)));
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1 
            = vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x;
    }
    if (vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17 
            = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75)
                           ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
                              + (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x))
                           : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
                              - (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x))));
    }
    vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_1 
        = vlTOPp->raw_data_payload_last;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign 
        = (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_q) 
                 >> 0xfU));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign 
        = (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_i) 
                 >> 0xfU));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1 
        = vlTOPp->SCEqualizer__DOT__train_en;
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61 = 0x1000U;
    if (vlTOPp->raw_data_valid) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31 
            = ((IData)(vlTOPp->SCEqualizer__DOT__train_en)
                ? 0U : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_scale));
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61 = 0x1000U;
    if (vlTOPp->raw_data_valid) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31 
            = ((IData)(vlTOPp->SCEqualizer__DOT__train_en)
                ? 0U : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_scale));
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
                                     >> 0xfU)));
    if (vlTOPp->raw_data_valid) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x 
            = (0xffffU & (((0x8000U & (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
                            ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
                            : (IData)(vlTOPp->raw_data_payload_fragment_cha_q)) 
                          + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_q) 
                                   >> 0xfU))));
    }
    if (vlTOPp->raw_data_valid) {
        vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16 
            = ((IData)(vlTOPp->SCEqualizer__DOT__train_en)
                ? (IData)(vlTOPp->SCEqualizer__DOT___zz_ref_data_1)
                : 0U);
    }
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
                                     >> 0xfU)));
    if (vlTOPp->raw_data_valid) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x 
            = (0xffffU & (((0x8000U & (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
                            ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
                            : (IData)(vlTOPp->raw_data_payload_fragment_cha_i)) 
                          + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_i) 
                                   >> 0xfU))));
    }
    if (vlTOPp->raw_data_valid) {
        vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16 
            = ((IData)(vlTOPp->SCEqualizer__DOT__train_en)
                ? (IData)(vlTOPp->SCEqualizer__DOT___zz_ref_data)
                : 0U);
    }
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
        if (vlTOPp->SCEqualizer__DOT__when_SCEqualizer_l74) {
            vlTOPp->SCEqualizer__DOT__cha_q_scale = 
                (0xffffU & ((0U == (IData)(vlTOPp->SCEqualizer__DOT__train_cnt))
                             ? (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq_result_data_payload)
                             : ((IData)(vlTOPp->SCEqualizer__DOT___zz_cha_q_scale) 
                                + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq_result_data_payload), 1U))));
        }
    }
    if (vlTOPp->equalized_data_payload_last) {
        vlTOPp->SCEqualizer__DOT__cha_i_scale = 0U;
    } else {
        if (vlTOPp->SCEqualizer__DOT__when_SCEqualizer_l74) {
            vlTOPp->SCEqualizer__DOT__cha_i_scale = 
                (0xffffU & ((0U == (IData)(vlTOPp->SCEqualizer__DOT__train_cnt))
                             ? (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq_result_data_payload)
                             : ((IData)(vlTOPp->SCEqualizer__DOT___zz_cha_i_scale) 
                                + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq_result_data_payload), 1U))));
        }
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
                                     >> 0xfU)));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75 
        = (1U & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46)
                  ? (~ ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
                        >> 0xfU)) : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
                                     >> 0xfU)));
    vlTOPp->SCEqualizer__DOT__q_zf_eq_result_data_payload 
        = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16)
                       ? ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__x_sign)
                           ? VL_NEGATE_I((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                           : (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                       : ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__x_sign)
                           ? VL_NEGATE_I((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
                           : (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))));
    vlTOPp->SCEqualizer__DOT__i_zf_eq_result_data_payload 
        = (0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16)
                       ? ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__x_sign)
                           ? VL_NEGATE_I((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                           : (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                       : ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__x_sign)
                           ? VL_NEGATE_I((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
                           : (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))));
    vlTOPp->SCEqualizer__DOT___zz_cha_q_scale = (0xffffU 
                                                 & VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__cha_q_scale), 1U));
    vlTOPp->SCEqualizer__DOT___zz_cha_i_scale = (0xffffU 
                                                 & VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->SCEqualizer__DOT__cha_i_scale), 1U));
}

VL_INLINE_OPT void VSCEqualizer::_sequent__TOP__16(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_sequent__TOP__16\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdly__SCEqualizer__DOT__cnt;
    CData/*5:0*/ __Vdly__SCEqualizer__DOT__train_cnt;
    // Body
    __Vdly__SCEqualizer__DOT__train_cnt = vlTOPp->SCEqualizer__DOT__train_cnt;
    __Vdly__SCEqualizer__DOT__cnt = vlTOPp->SCEqualizer__DOT__cnt;
    if (vlTOPp->reset) {
        __Vdly__SCEqualizer__DOT__train_cnt = 0U;
    } else {
        if (vlTOPp->equalized_data_payload_last) {
            __Vdly__SCEqualizer__DOT__train_cnt = 0U;
        } else {
            if (vlTOPp->SCEqualizer__DOT__when_SCEqualizer_l74) {
                __Vdly__SCEqualizer__DOT__train_cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->SCEqualizer__DOT__train_cnt)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SCEqualizer__DOT__raw_data_ready_1 = 1U;
    } else {
        if (((IData)(vlTOPp->raw_data_payload_last) 
             & ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready)))) {
            vlTOPp->SCEqualizer__DOT__raw_data_ready_1 = 0U;
        } else {
            if (((IData)(vlTOPp->equalized_data_payload_last) 
                 & (IData)(vlTOPp->equalized_data_valid))) {
                vlTOPp->SCEqualizer__DOT__raw_data_ready_1 = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SCEqualizer__DOT__train_finished = 0U;
    } else {
        if (vlTOPp->equalized_data_payload_last) {
            vlTOPp->SCEqualizer__DOT__train_finished = 0U;
        } else {
            if (vlTOPp->SCEqualizer__DOT__when_SCEqualizer_l74) {
                if ((0x3fU == (IData)(vlTOPp->SCEqualizer__DOT__train_cnt))) {
                    vlTOPp->SCEqualizer__DOT__train_finished = 1U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SCEqualizer__DOT__train_en = 1U;
    } else {
        if (vlTOPp->equalized_data_payload_last) {
            vlTOPp->SCEqualizer__DOT__train_en = 1U;
        } else {
            if (((0x3fU == (IData)(vlTOPp->SCEqualizer__DOT__cnt)) 
                 & ((IData)(vlTOPp->raw_data_valid) 
                    & (IData)(vlTOPp->raw_data_ready)))) {
                vlTOPp->SCEqualizer__DOT__train_en = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__SCEqualizer__DOT__cnt = 0U;
    } else {
        if (vlTOPp->raw_data_payload_last) {
            __Vdly__SCEqualizer__DOT__cnt = 0U;
        } else {
            if (((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready))) {
                __Vdly__SCEqualizer__DOT__cnt = ((0x3fU 
                                                  == (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                  ? 0x3fU
                                                  : (IData)(vlTOPp->SCEqualizer__DOT___zz_cnt));
            }
        }
    }
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14));
    vlTOPp->SCEqualizer__DOT__train_cnt = __Vdly__SCEqualizer__DOT__train_cnt;
    vlTOPp->SCEqualizer__DOT__cnt = __Vdly__SCEqualizer__DOT__cnt;
    vlTOPp->raw_data_ready = vlTOPp->SCEqualizer__DOT__raw_data_ready_1;
    vlTOPp->equalized_data_payload_fragment_cha_i = 
        ((IData)(vlTOPp->SCEqualizer__DOT__train_finished)
          ? (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq_result_data_payload)
          : 0U);
    vlTOPp->equalized_data_payload_fragment_cha_q = 
        ((IData)(vlTOPp->SCEqualizer__DOT__train_finished)
          ? (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq_result_data_payload)
          : 0U);
    vlTOPp->SCEqualizer__DOT___zz_cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->SCEqualizer__DOT__cnt)));
    vlTOPp->SCEqualizer__DOT___zz_ref_data_1 = ((0x20U 
                                                 & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_63)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_62))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_61)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_60)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_59)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_58))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_57)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_56))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_55)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_54))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_53)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_52)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_51)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_50))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_49)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_48)))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_47)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_46))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_45)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_44)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_43)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_42))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_41)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_40))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_39)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_38))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_37)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_36)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_35)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_34))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_33)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_32))))))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_31)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_30))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_29)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_28)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_27)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_26))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_25)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_24))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_23)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_22))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_21)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_20)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_19)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_18))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_17)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_16)))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_15)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_14))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_13)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_12)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_11)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_10))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_9)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_8))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_7)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_6))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_5)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_4)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_3)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_1)
                                                      : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_ref_0)))))));
}

VL_INLINE_OPT void VSCEqualizer::_sequent__TOP__17(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_sequent__TOP__17\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SCEqualizer__DOT___zz_ref_data = ((0x20U 
                                               & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                               ? ((0x10U 
                                                   & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_63)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_62))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_61)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_60)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_59)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_58))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_57)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_56))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_55)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_54))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_53)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_52)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_51)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_50))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_49)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_48)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_47)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_46))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_45)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_44)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_43)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_42))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_41)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_40))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_39)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_38))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_37)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_36)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_35)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_34))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_33)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_32))))))
                                               : ((0x10U 
                                                   & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_31)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_30))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_29)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_28)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_27)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_26))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_25)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_24))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_23)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_22))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_21)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_20)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_19)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_18))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_17)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_16)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_15)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_14))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_13)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_12)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_11)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_10))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_9)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_8))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_7)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_6))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_5)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_4)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_3)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_2))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->SCEqualizer__DOT__cnt))
                                                       ? (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_1)
                                                       : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_ref_0)))))));
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13));
    vlTOPp->equalized_data_valid = ((IData)(vlTOPp->SCEqualizer__DOT__train_finished) 
                                    & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15) 
                                       & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15)));
    vlTOPp->SCEqualizer__DOT__when_SCEqualizer_l74 
        = (((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15) 
            & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15)) 
           & (~ (IData)(vlTOPp->SCEqualizer__DOT__train_finished)));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13));
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12));
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11));
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10));
}

VL_INLINE_OPT void VSCEqualizer::_sequent__TOP__18(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_sequent__TOP__18\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9));
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8));
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7));
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6));
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5));
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4));
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3));
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2));
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1));
    vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid));
    vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_valid));
}

VL_INLINE_OPT void VSCEqualizer::_sequent__TOP__21(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_sequent__TOP__21\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->equalized_data_payload_last = vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_16;
}

void VSCEqualizer::_eval(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_eval\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->_sequent__TOP__18(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__21(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VSCEqualizer::_change_request(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_change_request\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSCEqualizer::_change_request_1(VSCEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_change_request_1\n"); );
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSCEqualizer::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSCEqualizer::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_last & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_last");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
