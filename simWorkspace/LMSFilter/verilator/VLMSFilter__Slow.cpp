// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLMSFilter.h for the primary calling header

#include "VLMSFilter.h"
#include "VLMSFilter__Syms.h"

//==========

VL_CTOR_IMP(VLMSFilter) {
    VLMSFilter__Syms* __restrict vlSymsp = __VlSymsp = new VLMSFilter__Syms(this, name());
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VLMSFilter::__Vconfigure(VLMSFilter__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VLMSFilter::~VLMSFilter() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VLMSFilter::_initial__TOP__6(VLMSFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_initial__TOP__6\n"); );
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*671:0*/ __Vtemp1[21];
    // Body
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f6d656dU;
    __Vtemp1[2U] = 0x5f726566U;
    __Vtemp1[3U] = 0x6576656cU;
    __Vtemp1[4U] = 0x746f706cU;
    __Vtemp1[5U] = 0x722e765fU;
    __Vtemp1[6U] = 0x696c7465U;
    __Vtemp1[7U] = 0x4c4d5346U;
    __Vtemp1[8U] = 0x625f312fU;
    __Vtemp1[9U] = 0x702f6a6fU;
    __Vtemp1[0xaU] = 0x542f746dU;
    __Vtemp1[0xbU] = 0x4f4a4543U;
    __Vtemp1[0xcU] = 0x495f5052U;
    __Vtemp1[0xdU] = 0x2f4d4147U;
    __Vtemp1[0xeU] = 0x65637473U;
    __Vtemp1[0xfU] = 0x50726f6aU;
    __Vtemp1[0x10U] = 0x49646561U;
    __Vtemp1[0x11U] = 0x6f776e2fU;
    __Vtemp1[0x12U] = 0x69737364U;
    __Vtemp1[0x13U] = 0x6d652f6dU;
    __Vtemp1[0x14U] = 0x2f686fU;
    VL_READMEM_N(false, 20, 32, 0, VL_CVT_PACK_STR_NW(21, __Vtemp1)
                 , vlTOPp->LMSFilter__DOT__ref_mem, 0
                 , ~VL_ULL(0));
}

void VLMSFilter::_settle__TOP__7(VLMSFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_settle__TOP__7\n"); );
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LMSFilter__DOT___zz_cnt = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlTOPp->LMSFilter__DOT__cnt)));
    vlTOPp->filtered_data_payload_fragment = vlTOPp->LMSFilter__DOT__sum_result;
    vlTOPp->LMSFilter__DOT__error_measured = (0xfffffU 
                                              & (vlTOPp->LMSFilter__DOT___zz_ref_mem_port0 
                                                 - vlTOPp->LMSFilter__DOT__sum_result));
    vlTOPp->filtered_data_valid = vlTOPp->LMSFilter__DOT__raw_data_fire_1_delay_3;
    vlTOPp->filtered_data_payload_last = vlTOPp->LMSFilter__DOT__raw_data_payload_last_delay_3;
    vlTOPp->raw_data_ready = vlTOPp->LMSFilter__DOT__raw_data_ready_1;
    vlTOPp->LMSFilter__DOT__when_LMSFilter_l78 = ((IData)(vlTOPp->filtered_data_valid) 
                                                  & (IData)(vlTOPp->filtered_data_payload_last));
    vlTOPp->LMSFilter__DOT__raw_data_fire = ((IData)(vlTOPp->raw_data_valid) 
                                             & (IData)(vlTOPp->raw_data_ready));
}

void VLMSFilter::_eval_initial(VLMSFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_eval_initial\n"); );
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = (1U & (~ (IData)(vlTOPp->clk)));
    vlTOPp->__Vclklast__TOP__reset = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->_initial__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VLMSFilter::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::final\n"); );
    // Variables
    VLMSFilter__Syms* __restrict vlSymsp = this->__VlSymsp;
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLMSFilter::_eval_settle(VLMSFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_eval_settle\n"); );
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VLMSFilter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload_last = VL_RAND_RESET_I(1);
    raw_data_payload_fragment = VL_RAND_RESET_I(9);
    filtered_data_valid = VL_RAND_RESET_I(1);
    filtered_data_payload_last = VL_RAND_RESET_I(1);
    filtered_data_payload_fragment = VL_RAND_RESET_I(20);
    train_en = VL_RAND_RESET_I(1);
    clk = 0;
    reset = 0;
    LMSFilter__DOT___zz_ref_mem_port0 = VL_RAND_RESET_I(20);
    LMSFilter__DOT___zz_cnt = VL_RAND_RESET_I(5);
    LMSFilter__DOT__raw_data_ready_1 = VL_RAND_RESET_I(1);
    LMSFilter__DOT__coff_mem_0 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_1 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_2 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_3 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_4 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_5 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_6 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_7 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_8 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_9 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_10 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_11 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_12 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_13 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_14 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__coff_mem_15 = VL_RAND_RESET_I(19);
    LMSFilter__DOT__raw_data_vec_0 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_1 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_2 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_3 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_4 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_5 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_6 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_7 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_8 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_9 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_10 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_11 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_12 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_13 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_14 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__raw_data_vec_15 = VL_RAND_RESET_I(9);
    LMSFilter__DOT__mult_data_vec_0 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_1 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_2 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_3 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_4 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_5 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_6 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_7 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_8 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_9 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_10 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_11 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_12 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_13 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_14 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__mult_data_vec_15 = VL_RAND_RESET_I(20);
    LMSFilter__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    LMSFilter__DOT__sum_result = VL_RAND_RESET_I(20);
    LMSFilter__DOT__raw_data_fire_1_delay_1 = VL_RAND_RESET_I(1);
    LMSFilter__DOT__raw_data_fire_1_delay_2 = VL_RAND_RESET_I(1);
    LMSFilter__DOT__raw_data_fire_1_delay_3 = VL_RAND_RESET_I(1);
    LMSFilter__DOT__raw_data_payload_last_delay_1 = VL_RAND_RESET_I(1);
    LMSFilter__DOT__raw_data_payload_last_delay_2 = VL_RAND_RESET_I(1);
    LMSFilter__DOT__raw_data_payload_last_delay_3 = VL_RAND_RESET_I(1);
    LMSFilter__DOT__cnt = VL_RAND_RESET_I(5);
    LMSFilter__DOT__error_measured = VL_RAND_RESET_I(20);
    LMSFilter__DOT__when_LMSFilter_l78 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            LMSFilter__DOT__ref_mem[__Vi0] = VL_RAND_RESET_I(20);
    }}
    __Vdly__LMSFilter__DOT__coff_mem_15 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_14 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_13 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_12 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_11 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_10 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_9 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_2 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_1 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_0 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_3 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_4 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_5 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_6 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_7 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__coff_mem_8 = VL_RAND_RESET_I(19);
    __Vdly__LMSFilter__DOT__cnt = VL_RAND_RESET_I(5);
    __Vm_traceActivity = 0;
}
