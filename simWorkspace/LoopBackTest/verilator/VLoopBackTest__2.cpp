// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__36(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__36\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_2 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_1;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_2 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_17 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_17 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_16;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_6 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_5;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_6 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_5;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_188__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_188__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_22)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_187__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_155__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_155__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_22)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_154__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_7 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_7 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_6;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_7 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_7 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_6;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_6 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_5;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_6 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_5;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_188__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_188__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_22)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_187__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_6 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_5;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_6 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_6 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_5;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_6 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_1 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_0;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_1 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_16 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_16 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_15;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_5 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_5 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_187__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_187__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_21)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_186__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_154__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_154__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_21)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_153__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_6 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_5;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_6 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_5;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_5 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_5 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_187__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_187__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_21)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_186__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_5 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_4;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_5 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_5 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_4;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_5 = 0U;
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__37(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__37\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_0 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_0 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_15 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_15 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_14;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_4 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_4 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_186__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_186__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_20)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_185__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_153__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_153__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_20)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_152__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_5 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_5 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_4 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_4 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_186__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_186__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_20)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_185__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_4 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_3;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_4 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_4 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_3;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_4 = 0U;
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol 
        = vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol;
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_14 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_14 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_13;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_3 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_3 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_185__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_185__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_19)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_184__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_152__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_152__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_19)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_151__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_4 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_4 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_3 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_3 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_185__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_185__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_19)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_184__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_3 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_2;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_3 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_3 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_2;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_3 = 0U;
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__38(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__38\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_13 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_13 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_12;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_2 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_2 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_184__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_184__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_18)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_183__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_151__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_151__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_18)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_150__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_3 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_3 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_2 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_2 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_184__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_184__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_18)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_183__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_2 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_1;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_2 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_2 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_1;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_2 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_12 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_12 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_11;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_1 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_1 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_183__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_183__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_17)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_182__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_150__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_150__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_17)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_149__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_2 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_2 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_1 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_1 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_183__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_183__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_15)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_182__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_1 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_0;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_1 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_1 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_0;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_1 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_11 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_11 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_10;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_0 
                = (0xfffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_q_regNext 
                               >> 4U));
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__39(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__39\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_0 
                = (0xfffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_i_regNext 
                               >> 4U));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_182__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_182__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_16)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_181__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_149__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_149__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_16)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_148__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_1 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_1 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_q;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_i;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_182__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_182__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_16)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_181__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_0 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_0 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_0 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_0 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_10 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_10 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_9;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_181__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_181__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_15)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_180__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_148__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_148__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_15)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_147__DOT__previous_adder_data));
        }
    }
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_181__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_181__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_15)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_180__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_180__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_180__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_179__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_147__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_147__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_146__DOT__previous_adder_data));
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
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_180__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_180__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_14)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_179__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_8 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_8 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_7;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_179__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_179__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_178__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_146__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_146__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_145__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_179__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_179__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_13)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_178__DOT__previous_adder_data));
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__40(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__40\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_7 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_7 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_6;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_178__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_178__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_177__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_145__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_145__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_144__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_178__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_178__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_12)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_177__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_6 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_6 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_5;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_177__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_177__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_176__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_144__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_144__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_143__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_177__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_177__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_11)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_176__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_5 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_5 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_176__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_176__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_175__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_143__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_143__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_142__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_176__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_176__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_10)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_175__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_4 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_4 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_175__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_175__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_174__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_142__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_142__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_141__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_175__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_175__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_9)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_174__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_3 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_3 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_174__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_174__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_173__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_141__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_141__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_140__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_174__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_174__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_8)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_173__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_2 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_173__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_173__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_172__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_140__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_140__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_139__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_173__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_173__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_7)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_172__DOT__previous_adder_data));
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__41(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__41\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_1 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_payload_last;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_172__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_172__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_171__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_139__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_139__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_138__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_172__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_172__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_6)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_171__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_payload_last 
        = ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__raw_last) 
           & (7U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt)));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_171__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_171__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_170__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_138__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_138__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_137__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_171__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_171__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_5)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_170__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_170__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_170__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_169__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_137__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_137__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_136__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_170__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_170__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_4)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_169__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_169__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_169__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_168__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_136__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_136__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_135__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_169__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_169__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_3)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_168__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_168__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_168__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_167__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_135__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_135__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_134__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_168__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_168__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_2)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_167__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_167__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_167__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_166__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_134__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_134__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_133__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_167__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_167__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_1)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_166__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_166__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_166__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_165__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_133__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_133__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_132__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_166__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_166__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_0)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_165__DOT__previous_adder_data));
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__42(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__42\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q 
        = (0xfffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_11)
                      ? VL_NEGATE_I((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_y_raw))
                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_y_raw)));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_165__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_165__DOT__previous_adder_data = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_132__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_132__DOT__previous_adder_data = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_165__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_165__DOT__previous_adder_data = 0U;
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

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__52(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__52\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf0;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_31 = 1U;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__raw_data_takeWhen_valid) {
        if ((7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt))) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_data_cha_i 
                = (0xfffU & ((VL_MULS_III(19,19,19, 
                                          (0x7ffffU 
                                           & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                          (0x7ffffU 
                                           & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_32)))) 
                              + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_164__DOT__previous_adder_data) 
                             >> 7U));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__pkg_detected_regNext 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__pkg_handling_1;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z_1)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z_1)));
    }
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
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__53(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__53\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_32 = 3U;
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
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__54(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__54\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_47 = 0x3ebU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                        >> 0x17U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                      >> 0x17U)));
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

VL_INLINE_OPT void VLoopBackTest::_combo__TOP__55(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_combo__TOP__55\n"); );
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

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__56(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__56\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt 
        = vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt 
        = vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__when_PhyTx_l246 
        = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_raw_data_valid) 
            & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_raw_data_ready)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_logic_ram_port0));
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
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_fragment 
        = (0xffU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                    >> 1U));
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_fragment = 0U;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_last 
        = (1U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0));
    if ((7U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter))) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_last = 0U;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_last 
            = (7U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment_cha_i = 0U;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment_cha_i 
            = (0xfffU & ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))
                          ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT___zz_result_data_payload_fragment_cha_i_1)
                          : ((2U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))
                              ? vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_mod_array
                             [(1U & ((9U >= (0xfU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter)))
                                      ? ((((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1) 
                                           << 8U) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__pkg_size_payload_1)) 
                                         >> (0xfU & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter)))
                                      : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT____Vxrand1)))]
                              : (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 
                                 >> 1U))));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_164__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_164__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_31)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_163__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT___zz_cnt 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt)));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__pkg_handling_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__pkg_handling_1 = 0U;
        } else {
            if ((((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkO_buf1) 
                  <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt)) 
                 & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__gate_pkg_det))) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__pkg_handling_1 = 1U;
            }
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
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__57(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__57\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt 
        = vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found = 0U;
    if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_valid_1) {
            if ((0x3fU == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__timeout))) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found = 1U;
            }
        }
    }
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
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_163__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_163__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_30)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_162__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__when_PreambleDetector_l67 
        = (0xffU > (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__gate_pkg_det 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1_power_result_valid_regNext) 
                                         & ((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & ((vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT___zz_gate_pkg_det 
                                                                 << 3U) 
                                                                + 
                                                                (0x3ffffffU 
                                                                 & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT___zz_gate_pkg_det 
                                                                    << 2U)))))) 
                                            < vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__prod_avg_mag)));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_162__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_162__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_29)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_161__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1_power_result_valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_result_valid_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT___zz_gate_pkg_det 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & ((((0x800000U 
                                                & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_i)
                                                ? (~ vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_i)
                                                : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_i) 
                                              + (1U 
                                                 & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_i 
                                                    >> 0x17U))) 
                                             + (((0x800000U 
                                                  & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_q)
                                                  ? 
                                                 (~ vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_q)
                                                  : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_q) 
                                                + (1U 
                                                   & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_q 
                                                      >> 0x17U))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__prod_avg_mag 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_result_valid)
                                                  ? 
                                                 (VL_ULL(0xfffffffff) 
                                                  & ((((1U 
                                                        & (IData)(
                                                                  (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i 
                                                                   >> 0x23U)))
                                                        ? 
                                                       (~ vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i)
                                                        : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i) 
                                                      + (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i 
                                                                                >> 0x23U)))))) 
                                                     + 
                                                     (((1U 
                                                        & (IData)(
                                                                  (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q 
                                                                   >> 0x23U)))
                                                        ? 
                                                       (~ vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q)
                                                        : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q) 
                                                      + (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q 
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
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_161__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_161__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_28)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_160__DOT__previous_adder_data));
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__58(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__58\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i = VL_ULL(0);
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q = VL_ULL(0);
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_result_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_result_valid = 1U;
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_i 
                = (VL_ULL(0xfffffffff) & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_i_1 
                                          + (((QData)((IData)(
                                                              (0xfffU 
                                                               & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_i 
                                                                                >> 0x17U))))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_i)))));
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__corr_val_q 
                = (VL_ULL(0xfffffffff) & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_q_1 
                                          + (((QData)((IData)(
                                                              (0xfffU 
                                                               & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_q 
                                                                                >> 0x17U))))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_q)))));
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_result_valid = 0U;
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
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_160__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_160__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_26)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_159__DOT__previous_adder_data));
        }
    }
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_i 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (VL_MULS_III(24,24,24, 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i))), 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_i)))) 
                                             + VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_q)))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_corr_val_q 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (VL_MULS_III(24,24,24, 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q))), 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_i)))) 
                                             - VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_q)))))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_159__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_159__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_26)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_158__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_15_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_158__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_158__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_28)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_157__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_13_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_q));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_157__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_157__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_24)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_156__DOT__previous_adder_data));
        }
    }
}
