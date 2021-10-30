// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAXILITE4DEMODULATOR_H_
#define _VAXILITE4DEMODULATOR_H_  // guard

#include "verilated.h"

//==========

class VAxiLite4Demodulator__Syms;
class VAxiLite4Demodulator_VerilatedVcd;


//----------

VL_MODULE(VAxiLite4Demodulator) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(rf_clk,0,0);
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
    VL_IN8(mod_iq_valid,0,0);
    VL_OUT8(base_data_valid,0,0);
    VL_IN8(rf_resetn,0,0);
    VL_IN16(mod_iq_payload_cha_i,15,0);
    VL_IN16(mod_iq_payload_cha_q,15,0);
    VL_IN(axil4Ctrl_wdata,31,0);
    VL_OUT(axil4Ctrl_rdata,31,0);
    VL_OUT(base_data_payload,23,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ AxiLite4Demodulator__DOT__writeJoinEvent_valid;
        CData/*0:0*/ AxiLite4Demodulator__DOT__writeJoinEvent_fire;
        CData/*0:0*/ AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready;
        CData/*0:0*/ AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2;
        CData/*1:0*/ AxiLite4Demodulator__DOT___zz_axil4Ctrl_bresp;
        CData/*0:0*/ AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid;
        CData/*7:0*/ AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr;
        CData/*2:0*/ AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_prot;
        CData/*0:0*/ AxiLite4Demodulator__DOT__demod_rtl_bridge_w_en_driver;
        CData/*1:0*/ AxiLite4Demodulator__DOT__demod_rtl_bridge_w_sel_driver;
        CData/*2:0*/ AxiLite4Demodulator__DOT__demod_rtl_bridge_iq_shift_driver;
        CData/*5:0*/ AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_w_addr;
        CData/*2:0*/ AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_select;
        CData/*0:0*/ AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver;
        CData/*4:0*/ AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver;
        CData/*4:0*/ AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_1_valid;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_2_valid;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_3_valid;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_valid_i;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__compTable_i;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_valid;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__unit_data_i;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__unit_valid;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid_i;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid_q;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__compTable_i;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__codeTable_q;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_i;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_q;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_valid;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_valid_i;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_valid_q;
        CData/*2:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_i;
        CData/*2:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_q;
        CData/*2:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__compTable_i;
        CData/*2:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__codeTable_q;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_valid;
        CData/*1:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_i;
        CData/*1:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_q;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_valid;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_valid_i;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_valid_q;
        CData/*4:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_i;
        CData/*4:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_q;
        CData/*4:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__compTable_i;
        CData/*4:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__codeTable_q;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_valid;
        CData/*2:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_i;
        CData/*2:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_q;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_valid;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_valid_iq;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_0;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_1;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_2;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_3;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_4;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_5;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_6;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_7;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_8;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_9;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_10;
    };
    struct {
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_11;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_12;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_13;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_14;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_15;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_16;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_17;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_18;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_19;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_20;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_21;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_22;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_23;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_24;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_25;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_26;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_27;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_28;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_29;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_30;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_31;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_32;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_33;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_34;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_35;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_36;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_37;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_38;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_39;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_40;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_41;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_42;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_43;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_44;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_45;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_46;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_47;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_48;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_49;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_50;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_51;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_52;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_53;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_54;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_55;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_56;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_57;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_58;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_59;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_60;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_61;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_62;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_63;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_0;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_1;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_2;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_3;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_4;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_5;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_6;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_7;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_8;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_9;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_10;
    };
    struct {
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_11;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_12;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_13;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_14;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_15;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_16;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_17;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_18;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_19;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_20;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_21;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_22;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_23;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_24;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_25;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_26;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_27;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_28;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_29;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_30;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_31;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_32;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_33;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_34;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_35;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_36;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_37;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_38;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_39;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_40;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_41;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_42;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_43;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_44;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_45;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_46;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_47;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_48;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_49;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_50;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_51;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_52;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_53;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_54;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_55;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_56;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_57;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_58;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_59;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_60;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_61;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_62;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_63;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_valid;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i;
        CData/*5:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_valid;
        CData/*4:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_cnt;
        CData/*4:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_valid_1;
        CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1;
        CData/*0:0*/ AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkI_reg;
        CData/*0:0*/ AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf0;
        CData/*0:0*/ AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1;
    };
    struct {
        CData/*1:0*/ AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkI_reg;
        CData/*1:0*/ AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf0;
        CData/*1:0*/ AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1;
        CData/*2:0*/ AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkI_reg;
        CData/*2:0*/ AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkO_buf0;
        CData/*2:0*/ AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkO_buf1;
        CData/*5:0*/ AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkI_reg;
        CData/*5:0*/ AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf0;
        CData/*5:0*/ AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1;
        CData/*2:0*/ AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkI_reg;
        CData/*2:0*/ AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf0;
        CData/*2:0*/ AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1;
        CData/*0:0*/ AxiLite4Demodulator__DOT__clkCrossing_15__DOT__area_clkI_reg;
        CData/*0:0*/ AxiLite4Demodulator__DOT__clkCrossing_15__DOT__area_clkO_buf0;
        CData/*0:0*/ AxiLite4Demodulator__DOT__clkCrossing_15__DOT__area_clkO_buf1;
        CData/*4:0*/ AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkI_reg;
        CData/*4:0*/ AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkO_buf0;
        CData/*4:0*/ AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkO_buf1;
        CData/*4:0*/ AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkI_reg;
        CData/*4:0*/ AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkO_buf0;
        CData/*4:0*/ AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkO_buf1;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_data_i;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_data_i;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_data_q;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_data_i;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_data_q;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_i;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_q;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_0;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_1;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_2;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_3;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_4;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_5;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_6;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_7;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_8;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_9;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_10;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_11;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_12;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_13;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_14;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_15;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_16;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_17;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_18;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_19;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_20;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_21;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_22;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_23;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_24;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_25;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_26;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_27;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_28;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_29;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_30;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_31;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_32;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_33;
    };
    struct {
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_34;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_35;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_36;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_37;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_38;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_39;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_40;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_41;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_42;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_43;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_44;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_45;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_46;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_47;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_48;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_49;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_50;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_51;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_52;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_53;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_54;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_55;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_56;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_57;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_58;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_59;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_60;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_61;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_62;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_0;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_1;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_2;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_3;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_4;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_5;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_6;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_7;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_8;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_9;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_10;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_11;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_12;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_13;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_14;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_15;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_16;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_17;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_18;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_19;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_20;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_21;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_22;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_23;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_24;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_25;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_26;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_27;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_28;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_29;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_30;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_31;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_32;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_33;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_34;
    };
    struct {
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_35;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_36;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_37;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_38;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_39;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_40;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_41;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_42;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_43;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_44;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_45;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_46;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_47;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_48;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_49;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_50;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_51;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_52;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_53;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_54;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_55;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_56;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_57;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_58;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_59;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_60;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_61;
        SData/*15:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_62;
        IData/*31:0*/ AxiLite4Demodulator__DOT__readRsp_data;
        IData/*31:0*/ AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_w_data;
        IData/*23:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_buffer;
        IData/*23:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer;
        IData/*31:0*/ AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkI_reg;
        IData/*31:0*/ AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf0;
        IData/*31:0*/ AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1;
        QData/*62:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i;
        QData/*62:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q;
        QData/*62:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i;
        QData/*62:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q;
        QData/*54:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_data_buffer;
        QData/*54:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_data_buffer_3;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*4:0*/ __Vdly__AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rf_clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    CData/*1:0*/ __Vtablechg1[128];
    CData/*1:0*/ __Vtablechg2[2048];
    static CData/*1:0*/ __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_i[128];
    static CData/*1:0*/ __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_q[128];
    static CData/*2:0*/ __Vtable2_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_i[2048];
    static CData/*2:0*/ __Vtable2_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_q[2048];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAxiLite4Demodulator__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAxiLite4Demodulator);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAxiLite4Demodulator(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAxiLite4Demodulator();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAxiLite4Demodulator__Syms* symsp, bool first);
  private:
    static QData _change_request(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__35(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _combo__TOP__38(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAxiLite4Demodulator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAxiLite4Demodulator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VAxiLite4Demodulator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__16(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__18(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__19(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__20(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__21(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__22(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__23(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__24(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__25(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__26(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__27(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__28(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__30(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__34(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__36(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__37(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _settle__TOP__31(VAxiLite4Demodulator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__33(VAxiLite4Demodulator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__13(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__7(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__2(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
