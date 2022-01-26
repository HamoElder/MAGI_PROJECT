// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCICFilter.h for the primary calling header

#include "VCICFilter.h"        // For This
#include "VCICFilter__Syms.h"

//--------------------


void VCICFilter::eval() {
    VCICFilter__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VCICFilter::eval\n"); );
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

void VCICFilter::_eval_initial_loop(VCICFilter__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VCICFilter::_sequent__TOP__2(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICFilter::_sequent__TOP__2\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_0,16,0);
    VL_SIG(__Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_1,16,0);
    VL_SIG(__Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_2,16,0);
    // Body
    vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_0 
	= vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_0;
    vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_1 
	= vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_1;
    vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_2 
	= vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2;
    vlTOPp->__Vdly__CICFilter__DOT__decimator_1__DOT__cnt 
	= vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt;
    __Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_0 
	= vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0;
    __Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_1 
	= vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1;
    __Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_2 
	= vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICFilter.v:80
    if (vlTOPp->reset) {
	vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_0 = 0U;
	vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_1 = 0U;
	vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_2 = 0U;
	__Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_0 = 0U;
	__Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_1 = 0U;
	__Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_2 = 0U;
	vlTOPp->CICFilter__DOT__combor__DOT__result_data_payload_1 = 0U;
	vlTOPp->CICFilter__DOT__combor__DOT__result_data_valid_1 = 0U;
    } else {
	if (vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1) {
	    vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_0 
		= vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0;
	    __Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_0 
		= (0x1ffffU & vlTOPp->CICFilter__DOT__decimator_1__DOT__out_data);
	}
	if (vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1) {
	    vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_1 
		= vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1;
	    __Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_1 
		= vlTOPp->CICFilter__DOT__combor__DOT__internal_data_vec_0;
	}
	if (vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1) {
	    vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_2 
		= vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2;
	    __Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_2 
		= vlTOPp->CICFilter__DOT__combor__DOT__internal_data_vec_1;
	}
	if (vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1) {
	    vlTOPp->CICFilter__DOT__combor__DOT__result_data_valid_1 = 1U;
	    vlTOPp->CICFilter__DOT__combor__DOT__result_data_payload_1 
		= vlTOPp->CICFilter__DOT__combor__DOT__internal_data_vec_2;
	} else {
	    vlTOPp->CICFilter__DOT__combor__DOT__result_data_valid_1 = 0U;
	}
    }
    vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0 
	= __Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_0;
    vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1 
	= __Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_1;
    vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2 
	= __Vdly__CICFilter__DOT__combor__DOT__pipe_data_vec_2;
    vlTOPp->filtered_data_payload = vlTOPp->CICFilter__DOT__combor__DOT__result_data_payload_1;
    vlTOPp->filtered_data_valid = vlTOPp->CICFilter__DOT__combor__DOT__result_data_valid_1;
    vlTOPp->CICFilter__DOT__combor__DOT__internal_data_vec_0 
	= (0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0 
		       - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_0));
    vlTOPp->CICFilter__DOT__combor__DOT__internal_data_vec_1 
	= (0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1 
		       - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_1));
    vlTOPp->CICFilter__DOT__combor__DOT__internal_data_vec_2 
	= (0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2 
		       - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_2));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICFilter.v:133
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__CICFilter__DOT__decimator_1__DOT__cnt = 0U;
	vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1 = 0U;
    } else {
	if ((8U & (IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en))) {
	    vlTOPp->__Vdly__CICFilter__DOT__decimator_1__DOT__cnt 
		= ((4U == (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt))
		    ? 0U : (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT___zz_cnt));
	}
	vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1 
	    = (((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
		>> 3U) & (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__when_Decimator_l22));
    }
}

VL_INLINE_OPT void VCICFilter::_sequent__TOP__3(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICFilter::_sequent__TOP__3\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICFilter.v:153
    if ((8U & (IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en))) {
	if ((4U == (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt))) {
	    vlTOPp->CICFilter__DOT__decimator_1__DOT__out_data 
		= ((0x1e0000U & (VL_NEGATE_I((IData)(
						     (1U 
						      & (vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2 
							 >> 0x10U)))) 
				 << 0x11U)) | vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2);
	}
    }
}

VL_INLINE_OPT void VCICFilter::_sequent__TOP__5(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICFilter::_sequent__TOP__5\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt = vlTOPp->__Vdly__CICFilter__DOT__decimator_1__DOT__cnt;
    vlTOPp->CICFilter__DOT__decimator_1__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt)));
    vlTOPp->CICFilter__DOT__decimator_1__DOT__when_Decimator_l22 
	= (4U == (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICFilter.v:194
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_0 = 0U;
	vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_1 = 0U;
	vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_2 = 0U;
	vlTOPp->CICFilter__DOT__integrator__DOT__internal_en = 0U;
    } else {
	if (vlTOPp->CICFilter__DOT__integrator__DOT__when_CICIntegrator_l22) {
	    vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_0 
		= (0x1ffffU & (vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_0 
			       + ((0x10000U & ((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__raw_data_buf) 
					       << 1U)) 
				  | (IData)(vlTOPp->CICFilter__DOT__integrator__DOT__raw_data_buf))));
	}
	if (vlTOPp->CICFilter__DOT__integrator__DOT__when_CICIntegrator_l27) {
	    vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_1 
		= (0x1ffffU & (vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_1 
			       + vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_0));
	}
	vlTOPp->CICFilter__DOT__integrator__DOT__internal_en 
	    = (0xfU & (IData)(vlTOPp->CICFilter__DOT__integrator__DOT___zz_internal_en));
	if (vlTOPp->CICFilter__DOT__integrator__DOT__when_CICIntegrator_l27_1) {
	    vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_2 
		= (0x1ffffU & (vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2 
			       + vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_1));
	}
    }
    vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_0 
	= vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_0;
    vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_1 
	= vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_1;
    vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2 
	= vlTOPp->__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_2;
    vlTOPp->CICFilter__DOT__integrator__DOT__when_CICIntegrator_l22 
	= (1U & (IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en));
    vlTOPp->CICFilter__DOT__integrator__DOT__when_CICIntegrator_l27 
	= (1U & ((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
		 >> 1U));
    vlTOPp->CICFilter__DOT__integrator__DOT__when_CICIntegrator_l27_1 
	= (1U & ((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
		 >> 2U));
}

VL_INLINE_OPT void VCICFilter::_sequent__TOP__7(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICFilter::_sequent__TOP__7\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICFilter.v:190
    vlTOPp->CICFilter__DOT__integrator__DOT__raw_data_buf 
	= vlTOPp->raw_data_payload;
}

VL_INLINE_OPT void VCICFilter::_combo__TOP__8(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICFilter::_combo__TOP__8\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CICFilter__DOT__integrator__DOT___zz_internal_en 
	= (((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
	    << 1U) | (IData)(vlTOPp->raw_data_valid));
}

void VCICFilter::_eval(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICFilter::_eval\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCICFilter::_change_request(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICFilter::_change_request\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCICFilter::_change_request_1(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICFilter::_change_request_1\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
