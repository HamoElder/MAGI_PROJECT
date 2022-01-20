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

VL_INLINE_OPT void VMixedDivider::_sequent__TOP__1(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_sequent__TOP__1\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92 
	= vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:202
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92 = 0U;
	vlTOPp->MixedDivider__DOT__divider__DOT___zz_cmd_ready = 0U;
	vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid = 0U;
	vlTOPp->MixedDivider__DOT__divider__DOT___zz_4 = 0U;
    } else {
	vlTOPp->MixedDivider__DOT__divider__DOT___zz_4 
	    = vlTOPp->MixedDivider__DOT__divider__DOT___zz_3;
	if ((0U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92))) {
	    if (vlTOPp->MixedDivider__DOT__divider__DOT__cmd_fire) {
		vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92 = 1U;
		vlTOPp->MixedDivider__DOT__divider__DOT___zz_cmd_ready = 0U;
	    } else {
		vlTOPp->MixedDivider__DOT__divider__DOT___zz_cmd_ready = 1U;
	    }
	    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid = 0U;
	} else {
	    if ((1U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92))) {
		if (vlTOPp->flush) {
		    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92 = 0U;
		    vlTOPp->MixedDivider__DOT__divider__DOT___zz_cmd_ready = 1U;
		    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid = 0U;
		} else {
		    if (vlTOPp->MixedDivider__DOT__divider__DOT___zz_6) {
			vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92 = 2U;
			vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid = 1U;
		    }
		}
	    } else {
		if ((2U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92))) {
		    if (vlTOPp->flush) {
			vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92 = 0U;
			vlTOPp->MixedDivider__DOT__divider__DOT___zz_cmd_ready = 1U;
			vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid = 0U;
		    } else {
			if (vlTOPp->MixedDivider__DOT__divider__DOT__rsp_fire) {
			    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid = 0U;
			    vlTOPp->MixedDivider__DOT__divider__DOT___zz_cmd_ready = 1U;
			    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92 = 0U;
			}
		    }
		} else {
		    vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92 = 0U;
		}
	    }
	}
    }
    vlTOPp->rsp_valid = vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid;
    vlTOPp->cmd_ready = vlTOPp->MixedDivider__DOT__divider__DOT___zz_cmd_ready;
}

VL_INLINE_OPT void VMixedDivider::_sequent__TOP__2(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_sequent__TOP__2\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:252
    if ((0U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92))) {
	if (vlTOPp->MixedDivider__DOT__divider__DOT__cmd_fire) {
	    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2 = 0U;
	    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient 
		= (0xffffU & (((((IData)(vlTOPp->cmd_payload_numerator) 
				 >> 0xfU) & (IData)(vlTOPp->cmd_payload_signed))
			        ? (~ (IData)(vlTOPp->cmd_payload_numerator))
			        : (IData)(vlTOPp->cmd_payload_numerator)) 
			      + (((IData)(vlTOPp->cmd_payload_numerator) 
				  >> 0xfU) & (IData)(vlTOPp->cmd_payload_signed))));
	    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context 
		= vlTOPp->MixedDivider__DOT__divider_cmd_payload_context;
	    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1 
		= (0xffffU & (((((IData)(vlTOPp->cmd_payload_denominator) 
				 >> 0xfU) & (IData)(vlTOPp->cmd_payload_signed))
			        ? (~ (IData)(vlTOPp->cmd_payload_denominator))
			        : (IData)(vlTOPp->cmd_payload_denominator)) 
			      + (((IData)(vlTOPp->cmd_payload_denominator) 
				  >> 0xfU) & (IData)(vlTOPp->cmd_payload_signed))));
	}
    } else {
	if ((1U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92))) {
	    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient 
		= (0xffffU & vlTOPp->MixedDivider__DOT__divider__DOT___zz___05Fzz_rsp_payload_quotient);
	    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2 
		= (0xffffU & ((0x10000U & vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4)
			       ? vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3
			       : vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4));
	}
    }
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
}

VL_INLINE_OPT void VMixedDivider::_combo__TOP__4(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_combo__TOP__4\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MixedDivider__DOT__divider__DOT__rsp_fire 
	= ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid) 
	   & (IData)(vlTOPp->rsp_ready));
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
}

VL_INLINE_OPT void VMixedDivider::_sequent__TOP__5(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_sequent__TOP__5\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92 
	= vlTOPp->__Vdly__MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:150
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_1 = 0U;
    if ((0U != (IData)(vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92))) {
	if ((1U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92))) {
	    vlTOPp->MixedDivider__DOT__divider__DOT___zz_1 = 1U;
	}
    }
}

VL_INLINE_OPT void VMixedDivider::_sequent__TOP__6(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_sequent__TOP__6\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz___05Fzz_rsp_payload_quotient 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient) 
	    << 1U) | (1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4 
			       >> 0x10U))));
}

VL_INLINE_OPT void VMixedDivider::_combo__TOP__8(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_combo__TOP__8\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:165
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_2 = 0U;
    if ((0U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92))) {
	if (vlTOPp->MixedDivider__DOT__divider__DOT__cmd_fire) {
	    vlTOPp->MixedDivider__DOT__divider__DOT___zz_2 = 1U;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:184
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_3 
	= (0xfU & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_4) 
		   + (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_1)));
    if (vlTOPp->MixedDivider__DOT__divider__DOT___zz_2) {
	vlTOPp->MixedDivider__DOT__divider__DOT___zz_3 = 0U;
    }
}

VL_INLINE_OPT void VMixedDivider::_sequent__TOP__9(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_sequent__TOP__9\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_6 
	= ((0xfU == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_4)) 
	   & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_1));
}

void VMixedDivider::_eval(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_eval\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__9(vlSymsp);
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
