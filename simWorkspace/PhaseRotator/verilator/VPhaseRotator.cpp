// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPhaseRotator.h for the primary calling header

#include "VPhaseRotator.h"
#include "VPhaseRotator__Syms.h"

//==========

void VPhaseRotator::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPhaseRotator::eval\n"); );
    VPhaseRotator__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/PhaseRotator.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPhaseRotator::_eval_initial_loop(VPhaseRotator__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/PhaseRotator.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VPhaseRotator::_sequent__TOP__3(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_sequent__TOP__3\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_15 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_14));
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14, 0xeU))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14, 0xeU)));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30, 0xeU))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30, 0xeU)));
    }
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_14 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_13));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1 = 3U;
    vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5 
        = (((QData)((IData)((1U & (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y)));
    vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2 
        = (((QData)((IData)((1U & (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15)));
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_59)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_59));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29, 0xdU))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29, 0xdU)));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13, 0xdU))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13, 0xdU)));
    }
    vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw = 
        (0x1ffffU & ((1U & (IData)((VL_ULL(1) & ((VL_ULL(0x1ffff8000) 
                                                  + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                 >> 0x20U))))
                      ? ((0U != (0xffffU & ((IData)(0x8000U) 
                                            + (IData)(vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5))))
                          ? ((IData)(1U) + (IData)(
                                                   (VL_ULL(0x1ffff) 
                                                    & ((VL_ULL(0x1ffff8000) 
                                                        + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                       >> 0x10U))))
                          : (IData)((VL_ULL(0x1ffff) 
                                     & ((VL_ULL(0x1ffff8000) 
                                         + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                        >> 0x10U))))
                      : (IData)((VL_ULL(0x1ffff) & 
                                 ((VL_ULL(0x8000) + 
                                   (((QData)((IData)(
                                                     (1U 
                                                      & (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                                                         >> 0x1fU)))) 
                                     << 0x20U) | (QData)((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y)))) 
                                  >> 0x10U)))));
    vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw = 
        (0x1ffffU & ((1U & (IData)((VL_ULL(1) & ((VL_ULL(0x1ffff8000) 
                                                  + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                 >> 0x20U))))
                      ? ((0U != (0xffffU & ((IData)(0x8000U) 
                                            + (IData)(vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2))))
                          ? ((IData)(1U) + (IData)(
                                                   (VL_ULL(0x1ffff) 
                                                    & ((VL_ULL(0x1ffff8000) 
                                                        + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                       >> 0x10U))))
                          : (IData)((VL_ULL(0x1ffff) 
                                     & ((VL_ULL(0x1ffff8000) 
                                         + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                        >> 0x10U))))
                      : (IData)((VL_ULL(0x1ffff) & 
                                 ((VL_ULL(0x8000) + 
                                   (((QData)((IData)(
                                                     (1U 
                                                      & (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                                         >> 0x1fU)))) 
                                     << 0x20U) | (QData)((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15)))) 
                                  >> 0x10U)))));
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_13 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_12));
    vlTOPp->PhaseRotator__DOT__rotated_y_raw = (0xffffU 
                                                & ((0x10000U 
                                                    & vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw)
                                                    ? 
                                                   ((3U 
                                                     != 
                                                     (3U 
                                                      & (vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw 
                                                         >> 0xfU)))
                                                     ? 0x8000U
                                                     : vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw)
                                                    : 
                                                   ((0x8000U 
                                                     & vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw)
                                                     ? 0x7fffU
                                                     : vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw)));
    vlTOPp->PhaseRotator__DOT__rotated_x_raw = (0xffffU 
                                                & ((0x10000U 
                                                    & vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw)
                                                    ? 
                                                   ((3U 
                                                     != 
                                                     (3U 
                                                      & (vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw 
                                                         >> 0xfU)))
                                                     ? 0x8000U
                                                     : vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw)
                                                    : 
                                                   ((0x8000U 
                                                     & vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw)
                                                     ? 0x7fffU
                                                     : vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw)));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_59 = 7U;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12, 0xcU))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12, 0xcU)));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28, 0xcU))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28, 0xcU)));
    }
    vlTOPp->rotated_data_payload_cha_q = (0xffffU & 
                                          ((IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_15)
                                            ? (IData)(vlTOPp->PhaseRotator__DOT__rotated_y_raw)
                                            : VL_NEGATE_I((IData)(vlTOPp->PhaseRotator__DOT__rotated_y_raw))));
    vlTOPp->rotated_data_payload_cha_i = (0xffffU & 
                                          ((IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_15)
                                            ? (IData)(vlTOPp->PhaseRotator__DOT__rotated_x_raw)
                                            : VL_NEGATE_I((IData)(vlTOPp->PhaseRotator__DOT__rotated_x_raw))));
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_12 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_11));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58 = 0xfU;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_57)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_57));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27, 0xbU))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27, 0xbU)));
    }
}

VL_INLINE_OPT void VPhaseRotator::_sequent__TOP__4(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_sequent__TOP__4\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11, 0xbU))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11, 0xbU)));
    }
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_11 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_10));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_57 = 0x1fU;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_56)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_56));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10, 0xaU))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10, 0xaU)));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26, 0xaU))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26, 0xaU)));
    }
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_10 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_9));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_56 = 0x3fU;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25, 9U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25, 9U)));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9, 9U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9, 9U)));
    }
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_9 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_8));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55 = 0x7fU;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8, 8U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8, 8U)));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24, 8U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24, 8U)));
    }
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_8 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_7));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54 = 0xffU;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23, 7U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23, 7U)));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7, 7U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7, 7U)));
    }
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_7 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_6));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53 = 0x1ffU;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6, 6U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6, 6U)));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22, 6U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22, 6U)));
    }
}

VL_INLINE_OPT void VPhaseRotator::_sequent__TOP__5(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_sequent__TOP__5\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_6 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_5));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52 = 0x3ffU;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21, 5U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21, 5U)));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5, 5U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5, 5U)));
    }
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_5 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_4));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51 = 0x7ffU;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4, 4U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4, 4U)));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20, 4U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20, 4U)));
    }
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_4 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_3));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50 = 0xffaU;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19, 3U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19, 3U)));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3, 3U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3, 3U)));
    }
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_3 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_2));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49 = 0x1fd5U;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2, 2U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2, 2U)));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18, 2U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18, 2U)));
    }
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_2 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_1));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48 = 0x3eb6U;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17, 1U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17, 1U)));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1, 1U))
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1, 1U)));
    }
}

VL_INLINE_OPT void VPhaseRotator::_sequent__TOP__6(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_sequent__TOP__6\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_1 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_0));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47 = 0x76b1U;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 
            = ((0x80000000U & vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31)
                ? (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x 
                   + vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16)
                : (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x 
                   - vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16));
    }
    vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_0 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->PhaseRotator__DOT__xy_symbol));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46 = 0xc90fU;
    if (vlTOPp->raw_data_valid) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x 
            = ((IData)(vlTOPp->raw_data_payload_cha_i) 
               << 0x10U);
    }
    if (vlTOPp->raw_data_valid) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
            = ((IData)(vlTOPp->raw_data_payload_cha_q) 
               << 0x10U);
    }
    if (vlTOPp->raw_data_valid) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
            = vlTOPp->PhaseRotator__DOT__phi;
    }
    vlTOPp->PhaseRotator__DOT__phi = ((IData)(vlTOPp->raw_data_valid)
                                       ? vlTOPp->PhaseRotator__DOT__phiNext
                                       : 0U);
}

VL_INLINE_OPT void VPhaseRotator::_sequent__TOP__7(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_sequent__TOP__7\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__PhaseRotator__DOT__xy_symbol;
    // Body
    __Vdly__PhaseRotator__DOT__xy_symbol = vlTOPp->PhaseRotator__DOT__xy_symbol;
    if (vlTOPp->reset) {
        __Vdly__PhaseRotator__DOT__xy_symbol = 0U;
    } else {
        if (VL_LTS_III(1,32,32, 0x1921fU, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)) {
            __Vdly__PhaseRotator__DOT__xy_symbol = 
                (1U & (~ (IData)(vlTOPp->PhaseRotator__DOT__xy_symbol)));
        } else {
            if (VL_GTS_III(1,32,32, 0xfffe6de1U, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)) {
                __Vdly__PhaseRotator__DOT__xy_symbol 
                    = (1U & (~ (IData)(vlTOPp->PhaseRotator__DOT__xy_symbol)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PhaseRotator__DOT__phiCorrect = 0U;
    } else {
        if (vlTOPp->phiCorrect_valid) {
            vlTOPp->PhaseRotator__DOT__phiCorrect = vlTOPp->phiCorrect_payload;
        }
    }
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14));
    vlTOPp->PhaseRotator__DOT__xy_symbol = __Vdly__PhaseRotator__DOT__xy_symbol;
    vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47 
        = (vlTOPp->PhaseRotator__DOT__phi + vlTOPp->PhaseRotator__DOT__phiCorrect);
    vlTOPp->rotated_data_valid = vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15;
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13));
    vlTOPp->PhaseRotator__DOT__phiNext = (VL_LTS_III(1,32,32, 0x1921fU, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)
                                           ? ((vlTOPp->PhaseRotator__DOT__phi 
                                               - (IData)(0x3243fU)) 
                                              + vlTOPp->PhaseRotator__DOT__phiCorrect)
                                           : (VL_GTS_III(1,32,32, 0xfffe6de1U, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)
                                               ? ((IData)(0x3243fU) 
                                                  + 
                                                  (vlTOPp->PhaseRotator__DOT__phi 
                                                   + vlTOPp->PhaseRotator__DOT__phiCorrect))
                                               : (vlTOPp->PhaseRotator__DOT__phi 
                                                  + vlTOPp->PhaseRotator__DOT__phiCorrect)));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3));
}

VL_INLINE_OPT void VPhaseRotator::_sequent__TOP__8(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_sequent__TOP__8\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_valid));
}

void VPhaseRotator::_eval(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_eval\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VPhaseRotator::_change_request(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_change_request\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VPhaseRotator::_change_request_1(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_change_request_1\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPhaseRotator::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((phiCorrect_valid & 0xfeU))) {
        Verilated::overWidthError("phiCorrect_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
