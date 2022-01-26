// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntegratorCIC.h for the primary calling header

#include "VIntegratorCIC.h"    // For This
#include "VIntegratorCIC__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VIntegratorCIC) {
    VIntegratorCIC__Syms* __restrict vlSymsp = __VlSymsp = new VIntegratorCIC__Syms(this, name());
    VIntegratorCIC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VIntegratorCIC::__Vconfigure(VIntegratorCIC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VIntegratorCIC::~VIntegratorCIC() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VIntegratorCIC::_settle__TOP__4(VIntegratorCIC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIntegratorCIC::_settle__TOP__4\n"); );
    VIntegratorCIC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->IntegratorCIC__DOT___zz_internal_en = (
						   ((IData)(vlTOPp->IntegratorCIC__DOT__internal_en) 
						    << 1U) 
						   | (IData)(vlTOPp->raw_data_valid));
}

void VIntegratorCIC::_eval_initial(VIntegratorCIC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIntegratorCIC::_eval_initial\n"); );
    VIntegratorCIC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntegratorCIC::final() {
    VL_DEBUG_IF(VL_PRINTF("    VIntegratorCIC::final\n"); );
    // Variables
    VIntegratorCIC__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIntegratorCIC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntegratorCIC::_eval_settle(VIntegratorCIC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIntegratorCIC::_eval_settle\n"); );
    VIntegratorCIC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void VIntegratorCIC::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VIntegratorCIC::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload = VL_RAND_RESET_I(12);
    filtered_data_valid = VL_RAND_RESET_I(1);
    filtered_data_payload = VL_RAND_RESET_I(21);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    IntegratorCIC__DOT___zz_internal_en = VL_RAND_RESET_I(5);
    IntegratorCIC__DOT__raw_data_buf = VL_RAND_RESET_I(12);
    IntegratorCIC__DOT__internal_data_vec_0 = VL_RAND_RESET_I(21);
    IntegratorCIC__DOT__internal_data_vec_1 = VL_RAND_RESET_I(21);
    IntegratorCIC__DOT__internal_data_vec_2 = VL_RAND_RESET_I(21);
    IntegratorCIC__DOT__internal_en = VL_RAND_RESET_I(4);
    IntegratorCIC__DOT__when_IntegratorCIC_l22 = VL_RAND_RESET_I(1);
    IntegratorCIC__DOT__when_IntegratorCIC_l27 = VL_RAND_RESET_I(1);
    IntegratorCIC__DOT__when_IntegratorCIC_l27_1 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VIntegratorCIC::_configure_coverage(VIntegratorCIC__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VIntegratorCIC::_configure_coverage\n"); );
}
