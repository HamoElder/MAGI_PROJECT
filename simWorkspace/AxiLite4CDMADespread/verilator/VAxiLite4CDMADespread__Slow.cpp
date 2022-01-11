// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4CDMADespread.h for the primary calling header

#include "VAxiLite4CDMADespread.h" // For This
#include "VAxiLite4CDMADespread__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VAxiLite4CDMADespread) {
    VAxiLite4CDMADespread__Syms* __restrict vlSymsp = __VlSymsp = new VAxiLite4CDMADespread__Syms(this, name());
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAxiLite4CDMADespread::__Vconfigure(VAxiLite4CDMADespread__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAxiLite4CDMADespread::~VAxiLite4CDMADespread() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VAxiLite4CDMADespread::_initial__TOP__1(VAxiLite4CDMADespread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMADespread::_initial__TOP__1\n"); );
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,575,0,18);
    // Body
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:264
    vlTOPp->axil4Ctrl_rresp = 0U;
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:524
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f6d6170U;
    __Vtemp1[2U] = 0x636f6465U;
    __Vtemp1[3U] = 0x6561645fU;
    __Vtemp1[4U] = 0x65737072U;
    __Vtemp1[5U] = 0x6d615f64U;
    __Vtemp1[6U] = 0x615f6364U;
    __Vtemp1[7U] = 0x6b417265U;
    __Vtemp1[8U] = 0x436c6f63U;
    __Vtemp1[9U] = 0x6c5f7266U;
    __Vtemp1[0xaU] = 0x6c657665U;
    __Vtemp1[0xbU] = 0x5f746f70U;
    __Vtemp1[0xcU] = 0x61642e76U;
    __Vtemp1[0xdU] = 0x73707265U;
    __Vtemp1[0xeU] = 0x4d414465U;
    __Vtemp1[0xfU] = 0x65344344U;
    __Vtemp1[0x10U] = 0x694c6974U;
    __Vtemp1[0x11U] = 0x4178U;
    VL_READMEM_W (false,8,8, 0,18, __Vtemp1, vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map
		  ,0,~0);
}

void VAxiLite4CDMADespread::_settle__TOP__13(VAxiLite4CDMADespread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMADespread::_settle__TOP__13\n"); );
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->base_sub_iqs_0_payload_cha_i = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_0_payload_cha_q = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_1_payload_cha_i = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_1_payload_cha_q = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_2_payload_cha_i = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_2_payload_cha_q = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_3_payload_cha_i = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_3_payload_cha_q = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_4_payload_cha_i = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_4_payload_cha_q = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_5_payload_cha_i = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_5_payload_cha_q = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_6_payload_cha_i = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_6_payload_cha_q = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_7_payload_cha_i = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_7_payload_cha_q = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_0_valid = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_1_valid = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_2_valid = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_3_valid = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_4_valid = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_5_valid = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_6_valid = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_7_valid = vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT___zz_base_iq_valid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:645
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_6__DOT__area_clkO_buf1) {
	vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__cnt)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__cnt)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__cnt)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__cnt)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__cnt)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__cnt)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__cnt)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__cnt)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port0 
	= vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[0U];
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port1 
	= vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[1U];
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port2 
	= vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[2U];
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port3 
	= vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[3U];
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port4 
	= vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[4U];
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port5 
	= vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[5U];
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port6 
	= vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[6U];
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port7 
	= vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[7U];
    vlTOPp->mod_iq_ready = (1U & (~ (IData)(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_5__DOT__area_clkO_buf1)));
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4CDMADespread__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->AxiLite4CDMADespread__DOT__writeJoinEvent_valid 
	= ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rValid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:249
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rValid)))) {
	vlTOPp->axil4Ctrl_arready = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:267
    vlTOPp->AxiLite4CDMADespread__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rData_addr))) {
	vlTOPp->AxiLite4CDMADespread__DOT__readRsp_data 
	    = ((0xfffffffeU & vlTOPp->AxiLite4CDMADespread__DOT__readRsp_data) 
	       | (IData)(vlTOPp->AxiLite4CDMADespread__DOT__cdma_spread_bridge_clc_driver));
    }
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4CDMADespread__DOT___zz_axil4Ctrl_bvalid_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:238
    vlTOPp->AxiLite4CDMADespread__DOT___zz_writeJoinEvent_translated_ready 
	= vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4CDMADespread__DOT___zz_axil4Ctrl_bvalid_2)))) {
	vlTOPp->AxiLite4CDMADespread__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port0) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port0) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port1) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port1) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port2) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port2) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port3) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port3) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port4) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port4) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port5) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port5) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port6) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port6) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port7) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port7) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__cnt)))))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4CDMADespread__DOT__readRsp_data;
}

void VAxiLite4CDMADespread::_settle__TOP__16(VAxiLite4CDMADespread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMADespread::_settle__TOP__16\n"); );
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4CDMADespread__DOT__writeOccur = 
	((IData)(vlTOPp->AxiLite4CDMADespread__DOT__writeJoinEvent_valid) 
	 & (IData)(vlTOPp->AxiLite4CDMADespread__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_i) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__data_i)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_q) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__data_q)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_i) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__data_i)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_q) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__data_q)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_i) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__data_i)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_q) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__data_q)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_i) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__data_i)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_q) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__data_q)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_i) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__data_i)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_q) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__data_q)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_i) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__data_i)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_q) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__data_q)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_i) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__data_i)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_q) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__data_q)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_i) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__data_i)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_q) 
		       + (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__data_q)) 
		      - (IData)(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4CDMADespread__DOT__writeOccur;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4CDMADespread__DOT__writeOccur;
}

void VAxiLite4CDMADespread::_eval_initial(VAxiLite4CDMADespread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMADespread::_eval_initial\n"); );
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAxiLite4CDMADespread::final() {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMADespread::final\n"); );
    // Variables
    VAxiLite4CDMADespread__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAxiLite4CDMADespread::_eval_settle(VAxiLite4CDMADespread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMADespread::_eval_settle\n"); );
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__13(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__16(vlSymsp);
}

void VAxiLite4CDMADespread::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMADespread::_ctor_var_reset\n"); );
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
    mod_iq_valid = VL_RAND_RESET_I(1);
    mod_iq_ready = VL_RAND_RESET_I(1);
    mod_iq_payload_cha_i = VL_RAND_RESET_I(16);
    mod_iq_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_0_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_0_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_0_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_1_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_1_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_1_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_2_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_2_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_2_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_3_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_3_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_3_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_4_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_4_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_4_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_5_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_5_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_5_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_6_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_6_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_6_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_7_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_7_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_7_payload_cha_q = VL_RAND_RESET_I(16);
    rf_clk = VL_RAND_RESET_I(1);
    rf_resetn = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__readRsp_data = VL_RAND_RESET_I(32);
    AxiLite4CDMADespread__DOT__writeOccur = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__cdma_spread_bridge_clc_driver = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT___zz_dataIn = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT___zz_dataIn_1 = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT___zz_dataIn_2 = VL_RAND_RESET_I(8);
    AxiLite4CDMADespread__DOT___zz_dataIn_3 = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port0 = VL_RAND_RESET_I(8);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port1 = VL_RAND_RESET_I(8);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port2 = VL_RAND_RESET_I(8);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port3 = VL_RAND_RESET_I(8);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port4 = VL_RAND_RESET_I(8);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port5 = VL_RAND_RESET_I(8);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port6 = VL_RAND_RESET_I(8);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port7 = VL_RAND_RESET_I(8);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_1 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[__Vi0] = VL_RAND_RESET_I(8);
    }}
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT___zz_cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__data_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__data_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_i_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_q_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT___zz_cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__data_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__data_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_i_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_q_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT___zz_cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__data_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__data_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_i_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_q_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT___zz_cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__data_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__data_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_i_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_q_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT___zz_cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__data_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__data_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_i_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_q_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT___zz_cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__data_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__data_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_i_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_q_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT___zz_cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__data_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__data_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_i_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_q_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT___zz_cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__cnt = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__data_i = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__data_q = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_i_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_q_next = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    AxiLite4CDMADespread__DOT__clkCrossing_5__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__clkCrossing_5__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__clkCrossing_5__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__clkCrossing_6__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__clkCrossing_6__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__clkCrossing_6__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4CDMADespread__DOT__clkCrossing_7__DOT__area_clkI_reg = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__clkCrossing_7__DOT__area_clkO_buf0 = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__clkCrossing_7__DOT__area_clkO_buf1 = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__clkCrossing_8__DOT__area_clkI_reg = VL_RAND_RESET_I(8);
    AxiLite4CDMADespread__DOT__clkCrossing_8__DOT__area_clkO_buf0 = VL_RAND_RESET_I(8);
    AxiLite4CDMADespread__DOT__clkCrossing_8__DOT__area_clkO_buf1 = VL_RAND_RESET_I(8);
    AxiLite4CDMADespread__DOT__clkCrossing_9__DOT__area_clkI_reg = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__clkCrossing_9__DOT__area_clkO_buf0 = VL_RAND_RESET_I(3);
    AxiLite4CDMADespread__DOT__clkCrossing_9__DOT__area_clkO_buf1 = VL_RAND_RESET_I(3);
    __Vdlyvdim0__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map__v0 = VL_RAND_RESET_I(3);
    __Vdlyvval__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map__v0 = VL_RAND_RESET_I(1);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vclklast__TOP__rf_clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VAxiLite4CDMADespread::_configure_coverage(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMADespread::_configure_coverage\n"); );
}
