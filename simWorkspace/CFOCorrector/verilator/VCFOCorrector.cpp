// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCFOCorrector.h for the primary calling header

#include "VCFOCorrector.h"
#include "VCFOCorrector__Syms.h"

//==========

void VCFOCorrector::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCFOCorrector::eval\n"); );
    VCFOCorrector__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/CFOCorrector.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCFOCorrector::_eval_initial_loop(VCFOCorrector__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/CFOCorrector.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__3(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__3\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44 
        = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43;
    if (vlTOPp->raw_data_valid) {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11 
                = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_10;
        }
    } else {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11 = 0U;
    }
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                                - vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1)
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1)));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_44 
        = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43;
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                                - vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z_1)
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z_1)));
    }
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10, 0xaU))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10, 0xaU))));
    }
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22, 0xaU))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22, 0xaU))));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10, 0xaU))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10, 0xaU))));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_11 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22, 0xaU))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22, 0xaU))));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43 
        = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42;
    if (vlTOPp->raw_data_valid) {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_10 
                = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_9;
        }
    } else {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_10 = 0U;
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1 = 3U;
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                                - vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54)
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54)));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43 
        = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z_1 = 3U;
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                                - vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_54)
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_54)));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5 
        = ((0x1000000U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                          << 1U)) | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y);
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2 
        = ((0x1000000U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
                          << 1U)) | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11);
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21, 9U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21, 9U))));
    }
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9, 9U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9, 9U))));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21, 9U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21, 9U))));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9, 9U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9, 9U))));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw 
        = (0x1fffU & ((0x1000000U & ((IData)(0x1fff800U) 
                                     + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5))
                       ? ((0U != (0xfffU & ((IData)(0x800U) 
                                            + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5)))
                           ? ((IData)(1U) + (0x1fffU 
                                             & (((IData)(0x1fff800U) 
                                                 + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                >> 0xcU)))
                           : (0x1fffU & (((IData)(0x1fff800U) 
                                          + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                         >> 0xcU)))
                       : (0x1fffU & (((IData)(0x800U) 
                                      + ((0x1000000U 
                                          & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                                             << 1U)) 
                                         | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y)) 
                                     >> 0xcU))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw 
        = (0x1fffU & ((0x1000000U & ((IData)(0x1fff800U) 
                                     + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2))
                       ? ((0U != (0xfffU & ((IData)(0x800U) 
                                            + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2)))
                           ? ((IData)(1U) + (0x1fffU 
                                             & (((IData)(0x1fff800U) 
                                                 + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                >> 0xcU)))
                           : (0x1fffU & (((IData)(0x1fff800U) 
                                          + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                         >> 0xcU)))
                       : (0x1fffU & (((IData)(0x800U) 
                                      + ((0x1000000U 
                                          & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
                                             << 1U)) 
                                         | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11)) 
                                     >> 0xcU))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42 
        = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41;
    if (vlTOPp->raw_data_valid) {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_9 
                = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_8;
        }
    } else {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_9 = 0U;
    }
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__4(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__4\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54 = 7U;
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                                - vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53)
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53)));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42 
        = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_54 = 7U;
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                                - vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_53)
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_53)));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw 
        = (0xfffU & ((0x1000U & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                      ? ((3U != (3U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                       >> 0xbU))) ? 0x800U
                          : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                      : ((0x800U & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                          ? 0x7ffU : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw 
        = (0xfffU & ((0x1000U & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                      ? ((3U != (3U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                       >> 0xbU))) ? 0x800U
                          : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                      : ((0x800U & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                          ? 0x7ffU : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20, 8U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20, 8U))));
    }
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8, 8U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8, 8U))));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20, 8U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20, 8U))));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8, 8U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8, 8U))));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41 
        = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40;
    if (vlTOPp->raw_data_valid) {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_8 
                = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_7;
        }
    } else {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_8 = 0U;
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53 = 0xfU;
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                                - vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52)
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52)));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41 
        = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_53 = 0xfU;
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                                - vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_52)
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_52)));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19, 7U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19, 7U))));
    }
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7, 7U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7, 7U))));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19, 7U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19, 7U))));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7, 7U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7, 7U))));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40 
        = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39;
    if (vlTOPp->raw_data_valid) {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_7 
                = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_6;
        }
    } else {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_7 = 0U;
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52 = 0x1fU;
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                                - vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51)
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51)));
    }
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__5(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__5\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40 
        = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_52 = 0x1fU;
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                                - vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_51)
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_51)));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18, 6U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18, 6U))));
    }
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6, 6U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6, 6U))));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18, 6U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18, 6U))));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6, 6U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6, 6U))));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39 
        = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38;
    if (vlTOPp->raw_data_valid) {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_6 
                = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_5;
        }
    } else {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_6 = 0U;
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51 = 0x3fU;
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                                - vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50)
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50)));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39 
        = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_51 = 0x3fU;
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                                - vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_50)
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_50)));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17, 5U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17, 5U))));
    }
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5, 5U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5, 5U))));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17, 5U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17, 5U))));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5, 5U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5, 5U))));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38 
        = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37;
    if (vlTOPp->raw_data_valid) {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_5 
                = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_4;
        }
    } else {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_5 = 0U;
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50 = 0x7fU;
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                                - vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49)
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49)));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38 
        = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_50 = 0x7fU;
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                                - vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_49)
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_49)));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16, 4U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16, 4U))));
    }
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4, 4U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4, 4U))));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                      >> 0x17U)));
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__6(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__6\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16, 4U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16, 4U))));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4, 4U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4, 4U))));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37 
        = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36;
    if (vlTOPp->raw_data_valid) {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_4 
                = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_3;
        }
    } else {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_4 = 0U;
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49 = 0xffU;
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                                - vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48)
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48)));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37 
        = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_49 = 0xffU;
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                                - vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_48)
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_48)));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15, 3U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15, 3U))));
    }
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3, 3U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3, 3U))));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15, 3U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15, 3U))));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3, 3U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3, 3U))));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36 
        = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35;
    if (vlTOPp->raw_data_valid) {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_3 
                = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_2;
        }
    } else {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_3 = 0U;
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48 = 0x1fdU;
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                                - vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47)
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47)));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36 
        = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_48 = 0x1fdU;
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                                - vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_47)
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_47)));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14, 2U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14, 2U))));
    }
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2, 2U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2, 2U))));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14, 2U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14, 2U))));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2, 2U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2, 2U))));
    }
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__7(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__7\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35 
        = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34;
    if (vlTOPp->raw_data_valid) {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_2 
                = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_1;
        }
    } else {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_2 = 0U;
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47 = 0x3ebU;
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                                - vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46)
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46)));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35 
        = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_47 = 0x3ebU;
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                                - vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_46)
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_46)));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13, 1U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13, 1U))));
    }
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1, 1U))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1, 1U))));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13, 1U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13, 1U))));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1, 1U))
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1, 1U))));
    }
    if (vlTOPp->raw_data_valid) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34 = 1U;
    }
    if (vlTOPp->raw_data_valid) {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_1 
                = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_0;
        }
    } else {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_1 = 0U;
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46 = 0x76bU;
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                                - vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45)
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45)));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34 = 0U;
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_46 = 0x76bU;
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                                - vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_45)
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_45)));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x 
                                - vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12)
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12)));
    }
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x)
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                                - vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x)));
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                      >> 0x17U)));
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x 
                                - vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12)
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x 
                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12)));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
            = (0xffffffU & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x)
                             : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                - vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x)));
    }
    if (vlTOPp->raw_data_valid) {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_0 
                = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__xy_symbol;
        }
    } else {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_0 = 0U;
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45 = 0xc90U;
    if (vlTOPp->raw_data_valid) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
            = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi;
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_45 = 0xc90U;
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 = 0U;
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                                      >> 0x17U)));
    if (vlTOPp->raw_data_valid) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x 
            = ((IData)(vlTOPp->raw_data_payload_cha_i) 
               << 0xcU);
    }
    if (vlTOPp->raw_data_valid) {
        vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
            = ((IData)(vlTOPp->raw_data_payload_cha_q) 
               << 0xcU);
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                      >> 0x17U)));
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__8(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__8\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x 
            = (0xffffffU & ((0x1000000U & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125)
                             ? ((3U != (3U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
                                              >> 0x17U)))
                                 ? 0x800000U : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125)
                             : ((0x800000U & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125)
                                 ? 0x7fffffU : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125)));
    }
    if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
            = (0xffffffU & VL_NEGATE_I(((0x1000000U 
                                         & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4)
                                         ? ((3U != 
                                             (3U & 
                                              (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
                                               >> 0x17U)))
                                             ? 0x800000U
                                             : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4)
                                         : ((0x800000U 
                                             & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4)
                                             ? 0x7fffffU
                                             : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4))));
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
        = ((IData)(vlTOPp->raw_data_valid) ? vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiNext
            : 0U);
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                      >> 0x17U)));
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__12(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__12\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__CFOCorrector__DOT__phase_rotator__DOT__xy_symbol;
    CData/*5:0*/ __Vdly__CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt;
    IData/*23:0*/ __Vdly__CFOCorrector__DOT__phase_rotator__DOT__phiCorrect;
    // Body
    __Vdly__CFOCorrector__DOT__phase_rotator__DOT__xy_symbol 
        = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__xy_symbol;
    __Vdly__CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt 
        = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt;
    __Vdly__CFOCorrector__DOT__phase_rotator__DOT__phiCorrect 
        = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect;
    if (vlTOPp->reset) {
        __Vdly__CFOCorrector__DOT__phase_rotator__DOT__xy_symbol = 0U;
    } else {
        if (VL_LTS_III(1,24,24, 0x1921U, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)) {
            __Vdly__CFOCorrector__DOT__phase_rotator__DOT__xy_symbol 
                = (1U & (~ (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__xy_symbol)));
        } else {
            if (VL_GTS_III(1,24,24, 0xffe6dfU, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)) {
                __Vdly__CFOCorrector__DOT__phase_rotator__DOT__xy_symbol 
                    = (1U & (~ (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__xy_symbol)));
            }
        }
    }
    __Vdly__CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid)
                                           ? ((0x39U 
                                               <= (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt))
                                               ? 0U
                                               : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_impulse_cnt))
                                           : 0U));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10));
    if (vlTOPp->reset) {
        __Vdly__CFOCorrector__DOT__phase_rotator__DOT__phiCorrect = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            if (((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_11) 
                 & (0x39U == (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt)))) {
                __Vdly__CFOCorrector__DOT__phase_rotator__DOT__phiCorrect 
                    = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect;
            }
        } else {
            __Vdly__CFOCorrector__DOT__phase_rotator__DOT__phiCorrect = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_30;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__xy_symbol 
        = __Vdly__CFOCorrector__DOT__phase_rotator__DOT__xy_symbol;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt 
        = __Vdly__CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt;
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect 
        = __Vdly__CFOCorrector__DOT__phase_rotator__DOT__phiCorrect;
    vlTOPp->rotated_data_valid = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11;
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_impulse_cnt 
        = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50 
        = (0xffffffU & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                        + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10));
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_30 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_30 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_29;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_30 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiNext 
        = (0xffffffU & (VL_LTS_III(1,24,24, 0x1921U, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                         ? ((vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                             - (IData)(0x3243U)) + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect)
                         : (VL_GTS_III(1,24,24, 0xffe6dfU, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                             ? ((IData)(0x3243U) + 
                                (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                 + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9));
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_29 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_29 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_28;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_29 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8));
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_28 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_28 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_27;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_28 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7));
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_27 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_27 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_26;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_27 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6));
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_26 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_26 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_25;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_26 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 = 0U;
        }
    }
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__13(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__13\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5));
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_25 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_25 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_24;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_25 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4));
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_24 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_24 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_23;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_24 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3));
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_23 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_23 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_22;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_23 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2));
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_22 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_22 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_21;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_22 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1));
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_21 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_21 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_20;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_21 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_valid));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid));
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_20 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_20 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_19;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_20 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1));
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_19 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_19 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_18;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_19 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_ULL(0);
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_ULL(0);
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = 1U;
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                = (VL_ULL(0xfffffffffff) & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
                                            + (((QData)((IData)(
                                                                (0xfffffU 
                                                                 & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i 
                                                                                >> 0x17U))))))) 
                                                << 0x18U) 
                                               | (QData)((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i)))));
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                = (VL_ULL(0xfffffffffff) & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
                                            + (((QData)((IData)(
                                                                (0xfffffU 
                                                                 & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q 
                                                                                >> 0x17U))))))) 
                                                << 0x18U) 
                                               | (QData)((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q)))));
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = 0U;
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_ULL(0);
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_ULL(0);
        }
    }
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__14(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__14\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_18 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_18 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_17;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_18 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
        = (VL_ULL(0xfffffffffff) & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                    - (((QData)((IData)(
                                                        (0xfffffU 
                                                         & VL_NEGATE_I((IData)(
                                                                               (1U 
                                                                                & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 
                                                                                >> 0x17U))))))) 
                                        << 0x18U) | (QData)((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31)))));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                           >> 0x2bU))))) 
            << 0x2cU) | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i);
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
        = (VL_ULL(0xfffffffffff) & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                    - (((QData)((IData)(
                                                        (0xfffffU 
                                                         & VL_NEGATE_I((IData)(
                                                                               (1U 
                                                                                & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31 
                                                                                >> 0x17U))))))) 
                                        << 0x18U) | (QData)((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31)))));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                           >> 0x2bU))))) 
            << 0x2cU) | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q);
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_17 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_17 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_17 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
        = (0x1ffffffU & ((1U & (IData)((VL_ULL(1) & 
                                        ((VL_ULL(0x1ffffff80000) 
                                          + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                         >> 0x2cU))))
                          ? ((0U != (0xfffffU & ((IData)(0x80000U) 
                                                 + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2))))
                              ? ((IData)(1U) + (IData)(
                                                       (VL_ULL(0x1ffffff) 
                                                        & ((VL_ULL(0x1ffffff80000) 
                                                            + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                           >> 0x14U))))
                              : (IData)((VL_ULL(0x1ffffff) 
                                         & ((VL_ULL(0x1ffffff80000) 
                                             + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                            >> 0x14U))))
                          : (IData)((VL_ULL(0x1ffffff) 
                                     & ((VL_ULL(0x80000) 
                                         + (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                                                         >> 0x2bU))))) 
                                             << 0x2cU) 
                                            | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i)) 
                                        >> 0x14U)))));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
        = (0x1ffffffU & ((1U & (IData)((VL_ULL(1) & 
                                        ((VL_ULL(0x1ffffff80000) 
                                          + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                         >> 0x2cU))))
                          ? ((0U != (0xfffffU & ((IData)(0x80000U) 
                                                 + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5))))
                              ? ((IData)(1U) + (IData)(
                                                       (VL_ULL(0x1ffffff) 
                                                        & ((VL_ULL(0x1ffffff80000) 
                                                            + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                           >> 0x14U))))
                              : (IData)((VL_ULL(0x1ffffff) 
                                         & ((VL_ULL(0x1ffffff80000) 
                                             + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                            >> 0x14U))))
                          : (IData)((VL_ULL(0x1ffffff) 
                                     & ((VL_ULL(0x80000) 
                                         + (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                                                         >> 0x2bU))))) 
                                             << 0x2cU) 
                                            | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q)) 
                                        >> 0x14U)))));
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10 = 0U;
        }
    }
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__15(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__15\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            if (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 = 0U;
        }
    }
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
                                             - VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, 
                                                                            (0xfffU 
                                                                             & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q) 
                                                                                + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i)))))))));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) 
                                         & (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_valid)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
                                             - VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, 
                                                                            (0xfffU 
                                                                             & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i) 
                                                                                - (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q)))))))));
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__16(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__16\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_q = 0U;
        }
    }
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__17(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__17\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_valid = 0U;
        }
    }
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__18(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__18\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_i = 0U;
        }
    }
}
