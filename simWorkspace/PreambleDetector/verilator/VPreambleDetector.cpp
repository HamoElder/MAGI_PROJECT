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

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__8(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__8\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PreambleDetector__DOT__gate_pkg_det = (
                                                   (~ (IData)(vlTOPp->reset)) 
                                                   & (vlTOPp->gate_threshold 
                                                      < vlTOPp->PreambleDetector__DOT__prod_avg_mag));
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_63 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_63 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_62;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_63 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_63 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_62;
        }
    }
    vlTOPp->pkg_detected = vlTOPp->PreambleDetector__DOT__gate_pkg_det;
    vlTOPp->PreambleDetector__DOT__prod_avg_mag = ((IData)(vlTOPp->reset)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_result_valid_1)
                                                     ? 
                                                    (0xffffffU 
                                                     & ((((0x800000U 
                                                           & vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i)
                                                           ? 
                                                          (~ vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i)
                                                           : vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i) 
                                                         + 
                                                         (1U 
                                                          & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i 
                                                             >> 0x17U))) 
                                                        + 
                                                        (((0x800000U 
                                                           & vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q)
                                                           ? 
                                                          (~ vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q)
                                                           : vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q) 
                                                         + 
                                                         (1U 
                                                          & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q 
                                                             >> 0x17U)))))
                                                     : 0U));
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_62 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_62 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_61;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_62 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_62 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_61;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i = 0U;
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q = 0U;
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_result_valid_1 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_result_valid_1 = 1U;
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i 
                = (0xffffffU & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i 
                                + vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_i));
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q 
                = (0xffffffU & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q 
                                + vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_q));
        } else {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_result_valid_1 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_61 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_61 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_60;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_61 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_61 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_60;
        }
    }
    vlTOPp->corr_result_valid = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_result_valid_1;
    vlTOPp->corr_result_payload_cha_i = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i;
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i 
        = (0xffffffU & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i 
                        - vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_63));
    vlTOPp->corr_result_payload_cha_q = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q;
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q 
        = (0xffffffU & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q 
                        - vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_63));
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_60 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_60 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_59;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_60 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_60 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_59;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_59 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_59 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_58;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_59 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_59 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_58;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_58 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_58 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_57;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_58 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_58 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_57;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_57 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_57 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_56;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_57 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_57 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_56;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_56 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_56 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_55;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_56 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_56 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_55;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_55 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_55 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_54;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_55 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_55 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_54;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_54 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_54 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_53;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_54 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_54 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_53;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_53 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_53 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_52;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_53 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_53 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_52;
        }
    }
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__9(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__9\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_52 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_52 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_51;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_52 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_52 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_51;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_51 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_51 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_50;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_51 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_51 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_50;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_50 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_50 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_49;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_50 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_50 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_49;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_49 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_49 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_48;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_49 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_49 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_48;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_48 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_48 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_47;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_48 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_48 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_47;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_47 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_47 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_46;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_47 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_47 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_46;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_46 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_46 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_45;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_46 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_46 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_45;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_45 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_45 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_44;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_45 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_45 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_44;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_44 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_44 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_43;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_44 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_44 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_43;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_43 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_43 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_42;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_43 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_43 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_42;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_42 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_42 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_41;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_42 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_42 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_41;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_41 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_41 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_40;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_41 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_41 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_40;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_40 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_40 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_39;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_40 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_40 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_39;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_39 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_39 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_38;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_39 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_39 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_38;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_38 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_38 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_37;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_38 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_38 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_37;
        }
    }
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__10(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__10\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_37 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_37 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_36;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_37 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_37 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_36;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_36 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_36 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_35;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_36 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_36 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_35;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_35 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_35 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_34;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_35 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_35 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_34;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_34 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_34 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_33;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_34 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_34 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_33;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_33 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_33 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_32;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_33 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_33 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_32;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_32 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_32 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_32 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_32 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22;
        }
    }
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__11(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__11\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7;
        }
    }
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__12(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__12\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_i;
        }
    }
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_q 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__k1 
                                             - VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_i))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, 
                                                                            (0xfffU 
                                                                             & ((IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_q) 
                                                                                + (IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_i)))))))));
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_valid)));
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_i 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__k1 
                                             - VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_q))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, 
                                                                            (0xfffU 
                                                                             & ((IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_i) 
                                                                                - (IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_q)))))))));
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_valid;
        }
    }
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__13(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__13\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_valid;
        }
    }
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__14(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__14\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_valid;
        }
    }
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__15(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__15\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_valid;
        }
    }
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__16(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__16\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_valid;
        }
    }
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__17(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__17\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_valid;
        }
    }
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__18(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__18\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_valid 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i 
                = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_valid = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_valid 
                = vlTOPp->raw_data_valid;
        }
    }
}

VL_INLINE_OPT void VPreambleDetector::_sequent__TOP__19(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_sequent__TOP__19\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q 
                = vlTOPp->raw_data_payload_cha_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i 
                = vlTOPp->raw_data_payload_cha_i;
        }
    }
}

VL_INLINE_OPT void VPreambleDetector::_combo__TOP__20(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_combo__TOP__20\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__k1 
        = (0xffffffU & VL_MULS_III(24,24,24, (0xffffffU 
                                              & VL_EXTENDS_II(24,12, (IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_i))), 
                                   (0xffffffU & VL_EXTENDS_II(24,12, 
                                                              (0xfffU 
                                                               & ((IData)(vlTOPp->raw_data_payload_cha_i) 
                                                                  + (IData)(vlTOPp->raw_data_payload_cha_q)))))));
}

void VPreambleDetector::_eval(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_eval\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->_sequent__TOP__18(vlSymsp);
        vlTOPp->_sequent__TOP__19(vlSymsp);
    }
    vlTOPp->_combo__TOP__20(vlSymsp);
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
    if (VL_UNLIKELY((gate_threshold & 0xff000000U))) {
        Verilated::overWidthError("gate_threshold");}
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
