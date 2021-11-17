// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VVITERBIDECODER_H_
#define _VVITERBIDECODER_H_  // guard

#include "verilated_heavy.h"

//==========

class VViterbiDecoder__Syms;
class VViterbiDecoder_VerilatedVcd;


//----------

VL_MODULE(VViterbiDecoder) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(raw_data_payload_last,0,0);
    VL_IN8(_zz_in_b,1,0);
    VL_OUT8(decoded_data_valid,0,0);
    VL_OUT8(decoded_data_payload_last,0,0);
    VL_OUT8(decoded_data_payload_fragment,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ViterbiDecoder__DOT__raw_data_fire;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7;
        CData/*3:0*/ ViterbiDecoder__DOT__pmu_core__DOT__survival_path;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1;
        CData/*7:0*/ ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2;
        CData/*3:0*/ ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1;
        CData/*3:0*/ ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1;
        CData/*1:0*/ ViterbiDecoder__DOT__tbu_core__DOT___zz_ram_select;
        CData/*1:0*/ ViterbiDecoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2;
        CData/*4:0*/ ViterbiDecoder__DOT__tbu_core__DOT___zz_ram_addr_read_2;
        CData/*1:0*/ ViterbiDecoder__DOT__tbu_core__DOT__ram_select;
        CData/*4:0*/ ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__tb_finish;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l48;
        CData/*1:0*/ ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select;
        CData/*4:0*/ ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt;
        CData/*1:0*/ ViterbiDecoder__DOT__tbu_core__DOT__min_cursor;
        CData/*2:0*/ ViterbiDecoder__DOT__tbu_core__DOT__cursor;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__goto_tail;
        CData/*1:0*/ ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt;
        CData/*2:0*/ ViterbiDecoder__DOT__tbu_core__DOT__traceback_state;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l104;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l126;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid;
    };
    struct {
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_ready;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__reorder_state;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__fifo_pop_valve;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__when_ReorderLifo_l40;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_valid_regNext;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_last_regNext;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_fragment_regNext;
        CData/*2:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*3:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext;
        CData/*3:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement;
        CData/*3:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext;
        CData/*3:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_lifo_last;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_pop_payload_fragment;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_0;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_1;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_2;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_3;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_4;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_5;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_6;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_7;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_8;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_9;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_10;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_11;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_12;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_13;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_14;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_15;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_16;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_17;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_18;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_19;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_20;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_21;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_22;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_23;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_24;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_25;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_26;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_27;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_28;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_29;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_30;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_31;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_32;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_33;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_34;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_35;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_36;
    };
    struct {
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_37;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_38;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_39;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_40;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_41;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_42;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_43;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_44;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_45;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_46;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_47;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_48;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_49;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_50;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_51;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_52;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_53;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_54;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_55;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_56;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_57;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_58;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_59;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_60;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_61;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_62;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_63;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_0;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_1;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_2;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_3;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_4;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_5;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_6;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_7;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_8;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_9;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_10;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_11;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_12;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_13;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_14;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_15;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_16;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_17;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_18;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_19;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_20;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_21;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_22;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_23;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_24;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_25;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_26;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_27;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_28;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_29;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_30;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_31;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_32;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_33;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_34;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_35;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_36;
    };
    struct {
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_37;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_38;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_39;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_40;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_41;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_42;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_43;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_44;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_45;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_46;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_47;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_48;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_49;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_50;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_51;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_52;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_53;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_54;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_55;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_56;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_57;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_58;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_59;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_60;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_61;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_62;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_63;
        CData/*5:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l32;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_lifo_last;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_pop_payload_fragment;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_0;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_1;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_2;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_3;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_4;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_5;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_6;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_7;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_8;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_9;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_10;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_11;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_12;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_13;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_14;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_15;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_16;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_17;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_18;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_19;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_20;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_21;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_22;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_23;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_24;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_25;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_26;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_27;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_28;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_29;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_30;
    };
    struct {
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_31;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_32;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_33;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_34;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_35;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_36;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_37;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_38;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_39;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_40;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_41;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_42;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_43;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_44;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_45;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_46;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_47;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_48;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_49;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_50;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_51;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_52;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_53;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_54;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_55;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_56;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_57;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_58;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_59;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_60;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_61;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_62;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_63;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_0;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_1;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_2;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_3;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_4;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_5;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_6;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_7;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_8;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_9;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_10;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_11;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_12;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_13;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_14;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_15;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_16;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_17;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_18;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_19;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_20;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_21;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_22;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_23;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_24;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_25;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_26;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_27;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_28;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_29;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_30;
    };
    struct {
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_31;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_32;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_33;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_34;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_35;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_36;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_37;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_38;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_39;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_40;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_41;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_42;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_43;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_44;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_45;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_46;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_47;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_48;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_49;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_50;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_51;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_52;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_53;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_54;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_55;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_56;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_57;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_58;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_59;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_60;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_61;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_62;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_63;
        CData/*5:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25;
        CData/*0:0*/ ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l32;
        WData/*87:0*/ ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[3];
        CData/*1:0*/ ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[8];
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[8];
        CData/*3:0*/ ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[32];
        CData/*3:0*/ ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[32];
        CData/*3:0*/ ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[32];
        CData/*2:0*/ ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[16];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vtableidx2;
    CData/*4:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read;
    CData/*0:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat;
    CData/*2:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state;
    CData/*4:0*/ __Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    CData/*3:0*/ __Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    CData/*0:0*/ __Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    CData/*4:0*/ __Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    CData/*3:0*/ __Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    CData/*0:0*/ __Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    CData/*4:0*/ __Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2__v0;
    CData/*3:0*/ __Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2__v0;
    CData/*0:0*/ __Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2__v0;
    CData/*1:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select;
    CData/*1:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt;
    CData/*3:0*/ __Vdlyvdim0__ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0;
    CData/*2:0*/ __Vdlyvval__ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last;
    CData/*0:0*/ __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    CData/*4:0*/ __Vtablechg1[128];
    static CData/*0:0*/ __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[128];
    static CData/*0:0*/ __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[128];
    static CData/*0:0*/ __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[128];
    static CData/*0:0*/ __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[128];
    static CData/*0:0*/ __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[128];
    static WData/*87:0*/ __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[8][3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VViterbiDecoder__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VViterbiDecoder);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VViterbiDecoder(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VViterbiDecoder();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VViterbiDecoder__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VViterbiDecoder__Syms* symsp, bool first);
  private:
    static QData _change_request(VViterbiDecoder__Syms* __restrict vlSymsp);
    static QData _change_request_1(VViterbiDecoder__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__35(VViterbiDecoder__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VViterbiDecoder__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VViterbiDecoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VViterbiDecoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__28(VViterbiDecoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__16(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__18(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__19(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__20(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__22(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__23(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__24(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__25(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__26(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__27(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__34(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__36(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _settle__TOP__29(VViterbiDecoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__33(VViterbiDecoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__17(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__9(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__2(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
