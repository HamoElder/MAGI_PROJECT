// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__78(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__78\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp2141[16];
    WData/*511:0*/ __Vtemp2142[16];
    WData/*511:0*/ __Vtemp2143[16];
    WData/*511:0*/ __Vtemp2144[16];
    WData/*511:0*/ __Vtemp2145[16];
    WData/*511:0*/ __Vtemp2146[16];
    WData/*511:0*/ __Vtemp2147[16];
    WData/*511:0*/ __Vtemp2148[16];
    WData/*511:0*/ __Vtemp2149[16];
    WData/*511:0*/ __Vtemp2150[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2141[0U] = 1U;
            __Vtemp2141[1U] = 0U;
            __Vtemp2141[2U] = 0U;
            __Vtemp2141[3U] = 0U;
            __Vtemp2141[4U] = 0U;
            __Vtemp2141[5U] = 0U;
            __Vtemp2141[6U] = 0U;
            __Vtemp2141[7U] = 0U;
            __Vtemp2141[8U] = 0U;
            __Vtemp2141[9U] = 0U;
            __Vtemp2141[0xaU] = 0U;
            __Vtemp2141[0xbU] = 0U;
            __Vtemp2141[0xcU] = 0U;
            __Vtemp2141[0xdU] = 0U;
            __Vtemp2141[0xeU] = 0U;
            __Vtemp2141[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2142, __Vtemp2141, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp2142[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_264 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2143[0U] = 1U;
            __Vtemp2143[1U] = 0U;
            __Vtemp2143[2U] = 0U;
            __Vtemp2143[3U] = 0U;
            __Vtemp2143[4U] = 0U;
            __Vtemp2143[5U] = 0U;
            __Vtemp2143[6U] = 0U;
            __Vtemp2143[7U] = 0U;
            __Vtemp2143[8U] = 0U;
            __Vtemp2143[9U] = 0U;
            __Vtemp2143[0xaU] = 0U;
            __Vtemp2143[0xbU] = 0U;
            __Vtemp2143[0xcU] = 0U;
            __Vtemp2143[0xdU] = 0U;
            __Vtemp2143[0xeU] = 0U;
            __Vtemp2143[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2144, __Vtemp2143, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp2144[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_265 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2145[0U] = 1U;
            __Vtemp2145[1U] = 0U;
            __Vtemp2145[2U] = 0U;
            __Vtemp2145[3U] = 0U;
            __Vtemp2145[4U] = 0U;
            __Vtemp2145[5U] = 0U;
            __Vtemp2145[6U] = 0U;
            __Vtemp2145[7U] = 0U;
            __Vtemp2145[8U] = 0U;
            __Vtemp2145[9U] = 0U;
            __Vtemp2145[0xaU] = 0U;
            __Vtemp2145[0xbU] = 0U;
            __Vtemp2145[0xcU] = 0U;
            __Vtemp2145[0xdU] = 0U;
            __Vtemp2145[0xeU] = 0U;
            __Vtemp2145[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2146, __Vtemp2145, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp2146[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_266 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2147[0U] = 1U;
            __Vtemp2147[1U] = 0U;
            __Vtemp2147[2U] = 0U;
            __Vtemp2147[3U] = 0U;
            __Vtemp2147[4U] = 0U;
            __Vtemp2147[5U] = 0U;
            __Vtemp2147[6U] = 0U;
            __Vtemp2147[7U] = 0U;
            __Vtemp2147[8U] = 0U;
            __Vtemp2147[9U] = 0U;
            __Vtemp2147[0xaU] = 0U;
            __Vtemp2147[0xbU] = 0U;
            __Vtemp2147[0xcU] = 0U;
            __Vtemp2147[0xdU] = 0U;
            __Vtemp2147[0xeU] = 0U;
            __Vtemp2147[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2148, __Vtemp2147, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp2148[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_267 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2149[0U] = 1U;
            __Vtemp2149[1U] = 0U;
            __Vtemp2149[2U] = 0U;
            __Vtemp2149[3U] = 0U;
            __Vtemp2149[4U] = 0U;
            __Vtemp2149[5U] = 0U;
            __Vtemp2149[6U] = 0U;
            __Vtemp2149[7U] = 0U;
            __Vtemp2149[8U] = 0U;
            __Vtemp2149[9U] = 0U;
            __Vtemp2149[0xaU] = 0U;
            __Vtemp2149[0xbU] = 0U;
            __Vtemp2149[0xcU] = 0U;
            __Vtemp2149[0xdU] = 0U;
            __Vtemp2149[0xeU] = 0U;
            __Vtemp2149[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2150, __Vtemp2149, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp2150[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_0 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) 
                << 2U) | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_node_data) 
                           << 1U) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_node_last)));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_logic_ram_port0;
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_fragment_regNext) 
                << 1U) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_last_regNext));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = ((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__data_last)
                  ? 0U : (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                                   >> 1U))) << 1U) 
               | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__data_last));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = ((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid)
                  ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_q)
                  : 0U) << 0xcU) | ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid)
                                     ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_i)
                                     : 0U));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port_1;
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment_cha_q) 
                << 0xdU) | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment_cha_i) 
                             << 1U) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_last)));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1)));
    }
    if (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo_io_pop_valid) 
         & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo_io_pop_ready))) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT___zz_raw_data_payload_fragment 
            = ((0x40U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT___zz_logic_ram_port0) 
                         << 5U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT___zz___05Fzz_raw_data_payload_fragment));
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = ((0x1feU & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__emitCrc)
                            ? ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter))
                                ? vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2_result
                                : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter))
                                    ? (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2_result 
                                       >> 8U) : ((2U 
                                                  == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter))
                                                  ? 
                                                 (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2_result 
                                                  >> 0x10U)
                                                  : 
                                                 (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2_result 
                                                  >> 0x18U))))
                            : ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                               >> 1U)) << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_payload_last));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = ((0x1ffe000U & ((VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_197__DOT__previous_adder_data) 
                              << 6U)) | ((0x1ffeU & 
                                          ((VL_MULS_III(19,19,19, 
                                                        (0x7ffffU 
                                                         & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                        (0x7ffffU 
                                                         & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32)))) 
                                            + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_164__DOT__previous_adder_data) 
                                           >> 6U)) 
                                         | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_25)));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_44 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__message_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__demod_method 
            = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__demod_method;
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT___zz_1) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT____Vlvbound2 
            = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT___zz_raw_data_payload_fragment_1) 
                << 1U) | ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt) 
                          == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_limit)));
        if ((0xfbU >= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_ram__v0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_ram__v0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_pushPtr_value;
        }
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0 
            = (((0x10000U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                             << 1U)) | ((0x8000U & 
                                         ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                          << 8U)) | 
                                        ((0x4000U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment)) 
                                         | ((0x2000U 
                                             & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                << 7U)) 
                                            | (0x1000U 
                                               & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                  >> 1U)))))) 
               | ((0x800U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                             << 6U)) | ((0x400U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                   >> 2U)) 
                                        | ((0x200U 
                                            & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                               << 5U)) 
                                           | ((0x100U 
                                               & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                  >> 3U)) 
                                              | ((0x80U 
                                                  & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                     << 4U)) 
                                                 | ((0x40U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                        >> 4U)) 
                                                    | ((0x20U 
                                                        & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                           << 3U)) 
                                                       | ((0x10U 
                                                           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                              >> 5U)) 
                                                          | ((8U 
                                                              & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                 << 2U)) 
                                                             | ((4U 
                                                                 & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                    >> 6U)) 
                                                                | ((2U 
                                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                       << 1U)) 
                                                                   | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_last)))))))))))));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if ((4U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__min_cursor 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__states_shift_rom
                [vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__cursor];
        } else {
            if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__states_shift_rom
                    [vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__halt_cnt))) {
                    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__goto_tail) {
                        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__min_cursor 
                            = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_62;
                    }
                }
            } else {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__states_shift_rom
                    [vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__cursor];
            }
        } else {
            if ((1U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__states_shift_rom
                    [vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10, 0xaU))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10, 0xaU))));
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__79(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__79\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22, 0xaU))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22, 0xaU))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10, 0xaU))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10, 0xaU))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_11 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22, 0xaU))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22, 0xaU))));
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = ((0x1fffeU & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__scram_data) 
                             << 1U) ^ (0xfffffffeU 
                                       & vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_logic_ram_port0))) 
               | (1U & vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_logic_ram_port0));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT___zz_1) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT____Vlvbound2 
            = ((((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_data) 
                 ^ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_combination__DOT__base_data_buffer)) 
                << 1U) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_combination__DOT__base_data_last));
        if ((0x53U >= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_ram__v0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_ram__v0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_pushPtr_value;
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_init_state_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_state = 0x7fU;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_scram_data_ready) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_state 
                = ((0x7eU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_14) 
                             << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_15));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2_init_state_valid) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__scram_state = 0x7fU;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2_scram_data_ready) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__scram_state 
                = ((0x7eU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_14) 
                             << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_15));
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__80(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__80\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__bit_valid_buf 
        = vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__bit_valid_buf;
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_2[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_1[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_0[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    }
    vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
        = vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf;
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__86(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__86\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0;
    }
    vlTOPp->axil4Ctrl_bresp = vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->LoopBackTest__DOT__clkCrossing_10__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_10__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__clkCrossing_19__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_19__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffffe) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | (IData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17))))));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffffd) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17))))) 
                      << 1U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffffb) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17))))) 
                      << 2U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffff7) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17))))) 
                      << 3U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffffef) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17))))) 
                      << 4U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffffdf) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17))))) 
                      << 5U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffffbf) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17))))) 
                      << 6U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffff7f) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17))))) 
                      << 7U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffeff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17))))) 
                      << 8U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffdff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17))))) 
                      << 9U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffbff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17))))) 
                      << 0xaU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffff7ff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17))))) 
                      << 0xbU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffefff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17))))) 
                      << 0xcU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffdfff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17))))) 
                      << 0xdU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffbfff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17))))) 
                      << 0xeU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffff7fff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17))))) 
                      << 0xfU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffeffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17))))) 
                      << 0x10U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffdffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17))))) 
                      << 0x11U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffbffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17))))) 
                      << 0x12U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffff7ffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17))))) 
                      << 0x13U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffefffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17))))) 
                      << 0x14U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffdfffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17))))) 
                      << 0x15U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffbfffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17))))) 
                      << 0x16U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffff7fffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17))))) 
                      << 0x17U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffeffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17))))) 
                      << 0x18U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffdffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17))))) 
                      << 0x19U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffbffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1aU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffff7ffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1bU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffefffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1cU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffdfffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1dU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffbfffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1eU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffff7fffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1fU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffeffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17))))) 
                      << 0x20U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffdffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17))))) 
                      << 0x21U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffbffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17))))) 
                      << 0x22U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffff7ffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17))))) 
                      << 0x23U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffefffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17))))) 
                      << 0x24U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffdfffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17))))) 
                      << 0x25U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffbfffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17))))) 
                      << 0x26U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffff7fffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17))))) 
                      << 0x27U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffeffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17))))) 
                      << 0x28U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffdffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17))))) 
                      << 0x29U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffbffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2aU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffff7ffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2bU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffefffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2cU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffdfffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2dU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffbfffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2eU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffff7fffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2fU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffeffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17))))) 
                      << 0x30U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffdffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17))))) 
                      << 0x31U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffbffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17))))) 
                      << 0x32U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfff7ffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17))))) 
                      << 0x33U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffefffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17))))) 
                      << 0x34U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffdfffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17))))) 
                      << 0x35U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffbfffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17))))) 
                      << 0x36U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xff7fffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17))))) 
                      << 0x37U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfeffffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17))))) 
                      << 0x38U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfdffffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17))))) 
                      << 0x39U));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfbffffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3aU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xf7ffffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3bU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xefffffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3cU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xdfffffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3dU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xbfffffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3eU));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0x7fffffffffffffff) & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3fU));
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__87(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__87\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__when_DePuncturing_l52)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_fire) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_fragment 
                = (0xffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT___zz_logic_ram_port0 
                              >> 1U));
        } else {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__de_punched_data_fire) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_fragment 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT___zz_raw_data_fragment;
            }
        }
    }
    if ((4U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_node_data 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__in_data_rom
                [vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__cursor];
        } else {
            if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__in_data_rom
                    [vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__in_data_rom
                    [vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_logic_ram_port0 
        = ((0xfbU >= (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram
           [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_valueNext]
            : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vxrand1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_fragment_regNext 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)
            ? ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) 
               & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_pop_payload_fragment))
            : ((~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)) 
               & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_pop_payload_fragment)));
    if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states))) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_q 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_Q_mem_port0;
    } else {
        if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_q 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_Q_mem_port1;
        } else {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_data_fire) {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_q 
                    = (0xfffU & (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                 >> 0xdU));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states))) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_i 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_I_mem_port0;
    } else {
        if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_i 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_I_mem_port1;
        } else {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_data_fire) {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_i 
                    = (0xfffU & (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                 >> 1U));
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1 = 3U;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT___zz___05Fzz_raw_data_payload_fragment 
        = (0x3fU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT___zz_raw_data_payload_fragment) 
                    >> 1U));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32 = 3U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42;
    if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status)))) {
                if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__message_valid) {
                    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_limit 
                        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__pkg_size) 
                                    - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_62 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_62 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_60)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_61));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5 
        = ((0x2000000U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                          << 1U)) | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2 
        = ((0x2000000U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
                          << 1U)) | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11);
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21, 9U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21, 9U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9, 9U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9, 9U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21, 9U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21, 9U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9, 9U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9, 9U))));
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2_init_state_valid)))) {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2_scram_data_ready) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__scram_data 
                = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_15) 
                    << 0xfU) | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_14) 
                                 << 0xeU) | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_13) 
                                              << 0xdU) 
                                             | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_12) 
                                                 << 0xcU) 
                                                | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_11) 
                                                    << 0xbU) 
                                                   | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_10) 
                                                       << 0xaU) 
                                                      | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_9) 
                                                          << 9U) 
                                                         | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_8) 
                                                             << 8U) 
                                                            | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_7) 
                                                                << 7U) 
                                                               | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_6) 
                                                                   << 6U) 
                                                                  | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_5) 
                                                                      << 5U) 
                                                                     | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_4) 
                                                                         << 4U) 
                                                                        | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_3) 
                                                                            << 3U) 
                                                                           | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_2) 
                                                                               << 2U) 
                                                                              | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_0))))))))))))))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_init_state_valid)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_scram_data_ready) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_data 
                = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_15) 
                    << 0xfU) | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_14) 
                                 << 0xeU) | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_13) 
                                              << 0xdU) 
                                             | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_12) 
                                                 << 0xcU) 
                                                | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_11) 
                                                    << 0xbU) 
                                                   | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_10) 
                                                       << 0xaU) 
                                                      | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_9) 
                                                          << 9U) 
                                                         | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_8) 
                                                             << 8U) 
                                                            | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_7) 
                                                                << 7U) 
                                                               | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_6) 
                                                                   << 6U) 
                                                                  | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_5) 
                                                                      << 5U) 
                                                                     | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_4) 
                                                                         << 4U) 
                                                                        | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_3) 
                                                                            << 3U) 
                                                                           | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_2) 
                                                                               << 2U) 
                                                                              | (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_0))))))))))))))));
        }
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__88(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__88\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_0 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__scram_state) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__scram_state) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_0 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_state) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_state) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__clkCrossing_10__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__pkg_gen_bridge_slices_limit_driver;
    vlTOPp->LoopBackTest__DOT__clkCrossing_19__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__receiver_bridge_phase_corrector_shift_driver;
    vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__pkg_slices_cnt;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT___zz_raw_data_fragment 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_fragment) 
                      >> 2U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_Q_mem_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__Q_mem
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_Q_mem_port1 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__Q_mem
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_I_mem_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__I_mem
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_I_mem_port1 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__I_mem
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt];
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54 = 7U;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT___zz_raw_data_payload_fragment_1 
        = ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT___zz_logic_ram_port0) 
                     << 6U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT___zz_raw_data_payload_fragment));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data 
            = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0) 
                << 8U) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_60 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_56)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_57));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_61 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_58)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_59));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_y_raw 
        = (0xfffU & ((0x1000U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                      ? ((3U == (3U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                       >> 0xbU))) ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw)
                          : 0x800U) : ((0x800U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                                        ? 0x7ffU : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_x_raw 
        = (0xfffU & ((0x1000U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                      ? ((3U == (3U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                       >> 0xbU))) ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw)
                          : 0x800U) : ((0x800U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                                        ? 0x7ffU : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20, 8U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20, 8U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8, 8U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8, 8U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20, 8U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20, 8U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8, 8U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8, 8U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_0 
        = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__scram_state) 
            << 1U) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_0));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_0 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_state) 
            << 1U) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_0));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__89(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__89\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_1 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_0) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_0) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_1 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_0) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_0) 
                            >> 3U)));
    if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
        if (vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire) {
            vlTOPp->LoopBackTest__DOT__pkg_gen_bridge_slices_limit_driver 
                = (0xffU & vlTOPp->axil4Ctrl_wdata);
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53 = 0xfU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_56 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_48)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_49));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_57 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_50)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_51));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_58 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_52)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_53));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_59 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_54)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_55));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19, 7U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19, 7U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7, 7U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7, 7U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19, 7U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19, 7U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7, 7U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7, 7U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_1 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_0) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_1 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_0) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_1));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_2 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_1) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_1) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_2 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_1) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_1) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52 = 0x1fU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_48 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_32)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_33));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_49 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_34)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_35));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_50 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_36)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_37));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_51 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_38)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_39));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_52 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_40)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_41));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__90(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__90\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_53 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_42)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_43));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_54 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_44)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_45));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_46) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_47))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_46)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_47));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_55 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_46) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_47))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_46)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_47));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18, 6U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18, 6U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6, 6U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6, 6U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18, 6U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18, 6U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6, 6U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6, 6U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_2 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_1) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_2));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_2 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_1) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_2));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_3 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_2) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_2) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_3 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_2) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_2) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51 = 0x3fU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_32 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_3))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_3));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_33 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_3))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_3));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_4) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_5))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_4)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_5));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_34 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_4) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_5))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_4)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_5));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_6) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_7))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_6)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_7));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_35 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_6) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_7))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_6)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_7));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_8) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_9))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_8)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_9));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_36 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_8) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_9))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_8)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_9));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_10) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_11))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_10)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_11));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_37 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_10) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_11))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_10)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_11));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_12) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_13))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_12)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_13));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_38 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_12) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_13))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_12)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_13));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__91(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__91\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_14) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_15))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_14)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_15));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_39 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_14) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_15))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_14)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_15));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_16) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_17))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_16)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_17));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_40 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_16) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_17))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_16)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_17));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_18) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_19))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_18)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_19));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_41 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_18) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_19))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_18)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_19));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_20) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_21))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_20)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_21));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_42 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_20) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_21))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_20)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_21));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_22) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_23))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_22)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_23));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_43 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_22) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_23))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_22)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_23));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_24) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_25))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_24)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_25));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_44 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_24) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_25))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_24)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_25));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_26) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_27))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_26)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_27));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_45 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_26) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_27))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_26)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_27));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_46 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_28) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_29))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_28)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_29));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_46 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_28) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_29))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_28)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_29));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_47 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_30) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_31))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_30)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_31));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_47 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_30) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_31))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_30)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_31));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17, 5U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17, 5U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5, 5U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5, 5U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17, 5U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17, 5U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5, 5U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5, 5U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_3 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_2) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_3));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_3 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_2) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_3));
}
