// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VZeroForcing.h for the primary calling header

#include "VZeroForcing.h"      // For This
#include "VZeroForcing__Syms.h"

//--------------------


void VZeroForcing::eval() {
    VZeroForcing__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VZeroForcing::eval\n"); );
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

void VZeroForcing::_eval_initial_loop(VZeroForcing__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VZeroForcing::_sequent__TOP__4(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_sequent__TOP__4\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:121
    vlTOPp->ZeroForcing__DOT__x_sign = vlTOPp->ZeroForcing__DOT___zz_x_sign_14;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:137
    vlTOPp->ZeroForcing__DOT__train_en_delay_16 = vlTOPp->ZeroForcing__DOT__train_en_delay_15;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:877
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_60 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_59;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:878
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_15 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_14;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_117)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_30) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_30) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_117)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_45) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_74))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_45) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:120
    vlTOPp->ZeroForcing__DOT___zz_x_sign_14 = vlTOPp->ZeroForcing__DOT___zz_x_sign_13;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:136
    vlTOPp->ZeroForcing__DOT__train_en_delay_15 = vlTOPp->ZeroForcing__DOT__train_en_delay_14;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:861
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_59 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_58;
    vlTOPp->result_data_payload = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__train_en_delay_16)
					       ? ((IData)(vlTOPp->ZeroForcing__DOT__x_sign)
						   ? 
						  VL_NEGATE_I((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z))
						   : (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z))
					       : ((IData)(vlTOPp->ZeroForcing__DOT__x_sign)
						   ? 
						  VL_NEGATE_I((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y))
						   : (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:862
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_14 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_13;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_30 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_114)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_29) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_29) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_45 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_114)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_44) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_74))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_44) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:119
    vlTOPp->ZeroForcing__DOT___zz_x_sign_13 = vlTOPp->ZeroForcing__DOT___zz_x_sign_12;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:135
    vlTOPp->ZeroForcing__DOT__train_en_delay_14 = vlTOPp->ZeroForcing__DOT__train_en_delay_13;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:845
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_58 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_57;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_117 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_60)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_45) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_30) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:646
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_74 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:846
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_13 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_12;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_29 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_111)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_28) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_28) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_44 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_111)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_43) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_73))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_43) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_73))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:118
    vlTOPp->ZeroForcing__DOT___zz_x_sign_12 = vlTOPp->ZeroForcing__DOT___zz_x_sign_11;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:134
    vlTOPp->ZeroForcing__DOT__train_en_delay_13 = vlTOPp->ZeroForcing__DOT__train_en_delay_12;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:829
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_57 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_56;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:645
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_73 = 1U;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_114 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_59)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_44) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_29) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:830
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_12 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_11;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_28 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_108)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_27) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_27) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_43 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_108)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_42) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_72))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_42) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_72))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:117
    vlTOPp->ZeroForcing__DOT___zz_x_sign_11 = vlTOPp->ZeroForcing__DOT___zz_x_sign_10;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:133
    vlTOPp->ZeroForcing__DOT__train_en_delay_12 = vlTOPp->ZeroForcing__DOT__train_en_delay_11;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:813
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_56 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_55;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:644
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_72 = 2U;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_111 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_58)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_43) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_28) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:814
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_11 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_10;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_27 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_105)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_26) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_26) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_42 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_105)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_41) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_71))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_41) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_71))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:116
    vlTOPp->ZeroForcing__DOT___zz_x_sign_10 = vlTOPp->ZeroForcing__DOT___zz_x_sign_9;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:132
    vlTOPp->ZeroForcing__DOT__train_en_delay_11 = vlTOPp->ZeroForcing__DOT__train_en_delay_10;
}

VL_INLINE_OPT void VZeroForcing::_sequent__TOP__5(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_sequent__TOP__5\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:797
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_55 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_54;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:643
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_71 = 4U;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_108 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_57)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_42) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_27) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:798
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_10 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_9;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_26 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_102)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_25) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_25) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_41 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_102)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_40) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_70))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_40) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_70))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:115
    vlTOPp->ZeroForcing__DOT___zz_x_sign_9 = vlTOPp->ZeroForcing__DOT___zz_x_sign_8;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:131
    vlTOPp->ZeroForcing__DOT__train_en_delay_10 = vlTOPp->ZeroForcing__DOT__train_en_delay_9;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:781
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_54 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_53;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:642
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_70 = 8U;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_105 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_56)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_41) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_26) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:782
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_9 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_8;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_25 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_99)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_24) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_24) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_40 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_99)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_39) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_69))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_39) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_69))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:114
    vlTOPp->ZeroForcing__DOT___zz_x_sign_8 = vlTOPp->ZeroForcing__DOT___zz_x_sign_7;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:130
    vlTOPp->ZeroForcing__DOT__train_en_delay_9 = vlTOPp->ZeroForcing__DOT__train_en_delay_8;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:765
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_53 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_52;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:641
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_69 = 0x10U;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_102 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_55)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_40) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_25) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:766
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_8 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_7;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_24 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_96)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_23) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_23) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_39 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_96)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_38) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_68))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_38) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_68))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:113
    vlTOPp->ZeroForcing__DOT___zz_x_sign_7 = vlTOPp->ZeroForcing__DOT___zz_x_sign_6;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:129
    vlTOPp->ZeroForcing__DOT__train_en_delay_8 = vlTOPp->ZeroForcing__DOT__train_en_delay_7;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:749
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_52 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_51;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:640
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_68 = 0x20U;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_99 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_54)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_39) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_24) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:750
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_7 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_6;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_23 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_93)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_22) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_22) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_38 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_93)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_37) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_67))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_37) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_67))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:112
    vlTOPp->ZeroForcing__DOT___zz_x_sign_6 = vlTOPp->ZeroForcing__DOT___zz_x_sign_5;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:128
    vlTOPp->ZeroForcing__DOT__train_en_delay_7 = vlTOPp->ZeroForcing__DOT__train_en_delay_6;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:733
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_51 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_50;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:639
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_67 = 0x40U;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_96 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_53)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_38) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_23) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:734
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_6 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_5;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_22 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_90)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_21) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_21) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_37 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_90)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_36) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_66))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_36) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_66))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:111
    vlTOPp->ZeroForcing__DOT___zz_x_sign_5 = vlTOPp->ZeroForcing__DOT___zz_x_sign_4;
}

VL_INLINE_OPT void VZeroForcing::_sequent__TOP__6(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_sequent__TOP__6\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:127
    vlTOPp->ZeroForcing__DOT__train_en_delay_6 = vlTOPp->ZeroForcing__DOT__train_en_delay_5;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:717
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_50 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_49;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:638
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_66 = 0x80U;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_93 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_52)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_37) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_22) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:718
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_5 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_4;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_21 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_87)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_20) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_20) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_36 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_87)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_35) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_65))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_35) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_65))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:110
    vlTOPp->ZeroForcing__DOT___zz_x_sign_4 = vlTOPp->ZeroForcing__DOT___zz_x_sign_3;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:126
    vlTOPp->ZeroForcing__DOT__train_en_delay_5 = vlTOPp->ZeroForcing__DOT__train_en_delay_4;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:701
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_49 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_48;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:637
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_65 = 0x100U;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_90 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_51)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_36) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_21) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:702
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_4 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_3;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_20 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_84)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_19) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_19) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_35 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_84)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_34) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_64))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_34) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_64))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:109
    vlTOPp->ZeroForcing__DOT___zz_x_sign_3 = vlTOPp->ZeroForcing__DOT___zz_x_sign_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:125
    vlTOPp->ZeroForcing__DOT__train_en_delay_4 = vlTOPp->ZeroForcing__DOT__train_en_delay_3;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:685
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_48 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_47;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:636
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_64 = 0x200U;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_87 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_50)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_35) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_20) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:686
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_3 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_2;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_19 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_81)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_18) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_18) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_34 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_81)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_33) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_63))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_33) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_63))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:108
    vlTOPp->ZeroForcing__DOT___zz_x_sign_2 = vlTOPp->ZeroForcing__DOT___zz_x_sign_1;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:124
    vlTOPp->ZeroForcing__DOT__train_en_delay_3 = vlTOPp->ZeroForcing__DOT__train_en_delay_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:669
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_47 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_46;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:635
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_63 = 0x400U;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_84 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_49)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_34) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_19) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:670
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_2 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_1;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_18 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_78)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_17) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_17) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_33 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_78)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_32) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_62))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_32) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_62))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:107
    vlTOPp->ZeroForcing__DOT___zz_x_sign_1 = vlTOPp->ZeroForcing__DOT___zz_x_sign;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:123
    vlTOPp->ZeroForcing__DOT__train_en_delay_2 = vlTOPp->ZeroForcing__DOT__train_en_delay_1;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:634
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_62 = 0x800U;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_81 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_48)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_33) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_18) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:654
    if (vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_1 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_17 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_75)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_16) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_16) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_32 
	    = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_75)
			   ? ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_31) 
			      - (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_61))
			   : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_31) 
			      + (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_61))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:106
    vlTOPp->ZeroForcing__DOT___zz_x_sign = (1U & ((IData)(vlTOPp->raw_data_payload) 
						  >> 0xfU));
    vlTOPp->ZeroForcing__DOT__train_en_delay_1 = vlTOPp->train_en;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:633
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_61 = 0x1000U;
}

VL_INLINE_OPT void VZeroForcing::_sequent__TOP__7(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_sequent__TOP__7\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_78 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_47)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_32) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_17) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:648
    if (vlTOPp->raw_data_valid) {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x 
	    = (0xffffU & (((0x8000U & (IData)(vlTOPp->raw_data_payload))
			    ? (~ (IData)(vlTOPp->raw_data_payload))
			    : (IData)(vlTOPp->raw_data_payload)) 
			  + (1U & ((IData)(vlTOPp->raw_data_payload) 
				   >> 0xfU))));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_16 
	    = ((IData)(vlTOPp->train_en) ? (IData)(vlTOPp->ref_data)
	        : 0U);
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_31 
	    = ((IData)(vlTOPp->train_en) ? 0U : (IData)(vlTOPp->scale));
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_46 
	    = (1U & (~ (IData)(vlTOPp->train_en)));
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_75 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_46)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_31) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_16) 
				     >> 0xfU)));
}

VL_INLINE_OPT void VZeroForcing::_sequent__TOP__8(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_sequent__TOP__8\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13,0,0);
    VL_SIG8(__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14,0,0);
    //char	__VpadToAlign99[1];
    // Body
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13;
    __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14 
	= vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/ZeroForcing.v:590
    if (vlTOPp->reset) {
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1 = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2 = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3 = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4 = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5 = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6 = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7 = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8 = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9 = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10 = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11 = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12 = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13 = 0U;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14 = 0U;
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_15 = 0U;
    } else {
	vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_15 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1 
	    = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid;
	__Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid 
	    = vlTOPp->raw_data_valid;
    }
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13;
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14 
	= __Vdly__ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14;
    vlTOPp->result_data_valid = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_15;
}

void VZeroForcing::_eval(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_eval\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VZeroForcing::_change_request(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_change_request\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VZeroForcing::_change_request_1(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_change_request_1\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
