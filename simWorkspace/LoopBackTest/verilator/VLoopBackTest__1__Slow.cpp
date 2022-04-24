// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

void VLoopBackTest::_settle__TOP__48(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__48\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__emitCrc) 
           | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_raw_data_valid));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid 
        = (1U & ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))
                  ? (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid))
                  : (1U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready 
        = ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))
            ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid)
            : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status)) 
               & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid) 
                  & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_ready))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
        if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_valid 
                = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid) 
                   & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid));
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_raw_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__fill)));
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_valid = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_raw_data_valid) 
           | (0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 5U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3 
        = ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 4U)) | (0x7fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                         >> 1U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2));
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_valueNext 
        = (((0x80U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_valueNext 
        = (0x3ffU & ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_value) 
                     + (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__when_PhyTx_l72 
        = ((7U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter)) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_valid) 
              & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_valid) 
           | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__last_padding));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 6U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4 
        = ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 3U)) | (0x7fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                         >> 1U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_valueNext 
        = (((0x80U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 7U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5 
        = ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 2U)) | (0x7fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 1U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
}

void VLoopBackTest::_settle__TOP__49(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__49\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 8U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6 
        = ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 1U)) | (0x7fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 1U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_resultNext_2 
        = ((0x100000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                             >> 0xbU)) << 0x14U)) | 
           ((0x80000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                             >> 0xcU)) << 0x13U)) | 
            ((0x40000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                              >> 0xdU)) << 0x12U)) 
             | ((0x20000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                 >> 0xeU)) << 0x11U)) 
                | ((0x10000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                    >> 0xfU)) << 0x10U)) 
                   | ((0x8000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                      >> 0x10U)) << 0xfU)) 
                      | ((0x4000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                         >> 0x11U)) 
                                     << 0xeU)) | ((0x2000U 
                                                   & ((~ 
                                                       (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                        >> 0x12U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                           >> 0x13U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1fU)))))))))))))))))))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7 
        = ((0x80U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment)) 
           | (0x7fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                       >> 1U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfeU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (1U & ((((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 1U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                  >> 2U)) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                             >> 4U)) 
                     ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 5U)) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                   >> 7U))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfdU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (2U & (((((0xfffffffeU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1)) 
                       ^ (0x7ffffffeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 1U))) ^ 
                      (0x1ffffffeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                      >> 3U))) ^ (0xffffffeU 
                                                  & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                                     >> 4U))) 
                    ^ (0x3fffffeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 6U)))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfbU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (4U & (((((0xfffffffcU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                       << 1U)) ^ (0xfffffffcU 
                                                  & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2))) 
                      ^ (0x3ffffffcU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                        >> 2U))) ^ 
                     (0x1ffffffcU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                     >> 3U))) ^ (0x7fffffcU 
                                                 & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                    >> 5U)))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xf7U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (8U & (((((0xfffffff8U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                       << 2U)) ^ (0xfffffff8U 
                                                  & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                     << 1U))) 
                      ^ (0x7ffffff8U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                        >> 1U))) ^ 
                     (0x3ffffff8U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                     >> 2U))) ^ (0xffffff8U 
                                                 & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                    >> 4U)))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xefU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x10U & (((((0xfffffff0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 3U)) ^ 
                          (0xfffffff0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 2U))) 
                         ^ (0xfffffff0U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4))) 
                        ^ (0x7ffffff0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          >> 1U))) 
                       ^ (0x1ffffff0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 3U)))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xdfU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x20U & (((((0xffffffe0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 4U)) ^ 
                          (0xffffffe0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 3U))) 
                         ^ (0xffffffe0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                           << 1U))) 
                        ^ (0xffffffe0U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5))) 
                       ^ (0x3fffffe0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 2U)))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xbfU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x40U & (((((0xffffffc0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 5U)) ^ 
                          (0xffffffc0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 4U))) 
                         ^ (0xffffffc0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                           << 2U))) 
                        ^ (0xffffffc0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 1U))) 
                       ^ (0x7fffffc0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                         >> 1U)))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0x7fU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x80U & (((((0xffffff80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 6U)) ^ 
                          (0xffffff80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 5U))) 
                         ^ (0xffffff80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                           << 3U))) 
                        ^ (0xffffff80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 2U))) 
                       ^ (0xffffff80U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7)))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfeU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (1U & ((((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 1U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                  >> 4U)) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                             >> 5U)) 
                     ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 6U)) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                   >> 7U))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfdU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (2U & (((((0xfffffffeU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1)) 
                       ^ (0x1ffffffeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 3U))) ^ 
                      (0xffffffeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 4U))) ^ (0x7fffffeU 
                                                 & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                                    >> 5U))) 
                    ^ (0x3fffffeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 6U)))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfbU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (4U & (((((0xfffffffcU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                       << 1U)) ^ (0x3ffffffcU 
                                                  & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                     >> 2U))) 
                      ^ (0x1ffffffcU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                        >> 3U))) ^ 
                     (0xffffffcU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                    >> 4U))) ^ (0x7fffffcU 
                                                & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                   >> 5U)))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xf7U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (8U & (((((0xfffffff8U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                       << 2U)) ^ (0x7ffffff8U 
                                                  & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                     >> 1U))) 
                      ^ (0x3ffffff8U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                        >> 2U))) ^ 
                     (0x1ffffff8U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                     >> 3U))) ^ (0xffffff8U 
                                                 & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                    >> 4U)))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xefU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x10U & (((((0xfffffff0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 3U)) ^ 
                          (0xfffffff0U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4))) 
                         ^ (0x7ffffff0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                           >> 1U))) 
                        ^ (0x3ffffff0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          >> 2U))) 
                       ^ (0x1ffffff0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 3U)))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xdfU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x20U & (((((0xffffffe0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 4U)) ^ 
                          (0xffffffe0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 1U))) 
                         ^ (0xffffffe0U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5))) 
                        ^ (0x7fffffe0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          >> 1U))) 
                       ^ (0x3fffffe0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 2U)))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xbfU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x40U & (((((0xffffffc0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 5U)) ^ 
                          (0xffffffc0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 2U))) 
                         ^ (0xffffffc0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                           << 1U))) 
                        ^ (0xffffffc0U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6))) 
                       ^ (0x7fffffc0U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                         >> 1U)))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0x7fU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x80U & (((((0xffffff80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 6U)) ^ 
                          (0xffffff80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 3U))) 
                         ^ (0xffffff80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                           << 2U))) 
                        ^ (0xffffff80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 1U))) 
                       ^ (0xffffff80U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7)))));
}

void VLoopBackTest::_settle__TOP__50(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__50\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                            >> 3U)));
}

void VLoopBackTest::_eval_initial(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_eval_initial\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->__Vclklast__TOP__clk = (1U & (~ (IData)(vlTOPp->clk)));
    vlTOPp->__Vclklast__TOP__reset = (1U & (~ (IData)(vlTOPp->reset)));
}

void VLoopBackTest::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::final\n"); );
    // Variables
    VLoopBackTest__Syms* __restrict vlSymsp = this->__VlSymsp;
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLoopBackTest::_eval_settle(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_eval_settle\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__42(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__43(vlSymsp);
    vlTOPp->_settle__TOP__44(vlSymsp);
    vlTOPp->_settle__TOP__45(vlSymsp);
    vlTOPp->_settle__TOP__46(vlSymsp);
    vlTOPp->_settle__TOP__47(vlSymsp);
    vlTOPp->_settle__TOP__48(vlSymsp);
    vlTOPp->_settle__TOP__49(vlSymsp);
    vlTOPp->_settle__TOP__50(vlSymsp);
}

void VLoopBackTest::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_ctor_var_reset\n"); );
    // Body
    axil4Ctrl_awvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_awready = VL_RAND_RESET_I(1);
    axil4Ctrl_awaddr = VL_RAND_RESET_I(8);
    axil4Ctrl_awprot = VL_RAND_RESET_I(3);
    axil4Ctrl_wvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_wready = VL_RAND_RESET_I(1);
    axil4Ctrl_wdata = VL_RAND_RESET_I(32);
    axil4Ctrl_wstrb = VL_RAND_RESET_I(4);
    axil4Ctrl_bvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_bready = VL_RAND_RESET_I(1);
    axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    axil4Ctrl_arvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_arready = VL_RAND_RESET_I(1);
    axil4Ctrl_araddr = VL_RAND_RESET_I(8);
    axil4Ctrl_arprot = VL_RAND_RESET_I(3);
    axil4Ctrl_rvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_rready = VL_RAND_RESET_I(1);
    axil4Ctrl_rdata = VL_RAND_RESET_I(32);
    axil4Ctrl_rresp = VL_RAND_RESET_I(2);
    trans_data_tvalid = VL_RAND_RESET_I(1);
    trans_data_tready = VL_RAND_RESET_I(1);
    trans_data_tdata = VL_RAND_RESET_I(32);
    trans_data_tstrb = VL_RAND_RESET_I(4);
    trans_data_tkeep = VL_RAND_RESET_I(4);
    trans_data_tlast = VL_RAND_RESET_I(1);
    result_data_valid = VL_RAND_RESET_I(1);
    result_data_payload_last = VL_RAND_RESET_I(1);
    result_data_payload_fragment = VL_RAND_RESET_I(8);
    clk = 0;
    reset = 0;
    LoopBackTest__DOT__axi4_stream_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__stream_package_gen_pkg_data_payload_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__writeJoinEvent_fire = VL_RAND_RESET_I(1);
    LoopBackTest__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    LoopBackTest__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    LoopBackTest__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    LoopBackTest__DOT__readRsp_data = VL_RAND_RESET_I(32);
    LoopBackTest__DOT__pkg_gen_bridge_slices_limit_driver = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter_bridge_div_enable_driver = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter_bridge_div_cnt_step_driver = VL_RAND_RESET_I(4);
    LoopBackTest__DOT__transmitter_bridge_div_cnt_limit_driver = VL_RAND_RESET_I(4);
    LoopBackTest__DOT__transmitter_bridge_mod_method_select_driver = VL_RAND_RESET_I(2);
    LoopBackTest__DOT__receiver_bridge_pa_shift_bias_driver = VL_RAND_RESET_I(2);
    LoopBackTest__DOT__receiver_bridge_pa_shift_dir_driver = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver_bridge_min_plateau_driver = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(41);
    LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(41);
    }}
    LoopBackTest__DOT__stream_package_gen__DOT___zz_pkg_slices_cnt = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__stream_package_gen__DOT__strb_buf = VL_RAND_RESET_I(4);
    LoopBackTest__DOT__stream_package_gen__DOT__pkg_slices_cnt = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__stream_package_gen__DOT__raw_data_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt = VL_RAND_RESET_I(3);
    LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf = VL_RAND_RESET_I(32);
    LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__split_data_fire = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(9);
    LoopBackTest__DOT__trans_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__trans_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__trans_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            LoopBackTest__DOT__trans_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(9);
    }}
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_raw_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_raw_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_raw_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder_raw_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_raw_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_raw_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_raw_data_ready = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_raw_data_ready = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_payload_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_raw_data_ready = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_fragment = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_ready = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_data_div_unit_data_payload_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_raw_data_ready = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_raw_data_ready = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_payload_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_raw_data_ready = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_ready = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__pipeline_halt = VL_RAND_RESET_I(9);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_valid_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_payload_1 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__when_PhyTx_l251 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__raw_data_fire_3 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vxrand1 = VL_RAND_RESET_I(9);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(9);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<129; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(9);
    }}
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vlvbound2 = VL_RAND_RESET_I(9);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(4);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(4);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(4);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(4);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(9);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(9);
    }}
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1_result = VL_RAND_RESET_I(32);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__emitCrc = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter = VL_RAND_RESET_I(2);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__when_PhyTx_l40 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_result_2 = VL_RAND_RESET_I(21);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_resultNext_2 = VL_RAND_RESET_I(21);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 = VL_RAND_RESET_I(32);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 = VL_RAND_RESET_I(32);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 = VL_RAND_RESET_I(32);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 = VL_RAND_RESET_I(32);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 = VL_RAND_RESET_I(32);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 = VL_RAND_RESET_I(32);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 = VL_RAND_RESET_I(32);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 = VL_RAND_RESET_I(32);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state = VL_RAND_RESET_I(32);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(9);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(9);
    }}
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter = VL_RAND_RESET_I(3);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__raw_data_payload_first = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__fill = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__when_PhyTx_l72 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(9);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(9);
    }}
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__isEncoding = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__when_PhyTx_l97 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data = VL_RAND_RESET_I(16);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data_valid_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__raw_data_payload_last_regNext = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment = VL_RAND_RESET_I(16);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_valid_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(17);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(17);
    }}
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status = VL_RAND_RESET_I(2);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data = VL_RAND_RESET_I(16);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(17);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(17);
    }}
    LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT___zz_base_cnt = VL_RAND_RESET_I(4);
    LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__unit_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt = VL_RAND_RESET_I(4);
    LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_ready = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_buffer = VL_RAND_RESET_I(16);
    LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__loaded = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_data_fire = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__when_dataDivDynamic_l52 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_2_outputs_0_payload_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_2_outputs_1_payload_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_2_outputs_2_payload_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment = VL_RAND_RESET_I(2);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment = VL_RAND_RESET_I(4);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port_1 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(25);
    }}
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT____Vxrand1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i_1 = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status = VL_RAND_RESET_I(2);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__pkg_size_ready_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__pkg_size_payload_1 = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__pkg_size_fire = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__when_PhyTx_l315 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__when_PhyTx_l327 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_mod_array[__Vi0] = VL_RAND_RESET_I(12);
    }}
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(25);
    }}
    LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT___zz_cnt = VL_RAND_RESET_I(3);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt = VL_RAND_RESET_I(3);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__raw_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0 = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1 = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__last_padding = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_2 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_3 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_4 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_5 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_6 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_7 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_8 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_9 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_10 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_11 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_12 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_13 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_14 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_15 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_16 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_17 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_18 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_19 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_20 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_21 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_22 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_23 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_24 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_25 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_15 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_16 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_17 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_18 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_19 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_20 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_21 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_22 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_23 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_24 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_25 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_26 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_27 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_28 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_29 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_30 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_31 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32 = VL_RAND_RESET_I(7);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_132__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_133__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_134__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_135__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_136__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_137__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_138__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_139__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_140__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_141__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_142__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_143__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_144__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_145__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_146__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_147__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_148__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_149__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_150__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_151__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_152__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_153__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_154__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_155__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_156__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_157__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_158__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_159__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_160__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_161__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_162__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_163__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_164__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_165__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_166__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_167__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_168__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_169__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_170__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_171__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_172__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_173__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_174__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_175__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_176__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_177__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_178__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_179__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_180__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_181__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_182__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_183__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    _ctor_var_reset_1();
    _ctor_var_reset_2();
}

void VLoopBackTest::_ctor_var_reset_1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_ctor_var_reset_1\n"); );
    // Body
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_184__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_185__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_186__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_187__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_188__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_189__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_190__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_191__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_192__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_193__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_194__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_195__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_196__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_197__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(25);
    }}
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_I_mem_port0 = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_I_mem_port1 = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_Q_mem_port0 = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_Q_mem_port1 = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_cnt = VL_RAND_RESET_I(4);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt = VL_RAND_RESET_I(4);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_ready = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_last = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states = VL_RAND_RESET_I(2);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l74 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l76 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__I_mem[__Vi0] = VL_RAND_RESET_I(12);
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__Q_mem[__Vi0] = VL_RAND_RESET_I(12);
    }}
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(24);
    }}
    LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(10);
    LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(10);
    LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(10);
    LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(10);
    LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(24);
    }}
    LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__pkg_handling_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__gate_pkg_det = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__prod_avg_mag = VL_RAND_RESET_Q(36);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt = VL_RAND_RESET_I(8);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT___zz_gate_pkg_det = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1_power_result_valid_regNext = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__when_PreambleDetector_l67 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT___zz_power_val_i = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT___zz_power_val_q = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_i = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_q = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_i = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_q = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_i_regNext = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_q_regNext = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_result_valid_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_0 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_1 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_2 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_3 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_4 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_5 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_6 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_7 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_8 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_9 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_10 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_11 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_12 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_13 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_14 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_15 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_0 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_1 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_2 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_3 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_4 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_5 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_6 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_7 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_8 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_9 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_10 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_11 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_12 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_13 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_14 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_15 = VL_RAND_RESET_I(20);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_6_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_7_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_8_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_9_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_10_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_11_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_12_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_13_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_i_1 = VL_RAND_RESET_Q(36);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_q_1 = VL_RAND_RESET_Q(36);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_Q(36);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_Q(36);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_result_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cfo_corrected = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cfo_enable = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__pkg_detected_regNext = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__phase_corrected_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_max = VL_RAND_RESET_Q(36);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l86 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l89 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l85 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator_delta_phi_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__mean_cnt = VL_RAND_RESET_I(2);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_mean = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__when_CFOCorrector_l45 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_valid_regNext = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2 = VL_RAND_RESET_I(29);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5 = VL_RAND_RESET_I(29);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_impulse_cnt = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__impulse_cnt = VL_RAND_RESET_I(5);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_15_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_i = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_q = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i_1 = VL_RAND_RESET_I(28);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q_1 = VL_RAND_RESET_I(28);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_I(28);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_I(28);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_11 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l47 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50 = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2 = VL_RAND_RESET_I(26);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5 = VL_RAND_RESET_I(26);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phi = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiNext = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiCorrect = VL_RAND_RESET_I(24);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw = VL_RAND_RESET_I(13);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_x_raw = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw = VL_RAND_RESET_I(13);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_y_raw = VL_RAND_RESET_I(12);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(25);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73 = VL_RAND_RESET_I(1);
    LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76 = VL_RAND_RESET_I(1);
}
