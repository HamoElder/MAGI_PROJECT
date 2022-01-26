// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCICIntegrator.h for the primary calling header

#include "VCICIntegrator.h"    // For This
#include "VCICIntegrator__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VCICIntegrator) {
    VCICIntegrator__Syms* __restrict vlSymsp = __VlSymsp = new VCICIntegrator__Syms(this, name());
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCICIntegrator::__Vconfigure(VCICIntegrator__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCICIntegrator::~VCICIntegrator() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VCICIntegrator::_settle__TOP__4(VCICIntegrator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICIntegrator::_settle__TOP__4\n"); );
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->CICIntegrator__DOT___zz_internal_en = (
						   ((IData)(vlTOPp->CICIntegrator__DOT__internal_en) 
						    << 1U) 
						   | (IData)(vlTOPp->raw_data_valid));
}

void VCICIntegrator::_eval_initial(VCICIntegrator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICIntegrator::_eval_initial\n"); );
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCICIntegrator::final() {
    VL_DEBUG_IF(VL_PRINTF("    VCICIntegrator::final\n"); );
    // Variables
    VCICIntegrator__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCICIntegrator::_eval_settle(VCICIntegrator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICIntegrator::_eval_settle\n"); );
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void VCICIntegrator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VCICIntegrator::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload = VL_RAND_RESET_I(12);
    filtered_data_valid = VL_RAND_RESET_I(1);
    filtered_data_payload = VL_RAND_RESET_I(21);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    CICIntegrator__DOT___zz_internal_en = VL_RAND_RESET_I(5);
    CICIntegrator__DOT__raw_data_buf = VL_RAND_RESET_I(12);
    CICIntegrator__DOT__internal_data_vec_0 = VL_RAND_RESET_I(21);
    CICIntegrator__DOT__internal_data_vec_1 = VL_RAND_RESET_I(21);
    CICIntegrator__DOT__internal_data_vec_2 = VL_RAND_RESET_I(21);
    CICIntegrator__DOT__internal_en = VL_RAND_RESET_I(4);
    CICIntegrator__DOT__when_CICIntegrator_l22 = VL_RAND_RESET_I(1);
    CICIntegrator__DOT__when_CICIntegrator_l27 = VL_RAND_RESET_I(1);
    CICIntegrator__DOT__when_CICIntegrator_l27_1 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VCICIntegrator::_configure_coverage(VCICIntegrator__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VCICIntegrator::_configure_coverage\n"); );
}
