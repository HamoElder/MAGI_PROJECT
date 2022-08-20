// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__167(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__167\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_6_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_q));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_14_payload_cha_q = 0U;
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_q));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_13_payload_cha_q = 0U;
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_q));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_12_payload_cha_q = 0U;
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_q));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_11_payload_cha_q = 0U;
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_q));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_10_payload_cha_q = 0U;
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__168(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__168\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_q));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_9_payload_cha_q = 0U;
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_valid 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_8_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_7_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_6_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_5_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_4_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_valid = 0U;
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__169(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__169\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_3_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_2_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_1_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_valid 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_i = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_i 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_i;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_q = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_q 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_q;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_11__DOT__shift_reg_0_payload_cha_q = 0U;
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__170(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__170\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__clkCrossing_18__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_18__DOT__area_clkO_buf0;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__raw_data_takeWhen_regNext_payload_cha_q 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_data_cha_q;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__raw_data_takeWhen_regNext_payload_cha_i 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_data_cha_i;
    if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_states))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__message_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demod_method 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__demod_method;
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_i 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_i;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_cha_q 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_q;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_i 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_q 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q;
    vlTOPp->LoopBackTest__DOT__clkCrossing_18__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_18__DOT__area_clkI_reg;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__raw_data_takeWhen_valid) {
        if ((7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt))) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_data_cha_q 
                = (0xfffU & ((VL_MULS_III(19,19,19, 
                                          (0x7ffffU 
                                           & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                          (0x7ffffU 
                                           & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_32)))) 
                              + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_197__DOT__previous_adder_data) 
                             >> 7U));
        }
    }
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status))) {
        if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status))) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_valid_1) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__demod_method 
                    = (((~ ((IData)(1U) << (1U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt)))) 
                        & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__demod_method)) 
                       | (VL_LTES_III(1,12,12, 0U, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_data_cha_i)) 
                          << (1U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt))));
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__clkCrossing_18__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__receiver_bridge_min_plateau_driver;
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_32 = 3U;
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__171(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__171\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_states 
        = vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_states;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst_data_flow_mod_iq_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__raw_data_takeWhen_regNext_valid) 
           & (2U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_states)));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt = 0U;
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__by_pass_enable = 0U;
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status = 0U;
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__message_valid = 0U;
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__timeout = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status))) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_valid_1) {
                vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__timeout 
                    = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__timeout)));
            }
            if (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win) 
                 == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT___zz_1))) {
                vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status = 1U;
            }
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt = 1U;
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__by_pass_enable = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status))) {
                vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__timeout = 0U;
                if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_valid_1) {
                    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__when_PhyRx_l221) {
                        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status = 2U;
                        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt = 7U;
                    } else {
                        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt 
                            = (0xfU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt) 
                                       - (IData)(1U)));
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status))) {
                    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_valid_1) {
                        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__when_PhyRx_l221) {
                            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status = 3U;
                            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__message_valid = 1U;
                        } else {
                            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt 
                                = (0xfU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt) 
                                           - (IData)(1U)));
                        }
                    }
                } else {
                    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_reset) {
                        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status = 0U;
                    }
                    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__message_valid = 0U;
                    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__by_pass_enable = 1U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_i = 0U;
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_q = 0U;
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_result_valid_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_i 
                = (0xffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT___zz_power_val_i 
                                + ((0xf00000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_i_regNext 
                                                                         >> 0x17U)))) 
                                                 << 0x14U)) 
                                   | (0xfffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_i_regNext 
                                                  >> 4U)))));
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_q 
                = (0xffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT___zz_power_val_q 
                                + ((0xf00000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_q_regNext 
                                                                         >> 0x17U)))) 
                                                 << 0x14U)) 
                                   | (0xfffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_q_regNext 
                                                  >> 4U)))));
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_result_valid_1 = 1U;
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_result_valid_1 = 0U;
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_i = 0U;
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_val_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_197__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_197__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_31)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_196__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver_bridge_min_plateau_driver = 0U;
    } else {
        if (((((((((0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr)) 
                   | (0x14U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                  | (0x18U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                 | (0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                | (0x40U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
               | (0x44U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
              | (0x4cU == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
             | (0x60U == (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
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
    }
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__flowDeMux_2_outputs_1_valid 
        = ((1U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demod_method)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst_data_flow_mod_iq_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst__DOT__flowDeMux_2_outputs_2_valid 
        = ((2U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demod_method)) 
           & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_inst_data_flow_mod_iq_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win 
        = vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt 
        = vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__timeout 
        = vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__timeout;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status 
        = vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__when_PhyRx_l221 
        = (0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__raw_data_takeWhen_valid) 
                                         & (7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt))));
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid 
        = (1U & (~ (IData)(vlTOPp->reset)));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_196__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_196__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_30)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_195__DOT__previous_adder_data));
        }
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt 
        = vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT___zz_cnt 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found = 0U;
    if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_valid_1) {
            if ((0x3fU == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__timeout))) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_195__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_195__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_29)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_194__DOT__previous_adder_data));
        }
    }
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
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__172(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__172\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_reset 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found) 
           | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker_phy_rx_finish));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_pushPtr_willClear = 0U;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_pushPtr_willClear = 1U;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_popPtr_willClear = 0U;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_popPtr_willClear = 1U;
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_194__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_194__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_28)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_193__DOT__previous_adder_data));
        }
    }
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
    vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_pushPtr_valueNext 
        = (((0x53U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_pushPtr_willIncrement))));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_pushPtr_willClear) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_pushPtr_valueNext = 0U;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_popPtr_valueNext 
        = (((0x53U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_popPtr_willIncrement))));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_popPtr_willClear) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_popPtr_valueNext = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_193__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_193__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_27)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_192__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_160__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_160__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_27)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_159__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_192__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_192__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_26)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_191__DOT__previous_adder_data));
        }
    }
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
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_191__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_191__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_25)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_190__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_158__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_158__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_25)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_157__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_190__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_190__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_24)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_189__DOT__previous_adder_data));
        }
    }
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
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_189__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_189__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_23)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_188__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_156__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_156__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_23)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_155__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_155__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_155__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_22)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_154__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_154__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_154__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_21)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_153__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_153__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_153__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_20)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_152__DOT__previous_adder_data));
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
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__173(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__173\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_152__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_152__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_19)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_151__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_151__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_151__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_18)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_150__DOT__previous_adder_data));
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
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_17)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_182__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_150__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_150__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_17)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_149__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_149__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_149__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_16)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_148__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_148__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_148__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_15)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_147__DOT__previous_adder_data));
        }
    }
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_147__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_147__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_14)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_146__DOT__previous_adder_data));
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
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_146__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_146__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_13)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_145__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_145__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_145__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_12)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_144__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_144__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_144__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_11)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_143__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_143__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_143__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_10)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_142__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_142__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_142__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_9)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_141__DOT__previous_adder_data));
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
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__174(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__174\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_141__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_141__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_8)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_140__DOT__previous_adder_data));
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
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_140__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_140__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_7)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_139__DOT__previous_adder_data));
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
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_139__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_139__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_6)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_138__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_138__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_138__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_5)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_137__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_137__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_137__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_4)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_136__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_136__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_136__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_3)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_135__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_135__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_135__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_2)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_134__DOT__previous_adder_data));
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
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_134__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_134__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_1)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_133__DOT__previous_adder_data));
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
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_133__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_133__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_0)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_132__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q 
        = (0xfffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_11)
                      ? VL_NEGATE_I((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_y_raw))
                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_y_raw)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_i 
        = (0xfffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_11)
                      ? VL_NEGATE_I((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_x_raw))
                      : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_x_raw)));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_165__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_165__DOT__previous_adder_data = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_132__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_132__DOT__previous_adder_data = 0U;
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__raw_data_takeWhen_valid 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) 
           & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__phase_corrected_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__175(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__175\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid 
        = (1U & (~ (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__176(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__176\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_i_regNext 
        = (0xffffffU & VL_MULS_III(24,24,24, (0xffffffU 
                                              & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i))), 
                                   (0xffffffU & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__sq_q_regNext 
        = (0xffffffU & VL_MULS_III(24,24,24, (0xffffffU 
                                              & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q))), 
                                   (0xffffffU & VL_EXTENDS_II(24,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_31 = 1U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_30 = 0x7eU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_29 = 0x7cU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_28 = 0x79U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_27 = 0x77U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_26 = 0x77U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_25 = 0x79U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_24 = 0x7dU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_23 = 2U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_22 = 0xaU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_21 = 0x13U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_20 = 0x1cU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_19 = 0x24U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_18 = 0x2bU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_17 = 0x30U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_16 = 0x31U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_15 = 0x30U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_14 = 0x2bU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_13 = 0x24U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_12 = 0x1cU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_11 = 0x13U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_10 = 0xaU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_9 = 2U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_8 = 0x7dU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_7 = 0x79U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_6 = 0x77U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_5 = 0x77U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_4 = 0x79U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_3 = 0x7cU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_2 = 0x7eU;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_1 = 1U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_0 = 3U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_i 
        = (0xfffU & ((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkO_buf1)
                      ? VL_SHIFTRS_III(12,12,2, ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid)
                                                  ? 
                                                 (0xfffU 
                                                  & vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_logic_ram_port0)
                                                  : 0U), (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkO_buf1))
                      : (((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid)
                           ? vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_logic_ram_port0
                           : 0U) << (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkO_buf1))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_power_adjustor__DOT__shifted_data_cha_q 
        = (0xfffU & ((IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkO_buf1)
                      ? VL_SHIFTRS_III(12,12,2, ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid)
                                                  ? 
                                                 (0xfffU 
                                                  & (vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_logic_ram_port0 
                                                     >> 0xcU))
                                                  : 0U), (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkO_buf1))
                      : (((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid)
                           ? (vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_logic_ram_port0 
                              >> 0xcU) : 0U) << (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkO_buf1))));
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkO_buf0;
    vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkO_buf0;
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__clkCrossing_17__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_dir_driver;
    vlTOPp->LoopBackTest__DOT__clkCrossing_16__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_bias_driver;
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__177(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__177\n"); );
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
        vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_dir_driver = 0U;
    } else {
        if (((((((((0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr)) 
                   | (0x14U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                  | (0x18U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                 | (0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                | (0x40U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
               | (0x44U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
              | (0x4cU == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
             | (0x60U == (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
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
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver_bridge_pa_shift_bias_driver = 0U;
    } else {
        if (((((((((0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr)) 
                   | (0x14U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                  | (0x18U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                 | (0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                | (0x40U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
               | (0x44U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
              | (0x4cU == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
             | (0x60U == (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
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
    }
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_valueNext 
        = (0x3ffU & ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_willIncrement)));
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
    vlTOPp->axil4Ctrl_rdata = vlTOPp->LoopBackTest__DOT__readRsp_data;
}

VL_INLINE_OPT void VLoopBackTest::_combo__TOP__178(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_combo__TOP__178\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->LoopBackTest__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->LoopBackTest__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_awready = vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire;
}

void VLoopBackTest::_eval(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_eval\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__26(vlSymsp);
        vlTOPp->_sequent__TOP__33(vlSymsp);
        vlTOPp->_sequent__TOP__34(vlSymsp);
        vlTOPp->_sequent__TOP__35(vlSymsp);
        vlTOPp->_sequent__TOP__36(vlSymsp);
        vlTOPp->_sequent__TOP__37(vlSymsp);
        vlTOPp->_sequent__TOP__38(vlSymsp);
        vlTOPp->_sequent__TOP__39(vlSymsp);
        vlTOPp->_sequent__TOP__40(vlSymsp);
        vlTOPp->_sequent__TOP__41(vlSymsp);
        vlTOPp->_sequent__TOP__42(vlSymsp);
        vlTOPp->_sequent__TOP__43(vlSymsp);
        vlTOPp->_sequent__TOP__44(vlSymsp);
        vlTOPp->_sequent__TOP__45(vlSymsp);
        vlTOPp->_sequent__TOP__46(vlSymsp);
        vlTOPp->_sequent__TOP__47(vlSymsp);
        vlTOPp->_sequent__TOP__48(vlSymsp);
        vlTOPp->_sequent__TOP__49(vlSymsp);
        vlTOPp->_sequent__TOP__50(vlSymsp);
        vlTOPp->_sequent__TOP__51(vlSymsp);
        vlTOPp->_sequent__TOP__52(vlSymsp);
        vlTOPp->_sequent__TOP__53(vlSymsp);
        vlTOPp->_sequent__TOP__54(vlSymsp);
        vlTOPp->_sequent__TOP__55(vlSymsp);
        vlTOPp->_sequent__TOP__56(vlSymsp);
        vlTOPp->_sequent__TOP__57(vlSymsp);
        vlTOPp->_sequent__TOP__58(vlSymsp);
        vlTOPp->_sequent__TOP__59(vlSymsp);
        vlTOPp->_sequent__TOP__60(vlSymsp);
        vlTOPp->_sequent__TOP__61(vlSymsp);
        vlTOPp->_sequent__TOP__62(vlSymsp);
        vlTOPp->_sequent__TOP__63(vlSymsp);
        vlTOPp->_sequent__TOP__64(vlSymsp);
        vlTOPp->_sequent__TOP__65(vlSymsp);
        vlTOPp->_sequent__TOP__66(vlSymsp);
        vlTOPp->_sequent__TOP__67(vlSymsp);
        vlTOPp->_sequent__TOP__68(vlSymsp);
        vlTOPp->_sequent__TOP__69(vlSymsp);
        vlTOPp->_sequent__TOP__70(vlSymsp);
        vlTOPp->_sequent__TOP__71(vlSymsp);
        vlTOPp->_sequent__TOP__72(vlSymsp);
        vlTOPp->_sequent__TOP__73(vlSymsp);
        vlTOPp->_sequent__TOP__74(vlSymsp);
        vlTOPp->_sequent__TOP__75(vlSymsp);
        vlTOPp->_sequent__TOP__76(vlSymsp);
        vlTOPp->_sequent__TOP__77(vlSymsp);
        vlTOPp->_sequent__TOP__78(vlSymsp);
        vlTOPp->_sequent__TOP__79(vlSymsp);
        vlTOPp->_sequent__TOP__80(vlSymsp);
        vlTOPp->_sequent__TOP__86(vlSymsp);
        vlTOPp->_sequent__TOP__87(vlSymsp);
        vlTOPp->_sequent__TOP__88(vlSymsp);
        vlTOPp->_sequent__TOP__89(vlSymsp);
        vlTOPp->_sequent__TOP__90(vlSymsp);
        vlTOPp->_sequent__TOP__91(vlSymsp);
        vlTOPp->_sequent__TOP__92(vlSymsp);
        vlTOPp->_sequent__TOP__93(vlSymsp);
        vlTOPp->_sequent__TOP__94(vlSymsp);
        vlTOPp->_sequent__TOP__95(vlSymsp);
        vlTOPp->_sequent__TOP__96(vlSymsp);
        vlTOPp->_sequent__TOP__97(vlSymsp);
        vlTOPp->_sequent__TOP__98(vlSymsp);
        vlTOPp->_sequent__TOP__99(vlSymsp);
        vlTOPp->_sequent__TOP__100(vlSymsp);
        vlTOPp->_sequent__TOP__101(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__112(vlSymsp);
        vlTOPp->_sequent__TOP__113(vlSymsp);
        vlTOPp->_sequent__TOP__114(vlSymsp);
        vlTOPp->_sequent__TOP__115(vlSymsp);
        vlTOPp->_sequent__TOP__116(vlSymsp);
        vlTOPp->_sequent__TOP__117(vlSymsp);
        vlTOPp->_sequent__TOP__118(vlSymsp);
        vlTOPp->_sequent__TOP__119(vlSymsp);
        vlTOPp->_sequent__TOP__120(vlSymsp);
        vlTOPp->_sequent__TOP__121(vlSymsp);
        vlTOPp->_sequent__TOP__122(vlSymsp);
        vlTOPp->_sequent__TOP__123(vlSymsp);
        vlTOPp->_sequent__TOP__124(vlSymsp);
        vlTOPp->_sequent__TOP__125(vlSymsp);
        vlTOPp->_sequent__TOP__126(vlSymsp);
        vlTOPp->_sequent__TOP__127(vlSymsp);
        vlTOPp->_sequent__TOP__128(vlSymsp);
        vlTOPp->_sequent__TOP__129(vlSymsp);
        vlTOPp->_sequent__TOP__130(vlSymsp);
        vlTOPp->_sequent__TOP__131(vlSymsp);
        vlTOPp->_sequent__TOP__132(vlSymsp);
        vlTOPp->_sequent__TOP__133(vlSymsp);
        vlTOPp->_sequent__TOP__134(vlSymsp);
        vlTOPp->_sequent__TOP__135(vlSymsp);
        vlTOPp->_sequent__TOP__136(vlSymsp);
        vlTOPp->_sequent__TOP__137(vlSymsp);
        vlTOPp->_sequent__TOP__138(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__157(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__158(vlSymsp);
        vlTOPp->_sequent__TOP__159(vlSymsp);
    }
    vlTOPp->_combo__TOP__160(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__161(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__162(vlSymsp);
        vlTOPp->_sequent__TOP__163(vlSymsp);
        vlTOPp->_sequent__TOP__164(vlSymsp);
        vlTOPp->_sequent__TOP__165(vlSymsp);
        vlTOPp->_sequent__TOP__166(vlSymsp);
        vlTOPp->_sequent__TOP__167(vlSymsp);
        vlTOPp->_sequent__TOP__168(vlSymsp);
        vlTOPp->_sequent__TOP__169(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__170(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__171(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x80U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__172(vlSymsp);
        vlTOPp->_sequent__TOP__173(vlSymsp);
        vlTOPp->_sequent__TOP__174(vlSymsp);
        vlTOPp->_sequent__TOP__175(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__176(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x100U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__177(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x200U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__178(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VLoopBackTest::_change_request(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_change_request\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VLoopBackTest::_change_request_1(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_change_request_1\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
