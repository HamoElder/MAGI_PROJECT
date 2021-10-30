// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4DDS.h for the primary calling header

#include "VAxiLite4DDS.h"
#include "VAxiLite4DDS__Syms.h"

//==========

VL_CTOR_IMP(VAxiLite4DDS) {
    VAxiLite4DDS__Syms* __restrict vlSymsp = __VlSymsp = new VAxiLite4DDS__Syms(this, name());
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAxiLite4DDS::__Vconfigure(VAxiLite4DDS__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAxiLite4DDS::~VAxiLite4DDS() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VAxiLite4DDS::_initial__TOP__1(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_initial__TOP__1\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*287:0*/ __Vtemp1[9];
    WData/*287:0*/ __Vtemp2[9];
    // Body
    vlTOPp->axil4Ctrl_rresp = 0U;
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f6d656dU;
    __Vtemp1[2U] = 0x44535f32U;
    __Vtemp1[3U] = 0x656c5f64U;
    __Vtemp1[4U] = 0x706c6576U;
    __Vtemp1[5U] = 0x765f746fU;
    __Vtemp1[6U] = 0x4444532eU;
    __Vtemp1[7U] = 0x69746534U;
    __Vtemp1[8U] = 0x4178694cU;
    VL_READMEM_N(false, 24, 1024, 0, VL_CVT_PACK_STR_NW(9, __Vtemp1)
                 , vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__mem
                 , 0, ~VL_ULL(0));
    __Vtemp2[0U] = 0x2e62696eU;
    __Vtemp2[1U] = 0x5f6d656dU;
    __Vtemp2[2U] = 0x44535f33U;
    __Vtemp2[3U] = 0x656c5f64U;
    __Vtemp2[4U] = 0x706c6576U;
    __Vtemp2[5U] = 0x765f746fU;
    __Vtemp2[6U] = 0x4444532eU;
    __Vtemp2[7U] = 0x69746534U;
    __Vtemp2[8U] = 0x4178694cU;
    VL_READMEM_N(false, 24, 1024, 0, VL_CVT_PACK_STR_NW(9, __Vtemp2)
                 , vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__mem
                 , 0, ~VL_ULL(0));
}

void VAxiLite4DDS::_settle__TOP__8(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_settle__TOP__8\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4DDS__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4DDS__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->data_0_payload = vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_mem_port1;
    vlTOPp->data_0_valid = vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__valid_o_buf;
    vlTOPp->phase_0_payload = vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_phase_payload;
    vlTOPp->phase_0_valid = vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__valid_o_buf;
    vlTOPp->data_1_payload = vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_mem_port1;
    vlTOPp->data_1_valid = vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__valid_o_buf;
    vlTOPp->phase_1_payload = vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_phase_payload;
    vlTOPp->phase_1_valid = vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__valid_o_buf;
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4DDS__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4DDS__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4DDS__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__module_en 
        = ((IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf1) 
           & (IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkO_buf1));
    vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__module_en 
        = ((IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf1) 
           & (IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkO_buf1));
    vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_phase_cursor 
        = (0x3ffU & ((IData)(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor) 
                     + (IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkO_buf1)));
    vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__when_DDS_l53 
        = ((IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf1) 
           <= (IData)(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor));
    vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_phase_cursor 
        = (0x3ffU & ((IData)(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor) 
                     + (IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkO_buf1)));
    vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__when_DDS_l53 
        = ((IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf1) 
           <= (IData)(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor));
    vlTOPp->AxiLite4DDS__DOT__readRsp_data = 0U;
    if (((((((((0U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr)) 
               | (0xcU == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) 
              | (0x10U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) 
             | (0x14U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) 
            | (0x20U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) 
           | (0x2cU == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) 
          | (0x30U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) 
         | (0x34U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr)))) {
        if ((0U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->AxiLite4DDS__DOT__readRsp_data 
                = ((0xfffffffeU & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                   | (IData)(vlTOPp->AxiLite4DDS__DOT__global_en_driver));
            vlTOPp->AxiLite4DDS__DOT__readRsp_data 
                = ((0xfffffffdU & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                   | ((IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data) 
                      << 1U));
        } else {
            vlTOPp->AxiLite4DDS__DOT__readRsp_data 
                = ((0xcU == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))
                    ? ((0xfffffc00U & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                       | (IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_1))
                    : ((0x10U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))
                        ? ((0xfffffc00U & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                           | (IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_2))
                        : ((0x14U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))
                            ? ((0xfffffc00U & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                               | (IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_3))
                            : ((0x20U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))
                                ? ((0xfffffffdU & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                                   | ((IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_4) 
                                      << 1U)) : ((0xfffffc00U 
                                                  & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                                                 | ((0x2cU 
                                                     == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))
                                                     ? (IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_5)
                                                     : 
                                                    ((0x30U 
                                                      == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))
                                                      ? (IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_6)
                                                      : (IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_7))))))));
        }
    }
    vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire = 
        ((IData)(vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_valid) 
         & (IData)(vlTOPp->AxiLite4DDS__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4DDS__DOT__readRsp_data;
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire;
}

void VAxiLite4DDS::_eval_initial(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_eval_initial\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rf_clk = vlTOPp->rf_clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VAxiLite4DDS::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::final\n"); );
    // Variables
    VAxiLite4DDS__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAxiLite4DDS::_eval_settle(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_eval_settle\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__8(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAxiLite4DDS::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_ctor_var_reset\n"); );
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
    data_0_valid = VL_RAND_RESET_I(1);
    data_0_payload = VL_RAND_RESET_I(24);
    data_1_valid = VL_RAND_RESET_I(1);
    data_1_payload = VL_RAND_RESET_I(24);
    phase_0_valid = VL_RAND_RESET_I(1);
    phase_0_payload = VL_RAND_RESET_I(10);
    phase_1_valid = VL_RAND_RESET_I(1);
    phase_1_payload = VL_RAND_RESET_I(10);
    rf_clk = VL_RAND_RESET_I(1);
    rf_resetn = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__writeJoinEvent_fire = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    AxiLite4DDS__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    AxiLite4DDS__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    AxiLite4DDS__DOT__readRsp_data = VL_RAND_RESET_I(32);
    AxiLite4DDS__DOT__global_en_driver = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT___zz_readRsp_data = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT___zz_dataIn = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT___zz_dataIn_1 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT___zz_dataIn_2 = VL_RAND_RESET_I(24);
    AxiLite4DDS__DOT___zz_readRsp_data_1 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT___zz_readRsp_data_2 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT___zz_readRsp_data_3 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT___zz_readRsp_data_4 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT___zz_dataIn_3 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT___zz_dataIn_4 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT___zz_dataIn_5 = VL_RAND_RESET_I(24);
    AxiLite4DDS__DOT___zz_readRsp_data_5 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT___zz_readRsp_data_6 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT___zz_readRsp_data_7 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__dDS_2__DOT___zz_mem_port1 = VL_RAND_RESET_I(24);
    AxiLite4DDS__DOT__dDS_2__DOT___zz_phase_cursor = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__dDS_2__DOT__module_en = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__dDS_2__DOT__when_DDS_l53 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__dDS_2__DOT__valid_o_buf = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__dDS_2__DOT___zz_phase_payload = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            AxiLite4DDS__DOT__dDS_2__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }}
    AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkI_reg = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkO_buf0 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkO_buf1 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkI_reg = VL_RAND_RESET_I(24);
    AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkO_buf0 = VL_RAND_RESET_I(24);
    AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkO_buf1 = VL_RAND_RESET_I(24);
    AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkI_reg = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkO_buf0 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkO_buf1 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkI_reg = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkO_buf0 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkO_buf1 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkI_reg = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf0 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf1 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__dDS_3__DOT___zz_mem_port1 = VL_RAND_RESET_I(24);
    AxiLite4DDS__DOT__dDS_3__DOT___zz_phase_cursor = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__dDS_3__DOT__module_en = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__dDS_3__DOT__when_DDS_l53 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__dDS_3__DOT__valid_o_buf = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__dDS_3__DOT___zz_phase_payload = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            AxiLite4DDS__DOT__dDS_3__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }}
    AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkI_reg = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkO_buf0 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkO_buf1 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkI_reg = VL_RAND_RESET_I(24);
    AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkO_buf0 = VL_RAND_RESET_I(24);
    AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkO_buf1 = VL_RAND_RESET_I(24);
    AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkI_reg = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkO_buf0 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkO_buf1 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkI_reg = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkO_buf0 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkO_buf1 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkI_reg = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkO_buf0 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkO_buf1 = VL_RAND_RESET_I(1);
    AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkI_reg = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf0 = VL_RAND_RESET_I(10);
    AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf1 = VL_RAND_RESET_I(10);
    __Vm_traceActivity = 0;
}
