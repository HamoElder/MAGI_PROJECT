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
    VL_IN8(raw_data_payload_fragment,0,0);
    VL_OUT8(result_data_valid,0,0);
    VL_IN8(result_data_ready,0,0);
    VL_OUT8(result_data_payload_last,0,0);
    VL_OUT8(result_data_payload_fragment,0,0);
    VL_IN8(block_msg_ctrl_valid,0,0);
    VL_OUT8(block_msg_ctrl_ready,0,0);
    VL_IN8(block_msg_ctrl_payload_pkg_type,1,0);
    VL_IN16(block_msg_ctrl_payload_rnti_scramble,15,0);
    VL_IN(block_msg_ctrl_payload_pkg_length,19,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ TX__DOT__tx_crc_extender_raw_data_ready;
        CData/*0:0*/ TX__DOT__tx_crc_extender_block_msg_ctrl_in_ready;
        CData/*0:0*/ TX__DOT__rate_match_result_data_valid;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_valid;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_ready;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__ctrl_in_enable;
        CData/*1:0*/ TX__DOT__tx_crc_extender__DOT__message_pkg_type;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__ctrl_out_valid;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__block_msg_ctrl_in_fire;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__crc_raw_halt;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT___zz_result_data_payload_fragment;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc;
        CData/*4:0*/ TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__when_PhyTX_l57;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__crc16_core__DOT___zz_result_data_payload_fragment;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc;
        CData/*3:0*/ TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__when_PhyTX_l57;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_valid;
        CData/*0:0*/ TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_payload_last;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__data_fifo_io_pop_valid;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__msg_fifo_io_pop_valid;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__broadcast_channel_segment_block_msg_ready;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_valid;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_payload_last;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment_block_msg_ready;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_last;
        CData/*1:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment_block_msg_ready;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_last;
        CData/*1:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment_is_last_block;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_ready;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamDemux_4_io_outputs_1_valid;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_ready;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_0_ready;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_0_ready;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_1_ready;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_2_ready;
        CData/*1:0*/ TX__DOT__code_block_segment__DOT__sel_cha;
        CData/*3:0*/ TX__DOT__code_block_segment__DOT__finish_indicator;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__state;
        CData/*1:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_1;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*3:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*3:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_willIncrement;
    };
    struct {
        CData/*3:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_valueNext;
        CData/*3:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_1;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*1:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_valueNext;
        CData/*1:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_willIncrement;
        CData/*1:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_valueNext;
        CData/*1:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_io_pop_valid;
        CData/*1:0*/ TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_enable;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_fire;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_msg_fire;
        CData/*1:0*/ TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT___zz_state;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__when_PhyTX_l188;
        CData/*2:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_enable;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_fire;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_msg_fire;
        CData/*2:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment__DOT___zz_state;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__when_PhyTX_l266;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__result_data_fire_1;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_payload_last;
        CData/*2:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_enable;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode;
        CData/*7:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C;
        CData/*7:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cp;
        CData/*7:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn;
        CData/*2:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__shift_step;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__divide_enable;
        CData/*7:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_num;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_fire;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_msg_fire;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__when_PhyTX_l478;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__when_PhyTX_l487;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__result_data_fire;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT___zz_result_data_payload_fragment;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc;
        CData/*4:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__when_PhyTX_l57;
        CData/*1:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_cmd_ready;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid;
    };
    struct {
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_1;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_2;
        CData/*4:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_3;
        CData/*4:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_4;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_6;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__cmd_fire;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__rsp_fire;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_valid;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_payload_last;
        CData/*0:0*/ TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type;
        CData/*0:0*/ TX__DOT__channel_code__DOT__data_fifo_io_pop_ready;
        CData/*0:0*/ TX__DOT__channel_code__DOT__streamDemux_4_io_input_valid;
        CData/*0:0*/ TX__DOT__channel_code__DOT__data_fifo_io_pop_valid;
        CData/*0:0*/ TX__DOT__channel_code__DOT__msg_fifo_io_pop_valid;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready;
        CData/*0:0*/ TX__DOT__channel_code__DOT__streamDemux_4_io_input_ready;
        CData/*0:0*/ TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid;
        CData/*0:0*/ TX__DOT__channel_code__DOT__sel_cha;
        CData/*1:0*/ TX__DOT__channel_code__DOT__state;
        CData/*0:0*/ TX__DOT__channel_code__DOT__message_segment_code_type;
        CData/*0:0*/ TX__DOT__channel_code__DOT__coded_msg_fire;
        CData/*0:0*/ TX__DOT__channel_code__DOT___zz_io_pop_ready;
        CData/*2:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT___zz_1;
        CData/*0:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full;
        CData/*0:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_1;
        CData/*0:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*1:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_valueNext;
        CData/*1:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_willIncrement;
        CData/*1:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_valueNext;
        CData/*1:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full;
        CData/*0:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_ready;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid;
        CData/*7:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT___zz_tail_bits;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__loaded_tail_bits;
        CData/*6:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tail_bits;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648;
        CData/*7:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0;
        CData/*2:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data_valid_1;
        CData/*6:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__r_enc_buf;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_fire;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_payload_last_regNext;
        CData/*1:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_1;
    };
    struct {
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushing;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popping;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_full;
        CData/*0:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_valid;
        CData/*0:0*/ TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_payload_last;
        CData/*3:0*/ TX__DOT__rate_match__DOT___zz_interleaving_ram_port0;
        CData/*4:0*/ TX__DOT__rate_match__DOT___zz_conv_perm_pattern_port0;
        CData/*0:0*/ TX__DOT__rate_match__DOT___zz_1;
        CData/*0:0*/ TX__DOT__rate_match__DOT___zz_2;
        CData/*1:0*/ TX__DOT__rate_match__DOT__state;
        CData/*4:0*/ TX__DOT__rate_match__DOT__zero_padding_cnt;
        CData/*7:0*/ TX__DOT__rate_match__DOT__rows;
        CData/*7:0*/ TX__DOT__rate_match__DOT__read_row_cnt;
        CData/*0:0*/ TX__DOT__rate_match__DOT__pattern_cursor_willIncrement;
        CData/*0:0*/ TX__DOT__rate_match__DOT__pattern_cursor_willClear;
        CData/*4:0*/ TX__DOT__rate_match__DOT__pattern_cursor_valueNext;
        CData/*4:0*/ TX__DOT__rate_match__DOT__pattern_cursor_value;
        CData/*0:0*/ TX__DOT__rate_match__DOT__bits_sel_willIncrement;
        CData/*1:0*/ TX__DOT__rate_match__DOT__bits_sel_valueNext;
        CData/*1:0*/ TX__DOT__rate_match__DOT__bits_sel_value;
        CData/*0:0*/ TX__DOT__rate_match__DOT__willIncrement;
        CData/*0:0*/ TX__DOT__rate_match__DOT__raw_data_fire;
        CData/*0:0*/ TX__DOT__rate_match__DOT__result_data_fire;
        CData/*0:0*/ TX__DOT__rate_match__DOT__when_PhyTX_l816;
        CData/*0:0*/ TX__DOT__rate_match__DOT__when_PhyTX_l817;
        SData/*15:0*/ TX__DOT__tx_crc_extender__DOT__message_rnti_scramble;
        SData/*15:0*/ TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state_1;
        SData/*15:0*/ TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_length;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt;
        SData/*15:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__rnti;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kp;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__denominator;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__code_block_resized;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_error;
        SData/*12:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder;
        SData/*13:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder_1;
        SData/*13:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_when_UnsignedDivider_l112;
        SData/*12:0*/ TX__DOT__channel_code__DOT__message_segment_length;
        SData/*13:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0;
        SData/*12:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_valueNext;
        SData/*12:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value;
        SData/*12:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_valueNext;
        SData/*12:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value;
        SData/*12:0*/ TX__DOT__rate_match__DOT__write_addr;
        SData/*12:0*/ TX__DOT__rate_match__DOT__read_addr;
        SData/*12:0*/ TX__DOT__rate_match__DOT__read_addr_next;
        IData/*19:0*/ TX__DOT__tx_crc_extender__DOT__message_pkg_length;
        IData/*23:0*/ TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state_1;
        IData/*23:0*/ TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state;
        WData/*95:0*/ TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string[3];
        WData/*95:0*/ TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[3];
    };
    struct {
        IData/*19:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_numerator;
        IData/*19:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_zero_padding_cnt_1;
        IData/*20:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_F;
        IData/*20:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_Cn_2;
        IData/*19:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__F;
        IData/*19:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__numerator;
        WData/*95:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[3];
        IData/*23:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state_1;
        IData/*23:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state;
        IData/*20:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz___05Fzz_rsp_payload_quotient;
        IData/*19:0*/ TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient;
        WData/*71:0*/ TX__DOT__channel_code__DOT__state_string[3];
        IData/*31:0*/ TX__DOT__rate_match__DOT__vector_length_cnt;
        WData/*95:0*/ TX__DOT__rate_match__DOT__state_string[3];
        QData/*37:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0;
        CData/*1:0*/ TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[16];
        QData/*37:0*/ TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram[4];
        CData/*2:0*/ TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[32];
        SData/*13:0*/ TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram[4];
        CData/*1:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram[6145];
        CData/*3:0*/ TX__DOT__rate_match__DOT__interleaving_ram[6145];
        CData/*4:0*/ TX__DOT__rate_match__DOT__conv_perm_pattern[32];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*1:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT____Vxrand1;
    CData/*1:0*/ TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT____Vlvbound2;
    CData/*3:0*/ TX__DOT__rate_match__DOT____Vxrand1;
    CData/*3:0*/ TX__DOT__rate_match__DOT____Vlvbound2;
    CData/*3:0*/ TX__DOT__rate_match__DOT____Vlvbound3;
    CData/*1:0*/ __Vtableidx2;
    CData/*2:0*/ __Vtableidx4;
    CData/*4:0*/ __Vtableidx6;
    CData/*2:0*/ __Vtableidx7;
    CData/*5:0*/ __Vtableidx10;
    CData/*1:0*/ __Vtableidx11;
    CData/*1:0*/ __Vtableidx13;
    CData/*5:0*/ __Vtableidx15;
    CData/*4:0*/ __Vtableidx16;
    CData/*4:0*/ __Vdly__TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter;
    CData/*3:0*/ __Vdly__TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter;
    CData/*0:0*/ __Vdly__TX__DOT__code_block_segment__DOT__state;
    CData/*1:0*/ __Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state;
    CData/*2:0*/ __Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state;
    CData/*2:0*/ __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state;
    CData/*4:0*/ __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter;
    CData/*1:0*/ __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92;
    CData/*1:0*/ __Vdly__TX__DOT__channel_code__DOT__state;
    CData/*1:0*/ __Vdly__TX__DOT__rate_match__DOT__state;
    CData/*3:0*/ __Vdlyvdim0__TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvval__TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvdim0__TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn;
    CData/*7:0*/ __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C;
    CData/*0:0*/ __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step;
    CData/*4:0*/ __Vdlyvdim0__TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram__v0;
    CData/*2:0*/ __Vdlyvval__TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvdim0__TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvval__TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram__v0;
    CData/*3:0*/ __Vdlyvval__TX__DOT__rate_match__DOT__interleaving_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__rate_match__DOT__interleaving_ram__v0;
    CData/*3:0*/ __Vdlyvval__TX__DOT__rate_match__DOT__interleaving_ram__v1;
    CData/*0:0*/ __Vdlyvset__TX__DOT__rate_match__DOT__interleaving_ram__v1;
    CData/*7:0*/ __Vdly__TX__DOT__rate_match__DOT__read_row_cnt;
    CData/*4:0*/ __Vdly__TX__DOT__rate_match__DOT__zero_padding_cnt;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    SData/*12:0*/ __Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt;
    SData/*12:0*/ __Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt;
    SData/*12:0*/ __Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length;
    SData/*12:0*/ __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt;
    SData/*12:0*/ __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt;
    SData/*12:0*/ __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length;
    SData/*13:0*/ __Vdlyvval__TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram__v0;
    SData/*12:0*/ __Vdlyvdim0__TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram__v0;
    SData/*12:0*/ __Vdlyvdim0__TX__DOT__rate_match__DOT__interleaving_ram__v0;
    SData/*12:0*/ __Vdlyvdim0__TX__DOT__rate_match__DOT__interleaving_ram__v1;
    SData/*12:0*/ __Vdly__TX__DOT__rate_match__DOT__write_addr;
    IData/*31:0*/ __Vdly__TX__DOT__rate_match__DOT__vector_length_cnt;
    IData/*31:0*/ __Vm_traceActivity;
    QData/*37:0*/ __Vdlyvval__TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram__v0;
    CData/*2:0*/ __Vtablechg1[64];
    CData/*0:0*/ __Vtablechg12[128];
    static CData/*0:0*/ __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[64];
    static CData/*0:0*/ __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[64];
    static CData/*0:0*/ __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[64];
    static WData/*95:0*/ __Vtable2_TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string[4][3];
    static WData/*95:0*/ __Vtable4_TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[8][3];
    static CData/*1:0*/ __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[32];
    static WData/*95:0*/ __Vtable7_TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[8][3];
    static CData/*1:0*/ __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[64];
    static WData/*71:0*/ __Vtable11_TX__DOT__channel_code__DOT__state_string[4][3];
    static CData/*1:0*/ __Vtable12_TX__DOT__channel_code__DOT__state[128];
    static WData/*95:0*/ __Vtable13_TX__DOT__rate_match__DOT__state_string[4][3];
    static CData/*0:0*/ __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[64];
    static CData/*0:0*/ __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[32];
    
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
    static void _combo__TOP__18(VTX__Syms* __restrict vlSymsp);
    static void _combo__TOP__21(VTX__Syms* __restrict vlSymsp);
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
    static void _initial__TOP__11(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__19(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__20(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VTX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VTX__Syms* __restrict vlSymsp);
    static void _settle__TOP__12(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__13(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__14(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__15(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__16(VTX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__17(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__19(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__20(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__21(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__22(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__23(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__24(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__25(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__27(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__28(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__11(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__18(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__26(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__2(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__3(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
