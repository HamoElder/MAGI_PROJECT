// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCFOEstimator.h for the primary calling header

#include "VCFOEstimator.h"
#include "VCFOEstimator__Syms.h"

//==========
CData/*1:0*/ VCFOEstimator::__Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[64];

VL_CTOR_IMP(VCFOEstimator) {
    VCFOEstimator__Syms* __restrict vlSymsp = __VlSymsp = new VCFOEstimator__Syms(this, name());
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCFOEstimator::__Vconfigure(VCFOEstimator__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCFOEstimator::~VCFOEstimator() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VCFOEstimator::_initial__TOP__8(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_initial__TOP__8\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*383:0*/ __Vtemp2[12];
    // Body
    __Vtemp2[0U] = 0x2e62696eU;
    __Vtemp2[1U] = 0x7a7a5f31U;
    __Vtemp2[2U] = 0x72655f5fU;
    __Vtemp2[3U] = 0x635f636fU;
    __Vtemp2[4U] = 0x6f726469U;
    __Vtemp2[5U] = 0x656c5f63U;
    __Vtemp2[6U] = 0x706c6576U;
    __Vtemp2[7U] = 0x765f746fU;
    __Vtemp2[8U] = 0x746f722eU;
    __Vtemp2[9U] = 0x74696d61U;
    __Vtemp2[0xaU] = 0x464f4573U;
    __Vtemp2[0xbU] = 0x43U;
    VL_READMEM_N(false, 16, 16, 0, VL_CVT_PACK_STR_NW(12, __Vtemp2)
                 , vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_1
                 , 0, ~VL_ULL(0));
}

void VCFOEstimator::_settle__TOP__9(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_settle__TOP__9\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT___zz_impluse_cnt = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->CFOEstimator__DOT__impluse_cnt)));
    vlTOPp->CFOEstimator__DOT__cordic_core_result_valid 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid;
    vlTOPp->delta_phi_valid = ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid) 
                               & (0x10U == (IData)(vlTOPp->CFOEstimator__DOT__impluse_cnt)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
        = (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
           - vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
        = (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
           - vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15);
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5 
        = (((QData)((IData)((1U & (VL_MULS_III(32,32,32, (IData)(2U), 
                                               VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z))) 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(VL_MULS_III(32,32,32, (IData)(2U), 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z))))));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_3 
        = (0xffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3) 
                      - (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_1_port0)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_3_1 
        = (0xffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3) 
                      + (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_1_port0)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1), (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_regNext)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1) 
           & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_raw_data_ready));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
        = VL_GTS_III(1,16,16, 0U, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2), (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_regNext)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_2 = 0U;
    if ((1U != (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
        if ((2U != (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
            if ((3U != (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3))) {
                vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_2 = 1U;
            }
        }
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & ((IData)(vlTOPp->rotated_data_payload_cha_i) 
                                               + (IData)(vlTOPp->rotated_data_payload_cha_q)))));
    vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1 
        = (0x1ffffU & ((1U & (IData)((VL_ULL(1) & (
                                                   (VL_ULL(0x1ffff8000) 
                                                    + vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5) 
                                                   >> 0x20U))))
                        ? ((0U != (0xffffU & ((IData)(0x8000U) 
                                              + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5))))
                            ? ((IData)(1U) + (IData)(
                                                     (VL_ULL(0x1ffff) 
                                                      & ((VL_ULL(0x1ffff8000) 
                                                          + vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5) 
                                                         >> 0x10U))))
                            : (IData)((VL_ULL(0x1ffff) 
                                       & ((VL_ULL(0x1ffff8000) 
                                           + vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5) 
                                          >> 0x10U))))
                        : (IData)((VL_ULL(0x1ffff) 
                                   & ((VL_ULL(0x8000) 
                                       + (((QData)((IData)(
                                                           (1U 
                                                            & (VL_MULS_III(32,32,32, (IData)(2U), 
                                                                           VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z))) 
                                                               >> 0x1fU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            VL_MULS_III(32,32,32, (IData)(2U), 
                                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z))))))) 
                                      >> 0x10U)))));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_2 
        = (0xffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2) 
                      + (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_2_1 
        = (0xffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2) 
                      - (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_1 
        = (0xffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1) 
                      - (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_1_1 
        = (0xffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1) 
                      + (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6)));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_2) 
                             << 5U) | (((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid) 
                                        << 4U) | ((
                                                   (0xfU 
                                                    <= (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x)) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT__raw_data_fire) 
                                                      << 2U) 
                                                     | (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_3)))));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_4 
        = vlTOPp->__Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4
        [vlTOPp->__Vtableidx1];
    vlTOPp->delta_phi_payload = (0xffffU & VL_NEGATE_I(
                                                       ((0x10000U 
                                                         & vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1)
                                                         ? 
                                                        ((3U 
                                                          != 
                                                          (3U 
                                                           & (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1 
                                                              >> 0xfU)))
                                                          ? 0x8000U
                                                          : vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1)
                                                         : 
                                                        ((0x8000U 
                                                          & vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1)
                                                          ? 0x7fffU
                                                          : vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1))));
}

void VCFOEstimator::_eval_initial(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_eval_initial\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__8(vlSymsp);
}

void VCFOEstimator::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::final\n"); );
    // Variables
    VCFOEstimator__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCFOEstimator::_eval_settle(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_eval_settle\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VCFOEstimator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_ctor_var_reset\n"); );
    // Body
    rotated_data_valid = VL_RAND_RESET_I(1);
    rotated_data_payload_cha_i = VL_RAND_RESET_I(16);
    rotated_data_payload_cha_q = VL_RAND_RESET_I(16);
    delta_phi_valid = VL_RAND_RESET_I(1);
    delta_phi_payload = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core_result_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5 = VL_RAND_RESET_Q(33);
    CFOEstimator__DOT___zz_impluse_cnt = VL_RAND_RESET_I(5);
    CFOEstimator__DOT__impluse_cnt = VL_RAND_RESET_I(5);
    CFOEstimator__DOT___zz_delta_phi_payload_1 = VL_RAND_RESET_I(17);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_1_port0 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_1 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_1_1 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_2 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_2_1 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_3 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz___05Fzz_result_payload_x_3_1 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(5);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_regNext = VL_RAND_RESET_I(5);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_raw_data_ready = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_2 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_3 = VL_RAND_RESET_I(2);
    CFOEstimator__DOT__cordic_core__DOT___zz_4 = VL_RAND_RESET_I(2);
    CFOEstimator__DOT__cordic_core__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            CFOEstimator__DOT__cordic_core__DOT___zz_1[__Vi0] = VL_RAND_RESET_I(16);
    }}
    __Vtableidx1 = 0;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[0] = 0U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[1] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[2] = 2U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[3] = 3U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[4] = 0U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[5] = 2U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[6] = 2U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[7] = 3U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[8] = 0U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[9] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[10] = 3U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[11] = 3U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[12] = 0U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[13] = 2U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[14] = 3U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[15] = 3U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[16] = 0U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[17] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[18] = 2U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[19] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[20] = 0U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[21] = 2U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[22] = 2U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[23] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[24] = 0U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[25] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[26] = 3U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[27] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[28] = 0U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[29] = 2U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[30] = 3U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[31] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[32] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[33] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[34] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[35] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[36] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[37] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[38] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[39] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[40] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[41] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[42] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[43] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[44] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[45] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[46] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[47] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[48] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[49] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[50] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[51] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[52] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[53] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[54] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[55] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[56] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[57] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[58] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[59] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[60] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[61] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[62] = 1U;
    __Vtable1_CFOEstimator__DOT__cordic_core__DOT___zz_4[63] = 1U;
    __Vm_traceActivity = 0;
}
