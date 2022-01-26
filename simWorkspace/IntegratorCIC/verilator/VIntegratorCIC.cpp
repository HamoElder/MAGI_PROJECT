// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntegratorCIC.h for the primary calling header

#include "VIntegratorCIC.h"    // For This
#include "VIntegratorCIC__Syms.h"

//--------------------


void VIntegratorCIC::eval() {
    VIntegratorCIC__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VIntegratorCIC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VIntegratorCIC::eval\n"); );
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

void VIntegratorCIC::_eval_initial_loop(VIntegratorCIC__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VIntegratorCIC::_sequent__TOP__2(VIntegratorCIC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIntegratorCIC::_sequent__TOP__2\n"); );
    VIntegratorCIC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__IntegratorCIC__DOT__internal_data_vec_0,20,0);
    VL_SIG(__Vdly__IntegratorCIC__DOT__internal_data_vec_1,20,0);
    VL_SIG(__Vdly__IntegratorCIC__DOT__internal_data_vec_2,20,0);
    // Body
    __Vdly__IntegratorCIC__DOT__internal_data_vec_0 
	= vlTOPp->IntegratorCIC__DOT__internal_data_vec_0;
    __Vdly__IntegratorCIC__DOT__internal_data_vec_1 
	= vlTOPp->IntegratorCIC__DOT__internal_data_vec_1;
    __Vdly__IntegratorCIC__DOT__internal_data_vec_2 
	= vlTOPp->IntegratorCIC__DOT__internal_data_vec_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IntegratorCIC.v:37
    if (vlTOPp->reset) {
	__Vdly__IntegratorCIC__DOT__internal_data_vec_0 = 0U;
	__Vdly__IntegratorCIC__DOT__internal_data_vec_1 = 0U;
	__Vdly__IntegratorCIC__DOT__internal_data_vec_2 = 0U;
	vlTOPp->IntegratorCIC__DOT__internal_en = 0U;
    } else {
	if (vlTOPp->IntegratorCIC__DOT__when_IntegratorCIC_l22) {
	    __Vdly__IntegratorCIC__DOT__internal_data_vec_0 
		= (0x1fffffU & (vlTOPp->IntegratorCIC__DOT__internal_data_vec_0 
				+ ((0x1ff000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->IntegratorCIC__DOT__raw_data_buf) 
									 >> 0xbU)))) 
						 << 0xcU)) 
				   | (IData)(vlTOPp->IntegratorCIC__DOT__raw_data_buf))));
	}
	if (vlTOPp->IntegratorCIC__DOT__when_IntegratorCIC_l27) {
	    __Vdly__IntegratorCIC__DOT__internal_data_vec_1 
		= (0x1fffffU & (vlTOPp->IntegratorCIC__DOT__internal_data_vec_1 
				+ vlTOPp->IntegratorCIC__DOT__internal_data_vec_0));
	}
	vlTOPp->IntegratorCIC__DOT__internal_en = (0xfU 
						   & (IData)(vlTOPp->IntegratorCIC__DOT___zz_internal_en));
	if (vlTOPp->IntegratorCIC__DOT__when_IntegratorCIC_l27_1) {
	    __Vdly__IntegratorCIC__DOT__internal_data_vec_2 
		= (0x1fffffU & (vlTOPp->IntegratorCIC__DOT__internal_data_vec_2 
				+ vlTOPp->IntegratorCIC__DOT__internal_data_vec_1));
	}
    }
    vlTOPp->IntegratorCIC__DOT__internal_data_vec_0 
	= __Vdly__IntegratorCIC__DOT__internal_data_vec_0;
    vlTOPp->IntegratorCIC__DOT__internal_data_vec_1 
	= __Vdly__IntegratorCIC__DOT__internal_data_vec_1;
    vlTOPp->IntegratorCIC__DOT__internal_data_vec_2 
	= __Vdly__IntegratorCIC__DOT__internal_data_vec_2;
    vlTOPp->filtered_data_payload = vlTOPp->IntegratorCIC__DOT__internal_data_vec_2;
    vlTOPp->IntegratorCIC__DOT__when_IntegratorCIC_l22 
	= (1U & (IData)(vlTOPp->IntegratorCIC__DOT__internal_en));
    vlTOPp->IntegratorCIC__DOT__when_IntegratorCIC_l27 
	= (1U & ((IData)(vlTOPp->IntegratorCIC__DOT__internal_en) 
		 >> 1U));
    vlTOPp->IntegratorCIC__DOT__when_IntegratorCIC_l27_1 
	= (1U & ((IData)(vlTOPp->IntegratorCIC__DOT__internal_en) 
		 >> 2U));
    vlTOPp->filtered_data_valid = (1U & ((IData)(vlTOPp->IntegratorCIC__DOT__internal_en) 
					 >> 3U));
}

VL_INLINE_OPT void VIntegratorCIC::_sequent__TOP__3(VIntegratorCIC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIntegratorCIC::_sequent__TOP__3\n"); );
    VIntegratorCIC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IntegratorCIC.v:33
    vlTOPp->IntegratorCIC__DOT__raw_data_buf = vlTOPp->raw_data_payload;
}

VL_INLINE_OPT void VIntegratorCIC::_combo__TOP__5(VIntegratorCIC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIntegratorCIC::_combo__TOP__5\n"); );
    VIntegratorCIC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IntegratorCIC__DOT___zz_internal_en = (
						   ((IData)(vlTOPp->IntegratorCIC__DOT__internal_en) 
						    << 1U) 
						   | (IData)(vlTOPp->raw_data_valid));
}

void VIntegratorCIC::_eval(VIntegratorCIC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIntegratorCIC::_eval\n"); );
    VIntegratorCIC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData VIntegratorCIC::_change_request(VIntegratorCIC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIntegratorCIC::_change_request\n"); );
    VIntegratorCIC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VIntegratorCIC::_change_request_1(VIntegratorCIC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIntegratorCIC::_change_request_1\n"); );
    VIntegratorCIC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
