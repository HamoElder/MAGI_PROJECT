// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VZeroForcing.h for the primary calling header

#include "VZeroForcing.h"
#include "VZeroForcing__Syms.h"

//==========

void VZeroForcing::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VZeroForcing::eval\n"); );
    VZeroForcing__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/ZeroForcing.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VZeroForcing::_eval_initial_loop(VZeroForcing__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/ZeroForcing.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VZeroForcing::_sequent__TOP__4(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZeroForcing::_sequent__TOP__4\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ZeroForcing__DOT__x_sign = vlTOPp->ZeroForcing__DOT___zz_x_sign_14;
    vlTOPp->ZeroForcing__DOT__train_en_delay_16 = vlTOPp->ZeroForcing__DOT__train_en_delay_15;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_60 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_59;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_15 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_14;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_117)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_45) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_74))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_45) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_117)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_30) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_30) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))));
    }
    vlTOPp->ZeroForcing__DOT___zz_x_sign_14 = vlTOPp->ZeroForcing__DOT___zz_x_sign_13;
    vlTOPp->ZeroForcing__DOT__train_en_delay_15 = vlTOPp->ZeroForcing__DOT__train_en_delay_14;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_59 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_58;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_45 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_114)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_44) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_74))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_44) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
    vlTOPp->result_data_payload = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__train_en_delay_16)
                                               ? ((IData)(vlTOPp->ZeroForcing__DOT__x_sign)
                                                   ? 
                                                  VL_NEGATE_I((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z))
                                                   : (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z))
                                               : ((IData)(vlTOPp->ZeroForcing__DOT__x_sign)
                                                   ? 
                                                  VL_NEGATE_I((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y))
                                                   : (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y))));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_14 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_13;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_30 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_114)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_29) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_29) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))));
    }
    vlTOPp->ZeroForcing__DOT___zz_x_sign_13 = vlTOPp->ZeroForcing__DOT___zz_x_sign_12;
    vlTOPp->ZeroForcing__DOT__train_en_delay_14 = vlTOPp->ZeroForcing__DOT__train_en_delay_13;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_58 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_57;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_74 = 0U;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_44 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_111)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_43) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_73))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_43) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_73))));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_117 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_60)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_45) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_30) 
                                     >> 0xfU)));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_13 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_12;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_29 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_111)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_28) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_28) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))));
    }
    vlTOPp->ZeroForcing__DOT___zz_x_sign_12 = vlTOPp->ZeroForcing__DOT___zz_x_sign_11;
    vlTOPp->ZeroForcing__DOT__train_en_delay_13 = vlTOPp->ZeroForcing__DOT__train_en_delay_12;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_57 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_56;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_73 = 1U;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_43 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_108)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_42) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_72))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_42) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_72))));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_114 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_59)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_44) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_29) 
                                     >> 0xfU)));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_12 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_11;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_28 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_108)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_27) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_27) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))));
    }
    vlTOPp->ZeroForcing__DOT___zz_x_sign_11 = vlTOPp->ZeroForcing__DOT___zz_x_sign_10;
    vlTOPp->ZeroForcing__DOT__train_en_delay_12 = vlTOPp->ZeroForcing__DOT__train_en_delay_11;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_56 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_55;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_72 = 2U;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_42 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_105)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_41) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_71))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_41) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_71))));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_111 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_58)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_43) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_28) 
                                     >> 0xfU)));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_11 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_10;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_27 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_105)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_26) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_26) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))));
    }
}

VL_INLINE_OPT void VZeroForcing::_sequent__TOP__5(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZeroForcing::_sequent__TOP__5\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ZeroForcing__DOT___zz_x_sign_10 = vlTOPp->ZeroForcing__DOT___zz_x_sign_9;
    vlTOPp->ZeroForcing__DOT__train_en_delay_11 = vlTOPp->ZeroForcing__DOT__train_en_delay_10;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_55 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_54;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_71 = 4U;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_41 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_102)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_40) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_70))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_40) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_70))));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_108 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_57)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_42) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_27) 
                                     >> 0xfU)));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_10 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_9;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_26 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_102)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_25) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_25) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))));
    }
    vlTOPp->ZeroForcing__DOT___zz_x_sign_9 = vlTOPp->ZeroForcing__DOT___zz_x_sign_8;
    vlTOPp->ZeroForcing__DOT__train_en_delay_10 = vlTOPp->ZeroForcing__DOT__train_en_delay_9;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_54 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_53;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_70 = 8U;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_40 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_99)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_39) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_69))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_39) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_69))));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_105 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_56)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_41) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_26) 
                                     >> 0xfU)));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_9 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_8;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_25 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_99)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_24) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_24) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))));
    }
    vlTOPp->ZeroForcing__DOT___zz_x_sign_8 = vlTOPp->ZeroForcing__DOT___zz_x_sign_7;
    vlTOPp->ZeroForcing__DOT__train_en_delay_9 = vlTOPp->ZeroForcing__DOT__train_en_delay_8;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_53 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_52;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_69 = 0x10U;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_39 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_96)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_38) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_68))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_38) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_68))));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_102 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_55)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_40) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_25) 
                                     >> 0xfU)));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_8 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_7;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_24 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_96)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_23) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_23) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))));
    }
    vlTOPp->ZeroForcing__DOT___zz_x_sign_7 = vlTOPp->ZeroForcing__DOT___zz_x_sign_6;
    vlTOPp->ZeroForcing__DOT__train_en_delay_8 = vlTOPp->ZeroForcing__DOT__train_en_delay_7;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_52 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_51;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_68 = 0x20U;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_38 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_93)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_37) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_67))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_37) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_67))));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_99 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_54)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_39) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_24) 
                                     >> 0xfU)));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_7 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_6;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_23 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_93)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_22) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_22) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))));
    }
    vlTOPp->ZeroForcing__DOT___zz_x_sign_6 = vlTOPp->ZeroForcing__DOT___zz_x_sign_5;
    vlTOPp->ZeroForcing__DOT__train_en_delay_7 = vlTOPp->ZeroForcing__DOT__train_en_delay_6;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_51 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_50;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_67 = 0x40U;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_37 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_90)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_36) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_66))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_36) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_66))));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_96 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_53)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_38) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_23) 
                                     >> 0xfU)));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_6 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_5;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_22 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_90)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_21) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_21) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))));
    }
}

VL_INLINE_OPT void VZeroForcing::_sequent__TOP__6(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZeroForcing::_sequent__TOP__6\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ZeroForcing__DOT___zz_x_sign_5 = vlTOPp->ZeroForcing__DOT___zz_x_sign_4;
    vlTOPp->ZeroForcing__DOT__train_en_delay_6 = vlTOPp->ZeroForcing__DOT__train_en_delay_5;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_50 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_49;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_66 = 0x80U;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_36 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_87)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_35) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_65))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_35) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_65))));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_93 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_52)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_37) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_22) 
                                     >> 0xfU)));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_5 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_4;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_21 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_87)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_20) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_20) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))));
    }
    vlTOPp->ZeroForcing__DOT___zz_x_sign_4 = vlTOPp->ZeroForcing__DOT___zz_x_sign_3;
    vlTOPp->ZeroForcing__DOT__train_en_delay_5 = vlTOPp->ZeroForcing__DOT__train_en_delay_4;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_49 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_48;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_65 = 0x100U;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_35 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_84)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_34) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_64))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_34) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_64))));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_90 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_51)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_36) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_21) 
                                     >> 0xfU)));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_4 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_3;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_20 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_84)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_19) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_19) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))));
    }
    vlTOPp->ZeroForcing__DOT___zz_x_sign_3 = vlTOPp->ZeroForcing__DOT___zz_x_sign_2;
    vlTOPp->ZeroForcing__DOT__train_en_delay_4 = vlTOPp->ZeroForcing__DOT__train_en_delay_3;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_48 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_47;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_64 = 0x200U;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_34 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_81)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_33) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_63))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_33) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_63))));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_87 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_50)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_35) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_20) 
                                     >> 0xfU)));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_3 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_2;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_19 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_81)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_18) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_18) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))));
    }
    vlTOPp->ZeroForcing__DOT___zz_x_sign_2 = vlTOPp->ZeroForcing__DOT___zz_x_sign_1;
    vlTOPp->ZeroForcing__DOT__train_en_delay_3 = vlTOPp->ZeroForcing__DOT__train_en_delay_2;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_47 
        = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_46;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_63 = 0x400U;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_33 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_78)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_32) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_62))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_32) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_62))));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_84 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_49)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_34) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_19) 
                                     >> 0xfU)));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_2 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_1;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_18 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_78)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_17) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_17) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))));
    }
    vlTOPp->ZeroForcing__DOT___zz_x_sign_1 = vlTOPp->ZeroForcing__DOT___zz_x_sign;
    vlTOPp->ZeroForcing__DOT__train_en_delay_2 = vlTOPp->ZeroForcing__DOT__train_en_delay_1;
    if (vlTOPp->raw_data_valid) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_46 
            = (1U & (~ (IData)(vlTOPp->train_en)));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_62 = 0x800U;
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_32 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_75)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_31) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_61))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_31) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_61))));
    }
}

VL_INLINE_OPT void VZeroForcing::_sequent__TOP__7(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZeroForcing::_sequent__TOP__7\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_81 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_48)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_33) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_18) 
                                     >> 0xfU)));
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_1 
            = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x;
    }
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_17 
            = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_75)
                           ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_16) 
                              + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x))
                           : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_16) 
                              - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x))));
    }
    vlTOPp->ZeroForcing__DOT___zz_x_sign = (1U & ((IData)(vlTOPp->raw_data_payload) 
                                                  >> 0xfU));
    vlTOPp->ZeroForcing__DOT__train_en_delay_1 = vlTOPp->train_en;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_61 = 0x1000U;
    if (vlTOPp->raw_data_valid) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_31 
            = ((IData)(vlTOPp->train_en) ? 0U : (IData)(vlTOPp->scale));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_78 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_47)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_32) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_17) 
                                     >> 0xfU)));
    if (vlTOPp->raw_data_valid) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x 
            = (0xffffU & (((0x8000U & (IData)(vlTOPp->raw_data_payload))
                            ? (~ (IData)(vlTOPp->raw_data_payload))
                            : (IData)(vlTOPp->raw_data_payload)) 
                          + (1U & ((IData)(vlTOPp->raw_data_payload) 
                                   >> 0xfU))));
    }
    if (vlTOPp->raw_data_valid) {
        vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_16 
            = ((IData)(vlTOPp->train_en) ? (IData)(vlTOPp->ref_data)
                : 0U);
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_75 
        = (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_46)
                  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_31) 
                        >> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_16) 
                                     >> 0xfU)));
}

VL_INLINE_OPT void VZeroForcing::_sequent__TOP__8(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZeroForcing::_sequent__TOP__8\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14));
    vlTOPp->result_data_valid = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_15;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_valid));
}

void VZeroForcing::_eval(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZeroForcing::_eval\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VZeroForcing::_change_request(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZeroForcing::_change_request\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VZeroForcing::_change_request_1(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZeroForcing::_change_request_1\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VZeroForcing::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZeroForcing::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((train_en & 0xfeU))) {
        Verilated::overWidthError("train_en");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
