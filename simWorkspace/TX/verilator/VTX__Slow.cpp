// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTX.h for the primary calling header

#include "VTX.h"
#include "VTX__Syms.h"

//==========
SData/*11:0*/ VTX::__Vtable1_TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i[8];

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
    // Variables
    WData/*767:0*/ __Vtemp1[24];
    WData/*767:0*/ __Vtemp2[24];
    // Body
    vlTOPp->TX__DOT__phy_header_extender__DOT____Vxrand1 
        = VL_RAND_RESET_I(1);
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vxrand1 
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
    __Vtemp1[0xaU] = 0x312f5458U;
    __Vtemp1[0xbU] = 0x6a6f625fU;
    __Vtemp1[0xcU] = 0x746d702fU;
    __Vtemp1[0xdU] = 0x4543542fU;
    __Vtemp1[0xeU] = 0x50524f4aU;
    __Vtemp1[0xfU] = 0x4147495fU;
    __Vtemp1[0x10U] = 0x74732f4dU;
    __Vtemp1[0x11U] = 0x6f6a6563U;
    __Vtemp1[0x12U] = 0x65615072U;
    __Vtemp1[0x13U] = 0x6e2f4964U;
    __Vtemp1[0x14U] = 0x73646f77U;
    __Vtemp1[0x15U] = 0x2f6d6973U;
    __Vtemp1[0x16U] = 0x686f6d65U;
    __Vtemp1[0x17U] = 0x2fU;
    VL_READMEM_N(false, 12, 16, 0, VL_CVT_PACK_STR_NW(24, __Vtemp1)
                 , vlTOPp->TX__DOT__stf_preamble_adder__DOT__I_mem
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
    __Vtemp2[0xaU] = 0x312f5458U;
    __Vtemp2[0xbU] = 0x6a6f625fU;
    __Vtemp2[0xcU] = 0x746d702fU;
    __Vtemp2[0xdU] = 0x4543542fU;
    __Vtemp2[0xeU] = 0x50524f4aU;
    __Vtemp2[0xfU] = 0x4147495fU;
    __Vtemp2[0x10U] = 0x74732f4dU;
    __Vtemp2[0x11U] = 0x6f6a6563U;
    __Vtemp2[0x12U] = 0x65615072U;
    __Vtemp2[0x13U] = 0x6e2f4964U;
    __Vtemp2[0x14U] = 0x73646f77U;
    __Vtemp2[0x15U] = 0x2f6d6973U;
    __Vtemp2[0x16U] = 0x686f6d65U;
    __Vtemp2[0x17U] = 0x2fU;
    VL_READMEM_N(false, 12, 16, 0, VL_CVT_PACK_STR_NW(24, __Vtemp2)
                 , vlTOPp->TX__DOT__stf_preamble_adder__DOT__Q_mem
                 , 0, ~VL_ULL(0));
}

void VTX::_settle__TOP__19(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__19\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rf_data_payload_cha_i = (0xfffU & vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0);
    vlTOPp->rf_data_payload_cha_q = (0xfffU & (vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                               >> 0xcU));
    vlTOPp->TX__DOT__phy_header_extender__DOT__when_PhyTx_l316 
        = (7U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__counter));
    vlTOPp->TX__DOT__phy_header_extender__DOT__when_PhyTx_l328 
        = (0U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__counter));
    vlTOPp->TX__DOT__phy_tx_oversampling__DOT___zz_cnt 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TX__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->TX__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l76 
        = (9U == (IData)(vlTOPp->TX__DOT__stf_preamble_adder__DOT__repeatCnt));
    vlTOPp->TX__DOT__phy_header_extender_result_data_payload_last = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
            if ((2U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
                vlTOPp->TX__DOT__phy_header_extender_result_data_payload_last 
                    = (1U & vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0);
            }
        }
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_payload_fragment_cha_q = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
            if ((2U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
                vlTOPp->TX__DOT__phy_header_extender_result_data_payload_fragment_cha_q 
                    = (0xfffU & (vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 
                                 >> 0xdU));
            }
        }
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
    vlTOPp->__Vtableidx1 = (7U & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__counter));
    vlTOPp->TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i 
        = vlTOPp->__Vtable1_TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i
        [vlTOPp->__Vtableidx1];
    vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
        = ((0U == (IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
            ? 0xa59a59U : ((1U == (IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                            ? 0xa595a7U : ((2U == (IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                                            ? 0x5a7a59U
                                            : 0x5a75a7U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__when_PhyTx_l40 
        = (1U & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc)));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_payload_last = 0U;
    if (vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc) {
        if ((3U == (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__counter))) {
            vlTOPp->TX__DOT__phy_tx_crc_result_data_payload_last = 1U;
        }
    }
    vlTOPp->TX__DOT__mod_data_div__DOT___zz_base_cnt 
        = (0xfU & ((IData)(vlTOPp->TX__DOT__mod_data_div__DOT__base_cnt) 
                   + (IData)(vlTOPp->div_cnt_step)));
    vlTOPp->TX__DOT__mod_data_div_unit_data_payload_last 
        = ((IData)(vlTOPp->TX__DOT__mod_data_div__DOT__base_last) 
           & ((IData)(vlTOPp->TX__DOT__mod_data_div__DOT__base_cnt) 
              == (IData)(vlTOPp->div_cnt_limit)));
    vlTOPp->TX__DOT__mod_data_div__DOT__base_ready 
        = (((IData)(vlTOPp->div_cnt_limit) == (IData)(vlTOPp->TX__DOT__mod_data_div__DOT__base_cnt)) 
           & (IData)(vlTOPp->div_enable));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__mod_data_div__DOT__when_dataDivDynamic_l52 
        = ((IData)(vlTOPp->TX__DOT__mod_data_div__DOT__base_cnt) 
           == (IData)(vlTOPp->div_cnt_limit));
    vlTOPp->TX__DOT__stf_preamble_adder__DOT___zz_cnt 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->TX__DOT__stf_preamble_adder__DOT__cnt)));
    vlTOPp->TX__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l74 
        = (0xfU == (IData)(vlTOPp->TX__DOT__stf_preamble_adder__DOT__cnt));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 1U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__isEncoding)
            ? (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                        >> 1U)) : 0U);
    vlTOPp->TX__DOT__phy_tx_oversampling_result_data_payload_last 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_oversampling__DOT__raw_last) 
           & (7U == (IData)(vlTOPp->TX__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->TX__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_filter__DOT__last_padding)
            ? 0U : ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_oversampling__DOT__cnt))
                     ? (0xfffU & (vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                  >> 1U)) : 0U));
    vlTOPp->TX__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_filter__DOT__last_padding)
            ? 0U : ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_oversampling__DOT__cnt))
                     ? (0xfffU & (vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                  >> 0xdU)) : 0U));
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
    vlTOPp->TX__DOT__phy_header_extender_result_data_payload_fragment_cha_i = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_payload_fragment_cha_i 
            = (0xfffU & ((1U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))
                          ? (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i)
                          : ((2U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))
                              ? ((1U & ((9U >= (0xfU 
                                                & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__counter)))
                                         ? ((((IData)(vlTOPp->mod_method_select) 
                                              << 8U) 
                                             | (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__pkg_size_payload_1)) 
                                            >> (0xfU 
                                                & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__counter)))
                                         : (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT____Vxrand1)))
                                  ? 0x3ffU : 0xc01U)
                              : (vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 
                                 >> 1U))));
    }
}

void VTX::_settle__TOP__20(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__20\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port_1 
        = ((0x1ffe000U & (((0U == (IData)(vlTOPp->mod_method_select))
                            ? ((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                ? ((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                    ? 0x7ff000U : 0x801000U)
                                : 0U) : ((1U == (IData)(vlTOPp->mod_method_select))
                                          ? ((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                              ? vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                              : 0U)
                                          : ((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                  ? 0xc35U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                   ? 0xebcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                                              : 0U))) 
                          << 0xdU)) | ((0x1ffeU & (
                                                   ((0U 
                                                     == (IData)(vlTOPp->mod_method_select))
                                                     ? 
                                                    ((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                      ? 
                                                     (((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                                        ? 0x7ff000U
                                                        : 0x801000U) 
                                                      >> 0xcU)
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlTOPp->mod_method_select))
                                                      ? 
                                                     ((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                       ? 
                                                      (vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                                       >> 0xcU)
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                            >> 2U)))
                                                        ? 0xc35U
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                             >> 2U)))
                                                         ? 0xebcU
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                              >> 2U)))
                                                          ? 0x3caU
                                                          : 0x143U)))
                                                       : 0U))) 
                                                   << 1U)) 
                                       | ((0U == (IData)(vlTOPp->mod_method_select))
                                           ? ((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid) 
                                              & (IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last))
                                           : ((1U == (IData)(vlTOPp->mod_method_select))
                                               ? ((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid) 
                                                  & (IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last))
                                               : ((IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid) 
                                                  & (IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last))))));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0 
        = (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
            << 1U) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0));
    vlTOPp->TX__DOT__mod_rtl__DOT__flowDeMux_1_outputs_0_payload_last 
        = ((0U == (IData)(vlTOPp->mod_method_select)) 
           & (IData)(vlTOPp->TX__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->TX__DOT__mod_rtl__DOT__flowDeMux_1_outputs_1_payload_last 
        = ((1U == (IData)(vlTOPp->mod_method_select)) 
           & (IData)(vlTOPp->TX__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->TX__DOT__mod_rtl__DOT__flowDeMux_1_outputs_2_payload_last 
        = ((2U == (IData)(vlTOPp->mod_method_select)) 
           & (IData)(vlTOPp->TX__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__pipeline_halt = ((0xfeU & (IData)(vlTOPp->TX__DOT__pipeline_halt)) 
                                      | (0x12U > ((
                                                   ((~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                    & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                        - (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))));
    vlTOPp->TX__DOT__pipeline_halt = ((0xfdU & (IData)(vlTOPp->TX__DOT__pipeline_halt)) 
                                      | ((0x12U > (
                                                   (((~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                     & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                    << 5U) 
                                                   | (0x1fU 
                                                      & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                         - (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                         << 1U));
    vlTOPp->TX__DOT__pipeline_halt = ((0xfbU & (IData)(vlTOPp->TX__DOT__pipeline_halt)) 
                                      | ((0x12U > (
                                                   (((~ (IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                     & (IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                    << 5U) 
                                                   | (0x1fU 
                                                      & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                                                         - (IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                         << 2U));
    vlTOPp->TX__DOT__pipeline_halt = ((0xf7U & (IData)(vlTOPp->TX__DOT__pipeline_halt)) 
                                      | ((0x12U > (
                                                   (((~ (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                     & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                    << 5U) 
                                                   | (0x1fU 
                                                      & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                         - (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                         << 3U));
    vlTOPp->TX__DOT__pipeline_halt = ((0xefU & (IData)(vlTOPp->TX__DOT__pipeline_halt)) 
                                      | ((0x12U > (
                                                   (((~ (IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                     & (IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                    << 5U) 
                                                   | (0x1fU 
                                                      & ((IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                                                         - (IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                         << 4U));
    vlTOPp->TX__DOT__pipeline_halt = ((0xdfU & (IData)(vlTOPp->TX__DOT__pipeline_halt)) 
                                      | ((0x12U > (
                                                   (((~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                     & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                    << 5U) 
                                                   | (0x1fU 
                                                      & ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                         - (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                         << 5U));
    vlTOPp->TX__DOT__pipeline_halt = ((0xbfU & (IData)(vlTOPp->TX__DOT__pipeline_halt)) 
                                      | ((0x12U > (
                                                   (((~ (IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                     & (IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                    << 5U) 
                                                   | (0x1fU 
                                                      & ((IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                         - (IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                         << 6U));
    vlTOPp->TX__DOT__pipeline_halt = ((0x7fU & (IData)(vlTOPp->TX__DOT__pipeline_halt)) 
                                      | ((0x12U > (
                                                   (((~ (IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                     & (IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                    << 5U) 
                                                   | (0x1fU 
                                                      & ((IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                         - (IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                         << 7U));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 2U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 7U)) | (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_valid_1) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_information_gen_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_full)) 
                 & (~ (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_full))));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushing 
        = (((IData)(vlTOPp->raw_data_valid) & (~ (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_full))) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__stf_preamble_adder__DOT__preamble_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TX__DOT__stf_preamble_adder_raw_data_ready 
        = ((IData)(vlTOPp->TX__DOT__stf_preamble_adder__DOT__raw_ready) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
        if ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready 
                = (1U & (~ (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full)));
        }
    }
    vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_padder_raw_data_ready = 
        (1U & ((~ (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__data_last)) 
               & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))))));
}

void VTX::_settle__TOP__21(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__21\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_filter_raw_data_ready = 
        (1U & ((~ (IData)(vlTOPp->TX__DOT__phy_tx_filter__DOT__last_padding)) 
               & (~ (IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing 
        = (((0U == (IData)(vlTOPp->mod_method_select))
             ? (IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
             : ((1U == (IData)(vlTOPp->mod_method_select))
                 ? (IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                 : (IData)(vlTOPp->TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid))) 
           & (~ (IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_valid_1) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_crc_raw_data_ready = (1U 
                                                  & ((~ (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc)) 
                                                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_header_extender_raw_data_ready = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
            if ((2U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
                vlTOPp->TX__DOT__phy_header_extender_raw_data_ready 
                    = (1U & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)));
            }
        }
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 3U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 6U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                         >> 1U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender__DOT__pkg_size_fire 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__pkg_size_ready_1));
    vlTOPp->raw_data_ready = vlTOPp->TX__DOT__phy_tx_information_gen_raw_data_ready;
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__raw_data_fire_3 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->TX__DOT__phy_tx_information_gen_raw_data_ready));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__when_PhyTx_l252 
        = (((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->TX__DOT__phy_tx_information_gen_raw_data_ready)) 
           & (IData)(vlTOPp->raw_data_payload_last));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo_io_pop_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_crc_raw_data_valid = ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability_io_pop_valid) 
                                                  & (~ (IData)(vlTOPp->TX__DOT__pipeline_halt)));
    vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->rf_data_valid = vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid;
    vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid) 
           & (IData)(vlTOPp->rf_data_ready));
    vlTOPp->TX__DOT__mod_data_div__DOT__base_data_fire 
        = (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid) 
            & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
                  >> 4U))) & (IData)(vlTOPp->TX__DOT__mod_data_div__DOT__base_ready));
    vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TX__DOT__mod_data_div__DOT__base_ready) 
              & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
                    >> 4U))));
    vlTOPp->TX__DOT__phy_tx_encoder_raw_data_valid 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
                 >> 2U)));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__isEncoding) 
              & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
                    >> 2U))));
    vlTOPp->TX__DOT__stf_preamble_adder_raw_data_valid 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
                 >> 7U)));
    vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TX__DOT__stf_preamble_adder_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
                    >> 7U))));
    vlTOPp->TX__DOT__phy_tx_oversampling_raw_data_ready 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_filter_raw_data_ready) 
           & (0U == (IData)(vlTOPp->TX__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender_raw_data_valid 
        = ((IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
                 >> 5U)));
    vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
                    >> 3U))));
    vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_valid 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
                 >> 3U)));
    vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_raw_data_ready) 
              & (~ (IData)(vlTOPp->TX__DOT__pipeline_halt))));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
                    >> 1U))));
    vlTOPp->TX__DOT__phy_tx_padder_raw_data_valid = 
        ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid) 
         & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
               >> 1U)));
    vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TX__DOT__phy_header_extender_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
                    >> 5U))));
    vlTOPp->TX__DOT__phy_tx_oversampling_raw_data_valid 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
                 >> 6U)));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 4U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 5U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 1U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender__DOT__pkg_size_fire) {
        vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_valueNext 
        = (((0xfbU == (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))));
}

void VTX::_settle__TOP__22(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__22\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_crc_result_data_valid = 
        ((IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc) 
         | (IData)(vlTOPp->TX__DOT__phy_tx_crc_raw_data_valid));
    vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__isEncoding) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_encoder_raw_data_valid));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__when_PhyTx_l97 
        = (((IData)(vlTOPp->TX__DOT__phy_tx_encoder_raw_data_valid) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__isEncoding)) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__stf_preamble_adder__DOT__raw_data_fire 
        = ((IData)(vlTOPp->TX__DOT__stf_preamble_adder_raw_data_valid) 
           & (IData)(vlTOPp->TX__DOT__stf_preamble_adder_raw_data_ready));
    vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TX__DOT__phy_tx_oversampling_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TX__DOT__pipeline_halt) 
                    >> 6U))));
    vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_header_extender_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_valid 
            = ((1U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status)) 
               | ((2U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status)) 
                  | (IData)(vlTOPp->TX__DOT__phy_header_extender_raw_data_valid)));
    }
    vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid 
        = (1U & ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
                  ? (~ (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_valid))
                  : (1U != (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready 
        = ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
            ? (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_valid)
            : ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status)) 
               & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_valid) 
                  & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready))));
    vlTOPp->TX__DOT__phy_tx_scrambler_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
        if ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            vlTOPp->TX__DOT__phy_tx_scrambler_result_data_valid 
                = ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid) 
                   & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_valid));
        }
    }
    vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_padder_result_data_valid 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__data_last) 
           | (IData)(vlTOPp->TX__DOT__phy_tx_padder_raw_data_valid));
    vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_oversampling_result_data_valid 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_oversampling_raw_data_valid) 
           | (0U != (IData)(vlTOPp->TX__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
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
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_valueNext 
        = (((0xfbU == (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_padder__DOT__when_PhyTx_l70 
        = (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_valid) 
            & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__data_last));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_oversampling_result_data_valid) 
           | (IData)(vlTOPp->TX__DOT__phy_tx_filter__DOT__last_padding));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
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
    vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
}

void VTX::_settle__TOP__23(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__23\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
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
    vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 8U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 1U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 1U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
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
}

void VTX::_settle__TOP__24(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__24\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->__Vclklast__TOP__clk = (1U & (~ (IData)(vlTOPp->clk)));
    vlTOPp->__Vclklast__TOP__reset = (1U & (~ (IData)(vlTOPp->reset)));
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
    vlTOPp->_settle__TOP__19(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__20(vlSymsp);
    vlTOPp->_settle__TOP__21(vlSymsp);
    vlTOPp->_settle__TOP__22(vlSymsp);
    vlTOPp->_settle__TOP__23(vlSymsp);
    vlTOPp->_settle__TOP__24(vlSymsp);
}

void VTX::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload_last = VL_RAND_RESET_I(1);
    raw_data_payload_fragment = VL_RAND_RESET_I(8);
    rf_data_valid = VL_RAND_RESET_I(1);
    rf_data_ready = VL_RAND_RESET_I(1);
    rf_data_payload_cha_i = VL_RAND_RESET_I(12);
    rf_data_payload_cha_q = VL_RAND_RESET_I(12);
    div_enable = VL_RAND_RESET_I(1);
    div_cnt_step = VL_RAND_RESET_I(4);
    div_cnt_limit = VL_RAND_RESET_I(4);
    mod_method_select = VL_RAND_RESET_I(2);
    clk = 0;
    reset = 0;
    TX__DOT__phy_tx_crc_raw_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_raw_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder_raw_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_raw_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_raw_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_oversampling_raw_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__stf_preamble_adder_raw_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__mod_data_div_unit_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_payload_fragment_cha_i = VL_RAND_RESET_I(12);
    TX__DOT__phy_header_extender_result_data_payload_fragment_cha_q = VL_RAND_RESET_I(12);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_oversampling_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_oversampling_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_oversampling_result_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__stf_preamble_adder_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__pipeline_halt = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_cnt = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_valid_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_payload_1 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_information_gen__DOT__when_PhyTx_l252 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__raw_data_fire_3 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vxrand1 = VL_RAND_RESET_I(9);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(9);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<252; ++__Vi0) {
            TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(9);
    }}
    TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vlvbound2 = VL_RAND_RESET_I(9);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(4);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(4);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(4);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(4);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(9);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(9);
    }}
    TX__DOT__phy_tx_crc__DOT__crc_1_result = VL_RAND_RESET_I(32);
    TX__DOT__phy_tx_crc__DOT__emitCrc = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc__DOT__counter = VL_RAND_RESET_I(2);
    TX__DOT__phy_tx_crc__DOT__when_PhyTx_l40 = VL_RAND_RESET_I(1);
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
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(9);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(9);
    }}
    TX__DOT__phy_tx_padder__DOT__data_last = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder__DOT__when_PhyTx_l70 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(9);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            TX__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(9);
    }}
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment = VL_RAND_RESET_I(8);
    TX__DOT__phy_tx_encoder__DOT__isEncoding = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_encoder__DOT__when_PhyTx_l97 = VL_RAND_RESET_I(1);
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
    TX__DOT__phy_tx_puncher__DOT__raw_data_fragment = VL_RAND_RESET_I(16);
    TX__DOT__phy_tx_puncher__DOT__raw_data_valid_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_puncher__DOT__raw_data_last = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(17);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            TX__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(17);
    }}
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
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(17);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            TX__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(17);
    }}
    TX__DOT__mod_data_div__DOT___zz_base_cnt = VL_RAND_RESET_I(4);
    TX__DOT__mod_data_div__DOT__unit_valid = VL_RAND_RESET_I(1);
    TX__DOT__mod_data_div__DOT__base_last = VL_RAND_RESET_I(1);
    TX__DOT__mod_data_div__DOT__base_cnt = VL_RAND_RESET_I(4);
    TX__DOT__mod_data_div__DOT__base_ready = VL_RAND_RESET_I(1);
    TX__DOT__mod_data_div__DOT__base_buffer = VL_RAND_RESET_I(16);
    TX__DOT__mod_data_div__DOT__loaded = VL_RAND_RESET_I(1);
    TX__DOT__mod_data_div__DOT__base_data_fire = VL_RAND_RESET_I(1);
    TX__DOT__mod_data_div__DOT__when_dataDivDynamic_l52 = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl__DOT__flowDeMux_1_outputs_0_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl__DOT__flowDeMux_1_outputs_1_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl__DOT__flowDeMux_1_outputs_2_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 = VL_RAND_RESET_I(24);
    TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_last = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment = VL_RAND_RESET_I(2);
    TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment = VL_RAND_RESET_I(4);
    TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(25);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port_1 = VL_RAND_RESET_I(25);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            TX__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(25);
    }}
    TX__DOT__phy_header_extender__DOT____Vxrand1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i = VL_RAND_RESET_I(12);
    TX__DOT__phy_header_extender__DOT__header_status = VL_RAND_RESET_I(2);
    TX__DOT__phy_header_extender__DOT__counter = VL_RAND_RESET_I(5);
    TX__DOT__phy_header_extender__DOT__pkg_size_ready_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__pkg_size_payload_1 = VL_RAND_RESET_I(8);
    TX__DOT__phy_header_extender__DOT__pkg_size_fire = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__when_PhyTx_l316 = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender__DOT__when_PhyTx_l328 = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(25);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            TX__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(25);
    }}
    TX__DOT__phy_tx_oversampling__DOT___zz_cnt = VL_RAND_RESET_I(3);
    TX__DOT__phy_tx_oversampling__DOT__cnt = VL_RAND_RESET_I(3);
    TX__DOT__phy_tx_oversampling__DOT__raw_last = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0 = VL_RAND_RESET_I(12);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1 = VL_RAND_RESET_I(12);
    TX__DOT__phy_tx_filter__DOT__last_padding = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_2 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_3 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_4 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_5 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_6 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_7 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_8 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_9 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_10 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_11 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_12 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_13 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_14 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_15 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_16 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_17 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_18 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_19 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_20 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_21 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_22 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_23 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_24 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_25 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_15 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_16 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_17 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_18 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_19 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_20 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_21 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_22 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_23 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_24 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_25 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_26 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_29 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_30 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_31 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32 = VL_RAND_RESET_I(7);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_66__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_67__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_68__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_69__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_70__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_71__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_72__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_73__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_74__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_75__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_76__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_77__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_78__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_79__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_80__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_81__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_82__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_83__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_84__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_85__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_86__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_87__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_88__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_89__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_90__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_91__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_92__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_93__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_94__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_95__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_96__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_97__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_98__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_99__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_100__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_101__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_102__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_103__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_104__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_105__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_106__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_107__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_108__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_109__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_110__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_111__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_112__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_113__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_114__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_115__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_116__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_117__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_118__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_119__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_120__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_121__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_122__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_123__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_124__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_125__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_126__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_127__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_128__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_129__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_130__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_131__DOT__previous_adder_data = VL_RAND_RESET_I(19);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(25);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            TX__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(25);
    }}
    TX__DOT__stf_preamble_adder__DOT___zz_I_mem_port0 = VL_RAND_RESET_I(12);
    TX__DOT__stf_preamble_adder__DOT___zz_Q_mem_port0 = VL_RAND_RESET_I(12);
    TX__DOT__stf_preamble_adder__DOT___zz_cnt = VL_RAND_RESET_I(4);
    TX__DOT__stf_preamble_adder__DOT__cnt = VL_RAND_RESET_I(4);
    TX__DOT__stf_preamble_adder__DOT__repeatCnt = VL_RAND_RESET_I(5);
    TX__DOT__stf_preamble_adder__DOT__raw_ready = VL_RAND_RESET_I(1);
    TX__DOT__stf_preamble_adder__DOT__preamble_data_i = VL_RAND_RESET_I(12);
    TX__DOT__stf_preamble_adder__DOT__preamble_data_q = VL_RAND_RESET_I(12);
    TX__DOT__stf_preamble_adder__DOT__preamble_valid = VL_RAND_RESET_I(1);
    TX__DOT__stf_preamble_adder__DOT__preamble_last = VL_RAND_RESET_I(1);
    TX__DOT__stf_preamble_adder__DOT__preamble_states = VL_RAND_RESET_I(2);
    TX__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l74 = VL_RAND_RESET_I(1);
    TX__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l76 = VL_RAND_RESET_I(1);
    TX__DOT__stf_preamble_adder__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            TX__DOT__stf_preamble_adder__DOT__I_mem[__Vi0] = VL_RAND_RESET_I(12);
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            TX__DOT__stf_preamble_adder__DOT__Q_mem[__Vi0] = VL_RAND_RESET_I(12);
    }}
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(24);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            TX__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(24);
    }}
    __Vtableidx1 = 0;
    __Vtable1_TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i[0] = 0xc01U;
    __Vtable1_TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i[1] = 0xc01U;
    __Vtable1_TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i[2] = 0x3ffU;
    __Vtable1_TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i[3] = 0x3ffU;
    __Vtable1_TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i[4] = 0xc01U;
    __Vtable1_TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i[5] = 0xc01U;
    __Vtable1_TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i[6] = 0x3ffU;
    __Vtable1_TX__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i[7] = 0xc01U;
    __Vdly__TX__DOT__phy_tx_information_gen__DOT__pkg_size_cnt = VL_RAND_RESET_I(8);
    __Vdly__TX__DOT__phy_tx_crc__DOT__counter = VL_RAND_RESET_I(2);
    __Vdly__TX__DOT__phy_tx_padder__DOT__data_last = VL_RAND_RESET_I(1);
    __Vdly__TX__DOT__phy_tx_scrambler__DOT__scrambler_status = VL_RAND_RESET_I(2);
    __Vdly__TX__DOT__mod_data_div__DOT__base_cnt = VL_RAND_RESET_I(4);
    __Vdly__TX__DOT__mod_data_div__DOT__base_buffer = VL_RAND_RESET_I(16);
    __Vdly__TX__DOT__phy_header_extender__DOT__header_status = VL_RAND_RESET_I(2);
    __Vdly__TX__DOT__phy_header_extender__DOT__counter = VL_RAND_RESET_I(5);
    __Vdly__TX__DOT__phy_tx_oversampling__DOT__cnt = VL_RAND_RESET_I(3);
    __Vdly__TX__DOT__stf_preamble_adder__DOT__cnt = VL_RAND_RESET_I(4);
    __Vdly__TX__DOT__stf_preamble_adder__DOT__repeatCnt = VL_RAND_RESET_I(5);
    __Vdly__TX__DOT__stf_preamble_adder__DOT__preamble_states = VL_RAND_RESET_I(2);
    __Vdlyvdim0__TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(9);
    __Vdlyvset__TX__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__TX__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0;
    __Vdlyvval__TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0 = VL_RAND_RESET_I(9);
    __Vdlyvset__TX__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__TX__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0;
    _ctor_var_reset_1();
}
