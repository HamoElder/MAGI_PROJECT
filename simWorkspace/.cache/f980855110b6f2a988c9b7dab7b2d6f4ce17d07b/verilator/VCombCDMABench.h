// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCOMBCDMABENCH_H_
#define _VCOMBCDMABENCH_H_  // guard

#include "verilated_heavy.h"

//==========

class VCombCDMABench__Syms;
class VCombCDMABench_VerilatedVcd;


//----------

VL_MODULE(VCombCDMABench) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(rf_clk,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(axil4Ctrl_spread_aw_valid,0,0);
    VL_OUT8(axil4Ctrl_spread_aw_ready,0,0);
    VL_IN8(axil4Ctrl_spread_aw_payload_addr,7,0);
    VL_IN8(axil4Ctrl_spread_aw_payload_prot,2,0);
    VL_IN8(axil4Ctrl_spread_w_valid,0,0);
    VL_OUT8(axil4Ctrl_spread_w_ready,0,0);
    VL_IN8(axil4Ctrl_spread_w_payload_strb,3,0);
    VL_OUT8(axil4Ctrl_spread_b_valid,0,0);
    VL_IN8(axil4Ctrl_spread_b_ready,0,0);
    VL_OUT8(axil4Ctrl_spread_b_payload_resp,1,0);
    VL_IN8(axil4Ctrl_spread_ar_valid,0,0);
    VL_OUT8(axil4Ctrl_spread_ar_ready,0,0);
    VL_IN8(axil4Ctrl_spread_ar_payload_addr,7,0);
    VL_IN8(axil4Ctrl_spread_ar_payload_prot,2,0);
    VL_OUT8(axil4Ctrl_spread_r_valid,0,0);
    VL_IN8(axil4Ctrl_spread_r_ready,0,0);
    VL_OUT8(axil4Ctrl_spread_r_payload_resp,1,0);
    VL_IN8(axil4Ctrl_despread_aw_valid,0,0);
    VL_OUT8(axil4Ctrl_despread_aw_ready,0,0);
    VL_IN8(axil4Ctrl_despread_aw_payload_addr,7,0);
    VL_IN8(axil4Ctrl_despread_aw_payload_prot,2,0);
    VL_IN8(axil4Ctrl_despread_w_valid,0,0);
    VL_OUT8(axil4Ctrl_despread_w_ready,0,0);
    VL_IN8(axil4Ctrl_despread_w_payload_strb,3,0);
    VL_OUT8(axil4Ctrl_despread_b_valid,0,0);
    VL_IN8(axil4Ctrl_despread_b_ready,0,0);
    VL_OUT8(axil4Ctrl_despread_b_payload_resp,1,0);
    VL_IN8(axil4Ctrl_despread_ar_valid,0,0);
    VL_OUT8(axil4Ctrl_despread_ar_ready,0,0);
    VL_IN8(axil4Ctrl_despread_ar_payload_addr,7,0);
    VL_IN8(axil4Ctrl_despread_ar_payload_prot,2,0);
    VL_OUT8(axil4Ctrl_despread_r_valid,0,0);
    VL_IN8(axil4Ctrl_despread_r_ready,0,0);
    VL_OUT8(axil4Ctrl_despread_r_payload_resp,1,0);
    VL_IN8(base_iq_in_valid,0,0);
    VL_OUT8(base_iq_in_ready,0,0);
    VL_OUT8(base_sub_iqs_0_valid,0,0);
    VL_OUT8(base_sub_iqs_1_valid,0,0);
    VL_OUT8(base_sub_iqs_2_valid,0,0);
    VL_OUT8(base_sub_iqs_3_valid,0,0);
    VL_OUT8(base_sub_iqs_4_valid,0,0);
    VL_OUT8(base_sub_iqs_5_valid,0,0);
    VL_OUT8(base_sub_iqs_6_valid,0,0);
    VL_OUT8(base_sub_iqs_7_valid,0,0);
    VL_IN8(rf_resetn,0,0);
    VL_IN16(base_iq_in_payload_0_cha_i,15,0);
    VL_IN16(base_iq_in_payload_0_cha_q,15,0);
    VL_IN16(base_iq_in_payload_1_cha_i,15,0);
    VL_IN16(base_iq_in_payload_1_cha_q,15,0);
    VL_IN16(base_iq_in_payload_2_cha_i,15,0);
    VL_IN16(base_iq_in_payload_2_cha_q,15,0);
    VL_IN16(base_iq_in_payload_3_cha_i,15,0);
    VL_IN16(base_iq_in_payload_3_cha_q,15,0);
    VL_IN16(base_iq_in_payload_4_cha_i,15,0);
    VL_IN16(base_iq_in_payload_4_cha_q,15,0);
    VL_IN16(base_iq_in_payload_5_cha_i,15,0);
    VL_IN16(base_iq_in_payload_5_cha_q,15,0);
    VL_IN16(base_iq_in_payload_6_cha_i,15,0);
    VL_IN16(base_iq_in_payload_6_cha_q,15,0);
    VL_IN16(base_iq_in_payload_7_cha_i,15,0);
    VL_IN16(base_iq_in_payload_7_cha_q,15,0);
    VL_OUT16(base_sub_iqs_0_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_0_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_1_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_1_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_2_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_2_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_3_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_3_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_4_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_4_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_5_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_5_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_6_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_6_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_7_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_7_payload_cha_q,15,0);
    VL_IN(axil4Ctrl_spread_w_payload_data,31,0);
    VL_OUT(axil4Ctrl_spread_r_payload_data,31,0);
    VL_IN(axil4Ctrl_despread_w_payload_data,31,0);
    VL_OUT(axil4Ctrl_despread_r_payload_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread_axil4Ctrl_arready;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread_axil4Ctrl_arready;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread_base_iq_ready;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__writeJoinEvent_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__writeJoinEvent_fire;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT___zz_writeJoinEvent_translated_ready;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT___zz_axil4Ctrl_bvalid_2;
        CData/*1:0*/ CombCDMABench__DOT__cdma_spread__DOT___zz_axil4Ctrl_bresp;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rValid;
        CData/*7:0*/ CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rData_addr;
        CData/*2:0*/ CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rData_prot;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__cdma_spread_bridge_clc_driver;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn;
        CData/*2:0*/ CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn_1;
        CData/*7:0*/ CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn_2;
        CData/*2:0*/ CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn_3;
        CData/*2:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_cnt;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_1;
        CData/*2:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_1;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_2;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_3;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_4;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_5;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_6;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_7;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l51;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid_1;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_10__DOT__area_clkI_reg;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_10__DOT__area_clkO_buf0;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_10__DOT__area_clkO_buf1;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_11__DOT__area_clkI_reg;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_11__DOT__area_clkO_buf0;
        CData/*0:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_11__DOT__area_clkO_buf1;
        CData/*2:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_12__DOT__area_clkI_reg;
        CData/*2:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_12__DOT__area_clkO_buf0;
        CData/*2:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_12__DOT__area_clkO_buf1;
        CData/*7:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_13__DOT__area_clkI_reg;
        CData/*7:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_13__DOT__area_clkO_buf0;
        CData/*7:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_13__DOT__area_clkO_buf1;
        CData/*2:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_14__DOT__area_clkI_reg;
        CData/*2:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_14__DOT__area_clkO_buf0;
        CData/*2:0*/ CombCDMABench__DOT__cdma_spread__DOT__fFSynchronizer_14__DOT__area_clkO_buf1;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__writeJoinEvent_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__writeJoinEvent_fire;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT___zz_writeJoinEvent_translated_ready;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT___zz_axil4Ctrl_bvalid_2;
        CData/*1:0*/ CombCDMABench__DOT__cdma_despread__DOT___zz_axil4Ctrl_bresp;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rValid;
        CData/*7:0*/ CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rData_addr;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rData_prot;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__cdma_spread_bridge_clc_driver;
    };
    struct {
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn_1;
        CData/*7:0*/ CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn_2;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn_3;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_1;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT___zz_cnt;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__cnt;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT___zz_base_iq_valid;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT___zz_cnt;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__cnt;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT___zz_base_iq_valid;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT___zz_cnt;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__cnt;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT___zz_base_iq_valid;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT___zz_cnt;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__cnt;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT___zz_base_iq_valid;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT___zz_cnt;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__cnt;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT___zz_base_iq_valid;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT___zz_cnt;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__cnt;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT___zz_base_iq_valid;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT___zz_cnt;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__cnt;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT___zz_base_iq_valid;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT___zz_cnt;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__cnt;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT___zz_base_iq_valid;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_10__DOT__area_clkI_reg;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_10__DOT__area_clkO_buf0;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_10__DOT__area_clkO_buf1;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_11__DOT__area_clkI_reg;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_11__DOT__area_clkO_buf0;
        CData/*0:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_11__DOT__area_clkO_buf1;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_12__DOT__area_clkI_reg;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_12__DOT__area_clkO_buf0;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_12__DOT__area_clkO_buf1;
        CData/*7:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_13__DOT__area_clkI_reg;
        CData/*7:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_13__DOT__area_clkO_buf0;
        CData/*7:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_13__DOT__area_clkO_buf1;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_14__DOT__area_clkI_reg;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_14__DOT__area_clkO_buf0;
        CData/*2:0*/ CombCDMABench__DOT__cdma_despread__DOT__fFSynchronizer_14__DOT__area_clkO_buf1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_q;
    };
    struct {
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__data_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__data_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__data_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__data_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_5;
    };
    struct {
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__data_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__data_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__data_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__data_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__data_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__data_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_5;
    };
    struct {
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__data_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__data_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__data_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__data_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__data_i;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__data_q;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i_next;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q_next;
    };
    struct {
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q_next_regNext;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_7;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_0;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_1;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_2;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_3;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_4;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_5;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_6;
        SData/*15:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_7;
        IData/*31:0*/ CombCDMABench__DOT__cdma_spread__DOT__readRsp_data;
        IData/*31:0*/ CombCDMABench__DOT__cdma_despread__DOT__readRsp_data;
        CData/*7:0*/ CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[8];
        CData/*7:0*/ CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[8];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vdlyvdim0__CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0;
    CData/*7:0*/ __Vdlyvval__CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0;
    CData/*0:0*/ __Vdlyvset__CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0;
    CData/*2:0*/ __Vdly__CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt;
    CData/*2:0*/ __Vdlyvdim0__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map__v0;
    CData/*7:0*/ __Vdlyvval__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map__v0;
    CData/*0:0*/ __Vdlyvset__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map__v0;
    CData/*2:0*/ __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__cnt;
    CData/*2:0*/ __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__cnt;
    CData/*2:0*/ __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__cnt;
    CData/*2:0*/ __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__cnt;
    CData/*2:0*/ __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__cnt;
    CData/*2:0*/ __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__cnt;
    CData/*2:0*/ __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__cnt;
    CData/*2:0*/ __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__cnt;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rf_clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vm_traceActivity[7];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCombCDMABench__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCombCDMABench);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCombCDMABench(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCombCDMABench();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCombCDMABench__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCombCDMABench__Syms* symsp, bool first);
  private:
    static QData _change_request(VCombCDMABench__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCombCDMABench__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__21(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _combo__TOP__23(VCombCDMABench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCombCDMABench__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCombCDMABench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCombCDMABench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VCombCDMABench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__16(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__20(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__22(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VCombCDMABench__Syms* __restrict vlSymsp);
    static void _settle__TOP__18(VCombCDMABench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__19(VCombCDMABench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgSub1(void* userp, VerilatedVcd* tracep);
    static void traceChgSub2(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub2(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub2(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub3(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub4(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
