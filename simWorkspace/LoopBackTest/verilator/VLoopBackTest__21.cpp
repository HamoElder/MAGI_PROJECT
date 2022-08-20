// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__92(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__92\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_4 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_3) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_3) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_4 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_3) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_3) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50 = 0x7fU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_0) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_1))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_0)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_2) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_3))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_2)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_3));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_0) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_1))
            ? 0U : 1U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_2) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_3))
            ? 2U : 3U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_4) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_5))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_4)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_5));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_3 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_6) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_7))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_6)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_7));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_4) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_5))
            ? 4U : 5U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_3 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_6) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_7))
            ? 6U : 7U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_4 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_8) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_9))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_8)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_9));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_5 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_10) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_11))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_10)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_11));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_4 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_8) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_9))
            ? 8U : 9U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_5 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_10) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_11))
            ? 0xaU : 0xbU);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_6 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_12) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_13))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_12)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_13));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_7 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_14) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_15))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_14)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_15));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_6 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_12) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_13))
            ? 0xcU : 0xdU);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_7 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_14) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_15))
            ? 0xeU : 0xfU);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_8 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_16) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_17))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_16)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_17));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_9 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_18) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_19))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_18)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_19));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_8 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_16) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_17))
            ? 0x10U : 0x11U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_9 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_18) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_19))
            ? 0x12U : 0x13U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_10 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_20) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_21))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_20)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_21));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_11 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_22) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_23))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_22)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_23));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_10 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_20) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_21))
            ? 0x14U : 0x15U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_11 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_22) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_23))
            ? 0x16U : 0x17U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_12 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_24) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_25))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_24)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_25));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_13 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_26) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_27))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_26)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_27));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_12 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_24) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_25))
            ? 0x18U : 0x19U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_13 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_26) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_27))
            ? 0x1aU : 0x1bU);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_14 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_28) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_29))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_28)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_29));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_15 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_30) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_31))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_30)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_31));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_14 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_28) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_29))
            ? 0x1cU : 0x1dU);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_15 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_30) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_31))
            ? 0x1eU : 0x1fU);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_16 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_32) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_33))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_32)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_33));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_17 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_34) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_35))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_34)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_35));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_16 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_32) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_33))
            ? 0x20U : 0x21U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_17 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_34) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_35))
            ? 0x22U : 0x23U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_18 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_36) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_37))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_36)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_37));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_19 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_38) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_39))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_38)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_39));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_18 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_36) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_37))
            ? 0x24U : 0x25U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_19 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_38) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_39))
            ? 0x26U : 0x27U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_20 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_40) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_41))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_40)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_41));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_21 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_42) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_43))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_42)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_43));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__93(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__93\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_20 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_40) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_41))
            ? 0x28U : 0x29U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_21 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_42) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_43))
            ? 0x2aU : 0x2bU);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_22 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_44) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_45))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_44)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_45));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_23 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_46) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_47))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_46)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_47));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_22 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_44) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_45))
            ? 0x2cU : 0x2dU);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_23 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_46) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_47))
            ? 0x2eU : 0x2fU);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_24 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_48) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_49))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_48)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_49));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_25 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_50) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_51))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_50)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_51));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_24 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_48) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_49))
            ? 0x30U : 0x31U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_25 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_50) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_51))
            ? 0x32U : 0x33U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_26 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_52) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_53))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_52)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_53));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_27 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_54) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_55))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_54)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_55));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_26 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_52) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_53))
            ? 0x34U : 0x35U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_27 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_54) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_55))
            ? 0x36U : 0x37U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_28 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_56) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_57))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_56)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_57));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_29 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_58) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_59))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_58)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_59));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_28 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_56) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_57))
            ? 0x38U : 0x39U);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_29 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_58) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_59))
            ? 0x3aU : 0x3bU);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_30 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_60) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_61))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_60)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_61));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_31 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_62) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_63))
            ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_62)
            : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_63));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_30 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_60) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_61))
            ? 0x3cU : 0x3dU);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_31 
        = (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_62) 
            <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_63))
            ? 0x3eU : 0x3fU);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16, 4U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16, 4U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4, 4U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4, 4U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16, 4U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16, 4U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4, 4U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4, 4U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_4 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_3) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_4));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_4 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_3) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_4));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__94(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__94\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_5 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_4) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_4) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_5 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_4) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_4) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49 = 0xffU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_0 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_0 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_1 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_2 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_3 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_3 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_4 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_4 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_5 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_5 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_6 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_6 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_7 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_7 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_8 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_8 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_9 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_9 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_10 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_10 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_11 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_11 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_12 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_12 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_13 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_13 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_14 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_14 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_15 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_15 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_16 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_16 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1));
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__95(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__95\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_17 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_17 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_18 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_18 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_19 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_19 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_20 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_20 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_21 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_21 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_22 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_22 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_23 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_23 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_24 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_24 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_25 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_25 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_26 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_26 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_27 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_27 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_28 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_28 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_29 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_29 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_30 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_30 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_31 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_31 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_32 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_32 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_33 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_33 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_34 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_34 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_35 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_35 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_36 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_36 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_37 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_37 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_38 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_38 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_39 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_39 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_40 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_40 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_41 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_41 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_42 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_42 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_43 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_43 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_44 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_44 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_45 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_45 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_46 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_46 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_47 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_47 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_48 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_48 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_49 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_49 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_50 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_50 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_51 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_51 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_52 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_52 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1));
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__96(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__96\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_53 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_53 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_54 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_54 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_55 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_55 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_56 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_56 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_57 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_57 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_58 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_58 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_59 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_59 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_60 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_60 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_61 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_61 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_62 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_62 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_63 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_63 
                = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0)
                    : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1));
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15, 3U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15, 3U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3, 3U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3, 3U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15, 3U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15, 3U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3, 3U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3, 3U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_5 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_4) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_5));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_5 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_4) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_5));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_6 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_5) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_5) 
                            >> 3U)));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__97(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__97\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_6 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_5) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_5) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48 = 0x1fdU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_0) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_0)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_0) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_64)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_1) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_1)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_1) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_65)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_2) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_2)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_2) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_66)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_3) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_3)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_3) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_67)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_4) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_4)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_4) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_68)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_5) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_5)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_5) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_69)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_6) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_6)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_6) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_70)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_7) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_7)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_7) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_71)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_8) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_8)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_8) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_72)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_9) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_9)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_9) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_73)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_10) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_10)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_10) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_74)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_11) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_11)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_11) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_75)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_12) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_12)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_12) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_76)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_13) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_13)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_13) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_77)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_14) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_14)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_14) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_78)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_15) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_15)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_15) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_79)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_16) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_16)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_16) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_80)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_17) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_17)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_17) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_81)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_18) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_18)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_18) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_82)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_19) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_19)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_19) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_83)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_20) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_20)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_20) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_84)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_21) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_21)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_21) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_85)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_22) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_22)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_22) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_86)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_23) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_23)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_23) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_87)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_24) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_24)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_24) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_88)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_25) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_25)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_25) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_89)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_26) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_26)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_26) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_90)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_27) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_27)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_27) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_91)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_28) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_28)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_28) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_92)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_29) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_29)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_29) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_93)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_30) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_30)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_30) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_94)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_31) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_31)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_31) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_95)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_32) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_32)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_32) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_96)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_33) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_33)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_33) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_97)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_34) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_34)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_34) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_98)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_35) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_35)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_35) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_99)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_36) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_36)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_36) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_100)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_37) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_37)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_37) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_101)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_38) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_38)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_38) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_102)));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__98(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__98\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_39) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_39)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_39) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_103)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_40) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_40)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_40) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_104)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_41) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_41)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_41) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_105)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_42) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_42)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_42) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_106)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_43) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_43)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_43) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_107)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_44) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_44)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_44) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_108)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_45) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_45)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_45) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_109)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_46) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_46)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_46) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_110)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_47) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_47)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_47) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_111)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_48) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_48)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_48) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_112)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_49) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_49)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_49) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_113)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_50) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_50)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_50) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_114)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_51) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_51)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_51) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_115)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_52) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_52)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_52) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_116)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_53) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_53)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_53) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_117)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_54) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_54)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_54) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_118)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_55) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_55)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_55) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_119)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_56) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_56)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_56) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_120)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_57) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_57)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_57) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_121)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_58) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_58)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_58) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_122)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_59) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_59)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_59) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_123)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_60) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_60)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_60) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_124)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_61) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_61)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_61) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_125)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_62) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_62)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_62) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_126)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_63) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_63)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__node_weight_63) 
                      + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_127)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14, 2U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14, 2U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2, 2U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2, 2U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14, 2U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14, 2U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2, 2U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2, 2U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_6 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_5) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_6));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_6 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_5) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_6));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__99(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__99\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_7 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_6) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_6) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_7 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_6) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_6) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47 = 0x3ebU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13, 1U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13, 1U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1, 1U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1, 1U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13, 1U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13, 1U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1, 1U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1, 1U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_7 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_6) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_7));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_7 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_6) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_7));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_8 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_7) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_7) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_8 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_7) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_7) 
                            >> 3U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46 = 0x76bU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45)));
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__100(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__100\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34 = 0U;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12)));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x)));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12)));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x)));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_8 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_7) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_8));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_8 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_7) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_8));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_9 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_8) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_8) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_9 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_8) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_8) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45 = 0xc90U;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
            = ((0x1000000U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phi 
                              << 1U)) | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phi);
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x 
            = ((0x1000000U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_i) 
                              << 0xdU)) | ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_i) 
                                           << 0xcU));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
            = ((0x1000000U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_q) 
                              << 0xdU)) | ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_q) 
                                           << 0xcU));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x 
            = (0xffffffU & ((0x1000000U & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130)
                             ? ((3U == (3U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130 
                                              >> 0x17U)))
                                 ? vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130
                                 : 0x800000U) : ((0x800000U 
                                                  & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130)
                                                  ? 0x7fffffU
                                                  : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130)));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
            = (0xffffffU & ((0x1000000U & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4)
                             ? ((3U == (3U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 
                                              >> 0x17U)))
                                 ? vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4
                                 : 0x800000U) : ((0x800000U 
                                                  & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4)
                                                  ? 0x7fffffU
                                                  : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4)));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_9 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_8) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_9));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_9 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_8) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_9));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_10 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_9) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_9) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_10 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_9) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_9) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_10 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_9) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_10));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_10 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_9) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_10));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_11 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_10) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_10) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_11 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_10) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_10) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_11 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_10) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_11));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_11 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_10) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_11));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_12 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_11) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_11) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_12 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_11) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_11) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_12 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_11) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_12));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_12 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_11) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_12));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_13 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_12) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_12) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_13 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_12) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_12) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_13 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_12) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_13));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_13 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_12) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_13));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_14 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_13) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_13) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_14 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_13) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_13) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_14 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_13) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_14));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_14 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_13) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_14));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__101(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__101\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__feed_back_15 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_14) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT___zz_r_scr_14) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__feed_back_15 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_14) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT___zz_r_scr_14) 
                            >> 3U)));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__112(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__112\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__mean_cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__mean_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__mask_cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__mask_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt 
        = vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__data_last 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__data_last;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__timeout 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__timeout;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__goto_tail 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__goto_tail;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tail_repeat 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tail_repeat;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_write 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_write;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_select 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_select;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_buffer 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_buffer;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__symbol_cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__symbol_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_states 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_demodulator__DOT__demodulator_states;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_mean 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_mean;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_combination__DOT__base_cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_data_combination__DOT__data_combination__DOT__base_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_status 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_status;
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__raw_data_takeWhen_valid) {
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt 
                = ((7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt))
                    ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT___zz_cnt));
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__113(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__113\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rValid = 0U;
    } else {
        if (vlTOPp->axil4Ctrl_arready) {
            vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rValid 
                = vlTOPp->axil4Ctrl_arvalid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol = 0U;
    } else {
        if (VL_LTES_III(1,24,24, 0x1921U, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l47)) {
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol 
                = (1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol)));
        } else {
            if (VL_GTES_III(1,24,24, 0xffe6dfU, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)) {
                vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol 
                    = (1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol)));
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_2_outputs_2_payload_last));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_2_outputs_1_payload_last));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_2_outputs_0_payload_last));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__mask_cnt = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__when_DePuncturing_l52) {
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__mask_cnt = 0U;
        } else {
            if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_fire)))) {
                if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__de_punched_data_fire) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__mask_cnt 
                        = ((7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__mask_cnt))
                            ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT___zz_mask_cnt));
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__raw_data_last = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
            vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__raw_data_last 
                = (1U & (IData)((vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_logic_ram_port0 
                                 >> 0x24U)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__pkg_slices_cnt = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire)))) {
            if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__split_data_fire) {
                vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__pkg_slices_cnt 
                    = ((IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen_pkg_data_payload_last)
                        ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT___zz_pkg_slices_cnt));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver_bridge_phase_corrector_shift_driver = 0x1dU;
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
                                    if ((0x4cU != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                        if (vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire) {
                                            vlTOPp->LoopBackTest__DOT__receiver_bridge_phase_corrector_shift_driver 
                                                = (0x3fU 
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
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_reset) {
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt = 0U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l90) {
                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l91)))) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt 
                        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l94)
                            ? 0U : (0x3fU & ((IData)(1U) 
                                             + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt))));
                }
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__when_PhyTx_l252));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT___zz_writeJoinEvent_translated_ready) {
            vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bvalid_2 
                = vlTOPp->LoopBackTest__DOT__writeJoinEvent_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__scram_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2_init_state_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__scram_valid = 0U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2_scram_data_ready) {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_2__DOT__scram_valid = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_init_state_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_valid = 0U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler_scram_data_ready) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_descrambling__DOT__descrambler__DOT__scram_valid = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_last = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__when_DePuncturing_l52) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_last = 0U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_fire) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_last 
                    = (1U & vlTOPp->LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT___zz_logic_ram_port0);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt = 0U;
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_payload_1 = 0U;
    } else {
        if ((1U & (~ (((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo_io_pop_valid) 
                       & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_raw_data_ready)) 
                      & (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_logic_ram_port0))))) {
            if (((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo_io_pop_valid) 
                 & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_raw_data_ready))) {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt)));
            }
        }
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__when_PhyTx_l252) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_payload_1 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt)));
            vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt = 0U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__raw_data_fire_3) {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
            vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt = 4U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__split_data_fire) {
                vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt 
                    = (7U & ((IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt) 
                             - (IData)(1U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__raw_last = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_raw_data_valid) 
             & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_raw_data_ready))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__raw_last 
                = (1U & vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__cnt = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__when_DePuncturing_l52) {
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__cnt = 0U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_fire) {
                vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__cnt = 8U;
            } else {
                if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__de_punched_data_fire) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__cnt 
                        = (0xfU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__cnt) 
                                   - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT___zz_raw_data_valid_2 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT___zz_raw_data_valid_1));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data_valid_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phi 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_valid)
                                           ? vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiNext
                                           : 0U));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid))) {
            vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire))) {
            vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__data_last = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__data_last) {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__when_PhyTx_l70) {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__data_last = 0U;
            }
        } else {
            if ((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_raw_data_valid) 
                  & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_raw_data_ready)) 
                 & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0))) {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__data_last = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid) {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
                if ((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid) 
                      & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_ready)) 
                     & vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_logic_ram_port0)) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status = 2U;
                }
            } else {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt = 0U;
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt = 0U;
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_ready = 0U;
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid = 0U;
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_last = 0U;
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states))) {
            vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt = 0U;
            vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt = 0U;
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_ready = 0U;
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid = 0U;
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_last = 0U;
            if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_valid) 
                 & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)))) {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt)));
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states))) {
                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)))) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt 
                        = ((0xfU == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt))
                            ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_cnt));
                }
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid = 1U;
                if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l74) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt)));
                    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l76) {
                        vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_ready = 1U;
                        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states = 2U;
                    }
                }
            } else {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid 
                    = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_data_fire;
                if ((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_valid) 
                      & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_ready)) 
                     & vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0)) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states = 0U;
                    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_last = 1U;
                } else {
                    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_last = 0U;
                }
            }
        }
    }
}
