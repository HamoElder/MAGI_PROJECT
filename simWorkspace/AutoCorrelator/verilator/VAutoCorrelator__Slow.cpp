// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAutoCorrelator.h for the primary calling header

#include "VAutoCorrelator.h"
#include "VAutoCorrelator__Syms.h"

//==========

VL_CTOR_IMP(VAutoCorrelator) {
    VAutoCorrelator__Syms* __restrict vlSymsp = __VlSymsp = new VAutoCorrelator__Syms(this, name());
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAutoCorrelator::__Vconfigure(VAutoCorrelator__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAutoCorrelator::~VAutoCorrelator() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VAutoCorrelator::_settle__TOP__7(VAutoCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::_settle__TOP__7\n"); );
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->corr_result_valid = vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_result_valid_1;
    vlTOPp->corr_result_payload_cha_i = vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_i;
    vlTOPp->corr_result_payload_cha_q = vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_q;
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT___zz_corr_val_i 
        = (vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_i 
           - vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31);
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT___zz_corr_val_q 
        = (vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_q 
           - vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_31);
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__k1 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & ((IData)(vlTOPp->raw_data_payload_cha_i) 
                                               + (IData)(vlTOPp->raw_data_payload_cha_q)))));
}

void VAutoCorrelator::_eval_initial(VAutoCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::_eval_initial\n"); );
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VAutoCorrelator::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::final\n"); );
    // Variables
    VAutoCorrelator__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAutoCorrelator::_eval_settle(VAutoCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::_eval_settle\n"); );
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAutoCorrelator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_cha_i = VL_RAND_RESET_I(16);
    raw_data_payload_cha_q = VL_RAND_RESET_I(16);
    corr_result_valid = VL_RAND_RESET_I(1);
    corr_result_payload_cha_i = VL_RAND_RESET_I(32);
    corr_result_payload_cha_q = VL_RAND_RESET_I(32);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q = VL_RAND_RESET_I(16);
    AutoCorrelator__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__k1 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__mul_i = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__mul_q = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__mul_data_valid = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__corr_core__DOT__corr_result_valid_1 = VL_RAND_RESET_I(1);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_16 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_17 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_18 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_19 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_20 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_21 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_22 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_23 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_24 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_25 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_26 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_27 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_28 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_29 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_30 = VL_RAND_RESET_I(32);
    AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_31 = VL_RAND_RESET_I(32);
    __Vm_traceActivity = 0;
}
