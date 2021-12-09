// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4Modulator.h for the primary calling header

#include "VAxiLite4Modulator.h"
#include "VAxiLite4Modulator__Syms.h"

//==========

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
    vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
        = ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data))
            ? 0xa59a59U : ((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data))
                            ? 0xa595a7U : ((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data))
                                            ? 0x5a7a59U
                                            : 0x5a75a7U)));
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT___zz_base_cnt 
        = (0x1fU & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt) 
                    + (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf1)));
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__when_dataDivDynamic_l47 
        = ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt) 
           == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf1));
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84 
        = ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__unit_valid) 
           & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1));
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
                        = ((0xfffffffcU & vlTOPp->AxiLite4Modulator__DOT__readRsp_data) 
                           | (IData)(vlTOPp->AxiLite4Modulator__DOT__mod_rtl_bridge_select_driver));
                }
            }
        }
    }
    vlTOPp->AxiLite4Modulator__DOT__writeOccur = ((IData)(vlTOPp->AxiLite4Modulator__DOT__writeJoinEvent_valid) 
                                                  & (IData)(vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->mod_iq_valid = ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                             ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                             : ((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                 ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                 : ((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                     ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                     : (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84))));
    vlTOPp->mod_iq_payload_cha_i = (0xfffU & ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                               ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                   ? 
                                                  (((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                                     ? 0x7ff000U
                                                     : 0x801000U) 
                                                   >> 0xcU)
                                                   : 0U)
                                               : ((1U 
                                                   == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                                   ? 
                                                  ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                    ? 
                                                   (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                                    >> 0xcU)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                                    ? 
                                                   ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                          >> 2U)))
                                                      ? 0xc35U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                           >> 2U)))
                                                       ? 0xebcU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                            >> 2U)))
                                                        ? 0x3caU
                                                        : 0x143U)))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84)
                                                     ? 
                                                    (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1 
                                                     >> 0xcU)
                                                     : 0U)))));
    vlTOPp->mod_iq_payload_cha_q = (0xfffU & ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                               ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                   ? 
                                                  ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                                    ? 0x7ff000U
                                                    : 0x801000U)
                                                   : 0U)
                                               : ((1U 
                                                   == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                                   ? 
                                                  ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                    ? vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                                    ? 
                                                   ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                      ? 0xc35U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                       ? 0xebcU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                        ? 0x3caU
                                                        : 0x143U)))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84)
                                                     ? vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1
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
    mod_iq_payload_cha_i = VL_RAND_RESET_I(12);
    mod_iq_payload_cha_q = VL_RAND_RESET_I(12);
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
    AxiLite4Modulator__DOT__mod_rtl_bridge_select_driver = VL_RAND_RESET_I(2);
    AxiLite4Modulator__DOT___zz_dataIn = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT___zz_dataIn_1 = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT___zz_dataIn_2 = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT___zz_base_cnt = VL_RAND_RESET_I(5);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt = VL_RAND_RESET_I(5);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_ready = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer = VL_RAND_RESET_I(24);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_data_fire = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__when_dataDivDynamic_l47 = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 = VL_RAND_RESET_I(24);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data = VL_RAND_RESET_I(2);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data = VL_RAND_RESET_I(4);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1 = VL_RAND_RESET_I(24);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__unit_data = VL_RAND_RESET_I(8);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__code_map[__Vi0] = VL_RAND_RESET_I(24);
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
    AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkI_reg = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf0 = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf1 = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkI_reg = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf0 = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf1 = VL_RAND_RESET_I(32);
    AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkI_reg = VL_RAND_RESET_I(2);
    AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf0 = VL_RAND_RESET_I(2);
    AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1 = VL_RAND_RESET_I(2);
    __Vdly__AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt = VL_RAND_RESET_I(5);
    __Vdly__AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer = VL_RAND_RESET_I(24);
    __Vdlyvset__AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__code_map__v0 = 0;
    __Vm_traceActivity = 0;
}
