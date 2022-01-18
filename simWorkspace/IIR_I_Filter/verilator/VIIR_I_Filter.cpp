// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIIR_I_Filter.h for the primary calling header

#include "VIIR_I_Filter.h"     // For This
#include "VIIR_I_Filter__Syms.h"

//--------------------


void VIIR_I_Filter::eval() {
    VIIR_I_Filter__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VIIR_I_Filter::eval\n"); );
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

void VIIR_I_Filter::_eval_initial_loop(VIIR_I_Filter__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VIIR_I_Filter::_combo__TOP__1(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_combo__TOP__1\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filtered_data_valid = vlTOPp->raw_data_valid;
}

VL_INLINE_OPT void VIIR_I_Filter::_sequent__TOP__3(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_sequent__TOP__3\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:111
    vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_2 = 1U;
}

VL_INLINE_OPT void VIIR_I_Filter::_sequent__TOP__4(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_sequent__TOP__4\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:208
    if (vlTOPp->reset) {
	vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_9__DOT__previous_adder_data = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_9__DOT__previous_adder_data = 0U;
	} else {
	    if (vlTOPp->raw_data_valid) {
		vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_9__DOT__previous_adder_data 
		    = (0x1fffffU & (VL_MULS_III(21,21,21, 
						(0x1fffffU 
						 & VL_EXTENDS_II(21,19, vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0)), 
						(0x1fffffU 
						 & VL_EXTENDS_II(21,2, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_1)))) 
				    + vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_8__DOT__previous_adder_data));
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:246
    if (vlTOPp->reset) {
	vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10__DOT__previous_adder_data = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10__DOT__previous_adder_data = 0U;
	} else {
	    if (vlTOPp->raw_data_valid) {
		vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10__DOT__previous_adder_data 
		    = (0x7ffffU & (VL_MULS_III(19,19,19, 
					       (0x7ffffU 
						& VL_EXTENDS_II(19,16, (IData)(vlTOPp->raw_data_payload_0))), 
					       (0x7ffffU 
						& VL_EXTENDS_II(19,3, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_1)))) 
				   + vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_9__DOT__previous_adder_data));
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:208
    if (vlTOPp->reset) {
	vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_8__DOT__previous_adder_data = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_8__DOT__previous_adder_data = 0U;
	} else {
	    if (vlTOPp->raw_data_valid) {
		vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_8__DOT__previous_adder_data 
		    = (0x1fffffU & (VL_MULS_III(21,21,21, 
						(0x1fffffU 
						 & VL_EXTENDS_II(21,19, vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0)), 
						(0x1fffffU 
						 & VL_EXTENDS_II(21,2, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_0)))) 
				    + vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_7__DOT__previous_adder_data));
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:246
    if (vlTOPp->reset) {
	vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_9__DOT__previous_adder_data = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_9__DOT__previous_adder_data = 0U;
	} else {
	    if (vlTOPp->raw_data_valid) {
		vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_9__DOT__previous_adder_data 
		    = (0x7ffffU & (VL_MULS_III(19,19,19, 
					       (0x7ffffU 
						& VL_EXTENDS_II(19,16, (IData)(vlTOPp->raw_data_payload_0))), 
					       (0x7ffffU 
						& VL_EXTENDS_II(19,3, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_1)))) 
				   + vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_8__DOT__previous_adder_data));
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:208
    if (vlTOPp->reset) {
	vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_7__DOT__previous_adder_data = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_7__DOT__previous_adder_data = 0U;
	} else {
	    if (vlTOPp->raw_data_valid) {
		vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_7__DOT__previous_adder_data = 0U;
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:44
    if (vlTOPp->reset) {
	vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0 = 0U;
    } else {
	vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0 
	    = (0x7ffffU & vlTOPp->filtered_data_payload_0);
	if (vlTOPp->clc) {
	    vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0 = 0U;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:246
    if (vlTOPp->reset) {
	vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_8__DOT__previous_adder_data = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_8__DOT__previous_adder_data = 0U;
	} else {
	    if (vlTOPp->raw_data_valid) {
		vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_8__DOT__previous_adder_data 
		    = (0x7ffffU & (VL_MULS_III(19,19,19, 
					       (0x7ffffU 
						& VL_EXTENDS_II(19,16, (IData)(vlTOPp->raw_data_payload_0))), 
					       (0x7ffffU 
						& VL_EXTENDS_II(19,3, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_0)))) 
				   + vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_7__DOT__previous_adder_data));
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:246
    if (vlTOPp->reset) {
	vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_7__DOT__previous_adder_data = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_7__DOT__previous_adder_data = 0U;
	} else {
	    if (vlTOPp->raw_data_valid) {
		vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_7__DOT__previous_adder_data = 0U;
	    }
	}
    }
}

VL_INLINE_OPT void VIIR_I_Filter::_sequent__TOP__5(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_sequent__TOP__5\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:110
    vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_1 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:109
    vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_0 = 3U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:181
    vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_1 = 2U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:180
    vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_0 = 3U;
}

VL_INLINE_OPT void VIIR_I_Filter::_combo__TOP__6(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_combo__TOP__6\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10_next_adder_data 
	= (0x7ffffU & (VL_MULS_III(19,19,19, (0x7ffffU 
					      & VL_EXTENDS_II(19,16, (IData)(vlTOPp->raw_data_payload_0))), 
				   (0x7ffffU & VL_EXTENDS_II(19,3, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_0)))) 
		       + vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10__DOT__previous_adder_data));
}

VL_INLINE_OPT void VIIR_I_Filter::_combo__TOP__8(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_combo__TOP__8\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filtered_data_payload_0 = (0x1fffffU & 
				       (((0x180000U 
					  & (VL_NEGATE_I((IData)(
								 (1U 
								  & (vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10_next_adder_data 
								     >> 0x12U)))) 
					     << 0x13U)) 
					 | vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10_next_adder_data) 
					+ (VL_MULS_III(21,21,21, 
						       (0x1fffffU 
							& VL_EXTENDS_II(21,19, vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0)), 
						       (0x1fffffU 
							& VL_EXTENDS_II(21,2, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_2)))) 
					   + vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_9__DOT__previous_adder_data)));
}

void VIIR_I_Filter::_eval(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_eval\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlTOPp->_combo__TOP__8(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VIIR_I_Filter::_change_request(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_change_request\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VIIR_I_Filter::_change_request_1(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_change_request_1\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
