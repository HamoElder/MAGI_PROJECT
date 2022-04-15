// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPreambleDetector.h for the primary calling header

#include "VPreambleDetector.h"
#include "VPreambleDetector__Syms.h"

//==========

void VPreambleDetector::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPreambleDetector::eval\n"); );
    VPreambleDetector__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/PreambleDetector.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPreambleDetector::_eval_initial_loop(VPreambleDetector__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/PreambleDetector.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VPreambleDetector::_combo__TOP__1(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_combo__TOP__1\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->raw_data_out_valid = vlTOPp->raw_data_valid;
    vlTOPp->raw_data_out_payload_cha_i = vlTOPp->raw_data_payload_cha_i;
    vlTOPp->raw_data_out_payload_cha_q = vlTOPp->raw_data_payload_cha_q;
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__4(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__4\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i 
        = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_i;
    vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q 
        = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_q;
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_15 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_14;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_15 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_14;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_14 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_13;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_14 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_13;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_13 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_12;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_13 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_12;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_12 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_11;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_12 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_11;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_11 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_10;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_11 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_10;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_10 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_9;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_10 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_9;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_9 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_8;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_9 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_8;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_8 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_7;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_8 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_7;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_7 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_6;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_7 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_6;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_6 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_5;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_6 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_5;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_5 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_4;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_5 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_4;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_4 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_3;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_4 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_3;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_3 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_2;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_3 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_2;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_2 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_1;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_2 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_1;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_1 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_0;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_1 
            = vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_0;
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_0 
            = (0xfffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext 
                           >> 4U));
    }
    if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_0 
            = (0xfffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext 
                           >> 4U));
    }
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__6(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__6\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__PreambleDetector__DOT__plateau_cnt;
    // Body
    vlTOPp->__Vdly__PreambleDetector__DOT__crossCorrelator_1__DOT__cnt 
        = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__cnt;
    __Vdly__PreambleDetector__DOT__plateau_cnt = vlTOPp->PreambleDetector__DOT__plateau_cnt;
    vlTOPp->__Vdly__PreambleDetector__DOT__crossCorrelator_1__DOT__cnt 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? ((0xfU 
                                               <= (IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__cnt))
                                               ? 0U
                                               : (IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT___zz_cnt))
                                           : 0U));
    if (vlTOPp->reset) {
        __Vdly__PreambleDetector__DOT__plateau_cnt = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__gate_pkg_det) {
            if (vlTOPp->PreambleDetector__DOT__when_PreambleDetector_l64) {
                __Vdly__PreambleDetector__DOT__plateau_cnt 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->PreambleDetector__DOT__plateau_cnt)));
            }
        } else {
            __Vdly__PreambleDetector__DOT__plateau_cnt = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15;
        }
    }
    vlTOPp->PreambleDetector__DOT__plateau_cnt = __Vdly__PreambleDetector__DOT__plateau_cnt;
    vlTOPp->PreambleDetector__DOT__when_PreambleDetector_l64 
        = (0xffU > (IData)(vlTOPp->PreambleDetector__DOT__plateau_cnt));
    vlTOPp->PreambleDetector__DOT__gate_pkg_det = (
                                                   (~ (IData)(vlTOPp->reset)) 
                                                   & ((IData)(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1) 
                                                      & ((QData)((IData)(
                                                                         (0x7fffffU 
                                                                          & ((vlTOPp->PreambleDetector__DOT___zz_gate_pkg_det 
                                                                              >> 1U) 
                                                                             + 
                                                                             (0x3fffffU 
                                                                              & (vlTOPp->PreambleDetector__DOT___zz_gate_pkg_det 
                                                                                >> 2U)))))) 
                                                         < vlTOPp->PreambleDetector__DOT__prod_avg_mag)));
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_i = 0U;
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_q = 0U;
        vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_i 
                = (0xffffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_i 
                                + ((0xf00000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext 
                                                                         >> 0x17U)))) 
                                                 << 0x14U)) 
                                   | (0xfffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext 
                                                  >> 4U)))));
            vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_q 
                = (0xffffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_q 
                                + ((0xf00000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext 
                                                                         >> 0x17U)))) 
                                                 << 0x14U)) 
                                   | (0xfffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext 
                                                  >> 4U)))));
            vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1 = 1U;
        } else {
            vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1 = 0U;
            vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_i = 0U;
            vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_q = 0U;
        }
    }
    vlTOPp->PreambleDetector__DOT__prod_avg_mag = ((IData)(vlTOPp->reset)
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_result_valid)
                                                     ? 
                                                    (VL_ULL(0xfffffffff) 
                                                     & ((((1U 
                                                           & (IData)(
                                                                     (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_i 
                                                                      >> 0x23U)))
                                                           ? 
                                                          (~ vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_i)
                                                           : vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_i) 
                                                         + (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_i 
                                                                                >> 0x23U)))))) 
                                                        + 
                                                        (((1U 
                                                           & (IData)(
                                                                     (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_q 
                                                                      >> 0x23U)))
                                                           ? 
                                                          (~ vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_q)
                                                           : vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_q) 
                                                         + (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_q 
                                                                                >> 0x23U))))))))
                                                     : VL_ULL(0)));
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13;
        }
    }
    vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_i 
        = (0xffffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_i 
                        - ((0xf00000U & (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_15 
                                                                 >> 0x13U)))) 
                                         << 0x14U)) 
                           | vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_15)));
    vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_q 
        = (0xffffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_q 
                        - ((0xf00000U & (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_15 
                                                                 >> 0x13U)))) 
                                         << 0x14U)) 
                           | vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_15)));
    vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_valid));
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_i = VL_ULL(0);
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_q = VL_ULL(0);
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_result_valid = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_result_valid = 1U;
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_i 
                = (VL_ULL(0xfffffffff) & (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i_1 
                                          + (((QData)((IData)(
                                                              (0xfffU 
                                                               & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i 
                                                                                >> 0x17U))))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i)))));
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_q 
                = (VL_ULL(0xfffffffff) & (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q_1 
                                          + (((QData)((IData)(
                                                              (0xfffU 
                                                               & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q 
                                                                                >> 0x17U))))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q)))));
        } else {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_result_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12;
        }
    }
    vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i_1 
        = (VL_ULL(0xfffffffff) & (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_i 
                                  - (((QData)((IData)(
                                                      (0xfffU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 
                                                                                >> 0x17U))))))) 
                                      << 0x18U) | (QData)((IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16)))));
    vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q_1 
        = (VL_ULL(0xfffffffff) & (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_q 
                                  - (((QData)((IData)(
                                                      (0xfffU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16 
                                                                                >> 0x17U))))))) 
                                      << 0x18U) | (QData)((IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16)))));
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10;
        }
    }
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__7(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__7\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 
                = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i;
        }
    }
    vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (VL_MULS_III(24,24,24, 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_q))), 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT___zz_I_mem_port0)))) 
                                             - VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_i))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT___zz_Q_mem_port0)))))));
    vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_valid));
    vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (VL_MULS_III(24,24,24, 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_i))), 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT___zz_I_mem_port0)))) 
                                             + VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_q))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT___zz_Q_mem_port0)))))));
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__9(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__9\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PreambleDetector__DOT___zz_gate_pkg_det 
        = (0xffffffU & ((((0x800000U & vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i)
                           ? (~ vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i)
                           : vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i) 
                         + (1U & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i 
                                  >> 0x17U))) + (((0x800000U 
                                                   & vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q)
                                                   ? 
                                                  (~ vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q)
                                                   : vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q) 
                                                 + 
                                                 (1U 
                                                  & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q 
                                                     >> 0x17U)))));
    vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext 
        = (0xffffffU & VL_MULS_III(24,24,24, (0xffffffU 
                                              & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_i))), 
                                   (0xffffffU & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_i)))));
    vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext 
        = (0xffffffU & VL_MULS_III(24,24,24, (0xffffffU 
                                              & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_q))), 
                                   (0xffffffU & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_q)))));
    vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT___zz_I_mem_port0 
        = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem
        [(0xfU & (IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__cnt))];
    vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT___zz_Q_mem_port0 
        = vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem
        [(0xfU & (IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__cnt))];
}

VL_INLINE_OPT void VPreambleDetector::_combo__TOP__10(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_combo__TOP__10\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->pkg_detected = (((IData)(vlTOPp->min_plateau) 
                             <= (IData)(vlTOPp->PreambleDetector__DOT__plateau_cnt)) 
                            & (IData)(vlTOPp->PreambleDetector__DOT__gate_pkg_det));
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__11(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__11\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__cnt 
        = vlTOPp->__Vdly__PreambleDetector__DOT__crossCorrelator_1__DOT__cnt;
    vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT___zz_cnt 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__cnt)));
}

void VPreambleDetector::_eval(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_eval\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VPreambleDetector::_change_request(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_change_request\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VPreambleDetector::_change_request_1(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_change_request_1\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPreambleDetector::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_cha_i & 0xf000U))) {
        Verilated::overWidthError("raw_data_payload_cha_i");}
    if (VL_UNLIKELY((raw_data_payload_cha_q & 0xf000U))) {
        Verilated::overWidthError("raw_data_payload_cha_q");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
