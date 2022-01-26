// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCICComb.h for the primary calling header

#include "VCICComb.h"          // For This
#include "VCICComb__Syms.h"

//--------------------


void VCICComb::eval() {
    VCICComb__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VCICComb::eval\n"); );
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

void VCICComb::_eval_initial_loop(VCICComb__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VCICComb::_sequent__TOP__1(VCICComb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICComb::_sequent__TOP__1\n"); );
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__CICComb__DOT__pipe_data_vec_0,16,0);
    VL_SIG(__Vdly__CICComb__DOT__pipe_data_vec_1,16,0);
    VL_SIG(__Vdly__CICComb__DOT__pipe_data_vec_2,16,0);
    // Body
    __Vdly__CICComb__DOT__pipe_data_vec_0 = vlTOPp->CICComb__DOT__pipe_data_vec_0;
    __Vdly__CICComb__DOT__pipe_data_vec_1 = vlTOPp->CICComb__DOT__pipe_data_vec_1;
    __Vdly__CICComb__DOT__pipe_data_vec_2 = vlTOPp->CICComb__DOT__pipe_data_vec_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICComb.v:32
    if (vlTOPp->reset) {
	vlTOPp->CICComb__DOT__delay_data_vec_0 = 0U;
	vlTOPp->CICComb__DOT__delay_data_vec_1 = 0U;
	vlTOPp->CICComb__DOT__delay_data_vec_2 = 0U;
	__Vdly__CICComb__DOT__pipe_data_vec_0 = 0U;
	__Vdly__CICComb__DOT__pipe_data_vec_1 = 0U;
	__Vdly__CICComb__DOT__pipe_data_vec_2 = 0U;
	vlTOPp->CICComb__DOT__result_data_payload_1 = 0U;
	vlTOPp->CICComb__DOT__result_data_valid_1 = 0U;
    } else {
	if (vlTOPp->raw_data_valid) {
	    vlTOPp->CICComb__DOT__delay_data_vec_0 
		= vlTOPp->CICComb__DOT__pipe_data_vec_0;
	    __Vdly__CICComb__DOT__pipe_data_vec_0 = 
		(0x1ffffU & vlTOPp->raw_data_payload);
	}
	if (vlTOPp->raw_data_valid) {
	    vlTOPp->CICComb__DOT__delay_data_vec_1 
		= vlTOPp->CICComb__DOT__pipe_data_vec_1;
	    __Vdly__CICComb__DOT__pipe_data_vec_1 = vlTOPp->CICComb__DOT__internal_data_vec_0;
	}
	if (vlTOPp->raw_data_valid) {
	    vlTOPp->CICComb__DOT__delay_data_vec_2 
		= vlTOPp->CICComb__DOT__pipe_data_vec_2;
	    __Vdly__CICComb__DOT__pipe_data_vec_2 = vlTOPp->CICComb__DOT__internal_data_vec_1;
	}
	if (vlTOPp->raw_data_valid) {
	    vlTOPp->CICComb__DOT__result_data_valid_1 = 1U;
	    vlTOPp->CICComb__DOT__result_data_payload_1 
		= vlTOPp->CICComb__DOT__internal_data_vec_2;
	} else {
	    vlTOPp->CICComb__DOT__result_data_valid_1 = 0U;
	}
    }
    vlTOPp->CICComb__DOT__pipe_data_vec_0 = __Vdly__CICComb__DOT__pipe_data_vec_0;
    vlTOPp->CICComb__DOT__pipe_data_vec_1 = __Vdly__CICComb__DOT__pipe_data_vec_1;
    vlTOPp->CICComb__DOT__pipe_data_vec_2 = __Vdly__CICComb__DOT__pipe_data_vec_2;
    vlTOPp->result_data_payload = vlTOPp->CICComb__DOT__result_data_payload_1;
    vlTOPp->result_data_valid = vlTOPp->CICComb__DOT__result_data_valid_1;
    vlTOPp->CICComb__DOT__internal_data_vec_0 = (0x1ffffU 
						 & (vlTOPp->CICComb__DOT__pipe_data_vec_0 
						    - vlTOPp->CICComb__DOT__delay_data_vec_0));
    vlTOPp->CICComb__DOT__internal_data_vec_1 = (0x1ffffU 
						 & (vlTOPp->CICComb__DOT__pipe_data_vec_1 
						    - vlTOPp->CICComb__DOT__delay_data_vec_1));
    vlTOPp->CICComb__DOT__internal_data_vec_2 = (0x1ffffU 
						 & (vlTOPp->CICComb__DOT__pipe_data_vec_2 
						    - vlTOPp->CICComb__DOT__delay_data_vec_2));
}

void VCICComb::_eval(VCICComb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICComb::_eval\n"); );
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCICComb::_change_request(VCICComb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICComb::_change_request\n"); );
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCICComb::_change_request_1(VCICComb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICComb::_change_request_1\n"); );
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
