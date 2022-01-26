// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCICIntegrator.h for the primary calling header

#include "VCICIntegrator.h"    // For This
#include "VCICIntegrator__Syms.h"

//--------------------


void VCICIntegrator::eval() {
    VCICIntegrator__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VCICIntegrator::eval\n"); );
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

void VCICIntegrator::_eval_initial_loop(VCICIntegrator__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VCICIntegrator::_sequent__TOP__2(VCICIntegrator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICIntegrator::_sequent__TOP__2\n"); );
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__CICIntegrator__DOT__internal_data_vec_0,20,0);
    VL_SIG(__Vdly__CICIntegrator__DOT__internal_data_vec_1,20,0);
    VL_SIG(__Vdly__CICIntegrator__DOT__internal_data_vec_2,20,0);
    // Body
    __Vdly__CICIntegrator__DOT__internal_data_vec_0 
	= vlTOPp->CICIntegrator__DOT__internal_data_vec_0;
    __Vdly__CICIntegrator__DOT__internal_data_vec_1 
	= vlTOPp->CICIntegrator__DOT__internal_data_vec_1;
    __Vdly__CICIntegrator__DOT__internal_data_vec_2 
	= vlTOPp->CICIntegrator__DOT__internal_data_vec_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICIntegrator.v:37
    if (vlTOPp->reset) {
	__Vdly__CICIntegrator__DOT__internal_data_vec_0 = 0U;
	__Vdly__CICIntegrator__DOT__internal_data_vec_1 = 0U;
	__Vdly__CICIntegrator__DOT__internal_data_vec_2 = 0U;
	vlTOPp->CICIntegrator__DOT__internal_en = 0U;
    } else {
	if (vlTOPp->CICIntegrator__DOT__when_CICIntegrator_l22) {
	    __Vdly__CICIntegrator__DOT__internal_data_vec_0 
		= (0x1fffffU & (vlTOPp->CICIntegrator__DOT__internal_data_vec_0 
				+ ((0x1ff000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->CICIntegrator__DOT__raw_data_buf) 
									 >> 0xbU)))) 
						 << 0xcU)) 
				   | (IData)(vlTOPp->CICIntegrator__DOT__raw_data_buf))));
	}
	if (vlTOPp->CICIntegrator__DOT__when_CICIntegrator_l27) {
	    __Vdly__CICIntegrator__DOT__internal_data_vec_1 
		= (0x1fffffU & (vlTOPp->CICIntegrator__DOT__internal_data_vec_1 
				+ vlTOPp->CICIntegrator__DOT__internal_data_vec_0));
	}
	vlTOPp->CICIntegrator__DOT__internal_en = (0xfU 
						   & (IData)(vlTOPp->CICIntegrator__DOT___zz_internal_en));
	if (vlTOPp->CICIntegrator__DOT__when_CICIntegrator_l27_1) {
	    __Vdly__CICIntegrator__DOT__internal_data_vec_2 
		= (0x1fffffU & (vlTOPp->CICIntegrator__DOT__internal_data_vec_2 
				+ vlTOPp->CICIntegrator__DOT__internal_data_vec_1));
	}
    }
    vlTOPp->CICIntegrator__DOT__internal_data_vec_0 
	= __Vdly__CICIntegrator__DOT__internal_data_vec_0;
    vlTOPp->CICIntegrator__DOT__internal_data_vec_1 
	= __Vdly__CICIntegrator__DOT__internal_data_vec_1;
    vlTOPp->CICIntegrator__DOT__internal_data_vec_2 
	= __Vdly__CICIntegrator__DOT__internal_data_vec_2;
    vlTOPp->filtered_data_payload = vlTOPp->CICIntegrator__DOT__internal_data_vec_2;
    vlTOPp->CICIntegrator__DOT__when_CICIntegrator_l22 
	= (1U & (IData)(vlTOPp->CICIntegrator__DOT__internal_en));
    vlTOPp->CICIntegrator__DOT__when_CICIntegrator_l27 
	= (1U & ((IData)(vlTOPp->CICIntegrator__DOT__internal_en) 
		 >> 1U));
    vlTOPp->CICIntegrator__DOT__when_CICIntegrator_l27_1 
	= (1U & ((IData)(vlTOPp->CICIntegrator__DOT__internal_en) 
		 >> 2U));
    vlTOPp->filtered_data_valid = (1U & ((IData)(vlTOPp->CICIntegrator__DOT__internal_en) 
					 >> 3U));
}

VL_INLINE_OPT void VCICIntegrator::_sequent__TOP__3(VCICIntegrator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICIntegrator::_sequent__TOP__3\n"); );
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICIntegrator.v:33
    vlTOPp->CICIntegrator__DOT__raw_data_buf = vlTOPp->raw_data_payload;
}

VL_INLINE_OPT void VCICIntegrator::_combo__TOP__5(VCICIntegrator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICIntegrator::_combo__TOP__5\n"); );
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CICIntegrator__DOT___zz_internal_en = (
						   ((IData)(vlTOPp->CICIntegrator__DOT__internal_en) 
						    << 1U) 
						   | (IData)(vlTOPp->raw_data_valid));
}

void VCICIntegrator::_eval(VCICIntegrator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICIntegrator::_eval\n"); );
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCICIntegrator::_change_request(VCICIntegrator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICIntegrator::_change_request\n"); );
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCICIntegrator::_change_request_1(VCICIntegrator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICIntegrator::_change_request_1\n"); );
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
