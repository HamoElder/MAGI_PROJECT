// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDDS.h for the primary calling header

#include "VDDS.h"
#include "VDDS__Syms.h"

//==========

VL_CTOR_IMP(VDDS) {
    VDDS__Syms* __restrict vlSymsp = __VlSymsp = new VDDS__Syms(this, name());
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDDS::__Vconfigure(VDDS__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VDDS::~VDDS() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VDDS::_initial__TOP__3(VDDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::_initial__TOP__3\n"); );
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*191:0*/ __Vtemp1[6];
    // Body
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f6d656dU;
    __Vtemp1[2U] = 0x6576656cU;
    __Vtemp1[3U] = 0x746f706cU;
    __Vtemp1[4U] = 0x532e765fU;
    __Vtemp1[5U] = 0x4444U;
    VL_READMEM_N(false, 16, 1024, 0, VL_CVT_PACK_STR_NW(6, __Vtemp1)
                 , vlTOPp->DDS__DOT__mem, 0, ~VL_ULL(0));
}

void VDDS::_settle__TOP__4(VDDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::_settle__TOP__4\n"); );
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_payload = vlTOPp->DDS__DOT___zz_mem_port0;
    vlTOPp->data_valid = vlTOPp->DDS__DOT__valid_o_buf;
    vlTOPp->phase_valid = vlTOPp->DDS__DOT__valid_o_buf;
    vlTOPp->phase_payload = vlTOPp->DDS__DOT___zz_phase_payload;
    vlTOPp->DDS__DOT__module_en = ((IData)(vlTOPp->sync_en) 
                                   & (IData)(vlTOPp->channel_en));
    vlTOPp->DDS__DOT___zz_phase_cursor = (0x3ffU & 
                                          ((IData)(vlTOPp->DDS__DOT__phase_cursor) 
                                           + (IData)(vlTOPp->phase_inc)));
    vlTOPp->DDS__DOT__when_DDS_l53 = ((IData)(vlTOPp->phase_limit) 
                                      <= (IData)(vlTOPp->DDS__DOT__phase_cursor));
}

void VDDS::_eval_initial(VDDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::_eval_initial\n"); );
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__3(vlSymsp);
}

void VDDS::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::final\n"); );
    // Variables
    VDDS__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDDS::_eval_settle(VDDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::_eval_settle\n"); );
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VDDS::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::_ctor_var_reset\n"); );
    // Body
    data_valid = VL_RAND_RESET_I(1);
    data_payload = VL_RAND_RESET_I(16);
    phase_valid = VL_RAND_RESET_I(1);
    phase_payload = VL_RAND_RESET_I(10);
    channel_en = VL_RAND_RESET_I(1);
    sync_en = VL_RAND_RESET_I(1);
    phase_limit = VL_RAND_RESET_I(10);
    phase_offset = VL_RAND_RESET_I(10);
    phase_inc = VL_RAND_RESET_I(10);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    DDS__DOT___zz_mem_port0 = VL_RAND_RESET_I(16);
    DDS__DOT___zz_phase_cursor = VL_RAND_RESET_I(10);
    DDS__DOT__module_en = VL_RAND_RESET_I(1);
    DDS__DOT__phase_cursor = VL_RAND_RESET_I(10);
    DDS__DOT__when_DDS_l53 = VL_RAND_RESET_I(1);
    DDS__DOT__valid_o_buf = VL_RAND_RESET_I(1);
    DDS__DOT___zz_phase_payload = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            DDS__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    __Vm_traceActivity = 0;
}
