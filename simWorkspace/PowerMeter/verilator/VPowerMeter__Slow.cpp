// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPowerMeter.h for the primary calling header

#include "VPowerMeter.h"
#include "VPowerMeter__Syms.h"

//==========

VL_CTOR_IMP(VPowerMeter) {
    VPowerMeter__Syms* __restrict vlSymsp = __VlSymsp = new VPowerMeter__Syms(this, name());
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPowerMeter::__Vconfigure(VPowerMeter__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPowerMeter::~VPowerMeter() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VPowerMeter::_settle__TOP__6(VPowerMeter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_settle__TOP__6\n"); );
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->power_result_payload_cha_i = vlTOPp->PowerMeter__DOT__power_val_cha_i;
    vlTOPp->power_result_payload_cha_q = vlTOPp->PowerMeter__DOT__power_val_cha_q;
    vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2 
        = (((QData)((IData)((1U & (vlTOPp->PowerMeter__DOT__sq_i_regNext 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->PowerMeter__DOT__sq_i_regNext)));
    vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5 
        = (((QData)((IData)((1U & (vlTOPp->PowerMeter__DOT__sq_q_regNext 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->PowerMeter__DOT__sq_q_regNext)));
    vlTOPp->power_result_valid = vlTOPp->PowerMeter__DOT__power_result_valid_1;
    vlTOPp->PowerMeter__DOT___zz_power_val_i = (0xffffU 
                                                & ((IData)(vlTOPp->PowerMeter__DOT__power_val_i) 
                                                   - 
                                                   ((0xf800U 
                                                     & (VL_NEGATE_I((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_31) 
                                                                                >> 0xaU)))) 
                                                        << 0xbU)) 
                                                    | (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_31))));
    vlTOPp->PowerMeter__DOT___zz_power_val_q = (0xffffU 
                                                & ((IData)(vlTOPp->PowerMeter__DOT__power_val_q) 
                                                   - 
                                                   ((0xf800U 
                                                     & (VL_NEGATE_I((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_31) 
                                                                                >> 0xaU)))) 
                                                        << 0xbU)) 
                                                    | (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_31))));
    vlTOPp->PowerMeter__DOT___zz_power_cal_i = (0xfffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (VL_ULL(1) 
                                                               & ((VL_ULL(0x1fff00000) 
                                                                   + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                                  >> 0x20U))))
                                                    ? 
                                                   ((0U 
                                                     != 
                                                     (0x1fffffU 
                                                      & ((IData)(0x100000U) 
                                                         + (IData)(vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(
                                                               (VL_ULL(0xfff) 
                                                                & ((VL_ULL(0x1fff00000) 
                                                                    + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                                   >> 0x15U))))
                                                     : (IData)(
                                                               (VL_ULL(0xfff) 
                                                                & ((VL_ULL(0x1fff00000) 
                                                                    + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                                   >> 0x15U))))
                                                    : (IData)(
                                                              (VL_ULL(0xfff) 
                                                               & ((VL_ULL(0x100000) 
                                                                   + 
                                                                   (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->PowerMeter__DOT__sq_i_regNext 
                                                                                >> 0x1fU)))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlTOPp->PowerMeter__DOT__sq_i_regNext)))) 
                                                                  >> 0x15U)))));
    vlTOPp->PowerMeter__DOT___zz_power_cal_q = (0xfffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (VL_ULL(1) 
                                                               & ((VL_ULL(0x1fff00000) 
                                                                   + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                                  >> 0x20U))))
                                                    ? 
                                                   ((0U 
                                                     != 
                                                     (0x1fffffU 
                                                      & ((IData)(0x100000U) 
                                                         + (IData)(vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(
                                                               (VL_ULL(0xfff) 
                                                                & ((VL_ULL(0x1fff00000) 
                                                                    + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                                   >> 0x15U))))
                                                     : (IData)(
                                                               (VL_ULL(0xfff) 
                                                                & ((VL_ULL(0x1fff00000) 
                                                                    + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                                   >> 0x15U))))
                                                    : (IData)(
                                                              (VL_ULL(0xfff) 
                                                               & ((VL_ULL(0x100000) 
                                                                   + 
                                                                   (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->PowerMeter__DOT__sq_q_regNext 
                                                                                >> 0x1fU)))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlTOPp->PowerMeter__DOT__sq_q_regNext)))) 
                                                                  >> 0x15U)))));
    vlTOPp->PowerMeter__DOT__power_cal_i = (0x7ffU 
                                            & ((0x800U 
                                                & (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i))
                                                ? (
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i) 
                                                        >> 0xaU)))
                                                    ? 0x400U
                                                    : (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i))
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i))
                                                    ? 0x3ffU
                                                    : (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i))));
    vlTOPp->PowerMeter__DOT__power_cal_q = (0x7ffU 
                                            & ((0x800U 
                                                & (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q))
                                                ? (
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q) 
                                                        >> 0xaU)))
                                                    ? 0x400U
                                                    : (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q))
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q))
                                                    ? 0x3ffU
                                                    : (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q))));
}

void VPowerMeter::_eval_initial(VPowerMeter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_eval_initial\n"); );
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VPowerMeter::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::final\n"); );
    // Variables
    VPowerMeter__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPowerMeter::_eval_settle(VPowerMeter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_eval_settle\n"); );
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VPowerMeter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_cha_i = VL_RAND_RESET_I(16);
    raw_data_payload_cha_q = VL_RAND_RESET_I(16);
    power_result_valid = VL_RAND_RESET_I(1);
    power_result_payload_cha_i = VL_RAND_RESET_I(16);
    power_result_payload_cha_q = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2 = VL_RAND_RESET_Q(33);
    PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5 = VL_RAND_RESET_Q(33);
    PowerMeter__DOT___zz_power_val_i = VL_RAND_RESET_I(16);
    PowerMeter__DOT___zz_power_val_q = VL_RAND_RESET_I(16);
    PowerMeter__DOT__power_val_cha_i = VL_RAND_RESET_I(16);
    PowerMeter__DOT__power_val_cha_q = VL_RAND_RESET_I(16);
    PowerMeter__DOT__power_val_i = VL_RAND_RESET_I(16);
    PowerMeter__DOT__power_val_q = VL_RAND_RESET_I(16);
    PowerMeter__DOT__sq_i_regNext = VL_RAND_RESET_I(32);
    PowerMeter__DOT___zz_power_cal_i = VL_RAND_RESET_I(12);
    PowerMeter__DOT__power_cal_i = VL_RAND_RESET_I(11);
    PowerMeter__DOT__sq_q_regNext = VL_RAND_RESET_I(32);
    PowerMeter__DOT___zz_power_cal_q = VL_RAND_RESET_I(12);
    PowerMeter__DOT__power_cal_q = VL_RAND_RESET_I(11);
    PowerMeter__DOT__power_cal_valid = VL_RAND_RESET_I(1);
    PowerMeter__DOT__power_result_valid_1 = VL_RAND_RESET_I(1);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_0 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_1 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_2 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_3 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_4 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_5 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_6 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_7 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_8 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_9 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_10 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_11 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_12 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_13 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_14 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_15 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_16 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_17 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_18 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_19 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_20 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_21 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_22 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_23 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_24 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_25 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_26 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_27 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_28 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_29 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_30 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_31 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_0 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_1 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_2 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_3 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_4 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_5 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_6 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_7 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_8 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_9 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_10 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_11 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_12 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_13 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_14 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_15 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_16 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_17 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_18 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_19 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_20 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_21 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_22 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_23 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_24 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_25 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_26 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_27 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_28 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_29 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_30 = VL_RAND_RESET_I(11);
    PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_31 = VL_RAND_RESET_I(11);
    __Vm_traceActivity = 0;
}
