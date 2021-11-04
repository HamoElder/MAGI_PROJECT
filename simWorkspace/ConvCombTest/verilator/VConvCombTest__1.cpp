// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__18(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__18\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->tail_bits_valid)))) {
        if (vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_valid_1) {
            vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data 
                = ((4U & (((((((0xfffffffcU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                               << 1U)) 
                               ^ (0xb4U & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0))) 
                              ^ (0x58U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                          >> 1U))) 
                             ^ (0x2cU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                         >> 2U))) ^ 
                            (0x14U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                      >> 3U))) ^ (8U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                     >> 4U))) 
                          ^ (4U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                   >> 5U)))) | ((2U 
                                                 & (((((((0xfffffffeU 
                                                          & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0)) 
                                                         ^ 
                                                         (0x78U 
                                                          & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                             >> 1U))) 
                                                        ^ 
                                                        (0x3cU 
                                                         & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                            >> 2U))) 
                                                       ^ 
                                                       (0x1eU 
                                                        & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                           >> 3U))) 
                                                      ^ 
                                                      (0xeU 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                          >> 4U))) 
                                                     ^ 
                                                     (6U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                         >> 5U))) 
                                                    ^ 
                                                    (2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                        >> 6U)))) 
                                                | (1U 
                                                   & ((((((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                            >> 1U) 
                                                           ^ 
                                                           (0x3aU 
                                                            & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                               >> 2U))) 
                                                          ^ 
                                                          (0x1dU 
                                                           & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                              >> 3U))) 
                                                         ^ 
                                                         (0xeU 
                                                          & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                             >> 4U))) 
                                                        ^ 
                                                        (7U 
                                                         & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                            >> 5U))) 
                                                       ^ 
                                                       (3U 
                                                        & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                           >> 6U))) 
                                                      ^ 
                                                      (1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                          >> 7U))))));
        }
    }
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
        } else {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_62 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_62 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_60)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_61));
    vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0 
        = (((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_payload) 
            << 7U) | (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__r_enc_buf));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_60 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_56)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_57));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_61 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_58)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_59));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_56 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_48)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_49));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_57 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_50)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_51));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_58 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_52)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_53));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_59 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_54)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_55));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__19(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__19\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_48 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_32)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_33));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_49 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_34)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_35));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_50 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_36)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_37));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_51 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_38)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_39));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_52 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_40)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_41));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_53 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_42)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_43));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_54 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_44)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_45));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_46) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_47))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_46)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_47));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_55 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_46) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_47))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_46)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_47));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_32 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_3))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_3));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_33 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_3))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_3));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_4) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_5))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_4)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_5));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_34 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_4) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_5))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_4)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_5));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_6) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_7))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_6)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_7));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_35 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_6) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_7))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_6)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_7));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_8) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_9))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_8)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_9));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_36 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_8) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_9))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_8)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_9));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_10) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_11))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_10)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_11));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_37 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_10) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_11))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_10)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_11));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_12) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_13))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_12)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_13));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_38 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_12) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_13))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_12)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_13));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_14) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_15))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_14)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_15));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_39 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_14) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_15))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_14)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_15));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_16) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_17))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_16)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_17));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_40 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_16) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_17))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_16)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_17));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_18) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_19))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_18)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_19));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_41 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_18) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_19))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_18)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_19));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_20) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_21))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_20)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_21));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_42 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_20) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_21))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_20)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_21));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_22) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_23))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_22)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_23));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_43 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_22) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_23))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_22)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_23));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_24) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_25))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_24)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_25));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_44 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_24) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_25))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_24)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_25));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__20(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__20\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_26) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_27))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_26)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_27));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_45 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_26) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_27))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_26)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_27));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_46 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_28) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_29))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_28)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_29));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_46 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_28) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_29))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_28)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_29));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_47 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_30) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_31))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_30)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_31));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_47 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_30) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_31))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_30)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_31));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1))
            ? 0U : 1U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3))
            ? 2U : 3U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_3 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5))
            ? 4U : 5U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_3 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7))
            ? 6U : 7U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_4 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_5 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_4 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9))
            ? 8U : 9U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_5 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11))
            ? 0xaU : 0xbU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_6 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_7 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_6 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13))
            ? 0xcU : 0xdU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_7 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15))
            ? 0xeU : 0xfU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_8 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_9 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__21(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__21\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_8 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17))
            ? 0x10U : 0x11U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_9 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19))
            ? 0x12U : 0x13U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_10 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_11 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_10 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21))
            ? 0x14U : 0x15U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_11 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23))
            ? 0x16U : 0x17U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_12 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_13 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_12 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25))
            ? 0x18U : 0x19U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_13 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27))
            ? 0x1aU : 0x1bU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_14 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_15 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_14 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29))
            ? 0x1cU : 0x1dU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_15 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31))
            ? 0x1eU : 0x1fU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_16 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_17 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_16 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33))
            ? 0x20U : 0x21U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_17 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35))
            ? 0x22U : 0x23U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_18 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_19 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_18 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37))
            ? 0x24U : 0x25U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_19 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39))
            ? 0x26U : 0x27U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_20 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_21 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_20 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41))
            ? 0x28U : 0x29U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_21 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43))
            ? 0x2aU : 0x2bU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_22 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_23 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_22 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45))
            ? 0x2cU : 0x2dU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_23 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47))
            ? 0x2eU : 0x2fU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_24 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_25 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_24 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49))
            ? 0x30U : 0x31U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_25 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51))
            ? 0x32U : 0x33U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_26 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_27 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_26 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53))
            ? 0x34U : 0x35U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_27 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55))
            ? 0x36U : 0x37U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_28 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_29 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_28 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57))
            ? 0x38U : 0x39U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_29 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59))
            ? 0x3aU : 0x3bU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_30 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_31 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_30 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61))
            ? 0x3cU : 0x3dU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_31 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63))
            ? 0x3eU : 0x3fU);
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__22(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__22\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1));
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__23(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__23\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1));
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__24(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__24\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1));
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_64)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_65)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_66)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_67)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_68)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_69)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_70)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_71)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_8)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_72)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_9)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_73)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_10)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_74)));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__25(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__25\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_11)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_75)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_12)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_76)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_13)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_77)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_14)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_78)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_15)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_79)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_16)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_80)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_17)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_81)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_18)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_82)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_19)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_83)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_20)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_84)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_21)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_85)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_22)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_86)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_23)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_87)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_24)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_88)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_25)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_89)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_26)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_90)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_27)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_91)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_28)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_92)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_29)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_93)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_30)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_94)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_31)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_95)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_32)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_96)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_33)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_97)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_34)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_98)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_35)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_99)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_36)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_100)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_37)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_101)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_38)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_102)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_39)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_103)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_40)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_104)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_41)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_105)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_42)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_106)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_43)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_107)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_44)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_108)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_45)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_109)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_46)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_110)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_47)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_111)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_48)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_112)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_49)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_113)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_50)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_114)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_51)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_115)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_52)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_116)));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__26(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__26\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_53)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_117)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_54)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_118)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_55)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_119)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_56)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_120)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_57)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_121)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_58)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_122)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_59)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_123)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_60)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_124)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_61)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_125)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_62)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_126)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_63)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_127)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__28(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__28\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select;
    CData/*7:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
    CData/*0:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail;
    CData/*0:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last;
    // Body
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state;
    __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last;
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor;
    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail;
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat;
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read;
    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select;
    vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_last_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_last));
    if (vlTOPp->reset) {
        vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->tail_bits_valid)))) {
            vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1 
                = vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_valid_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor = 0U;
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready = 0U;
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_valid_1 = 0U;
        __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last = 0U;
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_last = 0U;
        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
            if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__when_ReorderLifo_l54) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state = 0U;
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_last 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last;
            } else {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor 
                    = (0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor) 
                                 - (IData)(1U)));
            }
            vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_valid_1 = 1U;
            __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last 
                = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last) 
                         | (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_last_lifo[
                            ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor) 
                             >> 5U)] >> (0x1fU & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor)))));
        } else {
            if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping) {
                if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0))) {
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready = 0U;
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state = 1U;
                } else {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor)));
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready = 1U;
                }
            } else {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready = 1U;
            }
            vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_valid_1 = 0U;
            vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_last = 0U;
            __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping))) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping))) {
            vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext));
    if (vlTOPp->reset) {
        __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select = 0U;
        __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write = 0U;
        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read = 0U;
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1 = 0U;
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 0U;
        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat = 0U;
        __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail = 0U;
        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 5U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
            __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write = 0U;
            __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select = 0U;
        } else {
            if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid) {
                if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l48) {
                    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select 
                        = ((2U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select))
                            ? 0U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_select));
                    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write = 0U;
                } else {
                    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write 
                        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write)));
                }
            }
        }
        if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
                    = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
                        ? 0xa7U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_addr_read_2));
                if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l153) {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 0U;
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 1U;
                }
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1 = 1U;
            } else {
                if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1 = 0U;
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 0U;
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat = 0U;
                    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail = 0U;
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 0U;
                } else {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
                        = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
                            ? 0xa7U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_addr_read_2));
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l153) {
                        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat) {
                            vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 4U;
                            vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat = 0U;
                            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 0U;
                        } else {
                            vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 5U;
                            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 1U;
                        }
                    }
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1 = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                    if ((7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))) {
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
                            = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read) 
                                        - (IData)(1U)));
                        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail) {
                            vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat 
                                = ((0x54U > (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write)) 
                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                                      == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select)));
                            vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 4U;
                        } else {
                            vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 1U;
                        }
                    }
                } else {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
                        = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
                            ? 0xa7U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_addr_read_2));
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l153) {
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 0U;
                        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 1U;
                    }
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1 = 1U;
                }
            } else {
                if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
                        = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
                            ? 0xa7U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_addr_read_2));
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l153) {
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 2U;
                    }
                } else {
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1 = 0U;
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 0U;
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104) {
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 3U;
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
                            = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write) 
                                        - (IData)(1U)));
                        __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail 
                            = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail;
                    }
                }
            }
        }
    }
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last 
        = __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail 
        = __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write 
        = __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select 
        = __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select;
}
