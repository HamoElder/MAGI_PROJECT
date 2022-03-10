// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTX_H_
#define _VTX_H_  // guard

#include "verilated.h"

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
    VL_IN8(axil4Ctrl_awvalid,0,0);
    VL_OUT8(axil4Ctrl_awready,0,0);
    VL_IN8(axil4Ctrl_awaddr,7,0);
    VL_IN8(axil4Ctrl_awprot,2,0);
    VL_IN8(axil4Ctrl_wvalid,0,0);
    VL_OUT8(axil4Ctrl_wready,0,0);
    VL_IN8(axil4Ctrl_wstrb,3,0);
    VL_OUT8(axil4Ctrl_bvalid,0,0);
    VL_IN8(axil4Ctrl_bready,0,0);
    VL_OUT8(axil4Ctrl_bresp,1,0);
    VL_IN8(axil4Ctrl_arvalid,0,0);
    VL_OUT8(axil4Ctrl_arready,0,0);
    VL_IN8(axil4Ctrl_araddr,7,0);
    VL_IN8(axil4Ctrl_arprot,2,0);
    VL_OUT8(axil4Ctrl_rvalid,0,0);
    VL_IN8(axil4Ctrl_rready,0,0);
    VL_OUT8(axil4Ctrl_rresp,1,0);
    VL_IN8(raw_data_tvalid,0,0);
    VL_OUT8(raw_data_tready,0,0);
    VL_IN8(raw_data_tstrb,3,0);
    VL_IN8(raw_data_tkeep,3,0);
    VL_IN8(raw_data_tlast,0,0);
    VL_OUT8(coded_data_valid,0,0);
    VL_IN8(coded_data_ready,0,0);
    VL_OUT8(coded_data_payload_last,0,0);
    VL_OUT16(coded_data_payload_fragment,15,0);
    VL_IN(axil4Ctrl_wdata,31,0);
    VL_OUT(axil4Ctrl_rdata,31,0);
    VL_IN(raw_data_tdata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ TX__DOT__stream_package_gen_pkg_data_payload_last;
        CData/*0:0*/ TX__DOT__phy_tx_padder_raw_data_ready;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_valid;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_payload_last;
        CData/*7:0*/ TX__DOT__phy_tx_padder_result_data_payload_fragment;
        CData/*0:0*/ TX__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_crc_raw_data_ready;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_valid;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_payload_last;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_fifo_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_fifo_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_encoder_result_data_fifo_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_header_extender_raw_data_ready;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_valid;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_payload_last;
        CData/*0:0*/ TX__DOT__streamFifo_7_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_raw_data_ready;
        CData/*0:0*/ TX__DOT__phy_tx_scrambler_result_data_valid;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid;
        CData/*0:0*/ TX__DOT__writeJoinEvent_valid;
        CData/*0:0*/ TX__DOT__writeJoinEvent_fire;
        CData/*0:0*/ TX__DOT___zz_writeJoinEvent_translated_ready;
        CData/*0:0*/ TX__DOT___zz_axil4Ctrl_bvalid_2;
        CData/*1:0*/ TX__DOT___zz_axil4Ctrl_bresp;
        CData/*0:0*/ TX__DOT__axil4Ctrl_ar_rValid;
        CData/*7:0*/ TX__DOT__axil4Ctrl_ar_rData_addr;
        CData/*2:0*/ TX__DOT__axil4Ctrl_ar_rData_prot;
        CData/*6:0*/ TX__DOT_____05Fslices_limit_driver;
        CData/*6:0*/ TX__DOT__stream_package_gen__DOT___zz_pkg_slices_cnt;
        CData/*3:0*/ TX__DOT__stream_package_gen__DOT__strb_buf;
        CData/*6:0*/ TX__DOT__stream_package_gen__DOT__pkg_slices_cnt;
        CData/*0:0*/ TX__DOT__stream_package_gen__DOT__raw_data_last;
        CData/*0:0*/ TX__DOT__stream_package_gen__DOT__split_core_split_data_fire;
        CData/*2:0*/ TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt;
        CData/*0:0*/ TX__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire;
        CData/*2:0*/ TX__DOT__phy_tx_padder__DOT__counter;
        CData/*0:0*/ TX__DOT__phy_tx_padder__DOT__raw_data_payload_first;
        CData/*0:0*/ TX__DOT__phy_tx_padder__DOT__fill;
        CData/*0:0*/ TX__DOT__phy_tx_padder__DOT__when_PhyTx_l55;
        CData/*0:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_1;
        CData/*0:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full;
        CData/*0:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_crc__DOT__emitCrc;
        CData/*1:0*/ TX__DOT__phy_tx_crc__DOT__counter;
        CData/*0:0*/ TX__DOT__phy_tx_crc__DOT__when_PhyTx_l23;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_risingOccupancy;
    };
    struct {
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full;
        CData/*0:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid;
        CData/*7:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment;
        CData/*0:0*/ TX__DOT__phy_tx_encoder__DOT__emitEncoding;
        CData/*0:0*/ TX__DOT__phy_tx_encoder__DOT__when_PhyTx_l79;
        CData/*0:0*/ TX__DOT__phy_tx_encoder__DOT__when_PhyTx_l79_1;
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
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full;
        CData/*0:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_tx_puncher__DOT__raw_data_valid_1;
        CData/*0:0*/ TX__DOT__phy_tx_puncher__DOT__raw_data_last;
        CData/*0:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_full;
        CData/*0:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid;
        CData/*7:0*/ TX__DOT__phy_header_extender__DOT__counter;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__emitHeader;
        CData/*1:0*/ TX__DOT__phy_header_extender__DOT__header_status;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing;
    };
    struct {
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full;
        CData/*0:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__streamFifo_7__DOT___zz_1;
        CData/*0:0*/ TX__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ TX__DOT__streamFifo_7__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ TX__DOT__streamFifo_7__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ TX__DOT__streamFifo_7__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ TX__DOT__streamFifo_7__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__streamFifo_7__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__streamFifo_7__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__streamFifo_7__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__streamFifo_7__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__streamFifo_7__DOT__logic_full;
        CData/*0:0*/ TX__DOT__streamFifo_7__DOT___zz_io_pop_valid;
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
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_1;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full;
    };
    struct {
        CData/*0:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_io_pop_valid;
        CData/*6:0*/ TX__DOT__clkCrossing_2__DOT__area_clkI_reg;
        CData/*6:0*/ TX__DOT__clkCrossing_2__DOT__area_clkO_buf0;
        CData/*6:0*/ TX__DOT__clkCrossing_2__DOT__area_clkO_buf1;
        CData/*6:0*/ TX__DOT__clkCrossing_3__DOT__area_clkI_reg;
        CData/*6:0*/ TX__DOT__clkCrossing_3__DOT__area_clkO_buf0;
        CData/*6:0*/ TX__DOT__clkCrossing_3__DOT__area_clkO_buf1;
        SData/*15:0*/ TX__DOT__phy_header_extender_result_data_payload_fragment;
        SData/*8:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0;
        SData/*8:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0;
        SData/*15:0*/ TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data;
        SData/*8:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_logic_ram_port0;
        SData/*15:0*/ TX__DOT__phy_tx_puncher__DOT__raw_data_fragment;
        SData/*15:0*/ TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data;
        IData/*31:0*/ TX__DOT__readRsp_data;
        IData/*31:0*/ TX__DOT__stream_package_gen__DOT__split_core__DOT__data_buf;
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
        IData/*16:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_logic_ram_port0;
        IData/*16:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0;
        IData/*16:0*/ TX__DOT__streamFifo_7__DOT___zz_logic_ram_port0;
        IData/*16:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_logic_ram_port0;
        SData/*8:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram[200];
        SData/*8:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram[200];
        SData/*8:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram[200];
        IData/*16:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram[200];
        IData/*16:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram[134];
        IData/*16:0*/ TX__DOT__streamFifo_7__DOT__logic_ram[200];
        IData/*16:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram[200];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vdly__TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt;
    CData/*2:0*/ __Vdly__TX__DOT__phy_tx_padder__DOT__counter;
    CData/*1:0*/ __Vdly__TX__DOT__phy_tx_crc__DOT__counter;
    CData/*1:0*/ __Vdly__TX__DOT__phy_header_extender__DOT__header_status;
    CData/*7:0*/ __Vdly__TX__DOT__phy_header_extender__DOT__counter;
    CData/*1:0*/ __Vdly__TX__DOT__phy_tx_scrambler__DOT__scrambler_status;
    CData/*7:0*/ __Vdlyvdim0__TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvdim0__TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvdim0__TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvdim0__TX__DOT__streamFifo_7__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__streamFifo_7__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvdim0__TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    SData/*8:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT____Vxrand1;
    SData/*8:0*/ TX__DOT__stream_package_gen_pkg_data_fifo__DOT____Vlvbound2;
    SData/*8:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT____Vxrand1;
    SData/*8:0*/ TX__DOT__phy_tx_padder_result_data_fifo__DOT____Vlvbound2;
    SData/*8:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT____Vxrand1;
    SData/*8:0*/ TX__DOT__phy_tx_crc_result_data_fifo__DOT____Vlvbound2;
    SData/*8:0*/ __Vdlyvval__TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0;
    SData/*8:0*/ __Vdlyvval__TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram__v0;
    IData/*16:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT____Vxrand1;
    IData/*16:0*/ TX__DOT__phy_tx_encoder_result_data_fifo__DOT____Vlvbound2;
    IData/*16:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT____Vxrand1;
    IData/*16:0*/ TX__DOT__phy_header_extender__DOT__dataFifo__DOT____Vlvbound2;
    IData/*16:0*/ TX__DOT__streamFifo_7__DOT____Vxrand1;
    IData/*16:0*/ TX__DOT__streamFifo_7__DOT____Vlvbound2;
    IData/*16:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT____Vxrand1;
    IData/*16:0*/ TX__DOT__phy_header_extender_result_data_fifo__DOT____Vlvbound2;
    IData/*16:0*/ __Vdlyvval__TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram__v0;
    IData/*16:0*/ __Vdlyvval__TX__DOT__streamFifo_7__DOT__logic_ram__v0;
    IData/*16:0*/ __Vdlyvval__TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram__v0;
    IData/*31:0*/ __Vm_traceActivity;
    
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
    static void _combo__TOP__17(VTX__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
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
    static void _sequent__TOP__16(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__18(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VTX__Syms* __restrict vlSymsp);
    static void _settle__TOP__11(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__12(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__13(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__14(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__15(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__17(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__18(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__19(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__13(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__20(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__5(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__2(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
