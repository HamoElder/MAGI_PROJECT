// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

void VLoopBackTest::_settle__TOP__144(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__144\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready 
        = ((~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)) 
           & (0x10bU != (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) 
           & (0x10bU != (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__receiver__DOT___zz_raw_data_payload_fragment_1 
        = ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT___zz_logic_ram_port0) 
                     << 6U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT___zz_raw_data_payload_fragment));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__comp_cmp_i 
        = ((6U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__comp_cmp_i)) 
           | VL_LTS_III(32,12,12, 0xd78U, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__demod_data_i)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__comp_cmp_i 
        = ((5U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,12,12, 0xfffU, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__demod_data_i)) 
              << 1U));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__comp_cmp_i 
        = ((3U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,12,12, 0x286U, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__demod_data_i)) 
              << 2U));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__comp_cmp_q 
        = ((6U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__comp_cmp_q)) 
           | VL_LTS_III(32,12,12, 0xd78U, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__demod_data_q)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__comp_cmp_q 
        = ((5U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,12,12, 0xfffU, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__demod_data_q)) 
              << 1U));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__comp_cmp_q 
        = ((3U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,12,12, 0x286U, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__demod_2__DOT__demod_data_q)) 
              << 2U));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l91 
        = ((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_19__DOT__area_clkO_buf1) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator_delta_phi_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_11) 
           & (0x11U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__impulse_cnt)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker_phy_rx_finish = 0U;
    if ((4U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status))) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker_phy_rx_finish = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_cnt 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l74 
        = (0xfU == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__when_PreambleDetector_l66 
        = (0xffU > (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT___zz_base_cnt 
        = (0xfU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt) 
                   + (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_13__DOT__area_clkO_buf1)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__when_dataDivDynamic_l52 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt) 
           == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l90 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cfo_corrected) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__phase_corrected_1)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__when_CFOCorrector_l45 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_valid) 
                 | (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cfo_enable))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_ptrDif 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_pushPtr_value) 
                    - (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_popPtr_value)));
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__when_Traceback_l104 
        = (((0x53U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_write)) 
            & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select) 
               == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_select))) 
           | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__pkg_tail));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div_unit_data_payload_last 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_last) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt) 
              == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_popPtr_value));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state_1 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 1U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT___zz_pkg_slices_cnt 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__pkg_slices_cnt)));
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
            == (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_10__DOT__area_clkO_buf1) 
                         - (IData)(1U)))) | ((IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__raw_data_last) 
                                             & (1U 
                                                == (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__bit_valid_buf))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_raw_data_ready 
        = ((~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__pipe_halt)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_ready_1));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_ready 
        = (((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1) 
            == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_12__DOT__area_clkO_buf1));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__isEncoding)
            ? (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                        >> 1U)) : 0U);
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst_data_flow_mod_iq_payload_last 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__symbol_cnt) 
            == (0x7ffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__desc_cnt) 
                          - (IData)(1U)))) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__raw_data_takeWhen_regNext_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_i_1 
        = (VL_ULL(0xfffffffff) & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i 
                                  - (((QData)((IData)(
                                                      (0xfffU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15 
                                                                                >> 0x17U))))))) 
                                      << 0x18U) | (QData)((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_q_1 
        = (VL_ULL(0xfffffffff) & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q 
                                  - (((QData)((IData)(
                                                      (0xfffU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15 
                                                                                >> 0x17U))))))) 
                                      << 0x18U) | (QData)((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15)))));
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT___zz_power_val_i 
        = (0xffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_i 
                        - ((0xf00000U & (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_15 
                                                                 >> 0x13U)))) 
                                         << 0x14U)) 
                           | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_15)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT___zz_power_val_q 
        = (0xffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_q 
                        - ((0xf00000U & (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_15 
                                                                 >> 0x13U)))) 
                                         << 0x14U)) 
                           | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_15)));
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst_data_flow_mod_iq_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__raw_data_takeWhen_regNext_valid) 
           & (2U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_states)));
}

void VLoopBackTest::_settle__TOP__145(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__145\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout;
    // Body
    __Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout 
        = (0xfeU & (IData)(__Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout));
    __Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout 
        = (2U | (IData)(__Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout));
    __Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout 
        = (0xfbU & (IData)(__Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout));
    __Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout 
        = (0xf7U & (IData)(__Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout));
    __Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout 
        = (0x10U | (IData)(__Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout));
    __Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout 
        = (0x20U | (IData)(__Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout));
    __Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout 
        = (0xbfU & (IData)(__Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout));
    __Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout 
        = (0x7fU & (IData)(__Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT___zz_1 
        = __Vfunc_LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__zz_sdf_i_ref__0__Vfuncout;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__when_PhyRx_l221 
        = (0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt));
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_0) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_0)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_1) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_1)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_2) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_2)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_3) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_3)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_4) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_4)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_5) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_5)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_6) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_6)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_7) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_7)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_8) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_8)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_9) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_9)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_10) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_10)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_11) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_11)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_12) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_12)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_13) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_13)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_14) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_14)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_15) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_15)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_16) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_16)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_17) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_17)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_18) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_18)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_19) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_19)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_20) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_20)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_21) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_21)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_22) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_22)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_23) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_23)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_24) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_24)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_25) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_25)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_26) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_26)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_27) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_27)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_28) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_28)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_29) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_29)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_30) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_30)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_31) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_31)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_32) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_32)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_33) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_33)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_34) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_34)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_35) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_35)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_36) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_36)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_37) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_37)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_38) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_38)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_39) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_39)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_40) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_40)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_41) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_41)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_42) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_42)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_43) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_43)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_44) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_44)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_45) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_45)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_46) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_46)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_47) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_47)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_48) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_48)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_49) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_49)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_50) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_50)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_51) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_51)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_52) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_52)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_53) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_53)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_54) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_54)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_55) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_55)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_56) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_56)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_57) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_57)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_58) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_58)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_59) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_59)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_60) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_60)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_61) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_61)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_62) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_62)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_63) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_63)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_0) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_64)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_1) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_65)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_2) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_66)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_3) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_67)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_4) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_68)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_5) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_69)));
}

void VLoopBackTest::_settle__TOP__146(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__146\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_6) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_70)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_7) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_71)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_8) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_72)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_9) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_73)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_10) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_74)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_11) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_75)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_12) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_76)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_13) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_77)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_14) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_78)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_15) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_79)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_16) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_80)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_17) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_81)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_18) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_82)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_19) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_83)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_20) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_84)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_21) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_85)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_22) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_86)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_23) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_87)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_24) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_88)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_25) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_89)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_26) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_90)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_27) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_91)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_28) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_92)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_29) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_93)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_30) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_94)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_31) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_95)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_32) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_96)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_33) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_97)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_34) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_98)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_35) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_99)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_36) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_100)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_37) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_101)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_38) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_102)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_39) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_103)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_40) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_104)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_41) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_105)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_42) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_106)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_43) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_107)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_44) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_108)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_45) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_109)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_46) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_110)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_47) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_111)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_48) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_112)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_49) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_113)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_50) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_114)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_51) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_115)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_52) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_116)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_53) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_117)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_54) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_118)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_55) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_119)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_56) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_120)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_57) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_121)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_58) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_122)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_59) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_123)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_60) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_124)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_61) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_125)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_62) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_126)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_63) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_127)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT___zz_cnt 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_ram_addr_read 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read) 
                    - (IData)(1U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_ram_addr_read_1 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read) 
                    - (IData)(1U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_ram_addr_read_2 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read) 
                    - (IData)(1U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__when_Traceback_l126 
        = (0xa7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__when_Traceback_l144 
        = (0xa7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__when_Traceback_l153 
        = (0xa7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read));
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
    vlTOPp->__Vtableidx4 = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state_string[0U] 
        = vlTOPp->__Vtable4_LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx4][0U];
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state_string[1U] 
        = vlTOPp->__Vtable4_LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx4][1U];
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state_string[2U] 
        = vlTOPp->__Vtable4_LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx4][2U];
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found = 0U;
    if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_valid_1) {
            if ((0x3fU == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__timeout))) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found = 1U;
            }
        }
    }
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
}

void VLoopBackTest::_settle__TOP__147(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__147\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                      >> 0x17U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l47 
        = (0xffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phi 
                        + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiCorrect));
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT___zz_cnt 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_payload_last 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__raw_last) 
           & (7U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__last_padding)
            ? 0U : ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt))
                     ? (0xfffU & (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                  >> 1U)) : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__last_padding)
            ? 0U : ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt))
                     ? (0xfffU & (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                  >> 0xdU)) : 0U));
    vlTOPp->LoopBackTest__DOT__readRsp_data = 0U;
    if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                  >> 7U)))) {
        if ((0x40U & (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) {
            if ((0x20U & (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) {
                if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->LoopBackTest__DOT__readRsp_data 
                                        = ((0xffffffc0U 
                                            & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->LoopBackTest__DOT__receiver_bridge_phase_corrector_shift_driver));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((4U & (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->LoopBackTest__DOT__readRsp_data 
                                        = ((0xffffff00U 
                                            & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->LoopBackTest__DOT__receiver_bridge_min_plateau_driver));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->LoopBackTest__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_dir_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->LoopBackTest__DOT__readRsp_data 
                                        = ((0xfffffffcU 
                                            & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_bias_driver));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) {
                if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->LoopBackTest__DOT__readRsp_data 
                                        = ((0xfffffffcU 
                                            & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->LoopBackTest__DOT__transmitter_bridge_mod_method_select_driver));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) {
                    if ((8U & (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->LoopBackTest__DOT__readRsp_data 
                                        = ((0xfffffff0U 
                                            & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_cnt_limit_driver));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->LoopBackTest__DOT__readRsp_data 
                                        = ((0xfffffff0U 
                                            & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_cnt_step_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->LoopBackTest__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_enable_driver));
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->LoopBackTest__DOT__readRsp_data 
                                        = ((0xffffff00U 
                                            & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkO_buf1));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->LoopBackTest__DOT__readRsp_data 
                                        = ((0xffffff00U 
                                            & vlTOPp->LoopBackTest__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->LoopBackTest__DOT__pkg_gen_bridge_slices_limit_driver));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__raw_data_takeWhen_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) 
           & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__phase_corrected_1));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2_result 
        = ((0x80000000U & ((~ vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state) 
                           << 0x1fU)) | ((0x40000000U 
                                          & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                 >> 1U)) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((~ 
                                                 (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                  >> 2U)) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & ((~ 
                                                    (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                     >> 3U)) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & ((~ 
                                                       (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                        >> 4U)) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & ((~ 
                                                          (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                           >> 5U)) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & ((~ 
                                                             (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                              >> 6U)) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & ((~ 
                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                 >> 7U)) 
                                                               << 0x18U)) 
                                                           | ((0x800000U 
                                                               & ((~ 
                                                                   (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                    >> 8U)) 
                                                                  << 0x17U)) 
                                                              | ((0x400000U 
                                                                  & ((~ 
                                                                      (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                       >> 9U)) 
                                                                     << 0x16U)) 
                                                                 | ((0x200000U 
                                                                     & ((~ 
                                                                         (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state 
                                                                          >> 0xaU)) 
                                                                        << 0x15U)) 
                                                                    | vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT___zz_result_2)))))))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment_cha_i = 0U;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment_cha_i 
            = (0xfffU & ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))
                          ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i)
                          : ((2U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))
                              ? ((1U & ((9U >= (0xfU 
                                                & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter)))
                                         ? ((((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1) 
                                              << 8U) 
                                             | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__pkg_size_payload_1)) 
                                            >> (0xfU 
                                                & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter)))
                                         : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT____Vxrand1)))
                                  ? 0x3ffU : 0xc01U)
                              : (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 
                                 >> 1U))));
    }
}

void VLoopBackTest::_settle__TOP__148(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__148\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port_1 
        = ((0x1ffe000U & (((0U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1))
                            ? ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                ? ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                    ? 0x7ff000U : 0x801000U)
                                : 0U) : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1))
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
                                                     == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1))
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
                                                      == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1))
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
                                       | ((0U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1))
                                           ? ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid) 
                                              & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last))
                                           : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1))
                                               ? ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid) 
                                                  & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last))
                                               : ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid) 
                                                  & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2_result 
        = ((0x80000000U & ((~ vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state) 
                           << 0x1fU)) | ((0x40000000U 
                                          & ((~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                 >> 1U)) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((~ 
                                                 (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                  >> 2U)) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & ((~ 
                                                    (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                     >> 3U)) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & ((~ 
                                                       (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                        >> 4U)) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & ((~ 
                                                          (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                           >> 5U)) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & ((~ 
                                                             (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                              >> 6U)) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & ((~ 
                                                                (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                 >> 7U)) 
                                                               << 0x18U)) 
                                                           | ((0x800000U 
                                                               & ((~ 
                                                                   (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                    >> 8U)) 
                                                                  << 0x17U)) 
                                                              | ((0x400000U 
                                                                  & ((~ 
                                                                      (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                       >> 9U)) 
                                                                     << 0x16U)) 
                                                                 | ((0x200000U 
                                                                     & ((~ 
                                                                         (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                                                          >> 0xaU)) 
                                                                        << 0x15U)) 
                                                                    | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT___zz_result_2)))))))))));
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_combination__DOT___zz_base_cnt 
        = (0xfU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_combination__DOT__base_cnt) 
                   + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_shift)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_combination__DOT___zz_base_data_buffer_1 
        = ((((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_combination__DOT__unit_data_buffer) 
             << 0x10U) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_combination__DOT__base_data_buffer)) 
           >> (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_shift));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_0 
        = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__scram_state) 
            << 1U) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_0));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_0 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_state) 
            << 1U) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_0));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l32 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid) 
            & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)) 
           & (0U != (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l32 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid) 
            & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state))) 
           & (0U != (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__lifo_demux_input_ready = 0U;
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__lifo_demux_input_ready 
            = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready;
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__lifo_demux_input_ready 
            = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready;
    }
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state_1 
        = ((vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
            << 1U) ^ ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT___zz_raw_data_payload_fragment_1) 
                             ^ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state 
                                >> 0x1fU))) ? 0x4c11db7U
                       : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt 
        = ((0xfeU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt)) 
           | (0x12U > ((((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                         & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                        << 5U) | (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                           - (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt 
        = ((0xfdU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt)) 
           | ((0x12U > ((((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                          & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                         << 5U) | (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
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
           | ((0x12U > ((((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                          & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                         << 5U) | (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
              << 3U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt 
        = ((0xefU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt)) 
           | ((0x12U > ((((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy)) 
                          & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch)) 
                         << 5U) | (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value))))) 
              << 4U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt 
        = ((0xdfU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt)) 
           | ((0x12U > ((((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                          & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                         << 5U) | (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
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

void VLoopBackTest::_settle__TOP__149(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__149\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_pushPtr_willClear = 0U;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker_phy_rx_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_pushPtr_willClear = 1U;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_popPtr_willClear = 0U;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker_phy_rx_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_popPtr_willClear = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_2_outputs_0_payload_last 
        = ((0U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_2_outputs_1_payload_last 
        = ((1U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_2_outputs_2_payload_last 
        = ((2U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div_unit_data_payload_last));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state_2 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state_1 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 2U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_2__DOT__state_1 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0 
        = ((0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 7U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__flowDeMux_2_outputs_1_valid 
        = ((1U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demod_method)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst_data_flow_mod_iq_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__flowDeMux_2_outputs_2_valid 
        = ((2U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demod_method)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst_data_flow_mod_iq_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_reset 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found) 
           | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker_phy_rx_finish));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiNext 
        = (0xffffffU & (VL_LTES_III(1,24,24, 0x1921U, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l47)
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
}

void VLoopBackTest::_settle__TOP__150(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_settle__TOP__150\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_rdata = vlTOPp->LoopBackTest__DOT__readRsp_data;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__when_PhyRx_l456 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT___zz_raw_data_payload_fragment_1) 
           != (0xffU & ((0U == (3U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt)))
                         ? vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2_result
                         : ((1U == (3U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt)))
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2_result 
                                >> 8U) : ((2U == (3U 
                                                  & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt)))
                                           ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2_result 
                                              >> 0x10U)
                                           : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2_result 
                                              >> 0x18U))))));
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
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_1 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_0) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_0) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_1 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_0) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_0) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__lifo_demux_input_ready) 
           & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__fifo_pop_valve));
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__de_punched_data_fire 
        = ((0U != (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__cnt)) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_pushing 
        = ((0U != (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__cnt)) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling_result_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_node_valid_1) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_valid_1) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushing 
        = (((0U != (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
            & (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__bit_valid_buf)) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__trans_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__split_data_fire 
        = ((0U != (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_full)) 
                 & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_full))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__lifo_mux_io_output_valid_regNext) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_full))))));
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
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__data_last)) 
                 & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)))) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)))) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_ready 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_ready) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__last_padding)) 
                 & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing 
        = (((0U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1))
             ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
             : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1))
                 ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                 : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid))) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_valid_1) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state_2 
        = ((vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state_1 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT___zz_raw_data_payload_fragment_1) 
                              >> 1U) ^ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_2__DOT__state_1 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
}
