// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedDivider.h for the primary calling header

#include "VMixedDivider.h"     // For This
#include "VMixedDivider__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMixedDivider) {
    VMixedDivider__Syms* __restrict vlSymsp = __VlSymsp = new VMixedDivider__Syms(this, name());
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMixedDivider::__Vconfigure(VMixedDivider__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMixedDivider::~VMixedDivider() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VMixedDivider::_settle__TOP__3(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_settle__TOP__3\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rsp_valid = vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid;
    vlTOPp->MixedDivider__DOT__divider__DOT__rsp_fire 
	= ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid) 
	   & (IData)(vlTOPp->rsp_ready));
    vlTOPp->cmd_ready = vlTOPp->MixedDivider__DOT__divider__DOT___zz_cmd_ready;
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
    vlTOPp->MixedDivider__DOT__divider__DOT__cmd_fire 
	= ((IData)(vlTOPp->cmd_valid) & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_cmd_ready));
    vlTOPp->rsp_payload_error = (0U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1));
    vlTOPp->rsp_payload_remainder = (0xffffU & (((2U 
						  & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context))
						  ? 
						 (~ (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2))
						  : (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2)) 
						+ (1U 
						   & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context) 
						      >> 1U))));
    vlTOPp->rsp_payload_quotient = (0xffffU & (((1U 
						 & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context))
						 ? 
						(~ (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient))
						 : (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient)) 
					       + (1U 
						  & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context))));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1)));
}

void VMixedDivider::_settle__TOP__7(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_settle__TOP__7\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:150
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_1 = 0U;
    if ((0U != (IData)(vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92))) {
	if ((1U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92))) {
	    vlTOPp->MixedDivider__DOT__divider__DOT___zz_1 = 1U;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:165
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_2 = 0U;
    if ((0U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92))) {
	if (vlTOPp->MixedDivider__DOT__divider__DOT__cmd_fire) {
	    vlTOPp->MixedDivider__DOT__divider__DOT___zz_2 = 1U;
	}
    }
    vlTOPp->MixedDivider__DOT__divider__DOT___zz___05Fzz_rsp_payload_quotient 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient) 
	    << 1U) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4 
			       >> 0x10U))));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_6 
	= ((0xfU == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_4)) 
	   & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_1));
}

void VMixedDivider::_settle__TOP__10(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_settle__TOP__10\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:184
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_3 
	= (0xfU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_4) 
		   + (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_1)));
    if (vlTOPp->MixedDivider__DOT__divider__DOT___zz_2) {
	vlTOPp->MixedDivider__DOT__divider__DOT___zz_3 = 0U;
    }
}

void VMixedDivider::_eval_initial(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_eval_initial\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedDivider::final() {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::final\n"); );
    // Variables
    VMixedDivider__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedDivider::_eval_settle(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_eval_settle\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__10(vlSymsp);
}

void VMixedDivider::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_ctor_var_reset\n"); );
    // Body
    flush = VL_RAND_RESET_I(1);
    cmd_valid = VL_RAND_RESET_I(1);
    cmd_ready = VL_RAND_RESET_I(1);
    cmd_payload_numerator = VL_RAND_RESET_I(16);
    cmd_payload_denominator = VL_RAND_RESET_I(16);
    cmd_payload_signed = VL_RAND_RESET_I(1);
    rsp_valid = VL_RAND_RESET_I(1);
    rsp_ready = VL_RAND_RESET_I(1);
    rsp_payload_quotient = VL_RAND_RESET_I(16);
    rsp_payload_remainder = VL_RAND_RESET_I(16);
    rsp_payload_error = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider_cmd_payload_context = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz___05Fzz_rsp_payload_quotient = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_cmd_ready = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_1 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_2 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_3 = VL_RAND_RESET_I(4);
    MixedDivider__DOT__divider__DOT___zz_4 = VL_RAND_RESET_I(4);
    MixedDivider__DOT__divider__DOT___zz_6 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT__cmd_fire = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT__rsp_fire = VL_RAND_RESET_I(1);
    __Vdly__MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92 = VL_RAND_RESET_I(2);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VMixedDivider::_configure_coverage(VMixedDivider__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_configure_coverage\n"); );
}
