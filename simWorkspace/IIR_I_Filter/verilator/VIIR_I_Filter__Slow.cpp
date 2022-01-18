// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIIR_I_Filter.h for the primary calling header

#include "VIIR_I_Filter.h"     // For This
#include "VIIR_I_Filter__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VIIR_I_Filter) {
    VIIR_I_Filter__Syms* __restrict vlSymsp = __VlSymsp = new VIIR_I_Filter__Syms(this, name());
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VIIR_I_Filter::__Vconfigure(VIIR_I_Filter__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VIIR_I_Filter::~VIIR_I_Filter() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VIIR_I_Filter::_settle__TOP__7(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_settle__TOP__7\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10_next_adder_data 
	= (0x7ffffU & (VL_MULS_III(19,19,19, (0x7ffffU 
					      & VL_EXTENDS_II(19,16, (IData)(vlTOPp->raw_data_payload_0))), 
				   (0x7ffffU & VL_EXTENDS_II(19,3, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_0)))) 
		       + vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10__DOT__previous_adder_data));
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

void VIIR_I_Filter::_eval_initial(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_eval_initial\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIIR_I_Filter::final() {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::final\n"); );
    // Variables
    VIIR_I_Filter__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIIR_I_Filter::_eval_settle(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_eval_settle\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__7(vlSymsp);
}

void VIIR_I_Filter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_ctor_var_reset\n"); );
    // Body
    clc = VL_RAND_RESET_I(1);
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_0 = VL_RAND_RESET_I(16);
    filtered_data_valid = VL_RAND_RESET_I(1);
    filtered_data_payload_0 = VL_RAND_RESET_I(21);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    IIR_I_Filter__DOT___zz_raw_data_payload_0 = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10_next_adder_data = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_x__DOT__coff_mem_0 = VL_RAND_RESET_I(3);
    IIR_I_Filter__DOT__fir_x__DOT__coff_mem_1 = VL_RAND_RESET_I(3);
    IIR_I_Filter__DOT__fir_x__DOT__transposeCore_7__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_x__DOT__transposeCore_8__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_x__DOT__transposeCore_9__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_y__DOT__coff_mem_0 = VL_RAND_RESET_I(2);
    IIR_I_Filter__DOT__fir_y__DOT__coff_mem_1 = VL_RAND_RESET_I(2);
    IIR_I_Filter__DOT__fir_y__DOT__coff_mem_2 = VL_RAND_RESET_I(2);
    IIR_I_Filter__DOT__fir_y__DOT__transposeCore_7__DOT__previous_adder_data = VL_RAND_RESET_I(21);
    IIR_I_Filter__DOT__fir_y__DOT__transposeCore_8__DOT__previous_adder_data = VL_RAND_RESET_I(21);
    IIR_I_Filter__DOT__fir_y__DOT__transposeCore_9__DOT__previous_adder_data = VL_RAND_RESET_I(21);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VIIR_I_Filter::_configure_coverage(VIIR_I_Filter__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_configure_coverage\n"); );
}
