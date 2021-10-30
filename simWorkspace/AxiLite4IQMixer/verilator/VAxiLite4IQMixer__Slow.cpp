// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4IQMixer.h for the primary calling header

#include "VAxiLite4IQMixer.h"
#include "VAxiLite4IQMixer__Syms.h"

//==========

VL_CTOR_IMP(VAxiLite4IQMixer) {
    VAxiLite4IQMixer__Syms* __restrict vlSymsp = __VlSymsp = new VAxiLite4IQMixer__Syms(this, name());
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAxiLite4IQMixer::__Vconfigure(VAxiLite4IQMixer__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAxiLite4IQMixer::~VAxiLite4IQMixer() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VAxiLite4IQMixer::_initial__TOP__1(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_initial__TOP__1\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_rresp = 0U;
}

void VAxiLite4IQMixer::_settle__TOP__6(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_settle__TOP__6\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->if_iq_0_valid = vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_valid_1;
    vlTOPp->if_iq_0_payload = vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_data;
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4IQMixer__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4IQMixer__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4IQMixer__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4IQMixer__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4IQMixer__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4IQMixer__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->AxiLite4IQMixer__DOT__readRsp_data 
            = ((0xfffffff8U & vlTOPp->AxiLite4IQMixer__DOT__readRsp_data) 
               | (IData)(vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_bias_driver));
    } else {
        if ((4U == (IData)(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->AxiLite4IQMixer__DOT__readRsp_data 
                = ((0xfffffffeU & vlTOPp->AxiLite4IQMixer__DOT__readRsp_data) 
                   | (IData)(vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_dir_driver));
        } else {
            if ((0x10U == (IData)(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_addr))) {
                vlTOPp->AxiLite4IQMixer__DOT__readRsp_data 
                    = ((0xfffffffcU & vlTOPp->AxiLite4IQMixer__DOT__readRsp_data) 
                       | (IData)(vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data));
            } else {
                if ((0x14U == (IData)(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_addr))) {
                    vlTOPp->AxiLite4IQMixer__DOT__readRsp_data 
                        = ((0xfffffffeU & vlTOPp->AxiLite4IQMixer__DOT__readRsp_data) 
                           | (IData)(vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data_1));
                }
            }
        }
    }
    vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->AxiLite4IQMixer__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4IQMixer__DOT__readRsp_data;
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_fire;
}

void VAxiLite4IQMixer::_eval_initial(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_eval_initial\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rf_clk = vlTOPp->rf_clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VAxiLite4IQMixer::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::final\n"); );
    // Variables
    VAxiLite4IQMixer__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAxiLite4IQMixer::_eval_settle(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_eval_settle\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAxiLite4IQMixer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_ctor_var_reset\n"); );
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
    base_iq_0_valid = VL_RAND_RESET_I(1);
    base_iq_0_payload_cha_i = VL_RAND_RESET_I(16);
    base_iq_0_payload_cha_q = VL_RAND_RESET_I(16);
    carries_iq_valid = VL_RAND_RESET_I(1);
    carries_iq_payload_cha_i = VL_RAND_RESET_I(16);
    carries_iq_payload_cha_q = VL_RAND_RESET_I(16);
    if_iq_0_valid = VL_RAND_RESET_I(1);
    if_iq_0_payload = VL_RAND_RESET_I(32);
    rf_clk = VL_RAND_RESET_I(1);
    rf_resetn = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT__writeJoinEvent_fire = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    AxiLite4IQMixer__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    AxiLite4IQMixer__DOT__readRsp_data = VL_RAND_RESET_I(32);
    AxiLite4IQMixer__DOT_____05Fshift_bias_driver = VL_RAND_RESET_I(3);
    AxiLite4IQMixer__DOT_____05Fshift_dir_driver = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT___zz_readRsp_data = VL_RAND_RESET_I(2);
    AxiLite4IQMixer__DOT___zz_readRsp_data_1 = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_i = VL_RAND_RESET_I(16);
    AxiLite4IQMixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_q = VL_RAND_RESET_I(16);
    AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_i_data = VL_RAND_RESET_I(16);
    AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_q_data = VL_RAND_RESET_I(16);
    AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_i_data = VL_RAND_RESET_I(16);
    AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_q_data = VL_RAND_RESET_I(16);
    AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_valid_1 = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_i_data = VL_RAND_RESET_I(32);
    AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_q_data = VL_RAND_RESET_I(32);
    AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_data = VL_RAND_RESET_I(32);
    AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__iq_en = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT__powerAdjustor_2__DOT__shifted_data_cha_i = VL_RAND_RESET_I(16);
    AxiLite4IQMixer__DOT__powerAdjustor_2__DOT__shifted_data_cha_q = VL_RAND_RESET_I(16);
    AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkI_reg = VL_RAND_RESET_I(3);
    AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf0 = VL_RAND_RESET_I(3);
    AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf1 = VL_RAND_RESET_I(3);
    AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkI_reg = VL_RAND_RESET_I(2);
    AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf0 = VL_RAND_RESET_I(2);
    AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf1 = VL_RAND_RESET_I(2);
    AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
