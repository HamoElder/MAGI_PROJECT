// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIIR_I.h for the primary calling header

#include "VIIR_I.h"            // For This
#include "VIIR_I__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VIIR_I) {
    VIIR_I__Syms* __restrict vlSymsp = __VlSymsp = new VIIR_I__Syms(this, name());
    VIIR_I* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VIIR_I::__Vconfigure(VIIR_I__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VIIR_I::~VIIR_I() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VIIR_I::_settle__TOP__7(VIIR_I__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I::_settle__TOP__7\n"); );
    VIIR_I* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IIR_I__DOT__fir_x__DOT__transposeCore_10_next_adder_data 
	= (0x7ffffU & (VL_MULS_III(19,19,19, (0x7ffffU 
					      & VL_EXTENDS_II(19,16, (IData)(vlTOPp->raw_data_payload_0))), 
				   (0x7ffffU & VL_EXTENDS_II(19,3, (IData)(vlTOPp->IIR_I__DOT__fir_x__DOT__coff_mem_0)))) 
		       + vlTOPp->IIR_I__DOT__fir_x__DOT__transposeCore_10__DOT__previous_adder_data));
    vlTOPp->filtered_data_payload_0 = (((0xfff80000U 
					 & (VL_NEGATE_I((IData)(
								(1U 
								 & (vlTOPp->IIR_I__DOT__fir_x__DOT__transposeCore_10_next_adder_data 
								    >> 0x12U)))) 
					    << 0x13U)) 
					| vlTOPp->IIR_I__DOT__fir_x__DOT__transposeCore_10_next_adder_data) 
				       + (VL_MULS_III(32,32,32, 
						      VL_EXTENDS_II(32,19, vlTOPp->IIR_I__DOT___zz_raw_data_payload_0), 
						      VL_EXTENDS_II(32,13, (IData)(vlTOPp->IIR_I__DOT__fir_y__DOT__coff_mem_2))) 
					  + vlTOPp->IIR_I__DOT__fir_y__DOT__transposeCore_9__DOT__previous_adder_data));
}

void VIIR_I::_eval_initial(VIIR_I__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I::_eval_initial\n"); );
    VIIR_I* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIIR_I::final() {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I::final\n"); );
    // Variables
    VIIR_I__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIIR_I* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIIR_I::_eval_settle(VIIR_I__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I::_eval_settle\n"); );
    VIIR_I* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__7(vlSymsp);
}

void VIIR_I::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I::_ctor_var_reset\n"); );
    // Body
    clc = VL_RAND_RESET_I(1);
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_0 = VL_RAND_RESET_I(16);
    filtered_data_valid = VL_RAND_RESET_I(1);
    filtered_data_payload_0 = VL_RAND_RESET_I(32);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    IIR_I__DOT___zz_raw_data_payload_0 = VL_RAND_RESET_I(19);
    IIR_I__DOT__fir_x__DOT__transposeCore_10_next_adder_data = VL_RAND_RESET_I(19);
    IIR_I__DOT__fir_x__DOT__coff_mem_0 = VL_RAND_RESET_I(3);
    IIR_I__DOT__fir_x__DOT__coff_mem_1 = VL_RAND_RESET_I(3);
    IIR_I__DOT__fir_x__DOT__transposeCore_7__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    IIR_I__DOT__fir_x__DOT__transposeCore_8__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    IIR_I__DOT__fir_x__DOT__transposeCore_9__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    IIR_I__DOT__fir_x__DOT__transposeCore_10__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    IIR_I__DOT__fir_y__DOT__coff_mem_0 = VL_RAND_RESET_I(13);
    IIR_I__DOT__fir_y__DOT__coff_mem_1 = VL_RAND_RESET_I(13);
    IIR_I__DOT__fir_y__DOT__coff_mem_2 = VL_RAND_RESET_I(13);
    IIR_I__DOT__fir_y__DOT__transposeCore_7__DOT__previous_adder_data = VL_RAND_RESET_I(32);
    IIR_I__DOT__fir_y__DOT__transposeCore_8__DOT__previous_adder_data = VL_RAND_RESET_I(32);
    IIR_I__DOT__fir_y__DOT__transposeCore_9__DOT__previous_adder_data = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VIIR_I::_configure_coverage(VIIR_I__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I::_configure_coverage\n"); );
}
