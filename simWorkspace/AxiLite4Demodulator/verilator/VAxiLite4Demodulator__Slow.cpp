// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4Demodulator.h for the primary calling header

#include "VAxiLite4Demodulator.h"
#include "VAxiLite4Demodulator__Syms.h"

//==========
CData/*1:0*/ VAxiLite4Demodulator::__Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[128];
CData/*1:0*/ VAxiLite4Demodulator::__Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[128];

VL_CTOR_IMP(VAxiLite4Demodulator) {
    VAxiLite4Demodulator__Syms* __restrict vlSymsp = __VlSymsp = new VAxiLite4Demodulator__Syms(this, name());
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAxiLite4Demodulator::__Vconfigure(VAxiLite4Demodulator__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAxiLite4Demodulator::~VAxiLite4Demodulator() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VAxiLite4Demodulator::_initial__TOP__1(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_initial__TOP__1\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_rresp = 0U;
}

void VAxiLite4Demodulator::_settle__TOP__7(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_settle__TOP__7\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->base_data_payload = vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer;
    vlTOPp->base_data_valid = vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1;
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_cnt 
        = (0x1fU & ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt) 
                    + (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf1)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_data_buffer 
        = (VL_ULL(0x7fffffffffffff) & (((QData)((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer)) 
                                        << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf1)) 
                                       | (QData)((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_buffer))));
    vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i 
        = ((6U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i)) 
           | VL_LTS_III(32,12,12, 0xd78U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_i)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i 
        = ((5U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,12,12, 0xfffU, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_i)) 
              << 1U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i 
        = ((3U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,12,12, 0x286U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_i)) 
              << 2U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q 
        = ((6U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q)) 
           | VL_LTS_III(32,12,12, 0xd78U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_q)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q 
        = ((5U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,12,12, 0xfffU, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_q)) 
              << 1U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q 
        = ((3U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,12,12, 0x286U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_q)) 
              << 2U));
    vlTOPp->AxiLite4Demodulator__DOT__readRsp_data = 0U;
    if ((0x20U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->AxiLite4Demodulator__DOT__readRsp_data 
            = ((0xfffffffeU & vlTOPp->AxiLite4Demodulator__DOT__readRsp_data) 
               | (IData)(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver));
    } else {
        if ((0x24U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->AxiLite4Demodulator__DOT__readRsp_data 
                = ((0xffffffe0U & vlTOPp->AxiLite4Demodulator__DOT__readRsp_data) 
                   | (IData)(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver));
        } else {
            if ((0x28U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr))) {
                vlTOPp->AxiLite4Demodulator__DOT__readRsp_data 
                    = ((0xffffffe0U & vlTOPp->AxiLite4Demodulator__DOT__readRsp_data) 
                       | (IData)(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver));
            }
        }
    }
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_1_valid 
        = ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->mod_iq_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_2_valid 
        = ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->mod_iq_valid));
    vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4Demodulator__DOT__readRsp_data;
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire;
}

void VAxiLite4Demodulator::_eval_initial(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_eval_initial\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rf_clk = vlTOPp->rf_clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VAxiLite4Demodulator::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::final\n"); );
    // Variables
    VAxiLite4Demodulator__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAxiLite4Demodulator::_eval_settle(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_eval_settle\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAxiLite4Demodulator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_ctor_var_reset\n"); );
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
    mod_iq_valid = VL_RAND_RESET_I(1);
    mod_iq_payload_cha_i = VL_RAND_RESET_I(12);
    mod_iq_payload_cha_q = VL_RAND_RESET_I(12);
    base_data_valid = VL_RAND_RESET_I(1);
    base_data_payload = VL_RAND_RESET_I(24);
    rf_clk = VL_RAND_RESET_I(1);
    rf_resetn = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__writeJoinEvent_fire = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    AxiLite4Demodulator__DOT__readRsp_data = VL_RAND_RESET_I(32);
    AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_select = VL_RAND_RESET_I(2);
    AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver = VL_RAND_RESET_I(5);
    AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver = VL_RAND_RESET_I(5);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_1_valid = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_2_valid = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_data_i = VL_RAND_RESET_I(12);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_valid_i = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__compTable_i = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_valid = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_data_i = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_i = VL_RAND_RESET_I(12);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid_i = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_q = VL_RAND_RESET_I(12);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid_q = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__compTable_i = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__codeTable_q = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_i = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_q = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_i = VL_RAND_RESET_I(12);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid_i = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_q = VL_RAND_RESET_I(12);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid_q = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i = VL_RAND_RESET_I(3);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q = VL_RAND_RESET_I(3);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__compTable_i = VL_RAND_RESET_I(3);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__codeTable_q = VL_RAND_RESET_I(3);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i = VL_RAND_RESET_I(2);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q = VL_RAND_RESET_I(2);
    AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_valid = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_cnt = VL_RAND_RESET_I(5);
    AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_data_buffer = VL_RAND_RESET_Q(55);
    AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt = VL_RAND_RESET_I(5);
    AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_buffer = VL_RAND_RESET_I(24);
    AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_valid_1 = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer = VL_RAND_RESET_I(24);
    AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1 = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkI_reg = VL_RAND_RESET_I(2);
    AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf0 = VL_RAND_RESET_I(2);
    AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1 = VL_RAND_RESET_I(2);
    AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkI_reg = VL_RAND_RESET_I(5);
    AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf0 = VL_RAND_RESET_I(5);
    AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf1 = VL_RAND_RESET_I(5);
    AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkI_reg = VL_RAND_RESET_I(5);
    AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkO_buf0 = VL_RAND_RESET_I(5);
    AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkO_buf1 = VL_RAND_RESET_I(5);
    __Vtablechg1[0] = 3U;
    __Vtablechg1[1] = 3U;
    __Vtablechg1[2] = 3U;
    __Vtablechg1[3] = 3U;
    __Vtablechg1[4] = 3U;
    __Vtablechg1[5] = 2U;
    __Vtablechg1[6] = 3U;
    __Vtablechg1[7] = 3U;
    __Vtablechg1[8] = 3U;
    __Vtablechg1[9] = 2U;
    __Vtablechg1[10] = 3U;
    __Vtablechg1[11] = 2U;
    __Vtablechg1[12] = 3U;
    __Vtablechg1[13] = 2U;
    __Vtablechg1[14] = 3U;
    __Vtablechg1[15] = 3U;
    __Vtablechg1[16] = 3U;
    __Vtablechg1[17] = 3U;
    __Vtablechg1[18] = 3U;
    __Vtablechg1[19] = 3U;
    __Vtablechg1[20] = 3U;
    __Vtablechg1[21] = 2U;
    __Vtablechg1[22] = 3U;
    __Vtablechg1[23] = 3U;
    __Vtablechg1[24] = 3U;
    __Vtablechg1[25] = 2U;
    __Vtablechg1[26] = 3U;
    __Vtablechg1[27] = 2U;
    __Vtablechg1[28] = 3U;
    __Vtablechg1[29] = 2U;
    __Vtablechg1[30] = 3U;
    __Vtablechg1[31] = 3U;
    __Vtablechg1[32] = 3U;
    __Vtablechg1[33] = 1U;
    __Vtablechg1[34] = 3U;
    __Vtablechg1[35] = 1U;
    __Vtablechg1[36] = 3U;
    __Vtablechg1[37] = 0U;
    __Vtablechg1[38] = 3U;
    __Vtablechg1[39] = 1U;
    __Vtablechg1[40] = 3U;
    __Vtablechg1[41] = 0U;
    __Vtablechg1[42] = 3U;
    __Vtablechg1[43] = 0U;
    __Vtablechg1[44] = 3U;
    __Vtablechg1[45] = 0U;
    __Vtablechg1[46] = 3U;
    __Vtablechg1[47] = 1U;
    __Vtablechg1[48] = 3U;
    __Vtablechg1[49] = 3U;
    __Vtablechg1[50] = 3U;
    __Vtablechg1[51] = 3U;
    __Vtablechg1[52] = 3U;
    __Vtablechg1[53] = 2U;
    __Vtablechg1[54] = 3U;
    __Vtablechg1[55] = 3U;
    __Vtablechg1[56] = 3U;
    __Vtablechg1[57] = 2U;
    __Vtablechg1[58] = 3U;
    __Vtablechg1[59] = 2U;
    __Vtablechg1[60] = 3U;
    __Vtablechg1[61] = 2U;
    __Vtablechg1[62] = 3U;
    __Vtablechg1[63] = 3U;
    __Vtablechg1[64] = 3U;
    __Vtablechg1[65] = 1U;
    __Vtablechg1[66] = 3U;
    __Vtablechg1[67] = 1U;
    __Vtablechg1[68] = 3U;
    __Vtablechg1[69] = 0U;
    __Vtablechg1[70] = 3U;
    __Vtablechg1[71] = 1U;
    __Vtablechg1[72] = 3U;
    __Vtablechg1[73] = 0U;
    __Vtablechg1[74] = 3U;
    __Vtablechg1[75] = 0U;
    __Vtablechg1[76] = 3U;
    __Vtablechg1[77] = 0U;
    __Vtablechg1[78] = 3U;
    __Vtablechg1[79] = 1U;
    __Vtablechg1[80] = 3U;
    __Vtablechg1[81] = 1U;
    __Vtablechg1[82] = 3U;
    __Vtablechg1[83] = 1U;
    __Vtablechg1[84] = 3U;
    __Vtablechg1[85] = 0U;
    __Vtablechg1[86] = 3U;
    __Vtablechg1[87] = 1U;
    __Vtablechg1[88] = 3U;
    __Vtablechg1[89] = 0U;
    __Vtablechg1[90] = 3U;
    __Vtablechg1[91] = 0U;
    __Vtablechg1[92] = 3U;
    __Vtablechg1[93] = 0U;
    __Vtablechg1[94] = 3U;
    __Vtablechg1[95] = 1U;
    __Vtablechg1[96] = 3U;
    __Vtablechg1[97] = 1U;
    __Vtablechg1[98] = 3U;
    __Vtablechg1[99] = 1U;
    __Vtablechg1[100] = 3U;
    __Vtablechg1[101] = 0U;
    __Vtablechg1[102] = 3U;
    __Vtablechg1[103] = 1U;
    __Vtablechg1[104] = 3U;
    __Vtablechg1[105] = 0U;
    __Vtablechg1[106] = 3U;
    __Vtablechg1[107] = 0U;
    __Vtablechg1[108] = 3U;
    __Vtablechg1[109] = 0U;
    __Vtablechg1[110] = 3U;
    __Vtablechg1[111] = 1U;
    __Vtablechg1[112] = 3U;
    __Vtablechg1[113] = 3U;
    __Vtablechg1[114] = 3U;
    __Vtablechg1[115] = 3U;
    __Vtablechg1[116] = 3U;
    __Vtablechg1[117] = 2U;
    __Vtablechg1[118] = 3U;
    __Vtablechg1[119] = 3U;
    __Vtablechg1[120] = 3U;
    __Vtablechg1[121] = 2U;
    __Vtablechg1[122] = 3U;
    __Vtablechg1[123] = 2U;
    __Vtablechg1[124] = 3U;
    __Vtablechg1[125] = 2U;
    __Vtablechg1[126] = 3U;
    __Vtablechg1[127] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[0] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[1] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[2] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[3] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[4] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[5] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[6] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[7] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[8] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[9] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[10] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[11] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[12] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[13] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[14] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[15] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[16] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[17] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[18] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[19] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[20] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[21] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[22] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[23] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[24] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[25] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[26] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[27] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[28] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[29] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[30] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[31] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[32] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[33] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[34] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[35] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[36] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[37] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[38] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[39] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[40] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[41] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[42] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[43] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[44] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[45] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[46] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[47] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[48] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[49] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[50] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[51] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[52] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[53] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[54] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[55] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[56] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[57] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[58] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[59] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[60] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[61] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[62] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[63] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[64] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[65] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[66] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[67] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[68] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[69] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[70] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[71] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[72] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[73] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[74] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[75] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[76] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[77] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[78] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[79] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[80] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[81] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[82] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[83] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[84] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[85] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[86] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[87] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[88] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[89] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[90] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[91] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[92] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[93] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[94] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[95] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[96] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[97] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[98] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[99] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[100] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[101] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[102] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[103] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[104] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[105] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[106] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[107] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[108] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[109] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[110] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[111] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[112] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[113] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[114] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[115] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[116] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[117] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[118] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[119] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[120] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[121] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[122] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[123] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[124] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[125] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[126] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[127] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[0] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[1] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[2] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[3] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[4] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[5] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[6] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[7] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[8] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[9] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[10] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[11] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[12] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[13] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[14] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[15] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[16] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[17] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[18] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[19] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[20] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[21] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[22] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[23] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[24] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[25] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[26] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[27] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[28] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[29] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[30] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[31] = 1U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[32] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[33] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[34] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[35] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[36] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[37] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[38] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[39] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[40] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[41] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[42] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[43] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[44] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[45] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[46] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[47] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[48] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[49] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[50] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[51] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[52] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[53] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[54] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[55] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[56] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[57] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[58] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[59] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[60] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[61] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[62] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[63] = 3U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[64] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[65] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[66] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[67] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[68] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[69] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[70] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[71] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[72] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[73] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[74] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[75] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[76] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[77] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[78] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[79] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[80] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[81] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[82] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[83] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[84] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[85] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[86] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[87] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[88] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[89] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[90] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[91] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[92] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[93] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[94] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[95] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[96] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[97] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[98] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[99] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[100] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[101] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[102] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[103] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[104] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[105] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[106] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[107] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[108] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[109] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[110] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[111] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[112] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[113] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[114] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[115] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[116] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[117] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[118] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[119] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[120] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[121] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[122] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[123] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[124] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[125] = 2U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[126] = 0U;
    __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[127] = 2U;
    __Vm_traceActivity = 0;
}
