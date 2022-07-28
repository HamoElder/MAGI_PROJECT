// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTX_H_
#define _VTX_H_  // guard

#include "verilated_heavy.h"

//==========

class VTX__Syms;
class VTX_VerilatedVcd;


//----------

VL_MODULE(VTX) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(raw_data_payload_last,0,0);
    VL_IN8(raw_data_payload_fragment,7,0);
    VL_OUT8(rf_data_valid,0,0);
    VL_IN8(rf_data_ready,0,0);
    VL_IN8(div_enable,0,0);
    VL_IN8(div_cnt_step,3,0);
    VL_IN8(div_cnt_limit,3,0);
    VL_IN8(mod_method_select,1,0);
    VL_OUT16(rf_data_payload_cha_i,11,0);
    VL_OUT16(rf_data_payload_cha_q,11,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ TX__DOT__phy_tx_crc_raw_data_valid;
        CData/*0:0*/ TX__DOT__phy_tx_padder_raw_data_valid;
        CData/*0:0*/ TX__DOT__phy_tx_encoder_raw_data_valid;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_raw_data_valid;
        CData/*0:0*/ TX__DOT__phy_header_extender_raw_data_valid;
        CData/*0:0*/ TX__DOT__phy_tx_oversampling_raw_data_valid;
        CData/*0:0*/ TX__DOT__stf_preamble_adder_raw_data_valid;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen_raw_data_ready;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_crc_raw_data_ready;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_valid;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_payload_last;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_padder_raw_data_ready;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_valid;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_raw_data_ready;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_result_data_valid;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid;
        CData/*0:0*/ TX__DOT__mod_data_div_unit_data_payload_last;
        CData/*0:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_header_extender_raw_data_ready;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_valid;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_payload_last;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_oversampling_raw_data_ready;
        CData/*0:0*/ TX__DOT__phy_tx_oversampling_result_data_valid;
        CData/*0:0*/ TX__DOT__phy_tx_oversampling_result_data_payload_last;
        CData/*0:0*/ TX__DOT__phy_tx_filter_raw_data_ready;
        CData/*0:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid;
        CData/*0:0*/ TX__DOT__stf_preamble_adder_raw_data_ready;
        CData/*0:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid;
        CData/*7:0*/ TX__DOT__pipeline_halt;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo_io_pop_valid;
        CData/*7:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_cnt;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_valid_1;
        CData/*7:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_payload_1;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__when_PhyTx_l252;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__raw_data_fire_3;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_full;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_io_pop_valid;
        CData/*7:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*3:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_valueNext;
        CData/*3:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_willIncrement;
        CData/*3:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_valueNext;
        CData/*3:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushing;
    };
    struct {
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_full;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_full;
        CData/*0:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_crc__DOT__emitCrc;
        CData/*1:0*/ TX__DOT__phy_tx_crc__DOT__counter;
        CData/*0:0*/ TX__DOT__phy_tx_crc__DOT__when_PhyTx_l40;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_padder__DOT__data_last;
        CData/*0:0*/ TX__DOT__phy_tx_padder__DOT__when_PhyTx_l70;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid;
        CData/*7:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment;
        CData/*0:0*/ TX__DOT__phy_tx_encoder__DOT__isEncoding;
        CData/*0:0*/ TX__DOT__phy_tx_encoder__DOT__when_PhyTx_l97;
        CData/*7:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0;
        CData/*7:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1;
        CData/*7:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2;
        CData/*7:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3;
        CData/*7:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4;
        CData/*7:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5;
        CData/*7:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6;
        CData/*7:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7;
        CData/*0:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data_valid_1;
        CData/*6:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf;
        CData/*7:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0;
        CData/*7:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1;
        CData/*0:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__raw_data_payload_last_regNext;
        CData/*0:0*/ TX__DOT__phy_tx_puncher__DOT__raw_data_valid_1;
    };
    struct {
        CData/*0:0*/ TX__DOT__phy_tx_puncher__DOT__raw_data_last;
        CData/*0:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_full;
        CData/*0:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready;
        CData/*1:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_status;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13;
        CData/*7:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14;
        CData/*6:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_io_pop_valid;
        CData/*3:0*/ TX__DOT__mod_data_div__DOT___zz_base_cnt;
    };
    struct {
        CData/*0:0*/ TX__DOT__mod_data_div__DOT__unit_valid;
        CData/*0:0*/ TX__DOT__mod_data_div__DOT__base_last;
        CData/*3:0*/ TX__DOT__mod_data_div__DOT__base_cnt;
        CData/*0:0*/ TX__DOT__mod_data_div__DOT__base_ready;
        CData/*0:0*/ TX__DOT__mod_data_div__DOT__loaded;
        CData/*0:0*/ TX__DOT__mod_data_div__DOT__base_data_fire;
        CData/*0:0*/ TX__DOT__mod_data_div__DOT__when_dataDivDynamic_l52;
        CData/*0:0*/ TX__DOT__mod_rtl__DOT__flowDeMux_1_outputs_0_payload_last;
        CData/*0:0*/ TX__DOT__mod_rtl__DOT__flowDeMux_1_outputs_1_payload_last;
        CData/*0:0*/ TX__DOT__mod_rtl__DOT__flowDeMux_1_outputs_2_payload_last;
        CData/*0:0*/ TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last;
        CData/*0:0*/ TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment;
        CData/*0:0*/ TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid;
        CData/*0:0*/ TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last;
        CData/*0:0*/ TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_last;
        CData/*1:0*/ TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment;
        CData/*0:0*/ TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid;
        CData/*0:0*/ TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last;
        CData/*0:0*/ TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last;
        CData/*3:0*/ TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment;
        CData/*0:0*/ TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid;
        CData/*0:0*/ TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last;
        CData/*0:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_1;
        CData/*0:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_full;
        CData/*0:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_io_pop_valid;
        CData/*1:0*/ TX__DOT__phy_header_extender__DOT__header_status;
        CData/*4:0*/ TX__DOT__phy_header_extender__DOT__counter;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__pkg_size_ready_1;
        CData/*7:0*/ TX__DOT__phy_header_extender__DOT__pkg_size_payload_1;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__pkg_size_fire;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__when_PhyTx_l316;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__when_PhyTx_l328;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_io_pop_valid;
        CData/*2:0*/ TX__DOT__phy_tx_oversampling__DOT___zz_cnt;
        CData/*2:0*/ TX__DOT__phy_tx_oversampling__DOT__cnt;
        CData/*0:0*/ TX__DOT__phy_tx_oversampling__DOT__raw_last;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__last_padding;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_1;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_2;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_3;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_4;
    };
    struct {
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_5;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_6;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_7;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_8;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_9;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_10;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_11;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_12;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_13;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_14;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_15;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_16;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_17;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_18;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_19;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_20;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_21;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_22;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_23;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_24;
        CData/*0:0*/ TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_25;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_15;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_16;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_17;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_18;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_19;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_20;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_21;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_22;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_23;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_24;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_25;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_26;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_29;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_30;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_31;
        CData/*6:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32;
        CData/*0:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full;
    };
    struct {
        CData/*0:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_io_pop_valid;
        CData/*3:0*/ TX__DOT__stf_preamble_adder__DOT___zz_cnt;
        CData/*3:0*/ TX__DOT__stf_preamble_adder__DOT__cnt;
        CData/*4:0*/ TX__DOT__stf_preamble_adder__DOT__repeatCnt;
        CData/*0:0*/ TX__DOT__stf_preamble_adder__DOT__raw_ready;
        CData/*0:0*/ TX__DOT__stf_preamble_adder__DOT__preamble_valid;
        CData/*0:0*/ TX__DOT__stf_preamble_adder__DOT__preamble_last;
        CData/*1:0*/ TX__DOT__stf_preamble_adder__DOT__preamble_states;
        CData/*0:0*/ TX__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l74;
        CData/*0:0*/ TX__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l76;
        CData/*0:0*/ TX__DOT__stf_preamble_adder__DOT__raw_data_fire;
        CData/*0:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full;
        CData/*0:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_io_pop_valid;
        SData/*11:0*/ TX__DOT__phy_header_extender_result_data_payload_fragment_cha_i;
        SData/*11:0*/ TX__DOT__phy_header_extender_result_data_payload_fragment_cha_q;
        SData/*8:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_logic_ram_port0;
        SData/*8:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0;
        SData/*8:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0;
        SData/*8:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0;
        SData/*15:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data;
        SData/*15:0*/ TX__DOT__phy_tx_puncher__DOT__raw_data_fragment;
        SData/*15:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data;
        SData/*15:0*/ TX__DOT__mod_data_div__DOT__base_buffer;
        SData/*11:0*/ TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i;
        SData/*11:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0;
        SData/*11:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1;
        SData/*11:0*/ TX__DOT__stf_preamble_adder__DOT___zz_I_mem_port0;
        SData/*11:0*/ TX__DOT__stf_preamble_adder__DOT___zz_Q_mem_port0;
        SData/*11:0*/ TX__DOT__stf_preamble_adder__DOT__preamble_data_i;
        SData/*11:0*/ TX__DOT__stf_preamble_adder__DOT__preamble_data_q;
        IData/*31:0*/ TX__DOT__phy_tx_crc__DOT__crc_1_result;
        IData/*20:0*/ TX__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_result_2;
        IData/*20:0*/ TX__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_resultNext_2;
        IData/*31:0*/ TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8;
        IData/*31:0*/ TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7;
        IData/*31:0*/ TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6;
        IData/*31:0*/ TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5;
        IData/*31:0*/ TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4;
        IData/*31:0*/ TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3;
        IData/*31:0*/ TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2;
        IData/*31:0*/ TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1;
        IData/*31:0*/ TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state;
        IData/*16:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_logic_ram_port0;
        IData/*16:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_logic_ram_port0;
        IData/*23:0*/ TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0;
        IData/*24:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0;
        IData/*24:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port_1;
        IData/*24:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_66__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_67__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_68__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_69__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_70__DOT__previous_adder_data;
    };
    struct {
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_71__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_72__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_73__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_74__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_75__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_76__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_77__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_78__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_79__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_80__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_81__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_82__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_83__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_84__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_85__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_86__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_87__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_88__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_89__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_90__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_91__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_92__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_93__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_94__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_95__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_96__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_97__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_98__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_99__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_100__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_101__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_102__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_103__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_104__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_105__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_106__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_107__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_108__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_109__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_110__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_111__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_112__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_113__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_114__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_115__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_116__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_117__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_118__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_119__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_120__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_121__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_122__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_123__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_124__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_125__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_126__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_127__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_128__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_129__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_130__DOT__previous_adder_data;
        IData/*18:0*/ TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_131__DOT__previous_adder_data;
        IData/*24:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0;
        IData/*23:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0;
        SData/*8:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram[252];
    };
    struct {
        CData/*7:0*/ TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram[16];
        SData/*8:0*/ TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram[32];
        SData/*8:0*/ TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[32];
        SData/*8:0*/ TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[32];
        IData/*16:0*/ TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram[32];
        IData/*16:0*/ TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[32];
        IData/*24:0*/ TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram[32];
        IData/*24:0*/ TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[32];
        IData/*24:0*/ TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[32];
        SData/*11:0*/ TX__DOT__stf_preamble_adder__DOT__I_mem[16];
        SData/*11:0*/ TX__DOT__stf_preamble_adder__DOT__Q_mem[16];
        IData/*23:0*/ TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[32];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ TX__DOT__phy_header_extender__DOT____Vxrand1;
    CData/*2:0*/ __Vtableidx1;
    CData/*7:0*/ __Vdly__TX__DOT__phy_tx_information_gen__DOT__pkg_size_cnt;
    CData/*1:0*/ __Vdly__TX__DOT__phy_tx_crc__DOT__counter;
    CData/*0:0*/ __Vdly__TX__DOT__phy_tx_padder__DOT__data_last;
    CData/*1:0*/ __Vdly__TX__DOT__phy_tx_scrambler__DOT__scrambler_status;
    CData/*3:0*/ __Vdly__TX__DOT__mod_data_div__DOT__base_cnt;
    CData/*1:0*/ __Vdly__TX__DOT__phy_header_extender__DOT__header_status;
    CData/*4:0*/ __Vdly__TX__DOT__phy_header_extender__DOT__counter;
    CData/*2:0*/ __Vdly__TX__DOT__phy_tx_oversampling__DOT__cnt;
    CData/*3:0*/ __Vdly__TX__DOT__stf_preamble_adder__DOT__cnt;
    CData/*4:0*/ __Vdly__TX__DOT__stf_preamble_adder__DOT__repeatCnt;
    CData/*1:0*/ __Vdly__TX__DOT__stf_preamble_adder__DOT__preamble_states;
    CData/*7:0*/ __Vdlyvdim0__TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0;
    CData/*3:0*/ __Vdlyvdim0__TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvval__TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    SData/*8:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vxrand1;
    SData/*8:0*/ TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vlvbound2;
    SData/*15:0*/ __Vdly__TX__DOT__mod_data_div__DOT__base_buffer;
    SData/*8:0*/ __Vdlyvval__TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0;
    SData/*8:0*/ __Vdlyvval__TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0;
    SData/*8:0*/ __Vdlyvval__TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0;
    SData/*8:0*/ __Vdlyvval__TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0;
    IData/*16:0*/ __Vdlyvval__TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0;
    IData/*16:0*/ __Vdlyvval__TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0;
    IData/*24:0*/ __Vdlyvval__TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0;
    IData/*24:0*/ __Vdlyvval__TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0;
    IData/*31:0*/ __Vm_traceActivity;
    static SData/*11:0*/ __Vtable1_TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i[8];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTX__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTX);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VTX(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTX();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTX__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTX__Syms* symsp, bool first);
  private:
    static QData _change_request(VTX__Syms* __restrict vlSymsp);
    static QData _change_request_1(VTX__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__26(VTX__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    void _ctor_var_reset_1() VL_ATTR_COLD;
  public:
    static void _eval(VTX__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__16(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__18(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__25(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__27(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__28(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VTX__Syms* __restrict vlSymsp);
    static void _settle__TOP__19(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__20(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__21(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__22(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__23(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__24(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__17(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__18(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__20(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__22(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__23(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__24(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__11(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__19(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__21(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__25(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__6(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__9(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__2(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__3(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__4(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
