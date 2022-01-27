// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDirectFIR.h for the primary calling header

#include "VDirectFIR.h"        // For This
#include "VDirectFIR__Syms.h"

//--------------------


void VDirectFIR::eval() {
    VDirectFIR__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VDirectFIR::eval\n"); );
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

void VDirectFIR::_eval_initial_loop(VDirectFIR__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VDirectFIR::_sequent__TOP__1(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VDirectFIR::_sequent__TOP__1\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:63
    vlTOPp->DirectFIR__DOT__coff_mem_0 = 0xbU;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:64
    vlTOPp->DirectFIR__DOT__coff_mem_1 = 0x1fU;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:65
    vlTOPp->DirectFIR__DOT__coff_mem_2 = 0x3fU;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:66
    vlTOPp->DirectFIR__DOT__coff_mem_3 = 0x68U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:67
    vlTOPp->DirectFIR__DOT__coff_mem_4 = 0x98U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:68
    vlTOPp->DirectFIR__DOT__coff_mem_5 = 0xc6U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:69
    vlTOPp->DirectFIR__DOT__coff_mem_6 = 0xebU;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:70
    vlTOPp->DirectFIR__DOT__coff_mem_7 = 0xffU;
}

VL_INLINE_OPT void VDirectFIR::_sequent__TOP__3(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VDirectFIR::_sequent__TOP__3\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15,28,0);
    // Body
    __Vdly__DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13;
    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14 
	= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:211
    if (vlTOPp->reset) {
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13 = 0U;
	vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_0 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_1 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_2 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_3 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_4 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_5 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_6 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_7 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_8 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_9 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_10 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_11 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_12 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_13 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_14 = 0U;
	__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15 = 0U;
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__sum_result = 0U;
    } else {
	vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en 
	    = (7U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_internal_en));
	if (vlTOPp->raw_data_valid) {
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1 
		= vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0;
	    vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0 
		= vlTOPp->raw_data_payload_0;
	}
	if (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__when_DirectFIR_l35) {
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__sum_result 
		= (0x1fffffffU & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_sum_result 
				  + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15));
	}
	if (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__when_DirectFIR_l29) {
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_0 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_0 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_0);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_1 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_1 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_1);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_2 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_2 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_2);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_3 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_3 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_3);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_4 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_4 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_4);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_5 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_5 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_5);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_6 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_6 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_6);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_7 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_7 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_7);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_8 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_8 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_8);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_9 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_9 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_9);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_10 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_10 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_10);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_11 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_11 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_11);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_12 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_12 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_12);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_13 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_13 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_13);
	    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_14 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_14 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_14);
	    __Vdly__DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15 
		= ((0x1fe00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_15 
							   >> 0x14U)))) 
				   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_15);
	}
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15 
	= __Vdly__DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15;
}

VL_INLINE_OPT void VDirectFIR::_sequent__TOP__4(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VDirectFIR::_sequent__TOP__4\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0 
	= vlTOPp->__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0;
    vlTOPp->filtered_data_payload_0 = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__sum_result;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_14 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_1))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_13 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_2))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_12 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_3))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_11 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_4))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_10 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_5))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_9 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_6))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_8 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_7))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_7 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_7))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_6 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_6))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_5 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_5))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_4 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_4))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_3 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_3))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_2 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_2))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_1 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_1))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_0 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_0))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_15 
	= (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
					      & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_0))), 
				   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15)))));
    vlTOPp->filtered_data_valid = (1U & ((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
					 >> 2U));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__when_DirectFIR_l29 
	= (1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__when_DirectFIR_l35 
	= (1U & ((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
		 >> 1U));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_sum_result 
	= (0x1fffffffU & ((((((((((((((vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_0 
				       + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_1) 
				      + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_2) 
				     + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_3) 
				    + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_4) 
				   + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_5) 
				  + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_6) 
				 + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_7) 
				+ vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_8) 
			       + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_9) 
			      + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_10) 
			     + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_11) 
			    + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_12) 
			   + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_13) 
			  + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_14));
}

VL_INLINE_OPT void VDirectFIR::_combo__TOP__6(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VDirectFIR::_combo__TOP__6\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_internal_en 
	= (((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
	    << 1U) | (IData)(vlTOPp->raw_data_valid));
}

void VDirectFIR::_eval(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VDirectFIR::_eval\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VDirectFIR::_change_request(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VDirectFIR::_change_request\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VDirectFIR::_change_request_1(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VDirectFIR::_change_request_1\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
