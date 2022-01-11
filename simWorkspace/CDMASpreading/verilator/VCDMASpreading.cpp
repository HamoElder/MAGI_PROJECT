// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCDMASpreading.h for the primary calling header

#include "VCDMASpreading.h"    // For This
#include "VCDMASpreading__Syms.h"

//--------------------


void VCDMASpreading::eval() {
    VCDMASpreading__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VCDMASpreading::eval\n"); );
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

void VCDMASpreading::_eval_initial_loop(VCDMASpreading__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VCDMASpreading::_sequent__TOP__2(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_sequent__TOP__2\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__CDMASpreading__DOT__code_map__v0,2,0);
    VL_SIG8(__Vdlyvval__CDMASpreading__DOT__code_map__v0,7,0);
    VL_SIG8(__Vdlyvset__CDMASpreading__DOT__code_map__v0,0,0);
    //char	__VpadToAlign7[1];
    // Body
    __Vdlyvset__CDMASpreading__DOT__code_map__v0 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:135
    if (vlTOPp->CDMASpreading__DOT___zz_1) {
	__Vdlyvval__CDMASpreading__DOT__code_map__v0 
	    = vlTOPp->w_data;
	__Vdlyvset__CDMASpreading__DOT__code_map__v0 = 1U;
	__Vdlyvdim0__CDMASpreading__DOT__code_map__v0 
	    = vlTOPp->w_addr;
    }
    // ALWAYSPOST at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:137
    if (__Vdlyvset__CDMASpreading__DOT__code_map__v0) {
	vlTOPp->CDMASpreading__DOT__code_map[__Vdlyvdim0__CDMASpreading__DOT__code_map__v0] 
	    = __Vdlyvval__CDMASpreading__DOT__code_map__v0;
    }
}

VL_INLINE_OPT void VCDMASpreading::_sequent__TOP__3(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_sequent__TOP__3\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__CDMASpreading__DOT__cnt = vlTOPp->CDMASpreading__DOT__cnt;
}

VL_INLINE_OPT void VCDMASpreading::_sequent__TOP__4(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_sequent__TOP__4\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:350
    if (vlTOPp->reset) {
	vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_i = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_q = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_valid = 0U;
    } else {
	if (vlTOPp->CDMASpreading__DOT__flow_iq_valid) {
	    vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_0_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_0_cha_i))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_0_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_0_cha_q))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_valid = 0U;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:350
    if (vlTOPp->reset) {
	vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_i = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_q = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_valid = 0U;
    } else {
	if (vlTOPp->CDMASpreading__DOT__flow_iq_valid) {
	    vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_1)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_1_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_1_cha_i))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_1)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_1_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_1_cha_q))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_valid = 0U;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:350
    if (vlTOPp->reset) {
	vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_i = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_q = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_valid = 0U;
    } else {
	if (vlTOPp->CDMASpreading__DOT__flow_iq_valid) {
	    vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_2)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_2_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_2_cha_i))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_2)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_2_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_2_cha_q))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_valid = 0U;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:350
    if (vlTOPp->reset) {
	vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_i = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_q = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_valid = 0U;
    } else {
	if (vlTOPp->CDMASpreading__DOT__flow_iq_valid) {
	    vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_3)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_3_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_3_cha_i))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_3)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_3_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_3_cha_q))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_valid = 0U;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:350
    if (vlTOPp->reset) {
	vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_i = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_q = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_valid = 0U;
    } else {
	if (vlTOPp->CDMASpreading__DOT__flow_iq_valid) {
	    vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_4)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_4_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_4_cha_i))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_4)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_4_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_4_cha_q))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_valid = 0U;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:350
    if (vlTOPp->reset) {
	vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_i = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_q = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_valid = 0U;
    } else {
	if (vlTOPp->CDMASpreading__DOT__flow_iq_valid) {
	    vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_5)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_5_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_5_cha_i))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_5)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_5_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_5_cha_q))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_valid = 0U;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:350
    if (vlTOPp->reset) {
	vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_i = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_q = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_valid = 0U;
    } else {
	if (vlTOPp->CDMASpreading__DOT__flow_iq_valid) {
	    vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_6)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_6_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_6_cha_i))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_6)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_6_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_6_cha_q))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_valid = 0U;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:350
    if (vlTOPp->reset) {
	vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_i = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_q = 0U;
	vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_valid = 0U;
    } else {
	if (vlTOPp->CDMASpreading__DOT__flow_iq_valid) {
	    vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_i 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_7)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_7_cha_i)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_7_cha_i))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_q 
		= (0xffffU & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_7)
			       ? (IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_7_cha_q)
			       : VL_NEGATE_I((IData)(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_7_cha_q))));
	    vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_valid = 1U;
	} else {
	    vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_valid = 0U;
	}
    }
    vlTOPp->mod_sub_iqs_0_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_i;
    vlTOPp->mod_sub_iqs_0_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_q;
    vlTOPp->mod_sub_iqs_0_valid = vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_1_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_i;
    vlTOPp->mod_sub_iqs_1_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_q;
    vlTOPp->mod_sub_iqs_1_valid = vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_2_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_i;
    vlTOPp->mod_sub_iqs_2_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_q;
    vlTOPp->mod_sub_iqs_2_valid = vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_3_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_i;
    vlTOPp->mod_sub_iqs_3_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_q;
    vlTOPp->mod_sub_iqs_3_valid = vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_4_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_i;
    vlTOPp->mod_sub_iqs_4_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_q;
    vlTOPp->mod_sub_iqs_4_valid = vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_5_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_i;
    vlTOPp->mod_sub_iqs_5_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_q;
    vlTOPp->mod_sub_iqs_5_valid = vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_6_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_i;
    vlTOPp->mod_sub_iqs_6_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_q;
    vlTOPp->mod_sub_iqs_6_valid = vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_7_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_i;
    vlTOPp->mod_sub_iqs_7_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_q;
    vlTOPp->mod_sub_iqs_7_valid = vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_valid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:264
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__CDMASpreading__DOT__cnt = 0U;
	vlTOPp->CDMASpreading__DOT__flow_iq_valid = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->__Vdly__CDMASpreading__DOT__cnt = 0U;
	} else {
	    if (vlTOPp->CDMASpreading__DOT__when_CDMASpreading_l51) {
		vlTOPp->__Vdly__CDMASpreading__DOT__cnt 
		    = (((IData)(vlTOPp->CDMASpreading__DOT__cnt) 
			== (IData)(vlTOPp->cnt_limit))
		        ? 0U : (IData)(vlTOPp->CDMASpreading__DOT___zz_cnt));
	    }
	}
	if (vlTOPp->CDMASpreading__DOT__when_CDMASpreading_l65) {
	    vlTOPp->CDMASpreading__DOT__flow_iq_valid 
		= vlTOPp->base_iq_valid;
	}
    }
}

VL_INLINE_OPT void VCDMASpreading::_combo__TOP__6(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_combo__TOP__6\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:229
    vlTOPp->CDMASpreading__DOT___zz_1 = 0U;
    if (vlTOPp->w_en) {
	vlTOPp->CDMASpreading__DOT___zz_1 = 1U;
    }
}

VL_INLINE_OPT void VCDMASpreading::_sequent__TOP__8(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_sequent__TOP__8\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:283
    vlTOPp->CDMASpreading__DOT___zz_code = (1U & ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_map_port0) 
						  >> 7U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:284
    vlTOPp->CDMASpreading__DOT___zz_code_1 = (1U & 
					      ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_map_port1) 
					       >> 6U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:285
    vlTOPp->CDMASpreading__DOT___zz_code_2 = (1U & 
					      ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_map_port2) 
					       >> 5U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:286
    vlTOPp->CDMASpreading__DOT___zz_code_3 = (1U & 
					      ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_map_port3) 
					       >> 4U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:287
    vlTOPp->CDMASpreading__DOT___zz_code_4 = (1U & 
					      ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_map_port4) 
					       >> 3U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:288
    vlTOPp->CDMASpreading__DOT___zz_code_5 = (1U & 
					      ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_map_port5) 
					       >> 2U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:289
    vlTOPp->CDMASpreading__DOT___zz_code_6 = (1U & 
					      ((IData)(vlTOPp->CDMASpreading__DOT___zz_code_map_port6) 
					       >> 1U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:290
    vlTOPp->CDMASpreading__DOT___zz_code_7 = (1U & (IData)(vlTOPp->CDMASpreading__DOT___zz_code_map_port7));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:291
    if ((0U == (IData)(vlTOPp->CDMASpreading__DOT__cnt))) {
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_0_cha_i 
	    = vlTOPp->base_iq_payload_0_cha_i;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_0_cha_q 
	    = vlTOPp->base_iq_payload_0_cha_q;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_1_cha_i 
	    = vlTOPp->base_iq_payload_1_cha_i;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_1_cha_q 
	    = vlTOPp->base_iq_payload_1_cha_q;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_2_cha_i 
	    = vlTOPp->base_iq_payload_2_cha_i;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_2_cha_q 
	    = vlTOPp->base_iq_payload_2_cha_q;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_3_cha_i 
	    = vlTOPp->base_iq_payload_3_cha_i;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_3_cha_q 
	    = vlTOPp->base_iq_payload_3_cha_q;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_4_cha_i 
	    = vlTOPp->base_iq_payload_4_cha_i;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_4_cha_q 
	    = vlTOPp->base_iq_payload_4_cha_q;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_5_cha_i 
	    = vlTOPp->base_iq_payload_5_cha_i;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_5_cha_q 
	    = vlTOPp->base_iq_payload_5_cha_q;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_6_cha_i 
	    = vlTOPp->base_iq_payload_6_cha_i;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_6_cha_q 
	    = vlTOPp->base_iq_payload_6_cha_q;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_7_cha_i 
	    = vlTOPp->base_iq_payload_7_cha_i;
	vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_7_cha_q 
	    = vlTOPp->base_iq_payload_7_cha_q;
    }
}

VL_INLINE_OPT void VCDMASpreading::_sequent__TOP__9(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_sequent__TOP__9\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CDMASpreading__DOT__cnt = vlTOPp->__Vdly__CDMASpreading__DOT__cnt;
    vlTOPp->CDMASpreading__DOT___zz_cnt = (7U & ((IData)(1U) 
						 + (IData)(vlTOPp->CDMASpreading__DOT__cnt)));
    vlTOPp->CDMASpreading__DOT__when_CDMASpreading_l65 
	= (0U == (IData)(vlTOPp->CDMASpreading__DOT__cnt));
    vlTOPp->CDMASpreading__DOT___zz_code_map_port0 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port1 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port2 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port3 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port4 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port5 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port6 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port7 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
}

VL_INLINE_OPT void VCDMASpreading::_combo__TOP__11(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_combo__TOP__11\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->base_iq_ready = ((0U == (IData)(vlTOPp->CDMASpreading__DOT__cnt)) 
			     & (~ (IData)(vlTOPp->clc)));
    vlTOPp->CDMASpreading__DOT__when_CDMASpreading_l51 
	= (((IData)(vlTOPp->base_iq_valid) & (IData)(vlTOPp->base_iq_ready)) 
	   | (0U != (IData)(vlTOPp->CDMASpreading__DOT__cnt)));
}

void VCDMASpreading::_eval(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_eval\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__9(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__11(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCDMASpreading::_change_request(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_change_request\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCDMASpreading::_change_request_1(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_change_request_1\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
