// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTXSim.h for the primary calling header

#include "VTXSim.h"
#include "VTXSim__Syms.h"

//==========

VL_CTOR_IMP(VTXSim) {
    VTXSim__Syms* __restrict vlSymsp = __VlSymsp = new VTXSim__Syms(this, name());
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTXSim::__Vconfigure(VTXSim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTXSim::~VTXSim() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VTXSim::_initial__TOP__1(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_initial__TOP__1\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*383:0*/ __Vtemp1[12];
    WData/*383:0*/ __Vtemp2[12];
    // Body
    vlTOPp->axil4Ctrl_rresp = 0U;
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(17);
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(9);
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f6d656dU;
    __Vtemp1[2U] = 0x65725f49U;
    __Vtemp1[3U] = 0x5f616464U;
    __Vtemp1[4U] = 0x6d626c65U;
    __Vtemp1[5U] = 0x70726561U;
    __Vtemp1[6U] = 0x7374665fU;
    __Vtemp1[7U] = 0x76656c5fU;
    __Vtemp1[8U] = 0x6f706c65U;
    __Vtemp1[9U] = 0x2e765f74U;
    __Vtemp1[0xaU] = 0x5853696dU;
    __Vtemp1[0xbU] = 0x54U;
    VL_READMEM_N(false, 12, 64, 0, VL_CVT_PACK_STR_NW(12, __Vtemp1)
                 , vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__I_mem
                 , 0, ~VL_ULL(0));
    __Vtemp2[0U] = 0x2e62696eU;
    __Vtemp2[1U] = 0x5f6d656dU;
    __Vtemp2[2U] = 0x65725f51U;
    __Vtemp2[3U] = 0x5f616464U;
    __Vtemp2[4U] = 0x6d626c65U;
    __Vtemp2[5U] = 0x70726561U;
    __Vtemp2[6U] = 0x7374665fU;
    __Vtemp2[7U] = 0x76656c5fU;
    __Vtemp2[8U] = 0x6f706c65U;
    __Vtemp2[9U] = 0x2e765f74U;
    __Vtemp2[0xaU] = 0x5853696dU;
    __Vtemp2[0xbU] = 0x54U;
    VL_READMEM_N(false, 12, 64, 0, VL_CVT_PACK_STR_NW(12, __Vtemp2)
                 , vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__Q_mem
                 , 0, ~VL_ULL(0));
}

void VTXSim::_settle__TOP__22(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_settle__TOP__22\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__writeJoinEvent_valid = ((IData)(vlTOPp->axil4Ctrl_awvalid) 
                                                & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->TXSim__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->TXSim__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->TXSim__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->raw_data_tready = (0U == (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt));
    vlTOPp->result_data_payload_cha_i = (0xfffU & vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0);
    vlTOPp->result_data_payload_cha_q = (0xfffU & (vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                                   >> 0xcU));
    vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT___zz_cnt 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_fragment = 0U;
    if ((0U != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_fragment 
            = (0xffffU & ((1U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))
                           ? (0x5500U | (0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__counter) 
                                                  << 1U)))
                           : (vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0 
                              >> 1U)));
    }
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_result_2 
        = ((0x100000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                             >> 0xbU)) << 0x14U)) | 
           ((0x80000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                             >> 0xcU)) << 0x13U)) | 
            ((0x40000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                              >> 0xdU)) << 0x12U)) 
             | ((0x20000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                 >> 0xeU)) << 0x11U)) 
                | ((0x10000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                    >> 0xfU)) << 0x10U)) 
                   | ((0x8000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                      >> 0x10U)) << 0xfU)) 
                      | ((0x4000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                         >> 0x11U)) 
                                     << 0xeU)) | ((0x2000U 
                                                   & ((~ 
                                                       (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                        >> 0x12U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                           >> 0x13U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1fU)))))))))))))))))))))));
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
        = ((0U == (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
            ? 0xa59a59U : ((1U == (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                            ? 0xa595a7U : ((2U == (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                                            ? 0x5a7a59U
                                            : 0x5a75a7U)));
    vlTOPp->TXSim__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->TXSim__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->TXSim__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_padder__DOT__fill = 
        ((0U != (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter)) 
         & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__raw_data_payload_first));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_last = 0U;
    if ((0U != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
            vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_last 
                = (1U & vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0);
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__when_PhyTx_l39 
        = (1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc)));
    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l76 
        = (5U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__repeatCnt));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_payload_last = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc) {
        if ((3U == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter))) {
            vlTOPp->TXSim__DOT__phy_tx_crc_result_data_payload_last = 1U;
        }
    }
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT___zz_cnt 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__cnt)));
    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l74 
        = (0x40U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__cnt));
    vlTOPp->TXSim__DOT__mod_data_div__DOT___zz_base_cnt 
        = (0xfU & ((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_cnt) 
                   + (IData)(vlTOPp->TXSim__DOT__clkCrossing_9__DOT__area_clkO_buf1)));
    vlTOPp->TXSim__DOT__mod_data_div__DOT__when_dataDivDynamic_l52 
        = ((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_cnt) 
           == (IData)(vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkO_buf1));
    vlTOPp->TXSim__DOT__mod_data_div_unit_data_payload_last 
        = ((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_last) 
           & ((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_cnt) 
              == (IData)(vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkO_buf1)));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 1U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding)
            ? 0U : (0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                             >> 1U)));
    vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_tvalid) & (0U == (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt)));
    vlTOPp->TXSim__DOT__stream_package_gen__DOT___zz_pkg_slices_cnt 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__pkg_slices_cnt)));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_payload_last 
        = (((IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__pkg_slices_cnt) 
            == (0x7fU & ((IData)(vlTOPp->TXSim__DOT__clkCrossing_6__DOT__area_clkO_buf1) 
                         - (IData)(1U)))) | ((IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__raw_data_last) 
                                             & (1U 
                                                == (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__strb_buf))));
    vlTOPp->TXSim__DOT__mod_data_div__DOT__base_ready 
        = (((IData)(vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkO_buf1) 
            == (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_cnt)) 
           & (IData)(vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkO_buf1));
    vlTOPp->TXSim__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->TXSim__DOT__readRsp_data = ((0xffffff80U 
                                             & vlTOPp->TXSim__DOT__readRsp_data) 
                                            | (IData)(vlTOPp->TXSim__DOT__pkg_gen_bridge_slices_limit_driver));
    } else {
        if ((4U == (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->TXSim__DOT__readRsp_data = ((0xffffff80U 
                                                 & vlTOPp->TXSim__DOT__readRsp_data) 
                                                | (IData)(vlTOPp->TXSim__DOT__clkCrossing_7__DOT__area_clkO_buf1));
        } else {
            if ((0x10U == (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr))) {
                vlTOPp->TXSim__DOT__readRsp_data = 
                    ((0xfffffffeU & vlTOPp->TXSim__DOT__readRsp_data) 
                     | (IData)(vlTOPp->TXSim__DOT__data_div_bridge_enable_driver));
            } else {
                if ((0x14U == (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr))) {
                    vlTOPp->TXSim__DOT__readRsp_data 
                        = ((0xfffffff0U & vlTOPp->TXSim__DOT__readRsp_data) 
                           | (IData)(vlTOPp->TXSim__DOT__data_div_bridge_cnt_step_driver));
                } else {
                    if ((0x18U == (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr))) {
                        vlTOPp->TXSim__DOT__readRsp_data 
                            = ((0xfffffff0U & vlTOPp->TXSim__DOT__readRsp_data) 
                               | (IData)(vlTOPp->TXSim__DOT__data_div_bridge_cnt_limit_driver));
                    } else {
                        if ((0x20U == (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr))) {
                            vlTOPp->TXSim__DOT__readRsp_data 
                                = ((0xfffffffcU & vlTOPp->TXSim__DOT__readRsp_data) 
                                   | (IData)(vlTOPp->TXSim__DOT__mod_rtl_bridge_select_driver));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_payload_last 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__raw_last) 
           & (7U == (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt)));
}

void VTXSim::_settle__TOP__23(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_settle__TOP__23\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding)
            ? 0U : ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt))
                     ? (0xfffU & (vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port0 
                                  >> 1U)) : 0U));
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding)
            ? 0U : ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt))
                     ? (0xfffU & (vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port0 
                                  >> 0xdU)) : 0U));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1_result 
        = ((0x80000000U & ((~ vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state) 
                           << 0x1fU)) | ((0x40000000U 
                                          & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                 >> 1U)) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((~ 
                                                 (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                  >> 2U)) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & ((~ 
                                                    (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                     >> 3U)) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & ((~ 
                                                       (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                        >> 4U)) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & ((~ 
                                                          (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                           >> 5U)) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & ((~ 
                                                             (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                              >> 6U)) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & ((~ 
                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                 >> 7U)) 
                                                               << 0x18U)) 
                                                           | ((0x800000U 
                                                               & ((~ 
                                                                   (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                    >> 8U)) 
                                                                  << 0x17U)) 
                                                              | ((0x400000U 
                                                                  & ((~ 
                                                                      (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                       >> 9U)) 
                                                                     << 0x16U)) 
                                                                 | ((0x200000U 
                                                                     & ((~ 
                                                                         (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                          >> 0xaU)) 
                                                                        << 0x15U)) 
                                                                    | vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_result_2)))))))))));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port_1 
        = ((0x1ffe000U & (((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                            ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                    ? 0x7ff000U : 0x801000U)
                                : 0U) : ((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                          ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                              ? vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                              : 0U)
                                          : ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                  ? 0xc35U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                   ? 0xebcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                                              : 0U))) 
                          << 0xdU)) | ((0x1ffeU & (
                                                   ((0U 
                                                     == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                                     ? 
                                                    ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                      ? 
                                                     (((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                                        ? 0x7ff000U
                                                        : 0x801000U) 
                                                      >> 0xcU)
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                                      ? 
                                                     ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                       ? 
                                                      (vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                                       >> 0xcU)
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                            >> 2U)))
                                                        ? 0xc35U
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                             >> 2U)))
                                                         ? 0xebcU
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                              >> 2U)))
                                                          ? 0x3caU
                                                          : 0x143U)))
                                                       : 0U))) 
                                                   << 1U)) 
                                       | ((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                           ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid) 
                                              & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last))
                                           : ((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                               ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid) 
                                                  & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last))
                                               : ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid) 
                                                  & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last))))));
    vlTOPp->TXSim__DOT__writeJoinEvent_fire = ((IData)(vlTOPp->TXSim__DOT__writeJoinEvent_valid) 
                                               & (IData)(vlTOPp->TXSim__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_fragment 
        = (0xffU & ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0) 
                    >> 1U));
    if (vlTOPp->TXSim__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_fragment = 0U;
    }
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_last 
        = (1U & (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0));
    if ((7U != (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter))) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_last = 0U;
    }
    if (vlTOPp->TXSim__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_last 
            = (7U == (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter));
    }
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0 
        = (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
            << 1U) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3feU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | (0x14U > 
                                            ((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                              << 5U) 
                                             | (0x1fU 
                                                & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                   - (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3fdU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 1U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3fbU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 2U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3f7U & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value))))) 
                                            << 3U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3efU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 4U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3dfU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 5U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3bfU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value))))) 
                                            << 6U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x37fU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 7U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x2ffU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 8U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x1ffU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 9U));
    vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_0_payload_last 
        = ((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->TXSim__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_1_payload_last 
        = ((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->TXSim__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_2_payload_last 
        = ((2U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->TXSim__DOT__mod_data_div_unit_data_payload_last));
}

void VTXSim::_settle__TOP__24(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_settle__TOP__24\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 2U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 7U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->TXSim__DOT__readRsp_data;
    vlTOPp->axil4Ctrl_awready = vlTOPp->TXSim__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->TXSim__DOT__writeJoinEvent_fire;
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_header_extender_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full)) 
                 & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__emitHeader))));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing 
        = (((0U != (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
            & (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__strb_buf)) 
           & (~ (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full)));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core_split_data_fire 
        = ((0U != (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
           & (~ (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full)));
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data_valid_1) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_ready = 0U;
    if ((0U != (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
        if ((1U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_ready 
                = (1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full)));
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_tx_filter_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding)) 
                 & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_ready = 
        (1U & ((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc)) 
               & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_valid_1) 
           & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_full)));
    vlTOPp->TXSim__DOT__streamFifo_12_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_ready 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__raw_ready) 
           & (~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full)) 
                 & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__fill))));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready = 0U;
    if ((0U != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
            vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready 
                = (1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)));
        }
    }
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushing 
        = (((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
             ? (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
             : ((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                 ? (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                 : (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid))) 
           & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_full)));
    vlTOPp->TXSim__DOT__streamFifo_13_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 3U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 6U)) | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                         >> 1U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->TXSim__DOT__phy_header_extender_result_data_valid 
            = ((1U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status)) 
               | (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid));
    }
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__pipeline_halt)));
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 3U)));
    vlTOPp->result_data_valid = vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid;
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid) 
           & (IData)(vlTOPp->result_data_ready));
    vlTOPp->TXSim__DOT__mod_data_div__DOT__base_data_fire 
        = (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid) 
            & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                  >> 6U))) & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_ready));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_ready) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 6U))));
    vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 8U)));
    vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_ready 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_raw_data_ready) 
           & (0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid) 
           & ((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding)) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 2U))));
    vlTOPp->TXSim__DOT__phy_tx_encoder_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 2U)));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_1 = 1U;
    }
}

void VTXSim::_settle__TOP__25(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_settle__TOP__25\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_12_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 4U))));
    vlTOPp->TXSim__DOT__phy_header_extender_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_12_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 4U)));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 8U))));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability_io_pop_valid) 
           & ((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 9U))));
    vlTOPp->TXSim__DOT__phy_tx_front_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 9U)));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_ready) 
              & (~ (IData)(vlTOPp->TXSim__DOT__pipeline_halt))));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 1U))));
    vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_valid = 
        ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid) 
         & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
               >> 1U)));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid) 
           & (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 5U))));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 5U)));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_13_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 7U)));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 4U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 5U)) | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 1U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0x3e7U == (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x3ffU & ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
                              + (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__fill)));
    if (vlTOPp->TXSim__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_valid = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__raw_data_fire 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_valid) 
           & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_ready));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_13_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 7U))));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__when_PhyTx_l95 
        = (((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_raw_data_valid) 
            & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding))) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding) 
           | (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_raw_data_valid));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing 
        = (((IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_valid) 
            & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__emitHeader))) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full)));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_raw_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc) 
           | (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_valid));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid 
        = (1U & ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))
                  ? (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid))
                  : (1U != (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready 
        = ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))
            ? (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid)
            : ((1U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status)) 
               & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid) 
                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_ready))));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
        if ((1U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_valid 
                = ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid) 
                   & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid));
        }
    }
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_valid) 
           | (0U != (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 5U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 4U)) | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                         >> 1U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2));
}

void VTXSim::_settle__TOP__26(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_settle__TOP__26\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_padder__DOT__when_PhyTx_l71 
        = ((7U != (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter)) 
           & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_valid) 
              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__when_PhyTx_l95_1 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext 
        = (((0x3e7U == (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x3ffU & ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value) 
                              + (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext 
        = (((0x85U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_valid) 
           | (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 6U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 3U)) | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                         >> 1U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_valueNext 
        = (((0x85U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 7U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 2U)) | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 1U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
        = ((vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 8U) ^ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 1U)) | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 1U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_resultNext_2 
        = ((0x100000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                             >> 0xbU)) << 0x14U)) | 
           ((0x80000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                             >> 0xcU)) << 0x13U)) | 
            ((0x40000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                              >> 0xdU)) << 0x12U)) 
             | ((0x20000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                 >> 0xeU)) << 0x11U)) 
                | ((0x10000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                    >> 0xfU)) << 0x10U)) 
                   | ((0x8000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                      >> 0x10U)) << 0xfU)) 
                      | ((0x4000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                         >> 0x11U)) 
                                     << 0xeU)) | ((0x2000U 
                                                   & ((~ 
                                                       (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                        >> 0x12U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                           >> 0x13U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1fU)))))))))))))))))))))));
}

void VTXSim::_settle__TOP__27(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_settle__TOP__27\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7 
        = ((0x80U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment)) 
           | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                       >> 1U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfeU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (1U & ((((((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 1U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                  >> 2U)) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                             >> 4U)) 
                     ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 5U)) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                   >> 7U))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfdU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (2U & (((((0xfffffffeU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1)) 
                       ^ (0x7ffffffeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 1U))) ^ 
                      (0x1ffffffeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                      >> 3U))) ^ (0xffffffeU 
                                                  & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                                     >> 4U))) 
                    ^ (0x3fffffeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 6U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfbU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (4U & (((((0xfffffffcU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                       << 1U)) ^ (0xfffffffcU 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2))) 
                      ^ (0x3ffffffcU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                        >> 2U))) ^ 
                     (0x1ffffffcU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                     >> 3U))) ^ (0x7fffffcU 
                                                 & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                    >> 5U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xf7U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (8U & (((((0xfffffff8U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                       << 2U)) ^ (0xfffffff8U 
                                                  & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                     << 1U))) 
                      ^ (0x7ffffff8U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                        >> 1U))) ^ 
                     (0x3ffffff8U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                     >> 2U))) ^ (0xffffff8U 
                                                 & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                    >> 4U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xefU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x10U & (((((0xfffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 3U)) ^ 
                          (0xfffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 2U))) 
                         ^ (0xfffffff0U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4))) 
                        ^ (0x7ffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          >> 1U))) 
                       ^ (0x1ffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 3U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xdfU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x20U & (((((0xffffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 4U)) ^ 
                          (0xffffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 3U))) 
                         ^ (0xffffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                           << 1U))) 
                        ^ (0xffffffe0U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5))) 
                       ^ (0x3fffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 2U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xbfU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x40U & (((((0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 5U)) ^ 
                          (0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 4U))) 
                         ^ (0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                           << 2U))) 
                        ^ (0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 1U))) 
                       ^ (0x7fffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                         >> 1U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x80U & (((((0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 6U)) ^ 
                          (0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 5U))) 
                         ^ (0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                           << 3U))) 
                        ^ (0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 2U))) 
                       ^ (0xffffff80U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfeU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (1U & ((((((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 1U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                  >> 4U)) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                             >> 5U)) 
                     ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 6U)) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                   >> 7U))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfdU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (2U & (((((0xfffffffeU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1)) 
                       ^ (0x1ffffffeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 3U))) ^ 
                      (0xffffffeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 4U))) ^ (0x7fffffeU 
                                                 & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                                    >> 5U))) 
                    ^ (0x3fffffeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 6U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfbU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (4U & (((((0xfffffffcU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                       << 1U)) ^ (0x3ffffffcU 
                                                  & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                     >> 2U))) 
                      ^ (0x1ffffffcU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                        >> 3U))) ^ 
                     (0xffffffcU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                    >> 4U))) ^ (0x7fffffcU 
                                                & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                   >> 5U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xf7U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (8U & (((((0xfffffff8U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                       << 2U)) ^ (0x7ffffff8U 
                                                  & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                     >> 1U))) 
                      ^ (0x3ffffff8U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                        >> 2U))) ^ 
                     (0x1ffffff8U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                     >> 3U))) ^ (0xffffff8U 
                                                 & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                    >> 4U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xefU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x10U & (((((0xfffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 3U)) ^ 
                          (0xfffffff0U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4))) 
                         ^ (0x7ffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                           >> 1U))) 
                        ^ (0x3ffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          >> 2U))) 
                       ^ (0x1ffffff0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 3U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xdfU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x20U & (((((0xffffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 4U)) ^ 
                          (0xffffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 1U))) 
                         ^ (0xffffffe0U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5))) 
                        ^ (0x7fffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          >> 1U))) 
                       ^ (0x3fffffe0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 2U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xbfU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x40U & (((((0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 5U)) ^ 
                          (0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 2U))) 
                         ^ (0xffffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                           << 1U))) 
                        ^ (0xffffffc0U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6))) 
                       ^ (0x7fffffc0U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                         >> 1U)))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x80U & (((((0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 6U)) ^ 
                          (0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 3U))) 
                         ^ (0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                           << 2U))) 
                        ^ (0xffffff80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 1U))) 
                       ^ (0xffffff80U & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7)))));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5));
}

void VTXSim::_settle__TOP__28(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_settle__TOP__28\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                            >> 3U)));
}

void VTXSim::_eval_initial(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_eval_initial\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VTXSim::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::final\n"); );
    // Variables
    VTXSim__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTXSim::_eval_settle(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_eval_settle\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__22(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__23(vlSymsp);
    vlTOPp->_settle__TOP__24(vlSymsp);
    vlTOPp->_settle__TOP__25(vlSymsp);
    vlTOPp->_settle__TOP__26(vlSymsp);
    vlTOPp->_settle__TOP__27(vlSymsp);
    vlTOPp->_settle__TOP__28(vlSymsp);
}
