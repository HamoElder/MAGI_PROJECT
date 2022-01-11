// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCombCDMABench.h for the primary calling header

#include "VCombCDMABench.h"    // For This
#include "VCombCDMABench__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VCombCDMABench) {
    VCombCDMABench__Syms* __restrict vlSymsp = __VlSymsp = new VCombCDMABench__Syms(this, name());
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCombCDMABench::__Vconfigure(VCombCDMABench__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCombCDMABench::~VCombCDMABench() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VCombCDMABench::_initial__TOP__1(VCombCDMABench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCombCDMABench::_initial__TOP__1\n"); );
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,607,0,19);
    //char	__VpadToAlign84[4];
    VL_SIGW(__Vtemp2,639,0,20);
    // Body
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:245
    vlTOPp->axil4Ctrl_spread_r_payload_resp = 0U;
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:254
    vlTOPp->axil4Ctrl_despread_r_payload_resp = 0U;
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1582
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f6d6170U;
    __Vtemp1[2U] = 0x636f6465U;
    __Vtemp1[3U] = 0x6561645fU;
    __Vtemp1[4U] = 0x5f737072U;
    __Vtemp1[5U] = 0x63646d61U;
    __Vtemp1[6U] = 0x7265615fU;
    __Vtemp1[7U] = 0x6f636b41U;
    __Vtemp1[8U] = 0x7266436cU;
    __Vtemp1[9U] = 0x6561645fU;
    __Vtemp1[0xaU] = 0x5f737072U;
    __Vtemp1[0xbU] = 0x63646d61U;
    __Vtemp1[0xcU] = 0x76656c5fU;
    __Vtemp1[0xdU] = 0x6f706c65U;
    __Vtemp1[0xeU] = 0x2e765f74U;
    __Vtemp1[0xfU] = 0x656e6368U;
    __Vtemp1[0x10U] = 0x444d4142U;
    __Vtemp1[0x11U] = 0x6f6d6243U;
    __Vtemp1[0x12U] = 0x43U;
    VL_READMEM_W (false,8,8, 0,19, __Vtemp1, vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map
		  ,0,~0);
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1082
    __Vtemp2[0U] = 0x2e62696eU;
    __Vtemp2[1U] = 0x5f6d6170U;
    __Vtemp2[2U] = 0x636f6465U;
    __Vtemp2[3U] = 0x6561645fU;
    __Vtemp2[4U] = 0x65737072U;
    __Vtemp2[5U] = 0x6d615f64U;
    __Vtemp2[6U] = 0x615f6364U;
    __Vtemp2[7U] = 0x6b417265U;
    __Vtemp2[8U] = 0x436c6f63U;
    __Vtemp2[9U] = 0x645f7266U;
    __Vtemp2[0xaU] = 0x70726561U;
    __Vtemp2[0xbU] = 0x5f646573U;
    __Vtemp2[0xcU] = 0x63646d61U;
    __Vtemp2[0xdU] = 0x76656c5fU;
    __Vtemp2[0xeU] = 0x6f706c65U;
    __Vtemp2[0xfU] = 0x2e765f74U;
    __Vtemp2[0x10U] = 0x656e6368U;
    __Vtemp2[0x11U] = 0x444d4142U;
    __Vtemp2[0x12U] = 0x6f6d6243U;
    __Vtemp2[0x13U] = 0x43U;
    VL_READMEM_W (false,8,8, 0,20, __Vtemp2, vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map
		  ,0,~0);
}

void VCombCDMABench::_settle__TOP__16(VCombCDMABench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCombCDMABench::_settle__TOP__16\n"); );
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->base_sub_iqs_0_payload_cha_i = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_0_payload_cha_q = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_1_payload_cha_i = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_1_payload_cha_q = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_2_payload_cha_i = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_2_payload_cha_q = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_3_payload_cha_i = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_3_payload_cha_q = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_4_payload_cha_i = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_4_payload_cha_q = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_5_payload_cha_i = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_5_payload_cha_q = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_6_payload_cha_i = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_6_payload_cha_q = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_7_payload_cha_i = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_7_payload_cha_q = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_0_valid = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_1_valid = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_2_valid = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_3_valid = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_4_valid = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_5_valid = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_6_valid = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_7_valid = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT___zz_base_iq_valid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1687
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_1 = 0U;
    if (vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_11__DOT__area_clkO_buf1) {
	vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1203
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_1 = 0U;
    if (vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_11__DOT__area_clkO_buf1) {
	vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_1 = 1U;
    }
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__cnt)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__cnt)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__cnt)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__cnt)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__cnt)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__cnt)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__cnt)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__cnt)));
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_valid 
	= ((((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_valid) 
	     & (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_valid)) 
	    & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_valid) 
	       & (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_valid))) 
	   & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_valid) 
	       & (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_valid)) 
	      & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_valid) 
		 & (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_valid))));
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i 
	= (0xffffU & (((((0xe000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_i) 
							     >> 0xfU)))) 
				     << 0xdU)) | (0x1fffU 
						  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_i) 
						     >> 3U))) 
			+ ((0xe000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_i) 
							       >> 0xfU)))) 
				       << 0xdU)) | 
			   (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_i) 
				       >> 3U)))) + 
		       (((0xe000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_i) 
							     >> 0xfU)))) 
				     << 0xdU)) | (0x1fffU 
						  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_i) 
						     >> 3U))) 
			+ ((0xe000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_i) 
							       >> 0xfU)))) 
				       << 0xdU)) | 
			   (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_i) 
				       >> 3U))))) + 
		      ((((0xe000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_i) 
							     >> 0xfU)))) 
				     << 0xdU)) | (0x1fffU 
						  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_i) 
						     >> 3U))) 
			+ ((0xe000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_i) 
							       >> 0xfU)))) 
				       << 0xdU)) | 
			   (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_i) 
				       >> 3U)))) + 
		       (((0xe000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_i) 
							     >> 0xfU)))) 
				     << 0xdU)) | (0x1fffU 
						  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_i) 
						     >> 3U))) 
			+ ((0xe000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_i) 
							       >> 0xfU)))) 
				       << 0xdU)) | 
			   (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_i) 
				       >> 3U)))))));
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q 
	= (0xffffU & (((((0xe000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_q) 
							     >> 0xfU)))) 
				     << 0xdU)) | (0x1fffU 
						  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_q) 
						     >> 3U))) 
			+ ((0xe000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_q) 
							       >> 0xfU)))) 
				       << 0xdU)) | 
			   (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_q) 
				       >> 3U)))) + 
		       (((0xe000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_q) 
							     >> 0xfU)))) 
				     << 0xdU)) | (0x1fffU 
						  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_q) 
						     >> 3U))) 
			+ ((0xe000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_q) 
							       >> 0xfU)))) 
				       << 0xdU)) | 
			   (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_q) 
				       >> 3U))))) + 
		      ((((0xe000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_q) 
							     >> 0xfU)))) 
				     << 0xdU)) | (0x1fffU 
						  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_q) 
						     >> 3U))) 
			+ ((0xe000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_q) 
							       >> 0xfU)))) 
				       << 0xdU)) | 
			   (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_q) 
				       >> 3U)))) + 
		       (((0xe000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_q) 
							     >> 0xfU)))) 
				     << 0xdU)) | (0x1fffU 
						  & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_q) 
						     >> 3U))) 
			+ ((0xe000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_q) 
							       >> 0xfU)))) 
				       << 0xdU)) | 
			   (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_q) 
				       >> 3U)))))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port0 
	= vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[0U];
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port1 
	= vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[1U];
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port2 
	= vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[2U];
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port3 
	= vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[3U];
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port4 
	= vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[4U];
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port5 
	= vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[5U];
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port6 
	= vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[6U];
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port7 
	= vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map
	[7U];
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt)));
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l65 
	= (0U == (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt));
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port0 
	= vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port1 
	= vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port2 
	= vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port3 
	= vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port4 
	= vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port5 
	= vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port6 
	= vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port7 
	= vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread_base_iq_ready 
	= ((0U == (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt)) 
	   & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_10__DOT__area_clkO_buf1)));
}

void VCombCDMABench::_settle__TOP__17(VCombCDMABench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCombCDMABench::_settle__TOP__17\n"); );
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_spread_b_payload_resp = vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->axil4Ctrl_despread_b_payload_resp = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__writeJoinEvent_valid 
	= ((IData)(vlTOPp->axil4Ctrl_spread_aw_valid) 
	   & (IData)(vlTOPp->axil4Ctrl_spread_w_valid));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__writeJoinEvent_valid 
	= ((IData)(vlTOPp->axil4Ctrl_despread_aw_valid) 
	   & (IData)(vlTOPp->axil4Ctrl_despread_w_valid));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:894
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rData_addr))) {
	vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__readRsp_data 
	    = ((0xfffffffeU & vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__readRsp_data) 
	       | (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__cdma_spread_bridge_clc_driver));
    }
    vlTOPp->axil4Ctrl_spread_r_valid = vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rValid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:876
    vlTOPp->CombCDMABench__DOT__cdma_spread_axil4Ctrl_arready 
	= vlTOPp->axil4Ctrl_spread_r_ready;
    if ((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rValid)))) {
	vlTOPp->CombCDMABench__DOT__cdma_spread_axil4Ctrl_arready = 1U;
    }
    vlTOPp->axil4Ctrl_spread_b_valid = vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_axil4Ctrl_bvalid_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:865
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_writeJoinEvent_translated_ready 
	= vlTOPp->axil4Ctrl_spread_b_ready;
    if ((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_axil4Ctrl_bvalid_2)))) {
	vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:542
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rData_addr))) {
	vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__readRsp_data 
	    = ((0xfffffffeU & vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__readRsp_data) 
	       | (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__cdma_spread_bridge_clc_driver));
    }
    vlTOPp->axil4Ctrl_despread_r_valid = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rValid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:524
    vlTOPp->CombCDMABench__DOT__cdma_despread_axil4Ctrl_arready 
	= vlTOPp->axil4Ctrl_despread_r_ready;
    if ((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rValid)))) {
	vlTOPp->CombCDMABench__DOT__cdma_despread_axil4Ctrl_arready = 1U;
    }
    vlTOPp->axil4Ctrl_despread_b_valid = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_axil4Ctrl_bvalid_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:513
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_writeJoinEvent_translated_ready 
	= vlTOPp->axil4Ctrl_despread_b_ready;
    if ((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_axil4Ctrl_bvalid_2)))) {
	vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port0) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port0) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port1) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port1) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port2) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port2) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port3) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port3) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port4) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port4) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port5) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port5) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port6) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port6) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port7) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i))));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port7) 
			     >> (7U & ((IData)(7U) 
				       - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__cnt)))))
		       ? (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q))));
    vlTOPp->base_iq_in_ready = vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread_base_iq_ready;
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l51 
	= (((IData)(vlTOPp->base_iq_in_valid) & (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread_base_iq_ready)) 
	   | (0U != (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt)));
    vlTOPp->axil4Ctrl_spread_r_payload_data = vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__readRsp_data;
    vlTOPp->axil4Ctrl_despread_r_payload_data = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__readRsp_data;
}

void VCombCDMABench::_settle__TOP__21(VCombCDMABench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCombCDMABench::_settle__TOP__21\n"); );
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_spread_ar_ready = vlTOPp->CombCDMABench__DOT__cdma_spread_axil4Ctrl_arready;
    vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__writeOccur 
	= ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__writeJoinEvent_valid) 
	   & (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_despread_ar_ready = vlTOPp->CombCDMABench__DOT__cdma_despread_axil4Ctrl_arready;
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__writeOccur 
	= ((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__writeJoinEvent_valid) 
	   & (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__data_i)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__data_q)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__data_i)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__data_q)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__data_i)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__data_q)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__data_i)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__data_q)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__data_i)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__data_q)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__data_i)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__data_q)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__data_i)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__data_q)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__data_i)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q) 
		       + (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__data_q)) 
		      - (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->axil4Ctrl_spread_aw_ready = vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__writeOccur;
    vlTOPp->axil4Ctrl_spread_w_ready = vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__writeOccur;
    vlTOPp->axil4Ctrl_despread_aw_ready = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__writeOccur;
    vlTOPp->axil4Ctrl_despread_w_ready = vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__writeOccur;
}

void VCombCDMABench::_eval_initial(VCombCDMABench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCombCDMABench::_eval_initial\n"); );
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VCombCDMABench::final() {
    VL_DEBUG_IF(VL_PRINTF("    VCombCDMABench::final\n"); );
    // Variables
    VCombCDMABench__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCombCDMABench::_eval_settle(VCombCDMABench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCombCDMABench::_eval_settle\n"); );
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__16(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__17(vlSymsp);
    vlTOPp->_settle__TOP__21(vlSymsp);
}

void VCombCDMABench::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VCombCDMABench::_ctor_var_reset\n"); );
    // Body
    axil4Ctrl_spread_aw_valid = VL_RAND_RESET_I(1);
    axil4Ctrl_spread_aw_ready = VL_RAND_RESET_I(1);
    axil4Ctrl_spread_aw_payload_addr = VL_RAND_RESET_I(8);
    axil4Ctrl_spread_aw_payload_prot = VL_RAND_RESET_I(3);
    axil4Ctrl_spread_w_valid = VL_RAND_RESET_I(1);
    axil4Ctrl_spread_w_ready = VL_RAND_RESET_I(1);
    axil4Ctrl_spread_w_payload_data = VL_RAND_RESET_I(32);
    axil4Ctrl_spread_w_payload_strb = VL_RAND_RESET_I(4);
    axil4Ctrl_spread_b_valid = VL_RAND_RESET_I(1);
    axil4Ctrl_spread_b_ready = VL_RAND_RESET_I(1);
    axil4Ctrl_spread_b_payload_resp = VL_RAND_RESET_I(2);
    axil4Ctrl_spread_ar_valid = VL_RAND_RESET_I(1);
    axil4Ctrl_spread_ar_ready = VL_RAND_RESET_I(1);
    axil4Ctrl_spread_ar_payload_addr = VL_RAND_RESET_I(8);
    axil4Ctrl_spread_ar_payload_prot = VL_RAND_RESET_I(3);
    axil4Ctrl_spread_r_valid = VL_RAND_RESET_I(1);
    axil4Ctrl_spread_r_ready = VL_RAND_RESET_I(1);
    axil4Ctrl_spread_r_payload_data = VL_RAND_RESET_I(32);
    axil4Ctrl_spread_r_payload_resp = VL_RAND_RESET_I(2);
    axil4Ctrl_despread_aw_valid = VL_RAND_RESET_I(1);
    axil4Ctrl_despread_aw_ready = VL_RAND_RESET_I(1);
    axil4Ctrl_despread_aw_payload_addr = VL_RAND_RESET_I(8);
    axil4Ctrl_despread_aw_payload_prot = VL_RAND_RESET_I(3);
    axil4Ctrl_despread_w_valid = VL_RAND_RESET_I(1);
    axil4Ctrl_despread_w_ready = VL_RAND_RESET_I(1);
    axil4Ctrl_despread_w_payload_data = VL_RAND_RESET_I(32);
    axil4Ctrl_despread_w_payload_strb = VL_RAND_RESET_I(4);
    axil4Ctrl_despread_b_valid = VL_RAND_RESET_I(1);
    axil4Ctrl_despread_b_ready = VL_RAND_RESET_I(1);
    axil4Ctrl_despread_b_payload_resp = VL_RAND_RESET_I(2);
    axil4Ctrl_despread_ar_valid = VL_RAND_RESET_I(1);
    axil4Ctrl_despread_ar_ready = VL_RAND_RESET_I(1);
    axil4Ctrl_despread_ar_payload_addr = VL_RAND_RESET_I(8);
    axil4Ctrl_despread_ar_payload_prot = VL_RAND_RESET_I(3);
    axil4Ctrl_despread_r_valid = VL_RAND_RESET_I(1);
    axil4Ctrl_despread_r_ready = VL_RAND_RESET_I(1);
    axil4Ctrl_despread_r_payload_data = VL_RAND_RESET_I(32);
    axil4Ctrl_despread_r_payload_resp = VL_RAND_RESET_I(2);
    base_iq_in_valid = VL_RAND_RESET_I(1);
    base_iq_in_ready = VL_RAND_RESET_I(1);
    base_iq_in_payload_0_cha_i = VL_RAND_RESET_I(16);
    base_iq_in_payload_0_cha_q = VL_RAND_RESET_I(16);
    base_iq_in_payload_1_cha_i = VL_RAND_RESET_I(16);
    base_iq_in_payload_1_cha_q = VL_RAND_RESET_I(16);
    base_iq_in_payload_2_cha_i = VL_RAND_RESET_I(16);
    base_iq_in_payload_2_cha_q = VL_RAND_RESET_I(16);
    base_iq_in_payload_3_cha_i = VL_RAND_RESET_I(16);
    base_iq_in_payload_3_cha_q = VL_RAND_RESET_I(16);
    base_iq_in_payload_4_cha_i = VL_RAND_RESET_I(16);
    base_iq_in_payload_4_cha_q = VL_RAND_RESET_I(16);
    base_iq_in_payload_5_cha_i = VL_RAND_RESET_I(16);
    base_iq_in_payload_5_cha_q = VL_RAND_RESET_I(16);
    base_iq_in_payload_6_cha_i = VL_RAND_RESET_I(16);
    base_iq_in_payload_6_cha_q = VL_RAND_RESET_I(16);
    base_iq_in_payload_7_cha_i = VL_RAND_RESET_I(16);
    base_iq_in_payload_7_cha_q = VL_RAND_RESET_I(16);
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
    CombCDMABench__DOT__cdma_spread_axil4Ctrl_arready = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread_axil4Ctrl_arready = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread_base_iq_ready = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_spread__DOT__readRsp_data = VL_RAND_RESET_I(32);
    CombCDMABench__DOT__cdma_spread__DOT__writeOccur = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__cdma_spread_bridge_clc_driver = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn_1 = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn_2 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn_3 = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port0 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port1 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port2 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port3 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port4 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port5 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port6 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port7 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_1 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_1 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_2 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_3 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_4 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_5 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_6 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_7 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l51 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l65 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[__Vi0] = VL_RAND_RESET_I(8);
    }}
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_10__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_10__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_10__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_11__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_11__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_11__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_12__DOT__area_clkI_reg = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_12__DOT__area_clkO_buf0 = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_12__DOT__area_clkO_buf1 = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_13__DOT__area_clkI_reg = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_13__DOT__area_clkO_buf0 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_13__DOT__area_clkO_buf1 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_14__DOT__area_clkI_reg = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_14__DOT__area_clkO_buf0 = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_14__DOT__area_clkO_buf1 = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__readRsp_data = VL_RAND_RESET_I(32);
    CombCDMABench__DOT__cdma_despread__DOT__writeOccur = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__cdma_spread_bridge_clc_driver = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn_1 = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn_2 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn_3 = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port0 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port1 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port2 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port3 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port4 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port5 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port6 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port7 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_1 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[__Vi0] = VL_RAND_RESET_I(8);
    }}
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__data_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__data_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__data_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__data_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__data_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__data_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__data_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__data_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__data_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__data_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__data_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__data_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__data_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__data_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__cnt = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__data_i = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__data_q = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q_next = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_10__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_10__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_10__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_11__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_11__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_11__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_12__DOT__area_clkI_reg = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_12__DOT__area_clkO_buf0 = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_12__DOT__area_clkO_buf1 = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_13__DOT__area_clkI_reg = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_13__DOT__area_clkO_buf0 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_13__DOT__area_clkO_buf1 = VL_RAND_RESET_I(8);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_14__DOT__area_clkI_reg = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_14__DOT__area_clkO_buf0 = VL_RAND_RESET_I(3);
    CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_14__DOT__area_clkO_buf1 = VL_RAND_RESET_I(3);
    __Vdlyvdim0__CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0 = VL_RAND_RESET_I(3);
    __Vdlyvval__CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0 = VL_RAND_RESET_I(1);
    __Vdly__CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdlyvdim0__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map__v0 = VL_RAND_RESET_I(3);
    __Vdlyvval__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map__v0 = VL_RAND_RESET_I(1);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    _ctor_var_reset_1();
}

void VCombCDMABench::_configure_coverage(VCombCDMABench__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VCombCDMABench::_configure_coverage\n"); );
}

void VCombCDMABench::_ctor_var_reset_1() {
    VL_DEBUG_IF(VL_PRINTF("    VCombCDMABench::_ctor_var_reset_1\n"); );
    // Body
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vclklast__TOP__rf_clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
