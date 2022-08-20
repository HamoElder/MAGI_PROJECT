// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

//==========
SData/*11:0*/ VLoopBackTest::__Vtable1_LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i[8];
CData/*1:0*/ VLoopBackTest::__Vtable2_LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__unit_data_i[128];
CData/*1:0*/ VLoopBackTest::__Vtable2_LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__unit_data_q[128];
CData/*0:0*/ VLoopBackTest::__Vtable3_LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next[128];
CData/*0:0*/ VLoopBackTest::__Vtable3_LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_last_next[128];
CData/*0:0*/ VLoopBackTest::__Vtable3_LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path_valid[128];
CData/*0:0*/ VLoopBackTest::__Vtable3_LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path_last[128];
CData/*0:0*/ VLoopBackTest::__Vtable3_LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_ready_1[128];
WData/*87:0*/ VLoopBackTest::__Vtable4_LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state_string[8][3];
QData/*63:0*/ VLoopBackTest::__Vtable5_LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status_string[8];
CData/*0:0*/ VLoopBackTest::__Vtable6_LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker_raw_data_ready[16];

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
    WData/*1023:0*/ __Vtemp1[32];
    WData/*959:0*/ __Vtemp2[30];
    WData/*895:0*/ __Vtemp3[28];
    WData/*895:0*/ __Vtemp4[28];
    WData/*959:0*/ __Vtemp5[30];
    WData/*959:0*/ __Vtemp6[30];
    // Body
    vlTOPp->axil4Ctrl_rresp = 0U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT____Vxrand1 
        = VL_RAND_RESET_I(1);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT____Vxrand6 
        = VL_RAND_RESET_Q(64);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT____Vxrand4 
        = VL_RAND_RESET_Q(64);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT____Vxrand2 
        = VL_RAND_RESET_Q(64);
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f726f6dU;
    __Vtemp1[2U] = 0x68696674U;
    __Vtemp1[3U] = 0x65735f73U;
    __Vtemp1[4U] = 0x73746174U;
    __Vtemp1[5U] = 0x6f72655fU;
    __Vtemp1[6U] = 0x62755f63U;
    __Vtemp1[7U] = 0x65725f74U;
    __Vtemp1[8U] = 0x65636f64U;
    __Vtemp1[9U] = 0x72785f64U;
    __Vtemp1[0xaU] = 0x7068795fU;
    __Vtemp1[0xbU] = 0x7665725fU;
    __Vtemp1[0xcU] = 0x65636569U;
    __Vtemp1[0xdU] = 0x656c5f72U;
    __Vtemp1[0xeU] = 0x706c6576U;
    __Vtemp1[0xfU] = 0x765f746fU;
    __Vtemp1[0x10U] = 0x6573742eU;
    __Vtemp1[0x11U] = 0x61636b54U;
    __Vtemp1[0x12U] = 0x6f6f7042U;
    __Vtemp1[0x13U] = 0x5f312f4cU;
    __Vtemp1[0x14U] = 0x2f6a6f62U;
    __Vtemp1[0x15U] = 0x2f746d70U;
    __Vtemp1[0x16U] = 0x4a454354U;
    __Vtemp1[0x17U] = 0x5f50524fU;
    __Vtemp1[0x18U] = 0x4d414749U;
    __Vtemp1[0x19U] = 0x6374732fU;
    __Vtemp1[0x1aU] = 0x726f6a65U;
    __Vtemp1[0x1bU] = 0x64656150U;
    __Vtemp1[0x1cU] = 0x75702f49U;
    __Vtemp1[0x1dU] = 0x4261636bU;
    __Vtemp1[0x1eU] = 0x6d6e742fU;
    __Vtemp1[0x1fU] = 0x2fU;
    VL_READMEM_N(false, 6, 128, 0, VL_CVT_PACK_STR_NW(32, __Vtemp1)
                 , vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__states_shift_rom
                 , 0, ~VL_ULL(0));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(9);
    __Vtemp2[0U] = 0x2e62696eU;
    __Vtemp2[1U] = 0x5f726f6dU;
    __Vtemp2[2U] = 0x64617461U;
    __Vtemp2[3U] = 0x5f696e5fU;
    __Vtemp2[4U] = 0x636f7265U;
    __Vtemp2[5U] = 0x7462755fU;
    __Vtemp2[6U] = 0x6465725fU;
    __Vtemp2[7U] = 0x6465636fU;
    __Vtemp2[8U] = 0x5f72785fU;
    __Vtemp2[9U] = 0x5f706879U;
    __Vtemp2[0xaU] = 0x69766572U;
    __Vtemp2[0xbU] = 0x72656365U;
    __Vtemp2[0xcU] = 0x76656c5fU;
    __Vtemp2[0xdU] = 0x6f706c65U;
    __Vtemp2[0xeU] = 0x2e765f74U;
    __Vtemp2[0xfU] = 0x54657374U;
    __Vtemp2[0x10U] = 0x4261636bU;
    __Vtemp2[0x11U] = 0x4c6f6f70U;
    __Vtemp2[0x12U] = 0x625f312fU;
    __Vtemp2[0x13U] = 0x702f6a6fU;
    __Vtemp2[0x14U] = 0x542f746dU;
    __Vtemp2[0x15U] = 0x4f4a4543U;
    __Vtemp2[0x16U] = 0x495f5052U;
    __Vtemp2[0x17U] = 0x2f4d4147U;
    __Vtemp2[0x18U] = 0x65637473U;
    __Vtemp2[0x19U] = 0x50726f6aU;
    __Vtemp2[0x1aU] = 0x49646561U;
    __Vtemp2[0x1bU] = 0x6b75702fU;
    __Vtemp2[0x1cU] = 0x2f426163U;
    __Vtemp2[0x1dU] = 0x2f6d6e74U;
    VL_READMEM_N(false, 1, 128, 0, VL_CVT_PACK_STR_NW(30, __Vtemp2)
                 , vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__in_data_rom
                 , 0, ~VL_ULL(0));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(9);
    __Vtemp3[0U] = 0x2e62696eU;
    __Vtemp3[1U] = 0x5f6d656dU;
    __Vtemp3[2U] = 0x65725f49U;
    __Vtemp3[3U] = 0x5f616464U;
    __Vtemp3[4U] = 0x6d626c65U;
    __Vtemp3[5U] = 0x70726561U;
    __Vtemp3[6U] = 0x7374665fU;
    __Vtemp3[7U] = 0x7465725fU;
    __Vtemp3[8U] = 0x736d6974U;
    __Vtemp3[9U] = 0x7472616eU;
    __Vtemp3[0xaU] = 0x76656c5fU;
    __Vtemp3[0xbU] = 0x6f706c65U;
    __Vtemp3[0xcU] = 0x2e765f74U;
    __Vtemp3[0xdU] = 0x54657374U;
    __Vtemp3[0xeU] = 0x4261636bU;
    __Vtemp3[0xfU] = 0x4c6f6f70U;
    __Vtemp3[0x10U] = 0x625f312fU;
    __Vtemp3[0x11U] = 0x702f6a6fU;
    __Vtemp3[0x12U] = 0x542f746dU;
    __Vtemp3[0x13U] = 0x4f4a4543U;
    __Vtemp3[0x14U] = 0x495f5052U;
    __Vtemp3[0x15U] = 0x2f4d4147U;
    __Vtemp3[0x16U] = 0x65637473U;
    __Vtemp3[0x17U] = 0x50726f6aU;
    __Vtemp3[0x18U] = 0x49646561U;
    __Vtemp3[0x19U] = 0x6b75702fU;
    __Vtemp3[0x1aU] = 0x2f426163U;
    __Vtemp3[0x1bU] = 0x2f6d6e74U;
    VL_READMEM_N(false, 12, 16, 0, VL_CVT_PACK_STR_NW(28, __Vtemp3)
                 , vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__I_mem
                 , 0, ~VL_ULL(0));
    __Vtemp4[0U] = 0x2e62696eU;
    __Vtemp4[1U] = 0x5f6d656dU;
    __Vtemp4[2U] = 0x65725f51U;
    __Vtemp4[3U] = 0x5f616464U;
    __Vtemp4[4U] = 0x6d626c65U;
    __Vtemp4[5U] = 0x70726561U;
    __Vtemp4[6U] = 0x7374665fU;
    __Vtemp4[7U] = 0x7465725fU;
    __Vtemp4[8U] = 0x736d6974U;
    __Vtemp4[9U] = 0x7472616eU;
    __Vtemp4[0xaU] = 0x76656c5fU;
    __Vtemp4[0xbU] = 0x6f706c65U;
    __Vtemp4[0xcU] = 0x2e765f74U;
    __Vtemp4[0xdU] = 0x54657374U;
    __Vtemp4[0xeU] = 0x4261636bU;
    __Vtemp4[0xfU] = 0x4c6f6f70U;
    __Vtemp4[0x10U] = 0x625f312fU;
    __Vtemp4[0x11U] = 0x702f6a6fU;
    __Vtemp4[0x12U] = 0x542f746dU;
    __Vtemp4[0x13U] = 0x4f4a4543U;
    __Vtemp4[0x14U] = 0x495f5052U;
    __Vtemp4[0x15U] = 0x2f4d4147U;
    __Vtemp4[0x16U] = 0x65637473U;
    __Vtemp4[0x17U] = 0x50726f6aU;
    __Vtemp4[0x18U] = 0x49646561U;
    __Vtemp4[0x19U] = 0x6b75702fU;
    __Vtemp4[0x1aU] = 0x2f426163U;
    __Vtemp4[0x1bU] = 0x2f6d6e74U;
    VL_READMEM_N(false, 12, 16, 0, VL_CVT_PACK_STR_NW(28, __Vtemp4)
                 , vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__Q_mem
                 , 0, ~VL_ULL(0));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(17);
    __Vtemp5[0U] = 0x2e62696eU;
    __Vtemp5[1U] = 0x5f6d656dU;
    __Vtemp5[2U] = 0x72655f49U;
    __Vtemp5[3U] = 0x725f636fU;
    __Vtemp5[4U] = 0x5f636f72U;
    __Vtemp5[5U] = 0x726f7373U;
    __Vtemp5[6U] = 0x666f5f63U;
    __Vtemp5[7U] = 0x72785f63U;
    __Vtemp5[8U] = 0x7068795fU;
    __Vtemp5[9U] = 0x7665725fU;
    __Vtemp5[0xaU] = 0x65636569U;
    __Vtemp5[0xbU] = 0x656c5f72U;
    __Vtemp5[0xcU] = 0x706c6576U;
    __Vtemp5[0xdU] = 0x765f746fU;
    __Vtemp5[0xeU] = 0x6573742eU;
    __Vtemp5[0xfU] = 0x61636b54U;
    __Vtemp5[0x10U] = 0x6f6f7042U;
    __Vtemp5[0x11U] = 0x5f312f4cU;
    __Vtemp5[0x12U] = 0x2f6a6f62U;
    __Vtemp5[0x13U] = 0x2f746d70U;
    __Vtemp5[0x14U] = 0x4a454354U;
    __Vtemp5[0x15U] = 0x5f50524fU;
    __Vtemp5[0x16U] = 0x4d414749U;
    __Vtemp5[0x17U] = 0x6374732fU;
    __Vtemp5[0x18U] = 0x726f6a65U;
    __Vtemp5[0x19U] = 0x64656150U;
    __Vtemp5[0x1aU] = 0x75702f49U;
    __Vtemp5[0x1bU] = 0x4261636bU;
    __Vtemp5[0x1cU] = 0x6d6e742fU;
    __Vtemp5[0x1dU] = 0x2fU;
    VL_READMEM_N(false, 12, 16, 0, VL_CVT_PACK_STR_NW(30, __Vtemp5)
                 , vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__I_mem
                 , 0, ~VL_ULL(0));
    __Vtemp6[0U] = 0x2e62696eU;
    __Vtemp6[1U] = 0x5f6d656dU;
    __Vtemp6[2U] = 0x72655f51U;
    __Vtemp6[3U] = 0x725f636fU;
    __Vtemp6[4U] = 0x5f636f72U;
    __Vtemp6[5U] = 0x726f7373U;
    __Vtemp6[6U] = 0x666f5f63U;
    __Vtemp6[7U] = 0x72785f63U;
    __Vtemp6[8U] = 0x7068795fU;
    __Vtemp6[9U] = 0x7665725fU;
    __Vtemp6[0xaU] = 0x65636569U;
    __Vtemp6[0xbU] = 0x656c5f72U;
    __Vtemp6[0xcU] = 0x706c6576U;
    __Vtemp6[0xdU] = 0x765f746fU;
    __Vtemp6[0xeU] = 0x6573742eU;
    __Vtemp6[0xfU] = 0x61636b54U;
    __Vtemp6[0x10U] = 0x6f6f7042U;
    __Vtemp6[0x11U] = 0x5f312f4cU;
    __Vtemp6[0x12U] = 0x2f6a6f62U;
    __Vtemp6[0x13U] = 0x2f746d70U;
    __Vtemp6[0x14U] = 0x4a454354U;
    __Vtemp6[0x15U] = 0x5f50524fU;
    __Vtemp6[0x16U] = 0x4d414749U;
    __Vtemp6[0x17U] = 0x6374732fU;
    __Vtemp6[0x18U] = 0x726f6a65U;
    __Vtemp6[0x19U] = 0x64656150U;
    __Vtemp6[0x1aU] = 0x75702f49U;
    __Vtemp6[0x1bU] = 0x4261636bU;
    __Vtemp6[0x1cU] = 0x6d6e742fU;
    __Vtemp6[0x1dU] = 0x2fU;
    VL_READMEM_N(false, 12, 16, 0, VL_CVT_PACK_STR_NW(30, __Vtemp6)
                 , vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__Q_mem
                 , 0, ~VL_ULL(0));
}

void VLoopBackTest::_settle__TOP__139(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__139\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__when_PhyTx_l316 
        = (7U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__when_PhyTx_l328 
        = (0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT___zz_cnt 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l76 
        = (9U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt));
    vlTOPp->LoopBackTest__DOT__receiver__DOT___zz___05Fzz_raw_data_payload_fragment 
        = (0x3fU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT___zz_raw_data_payload_fragment) 
                    >> 1U));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_impulse_cnt 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__impulse_cnt)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT___zz_mask_cnt 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__mask_cnt)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__when_ReorderLifo_l40 
        = (1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__fifo_pop_valve)));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_last = 0U;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
            if ((2U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_last 
                    = (1U & vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0);
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment_cha_q = 0U;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
            if ((2U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment_cha_q 
                    = (0xfffU & (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 
                                 >> 0xdU));
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__when_PhyRx_l297 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__symbol_cnt) 
           == (0x7ffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__desc_cnt) 
                         - (IData)(1U))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT___zz_result_2 
        = ((0x100000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                             >> 0xbU)) << 0x14U)) | 
           ((0x80000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                             >> 0xcU)) << 0x13U)) | 
            ((0x40000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                              >> 0xdU)) << 0x12U)) 
             | ((0x20000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                 >> 0xeU)) << 0x11U)) 
                | ((0x10000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                    >> 0xfU)) << 0x10U)) 
                   | ((0x8000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                      >> 0x10U)) << 0xfU)) 
                      | ((0x4000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                         >> 0x11U)) 
                                     << 0xeU)) | ((0x2000U 
                                                   & ((~ 
                                                       (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                        >> 0x12U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                           >> 0x13U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                                >> 0x1fU)))))))))))))))))))))));
    vlTOPp->__Vtableidx1 = (7U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i 
        = vlTOPp->__Vtable1_LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i
        [vlTOPp->__Vtableidx1];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
        = ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
            ? 0xa59a59U : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                            ? 0xa595a7U : ((2U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                                            ? 0x5a7a59U
                                            : 0x5a75a7U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT___zz_result_2 
        = ((0x100000U & ((~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                             >> 0xbU)) << 0x14U)) | 
           ((0x80000U & ((~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                             >> 0xcU)) << 0x13U)) | 
            ((0x40000U & ((~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                              >> 0xdU)) << 0x12U)) 
             | ((0x20000U & ((~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                 >> 0xeU)) << 0x11U)) 
                | ((0x10000U & ((~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                    >> 0xfU)) << 0x10U)) 
                   | ((0x8000U & ((~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                      >> 0x10U)) << 0xfU)) 
                      | ((0x4000U & ((~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                         >> 0x11U)) 
                                     << 0xeU)) | ((0x2000U 
                                                   & ((~ 
                                                       (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                        >> 0x12U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                           >> 0x13U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                                >> 0x1fU)))))))))))))))))))))));
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_init_state_valid 
        = ((0U != (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_status)) 
           & (1U != (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_status)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_shift 
        = ((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__demod_method))
            ? 1U : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__demod_method))
                     ? 2U : ((2U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__demod_method))
                              ? 4U : 0U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_0 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__scram_state) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__scram_state) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_0 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_state) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_state) 
                            >> 3U)));
    vlTOPp->result_data_payload_last = (1U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT___zz_logic_ram_port0));
    vlTOPp->result_data_payload_fragment = (0xffU & 
                                            ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__when_PhyTx_l40 
        = (1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__emitCrc)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_combination_base_data_valid 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_combination__DOT__base_data_valid_1;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT___zz_raw_data_fragment 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_fragment) 
                      >> 2U));
}

void VLoopBackTest::_settle__TOP__140(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__140\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_ram_select 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_select)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_decoded_ram_select 
        = (3U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                 - (IData)(1U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_1 
        = (3U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                 - (IData)(1U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2 
        = (3U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                 - (IData)(1U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__when_Traceback_l48 
        = (0xa7U <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_write));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_payload_last = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__emitCrc) {
        if ((3U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_payload_last = 1U;
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l94 
        = VL_LTS_IQQ(1,36,36, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_max, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__corr_val_i);
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_scram_data_ready 
        = ((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_status)) 
           | ((1U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_status)) 
              & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_combination__DOT__base_data_valid_1)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__when_DePuncturing_l52 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_last) 
           & (0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__when_PhyRx_l439 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt) 
           == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_limit));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__when_PhyRx_l452 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT___zz_logic_ram_port0) 
                 | (4U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__cursor 
        = (0x7fU & ((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select))
                     ? (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__min_cursor) 
                         << 1U) + (1U & (IData)((vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1 
                                                 >> (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__min_cursor)))))
                     : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select))
                         ? (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__min_cursor) 
                             << 1U) + (1U & (IData)(
                                                    (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1 
                                                     >> (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__min_cursor)))))
                         : ((2U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select))
                             ? (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__min_cursor) 
                                 << 1U) + (1U & (IData)(
                                                        (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_survival_path_ram_2_port1 
                                                         >> (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__min_cursor)))))
                             : 0U))));
    vlTOPp->__Vtableidx5 = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status_string 
        = vlTOPp->__Vtable5_LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status_string
        [vlTOPp->__Vtableidx5];
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid 
        = (1U & (~ ((~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)) 
                    | (0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid 
        = (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) 
                    | (0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_raw_data_ready 
        = ((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__cnt)) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_last)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_status))) {
        if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_status))) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling_result_data_valid 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_valid) 
                   & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_combination__DOT__base_data_valid_1));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_lifo_last 
        = ((0x100U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                      - (IData)(1U))) ? ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                          ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267)
                                          : ((0x40U 
                                              & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                 - (IData)(1U)))
                                              ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267)
                                              : ((0x20U 
                                                  & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267)
                                                  : 
                                                 ((0x10U 
                                                   & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267)
                                                   : 
                                                  ((8U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((4U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267)
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267)
                                                       : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_266))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_265)
                                                       : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_264))))
                                                    : 
                                                   ((4U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_263)
                                                       : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_262))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_261)
                                                       : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_260)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_259)
                                                       : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_258))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_257)
                                                       : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_256)))))))))
            : ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                         - (IData)(1U))) ? ((0x40U 
                                             & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                - (IData)(1U)))
                                             ? ((0x20U 
                                                 & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_255)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_254))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_253)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_252)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_251)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_250))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_249)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_248))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_247)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_246))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_245)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_244)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_243)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_242))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_241)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_240)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_239)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_238))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_237)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_236)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_235)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_234))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_233)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_232))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_231)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_230))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_229)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_228)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_227)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_226))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_225)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_224))))))
                                                 : 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_223)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_222))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_221)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_220)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_219)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_218))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_217)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_216))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_215)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_214))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_213)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_212)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_211)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_210))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_209)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_208)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_207)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_206))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_205)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_204)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_203)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_202))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_201)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_200))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_199)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_198))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_197)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_196)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_195)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_194))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_193)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_192)))))))
                                             : ((0x20U 
                                                 & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_191)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_190))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_189)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_188)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_187)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_186))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_185)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_184))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_183)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_182))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_181)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_180)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_179)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_178))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_177)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_176)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_175)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_174))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_173)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_172)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_171)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_170))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_169)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_168))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_167)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_166))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_165)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_164)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_163)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_162))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_161)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_160))))))
                                                 : 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_159)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_158))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_157)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_156)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_155)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_154))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_153)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_152))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_151)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_150))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_149)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_148)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_147)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_146))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_145)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_144)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_143)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_142))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_141)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_140)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_139)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_138))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_137)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_136))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_135)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_134))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_133)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_132)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_131)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_130))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_129)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_128))))))))
                : ((0x40U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                             - (IData)(1U))) ? ((0x20U 
                                                 & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_127)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_126))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_125)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_124)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_123)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_122))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_121)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_120))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_119)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_118))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_117)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_116)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_115)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_114))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_113)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_112)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_111)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_110))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_109)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_108)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_107)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_106))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_105)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_104))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_103)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_102))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_101)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_100)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_99)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_98))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_97)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_96))))))
                                                 : 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_95)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_94))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_93)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_92)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_91)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_90))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_89)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_88))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_87)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_86))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_85)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_84)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_83)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_82))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_81)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_80)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_79)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_78))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_77)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_76)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_75)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_74))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_73)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_72))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_71)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_70))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_69)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_68)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_67)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_66))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_65)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_64)))))))
                    : ((0x20U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                 - (IData)(1U))) ? 
                       ((0x10U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                  - (IData)(1U))) ? 
                        ((8U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                - (IData)(1U))) ? (
                                                   (4U 
                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_63)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_62))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_61)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_60)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_59)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_58))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_57)
                                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_56))))
                          : ((4U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                    - (IData)(1U)))
                              ? ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_55)
                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_54))
                                  : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_53)
                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_52)))
                              : ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_51)
                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_50))
                                  : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_49)
                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_48)))))
                         : ((8U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                   - (IData)(1U))) ? 
                            ((4U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                    - (IData)(1U)))
                              ? ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_47)
                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_46))
                                  : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_45)
                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_44)))
                              : ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_43)
                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_42))
                                  : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_41)
                                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_40))))
                             : ((4U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                       - (IData)(1U)))
                                 ? ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                           - (IData)(1U)))
                                     ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_39)
                                         : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_38))
                                     : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_37)
                                         : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_36)))
                                 : ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                           - (IData)(1U)))
                                     ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_35)
                                         : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_34))
                                     : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_33)
                                         : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_32))))))
                        : ((0x10U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                     - (IData)(1U)))
                            ? ((8U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                      - (IData)(1U)))
                                ? ((4U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_31)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_30))
                                        : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_29)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_28)))
                                    : ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_27)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_26))
                                        : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_25)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_24))))
                                : ((4U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_23)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_22))
                                        : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_21)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_20)))
                                    : ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_19)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_18))
                                        : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_17)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_16)))))
                            : ((8U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                      - (IData)(1U)))
                                ? ((4U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_15)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_14))
                                        : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_13)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_12)))
                                    : ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_11)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_10))
                                        : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_9)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_8))))
                                : ((4U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_7)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_6))
                                        : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_5)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_4)))
                                    : ((2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_3)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_2))
                                        : ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_1)
                                            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_0))))))))));
}
