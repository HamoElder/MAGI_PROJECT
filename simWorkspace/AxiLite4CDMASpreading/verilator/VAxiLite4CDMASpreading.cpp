// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4CDMASpreading.h for the primary calling header

#include "VAxiLite4CDMASpreading.h" // For This
#include "VAxiLite4CDMASpreading__Syms.h"

//--------------------


void VAxiLite4CDMASpreading::eval() {
    VAxiLite4CDMASpreading__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VAxiLite4CDMASpreading::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VAxiLite4CDMASpreading::_eval_initial_loop(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VAxiLite4CDMASpreading::_sequent__TOP__3(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpreading::_sequent__TOP__3\n"); );
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map__v0,2,0);
    VL_SIG8(__Vdlyvval__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map__v0,7,0);
    VL_SIG8(__Vdlyvset__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map__v0,0,0);
    //char	__VpadToAlign7[1];
    // Body
    vlTOPp->__Vdly__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt 
	= vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt;
    __Vdlyvset__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map__v0 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:630
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i 
	= (0xffffU & (((0xe000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_3) 
							    + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_5)) 
							   >> 0xfU)))) 
				   << 0xdU)) | (0x1fffU 
						& (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_3) 
						    + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_5)) 
						   >> 3U))) 
		      + ((0xe000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_10) 
							      + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_12)) 
							     >> 0xfU)))) 
				     << 0xdU)) | (0x1fffU 
						  & (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_10) 
						      + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_12)) 
						     >> 3U)))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:631
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i_1 
	= (0xffffU & (((0xe000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_4) 
							    + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_6)) 
							   >> 0xfU)))) 
				   << 0xdU)) | (0x1fffU 
						& (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_4) 
						    + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_6)) 
						   >> 3U))) 
		      + ((0xe000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_11) 
							      + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_13)) 
							     >> 0xfU)))) 
				     << 0xdU)) | (0x1fffU 
						  & (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_11) 
						      + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_13)) 
						     >> 3U)))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:632
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q 
	= (0xffffU & (((0xe000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_3) 
							    + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_5)) 
							   >> 0xfU)))) 
				   << 0xdU)) | (0x1fffU 
						& (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_3) 
						    + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_5)) 
						   >> 3U))) 
		      + ((0xe000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_10) 
							      + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_12)) 
							     >> 0xfU)))) 
				     << 0xdU)) | (0x1fffU 
						  & (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_10) 
						      + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_12)) 
						     >> 3U)))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:633
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q_1 
	= (0xffffU & (((0xe000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_4) 
							    + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_6)) 
							   >> 0xfU)))) 
				   << 0xdU)) | (0x1fffU 
						& (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_4) 
						    + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_6)) 
						   >> 3U))) 
		      + ((0xe000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_11) 
							      + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_13)) 
							     >> 0xfU)))) 
				     << 0xdU)) | (0x1fffU 
						  & (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_11) 
						      + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_13)) 
						     >> 3U)))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:406
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_6__DOT__area_clkO_buf1 
	= vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_6__DOT__area_clkO_buf0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:738
    if (vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_1) {
	__Vdlyvval__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map__v0 
	    = vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_8__DOT__area_clkO_buf1;
	__Vdlyvset__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map__v0 = 1U;
	__Vdlyvdim0__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map__v0 
	    = vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_7__DOT__area_clkO_buf1;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:634
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid 
	= (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_valid) 
	    & (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_valid)) 
	   & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_valid) 
	      & (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_valid)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:635
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid_1 
	= (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_valid) 
	    & (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_valid)) 
	   & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_valid) 
	      & (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_valid)));
    // ALWAYSPOST at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:740
    if (__Vdlyvset__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map__v0) {
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map[__Vdlyvdim0__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map__v0] 
	    = __Vdlyvval__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map__v0;
    }
    vlTOPp->mod_iq_payload_cha_i = (0xffffU & (((0xe000U 
						 & (VL_NEGATE_I((IData)(
									(1U 
									 & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i) 
									    >> 0xfU)))) 
						    << 0xdU)) 
						| (0x1fffU 
						   & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i) 
						      >> 3U))) 
					       + ((0xe000U 
						   & (VL_NEGATE_I((IData)(
									  (1U 
									   & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i_1) 
									      >> 0xfU)))) 
						      << 0xdU)) 
						  | (0x1fffU 
						     & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i_1) 
							>> 3U)))));
    vlTOPp->mod_iq_payload_cha_q = (0xffffU & (((0xe000U 
						 & (VL_NEGATE_I((IData)(
									(1U 
									 & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q) 
									    >> 0xfU)))) 
						    << 0xdU)) 
						| (0x1fffU 
						   & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q) 
						      >> 3U))) 
					       + ((0xe000U 
						   & (VL_NEGATE_I((IData)(
									  (1U 
									   & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q_1) 
									      >> 0xfU)))) 
						      << 0xdU)) 
						  | (0x1fffU 
						     & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q_1) 
							>> 3U)))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:832
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_6__DOT__area_clkO_buf1) {
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:405
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_6__DOT__area_clkO_buf0 
	= vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_6__DOT__area_clkI_reg;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:354
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_8__DOT__area_clkO_buf1 
	= vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_8__DOT__area_clkO_buf0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:379
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_7__DOT__area_clkO_buf1 
	= vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_7__DOT__area_clkO_buf0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:939
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_valid = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:939
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_1)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_1)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_valid = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:939
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_2)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_2)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_valid = 0U;
    }
}

VL_INLINE_OPT void VAxiLite4CDMASpreading::_sequent__TOP__4(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpreading::_sequent__TOP__4\n"); );
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:939
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_3)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_3)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_valid = 0U;
    }
    vlTOPp->mod_iq_valid = ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid) 
			    & (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid_1));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:939
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_4)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_4)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_valid = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:939
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_5)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_5)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_valid = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:939
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_6)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_6)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_valid = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:939
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_7)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_7)
			       ? (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q))));
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_valid = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:353
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_8__DOT__area_clkO_buf0 
	= vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_8__DOT__area_clkI_reg;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:378
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_7__DOT__area_clkO_buf0 
	= vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_7__DOT__area_clkI_reg;
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_3 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_i) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_i) 
					       >> 3U)));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_3 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_q) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_q) 
					       >> 3U)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:886
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port0) 
		 >> 7U));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_5 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_i) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_i) 
					       >> 3U)));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_5 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_q) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_q) 
					       >> 3U)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:887
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_1 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port1) 
		 >> 6U));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_10 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_i) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_i) 
					       >> 3U)));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_10 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_q) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_q) 
					       >> 3U)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:888
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_2 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port2) 
		 >> 5U));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_12 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_i) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_i) 
					       >> 3U)));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_12 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_q) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_q) 
					       >> 3U)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:889
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_3 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port3) 
		 >> 4U));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_4 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_i) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_i) 
					       >> 3U)));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_4 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_q) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_q) 
					       >> 3U)));
}

VL_INLINE_OPT void VAxiLite4CDMASpreading::_sequent__TOP__5(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpreading::_sequent__TOP__5\n"); );
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:890
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_4 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port4) 
		 >> 3U));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_6 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_i) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_i) 
					       >> 3U)));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_6 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_q) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_q) 
					       >> 3U)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:891
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_5 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port5) 
		 >> 2U));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_11 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_i) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_i) 
					       >> 3U)));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_11 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_q) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_q) 
					       >> 3U)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:892
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_6 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port6) 
		 >> 1U));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_13 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_i) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_i) 
					       >> 3U)));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_13 
	= ((0xe000U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_q) 
						  >> 0xfU)))) 
		       << 0xdU)) | (0x1fffU & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_q) 
					       >> 3U)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:893
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_7 
	= (1U & (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port7));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:894
    if ((0U == (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt))) {
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i 
	    = vlTOPp->base_iq_payload_cha_i;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q 
	    = vlTOPp->base_iq_payload_cha_q;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:867
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_5__DOT__area_clkO_buf1) {
	    vlTOPp->__Vdly__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt = 0U;
	} else {
	    if (vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l52) {
		vlTOPp->__Vdly__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt 
		    = (((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt) 
			== (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_9__DOT__area_clkO_buf1))
		        ? 0U : (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_cnt));
	    }
	}
	if (vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l65) {
	    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid 
		= vlTOPp->base_iq_valid;
	}
    } else {
	vlTOPp->__Vdly__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid = 0U;
    }
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt 
	= vlTOPp->__Vdly__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt;
    vlTOPp->base_iq_ready = (0U == (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt)));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l65 
	= (0U == (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt));
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port0 
	= vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port1 
	= vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port2 
	= vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port3 
	= vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port4 
	= vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port5 
	= vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port6 
	= vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt];
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port7 
	= vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map
	[vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt];
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:379
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_9__DOT__area_clkO_buf1 
	= vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_9__DOT__area_clkO_buf0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:406
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_5__DOT__area_clkO_buf1 
	= vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_5__DOT__area_clkO_buf0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:378
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_9__DOT__area_clkO_buf0 
	= vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_9__DOT__area_clkI_reg;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:405
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_5__DOT__area_clkO_buf0 
	= vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_5__DOT__area_clkI_reg;
}

VL_INLINE_OPT void VAxiLite4CDMASpreading::_sequent__TOP__6(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpreading::_sequent__TOP__6\n"); );
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:312
    if (vlTOPp->AxiLite4CDMASpreading__DOT___zz_writeJoinEvent_translated_ready) {
	vlTOPp->AxiLite4CDMASpreading__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:373
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_9__DOT__area_clkI_reg 
	= vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn_3;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:400
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_6__DOT__area_clkI_reg 
	= vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:373
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_7__DOT__area_clkI_reg 
	= vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn_1;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:348
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_8__DOT__area_clkI_reg 
	= vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:400
    vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_5__DOT__area_clkI_reg 
	= vlTOPp->AxiLite4CDMASpreading__DOT__cdma_spread_bridge_clc_driver;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4CDMASpreading__DOT___zz_axil4Ctrl_bresp;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:315
    if (vlTOPp->axil4Ctrl_arready) {
	vlTOPp->AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rData_addr 
	    = vlTOPp->axil4Ctrl_araddr;
	vlTOPp->AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rData_prot 
	    = vlTOPp->axil4Ctrl_arprot;
    }
    if ((0xcU == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
	if (vlTOPp->AxiLite4CDMASpreading__DOT__writeOccur) {
	    vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn_3 
		= (7U & vlTOPp->axil4Ctrl_wdata);
	}
    }
}

VL_INLINE_OPT void VAxiLite4CDMASpreading::_sequent__TOP__7(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpreading::_sequent__TOP__7\n"); );
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:273
    if (vlTOPp->reset) {
	vlTOPp->AxiLite4CDMASpreading__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rValid = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT__cdma_spread_bridge_clc_driver = 1U;
	vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn_1 = 0U;
	vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn_2 = 0U;
    } else {
	if (vlTOPp->AxiLite4CDMASpreading__DOT___zz_writeJoinEvent_translated_ready) {
	    vlTOPp->AxiLite4CDMASpreading__DOT___zz_axil4Ctrl_bvalid_2 
		= vlTOPp->AxiLite4CDMASpreading__DOT__writeJoinEvent_valid;
	}
	if (vlTOPp->axil4Ctrl_arready) {
	    vlTOPp->AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rValid 
		= vlTOPp->axil4Ctrl_arvalid;
	}
	if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
	    if (vlTOPp->AxiLite4CDMASpreading__DOT__writeOccur) {
		vlTOPp->AxiLite4CDMASpreading__DOT__cdma_spread_bridge_clc_driver 
		    = (1U & vlTOPp->axil4Ctrl_wdata);
		vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn 
		    = (1U & (vlTOPp->axil4Ctrl_wdata 
			     >> 1U));
	    }
	} else {
	    if ((4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
		if (vlTOPp->AxiLite4CDMASpreading__DOT__writeOccur) {
		    vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn_1 
			= (7U & vlTOPp->axil4Ctrl_wdata);
		}
	    } else {
		if ((8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
		    if (vlTOPp->AxiLite4CDMASpreading__DOT__writeOccur) {
			vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn_2 
			    = (0xffU & vlTOPp->axil4Ctrl_wdata);
		    }
		}
	    }
	}
    }
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rValid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:259
    vlTOPp->AxiLite4CDMASpreading__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rData_addr))) {
	vlTOPp->AxiLite4CDMASpreading__DOT__readRsp_data 
	    = ((0xfffffffeU & vlTOPp->AxiLite4CDMASpreading__DOT__readRsp_data) 
	       | (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__cdma_spread_bridge_clc_driver));
    }
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4CDMASpreading__DOT___zz_axil4Ctrl_bvalid_2;
}

VL_INLINE_OPT void VAxiLite4CDMASpreading::_combo__TOP__9(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpreading::_combo__TOP__9\n"); );
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l52 
	= (((IData)(vlTOPp->base_iq_valid) & (0U == (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt))) 
	   | (0U != (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt)));
    vlTOPp->AxiLite4CDMASpreading__DOT__writeJoinEvent_valid 
	= ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:241
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rValid)))) {
	vlTOPp->axil4Ctrl_arready = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpreading.v:230
    vlTOPp->AxiLite4CDMASpreading__DOT___zz_writeJoinEvent_translated_ready 
	= vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4CDMASpreading__DOT___zz_axil4Ctrl_bvalid_2)))) {
	vlTOPp->AxiLite4CDMASpreading__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4CDMASpreading__DOT__writeOccur 
	= ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__writeJoinEvent_valid) 
	   & (IData)(vlTOPp->AxiLite4CDMASpreading__DOT___zz_writeJoinEvent_translated_ready));
}

VL_INLINE_OPT void VAxiLite4CDMASpreading::_sequent__TOP__10(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpreading::_sequent__TOP__10\n"); );
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4CDMASpreading__DOT__readRsp_data;
}

VL_INLINE_OPT void VAxiLite4CDMASpreading::_combo__TOP__12(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpreading::_combo__TOP__12\n"); );
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4CDMASpreading__DOT__writeOccur;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4CDMASpreading__DOT__writeOccur;
}

void VAxiLite4CDMASpreading::_eval(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpreading::_eval\n"); );
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->rf_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__rf_clk)))) {
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    vlTOPp->_combo__TOP__12(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__rf_clk = vlTOPp->rf_clk;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAxiLite4CDMASpreading::_change_request(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpreading::_change_request\n"); );
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxiLite4CDMASpreading::_change_request_1(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpreading::_change_request_1\n"); );
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
