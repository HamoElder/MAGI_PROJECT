// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAXILITE4BDMA_H_
#define _VAXILITE4BDMA_H_  // guard

#include "verilated.h"

//==========

class VAxiLite4BDMA__Syms;
class VAxiLite4BDMA_VerilatedVcd;


//----------

VL_MODULE(VAxiLite4BDMA) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(axil4Ctrl_awvalid,0,0);
    VL_OUT8(axil4Ctrl_awready,0,0);
    VL_IN8(axil4Ctrl_awaddr,7,0);
    VL_IN8(axil4Ctrl_awprot,2,0);
    VL_IN8(axil4Ctrl_wvalid,0,0);
    VL_OUT8(axil4Ctrl_wready,0,0);
    VL_IN8(axil4Ctrl_wstrb,3,0);
    VL_OUT8(axil4Ctrl_bvalid,0,0);
    VL_IN8(axil4Ctrl_bready,0,0);
    VL_OUT8(axil4Ctrl_bresp,1,0);
    VL_IN8(axil4Ctrl_arvalid,0,0);
    VL_OUT8(axil4Ctrl_arready,0,0);
    VL_IN8(axil4Ctrl_araddr,7,0);
    VL_IN8(axil4Ctrl_arprot,2,0);
    VL_OUT8(axil4Ctrl_rvalid,0,0);
    VL_IN8(axil4Ctrl_rready,0,0);
    VL_OUT8(axil4Ctrl_rresp,1,0);
    VL_OUT8(axi4S2M_awvalid,0,0);
    VL_IN8(axi4S2M_awready,0,0);
    VL_OUT8(axi4S2M_awid,3,0);
    VL_OUT8(axi4S2M_awlen,7,0);
    VL_OUT8(axi4S2M_awsize,2,0);
    VL_OUT8(axi4S2M_awburst,1,0);
    VL_OUT8(axi4S2M_wvalid,0,0);
    VL_IN8(axi4S2M_wready,0,0);
    VL_OUT8(axi4S2M_wstrb,3,0);
    VL_OUT8(axi4S2M_wlast,0,0);
    VL_IN8(axi4S2M_bvalid,0,0);
    VL_OUT8(axi4S2M_bready,0,0);
    VL_IN8(axi4S2M_bid,3,0);
    VL_IN8(axi4S2M_bresp,1,0);
    VL_OUT8(axi4S2M_arvalid,0,0);
    VL_IN8(axi4S2M_arready,0,0);
    VL_OUT8(axi4S2M_arid,3,0);
    VL_OUT8(axi4S2M_arlen,7,0);
    VL_OUT8(axi4S2M_arsize,2,0);
    VL_OUT8(axi4S2M_arburst,1,0);
    VL_IN8(axi4S2M_rvalid,0,0);
    VL_OUT8(axi4S2M_rready,0,0);
    VL_IN8(axi4S2M_rid,3,0);
    VL_IN8(axi4S2M_rresp,1,0);
    VL_IN8(axi4S2M_rlast,0,0);
    VL_OUT8(axi4M2S_awvalid,0,0);
    VL_IN8(axi4M2S_awready,0,0);
    VL_OUT8(axi4M2S_awid,3,0);
    VL_OUT8(axi4M2S_awlen,7,0);
    VL_OUT8(axi4M2S_awsize,2,0);
    VL_OUT8(axi4M2S_awburst,1,0);
    VL_OUT8(axi4M2S_wvalid,0,0);
    VL_IN8(axi4M2S_wready,0,0);
    VL_OUT8(axi4M2S_wstrb,3,0);
    VL_OUT8(axi4M2S_wlast,0,0);
    VL_IN8(axi4M2S_bvalid,0,0);
    VL_OUT8(axi4M2S_bready,0,0);
    VL_IN8(axi4M2S_bid,3,0);
    VL_IN8(axi4M2S_bresp,1,0);
    VL_OUT8(axi4M2S_arvalid,0,0);
    VL_IN8(axi4M2S_arready,0,0);
    VL_OUT8(axi4M2S_arid,3,0);
    VL_OUT8(axi4M2S_arlen,7,0);
    VL_OUT8(axi4M2S_arsize,2,0);
    VL_OUT8(axi4M2S_arburst,1,0);
    VL_IN8(axi4M2S_rvalid,0,0);
    VL_OUT8(axi4M2S_rready,0,0);
    VL_IN8(axi4M2S_rid,3,0);
    VL_IN8(axi4M2S_rresp,1,0);
    VL_IN8(axi4M2S_rlast,0,0);
    VL_IN8(dataS2M_tvalid,0,0);
    VL_OUT8(dataS2M_tready,0,0);
    VL_IN8(dataS2M_tid,3,0);
    VL_IN8(dataS2M_tstrb,3,0);
    VL_IN8(dataS2M_tkeep,3,0);
    VL_IN8(dataS2M_tlast,0,0);
    VL_OUT8(dataM2S_tvalid,0,0);
    VL_IN8(dataM2S_tready,0,0);
    VL_OUT8(dataM2S_tid,3,0);
    VL_OUT8(dataM2S_tstrb,3,0);
    VL_OUT8(dataM2S_tkeep,3,0);
    VL_OUT8(dataM2S_tlast,0,0);
    VL_OUT8(intrS2M,0,0);
    VL_OUT8(intrM2S,0,0);
    VL_IN(axil4Ctrl_wdata,31,0);
    VL_OUT(axil4Ctrl_rdata,31,0);
    VL_OUT(axi4S2M_awaddr,31,0);
    VL_OUT(axi4S2M_wdata,31,0);
    VL_OUT(axi4S2M_araddr,31,0);
    VL_IN(axi4S2M_rdata,31,0);
    VL_OUT(axi4M2S_awaddr,31,0);
    VL_OUT(axi4M2S_wdata,31,0);
    VL_OUT(axi4M2S_araddr,31,0);
    VL_IN(axi4M2S_rdata,31,0);
    VL_IN(dataS2M_tdata,31,0);
    VL_OUT(dataM2S_tdata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ AxiLite4BDMA__DOT__writeJoinEvent_valid;
        CData/*0:0*/ AxiLite4BDMA__DOT__writeJoinEvent_fire;
        CData/*0:0*/ AxiLite4BDMA__DOT___zz_writeJoinEvent_translated_ready;
        CData/*0:0*/ AxiLite4BDMA__DOT___zz_axil4Ctrl_bvalid_2;
        CData/*1:0*/ AxiLite4BDMA__DOT___zz_axil4Ctrl_bresp;
        CData/*0:0*/ AxiLite4BDMA__DOT__axil4Ctrl_ar_rValid;
        CData/*7:0*/ AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr;
        CData/*2:0*/ AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_prot;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core_cchS2M_valid_driver;
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_burst_driver;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_id_driver;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_reset_driver;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core_cchM2S_valid_driver;
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_burst_driver;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_id_driver;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_reset_driver;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_r_ready;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo_io_pop_valid;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid;
        CData/*4:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_occupancy;
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_valve;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_ready;
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_burst_type;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_id;
        CData/*7:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_len;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_fire;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__when_BDMAs2m_l89;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_strb;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_strb;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_last;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_leak;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_finish;
        CData/*7:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__strb_mask;
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__bytes_shift;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_aw_fire_2;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_w_fire_1;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_b_fire;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__when_BDMAs2m_l335;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_1;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popping;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid;
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_logic_ram_port0;
    };
    struct {
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_1;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popping;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid;
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_1;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popping;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_1;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_pop_valid;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid;
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_ready;
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_burst_type;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_id;
        CData/*7:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_len;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_fire;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__when_BDMAm2s_l85;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve;
        CData/*7:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_id;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_strb;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_keep;
        CData/*3:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__keep_strb_mask;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_ar_fire_2;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_r_fire;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_1;
    };
    struct {
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popping;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid;
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_1;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popping;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid;
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_1;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext;
        CData/*2:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popping;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_1;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popping;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full;
        CData/*0:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_io_pop_valid;
        IData/*31:0*/ AxiLite4BDMA__DOT__readRsp_data;
        IData/*31:0*/ AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_start_addr_driver;
        IData/*29:0*/ AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_total_bytes_driver;
        IData/*31:0*/ AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_start_addr_driver;
        IData/*29:0*/ AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_total_bytes_driver;
        IData/*31:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT___zz_when_BDMAs2m_l105;
        IData/*31:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT___zz_when_BDMAs2m_l140_1;
        IData/*29:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes;
        IData/*31:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address;
        IData/*29:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt;
        IData/*31:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_data;
        IData/*31:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_data;
    };
    struct {
        WData/*71:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string[3];
        IData/*31:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT___zz_when_BDMAm2s_l101;
        IData/*31:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT___zz_when_BDMAm2s_l136_1;
        IData/*29:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes;
        IData/*31:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address;
        IData/*29:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt;
        WData/*71:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string[3];
        QData/*55:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string;
        QData/*55:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string;
        QData/*55:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string;
        QData/*48:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0;
        QData/*44:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0;
        QData/*48:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0;
        QData/*44:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0;
        QData/*48:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[8];
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[8];
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[8];
        QData/*44:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[16];
        QData/*48:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[8];
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[8];
        CData/*1:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[8];
        QData/*44:0*/ AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[32];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    CData/*1:0*/ __Vtableidx3;
    CData/*2:0*/ __Vtableidx4;
    CData/*1:0*/ __Vtableidx5;
    CData/*2:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state;
    CData/*1:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state;
    CData/*0:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec;
    CData/*1:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state;
    CData/*0:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec;
    CData/*0:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state;
    CData/*7:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len;
    CData/*0:0*/ __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram__v0;
    CData/*2:0*/ __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    CData/*3:0*/ __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len;
    CData/*2:0*/ __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram__v0;
    CData/*2:0*/ __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram__v0;
    CData/*2:0*/ __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*29:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes;
    IData/*29:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt;
    IData/*31:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address;
    IData/*29:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes;
    IData/*29:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt;
    IData/*31:0*/ __Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address;
    IData/*31:0*/ __Vm_traceActivity;
    QData/*44:0*/ __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram__v0;
    QData/*48:0*/ __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram__v0;
    QData/*44:0*/ __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram__v0;
    static QData/*55:0*/ __Vtable1_AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string[8];
    static QData/*55:0*/ __Vtable2_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string[8];
    static WData/*71:0*/ __Vtable3_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string[4][3];
    static QData/*55:0*/ __Vtable4_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string[8];
    static WData/*71:0*/ __Vtable5_AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string[4][3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAxiLite4BDMA__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAxiLite4BDMA);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAxiLite4BDMA(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAxiLite4BDMA();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAxiLite4BDMA__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAxiLite4BDMA__Syms* symsp, bool first);
  private:
    static QData _change_request(VAxiLite4BDMA__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAxiLite4BDMA__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__15(VAxiLite4BDMA__Syms* __restrict vlSymsp);
    static void _combo__TOP__17(VAxiLite4BDMA__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAxiLite4BDMA__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAxiLite4BDMA__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAxiLite4BDMA__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VAxiLite4BDMA__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VAxiLite4BDMA__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VAxiLite4BDMA__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VAxiLite4BDMA__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VAxiLite4BDMA__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VAxiLite4BDMA__Syms* __restrict vlSymsp);
    static void _sequent__TOP__16(VAxiLite4BDMA__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VAxiLite4BDMA__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VAxiLite4BDMA__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VAxiLite4BDMA__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VAxiLite4BDMA__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__3(VAxiLite4BDMA__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__4(VAxiLite4BDMA__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__11(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__6(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__2(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
