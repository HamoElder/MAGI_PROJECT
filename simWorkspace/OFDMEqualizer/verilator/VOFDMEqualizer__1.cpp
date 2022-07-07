// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOFDMEqualizer.h for the primary calling header

#include "VOFDMEqualizer.h"
#include "VOFDMEqualizer__Syms.h"

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__20(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__20\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))));
    }
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_5 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_4;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_4 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_3;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_4 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_3;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65 = 0x100U;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65 = 0x100U;
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))));
    }
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_4 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_3;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_3 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_2;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_3 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_2;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64 = 0x200U;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64 = 0x200U;
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))));
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__21(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__21\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_3 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_2;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_2 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_1;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_2 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_1;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63 = 0x400U;
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63 = 0x400U;
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1;
    }
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))));
    }
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_2 
        = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_1;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_1 
        = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_1 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2 
        = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1;
    if (vlTOPp->raw_data_valid) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46 
            = (1U & (~ (IData)(vlTOPp->OFDMEqualizer__DOT__train_en)));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62 = 0x800U;
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62 = 0x800U;
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61))));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1 
            = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x))));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
                                     >> 0xfU)));
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1 
            = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x;
    }
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17 
            = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75)
                           ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
                              + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x))
                           : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
                              - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x))));
    }
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_1 
        = vlTOPp->raw_data_payload_last;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign 
        = (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_q) 
                 >> 0xfU));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign 
        = (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_i) 
                 >> 0xfU));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1 
        = vlTOPp->OFDMEqualizer__DOT__train_en;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61 = 0x1000U;
    if (vlTOPp->raw_data_valid) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31 
            = ((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
                ? 0U : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_scale_1));
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__22(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__22\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61 = 0x1000U;
    if (vlTOPp->raw_data_valid) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31 
            = ((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
                ? 0U : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_scale));
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
                                     >> 0xfU)));
    if (vlTOPp->raw_data_valid) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x 
            = (0xffffU & (((0x8000U & (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
                            ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
                            : (IData)(vlTOPp->raw_data_payload_fragment_cha_q)) 
                          + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_q) 
                                   >> 0xfU))));
    }
    if (vlTOPp->raw_data_valid) {
        vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16 
            = ((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
                ? (IData)(vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1)
                : 0U);
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
                                     >> 0xfU)));
    if (vlTOPp->raw_data_valid) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x 
            = (0xffffU & (((0x8000U & (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
                            ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
                            : (IData)(vlTOPp->raw_data_payload_fragment_cha_i)) 
                          + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_i) 
                                   >> 0xfU))));
    }
    if (vlTOPp->raw_data_valid) {
        vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16 
            = ((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
                ? (IData)(vlTOPp->OFDMEqualizer__DOT___zz_ref_data)
                : 0U);
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
                                     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75 
        = (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46)
                  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
                        >> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
                                     >> 0xfU)));
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__24(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__24\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdly__OFDMEqualizer__DOT__cnt;
    CData/*5:0*/ __Vdly__OFDMEqualizer__DOT__train_cnt;
    // Body
    __Vdly__OFDMEqualizer__DOT__train_cnt = vlTOPp->OFDMEqualizer__DOT__train_cnt;
    __Vdly__OFDMEqualizer__DOT__cnt = vlTOPp->OFDMEqualizer__DOT__cnt;
    if (vlTOPp->reset) {
        vlTOPp->OFDMEqualizer__DOT__raw_data_ready_1 = 1U;
    } else {
        if (((IData)(vlTOPp->raw_data_payload_last) 
             & ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready)))) {
            vlTOPp->OFDMEqualizer__DOT__raw_data_ready_1 = 0U;
        } else {
            if (((IData)(vlTOPp->equalized_data_payload_last) 
                 & (IData)(vlTOPp->equalized_data_valid))) {
                vlTOPp->OFDMEqualizer__DOT__raw_data_ready_1 = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__OFDMEqualizer__DOT__train_cnt = 0U;
    } else {
        if (vlTOPp->equalized_data_payload_last) {
            __Vdly__OFDMEqualizer__DOT__train_cnt = 0U;
        } else {
            if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
                __Vdly__OFDMEqualizer__DOT__train_cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->OFDMEqualizer__DOT__train_en = 1U;
    } else {
        if (vlTOPp->equalized_data_payload_last) {
            vlTOPp->OFDMEqualizer__DOT__train_en = 1U;
        } else {
            if ((0x3fU == (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
                vlTOPp->OFDMEqualizer__DOT__train_en = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->OFDMEqualizer__DOT__train_finished = 0U;
    } else {
        if (vlTOPp->equalized_data_payload_last) {
            vlTOPp->OFDMEqualizer__DOT__train_finished = 0U;
        } else {
            if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
                if ((0x3fU == (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt))) {
                    vlTOPp->OFDMEqualizer__DOT__train_finished = 1U;
                }
            }
        }
    }
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14));
    if (vlTOPp->reset) {
        __Vdly__OFDMEqualizer__DOT__cnt = 0U;
    } else {
        if (vlTOPp->raw_data_payload_last) {
            __Vdly__OFDMEqualizer__DOT__cnt = 0U;
        } else {
            if (((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready))) {
                __Vdly__OFDMEqualizer__DOT__cnt = (
                                                   (0x3fU 
                                                    == (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 0U
                                                    : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_cnt));
            }
        }
    }
    vlTOPp->OFDMEqualizer__DOT__train_cnt = __Vdly__OFDMEqualizer__DOT__train_cnt;
    vlTOPp->OFDMEqualizer__DOT__cnt = __Vdly__OFDMEqualizer__DOT__cnt;
    vlTOPp->raw_data_ready = vlTOPp->OFDMEqualizer__DOT__raw_data_ready_1;
    vlTOPp->equalized_data_payload_fragment_cha_i = 
        ((IData)(vlTOPp->OFDMEqualizer__DOT__train_finished)
          ? (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload)
          : 0U);
    vlTOPp->equalized_data_payload_fragment_cha_q = 
        ((IData)(vlTOPp->OFDMEqualizer__DOT__train_finished)
          ? (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload)
          : 0U);
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13));
    vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69 
        = (((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15) 
            & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15)) 
           & (~ (IData)(vlTOPp->OFDMEqualizer__DOT__train_finished)));
    vlTOPp->equalized_data_valid = ((IData)(vlTOPp->OFDMEqualizer__DOT__train_finished) 
                                    & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15) 
                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13));
    vlTOPp->OFDMEqualizer__DOT___zz_cnt = (0x3fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->OFDMEqualizer__DOT__cnt)));
    vlTOPp->OFDMEqualizer__DOT___zz_scale = ((0x20U 
                                              & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                              ? ((0x10U 
                                                  & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_63)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_62))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_61)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_60)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_59)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_58))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_57)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_56))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_55)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_54))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_53)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_52)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_51)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_50))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_49)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_48)))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_47)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_46))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_45)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_44)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_43)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_42))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_41)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_40))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_39)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_38))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_37)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_36)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_35)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_34))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_33)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_32))))))
                                              : ((0x10U 
                                                  & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_31)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_30))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_29)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_28)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_27)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_26))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_25)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_24))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_23)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_22))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_21)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_20)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_19)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_18))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_17)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_16)))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_15)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_14))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_13)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_12)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_11)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_10))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_9)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_8))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_7)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_6))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_5)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_4)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_3)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_1)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_0)))))));
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__25(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__25\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 = ((0x20U 
                                                & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                ? (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_63)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_62))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_61)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_60)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_59)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_58))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_57)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_56))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_55)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_54))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_53)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_52)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_51)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_50))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_49)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_48)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_47)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_46))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_45)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_44)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_43)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_42))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_41)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_40))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_39)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_38))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_37)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_36)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_35)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_34))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_33)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_32))))))
                                                : (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_31)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_30))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_29)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_28)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_27)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_26))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_25)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_24))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_23)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_22))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_21)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_20)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_19)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_18))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_17)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_16)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_15)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_14))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_13)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_12)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_11)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_10))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_9)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_8))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_7)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_6))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_5)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_4)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_3)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_2))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_1)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_0)))))));
    vlTOPp->OFDMEqualizer__DOT___zz_ref_data = ((0x20U 
                                                 & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_63)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_62))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_61)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_60)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_59)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_58))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_57)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_56))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_55)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_54))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_53)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_52)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_51)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_50))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_49)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_48)))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_47)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_46))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_45)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_44)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_43)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_42))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_41)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_40))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_39)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_38))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_37)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_36)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_35)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_34))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_33)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_32))))))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_31)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_30))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_29)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_28)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_27)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_26))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_25)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_24))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_23)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_22))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_21)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_20)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_19)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_18))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_17)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_16)))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_15)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_14))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_13)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_12)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_11)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_10))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_9)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_8))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_7)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_6))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_5)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_4)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_3)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_1)
                                                      : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_0)))))));
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__26(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__26\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 = ((0x20U 
                                                   & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_63)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_62))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_61)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_60)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_59)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_58))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_57)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_56))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_55)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_54))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_53)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_52)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_51)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_50))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_49)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_48)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_47)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_46))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_45)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_44)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_43)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_42))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_41)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_40))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_39)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_38))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_37)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_36)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_35)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_34))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_33)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_32))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_31)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_30))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_29)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_28)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_27)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_26))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_25)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_24))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_23)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_22))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_21)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_20)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_19)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_18))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_17)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_16)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_15)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_14))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_13)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_12)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_11)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_10))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_9)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_8))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_7)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_6))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_5)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_4)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_3)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_2))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
                                                        ? (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_1)
                                                        : (IData)(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_0)))))));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8));
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__27(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__27\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_valid));
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__31(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_sequent__TOP__31\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->equalized_data_payload_last = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_16;
}

void VOFDMEqualizer::_eval(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_eval\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->_sequent__TOP__18(vlSymsp);
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->_sequent__TOP__20(vlSymsp);
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlTOPp->_sequent__TOP__22(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__24(vlSymsp);
        vlTOPp->_sequent__TOP__25(vlSymsp);
        vlTOPp->_sequent__TOP__26(vlSymsp);
        vlTOPp->_sequent__TOP__27(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__31(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VOFDMEqualizer::_change_request(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_change_request\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VOFDMEqualizer::_change_request_1(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_change_request_1\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VOFDMEqualizer::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOFDMEqualizer::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_last & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_last");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
