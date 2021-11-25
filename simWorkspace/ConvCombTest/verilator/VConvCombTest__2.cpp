// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__41(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__41\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_34 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_13 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_11 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_35 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_81 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_85 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_91 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_33 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_31 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_39 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_107 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_40 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__42(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__42\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_41 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_109 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_42 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_43 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_111 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_44 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_45 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_46 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_47 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_115 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_48 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_49 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_117 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__43(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__43\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_50 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_51 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_119 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_52 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_53 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_121 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_8 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_54 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_55 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_123 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_10 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_56 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_57 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__44(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__44\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_12 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_58 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_59 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_14 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_60 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_61 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_16 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_62 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_63 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_18 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_64 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_65 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_20 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_66 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__45(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__45\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_67 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_22 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_68 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_69 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_24 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_70 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_71 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_26 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_72 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_73 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_28 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_74 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_75 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_30 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_76 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__46(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__46\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp2[16];
    WData/*511:0*/ __Vtemp3[16];
    WData/*511:0*/ __Vtemp4[16];
    WData/*511:0*/ __Vtemp5[16];
    WData/*511:0*/ __Vtemp6[16];
    WData/*511:0*/ __Vtemp7[16];
    WData/*511:0*/ __Vtemp8[16];
    WData/*511:0*/ __Vtemp9[16];
    WData/*511:0*/ __Vtemp10[16];
    WData/*511:0*/ __Vtemp11[16];
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_77 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_32 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_78 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_79 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt = 0U;
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt = 0U;
                if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104) {
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt = 1U;
                }
            }
        }
    }
    if (((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7_io_pop_valid) 
         & (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7_io_pop_ready))) {
        vlTOPp->ConvCombTest__DOT___zz_decoded_data_payload_fragment 
            = ((0x40U & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT___zz_logic_ram_port0) 
                         << 5U)) | (IData)(vlTOPp->ConvCombTest__DOT___zz___05Fzz_decoded_data_payload_fragment));
    }
    if (((2U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vlvbound5 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path;
        if ((0xa7U >= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write))) {
            vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vlvbound5;
            vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 = 1U;
            vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
        }
    }
    if (((1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vlvbound3 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path;
        if ((0xa7U >= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write))) {
            vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vlvbound3;
            vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 = 1U;
            vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
        }
    }
    if (((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vlvbound1 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path;
        if ((0xa7U >= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write))) {
            vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vlvbound1;
            vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = 1U;
            vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
        }
    }
    if (vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT___zz_1) {
        vlTOPp->__Vdlyvval__ConvCombTest__DOT__streamFifo_5__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data) 
                << 1U) | (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_payload_last_regNext));
        vlTOPp->__Vdlyvset__ConvCombTest__DOT__streamFifo_5__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__streamFifo_5__DOT__logic_ram__v0 
            = vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushPtr_value;
    }
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last 
        = ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
           & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last) 
              | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_lifo_last)));
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
           & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last) 
              | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_lifo_last)));
    if (vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT___zz_1) {
        vlTOPp->__Vdlyvval__ConvCombTest__DOT__streamFifo_6__DOT__logic_ram__v0 
            = ((0x1000U & ((IData)(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_fragment) 
                           << 5U)) | ((0x800U & ((IData)(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_fragment) 
                                                 >> 3U)) 
                                      | ((0x400U & 
                                          ((IData)(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_fragment) 
                                           << 4U)) 
                                         | ((0x200U 
                                             & ((IData)(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_fragment) 
                                                << 4U)) 
                                            | ((0x100U 
                                                & ((IData)(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_fragment) 
                                                   >> 4U)) 
                                               | ((0xc0U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_fragment) 
                                                      << 3U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_fragment) 
                                                         >> 5U)) 
                                                     | ((0x18U 
                                                         & ((IData)(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_fragment) 
                                                            << 2U)) 
                                                        | ((4U 
                                                            & ((IData)(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_fragment) 
                                                               >> 6U)) 
                                                           | ((2U 
                                                               & ((IData)(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_fragment) 
                                                                  << 1U)) 
                                                              | (IData)(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_last)))))))))));
        vlTOPp->__Vdlyvset__ConvCombTest__DOT__streamFifo_6__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__streamFifo_6__DOT__logic_ram__v0 
            = vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT___zz_de_punched_data_payload_fragment_indicate) 
                << 3U) | ((6U & (((3U == (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT___zz_switch_Misc_l200_1_1))
                                   ? (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__raw_data_fragment)
                                   : ((1U == (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT___zz_switch_Misc_l200_1_1))
                                       ? (1U & (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__raw_data_fragment))
                                       : 0U)) << 1U)) 
                          | ((1U == (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__cnt)) 
                             & (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__raw_data_last))));
        vlTOPp->__Vdlyvset__ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_ram__v0 
            = vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) 
                << 2U) | (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data) 
                           << 1U) | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last)));
        vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp2[0U] = 1U;
            __Vtemp2[1U] = 0U;
            __Vtemp2[2U] = 0U;
            __Vtemp2[3U] = 0U;
            __Vtemp2[4U] = 0U;
            __Vtemp2[5U] = 0U;
            __Vtemp2[6U] = 0U;
            __Vtemp2[7U] = 0U;
            __Vtemp2[8U] = 0U;
            __Vtemp2[9U] = 0U;
            __Vtemp2[0xaU] = 0U;
            __Vtemp2[0xbU] = 0U;
            __Vtemp2[0xcU] = 0U;
            __Vtemp2[0xdU] = 0U;
            __Vtemp2[0xeU] = 0U;
            __Vtemp2[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp3, __Vtemp2, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp3[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_267 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp4[0U] = 1U;
            __Vtemp4[1U] = 0U;
            __Vtemp4[2U] = 0U;
            __Vtemp4[3U] = 0U;
            __Vtemp4[4U] = 0U;
            __Vtemp4[5U] = 0U;
            __Vtemp4[6U] = 0U;
            __Vtemp4[7U] = 0U;
            __Vtemp4[8U] = 0U;
            __Vtemp4[9U] = 0U;
            __Vtemp4[0xaU] = 0U;
            __Vtemp4[0xbU] = 0U;
            __Vtemp4[0xcU] = 0U;
            __Vtemp4[0xdU] = 0U;
            __Vtemp4[0xeU] = 0U;
            __Vtemp4[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp5, __Vtemp4, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp5[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_266 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp6[0U] = 1U;
            __Vtemp6[1U] = 0U;
            __Vtemp6[2U] = 0U;
            __Vtemp6[3U] = 0U;
            __Vtemp6[4U] = 0U;
            __Vtemp6[5U] = 0U;
            __Vtemp6[6U] = 0U;
            __Vtemp6[7U] = 0U;
            __Vtemp6[8U] = 0U;
            __Vtemp6[9U] = 0U;
            __Vtemp6[0xaU] = 0U;
            __Vtemp6[0xbU] = 0U;
            __Vtemp6[0xcU] = 0U;
            __Vtemp6[0xdU] = 0U;
            __Vtemp6[0xeU] = 0U;
            __Vtemp6[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp7, __Vtemp6, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp7[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_265 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp8[0U] = 1U;
            __Vtemp8[1U] = 0U;
            __Vtemp8[2U] = 0U;
            __Vtemp8[3U] = 0U;
            __Vtemp8[4U] = 0U;
            __Vtemp8[5U] = 0U;
            __Vtemp8[6U] = 0U;
            __Vtemp8[7U] = 0U;
            __Vtemp8[8U] = 0U;
            __Vtemp8[9U] = 0U;
            __Vtemp8[0xaU] = 0U;
            __Vtemp8[0xbU] = 0U;
            __Vtemp8[0xcU] = 0U;
            __Vtemp8[0xdU] = 0U;
            __Vtemp8[0xeU] = 0U;
            __Vtemp8[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp9, __Vtemp8, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp9[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_264 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp10[0U] = 1U;
            __Vtemp10[1U] = 0U;
            __Vtemp10[2U] = 0U;
            __Vtemp10[3U] = 0U;
            __Vtemp10[4U] = 0U;
            __Vtemp10[5U] = 0U;
            __Vtemp10[6U] = 0U;
            __Vtemp10[7U] = 0U;
            __Vtemp10[8U] = 0U;
            __Vtemp10[9U] = 0U;
            __Vtemp10[0xaU] = 0U;
            __Vtemp10[0xbU] = 0U;
            __Vtemp10[0xcU] = 0U;
            __Vtemp10[0xdU] = 0U;
            __Vtemp10[0xeU] = 0U;
            __Vtemp10[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp11, __Vtemp10, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp11[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_263 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__47(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__47\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp12[16];
    WData/*511:0*/ __Vtemp13[16];
    WData/*511:0*/ __Vtemp14[16];
    WData/*511:0*/ __Vtemp15[16];
    WData/*511:0*/ __Vtemp16[16];
    WData/*511:0*/ __Vtemp17[16];
    WData/*511:0*/ __Vtemp18[16];
    WData/*511:0*/ __Vtemp19[16];
    WData/*511:0*/ __Vtemp20[16];
    WData/*511:0*/ __Vtemp21[16];
    WData/*511:0*/ __Vtemp22[16];
    WData/*511:0*/ __Vtemp23[16];
    WData/*511:0*/ __Vtemp24[16];
    WData/*511:0*/ __Vtemp25[16];
    WData/*511:0*/ __Vtemp26[16];
    WData/*511:0*/ __Vtemp27[16];
    WData/*511:0*/ __Vtemp28[16];
    WData/*511:0*/ __Vtemp29[16];
    WData/*511:0*/ __Vtemp30[16];
    WData/*511:0*/ __Vtemp31[16];
    WData/*511:0*/ __Vtemp32[16];
    WData/*511:0*/ __Vtemp33[16];
    WData/*511:0*/ __Vtemp34[16];
    WData/*511:0*/ __Vtemp35[16];
    WData/*511:0*/ __Vtemp36[16];
    WData/*511:0*/ __Vtemp37[16];
    WData/*511:0*/ __Vtemp38[16];
    WData/*511:0*/ __Vtemp39[16];
    WData/*511:0*/ __Vtemp40[16];
    WData/*511:0*/ __Vtemp41[16];
    WData/*511:0*/ __Vtemp42[16];
    WData/*511:0*/ __Vtemp43[16];
    WData/*511:0*/ __Vtemp44[16];
    WData/*511:0*/ __Vtemp45[16];
    WData/*511:0*/ __Vtemp46[16];
    WData/*511:0*/ __Vtemp47[16];
    WData/*511:0*/ __Vtemp48[16];
    WData/*511:0*/ __Vtemp49[16];
    WData/*511:0*/ __Vtemp50[16];
    WData/*511:0*/ __Vtemp51[16];
    WData/*511:0*/ __Vtemp52[16];
    WData/*511:0*/ __Vtemp53[16];
    WData/*511:0*/ __Vtemp54[16];
    WData/*511:0*/ __Vtemp55[16];
    WData/*511:0*/ __Vtemp56[16];
    WData/*511:0*/ __Vtemp57[16];
    WData/*511:0*/ __Vtemp58[16];
    WData/*511:0*/ __Vtemp59[16];
    WData/*511:0*/ __Vtemp60[16];
    WData/*511:0*/ __Vtemp61[16];
    WData/*511:0*/ __Vtemp62[16];
    WData/*511:0*/ __Vtemp63[16];
    WData/*511:0*/ __Vtemp64[16];
    WData/*511:0*/ __Vtemp65[16];
    WData/*511:0*/ __Vtemp66[16];
    WData/*511:0*/ __Vtemp67[16];
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp12[0U] = 1U;
            __Vtemp12[1U] = 0U;
            __Vtemp12[2U] = 0U;
            __Vtemp12[3U] = 0U;
            __Vtemp12[4U] = 0U;
            __Vtemp12[5U] = 0U;
            __Vtemp12[6U] = 0U;
            __Vtemp12[7U] = 0U;
            __Vtemp12[8U] = 0U;
            __Vtemp12[9U] = 0U;
            __Vtemp12[0xaU] = 0U;
            __Vtemp12[0xbU] = 0U;
            __Vtemp12[0xcU] = 0U;
            __Vtemp12[0xdU] = 0U;
            __Vtemp12[0xeU] = 0U;
            __Vtemp12[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp13, __Vtemp12, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp13[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_262 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp14[0U] = 1U;
            __Vtemp14[1U] = 0U;
            __Vtemp14[2U] = 0U;
            __Vtemp14[3U] = 0U;
            __Vtemp14[4U] = 0U;
            __Vtemp14[5U] = 0U;
            __Vtemp14[6U] = 0U;
            __Vtemp14[7U] = 0U;
            __Vtemp14[8U] = 0U;
            __Vtemp14[9U] = 0U;
            __Vtemp14[0xaU] = 0U;
            __Vtemp14[0xbU] = 0U;
            __Vtemp14[0xcU] = 0U;
            __Vtemp14[0xdU] = 0U;
            __Vtemp14[0xeU] = 0U;
            __Vtemp14[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp15, __Vtemp14, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp15[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_261 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp16[0U] = 1U;
            __Vtemp16[1U] = 0U;
            __Vtemp16[2U] = 0U;
            __Vtemp16[3U] = 0U;
            __Vtemp16[4U] = 0U;
            __Vtemp16[5U] = 0U;
            __Vtemp16[6U] = 0U;
            __Vtemp16[7U] = 0U;
            __Vtemp16[8U] = 0U;
            __Vtemp16[9U] = 0U;
            __Vtemp16[0xaU] = 0U;
            __Vtemp16[0xbU] = 0U;
            __Vtemp16[0xcU] = 0U;
            __Vtemp16[0xdU] = 0U;
            __Vtemp16[0xeU] = 0U;
            __Vtemp16[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp17, __Vtemp16, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp17[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_260 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp18[0U] = 1U;
            __Vtemp18[1U] = 0U;
            __Vtemp18[2U] = 0U;
            __Vtemp18[3U] = 0U;
            __Vtemp18[4U] = 0U;
            __Vtemp18[5U] = 0U;
            __Vtemp18[6U] = 0U;
            __Vtemp18[7U] = 0U;
            __Vtemp18[8U] = 0U;
            __Vtemp18[9U] = 0U;
            __Vtemp18[0xaU] = 0U;
            __Vtemp18[0xbU] = 0U;
            __Vtemp18[0xcU] = 0U;
            __Vtemp18[0xdU] = 0U;
            __Vtemp18[0xeU] = 0U;
            __Vtemp18[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp19, __Vtemp18, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp19[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_259 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp20[0U] = 1U;
            __Vtemp20[1U] = 0U;
            __Vtemp20[2U] = 0U;
            __Vtemp20[3U] = 0U;
            __Vtemp20[4U] = 0U;
            __Vtemp20[5U] = 0U;
            __Vtemp20[6U] = 0U;
            __Vtemp20[7U] = 0U;
            __Vtemp20[8U] = 0U;
            __Vtemp20[9U] = 0U;
            __Vtemp20[0xaU] = 0U;
            __Vtemp20[0xbU] = 0U;
            __Vtemp20[0xcU] = 0U;
            __Vtemp20[0xdU] = 0U;
            __Vtemp20[0xeU] = 0U;
            __Vtemp20[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp21, __Vtemp20, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp21[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_258 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp22[0U] = 1U;
            __Vtemp22[1U] = 0U;
            __Vtemp22[2U] = 0U;
            __Vtemp22[3U] = 0U;
            __Vtemp22[4U] = 0U;
            __Vtemp22[5U] = 0U;
            __Vtemp22[6U] = 0U;
            __Vtemp22[7U] = 0U;
            __Vtemp22[8U] = 0U;
            __Vtemp22[9U] = 0U;
            __Vtemp22[0xaU] = 0U;
            __Vtemp22[0xbU] = 0U;
            __Vtemp22[0xcU] = 0U;
            __Vtemp22[0xdU] = 0U;
            __Vtemp22[0xeU] = 0U;
            __Vtemp22[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp23, __Vtemp22, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp23[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_257 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp24[0U] = 1U;
            __Vtemp24[1U] = 0U;
            __Vtemp24[2U] = 0U;
            __Vtemp24[3U] = 0U;
            __Vtemp24[4U] = 0U;
            __Vtemp24[5U] = 0U;
            __Vtemp24[6U] = 0U;
            __Vtemp24[7U] = 0U;
            __Vtemp24[8U] = 0U;
            __Vtemp24[9U] = 0U;
            __Vtemp24[0xaU] = 0U;
            __Vtemp24[0xbU] = 0U;
            __Vtemp24[0xcU] = 0U;
            __Vtemp24[0xdU] = 0U;
            __Vtemp24[0xeU] = 0U;
            __Vtemp24[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp25, __Vtemp24, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp25[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_256 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp26[0U] = 1U;
            __Vtemp26[1U] = 0U;
            __Vtemp26[2U] = 0U;
            __Vtemp26[3U] = 0U;
            __Vtemp26[4U] = 0U;
            __Vtemp26[5U] = 0U;
            __Vtemp26[6U] = 0U;
            __Vtemp26[7U] = 0U;
            __Vtemp26[8U] = 0U;
            __Vtemp26[9U] = 0U;
            __Vtemp26[0xaU] = 0U;
            __Vtemp26[0xbU] = 0U;
            __Vtemp26[0xcU] = 0U;
            __Vtemp26[0xdU] = 0U;
            __Vtemp26[0xeU] = 0U;
            __Vtemp26[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp27, __Vtemp26, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp27[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_255 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp28[0U] = 1U;
            __Vtemp28[1U] = 0U;
            __Vtemp28[2U] = 0U;
            __Vtemp28[3U] = 0U;
            __Vtemp28[4U] = 0U;
            __Vtemp28[5U] = 0U;
            __Vtemp28[6U] = 0U;
            __Vtemp28[7U] = 0U;
            __Vtemp28[8U] = 0U;
            __Vtemp28[9U] = 0U;
            __Vtemp28[0xaU] = 0U;
            __Vtemp28[0xbU] = 0U;
            __Vtemp28[0xcU] = 0U;
            __Vtemp28[0xdU] = 0U;
            __Vtemp28[0xeU] = 0U;
            __Vtemp28[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp29, __Vtemp28, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp29[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_254 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp30[0U] = 1U;
            __Vtemp30[1U] = 0U;
            __Vtemp30[2U] = 0U;
            __Vtemp30[3U] = 0U;
            __Vtemp30[4U] = 0U;
            __Vtemp30[5U] = 0U;
            __Vtemp30[6U] = 0U;
            __Vtemp30[7U] = 0U;
            __Vtemp30[8U] = 0U;
            __Vtemp30[9U] = 0U;
            __Vtemp30[0xaU] = 0U;
            __Vtemp30[0xbU] = 0U;
            __Vtemp30[0xcU] = 0U;
            __Vtemp30[0xdU] = 0U;
            __Vtemp30[0xeU] = 0U;
            __Vtemp30[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp31, __Vtemp30, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp31[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_253 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp32[0U] = 1U;
            __Vtemp32[1U] = 0U;
            __Vtemp32[2U] = 0U;
            __Vtemp32[3U] = 0U;
            __Vtemp32[4U] = 0U;
            __Vtemp32[5U] = 0U;
            __Vtemp32[6U] = 0U;
            __Vtemp32[7U] = 0U;
            __Vtemp32[8U] = 0U;
            __Vtemp32[9U] = 0U;
            __Vtemp32[0xaU] = 0U;
            __Vtemp32[0xbU] = 0U;
            __Vtemp32[0xcU] = 0U;
            __Vtemp32[0xdU] = 0U;
            __Vtemp32[0xeU] = 0U;
            __Vtemp32[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp33, __Vtemp32, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp33[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_252 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp34[0U] = 1U;
            __Vtemp34[1U] = 0U;
            __Vtemp34[2U] = 0U;
            __Vtemp34[3U] = 0U;
            __Vtemp34[4U] = 0U;
            __Vtemp34[5U] = 0U;
            __Vtemp34[6U] = 0U;
            __Vtemp34[7U] = 0U;
            __Vtemp34[8U] = 0U;
            __Vtemp34[9U] = 0U;
            __Vtemp34[0xaU] = 0U;
            __Vtemp34[0xbU] = 0U;
            __Vtemp34[0xcU] = 0U;
            __Vtemp34[0xdU] = 0U;
            __Vtemp34[0xeU] = 0U;
            __Vtemp34[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp35, __Vtemp34, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp35[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_251 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp36[0U] = 1U;
            __Vtemp36[1U] = 0U;
            __Vtemp36[2U] = 0U;
            __Vtemp36[3U] = 0U;
            __Vtemp36[4U] = 0U;
            __Vtemp36[5U] = 0U;
            __Vtemp36[6U] = 0U;
            __Vtemp36[7U] = 0U;
            __Vtemp36[8U] = 0U;
            __Vtemp36[9U] = 0U;
            __Vtemp36[0xaU] = 0U;
            __Vtemp36[0xbU] = 0U;
            __Vtemp36[0xcU] = 0U;
            __Vtemp36[0xdU] = 0U;
            __Vtemp36[0xeU] = 0U;
            __Vtemp36[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp37, __Vtemp36, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp37[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_250 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp38[0U] = 1U;
            __Vtemp38[1U] = 0U;
            __Vtemp38[2U] = 0U;
            __Vtemp38[3U] = 0U;
            __Vtemp38[4U] = 0U;
            __Vtemp38[5U] = 0U;
            __Vtemp38[6U] = 0U;
            __Vtemp38[7U] = 0U;
            __Vtemp38[8U] = 0U;
            __Vtemp38[9U] = 0U;
            __Vtemp38[0xaU] = 0U;
            __Vtemp38[0xbU] = 0U;
            __Vtemp38[0xcU] = 0U;
            __Vtemp38[0xdU] = 0U;
            __Vtemp38[0xeU] = 0U;
            __Vtemp38[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp39, __Vtemp38, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp39[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_249 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp40[0U] = 1U;
            __Vtemp40[1U] = 0U;
            __Vtemp40[2U] = 0U;
            __Vtemp40[3U] = 0U;
            __Vtemp40[4U] = 0U;
            __Vtemp40[5U] = 0U;
            __Vtemp40[6U] = 0U;
            __Vtemp40[7U] = 0U;
            __Vtemp40[8U] = 0U;
            __Vtemp40[9U] = 0U;
            __Vtemp40[0xaU] = 0U;
            __Vtemp40[0xbU] = 0U;
            __Vtemp40[0xcU] = 0U;
            __Vtemp40[0xdU] = 0U;
            __Vtemp40[0xeU] = 0U;
            __Vtemp40[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp41, __Vtemp40, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp41[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_248 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp42[0U] = 1U;
            __Vtemp42[1U] = 0U;
            __Vtemp42[2U] = 0U;
            __Vtemp42[3U] = 0U;
            __Vtemp42[4U] = 0U;
            __Vtemp42[5U] = 0U;
            __Vtemp42[6U] = 0U;
            __Vtemp42[7U] = 0U;
            __Vtemp42[8U] = 0U;
            __Vtemp42[9U] = 0U;
            __Vtemp42[0xaU] = 0U;
            __Vtemp42[0xbU] = 0U;
            __Vtemp42[0xcU] = 0U;
            __Vtemp42[0xdU] = 0U;
            __Vtemp42[0xeU] = 0U;
            __Vtemp42[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp43, __Vtemp42, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp43[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_247 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp44[0U] = 1U;
            __Vtemp44[1U] = 0U;
            __Vtemp44[2U] = 0U;
            __Vtemp44[3U] = 0U;
            __Vtemp44[4U] = 0U;
            __Vtemp44[5U] = 0U;
            __Vtemp44[6U] = 0U;
            __Vtemp44[7U] = 0U;
            __Vtemp44[8U] = 0U;
            __Vtemp44[9U] = 0U;
            __Vtemp44[0xaU] = 0U;
            __Vtemp44[0xbU] = 0U;
            __Vtemp44[0xcU] = 0U;
            __Vtemp44[0xdU] = 0U;
            __Vtemp44[0xeU] = 0U;
            __Vtemp44[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp45, __Vtemp44, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp45[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_246 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp46[0U] = 1U;
            __Vtemp46[1U] = 0U;
            __Vtemp46[2U] = 0U;
            __Vtemp46[3U] = 0U;
            __Vtemp46[4U] = 0U;
            __Vtemp46[5U] = 0U;
            __Vtemp46[6U] = 0U;
            __Vtemp46[7U] = 0U;
            __Vtemp46[8U] = 0U;
            __Vtemp46[9U] = 0U;
            __Vtemp46[0xaU] = 0U;
            __Vtemp46[0xbU] = 0U;
            __Vtemp46[0xcU] = 0U;
            __Vtemp46[0xdU] = 0U;
            __Vtemp46[0xeU] = 0U;
            __Vtemp46[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp47, __Vtemp46, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp47[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_245 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp48[0U] = 1U;
            __Vtemp48[1U] = 0U;
            __Vtemp48[2U] = 0U;
            __Vtemp48[3U] = 0U;
            __Vtemp48[4U] = 0U;
            __Vtemp48[5U] = 0U;
            __Vtemp48[6U] = 0U;
            __Vtemp48[7U] = 0U;
            __Vtemp48[8U] = 0U;
            __Vtemp48[9U] = 0U;
            __Vtemp48[0xaU] = 0U;
            __Vtemp48[0xbU] = 0U;
            __Vtemp48[0xcU] = 0U;
            __Vtemp48[0xdU] = 0U;
            __Vtemp48[0xeU] = 0U;
            __Vtemp48[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp49, __Vtemp48, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp49[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_244 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp50[0U] = 1U;
            __Vtemp50[1U] = 0U;
            __Vtemp50[2U] = 0U;
            __Vtemp50[3U] = 0U;
            __Vtemp50[4U] = 0U;
            __Vtemp50[5U] = 0U;
            __Vtemp50[6U] = 0U;
            __Vtemp50[7U] = 0U;
            __Vtemp50[8U] = 0U;
            __Vtemp50[9U] = 0U;
            __Vtemp50[0xaU] = 0U;
            __Vtemp50[0xbU] = 0U;
            __Vtemp50[0xcU] = 0U;
            __Vtemp50[0xdU] = 0U;
            __Vtemp50[0xeU] = 0U;
            __Vtemp50[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp51, __Vtemp50, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp51[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_243 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp52[0U] = 1U;
            __Vtemp52[1U] = 0U;
            __Vtemp52[2U] = 0U;
            __Vtemp52[3U] = 0U;
            __Vtemp52[4U] = 0U;
            __Vtemp52[5U] = 0U;
            __Vtemp52[6U] = 0U;
            __Vtemp52[7U] = 0U;
            __Vtemp52[8U] = 0U;
            __Vtemp52[9U] = 0U;
            __Vtemp52[0xaU] = 0U;
            __Vtemp52[0xbU] = 0U;
            __Vtemp52[0xcU] = 0U;
            __Vtemp52[0xdU] = 0U;
            __Vtemp52[0xeU] = 0U;
            __Vtemp52[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp53, __Vtemp52, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp53[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_242 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp54[0U] = 1U;
            __Vtemp54[1U] = 0U;
            __Vtemp54[2U] = 0U;
            __Vtemp54[3U] = 0U;
            __Vtemp54[4U] = 0U;
            __Vtemp54[5U] = 0U;
            __Vtemp54[6U] = 0U;
            __Vtemp54[7U] = 0U;
            __Vtemp54[8U] = 0U;
            __Vtemp54[9U] = 0U;
            __Vtemp54[0xaU] = 0U;
            __Vtemp54[0xbU] = 0U;
            __Vtemp54[0xcU] = 0U;
            __Vtemp54[0xdU] = 0U;
            __Vtemp54[0xeU] = 0U;
            __Vtemp54[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp55, __Vtemp54, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp55[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_241 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp56[0U] = 1U;
            __Vtemp56[1U] = 0U;
            __Vtemp56[2U] = 0U;
            __Vtemp56[3U] = 0U;
            __Vtemp56[4U] = 0U;
            __Vtemp56[5U] = 0U;
            __Vtemp56[6U] = 0U;
            __Vtemp56[7U] = 0U;
            __Vtemp56[8U] = 0U;
            __Vtemp56[9U] = 0U;
            __Vtemp56[0xaU] = 0U;
            __Vtemp56[0xbU] = 0U;
            __Vtemp56[0xcU] = 0U;
            __Vtemp56[0xdU] = 0U;
            __Vtemp56[0xeU] = 0U;
            __Vtemp56[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp57, __Vtemp56, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp57[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_240 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp58[0U] = 1U;
            __Vtemp58[1U] = 0U;
            __Vtemp58[2U] = 0U;
            __Vtemp58[3U] = 0U;
            __Vtemp58[4U] = 0U;
            __Vtemp58[5U] = 0U;
            __Vtemp58[6U] = 0U;
            __Vtemp58[7U] = 0U;
            __Vtemp58[8U] = 0U;
            __Vtemp58[9U] = 0U;
            __Vtemp58[0xaU] = 0U;
            __Vtemp58[0xbU] = 0U;
            __Vtemp58[0xcU] = 0U;
            __Vtemp58[0xdU] = 0U;
            __Vtemp58[0xeU] = 0U;
            __Vtemp58[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp59, __Vtemp58, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp59[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_239 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp60[0U] = 1U;
            __Vtemp60[1U] = 0U;
            __Vtemp60[2U] = 0U;
            __Vtemp60[3U] = 0U;
            __Vtemp60[4U] = 0U;
            __Vtemp60[5U] = 0U;
            __Vtemp60[6U] = 0U;
            __Vtemp60[7U] = 0U;
            __Vtemp60[8U] = 0U;
            __Vtemp60[9U] = 0U;
            __Vtemp60[0xaU] = 0U;
            __Vtemp60[0xbU] = 0U;
            __Vtemp60[0xcU] = 0U;
            __Vtemp60[0xdU] = 0U;
            __Vtemp60[0xeU] = 0U;
            __Vtemp60[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp61, __Vtemp60, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp61[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_238 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp62[0U] = 1U;
            __Vtemp62[1U] = 0U;
            __Vtemp62[2U] = 0U;
            __Vtemp62[3U] = 0U;
            __Vtemp62[4U] = 0U;
            __Vtemp62[5U] = 0U;
            __Vtemp62[6U] = 0U;
            __Vtemp62[7U] = 0U;
            __Vtemp62[8U] = 0U;
            __Vtemp62[9U] = 0U;
            __Vtemp62[0xaU] = 0U;
            __Vtemp62[0xbU] = 0U;
            __Vtemp62[0xcU] = 0U;
            __Vtemp62[0xdU] = 0U;
            __Vtemp62[0xeU] = 0U;
            __Vtemp62[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp63, __Vtemp62, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp63[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_237 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp64[0U] = 1U;
            __Vtemp64[1U] = 0U;
            __Vtemp64[2U] = 0U;
            __Vtemp64[3U] = 0U;
            __Vtemp64[4U] = 0U;
            __Vtemp64[5U] = 0U;
            __Vtemp64[6U] = 0U;
            __Vtemp64[7U] = 0U;
            __Vtemp64[8U] = 0U;
            __Vtemp64[9U] = 0U;
            __Vtemp64[0xaU] = 0U;
            __Vtemp64[0xbU] = 0U;
            __Vtemp64[0xcU] = 0U;
            __Vtemp64[0xdU] = 0U;
            __Vtemp64[0xeU] = 0U;
            __Vtemp64[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp65, __Vtemp64, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp65[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_236 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp66[0U] = 1U;
            __Vtemp66[1U] = 0U;
            __Vtemp66[2U] = 0U;
            __Vtemp66[3U] = 0U;
            __Vtemp66[4U] = 0U;
            __Vtemp66[5U] = 0U;
            __Vtemp66[6U] = 0U;
            __Vtemp66[7U] = 0U;
            __Vtemp66[8U] = 0U;
            __Vtemp66[9U] = 0U;
            __Vtemp66[0xaU] = 0U;
            __Vtemp66[0xbU] = 0U;
            __Vtemp66[0xcU] = 0U;
            __Vtemp66[0xdU] = 0U;
            __Vtemp66[0xeU] = 0U;
            __Vtemp66[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp67, __Vtemp66, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp67[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_235 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}
