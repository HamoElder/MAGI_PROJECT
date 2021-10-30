// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4Modulator.h for the primary calling header

#include "VAxiLite4Modulator.h"
#include "VAxiLite4Modulator__Syms.h"

//==========
SData/*15:0*/ VAxiLite4Modulator::__Vtable1_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[8];
SData/*15:0*/ VAxiLite4Modulator::__Vtable2_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[8];

VL_CTOR_IMP(VAxiLite4Modulator) {
    VAxiLite4Modulator__Syms* __restrict vlSymsp = __VlSymsp = new VAxiLite4Modulator__Syms(this, name());
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAxiLite4Modulator::__Vconfigure(VAxiLite4Modulator__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAxiLite4Modulator::~VAxiLite4Modulator() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VAxiLite4Modulator::_initial__TOP__1(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_initial__TOP__1\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_rresp = 0U;
}

void VAxiLite4Modulator::_settle__TOP__7(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_settle__TOP__7\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Modulator__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4Modulator__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4Modulator__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->__Vtableidx1 = (7U & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_data) 
                                  >> 3U));
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i 
        = vlTOPp->__Vtable1_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (7U & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_data));
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q 
        = vlTOPp->__Vtable2_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q
        [vlTOPp->__Vtableidx2];
    vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
        = ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_data))
            ? 0xa57ea57eU : ((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_data))
                              ? 0xa57e5a82U : ((2U 
                                                == (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_data))
                                                ? 0x5a82a57eU
                                                : 0x5a825a82U)));
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT___zz_base_cnt 
        = (0x1fU & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt) 
                    + (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf1)));
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__when_dataDivDynamic_l47 
        = ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt) 
           == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf1));
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__when_lookUpMod_l56 
        = ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__unit_valid) 
           & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf1)));
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_ready 
        = (((IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) 
            == (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt)) 
           & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf1));
    vlTOPp->AxiLite4Modulator__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->AxiLite4Modulator__DOT__readRsp_data 
            = ((0xfffffffeU & vlTOPp->AxiLite4Modulator__DOT__readRsp_data) 
               | (IData)(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_enable_driver));
    } else {
        if ((4U == (IData)(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->AxiLite4Modulator__DOT__readRsp_data 
                = ((0xffffffe0U & vlTOPp->AxiLite4Modulator__DOT__readRsp_data) 
                   | (IData)(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_step_driver));
        } else {
            if ((8U == (IData)(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_addr))) {
                vlTOPp->AxiLite4Modulator__DOT__readRsp_data 
                    = ((0xffffffe0U & vlTOPp->AxiLite4Modulator__DOT__readRsp_data) 
                       | (IData)(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_limit_driver));
            } else {
                if ((0x10U == (IData)(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_addr))) {
                    vlTOPp->AxiLite4Modulator__DOT__readRsp_data 
                        = ((0xfffffff8U & vlTOPp->AxiLite4Modulator__DOT__readRsp_data) 
                           | (IData)(vlTOPp->AxiLite4Modulator__DOT__mod_rtl_bridge_select_driver));
                }
            }
        }
    }
    vlTOPp->AxiLite4Modulator__DOT__writeOccur = ((IData)(vlTOPp->AxiLite4Modulator__DOT__writeJoinEvent_valid) 
                                                  & (IData)(vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->mod_iq_valid = ((4U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                             ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                             : ((2U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                 ? ((1U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                     ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_valid)
                                     : (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_valid))
                                 : ((1U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                     ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_valid)
                                     : (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_valid))));
    vlTOPp->mod_iq_payload_cha_i = (0xffffU & ((4U 
                                                & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                                ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                                    ? 
                                                   (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT___zz_code_map_port1 
                                                    >> 0x10U)
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                                     ? 
                                                    ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_valid)
                                                      ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i)
                                                      : 0U)
                                                     : 
                                                    ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_valid)
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data) 
                                                           >> 2U)))
                                                       ? 0xc349U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data) 
                                                            >> 2U)))
                                                        ? 0xebc3U
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data) 
                                                             >> 2U)))
                                                         ? 0x3cb6U
                                                         : 0x143cU)))
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                                     ? 
                                                    ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_valid)
                                                      ? 
                                                     (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
                                                      >> 0x10U)
                                                      : 0U)
                                                     : 
                                                    ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_valid)
                                                      ? 
                                                     (((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_data)
                                                        ? 0x7fff0000U
                                                        : 0x80010000U) 
                                                      >> 0x10U)
                                                      : 0U)))));
    vlTOPp->mod_iq_payload_cha_q = (0xffffU & ((4U 
                                                & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                                ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                                    ? vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT___zz_code_map_port1
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                                     ? 
                                                    ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_valid)
                                                      ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q)
                                                      : 0U)
                                                     : 
                                                    ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_valid)
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data)))
                                                       ? 0xc349U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data)))
                                                        ? 0xebc3U
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data)))
                                                         ? 0x3cb6U
                                                         : 0x143cU)))
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                                     ? 
                                                    ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_valid)
                                                      ? vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0
                                                      : 0U)
                                                     : 
                                                    ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_valid)
                                                      ? 
                                                     ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_data)
                                                       ? 0x7fff0000U
                                                       : 0x80010000U)
                                                      : 0U)))));
    vlTOPp->base_data_ready = vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_ready;
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_data_fire 
        = ((IData)(vlTOPp->base_data_valid) & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_ready));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4Modulator__DOT__readRsp_data;
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4Modulator__DOT__writeOccur;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4Modulator__DOT__writeOccur;
}

void VAxiLite4Modulator::_eval_initial(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_eval_initial\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP__rf_clk = vlTOPp->rf_clk;
}

void VAxiLite4Modulator::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::final\n"); );
    // Variables
    VAxiLite4Modulator__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAxiLite4Modulator::_eval_settle(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_eval_settle\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAxiLite4Modulator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_ctor_var_reset\n"); );
    // Body
    base_data_valid = VL_RAND_RESET_I(1);
    base_data_ready = VL_RAND_RESET_I(1);
    base_data_payload = VL_RAND_RESET_I(24);
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
    mod_iq_valid = VL_RAND_RESET_I(1);
    mod_iq_payload_cha_i = VL_RAND_RESET_I(16);
    mod_iq_payload_cha_q = VL_RAND_RESET_I(16);
    rf_clk = VL_RAND_RESET_I(1);
    rf_resetn = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    AxiLite4Modulator__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    AxiLite4Modulator__DOT__readRsp_data = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT__writeOccur = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__mod_data_bridge_enable_driver = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__mod_data_bridge_cnt_step_driver = VL_RAND_RESET_I(5);
    AxiLite4Modulator__DOT__mod_data_bridge_cnt_limit_driver = VL_RAND_RESET_I(5);
    AxiLite4Modulator__DOT__mod_rtl_bridge_select_driver = VL_RAND_RESET_I(3);
    AxiLite4Modulator__DOT___zz_mod_rtl_bridge_w_en = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT___zz_mod_rtl_bridge_w_addr = VL_RAND_RESET_I(11);
    AxiLite4Modulator__DOT___zz_mod_rtl_bridge_w_data = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT___zz_base_cnt = VL_RAND_RESET_I(5);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt = VL_RAND_RESET_I(5);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_ready = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer = VL_RAND_RESET_I(24);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_data_fire = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__when_dataDivDynamic_l47 = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_data = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_data = VL_RAND_RESET_I(2);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data = VL_RAND_RESET_I(4);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i = VL_RAND_RESET_I(16);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q = VL_RAND_RESET_I(16);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_data = VL_RAND_RESET_I(6);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT___zz_code_map_port1 = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__unit_data = VL_RAND_RESET_I(11);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__when_lookUpMod_l56 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__code_map[__Vi0] = VL_RAND_RESET_I(32);
    }}
    AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkI_reg = VL_RAND_RESET_I(5);
    AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf0 = VL_RAND_RESET_I(5);
    AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf1 = VL_RAND_RESET_I(5);
    AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkI_reg = VL_RAND_RESET_I(5);
    AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf0 = VL_RAND_RESET_I(5);
    AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf1 = VL_RAND_RESET_I(5);
    AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkI_reg = VL_RAND_RESET_I(3);
    AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf0 = VL_RAND_RESET_I(3);
    AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1 = VL_RAND_RESET_I(3);
    AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkI_reg = VL_RAND_RESET_I(11);
    AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf0 = VL_RAND_RESET_I(11);
    AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf1 = VL_RAND_RESET_I(11);
    AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkI_reg = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf0 = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1 = VL_RAND_RESET_I(32);
    __Vtableidx1 = 0;
    __Vtable1_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[0] = 0xbae1U;
    __Vtable1_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[1] = 0xcea0U;
    __Vtable1_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[2] = 0xf620U;
    __Vtable1_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[3] = 0xe260U;
    __Vtable1_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[4] = 0x451fU;
    __Vtable1_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[5] = 0x3160U;
    __Vtable1_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[6] = 0x3160U;
    __Vtable1_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[7] = 0x3160U;
    __Vtableidx2 = 0;
    __Vtable2_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[0] = 0xbae1U;
    __Vtable2_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[1] = 0xcea0U;
    __Vtable2_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[2] = 0xf620U;
    __Vtable2_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[3] = 0xe260U;
    __Vtable2_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[4] = 0x451fU;
    __Vtable2_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[5] = 0x3160U;
    __Vtable2_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[6] = 0x3160U;
    __Vtable2_AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[7] = 0x3160U;
    __Vdly__AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer = VL_RAND_RESET_I(24);
    __Vdlyvset__AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__code_map__v0 = 0;
    __Vm_traceActivity = 0;
}
