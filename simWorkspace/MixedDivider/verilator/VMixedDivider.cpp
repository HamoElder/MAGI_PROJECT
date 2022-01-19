// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedDivider.h for the primary calling header

#include "VMixedDivider.h"     // For This
#include "VMixedDivider__Syms.h"

//--------------------


void VMixedDivider::eval() {
    VMixedDivider__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VMixedDivider::eval\n"); );
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

void VMixedDivider::_eval_initial_loop(VMixedDivider__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VMixedDivider::_combo__TOP__1(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_combo__TOP__1\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cmd_ready = vlTOPp->rsp_ready;
}

VL_INLINE_OPT void VMixedDivider::_sequent__TOP__4(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_sequent__TOP__4\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:546
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_remainder 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_80)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_64
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_80));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:420
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_33 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:426
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_34 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_65)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_49
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_65));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:434
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_35 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_66)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_50
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_66));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:442
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_36 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_67)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_51
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_67));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:450
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_37 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_68)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_52
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_68));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:458
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_38 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_69)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_53
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_69));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:466
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_39 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_70)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_54
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_70));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:474
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_40 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_71)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_55
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_71));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:482
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_41 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_72)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_56
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_72));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:490
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_42 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_73)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_57
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_73));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:498
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_43 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_74)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_58
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_74));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:506
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_44 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_75)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_59
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_75));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:514
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_45 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_76)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_60
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_76));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:522
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_46 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_77)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_61
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_77));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:530
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_47 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_78)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_62
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_78));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:538
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_48 
	= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_79)
		       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_63
		       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_79));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:542
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_16 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_15;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:543
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_error 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_32;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:544
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_16 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_15) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_80 
					   >> 0x10U))));
    vlTOPp->rsp_payload_remainder = (0xffffU & (((2U 
						  & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_16))
						  ? 
						 (~ (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_remainder))
						  : (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_remainder)) 
						+ (1U 
						   & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_16) 
						      >> 1U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:534
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_15 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_14;
    vlTOPp->rsp_payload_error = (0U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_error));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:535
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_32 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_31;
    vlTOPp->rsp_payload_quotient = (0xffffU & (((1U 
						 & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_16))
						 ? 
						(~ (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_16))
						 : (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_16)) 
					       + (1U 
						  & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_16))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:536
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_15 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_14) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_79 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:526
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_14 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_13;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:527
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_31 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_30;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_64 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_48) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_15) 
			    >> 0xfU)));
}

VL_INLINE_OPT void VMixedDivider::_sequent__TOP__5(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_sequent__TOP__5\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:528
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_14 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_13) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_78 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:518
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_13 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_12;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:519
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_30 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_29;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_63 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_47) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_14) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:520
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_13 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_12) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_77 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:510
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_12 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_11;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:511
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_29 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_28;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_62 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_46) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_13) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:512
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_12 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_11) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_76 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:502
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_11 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_10;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:503
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_28 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_27;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_61 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_45) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_12) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:504
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_11 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_10) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_75 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:494
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_10 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_9;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:495
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_27 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_26;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_60 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_44) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_11) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:496
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_10 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_9) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_74 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:486
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_9 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_8;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:487
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_26 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_25;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_59 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_43) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_10) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:488
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_9 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_8) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_73 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:478
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_8 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_7;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:479
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_25 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_24;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_58 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_42) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_9) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:480
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_8 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_7) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_72 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:470
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_7 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_6;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:471
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_24 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_23;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_57 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_41) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_8) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:472
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_7 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_6) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_71 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:462
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_6 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_5;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:463
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_23 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_22;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_56 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_40) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_7) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:464
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_6 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_5) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_70 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:454
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_5 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_4;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:455
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_22 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_21;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_55 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_39) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_6) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:456
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_5 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_69 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:446
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_4 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_3;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:447
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_21 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_20;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_54 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_38) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_5) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:448
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_68 
					   >> 0x10U))));
}

VL_INLINE_OPT void VMixedDivider::_sequent__TOP__6(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_sequent__TOP__6\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:438
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_3 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:439
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_20 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_19;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_53 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_37) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:440
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_67 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:430
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_2 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_1;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:431
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_19 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_18;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_52 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_36) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:432
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_66 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:422
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_1 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:423
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_18 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_17;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_51 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_35) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:424
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1 
	= ((0xfffeU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient) 
		       << 1U)) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_65 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:418
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context 
	= vlTOPp->MixedDivider__DOT__divider_cmd_payload_context;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:419
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_17 
	= (0xffffU & (((((IData)(vlTOPp->cmd_payload_denominator) 
			 >> 0xfU) & (IData)(vlTOPp->cmd_payload_signed))
		        ? (~ (IData)(vlTOPp->cmd_payload_denominator))
		        : (IData)(vlTOPp->cmd_payload_denominator)) 
		      + (((IData)(vlTOPp->cmd_payload_denominator) 
			  >> 0xfU) & (IData)(vlTOPp->cmd_payload_signed))));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_50 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_34) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:421
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient 
	= (0xffffU & (((((IData)(vlTOPp->cmd_payload_numerator) 
			 >> 0xfU) & (IData)(vlTOPp->cmd_payload_signed))
		        ? (~ (IData)(vlTOPp->cmd_payload_numerator))
		        : (IData)(vlTOPp->cmd_payload_numerator)) 
		      + (((IData)(vlTOPp->cmd_payload_numerator) 
			  >> 0xfU) & (IData)(vlTOPp->cmd_payload_signed))));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_49 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_33) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient) 
			    >> 0xfU)));
}

VL_INLINE_OPT void VMixedDivider::_sequent__TOP__7(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_sequent__TOP__7\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid,0,0);
    VL_SIG8(__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_1,0,0);
    VL_SIG8(__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_2,0,0);
    VL_SIG8(__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_3,0,0);
    VL_SIG8(__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_4,0,0);
    //char	__VpadToAlign89[3];
    // Body
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid;
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_1 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_1;
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_2 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_2;
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_3 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_3;
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_4 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_4;
    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_5 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_5;
    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_6 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_6;
    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_7 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_7;
    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_8 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_8;
    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_9 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_9;
    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_10 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_10;
    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_11 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_11;
    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_12 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_12;
    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_13 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_13;
    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_14 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_14;
    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_15 
	= vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_15;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:377
    if (vlTOPp->reset) {
	__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid = 0U;
	__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_1 = 0U;
	__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_2 = 0U;
	__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_3 = 0U;
	__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_4 = 0U;
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_5 = 0U;
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_6 = 0U;
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_7 = 0U;
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_8 = 0U;
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_9 = 0U;
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_10 = 0U;
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_11 = 0U;
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_12 = 0U;
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_13 = 0U;
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_14 = 0U;
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_15 = 0U;
	vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_16 = 0U;
    } else {
	__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid 
	    = ((~ (IData)(vlTOPp->flush)) & ((IData)(vlTOPp->cmd_valid) 
					     & (IData)(vlTOPp->rsp_ready)));
	__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_1 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid));
	__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_2 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_1));
	__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_3 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_2));
	__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_4 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_3));
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_5 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_4));
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_6 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_5));
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_7 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_6));
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_8 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_7));
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_9 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_8));
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_10 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_9));
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_11 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_10));
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_12 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_11));
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_13 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_12));
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_14 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_13));
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_15 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_14));
	vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_16 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_15));
    }
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid 
	= __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_1 
	= __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_1;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_2 
	= __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_2;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_3 
	= __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_3;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_4 
	= __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_4;
}

VL_INLINE_OPT void VMixedDivider::_sequent__TOP__8(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_sequent__TOP__8\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_5 
	= vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_5;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_6 
	= vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_6;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_7 
	= vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_7;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_8 
	= vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_8;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_9 
	= vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_9;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_10 
	= vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_10;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_11 
	= vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_11;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_12 
	= vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_12;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_13 
	= vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_13;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_14 
	= vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_14;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_15 
	= vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_15;
    vlTOPp->rsp_valid = vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_16;
}

VL_INLINE_OPT void VMixedDivider::_combo__TOP__10(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_combo__TOP__10\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:93
    vlTOPp->MixedDivider__DOT__divider_cmd_payload_context 
	= ((2U & (IData)(vlTOPp->MixedDivider__DOT__divider_cmd_payload_context)) 
	   | ((IData)(vlTOPp->cmd_payload_signed) & 
	      (((IData)(vlTOPp->cmd_payload_numerator) 
		^ (IData)(vlTOPp->cmd_payload_denominator)) 
	       >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider_cmd_payload_context 
	= ((1U & (IData)(vlTOPp->MixedDivider__DOT__divider_cmd_payload_context)) 
	   | (0x3fffeU & (((IData)(vlTOPp->cmd_payload_signed) 
			   << 1U) & ((IData)(vlTOPp->cmd_payload_numerator) 
				     >> 0xeU))));
}

VL_INLINE_OPT void VMixedDivider::_sequent__TOP__11(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_sequent__TOP__11\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_80 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_64 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_32)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_79 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_63 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_31)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_78 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_62 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_30)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_77 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_61 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_29)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_76 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_60 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_28)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_75 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_59 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_27)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_74 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_58 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_26)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_73 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_57 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_25)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_72 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_56 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_24)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_71 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_55 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_23)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_70 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_54 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_22)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_69 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_53 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_21)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_68 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_52 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_20)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_67 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_51 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_19)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_66 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_50 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_18)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_65 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_49 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_17)));
}

void VMixedDivider::_eval(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_eval\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData VMixedDivider::_change_request(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_change_request\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VMixedDivider::_change_request_1(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_change_request_1\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
