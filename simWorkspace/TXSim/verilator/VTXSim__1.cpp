// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTXSim.h for the primary calling header

#include "VTXSim.h"
#include "VTXSim__Syms.h"

VL_INLINE_OPT void VTXSim::_sequent__TOP__17(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__17\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_126__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_126__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_26)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_125__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_93__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_93__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_26)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_92__DOT__previous_adder_data));
        }
    }
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_valueNext 
        = (((0x85U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 2U)) | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 1U)));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 1U)) | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 1U)));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_20 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_20 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_19;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_125__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_125__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_25)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_124__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_92__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_92__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_25)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_91__DOT__previous_adder_data));
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7 
        = ((0x80U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment)) 
           | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                       >> 1U)));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfeU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (1U & ((((((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 1U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                  >> 2U)) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                             >> 4U)) 
                     ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 5U)) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                   >> 7U))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfdU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (2U & (((((0xfffffffeU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1)) 
                       ^ (0x7ffffffeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 1U))) ^ 
                      (0x1ffffffeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                      >> 3U))) ^ (0xffffffeU 
                                                  & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                                     >> 4U))) 
                    ^ (0x3fffffeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 6U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfbU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (4U & (((((0xfffffffcU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                       << 1U)) ^ (0xfffffffcU 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2))) 
                      ^ (0x3ffffffcU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                        >> 2U))) ^ 
                     (0x1ffffffcU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                     >> 3U))) ^ (0x7fffffcU 
                                                 & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                    >> 5U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xf7U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (8U & (((((0xfffffff8U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                       << 2U)) ^ (0xfffffff8U 
                                                  & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                     << 1U))) 
                      ^ (0x7ffffff8U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                        >> 1U))) ^ 
                     (0x3ffffff8U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                     >> 2U))) ^ (0xffffff8U 
                                                 & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                    >> 4U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xefU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x10U & (((((0xfffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 3U)) ^ 
                          (0xfffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 2U))) 
                         ^ (0xfffffff0U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4))) 
                        ^ (0x7ffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          >> 1U))) 
                       ^ (0x1ffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 3U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xdfU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x20U & (((((0xffffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 4U)) ^ 
                          (0xffffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 3U))) 
                         ^ (0xffffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                           << 1U))) 
                        ^ (0xffffffe0U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5))) 
                       ^ (0x3fffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 2U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xbfU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x40U & (((((0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 5U)) ^ 
                          (0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 4U))) 
                         ^ (0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                           << 2U))) 
                        ^ (0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 1U))) 
                       ^ (0x7fffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                         >> 1U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x80U & (((((0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 6U)) ^ 
                          (0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 5U))) 
                         ^ (0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                           << 3U))) 
                        ^ (0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 2U))) 
                       ^ (0xffffff80U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfeU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (1U & ((((((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 1U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                  >> 4U)) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                             >> 5U)) 
                     ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 6U)) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                   >> 7U))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfdU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (2U & (((((0xfffffffeU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1)) 
                       ^ (0x1ffffffeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 3U))) ^ 
                      (0xffffffeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 4U))) ^ (0x7fffffeU 
                                                 & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                                    >> 5U))) 
                    ^ (0x3fffffeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 6U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfbU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (4U & (((((0xfffffffcU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                       << 1U)) ^ (0x3ffffffcU 
                                                  & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                     >> 2U))) 
                      ^ (0x1ffffffcU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                        >> 3U))) ^ 
                     (0xffffffcU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                    >> 4U))) ^ (0x7fffffcU 
                                                & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                   >> 5U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xf7U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (8U & (((((0xfffffff8U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                       << 2U)) ^ (0x7ffffff8U 
                                                  & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                     >> 1U))) 
                      ^ (0x3ffffff8U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                        >> 2U))) ^ 
                     (0x1ffffff8U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                     >> 3U))) ^ (0xffffff8U 
                                                 & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                    >> 4U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xefU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x10U & (((((0xfffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 3U)) ^ 
                          (0xfffffff0U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4))) 
                         ^ (0x7ffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                           >> 1U))) 
                        ^ (0x3ffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          >> 2U))) 
                       ^ (0x1ffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 3U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xdfU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x20U & (((((0xffffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 4U)) ^ 
                          (0xffffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 1U))) 
                         ^ (0xffffffe0U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5))) 
                        ^ (0x7fffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          >> 1U))) 
                       ^ (0x3fffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 2U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xbfU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x40U & (((((0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 5U)) ^ 
                          (0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 2U))) 
                         ^ (0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                           << 1U))) 
                        ^ (0xffffffc0U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6))) 
                       ^ (0x7fffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                         >> 1U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x80U & (((((0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 6U)) ^ 
                          (0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 3U))) 
                         ^ (0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                           << 2U))) 
                        ^ (0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 1U))) 
                       ^ (0xffffff80U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7)))));
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__18(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__18\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_19 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_19 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_18;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_124__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_124__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_24)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_123__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_91__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_91__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_24)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_90__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_18 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_18 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_17;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_123__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_123__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_23)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_122__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_90__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_90__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_23)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_89__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_17 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_17 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_16;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_122__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_122__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_22)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_121__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_89__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_89__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_22)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_88__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_16 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_16 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_15;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_121__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_121__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_21)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_120__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_88__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_88__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_21)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_87__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_15 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_15 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_14;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_120__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_120__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_20)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_119__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_87__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_87__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_20)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_86__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_14 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_14 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_13;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_119__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_119__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_19)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_118__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_86__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_86__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_19)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_85__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_13 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_13 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_12;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_118__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_118__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_18)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_117__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_85__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_85__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_18)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_84__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_12 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_12 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_11;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_117__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_117__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_17)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_116__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_84__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_84__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_17)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_83__DOT__previous_adder_data));
        }
    }
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__19(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__19\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_11 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_11 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_10;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_116__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_116__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_16)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_115__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_83__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_83__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_16)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_82__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_10 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_10 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_9;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_115__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_115__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_15)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_114__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_82__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_82__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_15)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_81__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_9 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_9 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_8;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_114__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_114__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_113__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_81__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_81__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_80__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_8 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_8 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_7;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_113__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_113__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_112__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_80__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_80__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_79__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_7 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_7 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_6;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_112__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_112__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_111__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_79__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_79__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_78__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_6 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_6 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_5;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_111__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_111__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_110__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_78__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_78__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_77__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_5 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_5 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_110__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_110__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_109__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_77__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_77__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_76__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_4 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_4 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_109__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_109__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_108__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_76__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_76__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_75__DOT__previous_adder_data));
        }
    }
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__20(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__20\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_3 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_3 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_108__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_108__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_107__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_75__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_75__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_74__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_2 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_2 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_107__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_107__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_106__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_74__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_74__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_73__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_1 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_1 
                = vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_payload_last;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_106__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_106__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_105__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_73__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_73__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_72__DOT__previous_adder_data));
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_payload_last 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__raw_last) 
           & (7U == (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt)));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_105__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_105__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_104__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_72__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_72__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_71__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_104__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_104__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_103__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_71__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_71__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_70__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_103__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_103__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_102__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_70__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_70__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_69__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_102__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_102__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_101__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_69__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_69__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_68__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_101__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_101__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_100__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_68__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_68__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_67__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_100__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_100__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_99__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_67__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_67__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_66__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_99__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_99__DOT__previous_adder_data = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_66__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_66__DOT__previous_adder_data = 0U;
        }
    }
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__21(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__21\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_valid) 
           | (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__29(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__29\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port0 
        = vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram
        [vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_valueNext];
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0 
        = ((0x3e7U >= (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram
           [vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext]
            : (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT____Vxrand1));
    vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1 
        = vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf0;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_31 = 1U;
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->TXSim__DOT__clkCrossing_9__DOT__area_clkO_buf1 
        = vlTOPp->TXSim__DOT__clkCrossing_9__DOT__area_clkO_buf0;
    vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkO_buf1 
        = vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkO_buf0;
    vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_logic_ram_port0 
        = vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram
        [vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_valueNext];
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_30 = 0x7eU;
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkO_buf1 
        = vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkO_buf0;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_29 = 0x7cU;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_28 = 0x79U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_27 = 0x77U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_26 = 0x77U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_25 = 0x79U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_24 = 0x7dU;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_23 = 2U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_22 = 0xaU;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_21 = 0x13U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_20 = 0x1cU;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_19 = 0x24U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_18 = 0x2bU;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_17 = 0x30U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_16 = 0x31U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_15 = 0x30U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14 = 0x2bU;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13 = 0x24U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12 = 0x1cU;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11 = 0x13U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10 = 0xaU;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9 = 2U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8 = 0x7dU;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7 = 0x79U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6 = 0x77U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5 = 0x77U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4 = 0x79U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3 = 0x7cU;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2 = 0x7eU;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1 = 1U;
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0 = 3U;
    if (vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TXSim__DOT__streamFifo_13__DOT__logic_ram__v0) {
        vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TXSim__DOT__streamFifo_13__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TXSim__DOT__streamFifo_13__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0) {
        vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TXSim__DOT__streamFifo_12__DOT__logic_ram__v0) {
        vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TXSim__DOT__streamFifo_12__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TXSim__DOT__streamFifo_12__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__30(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__30\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf0 
        = vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkI_reg;
    vlTOPp->TXSim__DOT__clkCrossing_9__DOT__area_clkO_buf0 
        = vlTOPp->TXSim__DOT__clkCrossing_9__DOT__area_clkI_reg;
    vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkO_buf0 
        = vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkI_reg;
    vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkO_buf0 
        = vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkI_reg;
    vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkI_reg 
        = vlTOPp->TXSim__DOT__mod_rtl_bridge_select_driver;
    vlTOPp->TXSim__DOT__clkCrossing_9__DOT__area_clkI_reg 
        = vlTOPp->TXSim__DOT__data_div_bridge_cnt_step_driver;
    vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkI_reg 
        = vlTOPp->TXSim__DOT__data_div_bridge_cnt_limit_driver;
    vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkI_reg 
        = vlTOPp->TXSim__DOT__data_div_bridge_enable_driver;
}

VL_INLINE_OPT void VTXSim::_combo__TOP__31(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_combo__TOP__31\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__writeJoinEvent_valid = ((IData)(vlTOPp->axil4Ctrl_awvalid) 
                                                & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_tvalid) & (0U == (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt)));
    vlTOPp->TXSim__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->TXSim__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->TXSim__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid) 
           & (IData)(vlTOPp->result_data_ready));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__32(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__32\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext 
        = (((0x3e7U == (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x3ffU & ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value) 
                              + (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding)
            ? 0U : ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt))
                     ? (0xfffU & (vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port0 
                                  >> 1U)) : 0U));
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding)
            ? 0U : ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt))
                     ? (0xfffU & (vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port0 
                                  >> 0xdU)) : 0U));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_fragment 
        = (0xffU & ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0) 
                    >> 1U));
    if (vlTOPp->TXSim__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_fragment = 0U;
    }
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_last 
        = (1U & (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0));
    if ((7U != (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter))) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_last = 0U;
    }
    if (vlTOPp->TXSim__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_last 
            = (7U == (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter));
    }
    vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port_1 
        = ((0x1ffe000U & (((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                            ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                    ? 0x7ff000U : 0x801000U)
                                : 0U) : ((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                          ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                              ? vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                              : 0U)
                                          : ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                  ? 0xc35U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                   ? 0xebcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                                              : 0U))) 
                          << 0xdU)) | ((0x1ffeU & (
                                                   ((0U 
                                                     == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                                     ? 
                                                    ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                      ? 
                                                     (((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                                        ? 0x7ff000U
                                                        : 0x801000U) 
                                                      >> 0xcU)
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                                      ? 
                                                     ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                       ? 
                                                      (vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                                       >> 0xcU)
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                            >> 2U)))
                                                        ? 0xc35U
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                             >> 2U)))
                                                         ? 0xebcU
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                              >> 2U)))
                                                          ? 0x3caU
                                                          : 0x143U)))
                                                       : 0U))) 
                                                   << 1U)) 
                                       | ((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                           ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid) 
                                              & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last))
                                           : ((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                               ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid) 
                                                  & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last))
                                               : ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid) 
                                                  & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last))))));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushing 
        = (((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
             ? (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
             : ((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                 ? (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                 : (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid))) 
           & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_full)));
    vlTOPp->TXSim__DOT__mod_data_div__DOT___zz_base_cnt 
        = (0xfU & ((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_cnt) 
                   + (IData)(vlTOPp->TXSim__DOT__clkCrossing_9__DOT__area_clkO_buf1)));
    vlTOPp->TXSim__DOT__mod_data_div__DOT__when_dataDivDynamic_l52 
        = ((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_cnt) 
           == (IData)(vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkO_buf1));
    vlTOPp->TXSim__DOT__mod_data_div_unit_data_payload_last 
        = ((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_last) 
           & ((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_cnt) 
              == (IData)(vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkO_buf1)));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 1U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__mod_data_div__DOT__base_ready 
        = (((IData)(vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkO_buf1) 
            == (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_cnt)) 
           & (IData)(vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkO_buf1));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_0_payload_last 
        = ((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->TXSim__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_1_payload_last 
        = ((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->TXSim__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_2_payload_last 
        = ((2U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->TXSim__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 2U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__mod_data_div__DOT__base_data_fire 
        = (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid) 
            & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                  >> 6U))) & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_ready));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_ready) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 6U))));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__mod_rtl_bridge_select_driver = 0U;
    } else {
        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((0x14U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((0x18U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if (vlTOPp->TXSim__DOT__writeJoinEvent_fire) {
                            vlTOPp->TXSim__DOT__mod_rtl_bridge_select_driver 
                                = (3U & vlTOPp->axil4Ctrl_wdata);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__data_div_bridge_cnt_step_driver = 0U;
    } else {
        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((0x14U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if (vlTOPp->TXSim__DOT__writeJoinEvent_fire) {
                    vlTOPp->TXSim__DOT__data_div_bridge_cnt_step_driver 
                        = (0xfU & vlTOPp->axil4Ctrl_wdata);
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__data_div_bridge_cnt_limit_driver = 0U;
    } else {
        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((0x14U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((0x18U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if (vlTOPp->TXSim__DOT__writeJoinEvent_fire) {
                        vlTOPp->TXSim__DOT__data_div_bridge_cnt_limit_driver 
                            = (0xfU & vlTOPp->axil4Ctrl_wdata);
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__data_div_bridge_enable_driver = 0U;
    } else {
        if ((0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if (vlTOPp->TXSim__DOT__writeJoinEvent_fire) {
                vlTOPp->TXSim__DOT__data_div_bridge_enable_driver 
                    = (1U & vlTOPp->axil4Ctrl_wdata);
            }
        }
    }
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__33(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__33\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 3U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 4U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->TXSim__DOT__readRsp_data = ((0xffffff80U 
                                             & vlTOPp->TXSim__DOT__readRsp_data) 
                                            | (IData)(vlTOPp->TXSim__DOT__pkg_gen_bridge_slices_limit_driver));
    } else {
        if ((4U == (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->TXSim__DOT__readRsp_data = ((0xffffff80U 
                                                 & vlTOPp->TXSim__DOT__readRsp_data) 
                                                | (IData)(vlTOPp->TXSim__DOT__clkCrossing_7__DOT__area_clkO_buf1));
        } else {
            if ((0x10U == (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr))) {
                vlTOPp->TXSim__DOT__readRsp_data = 
                    ((0xfffffffeU & vlTOPp->TXSim__DOT__readRsp_data) 
                     | (IData)(vlTOPp->TXSim__DOT__data_div_bridge_enable_driver));
            } else {
                if ((0x14U == (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr))) {
                    vlTOPp->TXSim__DOT__readRsp_data 
                        = ((0xfffffff0U & vlTOPp->TXSim__DOT__readRsp_data) 
                           | (IData)(vlTOPp->TXSim__DOT__data_div_bridge_cnt_step_driver));
                } else {
                    if ((0x18U == (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr))) {
                        vlTOPp->TXSim__DOT__readRsp_data 
                            = ((0xfffffff0U & vlTOPp->TXSim__DOT__readRsp_data) 
                               | (IData)(vlTOPp->TXSim__DOT__data_div_bridge_cnt_limit_driver));
                    } else {
                        if ((0x20U == (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr))) {
                            vlTOPp->TXSim__DOT__readRsp_data 
                                = ((0xfffffffcU & vlTOPp->TXSim__DOT__readRsp_data) 
                                   | (IData)(vlTOPp->TXSim__DOT__mod_rtl_bridge_select_driver));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 5U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->TXSim__DOT__readRsp_data;
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 6U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 7U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 8U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_resultNext_2 
        = ((0x100000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                             >> 0xbU)) << 0x14U)) | 
           ((0x80000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                             >> 0xcU)) << 0x13U)) | 
            ((0x40000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                              >> 0xdU)) << 0x12U)) 
             | ((0x20000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                 >> 0xeU)) << 0x11U)) 
                | ((0x10000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                    >> 0xfU)) << 0x10U)) 
                   | ((0x8000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                      >> 0x10U)) << 0xfU)) 
                      | ((0x4000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                         >> 0x11U)) 
                                     << 0xeU)) | ((0x2000U 
                                                   & ((~ 
                                                       (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                        >> 0x12U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                           >> 0x13U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1fU)))))))))))))))))))))));
}

VL_INLINE_OPT void VTXSim::_combo__TOP__34(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_combo__TOP__34\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__writeJoinEvent_fire = ((IData)(vlTOPp->TXSim__DOT__writeJoinEvent_valid) 
                                               & (IData)(vlTOPp->TXSim__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_awready = vlTOPp->TXSim__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->TXSim__DOT__writeJoinEvent_fire;
}

void VTXSim::_eval(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_eval\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->_sequent__TOP__18(vlSymsp);
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->_sequent__TOP__20(vlSymsp);
        vlTOPp->_sequent__TOP__21(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__29(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__30(vlSymsp);
    }
    vlTOPp->_combo__TOP__31(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__32(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__33(vlSymsp);
    }
    vlTOPp->_combo__TOP__34(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VTXSim::_change_request(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_change_request\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTXSim::_change_request_1(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_change_request_1\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTXSim::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((axil4Ctrl_awvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_awvalid");}
    if (VL_UNLIKELY((axil4Ctrl_awprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_awprot");}
    if (VL_UNLIKELY((axil4Ctrl_wvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_wvalid");}
    if (VL_UNLIKELY((axil4Ctrl_wstrb & 0xf0U))) {
        Verilated::overWidthError("axil4Ctrl_wstrb");}
    if (VL_UNLIKELY((axil4Ctrl_bready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_bready");}
    if (VL_UNLIKELY((axil4Ctrl_arvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_arvalid");}
    if (VL_UNLIKELY((axil4Ctrl_arprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_arprot");}
    if (VL_UNLIKELY((axil4Ctrl_rready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_rready");}
    if (VL_UNLIKELY((raw_data_tvalid & 0xfeU))) {
        Verilated::overWidthError("raw_data_tvalid");}
    if (VL_UNLIKELY((raw_data_tstrb & 0xf0U))) {
        Verilated::overWidthError("raw_data_tstrb");}
    if (VL_UNLIKELY((raw_data_tkeep & 0xf0U))) {
        Verilated::overWidthError("raw_data_tkeep");}
    if (VL_UNLIKELY((raw_data_tlast & 0xfeU))) {
        Verilated::overWidthError("raw_data_tlast");}
    if (VL_UNLIKELY((result_data_ready & 0xfeU))) {
        Verilated::overWidthError("result_data_ready");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
