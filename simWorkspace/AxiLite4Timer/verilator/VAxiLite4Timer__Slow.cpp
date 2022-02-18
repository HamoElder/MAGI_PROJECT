// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4Timer.h for the primary calling header

#include "VAxiLite4Timer.h"
#include "VAxiLite4Timer__Syms.h"

//==========

VL_CTOR_IMP(VAxiLite4Timer) {
    VAxiLite4Timer__Syms* __restrict vlSymsp = __VlSymsp = new VAxiLite4Timer__Syms(this, name());
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAxiLite4Timer::__Vconfigure(VAxiLite4Timer__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAxiLite4Timer::~VAxiLite4Timer() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VAxiLite4Timer::_initial__TOP__1(VAxiLite4Timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::_initial__TOP__1\n"); );
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_rresp = 0U;
}

void VAxiLite4Timer::_settle__TOP__5(VAxiLite4Timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::_settle__TOP__5\n"); );
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4Timer__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4Timer__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__outputCompare_1_oc 
        = ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_oc_en_driver) 
           & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__timer_counter) 
              < (IData)(vlTOPp->AxiLite4Timer__DOT___zz_oc_compare_val)));
    vlTOPp->AxiLite4Timer__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4Timer__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A_full 
        = ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver) 
           & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A__DOT__divider_counter) 
              == (IData)(vlTOPp->AxiLite4Timer__DOT___zz_divider_A_limit)));
    vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B_full 
        = ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver) 
           & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B__DOT__divider_counter) 
              == (IData)(vlTOPp->AxiLite4Timer__DOT___zz_divider_B_limit)));
    vlTOPp->AxiLite4Timer__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->AxiLite4Timer__DOT__readRsp_data = 
            ((0xfffffffeU & vlTOPp->AxiLite4Timer__DOT__readRsp_data) 
             | (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver));
        vlTOPp->AxiLite4Timer__DOT__readRsp_data = 
            ((0xfffffffdU & vlTOPp->AxiLite4Timer__DOT__readRsp_data) 
             | ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_en_driver) 
                << 1U));
        vlTOPp->AxiLite4Timer__DOT__readRsp_data = 
            ((0xfffffffbU & vlTOPp->AxiLite4Timer__DOT__readRsp_data) 
             | ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver) 
                << 2U));
        vlTOPp->AxiLite4Timer__DOT__readRsp_data = 
            ((0xffffffefU & vlTOPp->AxiLite4Timer__DOT__readRsp_data) 
             | ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_oc_en_driver) 
                << 4U));
    } else {
        if ((0x14U == (IData)(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->AxiLite4Timer__DOT__readRsp_data 
                = ((0xffff0000U & vlTOPp->AxiLite4Timer__DOT__readRsp_data) 
                   | (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__timer_counter));
        }
    }
    vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit 
        = ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver) 
           & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__timer_counter) 
              == (IData)(vlTOPp->AxiLite4Timer__DOT___zz_period)));
    vlTOPp->oc = vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__outputCompare_1_oc;
    vlTOPp->oc_n = (1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__outputCompare_1_oc)));
    vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->AxiLite4Timer__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4Timer__DOT__readRsp_data;
    vlTOPp->timer_interrupt = (1U & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_en_driver)
                                      ? ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit)
                                          ? (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver)
                                          : (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver)))
                                      : (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver))));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire;
}

void VAxiLite4Timer::_eval_initial(VAxiLite4Timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::_eval_initial\n"); );
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VAxiLite4Timer::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::final\n"); );
    // Variables
    VAxiLite4Timer__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAxiLite4Timer::_eval_settle(VAxiLite4Timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::_eval_settle\n"); );
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAxiLite4Timer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::_ctor_var_reset\n"); );
    // Body
    axil4Ctrl_awvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_awready = VL_RAND_RESET_I(1);
    axil4Ctrl_awaddr = VL_RAND_RESET_I(8);
    axil4Ctrl_awprot = VL_RAND_RESET_I(3);
    axil4Ctrl_wvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_wready = VL_RAND_RESET_I(1);
    axil4Ctrl_wdata = VL_RAND_RESET_I(32);
    axil4Ctrl_wstrb = VL_RAND_RESET_I(4);
    axil4Ctrl_bvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_bready = VL_RAND_RESET_I(1);
    axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    axil4Ctrl_arvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_arready = VL_RAND_RESET_I(1);
    axil4Ctrl_araddr = VL_RAND_RESET_I(8);
    axil4Ctrl_arprot = VL_RAND_RESET_I(3);
    axil4Ctrl_rvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_rready = VL_RAND_RESET_I(1);
    axil4Ctrl_rdata = VL_RAND_RESET_I(32);
    axil4Ctrl_rresp = VL_RAND_RESET_I(2);
    timer_interrupt = VL_RAND_RESET_I(1);
    oc = VL_RAND_RESET_I(1);
    oc_n = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT__writeJoinEvent_fire = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    AxiLite4Timer__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    AxiLite4Timer__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    AxiLite4Timer__DOT__readRsp_data = VL_RAND_RESET_I(32);
    AxiLite4Timer__DOT__timer_module_enable_driver = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT__timer_module_interrupt_en_driver = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT___zz_period = VL_RAND_RESET_I(16);
    AxiLite4Timer__DOT___zz_reload_val = VL_RAND_RESET_I(16);
    AxiLite4Timer__DOT___zz_divider_A_limit = VL_RAND_RESET_I(4);
    AxiLite4Timer__DOT___zz_divider_B_limit = VL_RAND_RESET_I(16);
    AxiLite4Timer__DOT___zz_interrupt_clc = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT__timer_module_oc_en_driver = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT___zz_oc_compare_val = VL_RAND_RESET_I(16);
    AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A_full = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B_full = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT__timer_module__DOT__outputCompare_1_oc = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT__timer_module__DOT__timer_counter = VL_RAND_RESET_I(16);
    AxiLite4Timer__DOT__timer_module__DOT__limit = VL_RAND_RESET_I(1);
    AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A__DOT__divider_counter = VL_RAND_RESET_I(4);
    AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B__DOT__divider_counter = VL_RAND_RESET_I(16);
    __Vm_traceActivity = 0;
}
