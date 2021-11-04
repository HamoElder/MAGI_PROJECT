// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPhaseRotator.h for the primary calling header

#include "VPhaseRotator.h"
#include "VPhaseRotator__Syms.h"

//==========

VL_CTOR_IMP(VPhaseRotator) {
    VPhaseRotator__Syms* __restrict vlSymsp = __VlSymsp = new VPhaseRotator__Syms(this, name());
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPhaseRotator::__Vconfigure(VPhaseRotator__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPhaseRotator::~VPhaseRotator() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VPhaseRotator::_settle__TOP__6(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_settle__TOP__6\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rotated_data_valid = vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15;
    vlTOPp->rotated_data_payload_cha_i = vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15;
    vlTOPp->rotated_data_payload_cha_q = vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y;
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->rotated_data_ready));
    vlTOPp->PhaseRotator__DOT__phiNext = (0xffffU & 
                                          (VL_LTS_III(1,16,16, 0x64U, 
                                                      (0xffffU 
                                                       & ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                          + (IData)(vlTOPp->phiCorrect))))
                                            ? (((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                - (IData)(0xc9U)) 
                                               + (IData)(vlTOPp->phiCorrect))
                                            : (VL_GTS_III(1,16,16, 0xff9cU, 
                                                          (0xffffU 
                                                           & ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                              + (IData)(vlTOPp->phiCorrect))))
                                                ? ((IData)(0xc9U) 
                                                   + 
                                                   ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                    + (IData)(vlTOPp->phiCorrect)))
                                                : ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                   + (IData)(vlTOPp->phiCorrect)))));
}

void VPhaseRotator::_eval_initial(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_eval_initial\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VPhaseRotator::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::final\n"); );
    // Variables
    VPhaseRotator__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPhaseRotator::_eval_settle(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_eval_settle\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VPhaseRotator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_cha_i = VL_RAND_RESET_I(16);
    raw_data_payload_cha_q = VL_RAND_RESET_I(16);
    rotated_data_valid = VL_RAND_RESET_I(1);
    rotated_data_ready = VL_RAND_RESET_I(1);
    rotated_data_payload_cha_i = VL_RAND_RESET_I(16);
    rotated_data_payload_cha_q = VL_RAND_RESET_I(16);
    phiCorrect = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__phi = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__phiNext = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
