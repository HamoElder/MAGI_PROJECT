// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCordicRotator.h for the primary calling header

#include "VCordicRotator.h"    // For This
#include "VCordicRotator__Syms.h"

//--------------------


void VCordicRotator::eval() {
    VCordicRotator__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VCordicRotator::eval\n"); );
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

void VCordicRotator::_eval_initial_loop(VCordicRotator__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VCordicRotator::_sequent__TOP__1(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_sequent__TOP__1\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__CordicRotator__DOT___zz_1__v0,3,0);
    VL_SIG8(__Vdlyvset__CordicRotator__DOT___zz_1__v0,0,0);
    //char	__VpadToAlign6[2];
    VL_SIG(__Vdlyvval__CordicRotator__DOT___zz_1__v0,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_1,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_2,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_3,31,0);
    // Body
    __Vdlyvset__CordicRotator__DOT___zz_1__v0 = 0U;
    __Vdly__CordicRotator__DOT___zz_result_payload_x_3 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_3;
    __Vdly__CordicRotator__DOT___zz_result_payload_x_1 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_1;
    __Vdly__CordicRotator__DOT___zz_result_payload_x_2 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:89
    if (vlTOPp->w_en) {
	__Vdlyvval__CordicRotator__DOT___zz_1__v0 = vlTOPp->w_data;
	__Vdlyvset__CordicRotator__DOT___zz_1__v0 = 1U;
	__Vdlyvdim0__CordicRotator__DOT___zz_1__v0 
	    = (0xfU & (IData)(vlTOPp->w_addr));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:95
    vlTOPp->CordicRotator__DOT___zz___05Fzz_1_port1 
	= vlTOPp->CordicRotator__DOT___zz_1[(0xfU & (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x))];
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:213
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_regNext 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:215
    if ((1U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
	if (vlTOPp->CordicRotator__DOT__raw_data_fire) {
	    __Vdly__CordicRotator__DOT___zz_result_payload_x_1 
		= vlTOPp->raw_data_payload_x;
	    __Vdly__CordicRotator__DOT___zz_result_payload_x_2 
		= vlTOPp->raw_data_payload_y;
	    __Vdly__CordicRotator__DOT___zz_result_payload_x_3 
		= vlTOPp->raw_data_payload_z;
	}
    } else {
	if ((2U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
	    __Vdly__CordicRotator__DOT___zz_result_payload_x_1 
		= ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_9)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_3
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_2)
		    : ((2U == (IData)(vlTOPp->x_u))
		        ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_9)
			    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_2
			    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_3)
		        : vlTOPp->CordicRotator__DOT___zz_result_payload_x_1));
	    __Vdly__CordicRotator__DOT___zz_result_payload_x_2 
		= ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_9)
		    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2
		    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2_1);
	    __Vdly__CordicRotator__DOT___zz_result_payload_x_3 
		= ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_9)
		    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3
		    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3_1);
	} else {
	    if ((3U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
		vlTOPp->CordicRotator__DOT___zz_result_payload_x_4 
		    = vlTOPp->CordicRotator__DOT___zz_result_payload_x_1;
		vlTOPp->CordicRotator__DOT___zz_result_payload_y 
		    = vlTOPp->CordicRotator__DOT___zz_result_payload_x_2;
		vlTOPp->CordicRotator__DOT___zz_result_payload_z 
		    = vlTOPp->CordicRotator__DOT___zz_result_payload_x_3;
	    }
	}
    }
    // ALWAYSPOST at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:91
    if (__Vdlyvset__CordicRotator__DOT___zz_1__v0) {
	vlTOPp->CordicRotator__DOT___zz_1[__Vdlyvdim0__CordicRotator__DOT___zz_1__v0] 
	    = __Vdlyvval__CordicRotator__DOT___zz_1__v0;
    }
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
	= __Vdly__CordicRotator__DOT___zz_result_payload_x_3;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_1 
	= __Vdly__CordicRotator__DOT___zz_result_payload_x_1;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
	= __Vdly__CordicRotator__DOT___zz_result_payload_x_2;
    vlTOPp->result_payload_x = vlTOPp->CordicRotator__DOT___zz_result_payload_x_4;
    vlTOPp->result_payload_y = vlTOPp->CordicRotator__DOT___zz_result_payload_y;
    vlTOPp->result_payload_z = vlTOPp->CordicRotator__DOT___zz_result_payload_z;
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
	   - vlTOPp->CordicRotator__DOT___zz___05Fzz_1_port1);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
	   + vlTOPp->CordicRotator__DOT___zz___05Fzz_1_port1);
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_5 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->CordicRotator__DOT___zz_result_payload_x_1, (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_regNext));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_6 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->CordicRotator__DOT___zz_result_payload_x_2, (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_regNext));
}

VL_INLINE_OPT void VCordicRotator::_sequent__TOP__2(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_sequent__TOP__2\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_payload_x,4,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_3,1,0);
    //char	__VpadToAlign46[2];
    // Body
    __Vdly__CordicRotator__DOT___zz_result_payload_x 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x;
    __Vdly__CordicRotator__DOT___zz_3 = vlTOPp->CordicRotator__DOT___zz_3;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:178
    if (vlTOPp->reset) {
	__Vdly__CordicRotator__DOT___zz_result_payload_x = 0U;
	vlTOPp->CordicRotator__DOT___zz_result_valid = 0U;
	vlTOPp->CordicRotator__DOT___zz_raw_data_ready = 1U;
	__Vdly__CordicRotator__DOT___zz_3 = 0U;
    } else {
	if ((1U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
	    if (vlTOPp->CordicRotator__DOT__raw_data_fire) {
		__Vdly__CordicRotator__DOT___zz_result_payload_x 
		    = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x)));
		vlTOPp->CordicRotator__DOT___zz_raw_data_ready = 0U;
	    }
	} else {
	    if ((2U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
		__Vdly__CordicRotator__DOT___zz_result_payload_x 
		    = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x)));
		vlTOPp->CordicRotator__DOT___zz_raw_data_ready = 0U;
	    } else {
		if ((3U == (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
		    __Vdly__CordicRotator__DOT___zz_result_payload_x = 0U;
		    if (vlTOPp->result_valid) {
			vlTOPp->CordicRotator__DOT___zz_result_valid = 0U;
			vlTOPp->CordicRotator__DOT___zz_raw_data_ready = 1U;
		    } else {
			vlTOPp->CordicRotator__DOT___zz_result_valid = 1U;
		    }
		}
	    }
	}
	__Vdly__CordicRotator__DOT___zz_3 = vlTOPp->CordicRotator__DOT___zz_4;
    }
    vlTOPp->CordicRotator__DOT___zz_result_payload_x 
	= __Vdly__CordicRotator__DOT___zz_result_payload_x;
    vlTOPp->CordicRotator__DOT___zz_3 = __Vdly__CordicRotator__DOT___zz_3;
    vlTOPp->result_valid = vlTOPp->CordicRotator__DOT___zz_result_valid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:127
    vlTOPp->CordicRotator__DOT___zz_2 = 0U;
    if ((1U != (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
	if ((2U != (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
	    if ((3U != (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
		vlTOPp->CordicRotator__DOT___zz_2 = 1U;
	    }
	}
    }
    vlTOPp->raw_data_ready = vlTOPp->CordicRotator__DOT___zz_raw_data_ready;
}

VL_INLINE_OPT void VCordicRotator::_combo__TOP__5(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_combo__TOP__5\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_9 
	= (1U & ((IData)(vlTOPp->rotate_mode) ? (~ 
						 (vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
						  >> 0x1fU))
		  : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
		     >> 0x1fU)));
    vlTOPp->CordicRotator__DOT__raw_data_fire = ((IData)(vlTOPp->raw_data_valid) 
						 & (IData)(vlTOPp->raw_data_ready));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:147
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->CordicRotator__DOT___zz_2) 
			     << 5U) | (((IData)(vlTOPp->result_valid) 
					<< 4U) | ((
						   ((IData)(vlTOPp->iter_limit) 
						    <= (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x)) 
						   << 3U) 
						  | (((IData)(vlTOPp->CordicRotator__DOT__raw_data_fire) 
						      << 2U) 
						     | (IData)(vlTOPp->CordicRotator__DOT___zz_3)))));
    vlTOPp->CordicRotator__DOT___zz_4 = vlTOPp->__Vtable1_CordicRotator__DOT___zz_4
	[vlTOPp->__Vtableidx1];
}

VL_INLINE_OPT void VCordicRotator::_sequent__TOP__6(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_sequent__TOP__6\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_5);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_5);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_2 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_1 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_6);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_3 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_1 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_6);
}

void VCordicRotator::_eval(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_eval\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCordicRotator::_change_request(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_change_request\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCordicRotator::_change_request_1(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_change_request_1\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
