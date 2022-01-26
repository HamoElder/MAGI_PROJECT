// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCICComb.h for the primary calling header

#include "VCICComb.h"          // For This
#include "VCICComb__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VCICComb) {
    VCICComb__Syms* __restrict vlSymsp = __VlSymsp = new VCICComb__Syms(this, name());
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCICComb::__Vconfigure(VCICComb__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCICComb::~VCICComb() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VCICComb::_settle__TOP__2(VCICComb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICComb::_settle__TOP__2\n"); );
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void VCICComb::_eval_initial(VCICComb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICComb::_eval_initial\n"); );
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCICComb::final() {
    VL_DEBUG_IF(VL_PRINTF("    VCICComb::final\n"); );
    // Variables
    VCICComb__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCICComb::_eval_settle(VCICComb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCICComb::_eval_settle\n"); );
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VCICComb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VCICComb::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload = VL_RAND_RESET_I(21);
    result_data_valid = VL_RAND_RESET_I(1);
    result_data_payload = VL_RAND_RESET_I(17);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    CICComb__DOT__internal_data_vec_0 = VL_RAND_RESET_I(17);
    CICComb__DOT__internal_data_vec_1 = VL_RAND_RESET_I(17);
    CICComb__DOT__internal_data_vec_2 = VL_RAND_RESET_I(17);
    CICComb__DOT__delay_data_vec_0 = VL_RAND_RESET_I(17);
    CICComb__DOT__delay_data_vec_1 = VL_RAND_RESET_I(17);
    CICComb__DOT__delay_data_vec_2 = VL_RAND_RESET_I(17);
    CICComb__DOT__pipe_data_vec_0 = VL_RAND_RESET_I(17);
    CICComb__DOT__pipe_data_vec_1 = VL_RAND_RESET_I(17);
    CICComb__DOT__pipe_data_vec_2 = VL_RAND_RESET_I(17);
    CICComb__DOT__result_data_payload_1 = VL_RAND_RESET_I(17);
    CICComb__DOT__result_data_valid_1 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VCICComb::_configure_coverage(VCICComb__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VCICComb::_configure_coverage\n"); );
}
