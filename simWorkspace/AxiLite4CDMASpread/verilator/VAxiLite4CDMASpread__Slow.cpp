// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4CDMASpread.h for the primary calling header

#include "VAxiLite4CDMASpread.h" // For This
#include "VAxiLite4CDMASpread__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VAxiLite4CDMASpread) {
    VAxiLite4CDMASpread__Syms* __restrict vlSymsp = __VlSymsp = new VAxiLite4CDMASpread__Syms(this, name());
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAxiLite4CDMASpread::__Vconfigure(VAxiLite4CDMASpread__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAxiLite4CDMASpread::~VAxiLite4CDMASpread() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VAxiLite4CDMASpread::_initial__TOP__1(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_initial__TOP__1\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:284
    vlTOPp->axil4Ctrl_rresp = 0U;
}

void VAxiLite4CDMASpread::_settle__TOP__7(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_settle__TOP__7\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:888
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkO_buf1) {
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_1 = 1U;
    }
    vlTOPp->mod_iq_payload_cha_i = (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i) 
					       + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i_1)));
    vlTOPp->mod_iq_payload_cha_q = (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q) 
					       + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q_1)));
    vlTOPp->mod_iq_valid = ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid) 
			    & (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid_1));
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt)));
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l65 
	= (0U == (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt));
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port0 
	= vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port1 
	= vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port2 
	= vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port3 
	= vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port4 
	= vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port5 
	= vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port6 
	= vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port7 
	= vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread_base_iq_ready 
	= ((0U == (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt)) 
	   & (~ (IData)(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkO_buf1)));
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4CDMASpread__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->AxiLite4CDMASpread__DOT__writeJoinEvent_valid 
	= ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rValid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:269
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rValid)))) {
	vlTOPp->axil4Ctrl_arready = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:287
    vlTOPp->AxiLite4CDMASpread__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rData_addr))) {
	vlTOPp->AxiLite4CDMASpread__DOT__readRsp_data 
	    = ((0xfffffffeU & vlTOPp->AxiLite4CDMASpread__DOT__readRsp_data) 
	       | (IData)(vlTOPp->AxiLite4CDMASpread__DOT__cdma_spread_bridge_clc_driver));
    }
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4CDMASpread__DOT___zz_axil4Ctrl_bvalid_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:258
    vlTOPp->AxiLite4CDMASpread__DOT___zz_writeJoinEvent_translated_ready 
	= vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4CDMASpread__DOT___zz_axil4Ctrl_bvalid_2)))) {
	vlTOPp->AxiLite4CDMASpread__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->base_iq_ready = vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread_base_iq_ready;
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l51 
	= (((IData)(vlTOPp->base_iq_valid) & (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread_base_iq_ready)) 
	   | (0U != (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt)));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4CDMASpread__DOT__readRsp_data;
}

void VAxiLite4CDMASpread::_settle__TOP__11(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_settle__TOP__11\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4CDMASpread__DOT__writeOccur = ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__writeJoinEvent_valid) 
						   & (IData)(vlTOPp->AxiLite4CDMASpread__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4CDMASpread__DOT__writeOccur;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4CDMASpread__DOT__writeOccur;
}

void VAxiLite4CDMASpread::_eval_initial(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_eval_initial\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VAxiLite4CDMASpread::final() {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::final\n"); );
    // Variables
    VAxiLite4CDMASpread__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAxiLite4CDMASpread::_eval_settle(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_eval_settle\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__11(vlSymsp);
}

void VAxiLite4CDMASpread::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_ctor_var_reset\n"); );
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
    base_iq_valid = VL_RAND_RESET_I(1);
    base_iq_ready = VL_RAND_RESET_I(1);
    base_iq_payload_0_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_0_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_1_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_1_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_2_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_2_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_3_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_3_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_4_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_4_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_5_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_5_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_6_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_6_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_7_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_7_cha_q = VL_RAND_RESET_I(16);
    mod_iq_valid = VL_RAND_RESET_I(1);
    mod_iq_payload_cha_i = VL_RAND_RESET_I(16);
    mod_iq_payload_cha_q = VL_RAND_RESET_I(16);
    rf_clk = VL_RAND_RESET_I(1);
    rf_resetn = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread_base_iq_ready = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    AxiLite4CDMASpread__DOT__readRsp_data = VL_RAND_RESET_I(32);
    AxiLite4CDMASpread__DOT__writeOccur = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__cdma_spread_bridge_clc_driver = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT___zz_dataIn = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT___zz_dataIn_1 = VL_RAND_RESET_I(3);
    AxiLite4CDMASpread__DOT___zz_dataIn_2 = VL_RAND_RESET_I(8);
    AxiLite4CDMASpread__DOT___zz_dataIn_3 = VL_RAND_RESET_I(3);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port0 = VL_RAND_RESET_I(8);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port1 = VL_RAND_RESET_I(8);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port2 = VL_RAND_RESET_I(8);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port3 = VL_RAND_RESET_I(8);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port4 = VL_RAND_RESET_I(8);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port5 = VL_RAND_RESET_I(8);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port6 = VL_RAND_RESET_I(8);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port7 = VL_RAND_RESET_I(8);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_1 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_1 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_2 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_3 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_4 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_5 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_6 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_7 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l51 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l65 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[__Vi0] = VL_RAND_RESET_I(8);
    }}
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid_1 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkI_reg = VL_RAND_RESET_I(3);
    AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkO_buf0 = VL_RAND_RESET_I(3);
    AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkO_buf1 = VL_RAND_RESET_I(3);
    AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkI_reg = VL_RAND_RESET_I(8);
    AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkO_buf0 = VL_RAND_RESET_I(8);
    AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkO_buf1 = VL_RAND_RESET_I(8);
    AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkI_reg = VL_RAND_RESET_I(3);
    AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkO_buf0 = VL_RAND_RESET_I(3);
    AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkO_buf1 = VL_RAND_RESET_I(3);
    __Vdly__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt = VL_RAND_RESET_I(3);
    __Vclklast__TOP__rf_clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VAxiLite4CDMASpread::_configure_coverage(VAxiLite4CDMASpread__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_configure_coverage\n"); );
}
