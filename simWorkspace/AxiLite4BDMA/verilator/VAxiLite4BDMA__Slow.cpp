// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4BDMA.h for the primary calling header

#include "VAxiLite4BDMA.h"
#include "VAxiLite4BDMA__Syms.h"

//==========
QData/*55:0*/ VAxiLite4BDMA::__Vtable1_AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string[8];
QData/*55:0*/ VAxiLite4BDMA::__Vtable2_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string[8];
WData/*71:0*/ VAxiLite4BDMA::__Vtable3_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string[4][3];
QData/*55:0*/ VAxiLite4BDMA::__Vtable4_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string[8];
WData/*71:0*/ VAxiLite4BDMA::__Vtable5_AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string[4][3];

VL_CTOR_IMP(VAxiLite4BDMA) {
    VAxiLite4BDMA__Syms* __restrict vlSymsp = __VlSymsp = new VAxiLite4BDMA__Syms(this, name());
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAxiLite4BDMA::__Vconfigure(VAxiLite4BDMA__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAxiLite4BDMA::~VAxiLite4BDMA() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VAxiLite4BDMA::_initial__TOP__1(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_initial__TOP__1\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_rresp = 0U;
}

void VAxiLite4BDMA::_settle__TOP__2(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_settle__TOP__2\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axi4S2M_arvalid = 0U;
    vlTOPp->axi4S2M_araddr = 0U;
    vlTOPp->axi4S2M_arid = 0U;
    vlTOPp->axi4S2M_arlen = 0U;
    vlTOPp->axi4S2M_arsize = 0U;
    vlTOPp->axi4S2M_arburst = 0U;
    vlTOPp->axi4S2M_rready = 0U;
    vlTOPp->axi4M2S_awvalid = 0U;
    vlTOPp->axi4M2S_awaddr = 0U;
    vlTOPp->axi4M2S_awid = 0U;
    vlTOPp->axi4M2S_awlen = 0U;
    vlTOPp->axi4M2S_awsize = 0U;
    vlTOPp->axi4M2S_awburst = 0U;
    vlTOPp->axi4M2S_wvalid = 0U;
    vlTOPp->axi4M2S_wdata = 0U;
    vlTOPp->axi4M2S_wstrb = 0U;
    vlTOPp->axi4M2S_wlast = 0U;
    vlTOPp->axi4M2S_bready = 0U;
    vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4BDMA__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4BDMA__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axi4S2M_wdata = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_data;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__when_BDMAs2m_l89 
        = (0U == vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes);
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__when_BDMAm2s_l85 
        = (0U == vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes);
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4BDMA__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_fire 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_valid_driver) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_ready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_fire 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_valid_driver) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_ready));
    vlTOPp->axi4S2M_awaddr = (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->axi4S2M_awid = (0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x20U)));
    vlTOPp->axi4S2M_awlen = (0xffU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)));
    vlTOPp->axi4S2M_awsize = (7U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)));
    vlTOPp->axi4S2M_awburst = (3U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x2fU)));
    vlTOPp->axi4S2M_wvalid = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid;
    vlTOPp->axi4S2M_wlast = (0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len));
    vlTOPp->axi4S2M_bready = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready;
    vlTOPp->intrS2M = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished;
    vlTOPp->intrM2S = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT___zz_when_BDMAs2m_l105 
        = (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes 
           + (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT___zz_when_BDMAs2m_l140_1 
        = ((0xfffU & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address) 
           + (0xfffU & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_w_fire_1 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid) 
           & (IData)(vlTOPp->axi4S2M_wready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_b_fire 
        = ((IData)(vlTOPp->axi4S2M_bvalid) & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT___zz_when_BDMAm2s_l101 
        = (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes 
           + (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT___zz_when_BDMAm2s_l136_1 
        = ((0xfffU & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address) 
           + (0xfffU & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes));
    vlTOPp->axi4S2M_wstrb = ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len))
                              ? ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__strb_mask) 
                                 & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_strb))
                              : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_strb));
    vlTOPp->__Vtableidx3 = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string[0U] 
        = vlTOPp->__Vtable3_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string
        [vlTOPp->__Vtableidx3][0U];
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string[1U] 
        = vlTOPp->__Vtable3_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string
        [vlTOPp->__Vtableidx3][1U];
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string[2U] 
        = vlTOPp->__Vtable3_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string
        [vlTOPp->__Vtableidx3][2U];
    vlTOPp->__Vtableidx5 = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string[0U] 
        = vlTOPp->__Vtable5_AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string
        [vlTOPp->__Vtableidx5][0U];
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string[1U] 
        = vlTOPp->__Vtable5_AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string
        [vlTOPp->__Vtableidx5][1U];
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string[2U] 
        = vlTOPp->__Vtable5_AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string
        [vlTOPp->__Vtableidx5][2U];
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready 
        = ((((IData)(vlTOPp->axi4S2M_wready) & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_valve)) 
            & (0U != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len))) 
           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_leak));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value));
    vlTOPp->axi4M2S_araddr = (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->axi4M2S_arid = (0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x20U)));
    vlTOPp->axi4M2S_arlen = (0xffU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)));
    vlTOPp->axi4M2S_arsize = (7U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)));
    vlTOPp->axi4M2S_arburst = (3U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x2fU)));
    vlTOPp->dataM2S_tdata = (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->dataM2S_tid = (0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x20U)));
    vlTOPp->dataM2S_tstrb = (0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x24U)));
    vlTOPp->dataM2S_tkeep = (0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x28U)));
    vlTOPp->dataM2S_tlast = (1U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2cU)));
    vlTOPp->__Vtableidx1 = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string 
        = vlTOPp->__Vtable1_AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string 
        = vlTOPp->__Vtable2_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string
        [vlTOPp->__Vtableidx2];
    vlTOPp->__Vtableidx4 = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string 
        = vlTOPp->__Vtable4_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string
        [vlTOPp->__Vtableidx4];
    vlTOPp->AxiLite4BDMA__DOT__readRsp_data = 0U;
    if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                if ((0x10U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                    if ((8U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_ready));
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffdU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished) 
                                              << 1U));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_reset_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffff0U 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_id_driver));
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffcU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_burst_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xc0000000U 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_total_bytes_driver);
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_start_addr_driver;
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_valid_driver));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                    if ((8U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffff8U 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_ready));
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffdU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished) 
                                              << 1U));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_reset_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffff0U 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_id_driver));
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffcU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_burst_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xc0000000U 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_total_bytes_driver);
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_start_addr_driver;
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_valid_driver));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void VAxiLite4BDMA::_settle__TOP__3(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_settle__TOP__3\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_occupancy 
        = ((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy) 
             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch)) 
            << 4U) | (0xfU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value))));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4BDMA__DOT__readRsp_data;
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full)));
    vlTOPp->dataS2M_tready = (1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->dataS2M_tvalid) & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full))))));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_r_ready 
        = ((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full)) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing 
        = (((IData)(vlTOPp->axi4M2S_rvalid) & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve)) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full))))));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full))))));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full))))));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__when_BDMAs2m_l335 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_last) 
           | (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid) 
               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready)) 
              & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                         >> 0x2cU))));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready));
    vlTOPp->axi4M2S_rready = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_r_ready;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_r_fire 
        = ((IData)(vlTOPp->axi4M2S_rvalid) & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_r_ready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->dataM2S_tvalid = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->dataM2S_tready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->axi4M2S_arready) & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_pop_valid) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_finish 
        = ((3U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state)) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo_io_pop_valid)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->axi4S2M_awready) & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo_io_pop_valid) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->axi4M2S_arvalid = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_ar_fire_2 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid) 
           & (IData)(vlTOPp->axi4M2S_arready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full))))) 
           & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid) 
              & (IData)(vlTOPp->axi4M2S_arready)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full))))) 
           & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid) 
              & (IData)(vlTOPp->axi4M2S_arready)));
}

void VAxiLite4BDMA::_settle__TOP__4(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_settle__TOP__4\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->axi4S2M_awvalid = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_aw_fire_2 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid) 
           & (IData)(vlTOPp->axi4S2M_awready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full))))) 
           & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid) 
              & (IData)(vlTOPp->axi4S2M_awready)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full))))) 
           & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid) 
              & (IData)(vlTOPp->axi4S2M_awready)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement)));
}

void VAxiLite4BDMA::_eval_initial(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_eval_initial\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VAxiLite4BDMA::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::final\n"); );
    // Variables
    VAxiLite4BDMA__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAxiLite4BDMA::_eval_settle(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_eval_settle\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void VAxiLite4BDMA::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_ctor_var_reset\n"); );
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
    axi4S2M_awvalid = VL_RAND_RESET_I(1);
    axi4S2M_awready = VL_RAND_RESET_I(1);
    axi4S2M_awaddr = VL_RAND_RESET_I(32);
    axi4S2M_awid = VL_RAND_RESET_I(4);
    axi4S2M_awlen = VL_RAND_RESET_I(8);
    axi4S2M_awsize = VL_RAND_RESET_I(3);
    axi4S2M_awburst = VL_RAND_RESET_I(2);
    axi4S2M_wvalid = VL_RAND_RESET_I(1);
    axi4S2M_wready = VL_RAND_RESET_I(1);
    axi4S2M_wdata = VL_RAND_RESET_I(32);
    axi4S2M_wstrb = VL_RAND_RESET_I(4);
    axi4S2M_wlast = VL_RAND_RESET_I(1);
    axi4S2M_bvalid = VL_RAND_RESET_I(1);
    axi4S2M_bready = VL_RAND_RESET_I(1);
    axi4S2M_bid = VL_RAND_RESET_I(4);
    axi4S2M_bresp = VL_RAND_RESET_I(2);
    axi4S2M_arvalid = VL_RAND_RESET_I(1);
    axi4S2M_arready = VL_RAND_RESET_I(1);
    axi4S2M_araddr = VL_RAND_RESET_I(32);
    axi4S2M_arid = VL_RAND_RESET_I(4);
    axi4S2M_arlen = VL_RAND_RESET_I(8);
    axi4S2M_arsize = VL_RAND_RESET_I(3);
    axi4S2M_arburst = VL_RAND_RESET_I(2);
    axi4S2M_rvalid = VL_RAND_RESET_I(1);
    axi4S2M_rready = VL_RAND_RESET_I(1);
    axi4S2M_rdata = VL_RAND_RESET_I(32);
    axi4S2M_rid = VL_RAND_RESET_I(4);
    axi4S2M_rresp = VL_RAND_RESET_I(2);
    axi4S2M_rlast = VL_RAND_RESET_I(1);
    axi4M2S_awvalid = VL_RAND_RESET_I(1);
    axi4M2S_awready = VL_RAND_RESET_I(1);
    axi4M2S_awaddr = VL_RAND_RESET_I(32);
    axi4M2S_awid = VL_RAND_RESET_I(4);
    axi4M2S_awlen = VL_RAND_RESET_I(8);
    axi4M2S_awsize = VL_RAND_RESET_I(3);
    axi4M2S_awburst = VL_RAND_RESET_I(2);
    axi4M2S_wvalid = VL_RAND_RESET_I(1);
    axi4M2S_wready = VL_RAND_RESET_I(1);
    axi4M2S_wdata = VL_RAND_RESET_I(32);
    axi4M2S_wstrb = VL_RAND_RESET_I(4);
    axi4M2S_wlast = VL_RAND_RESET_I(1);
    axi4M2S_bvalid = VL_RAND_RESET_I(1);
    axi4M2S_bready = VL_RAND_RESET_I(1);
    axi4M2S_bid = VL_RAND_RESET_I(4);
    axi4M2S_bresp = VL_RAND_RESET_I(2);
    axi4M2S_arvalid = VL_RAND_RESET_I(1);
    axi4M2S_arready = VL_RAND_RESET_I(1);
    axi4M2S_araddr = VL_RAND_RESET_I(32);
    axi4M2S_arid = VL_RAND_RESET_I(4);
    axi4M2S_arlen = VL_RAND_RESET_I(8);
    axi4M2S_arsize = VL_RAND_RESET_I(3);
    axi4M2S_arburst = VL_RAND_RESET_I(2);
    axi4M2S_rvalid = VL_RAND_RESET_I(1);
    axi4M2S_rready = VL_RAND_RESET_I(1);
    axi4M2S_rdata = VL_RAND_RESET_I(32);
    axi4M2S_rid = VL_RAND_RESET_I(4);
    axi4M2S_rresp = VL_RAND_RESET_I(2);
    axi4M2S_rlast = VL_RAND_RESET_I(1);
    dataS2M_tvalid = VL_RAND_RESET_I(1);
    dataS2M_tready = VL_RAND_RESET_I(1);
    dataS2M_tdata = VL_RAND_RESET_I(32);
    dataS2M_tid = VL_RAND_RESET_I(4);
    dataS2M_tstrb = VL_RAND_RESET_I(4);
    dataS2M_tkeep = VL_RAND_RESET_I(4);
    dataS2M_tlast = VL_RAND_RESET_I(1);
    dataM2S_tvalid = VL_RAND_RESET_I(1);
    dataM2S_tready = VL_RAND_RESET_I(1);
    dataM2S_tdata = VL_RAND_RESET_I(32);
    dataM2S_tid = VL_RAND_RESET_I(4);
    dataM2S_tstrb = VL_RAND_RESET_I(4);
    dataM2S_tkeep = VL_RAND_RESET_I(4);
    dataM2S_tlast = VL_RAND_RESET_I(1);
    intrS2M = VL_RAND_RESET_I(1);
    intrM2S = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__writeJoinEvent_fire = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    AxiLite4BDMA__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__readRsp_data = VL_RAND_RESET_I(32);
    AxiLite4BDMA__DOT__bdma_core_cchS2M_valid_driver = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_start_addr_driver = VL_RAND_RESET_I(32);
    AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_total_bytes_driver = VL_RAND_RESET_I(30);
    AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_burst_driver = VL_RAND_RESET_I(2);
    AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_id_driver = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_reset_driver = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core_cchM2S_valid_driver = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_start_addr_driver = VL_RAND_RESET_I(32);
    AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_total_bytes_driver = VL_RAND_RESET_I(30);
    AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_burst_driver = VL_RAND_RESET_I(2);
    AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_id_driver = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_reset_driver = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_r_ready = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string = VL_RAND_RESET_Q(56);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_occupancy = VL_RAND_RESET_I(5);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT___zz_when_BDMAs2m_l105 = VL_RAND_RESET_I(32);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT___zz_when_BDMAs2m_l140_1 = VL_RAND_RESET_I(32);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state = VL_RAND_RESET_I(2);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_valve = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_ready = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes = VL_RAND_RESET_I(30);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address = VL_RAND_RESET_I(32);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_burst_type = VL_RAND_RESET_I(2);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_id = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt = VL_RAND_RESET_I(30);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_len = VL_RAND_RESET_I(8);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_fire = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__when_BDMAs2m_l89 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_data = VL_RAND_RESET_I(32);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_strb = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_data = VL_RAND_RESET_I(32);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_strb = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_last = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_leak = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_finish = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len = VL_RAND_RESET_I(8);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__strb_mask = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__bytes_shift = VL_RAND_RESET_I(2);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_aw_fire_2 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_w_fire_1 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_b_fire = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__when_BDMAs2m_l335 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string = VL_RAND_RESET_Q(56);
    VL_RAND_RESET_W(72, AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string = VL_RAND_RESET_Q(56);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(49);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(49);
    }}
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(2);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(2);
    }}
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(2);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(2);
    }}
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(45);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(45);
    }}
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT___zz_when_BDMAm2s_l101 = VL_RAND_RESET_I(32);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT___zz_when_BDMAm2s_l136_1 = VL_RAND_RESET_I(32);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state = VL_RAND_RESET_I(2);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_ready = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes = VL_RAND_RESET_I(30);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address = VL_RAND_RESET_I(32);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_burst_type = VL_RAND_RESET_I(2);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_id = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt = VL_RAND_RESET_I(30);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_len = VL_RAND_RESET_I(8);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_fire = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__when_BDMAm2s_l85 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len = VL_RAND_RESET_I(8);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_id = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_strb = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_keep = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__keep_strb_mask = VL_RAND_RESET_I(4);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_ar_fire_2 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_r_fire = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(49);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(49);
    }}
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(2);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(2);
    }}
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(2);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(3);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(2);
    }}
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(45);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(45);
    }}
    __Vtableidx1 = 0;
    __Vtable1_AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string[0] = VL_ULL(0x49444c45202020);
    __Vtable1_AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string[1] = VL_ULL(0x50454e44494e47);
    __Vtable1_AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string[2] = VL_ULL(0x42555253542020);
    __Vtable1_AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string[3] = VL_ULL(0x52455350202020);
    __Vtable1_AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string[4] = VL_ULL(0x44524f50202020);
    __Vtable1_AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string[5] = VL_ULL(0x3f3f3f3f3f3f3f);
    __Vtable1_AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string[6] = VL_ULL(0x3f3f3f3f3f3f3f);
    __Vtable1_AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string[7] = VL_ULL(0x3f3f3f3f3f3f3f);
    __Vtableidx2 = 0;
    __Vtable2_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string[0] = VL_ULL(0x49444c45202020);
    __Vtable2_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string[1] = VL_ULL(0x50454e44494e47);
    __Vtable2_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string[2] = VL_ULL(0x42555253542020);
    __Vtable2_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string[3] = VL_ULL(0x52455350202020);
    __Vtable2_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string[4] = VL_ULL(0x44524f50202020);
    __Vtable2_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string[5] = VL_ULL(0x3f3f3f3f3f3f3f);
    __Vtable2_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string[6] = VL_ULL(0x3f3f3f3f3f3f3f);
    __Vtable2_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string[7] = VL_ULL(0x3f3f3f3f3f3f3f);
    __Vtableidx3 = 0;
    VL_CONST_W_3X(72,__Vtable3_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string[0],0x00000049,0x444c4520,0x20202020);
    VL_CONST_W_3X(72,__Vtable3_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string[1],0x00000046,0x49584544,0x5f524551);
    VL_CONST_W_3X(72,__Vtable3_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string[2],0x00000049,0x4e43525f,0x52455120);
    VL_CONST_W_3X(72,__Vtable3_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string[3],0x00000048,0x414c5420,0x20202020);
    __Vtableidx4 = 0;
    __Vtable4_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string[0] = VL_ULL(0x49444c45202020);
    __Vtable4_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string[1] = VL_ULL(0x50454e44494e47);
    __Vtable4_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string[2] = VL_ULL(0x42555253542020);
    __Vtable4_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string[3] = VL_ULL(0x52455350202020);
    __Vtable4_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string[4] = VL_ULL(0x44524f50202020);
    __Vtable4_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string[5] = VL_ULL(0x3f3f3f3f3f3f3f);
    __Vtable4_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string[6] = VL_ULL(0x3f3f3f3f3f3f3f);
    __Vtable4_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string[7] = VL_ULL(0x3f3f3f3f3f3f3f);
    __Vtableidx5 = 0;
    VL_CONST_W_3X(72,__Vtable5_AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string[0],0x00000049,0x444c4520,0x20202020);
    VL_CONST_W_3X(72,__Vtable5_AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string[1],0x00000046,0x49584544,0x5f524551);
    VL_CONST_W_3X(72,__Vtable5_AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string[2],0x00000049,0x4e43525f,0x52455120);
    VL_CONST_W_3X(72,__Vtable5_AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string[3],0x00000048,0x414c5420,0x20202020);
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state = VL_RAND_RESET_I(3);
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state = VL_RAND_RESET_I(2);
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec = VL_RAND_RESET_I(1);
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state = VL_RAND_RESET_I(2);
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec = VL_RAND_RESET_I(1);
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state = VL_RAND_RESET_I(1);
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes = VL_RAND_RESET_I(30);
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt = VL_RAND_RESET_I(30);
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address = VL_RAND_RESET_I(32);
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len = VL_RAND_RESET_I(8);
    __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_Q(45);
    __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram__v0 = 0;
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes = VL_RAND_RESET_I(30);
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt = VL_RAND_RESET_I(30);
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address = VL_RAND_RESET_I(32);
    __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len = VL_RAND_RESET_I(8);
    __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_Q(49);
    __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_Q(45);
    __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram__v0 = 0;
    __Vm_traceActivity = 0;
}
