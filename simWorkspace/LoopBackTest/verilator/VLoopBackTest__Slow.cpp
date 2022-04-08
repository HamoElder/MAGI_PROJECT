// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

//==========

VL_CTOR_IMP(VLoopBackTest) {
    VLoopBackTest__Syms* __restrict vlSymsp = __VlSymsp = new VLoopBackTest__Syms(this, name());
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VLoopBackTest::__Vconfigure(VLoopBackTest__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VLoopBackTest::~VLoopBackTest() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VLoopBackTest::_initial__TOP__1(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_initial__TOP__1\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*1119:0*/ __Vtemp1[35];
    WData/*1119:0*/ __Vtemp2[35];
    WData/*1151:0*/ __Vtemp3[36];
    WData/*1151:0*/ __Vtemp4[36];
    // Body
    vlTOPp->axil4Ctrl_rresp = 0U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(17);
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f6d656dU;
    __Vtemp1[2U] = 0x65725f49U;
    __Vtemp1[3U] = 0x5f616464U;
    __Vtemp1[4U] = 0x6d626c65U;
    __Vtemp1[5U] = 0x70726561U;
    __Vtemp1[6U] = 0x7374665fU;
    __Vtemp1[7U] = 0x7465725fU;
    __Vtemp1[8U] = 0x736d6974U;
    __Vtemp1[9U] = 0x7472616eU;
    __Vtemp1[0xaU] = 0x76656c5fU;
    __Vtemp1[0xbU] = 0x6f706c65U;
    __Vtemp1[0xcU] = 0x2e765f74U;
    __Vtemp1[0xdU] = 0x54657374U;
    __Vtemp1[0xeU] = 0x4261636bU;
    __Vtemp1[0xfU] = 0x4c6f6f70U;
    __Vtemp1[0x10U] = 0x72746c2fU;
    __Vtemp1[0x11U] = 0x6573742fU;
    __Vtemp1[0x12U] = 0x61636b54U;
    __Vtemp1[0x13U] = 0x6f6f7042U;
    __Vtemp1[0x14U] = 0x63652f4cU;
    __Vtemp1[0x15U] = 0x6b737061U;
    __Vtemp1[0x16U] = 0x6d576f72U;
    __Vtemp1[0x17U] = 0x2e2f7369U;
    __Vtemp1[0x18U] = 0x4543542fU;
    __Vtemp1[0x19U] = 0x50524f4aU;
    __Vtemp1[0x1aU] = 0x4147495fU;
    __Vtemp1[0x1bU] = 0x74732f4dU;
    __Vtemp1[0x1cU] = 0x6f6a6563U;
    __Vtemp1[0x1dU] = 0x65615072U;
    __Vtemp1[0x1eU] = 0x6e2f4964U;
    __Vtemp1[0x1fU] = 0x73646f77U;
    __Vtemp1[0x20U] = 0x2f6d6973U;
    __Vtemp1[0x21U] = 0x686f6d65U;
    __Vtemp1[0x22U] = 0x2fU;
    VL_READMEM_N(false, 12, 16, 0, VL_CVT_PACK_STR_NW(35, __Vtemp1)
                 , vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__I_mem
                 , 0, ~VL_ULL(0));
    __Vtemp2[0U] = 0x2e62696eU;
    __Vtemp2[1U] = 0x5f6d656dU;
    __Vtemp2[2U] = 0x65725f51U;
    __Vtemp2[3U] = 0x5f616464U;
    __Vtemp2[4U] = 0x6d626c65U;
    __Vtemp2[5U] = 0x70726561U;
    __Vtemp2[6U] = 0x7374665fU;
    __Vtemp2[7U] = 0x7465725fU;
    __Vtemp2[8U] = 0x736d6974U;
    __Vtemp2[9U] = 0x7472616eU;
    __Vtemp2[0xaU] = 0x76656c5fU;
    __Vtemp2[0xbU] = 0x6f706c65U;
    __Vtemp2[0xcU] = 0x2e765f74U;
    __Vtemp2[0xdU] = 0x54657374U;
    __Vtemp2[0xeU] = 0x4261636bU;
    __Vtemp2[0xfU] = 0x4c6f6f70U;
    __Vtemp2[0x10U] = 0x72746c2fU;
    __Vtemp2[0x11U] = 0x6573742fU;
    __Vtemp2[0x12U] = 0x61636b54U;
    __Vtemp2[0x13U] = 0x6f6f7042U;
    __Vtemp2[0x14U] = 0x63652f4cU;
    __Vtemp2[0x15U] = 0x6b737061U;
    __Vtemp2[0x16U] = 0x6d576f72U;
    __Vtemp2[0x17U] = 0x2e2f7369U;
    __Vtemp2[0x18U] = 0x4543542fU;
    __Vtemp2[0x19U] = 0x50524f4aU;
    __Vtemp2[0x1aU] = 0x4147495fU;
    __Vtemp2[0x1bU] = 0x74732f4dU;
    __Vtemp2[0x1cU] = 0x6f6a6563U;
    __Vtemp2[0x1dU] = 0x65615072U;
    __Vtemp2[0x1eU] = 0x6e2f4964U;
    __Vtemp2[0x1fU] = 0x73646f77U;
    __Vtemp2[0x20U] = 0x2f6d6973U;
    __Vtemp2[0x21U] = 0x686f6d65U;
    __Vtemp2[0x22U] = 0x2fU;
    VL_READMEM_N(false, 12, 16, 0, VL_CVT_PACK_STR_NW(35, __Vtemp2)
                 , vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__Q_mem
                 , 0, ~VL_ULL(0));
    __Vtemp3[0U] = 0x2e62696eU;
    __Vtemp3[1U] = 0x5f6d656dU;
    __Vtemp3[2U] = 0x72655f49U;
    __Vtemp3[3U] = 0x725f636fU;
    __Vtemp3[4U] = 0x5f636f72U;
    __Vtemp3[5U] = 0x726f7373U;
    __Vtemp3[6U] = 0x666f5f63U;
    __Vtemp3[7U] = 0x72785f63U;
    __Vtemp3[8U] = 0x7068795fU;
    __Vtemp3[9U] = 0x7665725fU;
    __Vtemp3[0xaU] = 0x65636569U;
    __Vtemp3[0xbU] = 0x656c5f72U;
    __Vtemp3[0xcU] = 0x706c6576U;
    __Vtemp3[0xdU] = 0x765f746fU;
    __Vtemp3[0xeU] = 0x6573742eU;
    __Vtemp3[0xfU] = 0x61636b54U;
    __Vtemp3[0x10U] = 0x6f6f7042U;
    __Vtemp3[0x11U] = 0x746c2f4cU;
    __Vtemp3[0x12U] = 0x73742f72U;
    __Vtemp3[0x13U] = 0x636b5465U;
    __Vtemp3[0x14U] = 0x6f704261U;
    __Vtemp3[0x15U] = 0x652f4c6fU;
    __Vtemp3[0x16U] = 0x73706163U;
    __Vtemp3[0x17U] = 0x576f726bU;
    __Vtemp3[0x18U] = 0x2f73696dU;
    __Vtemp3[0x19U] = 0x43542f2eU;
    __Vtemp3[0x1aU] = 0x524f4a45U;
    __Vtemp3[0x1bU] = 0x47495f50U;
    __Vtemp3[0x1cU] = 0x732f4d41U;
    __Vtemp3[0x1dU] = 0x6a656374U;
    __Vtemp3[0x1eU] = 0x6150726fU;
    __Vtemp3[0x1fU] = 0x2f496465U;
    __Vtemp3[0x20U] = 0x646f776eU;
    __Vtemp3[0x21U] = 0x6d697373U;
    __Vtemp3[0x22U] = 0x6f6d652fU;
    __Vtemp3[0x23U] = 0x2f68U;
    VL_READMEM_N(false, 12, 16, 0, VL_CVT_PACK_STR_NW(36, __Vtemp3)
                 , vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__I_mem
                 , 0, ~VL_ULL(0));
    __Vtemp4[0U] = 0x2e62696eU;
    __Vtemp4[1U] = 0x5f6d656dU;
    __Vtemp4[2U] = 0x72655f51U;
    __Vtemp4[3U] = 0x725f636fU;
    __Vtemp4[4U] = 0x5f636f72U;
    __Vtemp4[5U] = 0x726f7373U;
    __Vtemp4[6U] = 0x666f5f63U;
    __Vtemp4[7U] = 0x72785f63U;
    __Vtemp4[8U] = 0x7068795fU;
    __Vtemp4[9U] = 0x7665725fU;
    __Vtemp4[0xaU] = 0x65636569U;
    __Vtemp4[0xbU] = 0x656c5f72U;
    __Vtemp4[0xcU] = 0x706c6576U;
    __Vtemp4[0xdU] = 0x765f746fU;
    __Vtemp4[0xeU] = 0x6573742eU;
    __Vtemp4[0xfU] = 0x61636b54U;
    __Vtemp4[0x10U] = 0x6f6f7042U;
    __Vtemp4[0x11U] = 0x746c2f4cU;
    __Vtemp4[0x12U] = 0x73742f72U;
    __Vtemp4[0x13U] = 0x636b5465U;
    __Vtemp4[0x14U] = 0x6f704261U;
    __Vtemp4[0x15U] = 0x652f4c6fU;
    __Vtemp4[0x16U] = 0x73706163U;
    __Vtemp4[0x17U] = 0x576f726bU;
    __Vtemp4[0x18U] = 0x2f73696dU;
    __Vtemp4[0x19U] = 0x43542f2eU;
    __Vtemp4[0x1aU] = 0x524f4a45U;
    __Vtemp4[0x1bU] = 0x47495f50U;
    __Vtemp4[0x1cU] = 0x732f4d41U;
    __Vtemp4[0x1dU] = 0x6a656374U;
    __Vtemp4[0x1eU] = 0x6150726fU;
    __Vtemp4[0x1fU] = 0x2f496465U;
    __Vtemp4[0x20U] = 0x646f776eU;
    __Vtemp4[0x21U] = 0x6d697373U;
    __Vtemp4[0x22U] = 0x6f6d652fU;
    __Vtemp4[0x23U] = 0x2f68U;
    VL_READMEM_N(false, 12, 16, 0, VL_CVT_PACK_STR_NW(36, __Vtemp4)
                 , vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__Q_mem
                 , 0, ~VL_ULL(0));
}

void VLoopBackTest::_settle__TOP__37(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__37\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT___zz_cnt 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_impulse_cnt 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__impulse_cnt)));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_result_2 
        = ((0x100000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                             >> 0xbU)) << 0x14U)) | 
           ((0x80000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                             >> 0xcU)) << 0x13U)) | 
            ((0x40000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                              >> 0xdU)) << 0x12U)) 
             | ((0x20000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                 >> 0xeU)) << 0x11U)) 
                | ((0x10000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                    >> 0xfU)) << 0x10U)) 
                   | ((0x8000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                      >> 0x10U)) << 0xfU)) 
                      | ((0x4000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                         >> 0x11U)) 
                                     << 0xeU)) | ((0x2000U 
                                                   & ((~ 
                                                       (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                        >> 0x12U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                           >> 0x13U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1fU)))))))))))))))))))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
        = ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
            ? 0xa59a59U : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                            ? 0xa595a7U : ((2U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                                            ? 0x5a7a59U
                                            : 0x5a75a7U)));
    vlTOPp->LoopBackTest__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->LoopBackTest__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2 
        = ((0x2000000U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
                          << 1U)) | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5 
        = ((0x2000000U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                          << 1U)) | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y);
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__fill 
        = ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__raw_data_payload_first));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_last = 0U;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_last 
                = (1U & vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0);
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__when_PhyTx_l39 
        = (1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__emitCrc)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l76 
        = (9U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_payload_last = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__emitCrc) {
        if ((3U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_payload_last = 1U;
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l49 
        = (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_max 
           < (VL_ULL(0xfffffffff) & (((1U & (IData)(
                                                    (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__corr_val_i 
                                                     >> 0x23U)))
                                       ? (~ vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__corr_val_i)
                                       : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__corr_val_i) 
                                     + (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__corr_val_i 
                                                                   >> 0x23U))))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_corr_val_i_1 
        = (VL_ULL(0xfffffffff) & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__corr_val_i 
                                  - (((QData)((IData)(
                                                      (0xfffU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_16 
                                                                                >> 0x17U))))))) 
                                      << 0x18U) | (QData)((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_16)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_corr_val_q_1 
        = (VL_ULL(0xfffffffff) & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__corr_val_q 
                                  - (((QData)((IData)(
                                                      (0xfffU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_16 
                                                                                >> 0x17U))))))) 
                                      << 0x18U) | (QData)((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_16)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment = 0U;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment 
            = (0xffffU & ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))
                           ? (((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1) 
                               << 8U) | (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter) 
                                                  << 1U)))
                           : (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0 
                              >> 1U)));
    }
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator_delta_phi_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_11) 
           & (0x11U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__impulse_cnt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_cnt 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l74 
        = (0xfU == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__when_PreambleDetector_l64 
        = (0xffU > (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__plateau_cnt));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT___zz_base_cnt 
        = (0xfU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt) 
                   + (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_12__DOT__area_clkO_buf1)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__when_dataDivDynamic_l52 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt) 
           == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_13__DOT__area_clkO_buf1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__when_CFOCorrector_l45 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_valid) 
           | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cfo_corrected));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                      >> 0x17U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div_unit_data_payload_last 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_last) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt) 
              == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_13__DOT__area_clkO_buf1)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 1U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT___zz_gate_pkg_det 
        = (0xffffffU & ((((0x800000U & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_i)
                           ? (~ vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_i)
                           : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_i) 
                         + (1U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_i 
                                  >> 0x17U))) + (((0x800000U 
                                                   & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_q)
                                                   ? 
                                                  (~ vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_q)
                                                   : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_q) 
                                                 + 
                                                 (1U 
                                                  & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_q 
                                                     >> 0x17U)))));
}

void VLoopBackTest::_settle__TOP__38(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__38\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT___zz_pkg_slices_cnt 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__pkg_slices_cnt)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                      >> 0x17U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__stream_package_gen_pkg_data_payload_last 
        = (((IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__pkg_slices_cnt) 
            == (0x7fU & ((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_9__DOT__area_clkO_buf1) 
                         - (IData)(1U)))) | ((IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__raw_data_last) 
                                             & (1U 
                                                == (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__strb_buf))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_ready 
        = (((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_13__DOT__area_clkO_buf1) 
            == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkO_buf1));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__emitEncoding)
            ? 0U : (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                             >> 1U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT___zz_power_val_i 
        = (0xffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_i 
                        - ((0xf00000U & (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_15 
                                                                 >> 0x13U)))) 
                                         << 0x14U)) 
                           | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_15)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT___zz_power_val_q 
        = (0xffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_q 
                        - ((0xf00000U & (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_15 
                                                                 >> 0x13U)))) 
                                         << 0x14U)) 
                           | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_15)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                      >> 0x17U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_i_1 
        = (VL_ULL(0xfffffffff) & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i 
                                  - (((QData)((IData)(
                                                      (0xfffU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15 
                                                                                >> 0x17U))))))) 
                                      << 0x18U) | (QData)((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_q_1 
        = (VL_ULL(0xfffffffff) & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q 
                                  - (((QData)((IData)(
                                                      (0xfffU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15 
                                                                                >> 0x17U))))))) 
                                      << 0x18U) | (QData)((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                      >> 0x17U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                      >> 0x17U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                      >> 0x17U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                      >> 0x17U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                      >> 0x17U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                      >> 0x17U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                      >> 0x17U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                      >> 0x17U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50 
        = (0xffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phi 
                        + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiCorrect));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i_1 
        = (0xfffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                         - ((0xf000000U & (VL_NEGATE_I((IData)(
                                                               (1U 
                                                                & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15 
                                                                   >> 0x17U)))) 
                                           << 0x18U)) 
                            | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q_1 
        = (0xfffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                         - ((0xf000000U & (VL_NEGATE_I((IData)(
                                                               (1U 
                                                                & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15 
                                                                   >> 0x17U)))) 
                                           << 0x18U)) 
                            | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2 
        = ((0x10000000U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                           << 1U)) | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5 
        = ((0x10000000U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                           << 1U)) | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q);
    vlTOPp->result_data_valid = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT___zz_cnt 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_payload_last 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__raw_last) 
           & (7U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__last_padding)
            ? 0U : ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt))
                     ? (0xfffU & (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 
                                  >> 1U)) : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__last_padding)
            ? 0U : ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt))
                     ? (0xfffU & (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 
                                  >> 0xdU)) : 0U));
    vlTOPp->LoopBackTest__DOT__readRsp_data = 0U;
    if (((((((((0U == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr)) 
               | (4U == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) 
              | (0x10U == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) 
             | (0x14U == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) 
            | (0x18U == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) 
           | (0x20U == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) 
          | (0x40U == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) 
         | (0x44U == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr)))) {
        vlTOPp->LoopBackTest__DOT__readRsp_data = (
                                                   (0U 
                                                    == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))
                                                    ? 
                                                   ((0xffffff80U 
                                                     & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                                    | (IData)(vlTOPp->LoopBackTest__DOT__pkg_gen_bridge_slices_limit_driver))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))
                                                     ? 
                                                    ((0xffffff80U 
                                                      & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                                     | (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))
                                                      ? 
                                                     ((0xfffffffeU 
                                                       & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                                      | (IData)(vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_enable_driver))
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))
                                                       ? 
                                                      ((0xfffffff0U 
                                                        & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                                       | (IData)(vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_cnt_step_driver))
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))
                                                        ? 
                                                       ((0xfffffff0U 
                                                         & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                                        | (IData)(vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_cnt_limit_driver))
                                                        : 
                                                       ((0x20U 
                                                         == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))
                                                         ? 
                                                        ((0xfffffffcU 
                                                          & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                                         | (IData)(vlTOPp->LoopBackTest__DOT__transmitter_bridge_mod_method_select_driver))
                                                         : 
                                                        ((0x40U 
                                                          == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))
                                                          ? 
                                                         ((0xfffffffcU 
                                                           & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                                          | (IData)(vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_bias_driver))
                                                          : 
                                                         ((0xfffffffeU 
                                                           & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                                          | (IData)(vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_dir_driver)))))))));
    } else {
        if ((0x4cU == (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->LoopBackTest__DOT__readRsp_data 
                = ((0xffffff00U & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                   | (IData)(vlTOPp->LoopBackTest__DOT__receiver_bridge_min_plateau_driver));
        }
    }
}

void VLoopBackTest::_settle__TOP__39(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__39\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1_result 
        = ((0x80000000U & ((~ vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state) 
                           << 0x1fU)) | ((0x40000000U 
                                          & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                 >> 1U)) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((~ 
                                                 (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                  >> 2U)) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & ((~ 
                                                    (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                     >> 3U)) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & ((~ 
                                                       (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                        >> 4U)) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & ((~ 
                                                          (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                           >> 5U)) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & ((~ 
                                                             (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                              >> 6U)) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & ((~ 
                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                 >> 7U)) 
                                                               << 0x18U)) 
                                                           | ((0x800000U 
                                                               & ((~ 
                                                                   (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                    >> 8U)) 
                                                                  << 0x17U)) 
                                                              | ((0x400000U 
                                                                  & ((~ 
                                                                      (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                       >> 9U)) 
                                                                     << 0x16U)) 
                                                                 | ((0x200000U 
                                                                     & ((~ 
                                                                         (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                          >> 0xaU)) 
                                                                        << 0x15U)) 
                                                                    | vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_result_2)))))))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port_1 
        = ((0x1ffe000U & (((0U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                            ? ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                ? ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                    ? 0x7ff000U : 0x801000U)
                                : 0U) : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                          ? ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                              ? vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                              : 0U)
                                          : ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                  ? 0xc35U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                   ? 0xebcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                                              : 0U))) 
                          << 0xdU)) | ((0x1ffeU & (
                                                   ((0U 
                                                     == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                                     ? 
                                                    ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                      ? 
                                                     (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                                        ? 0x7ff000U
                                                        : 0x801000U) 
                                                      >> 0xcU)
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                                      ? 
                                                     ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                       ? 
                                                      (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                                       >> 0xcU)
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                            >> 2U)))
                                                        ? 0xc35U
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                             >> 2U)))
                                                         ? 0xebcU
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                              >> 2U)))
                                                          ? 0x3caU
                                                          : 0x143U)))
                                                       : 0U))) 
                                                   << 1U)) 
                                       | ((0U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                           ? ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid) 
                                              & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last))
                                           : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                               ? ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid) 
                                                  & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last))
                                               : ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid) 
                                                  & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last))))));
    vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->LoopBackTest__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->LoopBackTest__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw 
        = (0x1fffU & ((0x2000000U & ((IData)(0x3fff000U) 
                                     + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2))
                       ? ((0U != (0x1fffU & ((IData)(0x1000U) 
                                             + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2)))
                           ? ((IData)(1U) + (0x1fffU 
                                             & (((IData)(0x3fff000U) 
                                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                                >> 0xdU)))
                           : (0x1fffU & (((IData)(0x3fff000U) 
                                          + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                         >> 0xdU)))
                       : (0x1fffU & (((IData)(0x1000U) 
                                      + ((0x2000000U 
                                          & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
                                             << 1U)) 
                                         | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11)) 
                                     >> 0xdU))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw 
        = (0x1fffU & ((0x2000000U & ((IData)(0x3fff000U) 
                                     + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5))
                       ? ((0U != (0x1fffU & ((IData)(0x1000U) 
                                             + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5)))
                           ? ((IData)(1U) + (0x1fffU 
                                             & (((IData)(0x3fff000U) 
                                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                                >> 0xdU)))
                           : (0x1fffU & (((IData)(0x3fff000U) 
                                          + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                         >> 0xdU)))
                       : (0x1fffU & (((IData)(0x1000U) 
                                      + ((0x2000000U 
                                          & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                                             << 1U)) 
                                         | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y)) 
                                     >> 0xdU))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_fragment 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_logic_ram_port0) 
                    >> 1U));
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_fragment = 0U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_last 
        = (1U & (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_logic_ram_port0));
    if ((7U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter))) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_last = 0U;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_last 
            = (7U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0 
        = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
            << 1U) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0));
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt 
        = ((0xfeU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt)) 
           | (0x12U > ((((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                         & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                        << 5U) | (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                           - (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt 
        = ((0xfdU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt)) 
           | ((0x12U > ((((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                          & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                         << 5U) | (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
              << 1U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt 
        = ((0xfbU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt)) 
           | ((0x12U > ((((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_risingOccupancy)) 
                          & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch)) 
                         << 5U) | (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value))))) 
              << 2U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt 
        = ((0xf7U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt)) 
           | ((0x12U > ((((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                          & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                         << 5U) | (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
              << 3U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt 
        = ((0xefU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt)) 
           | ((0x12U > ((((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                          & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                         << 5U) | (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
              << 4U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt 
        = ((0xdfU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt)) 
           | ((0x12U > ((((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy)) 
                          & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch)) 
                         << 5U) | (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value))))) 
              << 5U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt 
        = ((0xbfU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt)) 
           | ((0x12U > ((((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                          & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                         << 5U) | (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
              << 6U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt 
        = ((0x7fU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt)) 
           | ((0x12U > ((((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                          & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                         << 5U) | (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
              << 7U));
}

void VLoopBackTest::_settle__TOP__40(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__40\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_1_outputs_0_payload_last 
        = ((0U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_1_outputs_1_payload_last 
        = ((1U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_1_outputs_2_payload_last 
        = ((2U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 2U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0 
        = ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 7U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiNext 
        = (0xffffffU & (VL_LTES_III(1,24,24, 0x1921U, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                         ? ((vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phi 
                             - (IData)(0x3243U)) + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiCorrect)
                         : (VL_GTES_III(1,24,24, 0xffe6dfU, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                             ? ((IData)(0x3243U) + 
                                (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phi 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiCorrect))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phi 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiCorrect))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130 
        = (0x1ffffffU & ((0x10000000U & ((IData)(0x1ffffff8U) 
                                         + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2))
                          ? ((0U != (0xfU & ((IData)(8U) 
                                             + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2)))
                              ? ((IData)(1U) + (0x1ffffffU 
                                                & (((IData)(0x1ffffff8U) 
                                                    + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                                   >> 4U)))
                              : (0x1ffffffU & (((IData)(0x1ffffff8U) 
                                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                               >> 4U)))
                          : (0x1ffffffU & (((IData)(8U) 
                                            + ((0x10000000U 
                                                & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                                   << 1U)) 
                                               | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i)) 
                                           >> 4U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 
        = (0x1ffffffU & ((0x10000000U & ((IData)(0x1ffffff8U) 
                                         + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5))
                          ? ((0U != (0xfU & ((IData)(8U) 
                                             + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5)))
                              ? ((IData)(1U) + (0x1ffffffU 
                                                & (((IData)(0x1ffffff8U) 
                                                    + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                                   >> 4U)))
                              : (0x1ffffffU & (((IData)(0x1ffffff8U) 
                                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                               >> 4U)))
                          : (0x1ffffffU & (((IData)(8U) 
                                            + ((0x10000000U 
                                                & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                                   << 1U)) 
                                               | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q)) 
                                           >> 4U))));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->LoopBackTest__DOT__readRsp_data;
    vlTOPp->axil4Ctrl_awready = vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_x_raw 
        = (0xfffU & ((0x1000U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                      ? ((3U == (3U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                       >> 0xbU))) ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw)
                          : 0x800U) : ((0x800U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                                        ? 0x7ffU : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_y_raw 
        = (0xfffU & ((0x1000U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                      ? ((3U == (3U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                       >> 0xbU))) ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw)
                          : 0x800U) : ((0x800U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                                        ? 0x7ffU : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_full))))));
    vlTOPp->trans_data_tready = (1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->trans_data_tvalid) & (~ (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full)) 
                 & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__emitHeader))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushing 
        = (((0U != (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
            & (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__strb_buf)) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__trans_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__split_data_fire 
        = ((0U != (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_ready = 0U;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
        if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_ready 
                = (1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full)));
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__last_padding)) 
                 & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_ready 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_ready) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__emitCrc)) 
                 & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_valid_1) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full)) 
                 & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__fill))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready = 0U;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready 
                = (1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)));
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing 
        = (((0U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1))
             ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
             : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                 ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                 : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid))) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_full)));
}

void VLoopBackTest::_settle__TOP__41(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__41\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 3U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1 
        = ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 6U)) | (0x7fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                         >> 1U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i 
        = (0xfffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_11)
                      ? VL_NEGATE_I((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_x_raw))
                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_x_raw)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q 
        = (0xfffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_11)
                      ? VL_NEGATE_I((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_y_raw))
                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_y_raw)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1));
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid) {
        vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo_io_pop_valid) 
           & (0U == (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_valid 
            = ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status)) 
               | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid));
    }
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_raw_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo_io_pop_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_data_fire 
        = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid) 
            & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                  >> 5U))) & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_ready));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_ready) 
              & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                    >> 5U))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                 >> 7U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_raw_data_ready 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_raw_data_ready) 
           & (0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_ready) 
              & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                    >> 7U))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder_raw_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                 >> 2U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid) 
           & ((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__emitEncoding)) 
              & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                    >> 2U))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_raw_data_ready) 
              & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                    >> 3U))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_raw_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                 >> 3U)));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_raw_data_ready) 
              & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_raw_data_ready) 
              & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                    >> 1U))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_raw_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                 >> 1U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_ready) 
              & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                    >> 4U))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                 >> 4U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_raw_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                 >> 6U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 4U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2 
        = ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 5U)) | (0x7fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 1U)));
    vlTOPp->result_data_payload_cha_i = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i;
    vlTOPp->result_data_payload_cha_q = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_valueNext 
        = (0x3ffU & ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
        vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_raw_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__fill)));
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_valid = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_data_fire 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_valid) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_ready));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_raw_data_ready) 
              & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                    >> 6U))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
}

void VLoopBackTest::_settle__TOP__42(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__42\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__when_PhyTx_l95 
        = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder_raw_data_valid) 
            & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__emitEncoding))) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__emitEncoding) 
           | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder_raw_data_valid));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing 
        = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_raw_data_valid) 
            & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__emitHeader))) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__emitCrc) 
           | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_raw_data_valid));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid 
        = (1U & ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))
                  ? (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid))
                  : (1U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready 
        = ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))
            ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid)
            : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status)) 
               & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid) 
                  & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_ready))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
        if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_valid 
                = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid) 
                   & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid));
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_raw_data_valid) 
           | (0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 5U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3 
        = ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 4U)) | (0x7fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                         >> 1U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2));
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__when_PhyTx_l71 
        = ((7U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter)) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_valid) 
              & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_valueNext 
        = (0x3ffU & ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_value) 
                     + (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__when_PhyTx_l95_1 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__emitEncoding));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext 
        = (((0x87U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_valid) 
           | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__last_padding));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 6U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4 
        = ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 3U)) | (0x7fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                         >> 1U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_valueNext 
        = (((0x87U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full)));
}
