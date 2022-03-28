// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCICFilter.h for the primary calling header

#include "VCICFilter.h"
#include "VCICFilter__Syms.h"

//==========

VL_CTOR_IMP(VCICFilter) {
    VCICFilter__Syms* __restrict vlSymsp = __VlSymsp = new VCICFilter__Syms(this, name());
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCICFilter::__Vconfigure(VCICFilter__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCICFilter::~VCICFilter() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VCICFilter::_settle__TOP__4(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::_settle__TOP__4\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filtered_data_valid = vlTOPp->CICFilter__DOT__combor__DOT__result_data_valid_1;
    vlTOPp->filtered_data_payload = vlTOPp->CICFilter__DOT__combor__DOT__result_data_payload_1;
    vlTOPp->CICFilter__DOT__decimator_1__DOT___zz_cnt 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt)));
    vlTOPp->CICFilter__DOT__integrator__DOT___zz_internal_en 
        = (((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
            << 1U) | (IData)(vlTOPp->raw_data_valid));
}

void VCICFilter::_eval_initial(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::_eval_initial\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = (1U & (~ (IData)(vlTOPp->clk)));
    vlTOPp->__Vclklast__TOP__reset = (1U & (~ (IData)(vlTOPp->reset)));
}

void VCICFilter::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::final\n"); );
    // Variables
    VCICFilter__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCICFilter::_eval_settle(VCICFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::_eval_settle\n"); );
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void VCICFilter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCICFilter::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload = VL_RAND_RESET_I(16);
    filtered_data_valid = VL_RAND_RESET_I(1);
    filtered_data_payload = VL_RAND_RESET_I(17);
    clk = 0;
    reset = 0;
    CICFilter__DOT__integrator__DOT___zz_internal_en = VL_RAND_RESET_I(5);
    CICFilter__DOT__integrator__DOT__raw_data_buf = VL_RAND_RESET_I(16);
    CICFilter__DOT__integrator__DOT__internal_data_vec_0 = VL_RAND_RESET_I(17);
    CICFilter__DOT__integrator__DOT__internal_data_vec_1 = VL_RAND_RESET_I(17);
    CICFilter__DOT__integrator__DOT__internal_data_vec_2 = VL_RAND_RESET_I(17);
    CICFilter__DOT__integrator__DOT__internal_en = VL_RAND_RESET_I(4);
    CICFilter__DOT__decimator_1__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CICFilter__DOT__decimator_1__DOT__cnt = VL_RAND_RESET_I(3);
    CICFilter__DOT__decimator_1__DOT__out_data = VL_RAND_RESET_I(21);
    CICFilter__DOT__decimator_1__DOT__out_valid_1 = VL_RAND_RESET_I(1);
    CICFilter__DOT__combor__DOT__delay_data_vec_0 = VL_RAND_RESET_I(17);
    CICFilter__DOT__combor__DOT__delay_data_vec_1 = VL_RAND_RESET_I(17);
    CICFilter__DOT__combor__DOT__delay_data_vec_2 = VL_RAND_RESET_I(17);
    CICFilter__DOT__combor__DOT__pipe_data_vec_0 = VL_RAND_RESET_I(17);
    CICFilter__DOT__combor__DOT__pipe_data_vec_1 = VL_RAND_RESET_I(17);
    CICFilter__DOT__combor__DOT__pipe_data_vec_2 = VL_RAND_RESET_I(17);
    CICFilter__DOT__combor__DOT__result_data_payload_1 = VL_RAND_RESET_I(17);
    CICFilter__DOT__combor__DOT__result_data_valid_1 = VL_RAND_RESET_I(1);
    __Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_2 = VL_RAND_RESET_I(17);
    __Vdly__CICFilter__DOT__decimator_1__DOT__cnt = VL_RAND_RESET_I(3);
    __Vm_traceActivity = 0;
}
