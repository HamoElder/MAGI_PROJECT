// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4IQDemixer.h for the primary calling header

#include "VAxiLite4IQDemixer.h"
#include "VAxiLite4IQDemixer__Syms.h"

//==========

VL_CTOR_IMP(VAxiLite4IQDemixer) {
    VAxiLite4IQDemixer__Syms* __restrict vlSymsp = __VlSymsp = new VAxiLite4IQDemixer__Syms(this, name());
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAxiLite4IQDemixer::__Vconfigure(VAxiLite4IQDemixer__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAxiLite4IQDemixer::~VAxiLite4IQDemixer() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VAxiLite4IQDemixer::_initial__TOP__1(VAxiLite4IQDemixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQDemixer::_initial__TOP__1\n"); );
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_rresp = 0U;
}

void VAxiLite4IQDemixer::_settle__TOP__6(VAxiLite4IQDemixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQDemixer::_settle__TOP__6\n"); );
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4IQDemixer__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->base_iq_0_valid = vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__base_iq_valid_1;
    vlTOPp->base_iq_0_payload_cha_i = vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__base_i_data;
    vlTOPp->base_iq_0_payload_cha_q = vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__base_q_data;
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4IQDemixer__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4IQDemixer__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4IQDemixer__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4IQDemixer__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
        = (VL_ULL(0xffffffffffff) & VL_MULS_QQQ(48,48,48, 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,32, vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__if_iq_data)), 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,16, (IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__carries_i_data)))));
    vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
        = (VL_ULL(0xffffffffffff) & VL_MULS_QQQ(48,48,48, 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,32, vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__if_iq_data)), 
                                                (VL_ULL(0xffffffffffff) 
                                                 & VL_EXTENDS_QI(48,16, (IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__carries_q_data)))));
    vlTOPp->AxiLite4IQDemixer__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4IQDemixer__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4IQDemixer__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4IQDemixer__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->AxiLite4IQDemixer__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->AxiLite4IQDemixer__DOT__readRsp_data 
            = ((0xfffffff8U & vlTOPp->AxiLite4IQDemixer__DOT__readRsp_data) 
               | (IData)(vlTOPp->AxiLite4IQDemixer__DOT_____05Fshift_bias_driver));
    } else {
        if ((4U == (IData)(vlTOPp->AxiLite4IQDemixer__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->AxiLite4IQDemixer__DOT__readRsp_data 
                = ((0xfffffffeU & vlTOPp->AxiLite4IQDemixer__DOT__readRsp_data) 
                   | (IData)(vlTOPp->AxiLite4IQDemixer__DOT_____05Fshift_dir_driver));
        }
    }
    vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data_2 
        = (0xffffU & ((0U != (IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data))
                       ? ((IData)(1U) + (IData)((vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                                                 >> 0x20U)))
                       : (IData)((vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                                  >> 0x20U))));
    vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data_2 
        = (0xffffU & ((0U != (IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data))
                       ? ((IData)(1U) + (IData)((vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                                                 >> 0x20U)))
                       : (IData)((vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                                  >> 0x20U))));
    vlTOPp->AxiLite4IQDemixer__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->AxiLite4IQDemixer__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->AxiLite4IQDemixer__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4IQDemixer__DOT__readRsp_data;
    vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 
        = ((1U & (IData)((vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                          >> 0x2fU))) ? ((0x10000U 
                                          & ((IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data_2) 
                                             << 1U)) 
                                         | (IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data_2))
            : (0xffffU & ((0U != (IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data))
                           ? ((IData)(1U) + (0x7fffU 
                                             & (IData)(
                                                       (vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                                                        >> 0x20U))))
                           : (0x7fffU & (IData)((vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                                                 >> 0x20U))))));
    vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 
        = ((1U & (IData)((vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                          >> 0x2fU))) ? ((0x10000U 
                                          & ((IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data_2) 
                                             << 1U)) 
                                         | (IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data_2))
            : (0xffffU & ((0U != (IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data))
                           ? ((IData)(1U) + (0x7fffU 
                                             & (IData)(
                                                       (vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                                                        >> 0x20U))))
                           : (0x7fffU & (IData)((vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                                                 >> 0x20U))))));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4IQDemixer__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4IQDemixer__DOT__writeJoinEvent_fire;
}

void VAxiLite4IQDemixer::_eval_initial(VAxiLite4IQDemixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQDemixer::_eval_initial\n"); );
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rf_clk = vlTOPp->rf_clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VAxiLite4IQDemixer::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQDemixer::final\n"); );
    // Variables
    VAxiLite4IQDemixer__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAxiLite4IQDemixer::_eval_settle(VAxiLite4IQDemixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQDemixer::_eval_settle\n"); );
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAxiLite4IQDemixer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQDemixer::_ctor_var_reset\n"); );
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
    if_iq_0_valid = VL_RAND_RESET_I(1);
    if_iq_0_payload = VL_RAND_RESET_I(32);
    carries_iq_valid = VL_RAND_RESET_I(1);
    carries_iq_payload_cha_i = VL_RAND_RESET_I(16);
    carries_iq_payload_cha_q = VL_RAND_RESET_I(16);
    base_iq_0_valid = VL_RAND_RESET_I(1);
    base_iq_0_payload_cha_i = VL_RAND_RESET_I(16);
    base_iq_0_payload_cha_q = VL_RAND_RESET_I(16);
    rf_clk = VL_RAND_RESET_I(1);
    rf_resetn = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AxiLite4IQDemixer__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    AxiLite4IQDemixer__DOT__writeJoinEvent_fire = VL_RAND_RESET_I(1);
    AxiLite4IQDemixer__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    AxiLite4IQDemixer__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    AxiLite4IQDemixer__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    AxiLite4IQDemixer__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    AxiLite4IQDemixer__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    AxiLite4IQDemixer__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    AxiLite4IQDemixer__DOT__readRsp_data = VL_RAND_RESET_I(32);
    AxiLite4IQDemixer__DOT_____05Fshift_bias_driver = VL_RAND_RESET_I(3);
    AxiLite4IQDemixer__DOT_____05Fshift_dir_driver = VL_RAND_RESET_I(1);
    AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__if_iq_data = VL_RAND_RESET_I(32);
    AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__carries_i_data = VL_RAND_RESET_I(16);
    AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__carries_q_data = VL_RAND_RESET_I(16);
    AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__base_iq_valid_1 = VL_RAND_RESET_I(1);
    AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__base_i_data = VL_RAND_RESET_I(16);
    AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__base_q_data = VL_RAND_RESET_I(16);
    AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__iq_en = VL_RAND_RESET_I(1);
    AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data = VL_RAND_RESET_Q(48);
    AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 = VL_RAND_RESET_I(17);
    AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data_2 = VL_RAND_RESET_I(16);
    AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data = VL_RAND_RESET_Q(48);
    AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 = VL_RAND_RESET_I(17);
    AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data_2 = VL_RAND_RESET_I(16);
    AxiLite4IQDemixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_i = VL_RAND_RESET_I(16);
    AxiLite4IQDemixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_q = VL_RAND_RESET_I(16);
    AxiLite4IQDemixer__DOT__clkCrossing_2__DOT__area_clkI_reg = VL_RAND_RESET_I(3);
    AxiLite4IQDemixer__DOT__clkCrossing_2__DOT__area_clkO_buf0 = VL_RAND_RESET_I(3);
    AxiLite4IQDemixer__DOT__clkCrossing_2__DOT__area_clkO_buf1 = VL_RAND_RESET_I(3);
    AxiLite4IQDemixer__DOT__clkCrossing_3__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4IQDemixer__DOT__clkCrossing_3__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4IQDemixer__DOT__clkCrossing_3__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
