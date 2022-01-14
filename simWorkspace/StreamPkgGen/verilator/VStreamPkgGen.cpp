// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamPkgGen.h for the primary calling header

#include "VStreamPkgGen.h"     // For This
#include "VStreamPkgGen__Syms.h"

//--------------------


void VStreamPkgGen::eval() {
    VStreamPkgGen__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VStreamPkgGen::eval\n"); );
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

void VStreamPkgGen::_eval_initial_loop(VStreamPkgGen__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VStreamPkgGen::_sequent__TOP__1(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VStreamPkgGen::_sequent__TOP__1\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__StreamPkgGen__DOT__strb_buf,3,0);
    //char	__VpadToAlign5[3];
    VL_SIG(__Vdly__StreamPkgGen__DOT__split_core__DOT__data_buf,31,0);
    // Body
    __Vdly__StreamPkgGen__DOT__split_core__DOT__data_buf 
	= vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf;
    __Vdly__StreamPkgGen__DOT__strb_buf = vlTOPp->StreamPkgGen__DOT__strb_buf;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/StreamPkgGen.v:114
    if (vlTOPp->StreamPkgGen__DOT__split_core__DOT__raw_data_fire) {
	__Vdly__StreamPkgGen__DOT__split_core__DOT__data_buf 
	    = vlTOPp->raw_data_stream_payload_fragment_data;
    } else {
	if (vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire) {
	    __Vdly__StreamPkgGen__DOT__split_core__DOT__data_buf 
		= (vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf 
		   >> 8U);
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/StreamPkgGen.v:67
    if (vlTOPp->StreamPkgGen__DOT__raw_data_stream_fire) {
	__Vdly__StreamPkgGen__DOT__strb_buf = vlTOPp->raw_data_stream_payload_fragment_strb;
    } else {
	if (vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire) {
	    __Vdly__StreamPkgGen__DOT__strb_buf = (0xfU 
						   & ((IData)(vlTOPp->StreamPkgGen__DOT__strb_buf) 
						      >> 1U));
	}
    }
    vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf 
	= __Vdly__StreamPkgGen__DOT__split_core__DOT__data_buf;
    vlTOPp->StreamPkgGen__DOT__strb_buf = __Vdly__StreamPkgGen__DOT__strb_buf;
    vlTOPp->pkg_data_payload_fragment = (0xffU & vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf);
}

VL_INLINE_OPT void VStreamPkgGen::_sequent__TOP__2(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VStreamPkgGen::_sequent__TOP__2\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__StreamPkgGen__DOT__split_core__DOT__cnt,2,0);
    //char	__VpadToAlign33[1];
    VL_SIG16(__Vdly__StreamPkgGen__DOT__pkg_slices_cnt,11,0);
    // Body
    __Vdly__StreamPkgGen__DOT__pkg_slices_cnt = vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt;
    __Vdly__StreamPkgGen__DOT__split_core__DOT__cnt 
	= vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/StreamPkgGen.v:55
    if (vlTOPp->reset) {
	__Vdly__StreamPkgGen__DOT__pkg_slices_cnt = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->StreamPkgGen__DOT__raw_data_stream_fire)))) {
	    if (vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire) {
		__Vdly__StreamPkgGen__DOT__pkg_slices_cnt 
		    = (((IData)(vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt) 
			== (0xfffU & ((IData)(vlTOPp->slices_limit) 
				      - (IData)(1U))))
		        ? 0U : (IData)(vlTOPp->StreamPkgGen__DOT___zz_pkg_slices_cnt_1));
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/StreamPkgGen.v:100
    if (vlTOPp->reset) {
	__Vdly__StreamPkgGen__DOT__split_core__DOT__cnt = 0U;
    } else {
	if (vlTOPp->StreamPkgGen__DOT__split_core__DOT__raw_data_fire) {
	    __Vdly__StreamPkgGen__DOT__split_core__DOT__cnt = 4U;
	} else {
	    if (vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire) {
		__Vdly__StreamPkgGen__DOT__split_core__DOT__cnt 
		    = (7U & ((IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt) 
			     - (IData)(1U)));
	    }
	}
    }
    vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt = __Vdly__StreamPkgGen__DOT__pkg_slices_cnt;
    vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt 
	= __Vdly__StreamPkgGen__DOT__split_core__DOT__cnt;
    vlTOPp->StreamPkgGen__DOT___zz_pkg_slices_cnt_1 
	= (0xfffU & ((IData)(1U) + (IData)(vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt)));
    vlTOPp->slices_cnt = vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt;
    vlTOPp->pkg_data_valid = ((0U != (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt)) 
			      & (IData)(vlTOPp->StreamPkgGen__DOT__strb_buf));
    vlTOPp->raw_data_stream_ready = (0U == (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt));
}

VL_INLINE_OPT void VStreamPkgGen::_combo__TOP__4(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VStreamPkgGen::_combo__TOP__4\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->pkg_data_payload_last = ((IData)(vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt) 
				     == (0xfffU & ((IData)(vlTOPp->slices_limit) 
						   - (IData)(1U))));
    vlTOPp->StreamPkgGen__DOT__split_core__DOT__raw_data_fire 
	= ((IData)(vlTOPp->raw_data_stream_valid) & 
	   (0U == (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt)));
    vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire 
	= ((0U != (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt)) 
	   & (IData)(vlTOPp->pkg_data_ready));
    vlTOPp->StreamPkgGen__DOT__raw_data_stream_fire 
	= ((IData)(vlTOPp->raw_data_stream_valid) & (IData)(vlTOPp->raw_data_stream_ready));
}

void VStreamPkgGen::_eval(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VStreamPkgGen::_eval\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VStreamPkgGen::_change_request(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VStreamPkgGen::_change_request\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VStreamPkgGen::_change_request_1(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VStreamPkgGen::_change_request_1\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
