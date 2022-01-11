// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4CDMASpread.h for the primary calling header

#include "VAxiLite4CDMASpread.h" // For This
#include "VAxiLite4CDMASpread__Syms.h"

//--------------------


void VAxiLite4CDMASpread::eval() {
    VAxiLite4CDMASpread__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VAxiLite4CDMASpread::eval\n"); );
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

void VAxiLite4CDMASpread::_eval_initial_loop(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VAxiLite4CDMASpread::_sequent__TOP__3(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_sequent__TOP__3\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0,2,0);
    VL_SIG8(__Vdlyvval__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0,7,0);
    VL_SIG8(__Vdlyvset__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0,0,0);
    //char	__VpadToAlign7[1];
    // Body
    __Vdlyvset__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0 = 0U;
    vlTOPp->__Vdly__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt 
	= vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:434
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkO_buf1 
	= vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkO_buf0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:794
    if (vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_1) {
	__Vdlyvval__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0 
	    = vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkO_buf1;
	__Vdlyvset__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0 = 1U;
	__Vdlyvdim0__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0 
	    = vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkO_buf1;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:658
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_i) 
		       + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_i)) 
		      + ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_i) 
			 + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_i))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:659
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i_1 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_i) 
		       + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_i)) 
		      + ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_i) 
			 + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_i))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:660
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_q) 
		       + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_q)) 
		      + ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_q) 
			 + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_q))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:661
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q_1 
	= (0xffffU & (((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_q) 
		       + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_q)) 
		      + ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_q) 
			 + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_q))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:662
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid 
	= (((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_valid) 
	    & (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_valid)) 
	   & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_valid) 
	      & (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_valid)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:663
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid_1 
	= (((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_valid) 
	    & (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_valid)) 
	   & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_valid) 
	      & (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_valid)));
    // ALWAYSPOST at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:796
    if (__Vdlyvset__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0) {
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[__Vdlyvdim0__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0] 
	    = __Vdlyvval__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map__v0;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:888
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkO_buf1) {
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:433
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkO_buf0 
	= vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkI_reg;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:382
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkO_buf1 
	= vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkO_buf0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:407
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkO_buf1 
	= vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkO_buf0;
    vlTOPp->mod_iq_payload_cha_i = (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i) 
					       + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i_1)));
    vlTOPp->mod_iq_payload_cha_q = (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q) 
					       + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q_1)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:1009
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_i))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_q))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_valid = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:1009
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_1)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_i))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_1)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_q))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_valid = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:1009
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_2)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_i))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_2)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_q))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_valid = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:1009
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_3)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_i))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_3)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_q))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_valid = 0U;
    }
    vlTOPp->mod_iq_valid = ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid) 
			    & (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid_1));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:1009
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_4)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_i))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_4)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_q))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_valid = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:1009
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_5)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_i))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_5)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_q))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_valid = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:1009
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_6)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_i))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_6)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_q))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_valid = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:1009
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid) {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_7)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_i))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_7)
			       ? (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_q))));
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_valid = 0U;
	}
    } else {
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_i = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_q = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_valid = 0U;
    }
}

VL_INLINE_OPT void VAxiLite4CDMASpread::_sequent__TOP__4(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_sequent__TOP__4\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:381
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkO_buf0 
	= vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkI_reg;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:406
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkO_buf0 
	= vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkI_reg;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:942
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port0) 
		 >> 7U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:943
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_1 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port1) 
		 >> 6U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:944
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_2 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port2) 
		 >> 5U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:945
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_3 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port3) 
		 >> 4U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:946
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_4 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port4) 
		 >> 3U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:947
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_5 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port5) 
		 >> 2U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:948
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_6 
	= (1U & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port6) 
		 >> 1U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:949
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_7 
	= (1U & (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port7));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:950
    if ((0U == (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt))) {
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_i 
	    = vlTOPp->base_iq_payload_0_cha_i;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_q 
	    = vlTOPp->base_iq_payload_0_cha_q;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_i 
	    = vlTOPp->base_iq_payload_1_cha_i;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_q 
	    = vlTOPp->base_iq_payload_1_cha_q;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_i 
	    = vlTOPp->base_iq_payload_2_cha_i;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_q 
	    = vlTOPp->base_iq_payload_2_cha_q;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_i 
	    = vlTOPp->base_iq_payload_3_cha_i;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_q 
	    = vlTOPp->base_iq_payload_3_cha_q;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_i 
	    = vlTOPp->base_iq_payload_4_cha_i;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_q 
	    = vlTOPp->base_iq_payload_4_cha_q;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_i 
	    = vlTOPp->base_iq_payload_5_cha_i;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_q 
	    = vlTOPp->base_iq_payload_5_cha_q;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_i 
	    = vlTOPp->base_iq_payload_6_cha_i;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_q 
	    = vlTOPp->base_iq_payload_6_cha_q;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_i 
	    = vlTOPp->base_iq_payload_7_cha_i;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_q 
	    = vlTOPp->base_iq_payload_7_cha_q;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:923
    if (vlTOPp->rf_resetn) {
	if (vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkO_buf1) {
	    vlTOPp->__Vdly__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt = 0U;
	} else {
	    if (vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l51) {
		vlTOPp->__Vdly__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt 
		    = (((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt) 
			== (IData)(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkO_buf1))
		        ? 0U : (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_cnt));
	    }
	}
	if (vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l65) {
	    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid 
		= vlTOPp->base_iq_valid;
	}
    } else {
	vlTOPp->__Vdly__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid = 0U;
    }
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt 
	= vlTOPp->__Vdly__AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt;
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
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:407
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkO_buf1 
	= vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkO_buf0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:434
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkO_buf1 
	= vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkO_buf0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:406
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkO_buf0 
	= vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkI_reg;
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread_base_iq_ready 
	= ((0U == (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt)) 
	   & (~ (IData)(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkO_buf1)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:433
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkO_buf0 
	= vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkI_reg;
}

VL_INLINE_OPT void VAxiLite4CDMASpread::_sequent__TOP__5(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_sequent__TOP__5\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:340
    if (vlTOPp->AxiLite4CDMASpread__DOT___zz_writeJoinEvent_translated_ready) {
	vlTOPp->AxiLite4CDMASpread__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:401
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkI_reg 
	= vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_3;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:428
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkI_reg 
	= vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:401
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkI_reg 
	= vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_1;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:376
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkI_reg 
	= vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:428
    vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkI_reg 
	= vlTOPp->AxiLite4CDMASpread__DOT__cdma_spread_bridge_clc_driver;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4CDMASpread__DOT___zz_axil4Ctrl_bresp;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:343
    if (vlTOPp->axil4Ctrl_arready) {
	vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rData_addr 
	    = vlTOPp->axil4Ctrl_araddr;
	vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rData_prot 
	    = vlTOPp->axil4Ctrl_arprot;
    }
    if ((0xcU == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
	if (vlTOPp->AxiLite4CDMASpread__DOT__writeOccur) {
	    vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_3 
		= (7U & vlTOPp->axil4Ctrl_wdata);
	}
    }
}

VL_INLINE_OPT void VAxiLite4CDMASpread::_sequent__TOP__6(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_sequent__TOP__6\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:301
    if (vlTOPp->reset) {
	vlTOPp->AxiLite4CDMASpread__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rValid = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT__cdma_spread_bridge_clc_driver = 1U;
	vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_1 = 0U;
	vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_2 = 0U;
    } else {
	if (vlTOPp->AxiLite4CDMASpread__DOT___zz_writeJoinEvent_translated_ready) {
	    vlTOPp->AxiLite4CDMASpread__DOT___zz_axil4Ctrl_bvalid_2 
		= vlTOPp->AxiLite4CDMASpread__DOT__writeJoinEvent_valid;
	}
	if (vlTOPp->axil4Ctrl_arready) {
	    vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rValid 
		= vlTOPp->axil4Ctrl_arvalid;
	}
	if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
	    if (vlTOPp->AxiLite4CDMASpread__DOT__writeOccur) {
		vlTOPp->AxiLite4CDMASpread__DOT__cdma_spread_bridge_clc_driver 
		    = (1U & vlTOPp->axil4Ctrl_wdata);
		vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn 
		    = (1U & (vlTOPp->axil4Ctrl_wdata 
			     >> 1U));
	    }
	} else {
	    if ((4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
		if (vlTOPp->AxiLite4CDMASpread__DOT__writeOccur) {
		    vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_1 
			= (7U & vlTOPp->axil4Ctrl_wdata);
		}
	    } else {
		if ((8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
		    if (vlTOPp->AxiLite4CDMASpread__DOT__writeOccur) {
			vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_2 
			    = (0xffU & vlTOPp->axil4Ctrl_wdata);
		    }
		}
	    }
	}
    }
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rValid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:287
    vlTOPp->AxiLite4CDMASpread__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rData_addr))) {
	vlTOPp->AxiLite4CDMASpread__DOT__readRsp_data 
	    = ((0xfffffffeU & vlTOPp->AxiLite4CDMASpread__DOT__readRsp_data) 
	       | (IData)(vlTOPp->AxiLite4CDMASpread__DOT__cdma_spread_bridge_clc_driver));
    }
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4CDMASpread__DOT___zz_axil4Ctrl_bvalid_2;
}

VL_INLINE_OPT void VAxiLite4CDMASpread::_combo__TOP__8(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_combo__TOP__8\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4CDMASpread__DOT__writeJoinEvent_valid 
	= ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:269
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rValid)))) {
	vlTOPp->axil4Ctrl_arready = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:258
    vlTOPp->AxiLite4CDMASpread__DOT___zz_writeJoinEvent_translated_ready 
	= vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4CDMASpread__DOT___zz_axil4Ctrl_bvalid_2)))) {
	vlTOPp->AxiLite4CDMASpread__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l51 
	= (((IData)(vlTOPp->base_iq_valid) & (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread_base_iq_ready)) 
	   | (0U != (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt)));
    vlTOPp->AxiLite4CDMASpread__DOT__writeOccur = ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__writeJoinEvent_valid) 
						   & (IData)(vlTOPp->AxiLite4CDMASpread__DOT___zz_writeJoinEvent_translated_ready));
}

VL_INLINE_OPT void VAxiLite4CDMASpread::_sequent__TOP__9(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_sequent__TOP__9\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->base_iq_ready = vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread_base_iq_ready;
}

VL_INLINE_OPT void VAxiLite4CDMASpread::_sequent__TOP__10(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_sequent__TOP__10\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4CDMASpread__DOT__readRsp_data;
}

VL_INLINE_OPT void VAxiLite4CDMASpread::_combo__TOP__12(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_combo__TOP__12\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4CDMASpread__DOT__writeOccur;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4CDMASpread__DOT__writeOccur;
}

void VAxiLite4CDMASpread::_eval(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_eval\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->rf_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__rf_clk)))) {
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->rf_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__rf_clk)))) {
	vlTOPp->_sequent__TOP__9(vlSymsp);
    }
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

VL_INLINE_OPT QData VAxiLite4CDMASpread::_change_request(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_change_request\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxiLite4CDMASpread::_change_request_1(VAxiLite4CDMASpread__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4CDMASpread::_change_request_1\n"); );
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
