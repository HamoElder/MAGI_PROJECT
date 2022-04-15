// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPreambleDetector.h for the primary calling header

#include "VPreambleDetector.h"
#include "VPreambleDetector__Syms.h"

//==========

VL_CTOR_IMP(VPreambleDetector) {
    VPreambleDetector__Syms* __restrict vlSymsp = __VlSymsp = new VPreambleDetector__Syms(this, name());
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPreambleDetector::__Vconfigure(VPreambleDetector__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPreambleDetector::~VPreambleDetector() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VPreambleDetector::_settle__TOP__2(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_settle__TOP__2\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->raw_data_out_valid = vlTOPp->raw_data_valid;
    vlTOPp->raw_data_out_payload_cha_i = vlTOPp->raw_data_payload_cha_i;
    vlTOPp->raw_data_out_payload_cha_q = vlTOPp->raw_data_payload_cha_q;
    vlTOPp->PreambleDetector__DOT__when_PreambleDetector_l64 
        = (0xffU > (IData)(vlTOPp->PreambleDetector__DOT__plateau_cnt));
    vlTOPp->PreambleDetector__DOT___zz_gate_pkg_det 
        = (0xffffffU & ((((0x800000U & vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i)
                           ? (~ vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i)
                           : vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i) 
                         + (1U & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i 
                                  >> 0x17U))) + (((0x800000U 
                                                   & vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q)
                                                   ? 
                                                  (~ vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q)
                                                   : vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q) 
                                                 + 
                                                 (1U 
                                                  & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q 
                                                     >> 0x17U)))));
    vlTOPp->pkg_detected = (((IData)(vlTOPp->min_plateau) 
                             <= (IData)(vlTOPp->PreambleDetector__DOT__plateau_cnt)) 
                            & (IData)(vlTOPp->PreambleDetector__DOT__gate_pkg_det));
    vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_i 
        = (0xffffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_i 
                        - ((0xf00000U & (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_15 
                                                                 >> 0x13U)))) 
                                         << 0x14U)) 
                           | vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_15)));
    vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_q 
        = (0xffffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_q 
                        - ((0xf00000U & (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_15 
                                                                 >> 0x13U)))) 
                                         << 0x14U)) 
                           | vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_15)));
    vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i_1 
        = (VL_ULL(0xfffffffff) & (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_i 
                                  - (((QData)((IData)(
                                                      (0xfffU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 
                                                                                >> 0x17U))))))) 
                                      << 0x18U) | (QData)((IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16)))));
    vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q_1 
        = (VL_ULL(0xfffffffff) & (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_q 
                                  - (((QData)((IData)(
                                                      (0xfffU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16 
                                                                                >> 0x17U))))))) 
                                      << 0x18U) | (QData)((IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16)))));
    vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT___zz_cnt 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__cnt)));
}

void VPreambleDetector::_initial__TOP__8(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_initial__TOP__8\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*1055:0*/ __Vtemp1[33];
    WData/*1055:0*/ __Vtemp2[33];
    // Body
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f6d656dU;
    __Vtemp1[2U] = 0x5f315f49U;
    __Vtemp1[3U] = 0x61746f72U;
    __Vtemp1[4U] = 0x7272656cU;
    __Vtemp1[5U] = 0x7373436fU;
    __Vtemp1[6U] = 0x5f63726fU;
    __Vtemp1[7U] = 0x6576656cU;
    __Vtemp1[8U] = 0x746f706cU;
    __Vtemp1[9U] = 0x722e765fU;
    __Vtemp1[0xaU] = 0x6563746fU;
    __Vtemp1[0xbU] = 0x65446574U;
    __Vtemp1[0xcU] = 0x616d626cU;
    __Vtemp1[0xdU] = 0x2f507265U;
    __Vtemp1[0xeU] = 0x2f72746cU;
    __Vtemp1[0xfU] = 0x63746f72U;
    __Vtemp1[0x10U] = 0x44657465U;
    __Vtemp1[0x11U] = 0x6d626c65U;
    __Vtemp1[0x12U] = 0x50726561U;
    __Vtemp1[0x13U] = 0x6163652fU;
    __Vtemp1[0x14U] = 0x726b7370U;
    __Vtemp1[0x15U] = 0x696d576fU;
    __Vtemp1[0x16U] = 0x2f2e2f73U;
    __Vtemp1[0x17U] = 0x4a454354U;
    __Vtemp1[0x18U] = 0x5f50524fU;
    __Vtemp1[0x19U] = 0x4d414749U;
    __Vtemp1[0x1aU] = 0x6374732fU;
    __Vtemp1[0x1bU] = 0x726f6a65U;
    __Vtemp1[0x1cU] = 0x64656150U;
    __Vtemp1[0x1dU] = 0x776e2f49U;
    __Vtemp1[0x1eU] = 0x7373646fU;
    __Vtemp1[0x1fU] = 0x652f6d69U;
    __Vtemp1[0x20U] = 0x2f686f6dU;
    VL_READMEM_N(false, 12, 16, 0, VL_CVT_PACK_STR_NW(33, __Vtemp1)
                 , vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem
                 , 0, ~VL_ULL(0));
    __Vtemp2[0U] = 0x2e62696eU;
    __Vtemp2[1U] = 0x5f6d656dU;
    __Vtemp2[2U] = 0x5f315f51U;
    __Vtemp2[3U] = 0x61746f72U;
    __Vtemp2[4U] = 0x7272656cU;
    __Vtemp2[5U] = 0x7373436fU;
    __Vtemp2[6U] = 0x5f63726fU;
    __Vtemp2[7U] = 0x6576656cU;
    __Vtemp2[8U] = 0x746f706cU;
    __Vtemp2[9U] = 0x722e765fU;
    __Vtemp2[0xaU] = 0x6563746fU;
    __Vtemp2[0xbU] = 0x65446574U;
    __Vtemp2[0xcU] = 0x616d626cU;
    __Vtemp2[0xdU] = 0x2f507265U;
    __Vtemp2[0xeU] = 0x2f72746cU;
    __Vtemp2[0xfU] = 0x63746f72U;
    __Vtemp2[0x10U] = 0x44657465U;
    __Vtemp2[0x11U] = 0x6d626c65U;
    __Vtemp2[0x12U] = 0x50726561U;
    __Vtemp2[0x13U] = 0x6163652fU;
    __Vtemp2[0x14U] = 0x726b7370U;
    __Vtemp2[0x15U] = 0x696d576fU;
    __Vtemp2[0x16U] = 0x2f2e2f73U;
    __Vtemp2[0x17U] = 0x4a454354U;
    __Vtemp2[0x18U] = 0x5f50524fU;
    __Vtemp2[0x19U] = 0x4d414749U;
    __Vtemp2[0x1aU] = 0x6374732fU;
    __Vtemp2[0x1bU] = 0x726f6a65U;
    __Vtemp2[0x1cU] = 0x64656150U;
    __Vtemp2[0x1dU] = 0x776e2f49U;
    __Vtemp2[0x1eU] = 0x7373646fU;
    __Vtemp2[0x1fU] = 0x652f6d69U;
    __Vtemp2[0x20U] = 0x2f686f6dU;
    VL_READMEM_N(false, 12, 16, 0, VL_CVT_PACK_STR_NW(33, __Vtemp2)
                 , vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem
                 , 0, ~VL_ULL(0));
}

void VPreambleDetector::_eval_initial(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_eval_initial\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = (1U & (~ (IData)(vlTOPp->clk)));
    vlTOPp->__Vclklast__TOP__reset = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->_initial__TOP__8(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VPreambleDetector::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::final\n"); );
    // Variables
    VPreambleDetector__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPreambleDetector::_eval_settle(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_eval_settle\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VPreambleDetector::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_ctor_var_reset\n"); );
    // Body
    min_plateau = VL_RAND_RESET_I(8);
    pkg_detected = VL_RAND_RESET_I(1);
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_cha_i = VL_RAND_RESET_I(12);
    raw_data_payload_cha_q = VL_RAND_RESET_I(12);
    raw_data_out_valid = VL_RAND_RESET_I(1);
    raw_data_out_payload_cha_i = VL_RAND_RESET_I(12);
    raw_data_out_payload_cha_q = VL_RAND_RESET_I(12);
    clk = 0;
    reset = 0;
    PreambleDetector__DOT__gate_pkg_det = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__prod_avg_mag = VL_RAND_RESET_Q(36);
    PreambleDetector__DOT__plateau_cnt = VL_RAND_RESET_I(8);
    PreambleDetector__DOT___zz_gate_pkg_det = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__when_PreambleDetector_l64 = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_i = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_q = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__power_val_i = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__power_val_q = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1 = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_0 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_1 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_2 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_3 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_4 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_5 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_6 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_7 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_8 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_9 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_10 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_11 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_12 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_13 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_14 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_15 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_0 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_1 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_2 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_3 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_4 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_5 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_6 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_7 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_8 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_9 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_10 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_11 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_12 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_13 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_14 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_15 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__crossCorrelator_1__DOT___zz_I_mem_port0 = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__crossCorrelator_1__DOT___zz_Q_mem_port0 = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__crossCorrelator_1__DOT___zz_cnt = VL_RAND_RESET_I(5);
    PreambleDetector__DOT__crossCorrelator_1__DOT__cnt = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[__Vi0] = VL_RAND_RESET_I(12);
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[__Vi0] = VL_RAND_RESET_I(12);
    }}
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i_1 = VL_RAND_RESET_Q(36);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q_1 = VL_RAND_RESET_Q(36);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_Q(36);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_Q(36);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_result_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16 = VL_RAND_RESET_I(24);
    __Vdly__PreambleDetector__DOT__crossCorrelator_1__DOT__cnt = VL_RAND_RESET_I(5);
    __Vm_traceActivity = 0;
}
