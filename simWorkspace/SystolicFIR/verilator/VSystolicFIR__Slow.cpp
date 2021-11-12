// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicFIR.h for the primary calling header

#include "VSystolicFIR.h"
#include "VSystolicFIR__Syms.h"

//==========

VL_CTOR_IMP(VSystolicFIR) {
    VSystolicFIR__Syms* __restrict vlSymsp = __VlSymsp = new VSystolicFIR__Syms(this, name());
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSystolicFIR::__Vconfigure(VSystolicFIR__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VSystolicFIR::~VSystolicFIR() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VSystolicFIR::_settle__TOP__2(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_settle__TOP__2\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filtered_data_valid = vlTOPp->raw_data_valid;
    vlTOPp->filtered_data_payload_cha_i = vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_31;
    vlTOPp->filtered_data_payload_cha_q = vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_31;
}

void VSystolicFIR::_eval_initial(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_eval_initial\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VSystolicFIR::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::final\n"); );
    // Variables
    VSystolicFIR__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSystolicFIR::_eval_settle(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_eval_settle\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VSystolicFIR::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_cha_i = VL_RAND_RESET_I(16);
    raw_data_payload_cha_q = VL_RAND_RESET_I(16);
    filtered_data_valid = VL_RAND_RESET_I(1);
    filtered_data_payload_cha_i = VL_RAND_RESET_I(24);
    filtered_data_payload_cha_q = VL_RAND_RESET_I(24);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_1 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_2 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_3 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_4 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_5 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_6 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_7 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_8 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_9 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_10 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_11 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_12 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_13 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_14 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_15 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_16 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_17 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_18 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_19 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_20 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_21 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_22 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_23 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_24 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_25 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_26 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_27 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_28 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_29 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_30 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_i_31 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_1 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_2 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_3 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_4 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_5 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_6 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_7 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_8 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_9 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_10 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_11 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_12 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_13 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_14 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_15 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_16 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_17 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_18 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_19 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_20 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_21 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_22 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_23 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_24 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_25 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_26 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_27 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_28 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_29 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_30 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT___zz_filtered_data_payload_cha_q_31 = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__shiftRegister_34__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_34__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_35__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_35__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_36__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_36__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_37__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_37__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_38__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_38__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_39__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_39__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_40__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_40__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_41__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_41__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_42__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_42__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_43__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_43__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_44__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_44__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_45__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_45__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_46__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_46__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_47__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_47__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_48__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_48__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_49__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_49__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_50__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_50__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_51__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_51__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_52__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_52__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_53__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_53__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_54__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_54__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_55__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_55__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_56__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_56__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_57__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_57__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_58__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_58__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_59__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_59__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_60__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_60__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_61__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_61__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_62__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_62__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_63__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_63__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_64__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_64__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_65__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_65__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_66__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_66__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_67__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__shiftRegister_67__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vm_traceActivity = 0;
}
