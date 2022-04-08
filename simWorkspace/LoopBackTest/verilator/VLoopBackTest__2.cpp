// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__34(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__34\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_corr_val_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_corr_val_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_9 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_9 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_8;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_114__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_114__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_113__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_81__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_81__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_80__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (VL_MULS_III(24,24,24, 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT___zz_I_mem_port0)))) 
                                             - VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT___zz_Q_mem_port0)))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (VL_MULS_III(24,24,24, 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT___zz_I_mem_port0)))) 
                                             + VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT___zz_Q_mem_port0)))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i 
        = (0xfffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_11)
                      ? VL_NEGATE_I((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_x_raw))
                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_x_raw)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q 
        = (0xfffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_11)
                      ? VL_NEGATE_I((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_y_raw))
                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_y_raw)));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_8 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_8 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_7;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_113__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_113__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_112__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_80__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_80__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_79__DOT__previous_adder_data));
        }
    }
    vlTOPp->result_data_payload_cha_i = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i;
    vlTOPp->result_data_payload_cha_q = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_7 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_7 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_6;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_112__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_112__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_111__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_79__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_79__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_78__DOT__previous_adder_data));
        }
    }
    vlTOPp->result_data_valid = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_6 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_6 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_5;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_111__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_111__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_110__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_78__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_78__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_77__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_5 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_5 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_110__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_110__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_109__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_77__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_77__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_76__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_4 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_4 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_3;
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__35(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__35\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_109__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_109__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_108__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_76__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_76__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_75__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_3 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_3 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_108__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_108__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_107__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_75__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_75__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_74__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_2 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_107__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_107__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_106__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_74__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_74__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_73__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_1 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_payload_last;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_106__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_106__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_105__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_73__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_73__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_72__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_payload_last 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__raw_last) 
           & (7U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt)));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_105__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_105__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_104__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_72__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_72__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_71__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_104__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_104__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_103__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_71__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_71__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_70__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_103__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_103__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_102__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_70__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_70__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_69__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_102__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_102__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_101__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_69__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_69__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_68__DOT__previous_adder_data));
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__36(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__36\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid 
        = (1U & (~ (IData)(vlTOPp->reset)));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_101__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_101__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_100__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_68__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_68__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_67__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_100__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_100__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_99__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_67__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_67__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_66__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_99__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_99__DOT__previous_adder_data = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_66__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_66__DOT__previous_adder_data = 0U;
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_valid) 
           | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__last_padding));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__45(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__45\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf0;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_31 = 1U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__package_handling_regNext 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__package_handling;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z_1)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z_1)));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__clkCrossing_12__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_12__DOT__area_clkO_buf0;
    vlTOPp->LoopBackTest__DOT__clkCrossing_13__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_13__DOT__area_clkO_buf0;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_30 = 0x7eU;
    vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkO_buf0;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_29 = 0x7cU;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_28 = 0x79U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_27 = 0x77U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_26 = 0x77U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_25 = 0x79U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_24 = 0x7dU;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_23 = 2U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_22 = 0xaU;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_21 = 0x13U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_20 = 0x1cU;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_19 = 0x24U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_18 = 0x2bU;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_17 = 0x30U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_16 = 0x31U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_15 = 0x30U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14 = 0x2bU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT___zz_I_mem_port0 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__I_mem
        [(0xfU & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt))];
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT___zz_Q_mem_port0 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__Q_mem
        [(0xfU & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt))];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13 = 0x24U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12 = 0x1cU;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11 = 0x13U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10 = 0xaU;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9 = 2U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8 = 0x7dU;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7 = 0x79U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6 = 0x77U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5 = 0x77U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4 = 0x79U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3 = 0x7cU;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2 = 0x7eU;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1 = 1U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0 = 3U;
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__46(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__46\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z_1 = 3U;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_54)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_54)));
    }
    vlTOPp->LoopBackTest__DOT__clkCrossing_12__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_12__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__clkCrossing_13__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_13__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__transmitter_bridge_mod_method_select_driver;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_54 = 7U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                      >> 0x17U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_53)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_53)));
    }
    vlTOPp->LoopBackTest__DOT__clkCrossing_12__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_cnt_step_driver;
    vlTOPp->LoopBackTest__DOT__clkCrossing_13__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_cnt_limit_driver;
    vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_enable_driver;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_53 = 0xfU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                      >> 0x17U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_52)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_52)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_52 = 0x1fU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                      >> 0x17U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_51)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_51)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_51 = 0x3fU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                      >> 0x17U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_50)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_50)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_50 = 0x7fU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                      >> 0x17U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_49)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_49)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_49 = 0xffU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                      >> 0x17U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_48)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_48)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_48 = 0x1fdU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                      >> 0x17U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_47)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_47)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_47 = 0x3ebU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                      >> 0x17U)));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__47(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__47\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_46)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_46)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_46 = 0x76bU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                      >> 0x17U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_45)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_45)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_45 = 0xc90U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                      >> 0x17U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 = 0U;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                      >> 0x17U)));
}

VL_INLINE_OPT void VLoopBackTest::_combo__TOP__48(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_combo__TOP__48\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->LoopBackTest__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->LoopBackTest__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->trans_data_tvalid) & (~ (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__49(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__49\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt 
        = vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt;
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
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing 
        = (((0U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1))
             ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
             : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                 ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                 : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid))) 
           & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_full)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT___zz_base_cnt 
        = (0xfU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt) 
                   + (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_12__DOT__area_clkO_buf1)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__when_dataDivDynamic_l52 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt) 
           == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_13__DOT__area_clkO_buf1));
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
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_ready 
        = (((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_13__DOT__area_clkO_buf1) 
            == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkO_buf1));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__package_handling = 0U;
    } else {
        if ((((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkO_buf1) 
              <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__plateau_cnt)) 
             & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__gate_pkg_det))) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__package_handling = 1U;
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT___zz_cnt 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
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
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_data_fire 
        = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid) 
            & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                  >> 5U))) & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_ready));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_ready) 
              & (~ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__pipeline_halt) 
                    >> 5U))));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter_bridge_mod_method_select_driver = 0U;
    } else {
        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((0x14U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((0x18U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if (vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire) {
                            vlTOPp->LoopBackTest__DOT__transmitter_bridge_mod_method_select_driver 
                                = (3U & vlTOPp->axil4Ctrl_wdata);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_cnt_step_driver = 0U;
    } else {
        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((0x14U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if (vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire) {
                    vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_cnt_step_driver 
                        = (0xfU & vlTOPp->axil4Ctrl_wdata);
                }
            }
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__50(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__50\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_cnt_limit_driver = 0U;
    } else {
        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((0x14U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((0x18U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if (vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire) {
                        vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_cnt_limit_driver 
                            = (0xfU & vlTOPp->axil4Ctrl_wdata);
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_enable_driver = 0U;
    } else {
        if ((0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if (vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire) {
                vlTOPp->LoopBackTest__DOT__transmitter_bridge_div_enable_driver 
                    = (1U & vlTOPp->axil4Ctrl_wdata);
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__plateau_cnt 
        = vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__plateau_cnt;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 3U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__when_PreambleDetector_l64 
        = (0xffU > (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__plateau_cnt));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__gate_pkg_det 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_result_valid_1) 
                                         & ((QData)((IData)(
                                                            (0x7fffffU 
                                                             & ((vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT___zz_gate_pkg_det 
                                                                 >> 1U) 
                                                                + 
                                                                (0x3fffffU 
                                                                 & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT___zz_gate_pkg_det 
                                                                    >> 2U)))))) 
                                            < vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__prod_avg_mag)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 4U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 5U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_i = 0U;
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_q = 0U;
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_result_valid_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_i 
                = (0xffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT___zz_power_val_i 
                                + ((0xf00000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_i_regNext 
                                                                         >> 0x17U)))) 
                                                 << 0x14U)) 
                                   | (0xfffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_i_regNext 
                                                  >> 4U)))));
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_q 
                = (0xffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT___zz_power_val_q 
                                + ((0xf00000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_q_regNext 
                                                                         >> 0x17U)))) 
                                                 << 0x14U)) 
                                   | (0xfffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_q_regNext 
                                                  >> 4U)))));
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_result_valid_1 = 1U;
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_result_valid_1 = 0U;
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_i = 0U;
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_q = 0U;
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__prod_avg_mag 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_result_valid)
                                                  ? 
                                                 (VL_ULL(0xfffffffff) 
                                                  & ((((1U 
                                                        & (IData)(
                                                                  (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i 
                                                                   >> 0x23U)))
                                                        ? 
                                                       (~ vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i)
                                                        : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i) 
                                                      + (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i 
                                                                                >> 0x23U)))))) 
                                                     + 
                                                     (((1U 
                                                        & (IData)(
                                                                  (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q 
                                                                   >> 0x23U)))
                                                        ? 
                                                       (~ vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q)
                                                        : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q) 
                                                      + (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q 
                                                                                >> 0x23U))))))))
                                                  : VL_ULL(0)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 6U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 7U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid 
        = (1U & (~ (IData)(vlTOPp->reset)));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i = VL_ULL(0);
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q = VL_ULL(0);
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_result_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_result_valid = 1U;
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i 
                = (VL_ULL(0xfffffffff) & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_i_1 
                                          + (((QData)((IData)(
                                                              (0xfffU 
                                                               & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_i 
                                                                                >> 0x17U))))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_i)))));
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q 
                = (VL_ULL(0xfffffffff) & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_q_1 
                                          + (((QData)((IData)(
                                                              (0xfffU 
                                                               & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_q 
                                                                                >> 0x17U))))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_q)))));
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_result_valid = 0U;
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
        = ((vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
            << 1U) ^ ((1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                              >> 8U) ^ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_resultNext_2 
        = ((0x100000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                             >> 0xbU)) << 0x14U)) | 
           ((0x80000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                             >> 0xcU)) << 0x13U)) | 
            ((0x40000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                              >> 0xdU)) << 0x12U)) 
             | ((0x20000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                 >> 0xeU)) << 0x11U)) 
                | ((0x10000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                    >> 0xfU)) << 0x10U)) 
                   | ((0x8000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                      >> 0x10U)) << 0xfU)) 
                      | ((0x4000U & ((~ (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                         >> 0x11U)) 
                                     << 0xeU)) | ((0x2000U 
                                                   & ((~ 
                                                       (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                        >> 0x12U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                           >> 0x13U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1fU)))))))))))))))))))))));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__51(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__51\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_i 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (VL_MULS_III(24,24,24, 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i))), 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_i)))) 
                                             + VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_q)))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_q 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (VL_MULS_III(24,24,24, 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q))), 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_i)))) 
                                             - VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_q)))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_13_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_13_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_12_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_12_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_11_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_11_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_10_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_10_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_9_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_9_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_8_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_q));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = 0U;
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = 0U;
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid = 1U;
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                = (0xfffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i_1 
                                 + ((0xf000000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
                                                                           >> 0x17U)))) 
                                                   << 0x18U)) 
                                    | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i)));
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                = (0xfffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q_1 
                                 + ((0xf000000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
                                                                           >> 0x17U)))) 
                                                   << 0x18U)) 
                                    | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q)));
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid = 0U;
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = 0U;
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = 0U;
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__52(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__52\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_8_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_7_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i_1 
        = (0xfffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                         - ((0xf000000U & (VL_NEGATE_I((IData)(
                                                               (1U 
                                                                & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15 
                                                                   >> 0x17U)))) 
                                           << 0x18U)) 
                            | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2 
        = ((0x10000000U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                           << 1U)) | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q_1 
        = (0xfffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                         - ((0xf000000U & (VL_NEGATE_I((IData)(
                                                               (1U 
                                                                & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15 
                                                                   >> 0x17U)))) 
                                           << 0x18U)) 
                            | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5 
        = ((0x10000000U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                           << 1U)) | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_15_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (VL_MULS_III(24,24,24, 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i))), 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_i)))) 
                                             + VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_q)))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (VL_MULS_III(24,24,24, 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q))), 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_i)))) 
                                             - VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_q)))))));
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_7_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_6_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_15_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_6_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_i));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__53(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__53\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_valid 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_valid));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__54(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__54\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_valid 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__55(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__55\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkO_buf0;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_i_regNext 
        = (0xffffffU & VL_MULS_III(24,24,24, (0xffffffU 
                                              & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i))), 
                                   (0xffffffU & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_q_regNext 
        = (0xffffffU & VL_MULS_III(24,24,24, (0xffffffU 
                                              & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q))), 
                                   (0xffffffU & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q)))));
    vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i 
        = (0xfffU & ((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkO_buf1)
                      ? VL_SHIFTRS_III(12,12,2, ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid)
                                                  ? 
                                                 (0xfffU 
                                                  & vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_logic_ram_port0)
                                                  : 0U), (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1))
                      : (((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid)
                           ? vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_logic_ram_port0
                           : 0U) << (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q 
        = (0xfffU & ((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkO_buf1)
                      ? VL_SHIFTRS_III(12,12,2, ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid)
                                                  ? 
                                                 (0xfffU 
                                                  & (vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_logic_ram_port0 
                                                     >> 0xcU))
                                                  : 0U), (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1))
                      : (((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid)
                           ? (vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_logic_ram_port0 
                              >> 0xcU) : 0U) << (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1))));
    vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__receiver_bridge_min_plateau_driver;
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkO_buf0;
    vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf0;
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_dir_driver;
    vlTOPp->LoopBackTest__DOT__clkCrossing_15__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_bias_driver;
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__56(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__56\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_full))))));
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid) {
        vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver_bridge_min_plateau_driver = 0U;
    } else {
        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((0x14U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((0x18U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x20U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0x40U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((0x44U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((0x4cU == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                    if (vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire) {
                                        vlTOPp->LoopBackTest__DOT__receiver_bridge_min_plateau_driver 
                                            = (0xffU 
                                               & vlTOPp->axil4Ctrl_wdata);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_dir_driver = 0U;
    } else {
        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((0x14U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((0x18U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x20U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0x40U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((0x44U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if (vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire) {
                                    vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_dir_driver 
                                        = (1U & vlTOPp->axil4Ctrl_wdata);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_bias_driver = 0U;
    } else {
        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((0x14U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((0x18U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x20U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0x40U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if (vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire) {
                                vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_bias_driver 
                                    = (3U & vlTOPp->axil4Ctrl_wdata);
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_valueNext 
        = (0x3ffU & ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_willIncrement)));
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
    vlTOPp->axil4Ctrl_rdata = vlTOPp->LoopBackTest__DOT__readRsp_data;
}
