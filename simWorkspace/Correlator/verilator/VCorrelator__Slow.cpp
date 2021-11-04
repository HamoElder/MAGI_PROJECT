// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCorrelator.h for the primary calling header

#include "VCorrelator.h"
#include "VCorrelator__Syms.h"

//==========

VL_CTOR_IMP(VCorrelator) {
    VCorrelator__Syms* __restrict vlSymsp = __VlSymsp = new VCorrelator__Syms(this, name());
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCorrelator::__Vconfigure(VCorrelator__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCorrelator::~VCorrelator() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VCorrelator::_settle__TOP__2(VCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCorrelator::_settle__TOP__2\n"); );
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->corr_result_payload_cha_i = vlTOPp->Correlator__DOT__corr_val_i;
    vlTOPp->corr_result_payload_cha_q = vlTOPp->Correlator__DOT__corr_val_q;
    vlTOPp->corr_result_valid = vlTOPp->Correlator__DOT__corr_result_valid_1;
    vlTOPp->Correlator__DOT___zz_corr_val_i = (vlTOPp->Correlator__DOT__corr_val_i 
                                               - vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_3);
    vlTOPp->Correlator__DOT___zz_corr_val_q = (vlTOPp->Correlator__DOT__corr_val_q 
                                               - vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_3);
    vlTOPp->Correlator__DOT__k1 = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_1_payload_cha_i)), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & ((IData)(vlTOPp->raw_data_0_payload_cha_i) 
                                                                + (IData)(vlTOPp->raw_data_0_payload_cha_q)))));
}

void VCorrelator::_eval_initial(VCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCorrelator::_eval_initial\n"); );
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VCorrelator::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCorrelator::final\n"); );
    // Variables
    VCorrelator__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCorrelator::_eval_settle(VCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCorrelator::_eval_settle\n"); );
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VCorrelator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCorrelator::_ctor_var_reset\n"); );
    // Body
    raw_data_0_valid = VL_RAND_RESET_I(1);
    raw_data_0_payload_cha_i = VL_RAND_RESET_I(16);
    raw_data_0_payload_cha_q = VL_RAND_RESET_I(16);
    raw_data_1_valid = VL_RAND_RESET_I(1);
    raw_data_1_payload_cha_i = VL_RAND_RESET_I(16);
    raw_data_1_payload_cha_q = VL_RAND_RESET_I(16);
    corr_result_valid = VL_RAND_RESET_I(1);
    corr_result_payload_cha_i = VL_RAND_RESET_I(32);
    corr_result_payload_cha_q = VL_RAND_RESET_I(32);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    Correlator__DOT___zz_corr_val_i = VL_RAND_RESET_I(32);
    Correlator__DOT___zz_corr_val_q = VL_RAND_RESET_I(32);
    Correlator__DOT__corr_val_i = VL_RAND_RESET_I(32);
    Correlator__DOT__corr_val_q = VL_RAND_RESET_I(32);
    Correlator__DOT__k1 = VL_RAND_RESET_I(32);
    Correlator__DOT__mul_i = VL_RAND_RESET_I(32);
    Correlator__DOT__mul_q = VL_RAND_RESET_I(32);
    Correlator__DOT__mul_data_valid = VL_RAND_RESET_I(1);
    Correlator__DOT__corr_result_valid_1 = VL_RAND_RESET_I(1);
    Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    __Vm_traceActivity = 0;
}
