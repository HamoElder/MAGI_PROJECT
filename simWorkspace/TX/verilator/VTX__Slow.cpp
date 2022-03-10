// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTX.h for the primary calling header

#include "VTX.h"
#include "VTX__Syms.h"

//==========

VL_CTOR_IMP(VTX) {
    VTX__Syms* __restrict vlSymsp = __VlSymsp = new VTX__Syms(this, name());
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTX::__Vconfigure(VTX__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTX::~VTX() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VTX::_initial__TOP__1(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_initial__TOP__1\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_rresp = 0U;
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(9);
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(17);
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(9);
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(17);
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(9);
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(17);
    vlTOPp->TX__DOT__streamFifo_7__DOT____Vxrand1 = 
        VL_RAND_RESET_I(17);
}

void VTX::_settle__TOP__11(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__11\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->TX__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->TX__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->TX__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->raw_data_tready = (0U == (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->TX__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_payload_fragment = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_payload_fragment 
            = (0xffffU & ((1U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))
                           ? (0x5500U | (0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__counter) 
                                                  << 1U)))
                           : (vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0 
                              >> 1U)));
    }
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_result_2 
        = ((0x100000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                             >> 0xbU)) << 0x14U)) | 
           ((0x80000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                             >> 0xcU)) << 0x13U)) | 
            ((0x40000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                              >> 0xdU)) << 0x12U)) 
             | ((0x20000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                 >> 0xeU)) << 0x11U)) 
                | ((0x10000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                    >> 0xfU)) << 0x10U)) 
                   | ((0x8000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                      >> 0x10U)) << 0xfU)) 
                      | ((0x4000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                         >> 0x11U)) 
                                     << 0xeU)) | ((0x2000U 
                                                   & ((~ 
                                                       (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                        >> 0x12U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                           >> 0x13U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1fU)))))))))))))))))))))));
    vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
        if ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready 
                = vlTOPp->coded_data_ready;
        }
    }
    vlTOPp->TX__DOT__phy_tx_padder__DOT__fill = ((0U 
                                                  != (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__counter)) 
                                                 & (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__raw_data_payload_first));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_header_extender_result_data_payload_last = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
            vlTOPp->TX__DOT__phy_header_extender_result_data_payload_last 
                = (1U & vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0);
        }
    }
    vlTOPp->coded_data_payload_last = (1U & vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->TX__DOT__phy_tx_crc__DOT__when_PhyTx_l23 
        = (1U & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc)));
    vlTOPp->coded_data_payload_fragment = (0xffffU 
                                           & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data) 
                                              ^ (vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_logic_ram_port0 
                                                 >> 1U)));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_payload_last = 0U;
    if (vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc) {
        if ((3U == (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__counter))) {
            vlTOPp->TX__DOT__phy_tx_crc_result_data_payload_last = 1U;
        }
    }
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 1U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding)
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U)));
    vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_tvalid) & (0U == (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt)));
    vlTOPp->TX__DOT__writeJoinEvent_valid = ((IData)(vlTOPp->axil4Ctrl_awvalid) 
                                             & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->TX__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->TX__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->TX__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->TX__DOT__stream_package_gen__DOT___zz_pkg_slices_cnt 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__pkg_slices_cnt)));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_payload_last 
        = (((IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__pkg_slices_cnt) 
            == (0x7fU & ((IData)(vlTOPp->TX__DOT__clkCrossing_2__DOT__area_clkO_buf1) 
                         - (IData)(1U)))) | ((IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__raw_data_last) 
                                             & (1U 
                                                == (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__strb_buf))));
    vlTOPp->TX__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->TX__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->TX__DOT__readRsp_data = ((0xffffff80U 
                                          & vlTOPp->TX__DOT__readRsp_data) 
                                         | (IData)(vlTOPp->TX__DOT_____05Fslices_limit_driver));
    } else {
        if ((4U == (IData)(vlTOPp->TX__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->TX__DOT__readRsp_data = ((0xffffff80U 
                                              & vlTOPp->TX__DOT__readRsp_data) 
                                             | (IData)(vlTOPp->TX__DOT__clkCrossing_3__DOT__area_clkO_buf1));
        }
    }
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1_result 
        = ((0x80000000U & ((~ vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state) 
                           << 0x1fU)) | ((0x40000000U 
                                          & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                 >> 1U)) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((~ 
                                                 (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                  >> 2U)) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & ((~ 
                                                    (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                     >> 3U)) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & ((~ 
                                                       (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                        >> 4U)) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & ((~ 
                                                          (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                           >> 5U)) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & ((~ 
                                                             (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                              >> 6U)) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & ((~ 
                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                 >> 7U)) 
                                                               << 0x18U)) 
                                                           | ((0x800000U 
                                                               & ((~ 
                                                                   (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                    >> 8U)) 
                                                                  << 0x17U)) 
                                                              | ((0x400000U 
                                                                  & ((~ 
                                                                      (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                       >> 9U)) 
                                                                     << 0x16U)) 
                                                                 | ((0x200000U 
                                                                     & ((~ 
                                                                         (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                          >> 0xaU)) 
                                                                        << 0x15U)) 
                                                                    | vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_result_2)))))))))));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_fragment 
        = (0xffU & ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0) 
                    >> 1U));
    if (vlTOPp->TX__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_fragment = 0U;
    }
    vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_last 
        = (1U & (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0));
    if ((7U != (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__counter))) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_last = 0U;
    }
    if (vlTOPp->TX__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_last 
            = (7U == (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__counter));
    }
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0 
        = (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
            << 1U) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0));
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_risingOccupancy));
}

void VTX::_settle__TOP__12(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__12\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 7U)) | (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf));
    vlTOPp->TX__DOT__writeJoinEvent_fire = ((IData)(vlTOPp->TX__DOT__writeJoinEvent_valid) 
                                            & (IData)(vlTOPp->TX__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->TX__DOT__readRsp_data;
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data_valid_1) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_valid_1) 
           & (~ (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_full)));
    vlTOPp->TX__DOT__streamFifo_7_io_pop_valid = (1U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_ptrMatch) 
                                                       & (~ (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_risingOccupancy)))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT___zz_io_pop_valid) 
                                                         & (~ (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_crc_raw_data_ready = (1U 
                                                  & ((~ (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc)) 
                                                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full))));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
            vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready 
                = (1U & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full)));
        }
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing 
        = (((0U != (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
            & (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__strb_buf)) 
           & (~ (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__stream_package_gen__DOT__split_core_split_data_fire 
        = ((0U != (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
           & (~ (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_header_extender_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full)) 
                 & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__emitHeader))));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_padder_raw_data_ready = 
        (1U & ((~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full)) 
               & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__fill))));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 6U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                         >> 1U)));
    vlTOPp->axil4Ctrl_awready = vlTOPp->TX__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->TX__DOT__writeJoinEvent_fire;
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1));
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo_io_pop_valid) {
        vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__streamFifo_7__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushing) {
        vlTOPp->TX__DOT__streamFifo_7__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushing) {
        vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing 
        = (((IData)(vlTOPp->TX__DOT__streamFifo_7_io_pop_valid) 
            & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__emitHeader))) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__when_PhyTx_l79 
        = (((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo_io_pop_valid) 
            & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding))) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_logic_ram_port0));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding) 
           | (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo_io_pop_valid));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo_io_pop_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid 
        = (1U & ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
                  ? (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid))
                  : (1U != (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready 
        = ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
            ? (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid)
            : ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status)) 
               & ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid) 
                  & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready))));
    vlTOPp->TX__DOT__phy_tx_scrambler_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
        if ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            vlTOPp->TX__DOT__phy_tx_scrambler_result_data_valid 
                = ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid) 
                   & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid));
        }
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_padder_result_data_valid 
        = ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__fill)));
    if (vlTOPp->TX__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_valid = 1U;
    }
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__streamFifo_7_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__phy_header_extender_raw_data_ready));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready));
    vlTOPp->TX__DOT__phy_header_extender_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_valid 
            = ((1U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status)) 
               | (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid));
    }
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_padder_raw_data_ready));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_crc_raw_data_ready));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_valid = 
        ((IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc) 
         | (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo_io_pop_valid));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 4U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 5U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 1U)));
}

void VTX::_settle__TOP__13(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__13\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__when_PhyTx_l79_1 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->coded_data_valid = vlTOPp->TX__DOT__phy_tx_scrambler_result_data_valid;
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_padder__DOT__when_PhyTx_l55 
        = ((7U != (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__counter)) 
           & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_valid) 
              & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full))));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popping) {
        vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 5U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 4U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                         >> 1U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_valueNext 
        = (((0x85U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext 
        = (((0x85U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 6U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 3U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                         >> 1U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 7U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 2U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 1U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 8U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
}

void VTX::_settle__TOP__14(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__14\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 1U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 1U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_resultNext_2 
        = ((0x100000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                             >> 0xbU)) << 0x14U)) | 
           ((0x80000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                             >> 0xcU)) << 0x13U)) | 
            ((0x40000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                              >> 0xdU)) << 0x12U)) 
             | ((0x20000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                 >> 0xeU)) << 0x11U)) 
                | ((0x10000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                    >> 0xfU)) << 0x10U)) 
                   | ((0x8000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                      >> 0x10U)) << 0xfU)) 
                      | ((0x4000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                         >> 0x11U)) 
                                     << 0xeU)) | ((0x2000U 
                                                   & ((~ 
                                                       (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                        >> 0x12U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                           >> 0x13U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1fU)))))))))))))))))))))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7 
        = ((0x80U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment)) 
           | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                       >> 1U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfeU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (1U & ((((((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 1U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                  >> 2U)) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                             >> 4U)) 
                     ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 5U)) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                   >> 7U))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfdU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (2U & (((((0xfffffffeU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1)) 
                       ^ (0x7ffffffeU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 1U))) ^ 
                      (0x1ffffffeU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                      >> 3U))) ^ (0xffffffeU 
                                                  & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                                     >> 4U))) 
                    ^ (0x3fffffeU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 6U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfbU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (4U & (((((0xfffffffcU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                       << 1U)) ^ (0xfffffffcU 
                                                  & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2))) 
                      ^ (0x3ffffffcU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                        >> 2U))) ^ 
                     (0x1ffffffcU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                     >> 3U))) ^ (0x7fffffcU 
                                                 & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                    >> 5U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xf7U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (8U & (((((0xfffffff8U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                       << 2U)) ^ (0xfffffff8U 
                                                  & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                     << 1U))) 
                      ^ (0x7ffffff8U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                        >> 1U))) ^ 
                     (0x3ffffff8U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                     >> 2U))) ^ (0xffffff8U 
                                                 & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                    >> 4U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xefU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x10U & (((((0xfffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 3U)) ^ 
                          (0xfffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 2U))) 
                         ^ (0xfffffff0U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4))) 
                        ^ (0x7ffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          >> 1U))) 
                       ^ (0x1ffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 3U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xdfU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x20U & (((((0xffffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 4U)) ^ 
                          (0xffffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 3U))) 
                         ^ (0xffffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                           << 1U))) 
                        ^ (0xffffffe0U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5))) 
                       ^ (0x3fffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 2U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xbfU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x40U & (((((0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 5U)) ^ 
                          (0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 4U))) 
                         ^ (0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                           << 2U))) 
                        ^ (0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 1U))) 
                       ^ (0x7fffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                         >> 1U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x80U & (((((0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 6U)) ^ 
                          (0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 5U))) 
                         ^ (0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                           << 3U))) 
                        ^ (0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 2U))) 
                       ^ (0xffffff80U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfeU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (1U & ((((((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 1U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                  >> 4U)) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                             >> 5U)) 
                     ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 6U)) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                   >> 7U))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfdU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (2U & (((((0xfffffffeU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1)) 
                       ^ (0x1ffffffeU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 3U))) ^ 
                      (0xffffffeU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 4U))) ^ (0x7fffffeU 
                                                 & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                                    >> 5U))) 
                    ^ (0x3fffffeU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 6U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfbU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (4U & (((((0xfffffffcU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                       << 1U)) ^ (0x3ffffffcU 
                                                  & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                     >> 2U))) 
                      ^ (0x1ffffffcU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                        >> 3U))) ^ 
                     (0xffffffcU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                    >> 4U))) ^ (0x7fffffcU 
                                                & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                   >> 5U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xf7U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (8U & (((((0xfffffff8U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                       << 2U)) ^ (0x7ffffff8U 
                                                  & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                     >> 1U))) 
                      ^ (0x3ffffff8U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                        >> 2U))) ^ 
                     (0x1ffffff8U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                     >> 3U))) ^ (0xffffff8U 
                                                 & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                    >> 4U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xefU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x10U & (((((0xfffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 3U)) ^ 
                          (0xfffffff0U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4))) 
                         ^ (0x7ffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                           >> 1U))) 
                        ^ (0x3ffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          >> 2U))) 
                       ^ (0x1ffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 3U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xdfU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x20U & (((((0xffffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 4U)) ^ 
                          (0xffffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 1U))) 
                         ^ (0xffffffe0U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5))) 
                        ^ (0x7fffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          >> 1U))) 
                       ^ (0x3fffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 2U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xbfU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x40U & (((((0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 5U)) ^ 
                          (0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 2U))) 
                         ^ (0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                           << 1U))) 
                        ^ (0xffffffc0U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6))) 
                       ^ (0x7fffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                         >> 1U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x80U & (((((0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 6U)) ^ 
                          (0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 3U))) 
                         ^ (0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                           << 2U))) 
                        ^ (0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 1U))) 
                       ^ (0xffffff80U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7)))));
}

void VTX::_settle__TOP__15(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__15\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                            >> 3U)));
}

void VTX::_eval_initial(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_eval_initial\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VTX::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::final\n"); );
    // Variables
    VTX__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTX::_eval_settle(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_eval_settle\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__12(vlSymsp);
    vlTOPp->_settle__TOP__13(vlSymsp);
    vlTOPp->_settle__TOP__14(vlSymsp);
    vlTOPp->_settle__TOP__15(vlSymsp);
}

void VTX::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_ctor_var_reset\n"); );
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
    raw_data_tvalid = VL_RAND_RESET_I(1);
    raw_data_tready = VL_RAND_RESET_I(1);
    raw_data_tdata = VL_RAND_RESET_I(32);
    raw_data_tstrb = VL_RAND_RESET_I(4);
    raw_data_tkeep = VL_RAND_RESET_I(4);
    raw_data_tlast = VL_RAND_RESET_I(1);
    coded_data_valid = VL_RAND_RESET_I(1);
    coded_data_ready = VL_RAND_RESET_I(1);
    coded_data_payload_last = VL_RAND_RESET_I(1);
    coded_data_payload_fragment = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    TX__DOT__stream_package_gen_pkg_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_payload_fragment = VL_RAND_RESET_I(8);
    TX__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder_result_data_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_payload_fragment = VL_RAND_RESET_I(16);
    TX__DOT__streamFifo_7_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    TX__DOT__writeJoinEvent_fire = VL_RAND_RESET_I(1);
    TX__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    TX__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    TX__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    TX__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    TX__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    TX__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    TX__DOT__readRsp_data = VL_RAND_RESET_I(32);
    TX__DOT_____05Fslices_limit_driver = VL_RAND_RESET_I(7);
    TX__DOT__stream_package_gen__DOT___zz_pkg_slices_cnt = VL_RAND_RESET_I(7);
    TX__DOT__stream_package_gen__DOT__strb_buf = VL_RAND_RESET_I(4);
    TX__DOT__stream_package_gen__DOT__pkg_slices_cnt = VL_RAND_RESET_I(7);
    TX__DOT__stream_package_gen__DOT__raw_data_last = VL_RAND_RESET_I(1);
    TX__DOT__stream_package_gen__DOT__split_core_split_data_fire = VL_RAND_RESET_I(1);
    TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt = VL_RAND_RESET_I(3);
    TX__DOT__stream_package_gen__DOT__split_core__DOT__data_buf = VL_RAND_RESET_I(32);
    TX__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder__DOT__counter = VL_RAND_RESET_I(3);
    TX__DOT__phy_tx_padder__DOT__raw_data_payload_first = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder__DOT__fill = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder__DOT__when_PhyTx_l55 = VL_RAND_RESET_I(1);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT____Vxrand1 = VL_RAND_RESET_I(9);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(9);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<200; ++__Vi0) {
            TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(9);
    }}
    TX__DOT__stream_package_gen_pkg_data_fifo__DOT____Vlvbound2 = VL_RAND_RESET_I(9);
    TX__DOT__phy_tx_crc__DOT__crc_1_result = VL_RAND_RESET_I(32);
    TX__DOT__phy_tx_crc__DOT__emitCrc = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc__DOT__counter = VL_RAND_RESET_I(2);
    TX__DOT__phy_tx_crc__DOT__when_PhyTx_l23 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_result_2 = VL_RAND_RESET_I(21);
    TX__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_resultNext_2 = VL_RAND_RESET_I(21);
    TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 = VL_RAND_RESET_I(32);
    TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 = VL_RAND_RESET_I(32);
    TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 = VL_RAND_RESET_I(32);
    TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 = VL_RAND_RESET_I(32);
    TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 = VL_RAND_RESET_I(32);
    TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 = VL_RAND_RESET_I(32);
    TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 = VL_RAND_RESET_I(32);
    TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 = VL_RAND_RESET_I(32);
    TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state = VL_RAND_RESET_I(32);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT____Vxrand1 = VL_RAND_RESET_I(9);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(9);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<200; ++__Vi0) {
            TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(9);
    }}
    TX__DOT__phy_tx_padder_result_data_fifo__DOT____Vlvbound2 = VL_RAND_RESET_I(9);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder__DOT__emitEncoding = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder__DOT__when_PhyTx_l79 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder__DOT__when_PhyTx_l79_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data = VL_RAND_RESET_I(16);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data_valid_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__raw_data_payload_last_regNext = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT____Vxrand1 = VL_RAND_RESET_I(9);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(9);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<200; ++__Vi0) {
            TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(9);
    }}
    TX__DOT__phy_tx_crc_result_data_fifo__DOT____Vlvbound2 = VL_RAND_RESET_I(9);
    TX__DOT__phy_tx_puncher__DOT__raw_data_fragment = VL_RAND_RESET_I(16);
    TX__DOT__phy_tx_puncher__DOT__raw_data_valid_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_puncher__DOT__raw_data_last = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT____Vxrand1 = VL_RAND_RESET_I(17);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(17);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<200; ++__Vi0) {
            TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(17);
    }}
    TX__DOT__phy_tx_encoder_result_data_fifo__DOT____Vlvbound2 = VL_RAND_RESET_I(17);
    TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__counter = VL_RAND_RESET_I(8);
    TX__DOT__phy_header_extender__DOT__emitHeader = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__header_status = VL_RAND_RESET_I(2);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT____Vxrand1 = VL_RAND_RESET_I(17);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(17);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<134; ++__Vi0) {
            TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(17);
    }}
    TX__DOT__phy_header_extender__DOT__dataFifo__DOT____Vlvbound2 = VL_RAND_RESET_I(17);
    TX__DOT__streamFifo_7__DOT____Vxrand1 = VL_RAND_RESET_I(17);
    TX__DOT__streamFifo_7__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(17);
    TX__DOT__streamFifo_7__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__streamFifo_7__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__streamFifo_7__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__streamFifo_7__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__streamFifo_7__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__streamFifo_7__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__streamFifo_7__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__streamFifo_7__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__streamFifo_7__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__streamFifo_7__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__streamFifo_7__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<200; ++__Vi0) {
            TX__DOT__streamFifo_7__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(17);
    }}
    TX__DOT__streamFifo_7__DOT____Vlvbound2 = VL_RAND_RESET_I(17);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_status = VL_RAND_RESET_I(2);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data = VL_RAND_RESET_I(16);
    TX__DOT__phy_header_extender_result_data_fifo__DOT____Vxrand1 = VL_RAND_RESET_I(17);
    TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(17);
    TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<200; ++__Vi0) {
            TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(17);
    }}
    TX__DOT__phy_header_extender_result_data_fifo__DOT____Vlvbound2 = VL_RAND_RESET_I(17);
    TX__DOT__clkCrossing_2__DOT__area_clkI_reg = VL_RAND_RESET_I(7);
    TX__DOT__clkCrossing_2__DOT__area_clkO_buf0 = VL_RAND_RESET_I(7);
    TX__DOT__clkCrossing_2__DOT__area_clkO_buf1 = VL_RAND_RESET_I(7);
    TX__DOT__clkCrossing_3__DOT__area_clkI_reg = VL_RAND_RESET_I(7);
    TX__DOT__clkCrossing_3__DOT__area_clkO_buf0 = VL_RAND_RESET_I(7);
    TX__DOT__clkCrossing_3__DOT__area_clkO_buf1 = VL_RAND_RESET_I(7);
    __Vdly__TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__TX__DOT__phy_tx_padder__DOT__counter = VL_RAND_RESET_I(3);
    __Vdly__TX__DOT__phy_tx_crc__DOT__counter = VL_RAND_RESET_I(2);
    __Vdly__TX__DOT__phy_header_extender__DOT__header_status = VL_RAND_RESET_I(2);
    __Vdly__TX__DOT__phy_header_extender__DOT__counter = VL_RAND_RESET_I(8);
    __Vdly__TX__DOT__phy_tx_scrambler__DOT__scrambler_status = VL_RAND_RESET_I(2);
    __Vdlyvdim0__TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(9);
    __Vdlyvset__TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(9);
    __Vdlyvset__TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(17);
    __Vdlyvset__TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__TX__DOT__streamFifo_7__DOT__logic_ram__v0 = 0;
    __Vdlyvval__TX__DOT__streamFifo_7__DOT__logic_ram__v0 = VL_RAND_RESET_I(17);
    __Vdlyvset__TX__DOT__streamFifo_7__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(17);
    __Vdlyvset__TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram__v0 = 0;
    __Vm_traceActivity = 0;
}
