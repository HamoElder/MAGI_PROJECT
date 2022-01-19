// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSignedDivider.h for the primary calling header

#include "VSignedDivider.h"    // For This
#include "VSignedDivider__Syms.h"

//--------------------


void VSignedDivider::eval() {
    VSignedDivider__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VSignedDivider::eval\n"); );
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

void VSignedDivider::_eval_initial_loop(VSignedDivider__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VSignedDivider::_combo__TOP__1(VSignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSignedDivider::_combo__TOP__1\n"); );
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cmd_ready = vlTOPp->rsp_ready;
}

VL_INLINE_OPT void VSignedDivider::_sequent__TOP__4(VSignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSignedDivider::_sequent__TOP__4\n"); );
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:545
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_remainder 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_80)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_64
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_80));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:419
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_33 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:425
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_34 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_65)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_49
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_65));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:433
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_35 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_66)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_50
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_66));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:441
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_36 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_67)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_51
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_67));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:449
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_37 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_68)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_52
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_68));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:457
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_38 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_69)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_53
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_69));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:465
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_39 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_70)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_54
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_70));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:473
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_40 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_71)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_55
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_71));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:481
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_41 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_72)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_56
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_72));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:489
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_42 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_73)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_57
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_73));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:497
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_43 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_74)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_58
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_74));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:505
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_44 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_75)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_59
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_75));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:513
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_45 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_76)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_60
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_76));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:521
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_46 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_77)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_61
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_77));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:529
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_47 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_78)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_62
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_78));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:537
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_48 
	= (0xffffU & ((0x10000U & vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_79)
		       ? vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_63
		       : vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_79));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:541
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_16 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_15;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:542
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_error 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_32;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:543
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_16 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_15) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_80 
					   >> 0x10U))));
    vlTOPp->rsp_payload_remainder = (0xffffU & (((2U 
						  & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_16))
						  ? 
						 (~ (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_remainder))
						  : (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_remainder)) 
						+ (1U 
						   & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_16) 
						      >> 1U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:533
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_15 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_14;
    vlTOPp->rsp_payload_error = (0U == (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_error));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:534
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_32 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_31;
    vlTOPp->rsp_payload_quotient = (0xffffU & (((1U 
						 & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_16))
						 ? 
						(~ (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_16))
						 : (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_16)) 
					       + (1U 
						  & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_16))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:535
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_15 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_14) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_79 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:525
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_14 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_13;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:526
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_31 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_30;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_64 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_48) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_15) 
			    >> 0xfU)));
}

VL_INLINE_OPT void VSignedDivider::_sequent__TOP__5(VSignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSignedDivider::_sequent__TOP__5\n"); );
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:527
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_14 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_13) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_78 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:517
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_13 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_12;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:518
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_30 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_29;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_63 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_47) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_14) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:519
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_13 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_12) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_77 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:509
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_12 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_11;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:510
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_29 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_28;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_62 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_46) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_13) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:511
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_12 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_11) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_76 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:501
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_11 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_10;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:502
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_28 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_27;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_61 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_45) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_12) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:503
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_11 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_10) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_75 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:493
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_10 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_9;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:494
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_27 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_26;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_60 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_44) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_11) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:495
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_10 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_9) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_74 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:485
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_9 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_8;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:486
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_26 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_25;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_59 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_43) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_10) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:487
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_9 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_8) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_73 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:477
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_8 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_7;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:478
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_25 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_24;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_58 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_42) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_9) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:479
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_8 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_7) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_72 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:469
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_7 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_6;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:470
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_24 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_23;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_57 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_41) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_8) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:471
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_7 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_6) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_71 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:461
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_6 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_5;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:462
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_23 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_22;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_56 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_40) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_7) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:463
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_6 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_5) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_70 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:453
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_5 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_4;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:454
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_22 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_21;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_55 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_39) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_6) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:455
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_5 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_69 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:445
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_4 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_3;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:446
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_21 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_20;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_54 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_38) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_5) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:447
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_68 
					   >> 0x10U))));
}

VL_INLINE_OPT void VSignedDivider::_sequent__TOP__6(VSignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSignedDivider::_sequent__TOP__6\n"); );
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:437
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_3 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:438
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_20 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_19;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_53 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_37) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:439
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_67 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:429
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_2 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_1;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:430
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_19 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_18;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_52 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_36) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:431
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_66 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:421
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_1 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:422
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_18 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_17;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_51 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_35) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:423
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1 
	= ((0xfffeU & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient) 
		       << 1U)) | (1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_65 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:417
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context 
	= vlTOPp->SignedDivider__DOT__divider_cmd_payload_context;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:418
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_17 
	= (0xffffU & (((0x8000U & (IData)(vlTOPp->cmd_payload_denominator))
		        ? (~ (IData)(vlTOPp->cmd_payload_denominator))
		        : (IData)(vlTOPp->cmd_payload_denominator)) 
		      + (1U & ((IData)(vlTOPp->cmd_payload_denominator) 
			       >> 0xfU))));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_50 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_34) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:420
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient 
	= (0xffffU & (((0x8000U & (IData)(vlTOPp->cmd_payload_numerator))
		        ? (~ (IData)(vlTOPp->cmd_payload_numerator))
		        : (IData)(vlTOPp->cmd_payload_numerator)) 
		      + (1U & ((IData)(vlTOPp->cmd_payload_numerator) 
			       >> 0xfU))));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_49 
	= (((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_33) 
	    << 1U) | (1U & ((IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient) 
			    >> 0xfU)));
}

VL_INLINE_OPT void VSignedDivider::_sequent__TOP__7(VSignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSignedDivider::_sequent__TOP__7\n"); );
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid,0,0);
    VL_SIG8(__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_1,0,0);
    VL_SIG8(__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_2,0,0);
    VL_SIG8(__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_3,0,0);
    VL_SIG8(__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_4,0,0);
    //char	__VpadToAlign89[3];
    // Body
    __Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid;
    __Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_1 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_1;
    __Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_2 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_2;
    __Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_3 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_3;
    __Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_4 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_4;
    vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_5 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_5;
    vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_6 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_6;
    vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_7 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_7;
    vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_8 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_8;
    vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_9 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_9;
    vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_10 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_10;
    vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_11 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_11;
    vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_12 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_12;
    vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_13 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_13;
    vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_14 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_14;
    vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_15 
	= vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_15;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:376
    if (vlTOPp->reset) {
	__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid = 0U;
	__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_1 = 0U;
	__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_2 = 0U;
	__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_3 = 0U;
	__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_4 = 0U;
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_5 = 0U;
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_6 = 0U;
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_7 = 0U;
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_8 = 0U;
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_9 = 0U;
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_10 = 0U;
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_11 = 0U;
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_12 = 0U;
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_13 = 0U;
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_14 = 0U;
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_15 = 0U;
	vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_16 = 0U;
    } else {
	__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid 
	    = ((~ (IData)(vlTOPp->flush)) & ((IData)(vlTOPp->cmd_valid) 
					     & (IData)(vlTOPp->rsp_ready)));
	__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_1 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid));
	__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_2 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_1));
	__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_3 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_2));
	__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_4 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_3));
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_5 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_4));
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_6 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_5));
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_7 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_6));
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_8 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_7));
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_9 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_8));
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_10 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_9));
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_11 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_10));
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_12 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_11));
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_13 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_12));
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_14 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_13));
	vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_15 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_14));
	vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_16 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_15));
    }
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid 
	= __Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_1 
	= __Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_1;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_2 
	= __Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_2;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_3 
	= __Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_3;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_4 
	= __Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_4;
}

VL_INLINE_OPT void VSignedDivider::_sequent__TOP__8(VSignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSignedDivider::_sequent__TOP__8\n"); );
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_5 
	= vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_5;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_6 
	= vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_6;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_7 
	= vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_7;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_8 
	= vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_8;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_9 
	= vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_9;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_10 
	= vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_10;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_11 
	= vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_11;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_12 
	= vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_12;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_13 
	= vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_13;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_14 
	= vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_14;
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_15 
	= vlTOPp->__Vdly__SignedDivider__DOT__divider__DOT___zz_rsp_valid_15;
    vlTOPp->rsp_valid = vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_16;
}

VL_INLINE_OPT void VSignedDivider::_combo__TOP__10(VSignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSignedDivider::_combo__TOP__10\n"); );
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:92
    vlTOPp->SignedDivider__DOT__divider_cmd_payload_context 
	= ((2U & (IData)(vlTOPp->SignedDivider__DOT__divider_cmd_payload_context)) 
	   | (1U & (((IData)(vlTOPp->cmd_payload_numerator) 
		     ^ (IData)(vlTOPp->cmd_payload_denominator)) 
		    >> 0xfU)));
    vlTOPp->SignedDivider__DOT__divider_cmd_payload_context 
	= ((1U & (IData)(vlTOPp->SignedDivider__DOT__divider_cmd_payload_context)) 
	   | (2U & ((IData)(vlTOPp->cmd_payload_numerator) 
		    >> 0xeU)));
}

VL_INLINE_OPT void VSignedDivider::_sequent__TOP__11(VSignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSignedDivider::_sequent__TOP__11\n"); );
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_80 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_64 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_32)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_79 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_63 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_31)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_78 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_62 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_30)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_77 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_61 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_29)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_76 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_60 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_28)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_75 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_59 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_27)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_74 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_58 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_26)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_73 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_57 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_25)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_72 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_56 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_24)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_71 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_55 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_23)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_70 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_54 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_22)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_69 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_53 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_21)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_68 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_52 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_20)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_67 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_51 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_19)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_66 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_50 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_18)));
    vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_65 
	= (0x1ffffU & (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_49 
		       - (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_17)));
}

void VSignedDivider::_eval(VSignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSignedDivider::_eval\n"); );
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__11(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VSignedDivider::_change_request(VSignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSignedDivider::_change_request\n"); );
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSignedDivider::_change_request_1(VSignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSignedDivider::_change_request_1\n"); );
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
