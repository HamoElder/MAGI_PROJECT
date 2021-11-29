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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/CFOEstimator.v", 7, "",
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/CFOEstimator.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__4(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__4\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    WData/*95:0*/ __Vtemp7[3];
    WData/*95:0*/ __Vtemp8[3];
    WData/*95:0*/ __Vtemp11[3];
    WData/*95:0*/ __Vtemp12[3];
    WData/*95:0*/ __Vtemp15[3];
    WData/*95:0*/ __Vtemp16[3];
    WData/*95:0*/ __Vtemp17[3];
    // Body
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_14) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30, 0xeU))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30, 0xeU)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_14) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_y 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14, 0xeU))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14, 0xeU)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_14) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_45 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z_1)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_45 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z_1));
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_13) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29, 0xdU))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29, 0xdU)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z_1 = 3U;
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4[0U] 
        = (IData)(VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                              VL_EXTENDS_QI(64,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z)));
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4[1U] 
        = (IData)((VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                               VL_EXTENDS_QI(64,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z)) 
                   >> 0x20U));
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4[2U] 
        = (1U & (IData)((VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                                     VL_EXTENDS_QI(64,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z)) 
                         >> 0x3fU)));
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_13) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13, 0xdU))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13, 0xdU)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_13) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_45 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_44 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_59)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_44 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_59));
    }
    __Vtemp3[0U] = 0xffff8000U;
    __Vtemp3[1U] = 0xffffffffU;
    __Vtemp3[2U] = 1U;
    VL_ADD_W(3, __Vtemp4, __Vtemp3, vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4);
    __Vtemp7[0U] = 0xffff8000U;
    __Vtemp7[1U] = 0xffffffffU;
    __Vtemp7[2U] = 1U;
    VL_ADD_W(3, __Vtemp8, __Vtemp7, vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4);
    __Vtemp11[0U] = 0xffff8000U;
    __Vtemp11[1U] = 0xffffffffU;
    __Vtemp11[2U] = 1U;
    VL_ADD_W(3, __Vtemp12, __Vtemp11, vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4);
    __Vtemp15[0U] = 0x8000U;
    __Vtemp15[1U] = 0U;
    __Vtemp15[2U] = 0U;
    __Vtemp16[0U] = (IData)(VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                                        VL_EXTENDS_QI(64,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z)));
    __Vtemp16[1U] = (IData)((VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                                         VL_EXTENDS_QI(64,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z)) 
                             >> 0x20U));
    __Vtemp16[2U] = (1U & (IData)((VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                                               VL_EXTENDS_QI(64,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z)) 
                                   >> 0x3fU)));
    VL_ADD_W(3, __Vtemp17, __Vtemp15, __Vtemp16);
    vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload 
        = (VL_ULL(0x1ffffffffffff) & ((1U & __Vtemp4[2U])
                                       ? ((0U != (0xffffU 
                                                  & ((IData)(0x8000U) 
                                                     + 
                                                     vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4[0U])))
                                           ? (VL_ULL(1) 
                                              + (((QData)((IData)(
                                                                  (1U 
                                                                   & __Vtemp8[2U]))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     __Vtemp8[1U])) 
                                                     << 0x10U) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp8[0U])) 
                                                       >> 0x10U))))
                                           : (((QData)((IData)(
                                                               (1U 
                                                                & __Vtemp12[2U]))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  __Vtemp12[1U])) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp12[0U])) 
                                                    >> 0x10U))))
                                       : (((QData)((IData)(
                                                           (1U 
                                                            & __Vtemp17[2U]))) 
                                           << 0x30U) 
                                          | (((QData)((IData)(
                                                              __Vtemp17[1U])) 
                                              << 0x10U) 
                                             | ((QData)((IData)(
                                                                __Vtemp17[0U])) 
                                                >> 0x10U)))));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28
            : 0U);
    vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7 
        = (VL_ULL(0xffffffffffff) & ((1U & (IData)(
                                                   (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload 
                                                    >> 0x30U)))
                                      ? ((3U != (3U 
                                                 & (IData)(
                                                           (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload 
                                                            >> 0x2fU))))
                                          ? VL_ULL(0x800000000000)
                                          : vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload)
                                      : ((1U & (IData)(
                                                       (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload 
                                                        >> 0x2fU)))
                                          ? VL_ULL(0x7fffffffffff)
                                          : vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload)));
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_12) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28, 0xcU))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28, 0xcU)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_59 = 7U;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_12) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12, 0xcU))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12, 0xcU)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_12) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_44 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_43 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_58)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_43 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_58));
    }
    vlTOPp->delta_phi_payload = ((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7 
                                                >> 0x2fU)))
                                  ? ((0x1ffffU != (0x1ffffU 
                                                   & (IData)(
                                                             (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7 
                                                              >> 0x1fU))))
                                      ? 0x80000000U
                                      : (IData)(vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7))
                                  : ((0U != (0xffffU 
                                             & (IData)(
                                                       (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7 
                                                        >> 0x1fU))))
                                      ? 0x7fffffffU
                                      : (IData)(vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_11) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_11 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27, 0xbU))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_11 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27, 0xbU)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_58 = 0xfU;
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__5(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__5\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_11) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_11, 0xbU))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_11, 0xbU)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_11) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_43 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_42 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_57)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_42 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_57));
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_11 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26, 0xaU))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26, 0xaU)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_57 = 0x1fU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10, 0xaU))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10, 0xaU)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_42 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_41 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_56)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_41 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_56));
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25, 9U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25, 9U)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_56 = 0x3fU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9, 9U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9, 9U)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_41 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_40 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_55)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_40 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_55));
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24, 8U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24, 8U)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_55 = 0x7fU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8, 8U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8, 8U)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_40 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_39 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_54)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_39 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_54));
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23, 7U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23, 7U)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_54 = 0xffU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7, 7U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7, 7U)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_39 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_38 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_53)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_38 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_53));
    }
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__6(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__6\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22, 6U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22, 6U)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_53 = 0x1ffU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6, 6U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6, 6U)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_38 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_37 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_52)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_37 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_52));
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21, 5U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21, 5U)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_52 = 0x3ffU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5, 5U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5, 5U)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_37 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_36 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_51)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_36 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_51));
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20, 4U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20, 4U)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_51 = 0x7ffU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4, 4U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4, 4U)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_36 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_35 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_50)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_35 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_50));
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19, 3U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19, 3U)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_50 = 0xffaU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3, 3U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3, 3U)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_35 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_34 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_49)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_34 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_49));
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18, 2U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18, 2U)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_49 = 0x1fd5U;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2, 2U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2, 2U)));
    }
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__7(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__7\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_34 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_48)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_48));
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17, 1U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17, 1U)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_48 = 0x3eb6U;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                   + VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1, 1U))
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                   - VL_SHIFTRS_III(32,32,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1, 1U)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_47)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_47));
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_47 = 0x76b1U;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
            = ((0x80000000U & vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16)
                ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                   - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_46)
                : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                   + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_46));
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15
            : 0U);
    if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x 
            = ((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 
                              >> 0x20U))) ? ((3U != 
                                              (3U & (IData)(
                                                            (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 
                                                             >> 0x1fU))))
                                              ? 0x80000000U
                                              : (IData)(vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125))
                : ((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 
                                  >> 0x1fU))) ? 0x7fffffffU
                    : (IData)(vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_46 = 0xc90fU;
    if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_31 = 0U;
    }
    if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
            = VL_NEGATE_I(((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
                                          >> 0x20U)))
                            ? ((3U != (3U & (IData)(
                                                    (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
                                                     >> 0x1fU))))
                                ? 0x80000000U : (IData)(vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4))
                            : ((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
                                              >> 0x1fU)))
                                ? 0x7fffffffU : (IData)(vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4))));
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10
            : 0U);
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__8(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__8\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)
            ? vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i
            : 0U);
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__9(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__9\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__impulse_cnt = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : ((IData)(vlTOPp->rotated_data_valid)
                                                   ? 
                                                  ((0x1fU 
                                                    == (IData)(vlTOPp->CFOEstimator__DOT__impulse_cnt))
                                                    ? 0U
                                                    : (IData)(vlTOPp->CFOEstimator__DOT___zz_impulse_cnt))
                                                   : 0U));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_14));
    vlTOPp->CFOEstimator__DOT___zz_impulse_cnt = (0x3fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->CFOEstimator__DOT__impulse_cnt)));
    vlTOPp->delta_phi_valid = ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_15) 
                               & (0x1fU == (IData)(vlTOPp->CFOEstimator__DOT__impulse_cnt)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_13));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_12));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_11));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_10));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_9));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_8));
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__10(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__10\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_7));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_6));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_5));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_4));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_3));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_2));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_1));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_ULL(0);
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_ULL(0);
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = 1U;
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                = (VL_ULL(0xffffffffffff) & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
                                             + (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i)))));
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                = (VL_ULL(0xffffffffffff) & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
                                             + (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q)))));
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = 0U;
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_ULL(0);
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_ULL(0);
        }
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
        = (VL_ULL(0xffffffffffff) & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                     - (((QData)((IData)(
                                                         (0xffffU 
                                                          & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31)))));
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                           >> 0x2fU))))) 
            << 0x30U) | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
        = (VL_ULL(0xffffffffffff) & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                     - (((QData)((IData)(
                                                         (0xffffU 
                                                          & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31)))));
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                           >> 0x2fU))))) 
            << 0x30U) | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i 
        = ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
                                          - VL_MULS_III(32,32,32, 
                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->rotated_data_payload_cha_q)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      (0xffffU 
                                                                       & ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i) 
                                                                          - (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q)))))));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q 
        = ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
                                          - VL_MULS_III(32,32,32, 
                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->rotated_data_payload_cha_i)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      (0xffffU 
                                                                       & ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q) 
                                                                          + (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i)))))));
    vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 = 
        (VL_ULL(0x1ffffffff) & ((1U & (IData)((VL_ULL(1) 
                                               & ((VL_ULL(0x1ffffffff8000) 
                                                   + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                  >> 0x30U))))
                                 ? ((0U != (0xffffU 
                                            & ((IData)(0x8000U) 
                                               + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2))))
                                     ? (VL_ULL(1) + 
                                        (VL_ULL(0x1ffffffff) 
                                         & ((VL_ULL(0x1ffffffff8000) 
                                             + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                            >> 0x10U)))
                                     : (VL_ULL(0x1ffffffff) 
                                        & ((VL_ULL(0x1ffffffff8000) 
                                            + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                           >> 0x10U)))
                                 : (VL_ULL(0x1ffffffff) 
                                    & ((VL_ULL(0x8000) 
                                        + (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                                                        >> 0x2fU))))) 
                                            << 0x30U) 
                                           | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i)) 
                                       >> 0x10U))));
    vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
        = (VL_ULL(0x1ffffffff) & ((1U & (IData)((VL_ULL(1) 
                                                 & ((VL_ULL(0x1ffffffff8000) 
                                                     + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                    >> 0x30U))))
                                   ? ((0U != (0xffffU 
                                              & ((IData)(0x8000U) 
                                                 + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5))))
                                       ? (VL_ULL(1) 
                                          + (VL_ULL(0x1ffffffff) 
                                             & ((VL_ULL(0x1ffffffff8000) 
                                                 + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                >> 0x10U)))
                                       : (VL_ULL(0x1ffffffff) 
                                          & ((VL_ULL(0x1ffffffff8000) 
                                              + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                             >> 0x10U)))
                                   : (VL_ULL(0x1ffffffff) 
                                      & ((VL_ULL(0x8000) 
                                          + (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                                                          >> 0x2fU))))) 
                                              << 0x30U) 
                                             | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q)) 
                                         >> 0x10U))));
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__12(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__12\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i)
            : 0U);
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__13(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__13\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_valid 
        = ((IData)(vlTOPp->rotated_data_valid) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_valid));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_valid 
        = vlTOPp->rotated_data_valid;
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->rotated_data_payload_cha_q)
            : 0U);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i 
        = ((IData)(vlTOPp->rotated_data_valid) ? (IData)(vlTOPp->rotated_data_payload_cha_i)
            : 0U);
}

VL_INLINE_OPT void VCFOEstimator::_combo__TOP__14(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_combo__TOP__14\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & ((IData)(vlTOPp->rotated_data_payload_cha_i) 
                                               + (IData)(vlTOPp->rotated_data_payload_cha_q)))));
}

void VCFOEstimator::_eval(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_eval\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__13(vlSymsp);
    }
    vlTOPp->_combo__TOP__14(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
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
