// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUnsignedDivider.h for the primary calling header

#include "VUnsignedDivider.h"  // For This
#include "VUnsignedDivider__Syms.h"

//--------------------


void VUnsignedDivider::eval() {
    VUnsignedDivider__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VUnsignedDivider::eval\n"); );
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

void VUnsignedDivider::_eval_initial_loop(VUnsignedDivider__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VUnsignedDivider::_sequent__TOP__2(VUnsignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_sequent__TOP__2\n"); );
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:409
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_remainder 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_80)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_64
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_80));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:299
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_33 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:304
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_34 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_65)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_49
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_65));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:311
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_35 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_66)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_50
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_66));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:318
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_36 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_67)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_51
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_67));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:325
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_37 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_68)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_52
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_68));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:332
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_38 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_69)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_53
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_69));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:339
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_39 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_70)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_54
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_70));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:346
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_40 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_71)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_55
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_71));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:353
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_41 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_72)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_56
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_72));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:360
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_42 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_73)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_57
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_73));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:367
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_43 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_74)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_58
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_74));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:374
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_44 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_75)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_59
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_75));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:381
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_45 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_76)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_60
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_76));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:388
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_46 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_77)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_61
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_77));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:395
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_47 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_78)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_62
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_78));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:402
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_48 
	= (0xffffU & ((0x10000U & vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_79)
		       ? vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_63
		       : vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_79));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:406
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_error 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_32;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:407
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_16 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_15) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_80 
					   >> 0x10U))));
    vlTOPp->rsp_payload_remainder = vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_remainder;
    vlTOPp->rsp_payload_error = (0U == (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_error));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:399
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_32 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_31;
    vlTOPp->rsp_payload_quotient = vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_16;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:400
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_15 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_14) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_79 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:392
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_31 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_30;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_64 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_48) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_15) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:393
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_14 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_13) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_78 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:385
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_30 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_29;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_63 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_47) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_14) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:386
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_13 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_12) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_77 
					   >> 0x10U))));
}

VL_INLINE_OPT void VUnsignedDivider::_sequent__TOP__3(VUnsignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_sequent__TOP__3\n"); );
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:378
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_29 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_28;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_62 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_46) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_13) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:379
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_12 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_11) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_76 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:371
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_28 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_27;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_61 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_45) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_12) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:372
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_11 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_10) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_75 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:364
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_27 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_26;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_60 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_44) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_11) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:365
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_10 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_9) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_74 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:357
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_26 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_25;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_59 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_43) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_10) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:358
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_9 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_8) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_73 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:350
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_25 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_24;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_58 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_42) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_9) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:351
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_8 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_7) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_72 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:343
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_24 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_23;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_57 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_41) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_8) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:344
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_7 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_6) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_71 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:336
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_23 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_22;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_56 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_40) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_7) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:337
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_6 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_5) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_70 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:329
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_22 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_21;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_55 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_39) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_6) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:330
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_5 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_4) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_69 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:322
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_21 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_20;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_54 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_38) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_5) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:323
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_4 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_3) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_68 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:315
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_20 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_19;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_53 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_37) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_4) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:316
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_3 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_2) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_67 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:308
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_19 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_18;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_52 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_36) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_3) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:309
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_2 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_1) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_66 
					   >> 0x10U))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:301
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_18 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_17;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_51 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_35) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_2) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:302
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_1 
	= ((0xfffeU & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient) 
		       << 1U)) | (1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_65 
					   >> 0x10U))));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_50 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_34) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_1) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:298
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_17 
	= vlTOPp->cmd_payload_denominator;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient 
	= vlTOPp->cmd_payload_numerator;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_49 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_33) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient) 
			    >> 0xfU)));
}

VL_INLINE_OPT void VUnsignedDivider::_sequent__TOP__4(VUnsignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_sequent__TOP__4\n"); );
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_1,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_2,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_3,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_4,0,0);
    //char	__VpadToAlign49[3];
    // Body
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid = vlTOPp->UnsignedDivider__DOT___zz_rsp_valid;
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_1 = vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_1;
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_2 = vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_2;
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_3 = vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_3;
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_4 = vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_4;
    vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_5 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_5;
    vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_6 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_6;
    vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_7 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_7;
    vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_8 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_8;
    vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_9 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_9;
    vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_10 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_10;
    vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_11 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_11;
    vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_12 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_12;
    vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_13 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_13;
    vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_14 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_14;
    vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_15 
	= vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_15;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:257
    if (vlTOPp->reset) {
	__Vdly__UnsignedDivider__DOT___zz_rsp_valid = 0U;
	__Vdly__UnsignedDivider__DOT___zz_rsp_valid_1 = 0U;
	__Vdly__UnsignedDivider__DOT___zz_rsp_valid_2 = 0U;
	__Vdly__UnsignedDivider__DOT___zz_rsp_valid_3 = 0U;
	__Vdly__UnsignedDivider__DOT___zz_rsp_valid_4 = 0U;
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_5 = 0U;
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_6 = 0U;
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_7 = 0U;
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_8 = 0U;
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_9 = 0U;
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_10 = 0U;
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_11 = 0U;
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_12 = 0U;
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_13 = 0U;
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_14 = 0U;
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_15 = 0U;
	vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_16 = 0U;
    } else {
	__Vdly__UnsignedDivider__DOT___zz_rsp_valid 
	    = ((~ (IData)(vlTOPp->flush)) & ((IData)(vlTOPp->cmd_valid) 
					     & (IData)(vlTOPp->cmd_ready)));
	__Vdly__UnsignedDivider__DOT___zz_rsp_valid_1 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid));
	__Vdly__UnsignedDivider__DOT___zz_rsp_valid_2 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_1));
	__Vdly__UnsignedDivider__DOT___zz_rsp_valid_3 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_2));
	__Vdly__UnsignedDivider__DOT___zz_rsp_valid_4 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_3));
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_5 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_4));
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_6 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_5));
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_7 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_6));
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_8 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_7));
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_9 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_8));
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_10 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_9));
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_11 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_10));
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_12 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_11));
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_13 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_12));
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_14 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_13));
	vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_15 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_14));
	vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_16 
	    = ((~ (IData)(vlTOPp->flush)) & (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_15));
    }
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid = __Vdly__UnsignedDivider__DOT___zz_rsp_valid;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_1 = __Vdly__UnsignedDivider__DOT___zz_rsp_valid_1;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_2 = __Vdly__UnsignedDivider__DOT___zz_rsp_valid_2;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_3 = __Vdly__UnsignedDivider__DOT___zz_rsp_valid_3;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_4 = __Vdly__UnsignedDivider__DOT___zz_rsp_valid_4;
}

VL_INLINE_OPT void VUnsignedDivider::_sequent__TOP__5(VUnsignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_sequent__TOP__5\n"); );
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_5 = vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_5;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_6 = vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_6;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_7 = vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_7;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_8 = vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_8;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_9 = vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_9;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_10 
	= vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_10;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_11 
	= vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_11;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_12 
	= vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_12;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_13 
	= vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_13;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_14 
	= vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_14;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_15 
	= vlTOPp->__Vdly__UnsignedDivider__DOT___zz_rsp_valid_15;
    vlTOPp->rsp_valid = vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_16;
}

VL_INLINE_OPT void VUnsignedDivider::_combo__TOP__7(VUnsignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_combo__TOP__7\n"); );
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cmd_ready = vlTOPp->rsp_ready;
}

VL_INLINE_OPT void VUnsignedDivider::_sequent__TOP__8(VUnsignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_sequent__TOP__8\n"); );
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_80 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_64 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_32)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_79 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_63 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_31)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_78 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_62 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_30)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_77 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_61 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_29)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_76 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_60 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_28)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_75 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_59 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_27)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_74 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_58 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_26)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_73 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_57 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_25)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_72 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_56 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_24)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_71 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_55 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_23)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_70 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_54 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_22)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_69 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_53 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_21)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_68 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_52 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_20)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_67 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_51 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_19)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_66 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_50 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_18)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_65 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_49 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_17)));
}

void VUnsignedDivider::_eval(VUnsignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_eval\n"); );
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VUnsignedDivider::_change_request(VUnsignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_change_request\n"); );
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VUnsignedDivider::_change_request_1(VUnsignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_change_request_1\n"); );
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
