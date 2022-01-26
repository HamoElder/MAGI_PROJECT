// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecimator.h for the primary calling header

#include "VDecimator.h"        // For This
#include "VDecimator__Syms.h"

//--------------------


void VDecimator::eval() {
    VDecimator__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VDecimator::eval\n"); );
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

void VDecimator::_eval_initial_loop(VDecimator__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VDecimator::_sequent__TOP__1(VDecimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VDecimator::_sequent__TOP__1\n"); );
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/Decimator.v:46
    if (vlTOPp->in_valid) {
	if ((4U == (IData)(vlTOPp->Decimator__DOT__cnt))) {
	    vlTOPp->Decimator__DOT__out_data = vlTOPp->in_payload;
	}
    }
    vlTOPp->out_payload = vlTOPp->Decimator__DOT__out_data;
}

VL_INLINE_OPT void VDecimator::_sequent__TOP__2(VDecimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VDecimator::_sequent__TOP__2\n"); );
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__Decimator__DOT__cnt,2,0);
    //char	__VpadToAlign25[3];
    // Body
    __Vdly__Decimator__DOT__cnt = vlTOPp->Decimator__DOT__cnt;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/Decimator.v:26
    if (vlTOPp->reset) {
	__Vdly__Decimator__DOT__cnt = 0U;
	vlTOPp->Decimator__DOT__out_valid_1 = 0U;
    } else {
	if (vlTOPp->in_valid) {
	    __Vdly__Decimator__DOT__cnt = ((4U == (IData)(vlTOPp->Decimator__DOT__cnt))
					    ? 0U : (IData)(vlTOPp->Decimator__DOT___zz_cnt));
	}
	vlTOPp->Decimator__DOT__out_valid_1 = ((IData)(vlTOPp->in_valid) 
					       & (IData)(vlTOPp->Decimator__DOT__when_Decimator_l22));
    }
    vlTOPp->Decimator__DOT__cnt = __Vdly__Decimator__DOT__cnt;
    vlTOPp->out_valid = vlTOPp->Decimator__DOT__out_valid_1;
    vlTOPp->Decimator__DOT___zz_cnt = (7U & ((IData)(1U) 
					     + (IData)(vlTOPp->Decimator__DOT__cnt)));
    vlTOPp->Decimator__DOT__when_Decimator_l22 = (4U 
						  == (IData)(vlTOPp->Decimator__DOT__cnt));
}

void VDecimator::_eval(VDecimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VDecimator::_eval\n"); );
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VDecimator::_change_request(VDecimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VDecimator::_change_request\n"); );
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VDecimator::_change_request_1(VDecimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VDecimator::_change_request_1\n"); );
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
