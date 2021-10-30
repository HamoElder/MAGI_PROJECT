// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIQDemixer.h for the primary calling header

#include "VIQDemixer.h"
#include "VIQDemixer__Syms.h"

//==========

VL_CTOR_IMP(VIQDemixer) {
    VIQDemixer__Syms* __restrict vlSymsp = __VlSymsp = new VIQDemixer__Syms(this, name());
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VIQDemixer::__Vconfigure(VIQDemixer__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VIQDemixer::~VIQDemixer() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VIQDemixer::_settle__TOP__2(VIQDemixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemixer::_settle__TOP__2\n"); );
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->base_iq_0_valid = vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_iq_valid_1;
    vlTOPp->base_iq_0_payload_cha_i = vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_i_data;
    vlTOPp->base_iq_0_payload_cha_q = vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_q_data;
    vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__if_iq_data)), 
                      VL_EXTENDS_II(32,16, (IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__carries_i_data)));
    vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__if_iq_data)), 
                      VL_EXTENDS_II(32,16, (IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__carries_q_data)));
    vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_2 
        = (0xffffU & ((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data))
                       ? ((IData)(1U) + (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                                         >> 0x10U))
                       : (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                          >> 0x10U)));
    vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_2 
        = (0xffffU & ((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data))
                       ? ((IData)(1U) + (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                                         >> 0x10U))
                       : (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                          >> 0x10U)));
    vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 
        = ((0x80000000U & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data)
            ? ((0x10000U & ((IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_2) 
                            << 1U)) | (IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_2))
            : (0xffffU & ((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data))
                           ? ((IData)(1U) + (0x7fffU 
                                             & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                                                >> 0x10U)))
                           : (0x7fffU & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                                         >> 0x10U)))));
    vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 
        = ((0x80000000U & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data)
            ? ((0x10000U & ((IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_2) 
                            << 1U)) | (IData)(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_2))
            : (0xffffU & ((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data))
                           ? ((IData)(1U) + (0x7fffU 
                                             & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                                                >> 0x10U)))
                           : (0x7fffU & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                                         >> 0x10U)))));
}

void VIQDemixer::_eval_initial(VIQDemixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemixer::_eval_initial\n"); );
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VIQDemixer::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemixer::final\n"); );
    // Variables
    VIQDemixer__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIQDemixer::_eval_settle(VIQDemixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemixer::_eval_settle\n"); );
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VIQDemixer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemixer::_ctor_var_reset\n"); );
    // Body
    if_iq_0_valid = VL_RAND_RESET_I(1);
    if_iq_0_payload = VL_RAND_RESET_I(16);
    carries_iq_valid = VL_RAND_RESET_I(1);
    carries_iq_payload_cha_i = VL_RAND_RESET_I(16);
    carries_iq_payload_cha_q = VL_RAND_RESET_I(16);
    base_iq_0_valid = VL_RAND_RESET_I(1);
    base_iq_0_payload_cha_i = VL_RAND_RESET_I(16);
    base_iq_0_payload_cha_q = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    IQDemixer__DOT__iQDemixerCore_1__DOT__if_iq_data = VL_RAND_RESET_I(16);
    IQDemixer__DOT__iQDemixerCore_1__DOT__carries_i_data = VL_RAND_RESET_I(16);
    IQDemixer__DOT__iQDemixerCore_1__DOT__carries_q_data = VL_RAND_RESET_I(16);
    IQDemixer__DOT__iQDemixerCore_1__DOT__base_iq_valid_1 = VL_RAND_RESET_I(1);
    IQDemixer__DOT__iQDemixerCore_1__DOT__base_i_data = VL_RAND_RESET_I(16);
    IQDemixer__DOT__iQDemixerCore_1__DOT__base_q_data = VL_RAND_RESET_I(16);
    IQDemixer__DOT__iQDemixerCore_1__DOT__iq_en = VL_RAND_RESET_I(1);
    IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data = VL_RAND_RESET_I(32);
    IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 = VL_RAND_RESET_I(17);
    IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_2 = VL_RAND_RESET_I(16);
    IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data = VL_RAND_RESET_I(32);
    IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 = VL_RAND_RESET_I(17);
    IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_2 = VL_RAND_RESET_I(16);
    __Vm_traceActivity = 0;
}
