// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VR2MDC.h for the primary calling header

#include "VR2MDC.h"
#include "VR2MDC__Syms.h"

//==========

void VR2MDC::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VR2MDC::eval\n"); );
    VR2MDC__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/R2MDC.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VR2MDC::_eval_initial_loop(VR2MDC__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/R2MDC.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VR2MDC::_sequent__TOP__4(VR2MDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC::_sequent__TOP__4\n"); );
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__R2MDC__DOT__reorder_1__DOT__ram_low__v0;
    CData/*0:0*/ __Vdlyvset__R2MDC__DOT__reorder_1__DOT__ram_low__v0;
    CData/*4:0*/ __Vdlyvdim0__R2MDC__DOT__reorder_1__DOT__ram_high__v0;
    CData/*0:0*/ __Vdlyvset__R2MDC__DOT__reorder_1__DOT__ram_high__v0;
    QData/*47:0*/ __Vdlyvval__R2MDC__DOT__reorder_1__DOT__ram_low__v0;
    QData/*47:0*/ __Vdlyvval__R2MDC__DOT__reorder_1__DOT__ram_high__v0;
    // Body
    __Vdlyvset__R2MDC__DOT__reorder_1__DOT__ram_high__v0 = 0U;
    __Vdlyvset__R2MDC__DOT__reorder_1__DOT__ram_low__v0 = 0U;
    vlTOPp->R2MDC__DOT__reorder_1__DOT__sorted_valid_1_regNext 
        = vlTOPp->R2MDC__DOT__reorder_1__DOT__sorted_valid_1;
    vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_3 = (0x20U 
                                                 > (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__out_cnt));
    vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_high_port1 
        = vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high
        [(0x1fU & (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__out_cnt))];
    vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_low_port1 
        = vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low
        [(0x1fU & (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__out_cnt))];
    if (vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_1) {
        __Vdlyvval__R2MDC__DOT__reorder_1__DOT__ram_high__v0 
            = (((QData)((IData)(vlTOPp->R2MDC__DOT__result_out2_regNext_im)) 
                << 0x18U) | (QData)((IData)(vlTOPp->R2MDC__DOT__result_out2_regNext_re)));
        __Vdlyvset__R2MDC__DOT__reorder_1__DOT__ram_high__v0 = 1U;
        __Vdlyvdim0__R2MDC__DOT__reorder_1__DOT__ram_high__v0 
            = vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt_index;
    }
    if (vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_2) {
        __Vdlyvval__R2MDC__DOT__reorder_1__DOT__ram_low__v0 
            = (((QData)((IData)(vlTOPp->R2MDC__DOT__result_out1_regNext_im)) 
                << 0x18U) | (QData)((IData)(vlTOPp->R2MDC__DOT__result_out1_regNext_re)));
        __Vdlyvset__R2MDC__DOT__reorder_1__DOT__ram_low__v0 = 1U;
        __Vdlyvdim0__R2MDC__DOT__reorder_1__DOT__ram_low__v0 
            = vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt_index;
    }
    vlTOPp->R2MDC__DOT__out1D1_im = ((1U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                                      ? vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_im
                                      : vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_im);
    vlTOPp->R2MDC__DOT__out1D1_re = ((1U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                                      ? vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_re
                                      : vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_re);
    vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_1_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_0_im;
    vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_1_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_0_re;
    vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_3_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_2_im;
    vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_3_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_2_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_31_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_30_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_31_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_30_re;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_7_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_6_im;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_7_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_6_re;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_15_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_14_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_15_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_14_re;
    if (__Vdlyvset__R2MDC__DOT__reorder_1__DOT__ram_high__v0) {
        vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[__Vdlyvdim0__R2MDC__DOT__reorder_1__DOT__ram_high__v0] 
            = __Vdlyvval__R2MDC__DOT__reorder_1__DOT__ram_high__v0;
    }
    if (__Vdlyvset__R2MDC__DOT__reorder_1__DOT__ram_low__v0) {
        vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[__Vdlyvdim0__R2MDC__DOT__reorder_1__DOT__ram_low__v0] 
            = __Vdlyvval__R2MDC__DOT__reorder_1__DOT__ram_low__v0;
    }
    vlTOPp->result_valid = vlTOPp->R2MDC__DOT__reorder_1__DOT__sorted_valid_1_regNext;
    vlTOPp->result_payload_fragment_re = (0xffffffU 
                                          & ((IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_3)
                                              ? (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_low_port1)
                                              : (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_high_port1)));
    vlTOPp->result_payload_fragment_im = (0xffffffU 
                                          & ((IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_3)
                                              ? (IData)(
                                                        (vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_low_port1 
                                                         >> 0x18U))
                                              : (IData)(
                                                        (vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_high_port1 
                                                         >> 0x18U))));
    vlTOPp->R2MDC__DOT__result_out2_regNext_im = ((IData)(vlTOPp->mode)
                                                   ? vlTOPp->R2MDC__DOT__out1_buf_6_im
                                                   : 
                                                  ((0xfc0000U 
                                                    & (VL_NEGATE_I((IData)(
                                                                           (1U 
                                                                            & (vlTOPp->R2MDC__DOT__out1_buf_6_im 
                                                                               >> 0x17U)))) 
                                                       << 0x12U)) 
                                                   | (0x3ffffU 
                                                      & (vlTOPp->R2MDC__DOT__out1_buf_6_im 
                                                         >> 6U))));
    vlTOPp->R2MDC__DOT__result_out2_regNext_re = ((IData)(vlTOPp->mode)
                                                   ? vlTOPp->R2MDC__DOT__out1_buf_6_re
                                                   : 
                                                  ((0xfc0000U 
                                                    & (VL_NEGATE_I((IData)(
                                                                           (1U 
                                                                            & (vlTOPp->R2MDC__DOT__out1_buf_6_re 
                                                                               >> 0x17U)))) 
                                                       << 0x12U)) 
                                                   | (0x3ffffU 
                                                      & (vlTOPp->R2MDC__DOT__out1_buf_6_re 
                                                         >> 6U))));
    vlTOPp->R2MDC__DOT__result_out1_regNext_im = ((IData)(vlTOPp->mode)
                                                   ? vlTOPp->R2MDC__DOT__out0_buf_6_im
                                                   : 
                                                  ((0xfc0000U 
                                                    & (VL_NEGATE_I((IData)(
                                                                           (1U 
                                                                            & (vlTOPp->R2MDC__DOT__out0_buf_6_im 
                                                                               >> 0x17U)))) 
                                                       << 0x12U)) 
                                                   | (0x3ffffU 
                                                      & (vlTOPp->R2MDC__DOT__out0_buf_6_im 
                                                         >> 6U))));
    vlTOPp->R2MDC__DOT__result_out1_regNext_re = ((IData)(vlTOPp->mode)
                                                   ? vlTOPp->R2MDC__DOT__out0_buf_6_re
                                                   : 
                                                  ((0xfc0000U 
                                                    & (VL_NEGATE_I((IData)(
                                                                           (1U 
                                                                            & (vlTOPp->R2MDC__DOT__out0_buf_6_re 
                                                                               >> 0x17U)))) 
                                                       << 0x12U)) 
                                                   | (0x3ffffU 
                                                      & (vlTOPp->R2MDC__DOT__out0_buf_6_re 
                                                         >> 6U))));
    vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_im 
        = (0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                & ((VL_MULS_QQQ(48,48,48, 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_re)), 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9_wn_im))) 
                                    + VL_MULS_QQQ(48,48,48, 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_im)), 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, 
                                                                   (0xffffffU 
                                                                    & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_5_port0)))))) 
                                   >> 0xbU))));
    vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_re 
        = (0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                & ((VL_MULS_QQQ(48,48,48, 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_re)), 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, 
                                                                 (0xffffffU 
                                                                  & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_5_port0))))) 
                                    - VL_MULS_QQQ(48,48,48, 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_im)), 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9_wn_im)))) 
                                   >> 0xbU))));
    vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_0_im 
        = ((2U & (IData)(vlTOPp->R2MDC__DOT__cnt)) ? vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_im
            : vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_im);
    vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_0_re 
        = ((2U & (IData)(vlTOPp->R2MDC__DOT__cnt)) ? vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_re
            : vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_re);
    vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_2_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_1_im;
    vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_2_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_1_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_30_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_29_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_30_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_29_re;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_6_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_5_im;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_6_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_5_re;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_14_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_13_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_14_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_13_re;
}

VL_INLINE_OPT void VR2MDC::_sequent__TOP__5(VR2MDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC::_sequent__TOP__5\n"); );
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->R2MDC__DOT___zz___05Fzz_5_port0 = vlTOPp->R2MDC__DOT___zz_5
        [(1U & ((IData)(1U) + (IData)(vlTOPp->R2MDC__DOT__cnt)))];
    vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_0_im;
    vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_0_re;
    vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_1_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_0_im;
    vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_1_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_0_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_29_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_28_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_29_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_28_re;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_5_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_4_im;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_5_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_4_re;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_13_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_12_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_13_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_12_re;
    vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_0_im 
        = (0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                & ((VL_MULS_QQQ(48,48,48, 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_re)), 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8_wn_im))) 
                                    + VL_MULS_QQQ(48,48,48, 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_im)), 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, 
                                                                   (0xffffffU 
                                                                    & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_4_port0)))))) 
                                   >> 0xbU))));
    vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_0_re 
        = (0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                & ((VL_MULS_QQQ(48,48,48, 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_re)), 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, 
                                                                 (0xffffffU 
                                                                  & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_4_port0))))) 
                                    - VL_MULS_QQQ(48,48,48, 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_im)), 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8_wn_im)))) 
                                   >> 0xbU))));
    vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_0_im 
        = ((4U & (IData)(vlTOPp->R2MDC__DOT__cnt)) ? vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_im
            : vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_im);
    vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_0_re 
        = ((4U & (IData)(vlTOPp->R2MDC__DOT__cnt)) ? vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_re
            : vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_re);
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_28_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_27_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_28_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_27_re;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_4_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_3_im;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_4_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_3_re;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_12_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_11_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_12_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_11_re;
    vlTOPp->R2MDC__DOT___zz___05Fzz_4_port0 = vlTOPp->R2MDC__DOT___zz_4
        [(3U & ((IData)(1U) + (IData)(vlTOPp->R2MDC__DOT__cnt)))];
    vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_2_im;
    vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_2_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_27_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_26_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_27_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_26_re;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_3_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_2_im;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_3_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_2_re;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_11_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_10_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_11_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_10_re;
    vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_2_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_1_im;
    vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_2_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_1_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_26_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_25_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_26_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_25_re;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_2_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_1_im;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_2_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_1_re;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_10_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_9_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_10_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_9_re;
    vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_1_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_0_im;
    vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_1_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_0_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_25_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_24_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_25_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_24_re;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_1_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_0_im;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_1_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_0_re;
}

VL_INLINE_OPT void VR2MDC::_sequent__TOP__6(VR2MDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC::_sequent__TOP__6\n"); );
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_9_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_8_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_9_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_8_re;
    vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_0_im 
        = (0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                & ((VL_MULS_QQQ(48,48,48, 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_re)), 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7_wn_im))) 
                                    + VL_MULS_QQQ(48,48,48, 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_im)), 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, 
                                                                   (0xffffffU 
                                                                    & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_3_port0)))))) 
                                   >> 0xbU))));
    vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_0_re 
        = (0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                & ((VL_MULS_QQQ(48,48,48, 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_re)), 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, 
                                                                 (0xffffffU 
                                                                  & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_3_port0))))) 
                                    - VL_MULS_QQQ(48,48,48, 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_im)), 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7_wn_im)))) 
                                   >> 0xbU))));
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_24_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_23_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_24_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_23_re;
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_0_im 
        = ((8U & (IData)(vlTOPp->R2MDC__DOT__cnt)) ? vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_im
            : vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_im);
    vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_0_re 
        = ((8U & (IData)(vlTOPp->R2MDC__DOT__cnt)) ? vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_re
            : vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_re);
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_8_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_7_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_8_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_7_re;
    vlTOPp->R2MDC__DOT___zz___05Fzz_3_port0 = vlTOPp->R2MDC__DOT___zz_3
        [(7U & ((IData)(1U) + (IData)(vlTOPp->R2MDC__DOT__cnt)))];
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_23_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_22_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_23_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_22_re;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_6_im;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_6_re;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_7_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_6_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_7_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_6_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_22_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_21_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_22_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_21_re;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_6_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_5_im;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_6_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_5_re;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_6_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_5_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_6_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_5_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_21_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_20_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_21_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_20_re;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_5_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_4_im;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_5_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_4_re;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_5_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_4_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_5_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_4_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_20_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_19_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_20_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_19_re;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_4_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_3_im;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_4_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_3_re;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_4_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_3_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_4_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_3_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_19_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_18_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_19_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_18_re;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_3_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_2_im;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_3_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_2_re;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_3_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_2_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_3_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_2_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_18_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_17_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_18_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_17_re;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_2_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_1_im;
}

VL_INLINE_OPT void VR2MDC::_sequent__TOP__7(VR2MDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC::_sequent__TOP__7\n"); );
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_2_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_1_re;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_2_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_1_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_2_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_1_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_17_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_16_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_17_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_16_re;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_1_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_0_im;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_1_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_0_re;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_1_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_0_im;
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_1_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_0_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_16_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_15_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_16_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_15_re;
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_0_im 
        = (0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                & ((VL_MULS_QQQ(48,48,48, 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_re)), 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6_wn_im))) 
                                    + VL_MULS_QQQ(48,48,48, 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_im)), 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, 
                                                                   (0xffffffU 
                                                                    & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_2_port0)))))) 
                                   >> 0xbU))));
    vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_0_re 
        = (0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                & ((VL_MULS_QQQ(48,48,48, 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_re)), 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, 
                                                                 (0xffffffU 
                                                                  & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_2_port0))))) 
                                    - VL_MULS_QQQ(48,48,48, 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_im)), 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6_wn_im)))) 
                                   >> 0xbU))));
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_0_im 
        = ((0x10U & (IData)(vlTOPp->R2MDC__DOT__cnt))
            ? vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_im
            : vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_im);
    vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_0_re 
        = ((0x10U & (IData)(vlTOPp->R2MDC__DOT__cnt))
            ? vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_re
            : vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_re);
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_15_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_14_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_15_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_14_re;
    vlTOPp->R2MDC__DOT___zz___05Fzz_2_port0 = vlTOPp->R2MDC__DOT___zz_2
        [(0xfU & ((IData)(1U) + (IData)(vlTOPp->R2MDC__DOT__cnt)))];
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_14_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_14_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_14_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_13_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_14_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_13_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_14_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_13_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_14_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_13_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_13_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_12_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_13_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_12_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_13_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_12_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_13_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_12_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_12_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_11_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_12_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_11_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_12_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_11_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_12_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_11_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_11_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_10_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_11_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_10_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_11_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_10_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_11_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_10_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_10_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_9_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_10_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_9_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_10_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_9_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_10_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_9_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_9_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_8_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_9_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_8_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_9_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_8_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_9_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_8_re;
}

VL_INLINE_OPT void VR2MDC::_sequent__TOP__8(VR2MDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC::_sequent__TOP__8\n"); );
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_8_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_7_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_8_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_7_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_8_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_7_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_8_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_7_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_7_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_6_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_7_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_6_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_7_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_6_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_7_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_6_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_6_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_5_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_6_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_5_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_6_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_5_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_6_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_5_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_5_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_4_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_5_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_4_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_5_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_4_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_5_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_4_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_4_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_3_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_4_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_3_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_4_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_3_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_4_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_3_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_3_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_2_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_3_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_2_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_3_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_2_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_3_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_2_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_2_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_1_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_2_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_1_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_2_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_1_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_2_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_1_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_1_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_0_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_1_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_0_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_1_im 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_0_im;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_1_re 
        = vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_0_re;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_0_im 
        = vlTOPp->raw_data_payload_im;
    vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_0_re 
        = vlTOPp->raw_data_payload_re;
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_0_im 
        = (0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                & ((VL_MULS_QQQ(48,48,48, 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_re)), 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5_wn_im))) 
                                    + VL_MULS_QQQ(48,48,48, 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_im)), 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, 
                                                                   (0xffffffU 
                                                                    & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_1_port0)))))) 
                                   >> 0xbU))));
    vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_0_re 
        = (0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                & ((VL_MULS_QQQ(48,48,48, 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_re)), 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,24, 
                                                                 (0xffffffU 
                                                                  & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_1_port0))))) 
                                    - VL_MULS_QQQ(48,48,48, 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_im)), 
                                                  (VL_ULL(0xffffffffffff) 
                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5_wn_im)))) 
                                   >> 0xbU))));
    vlTOPp->R2MDC__DOT___zz___05Fzz_1_port0 = vlTOPp->R2MDC__DOT___zz_1
        [(0x1fU & ((IData)(1U) + (IData)(vlTOPp->R2MDC__DOT__cnt)))];
}

VL_INLINE_OPT void VR2MDC::_sequent__TOP__9(VR2MDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC::_sequent__TOP__9\n"); );
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vdly__R2MDC__DOT__cnt;
    CData/*4:0*/ __Vdly__R2MDC__DOT__reorder_1__DOT__in_cnt;
    CData/*5:0*/ __Vdly__R2MDC__DOT__reorder_1__DOT__out_cnt;
    // Body
    __Vdly__R2MDC__DOT__reorder_1__DOT__out_cnt = vlTOPp->R2MDC__DOT__reorder_1__DOT__out_cnt;
    __Vdly__R2MDC__DOT__reorder_1__DOT__in_cnt = vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt;
    __Vdly__R2MDC__DOT__cnt = vlTOPp->R2MDC__DOT__cnt;
    if (vlTOPp->reset) {
        __Vdly__R2MDC__DOT__reorder_1__DOT__out_cnt = 0U;
    } else {
        if (vlTOPp->R2MDC__DOT__reorder_1__DOT__sorted_valid_1) {
            __Vdly__R2MDC__DOT__reorder_1__DOT__out_cnt 
                = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__out_cnt)));
        }
    }
    if (vlTOPp->reset) {
        __Vdly__R2MDC__DOT__reorder_1__DOT__in_cnt = 0U;
    } else {
        if ((0x3fU < (IData)(vlTOPp->R2MDC__DOT__cnt))) {
            __Vdly__R2MDC__DOT__reorder_1__DOT__in_cnt 
                = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt)));
        }
    }
    if (vlTOPp->reset) {
        __Vdly__R2MDC__DOT__cnt = 0U;
    } else {
        if (vlTOPp->R2MDC__DOT__when_R2MDC_l20) {
            __Vdly__R2MDC__DOT__cnt = ((0x5fU == (IData)(vlTOPp->R2MDC__DOT__cnt))
                                        ? 0U : (IData)(vlTOPp->R2MDC__DOT___zz_cnt));
        }
    }
    vlTOPp->R2MDC__DOT__reorder_1__DOT__out_cnt = __Vdly__R2MDC__DOT__reorder_1__DOT__out_cnt;
    vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt = __Vdly__R2MDC__DOT__reorder_1__DOT__in_cnt;
    vlTOPp->R2MDC__DOT__cnt = __Vdly__R2MDC__DOT__cnt;
    vlTOPp->result_payload_last = ((0U == (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__out_cnt)) 
                                   & (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__sorted_valid_1_regNext));
    vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt_index 
        = ((0x10U & ((IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt) 
                     << 4U)) | ((8U & ((IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt) 
                                       << 2U)) | ((4U 
                                                   & (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt)) 
                                                  | ((2U 
                                                      & ((IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt) 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & ((IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt) 
                                                           >> 4U))))));
    vlTOPp->R2MDC__DOT__reorder_1__DOT__sorted_valid_1 
        = ((0x1fU == (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt)) 
           | (0U != (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__out_cnt)));
    vlTOPp->R2MDC__DOT___zz_cnt = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlTOPp->R2MDC__DOT__cnt)));
    vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_1 = 0U;
    if ((0x3fU < (IData)(vlTOPp->R2MDC__DOT__cnt))) {
        vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_1 = 1U;
    }
    vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_2 = 0U;
    if ((0x3fU < (IData)(vlTOPp->R2MDC__DOT__cnt))) {
        vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_2 = 1U;
    }
    vlTOPp->raw_data_ready = (0x40U > (IData)(vlTOPp->R2MDC__DOT__cnt));
}

VL_INLINE_OPT void VR2MDC::_combo__TOP__12(VR2MDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC::_combo__TOP__12\n"); );
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->R2MDC__DOT__r2Butterfly_9_wn_im = (0xffffffU 
                                               & ((IData)(vlTOPp->mode)
                                                   ? (IData)(
                                                             (vlTOPp->R2MDC__DOT___zz___05Fzz_5_port0 
                                                              >> 0x18U))
                                                   : 
                                                  VL_NEGATE_I((IData)(
                                                                      (vlTOPp->R2MDC__DOT___zz___05Fzz_5_port0 
                                                                       >> 0x18U)))));
    vlTOPp->R2MDC__DOT__r2Butterfly_8_wn_im = (0xffffffU 
                                               & ((IData)(vlTOPp->mode)
                                                   ? (IData)(
                                                             (vlTOPp->R2MDC__DOT___zz___05Fzz_4_port0 
                                                              >> 0x18U))
                                                   : 
                                                  VL_NEGATE_I((IData)(
                                                                      (vlTOPp->R2MDC__DOT___zz___05Fzz_4_port0 
                                                                       >> 0x18U)))));
    vlTOPp->R2MDC__DOT__r2Butterfly_7_wn_im = (0xffffffU 
                                               & ((IData)(vlTOPp->mode)
                                                   ? (IData)(
                                                             (vlTOPp->R2MDC__DOT___zz___05Fzz_3_port0 
                                                              >> 0x18U))
                                                   : 
                                                  VL_NEGATE_I((IData)(
                                                                      (vlTOPp->R2MDC__DOT___zz___05Fzz_3_port0 
                                                                       >> 0x18U)))));
    vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_im 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_31_im 
                        + vlTOPp->raw_data_payload_im));
    vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_re 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_31_re 
                        + vlTOPp->raw_data_payload_re));
    vlTOPp->R2MDC__DOT__r2Butterfly_6_wn_im = (0xffffffU 
                                               & ((IData)(vlTOPp->mode)
                                                   ? (IData)(
                                                             (vlTOPp->R2MDC__DOT___zz___05Fzz_2_port0 
                                                              >> 0x18U))
                                                   : 
                                                  VL_NEGATE_I((IData)(
                                                                      (vlTOPp->R2MDC__DOT___zz___05Fzz_2_port0 
                                                                       >> 0x18U)))));
    vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_re 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_31_re 
                        - vlTOPp->raw_data_payload_re));
    vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_im 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_31_im 
                        - vlTOPp->raw_data_payload_im));
    vlTOPp->R2MDC__DOT__r2Butterfly_5_wn_im = (0xffffffU 
                                               & ((IData)(vlTOPp->mode)
                                                   ? (IData)(
                                                             (vlTOPp->R2MDC__DOT___zz___05Fzz_1_port0 
                                                              >> 0x18U))
                                                   : 
                                                  VL_NEGATE_I((IData)(
                                                                      (vlTOPp->R2MDC__DOT___zz___05Fzz_1_port0 
                                                                       >> 0x18U)))));
    vlTOPp->R2MDC__DOT__when_R2MDC_l20 = (((IData)(vlTOPp->raw_data_valid) 
                                           & (IData)(vlTOPp->raw_data_ready)) 
                                          | (0x40U 
                                             <= (IData)(vlTOPp->R2MDC__DOT__cnt)));
    vlTOPp->R2MDC__DOT__r2Switch_5_out2_im = ((0x10U 
                                               & (IData)(vlTOPp->R2MDC__DOT__cnt))
                                               ? vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_im
                                               : vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_im);
    vlTOPp->R2MDC__DOT__r2Switch_5_out2_re = ((0x10U 
                                               & (IData)(vlTOPp->R2MDC__DOT__cnt))
                                               ? vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_re
                                               : vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_re);
    vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_im 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_15_im 
                        - vlTOPp->R2MDC__DOT__r2Switch_5_out2_im));
    vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_im 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_15_im 
                        + vlTOPp->R2MDC__DOT__r2Switch_5_out2_im));
    vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_re 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_15_re 
                        - vlTOPp->R2MDC__DOT__r2Switch_5_out2_re));
    vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_re 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_15_re 
                        + vlTOPp->R2MDC__DOT__r2Switch_5_out2_re));
    vlTOPp->R2MDC__DOT__r2Switch_6_out2_im = ((8U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                                               ? vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_im
                                               : vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_im);
    vlTOPp->R2MDC__DOT__r2Switch_6_out2_re = ((8U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                                               ? vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_re
                                               : vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_re);
    vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_im 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_7_im 
                        - vlTOPp->R2MDC__DOT__r2Switch_6_out2_im));
    vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_im 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_7_im 
                        + vlTOPp->R2MDC__DOT__r2Switch_6_out2_im));
    vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_re 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_7_re 
                        - vlTOPp->R2MDC__DOT__r2Switch_6_out2_re));
    vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_re 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_7_re 
                        + vlTOPp->R2MDC__DOT__r2Switch_6_out2_re));
    vlTOPp->R2MDC__DOT__r2Switch_7_out2_im = ((4U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                                               ? vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_im
                                               : vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_im);
    vlTOPp->R2MDC__DOT__r2Switch_7_out2_re = ((4U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                                               ? vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_re
                                               : vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_re);
    vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_im 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_3_im 
                        - vlTOPp->R2MDC__DOT__r2Switch_7_out2_im));
    vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_im 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_3_im 
                        + vlTOPp->R2MDC__DOT__r2Switch_7_out2_im));
    vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_re 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_3_re 
                        - vlTOPp->R2MDC__DOT__r2Switch_7_out2_re));
    vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_re 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_3_re 
                        + vlTOPp->R2MDC__DOT__r2Switch_7_out2_re));
    vlTOPp->R2MDC__DOT__r2Switch_8_out2_im = ((2U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                                               ? vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_im
                                               : vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_im);
    vlTOPp->R2MDC__DOT__r2Switch_8_out2_re = ((2U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                                               ? vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_re
                                               : vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_re);
    vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_im 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_1_im 
                        - vlTOPp->R2MDC__DOT__r2Switch_8_out2_im));
    vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_im 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_1_im 
                        + vlTOPp->R2MDC__DOT__r2Switch_8_out2_im));
    vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_re 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_1_re 
                        - vlTOPp->R2MDC__DOT__r2Switch_8_out2_re));
    vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_re 
        = (0xffffffU & (vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_1_re 
                        + vlTOPp->R2MDC__DOT__r2Switch_8_out2_re));
    vlTOPp->R2MDC__DOT__r2Switch_9_out2_im = ((1U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                                               ? vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_im
                                               : vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_im);
    vlTOPp->R2MDC__DOT__r2Switch_9_out2_re = ((1U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                                               ? vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_re
                                               : vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_re);
    vlTOPp->R2MDC__DOT__out0_buf_6_im = (0xffffffU 
                                         & (vlTOPp->R2MDC__DOT__out1D1_im 
                                            + vlTOPp->R2MDC__DOT__r2Switch_9_out2_im));
    vlTOPp->R2MDC__DOT__out1_buf_6_im = (0xffffffU 
                                         & (vlTOPp->R2MDC__DOT__out1D1_im 
                                            - vlTOPp->R2MDC__DOT__r2Switch_9_out2_im));
    vlTOPp->R2MDC__DOT__out0_buf_6_re = (0xffffffU 
                                         & (vlTOPp->R2MDC__DOT__out1D1_re 
                                            + vlTOPp->R2MDC__DOT__r2Switch_9_out2_re));
    vlTOPp->R2MDC__DOT__out1_buf_6_re = (0xffffffU 
                                         & (vlTOPp->R2MDC__DOT__out1D1_re 
                                            - vlTOPp->R2MDC__DOT__r2Switch_9_out2_re));
}

void VR2MDC::_eval(VR2MDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC::_eval\n"); );
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    }
    vlTOPp->_combo__TOP__12(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VR2MDC::_change_request(VR2MDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC::_change_request\n"); );
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VR2MDC::_change_request_1(VR2MDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC::_change_request_1\n"); );
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VR2MDC::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((mode & 0xfeU))) {
        Verilated::overWidthError("mode");}
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_re & 0xff000000U))) {
        Verilated::overWidthError("raw_data_payload_re");}
    if (VL_UNLIKELY((raw_data_payload_im & 0xff000000U))) {
        Verilated::overWidthError("raw_data_payload_im");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
