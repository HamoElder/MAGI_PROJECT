// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCrossCorrelator.h for the primary calling header

#include "VCrossCorrelator.h"
#include "VCrossCorrelator__Syms.h"

//==========

VL_CTOR_IMP(VCrossCorrelator) {
    VCrossCorrelator__Syms* __restrict vlSymsp = __VlSymsp = new VCrossCorrelator__Syms(this, name());
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCrossCorrelator::__Vconfigure(VCrossCorrelator__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCrossCorrelator::~VCrossCorrelator() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VCrossCorrelator::_settle__TOP__9(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_settle__TOP__9\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->corr_result_valid = vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_result_valid_1;
    vlTOPp->corr_result_payload_cha_i = vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_i;
    vlTOPp->corr_result_payload_cha_q = vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_q;
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT___zz_corr_val_i 
        = (vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_i 
           - vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_64);
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT___zz_corr_val_q 
        = (vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_q 
           - vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_64);
    vlTOPp->CrossCorrelator__DOT___zz_cnt = (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlTOPp->CrossCorrelator__DOT__cnt)));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__k1 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->CrossCorrelator__DOT___zz_I_mem_port0)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & ((IData)(vlTOPp->raw_data_payload_cha_i) 
                                               + (IData)(vlTOPp->raw_data_payload_cha_q)))));
}

void VCrossCorrelator::_initial__TOP__10(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_initial__TOP__10\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*287:0*/ __Vtemp1[9];
    WData/*287:0*/ __Vtemp2[9];
    // Body
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f6d656dU;
    __Vtemp1[2U] = 0x656c5f49U;
    __Vtemp1[3U] = 0x706c6576U;
    __Vtemp1[4U] = 0x765f746fU;
    __Vtemp1[5U] = 0x746f722eU;
    __Vtemp1[6U] = 0x72656c61U;
    __Vtemp1[7U] = 0x73436f72U;
    __Vtemp1[8U] = 0x43726f73U;
    VL_READMEM_N(false, 16, 64, 0, VL_CVT_PACK_STR_NW(9, __Vtemp1)
                 , vlTOPp->CrossCorrelator__DOT__I_mem
                 , 0, ~VL_ULL(0));
    __Vtemp2[0U] = 0x2e62696eU;
    __Vtemp2[1U] = 0x5f6d656dU;
    __Vtemp2[2U] = 0x656c5f51U;
    __Vtemp2[3U] = 0x706c6576U;
    __Vtemp2[4U] = 0x765f746fU;
    __Vtemp2[5U] = 0x746f722eU;
    __Vtemp2[6U] = 0x72656c61U;
    __Vtemp2[7U] = 0x73436f72U;
    __Vtemp2[8U] = 0x43726f73U;
    VL_READMEM_N(false, 16, 64, 0, VL_CVT_PACK_STR_NW(9, __Vtemp2)
                 , vlTOPp->CrossCorrelator__DOT__Q_mem
                 , 0, ~VL_ULL(0));
}

void VCrossCorrelator::_eval_initial(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_eval_initial\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__10(vlSymsp);
}

void VCrossCorrelator::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::final\n"); );
    // Variables
    VCrossCorrelator__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCrossCorrelator::_eval_settle(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_eval_settle\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VCrossCorrelator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_cha_i = VL_RAND_RESET_I(16);
    raw_data_payload_cha_q = VL_RAND_RESET_I(16);
    corr_result_valid = VL_RAND_RESET_I(1);
    corr_result_payload_cha_i = VL_RAND_RESET_I(32);
    corr_result_payload_cha_q = VL_RAND_RESET_I(32);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    CrossCorrelator__DOT___zz_I_mem_port0 = VL_RAND_RESET_I(16);
    CrossCorrelator__DOT___zz_Q_mem_port0 = VL_RAND_RESET_I(16);
    CrossCorrelator__DOT___zz_cnt = VL_RAND_RESET_I(7);
    CrossCorrelator__DOT__cnt = VL_RAND_RESET_I(7);
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            CrossCorrelator__DOT__I_mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            CrossCorrelator__DOT__Q_mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    CrossCorrelator__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__k1 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__mul_i = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__mul_q = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__mul_data_valid = VL_RAND_RESET_I(1);
    CrossCorrelator__DOT__corr_core__DOT__corr_result_valid_1 = VL_RAND_RESET_I(1);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_16 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_17 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_18 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_19 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_20 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_21 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_22 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_23 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_24 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_25 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_26 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_27 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_28 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_29 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_30 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_31 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_32 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_33 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_34 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_35 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_36 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_37 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_38 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_39 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_40 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_41 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_42 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_43 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_44 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_45 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_46 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_47 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_48 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_49 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_50 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_51 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_52 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_53 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_54 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_55 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_56 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_57 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_58 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_59 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_60 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_61 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_62 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_63 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_64 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63 = VL_RAND_RESET_I(32);
    CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_64 = VL_RAND_RESET_I(32);
    __Vdly__CrossCorrelator__DOT__cnt = VL_RAND_RESET_I(7);
    __Vm_traceActivity = 0;
}
