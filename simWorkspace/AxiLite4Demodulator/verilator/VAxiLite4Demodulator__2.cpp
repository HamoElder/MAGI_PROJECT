// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4Demodulator.h for the primary calling header

#include "VAxiLite4Demodulator.h"
#include "VAxiLite4Demodulator__Syms.h"

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__27(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__27\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffffffffe) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | (IData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_0), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffffffffd) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_1), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 1U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffffffffb) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_2), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 2U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffffffff7) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_3), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 3U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffffffffef) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_4), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 4U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffffffffdf) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_5), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 5U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffffffffbf) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_6), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 6U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffffffff7f) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_7), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 7U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffffffeff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_8), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 8U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffffffdff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_9), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 9U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffffffbff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_10), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0xaU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffffff7ff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_11), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0xbU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffffffefff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_12), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0xcU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffffffdfff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_13), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0xdU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffffffbfff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_14), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0xeU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffffff7fff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_15), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0xfU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffffeffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_16), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x10U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffffdffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_17), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x11U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffffbffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_18), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x12U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffff7ffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_19), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x13U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffffefffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_20), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x14U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffffdfffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_21), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x15U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffffbfffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_22), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x16U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffff7fffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_23), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x17U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffeffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_24), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x18U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffdffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_25), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x19U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffffbffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_26), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x1aU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffff7ffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_27), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x1bU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffefffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_28), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x1cU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffdfffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_29), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x1dU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffffbfffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_30), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x1eU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffff7fffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_31), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x1fU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffeffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_32), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x20U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffdffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_33), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x21U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffffbffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_34), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x22U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffff7ffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_35), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x23U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffefffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_36), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x24U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffdfffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_37), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x25U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffffbfffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_38), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x26U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffff7fffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_39), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x27U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffeffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_40), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x28U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffdffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_41), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x29U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffffbffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_42), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x2aU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffff7ffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_43), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x2bU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffefffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_44), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x2cU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffdfffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_45), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x2dU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fffbfffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_46), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x2eU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fff7fffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_47), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x2fU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffeffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_48), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x30U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffdffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_49), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x31U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ffbffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_50), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x32U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7ff7ffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_51), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x33U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fefffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_52), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x34U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fdfffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_53), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x35U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7fbfffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_54), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x36U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7f7fffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_55), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x37U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7effffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_56), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x38U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7dffffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_57), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x39U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x7bffffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_58), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x3aU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x77ffffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_59), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x3bU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x6fffffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_60), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x3cU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x5fffffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_61), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x3dU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q 
        = ((VL_ULL(0x3fffffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_62), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q)))) 
              << 0x3eU));
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__28(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__28\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_valid 
        = ((IData)(vlTOPp->rf_resetn) & ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_valid_i) 
                                         & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_valid_q)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_valid 
        = ((IData)(vlTOPp->rf_resetn) & ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_valid_i) 
                                         & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_valid_q)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid 
        = ((IData)(vlTOPp->rf_resetn) & ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid_i) 
                                         & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid_q)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_valid 
        = vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_valid_i;
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_valid 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_valid_iq));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_data_q 
        = ((IData)(vlTOPp->rf_resetn) ? ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_data_i 
        = ((IData)(vlTOPp->rf_resetn) ? ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_data_i 
        = ((IData)(vlTOPp->rf_resetn) ? ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_valid_i 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_3_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_valid_q 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_3_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_valid_i 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_2_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_valid_q 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_2_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid_i 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_1_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid_q 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_1_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_valid_i 
        = ((IData)(vlTOPp->rf_resetn) & ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1)) 
                                         & (IData)(vlTOPp->mod_iq_valid)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_valid_iq 
        = ((IData)(vlTOPp->rf_resetn) & (((4U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1)) 
                                          & (IData)(vlTOPp->mod_iq_valid)) 
                                         & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1))));
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkI_reg;
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__30(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__30\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid = 0U;
    } else {
        if (vlTOPp->axil4Ctrl_arready) {
            vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid 
                = vlTOPp->axil4Ctrl_arvalid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
    } else {
        if (vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready) {
            vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2 
                = vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_valid;
        }
    }
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2;
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__34(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__34\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_15__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_iq_shift_driver;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_w_addr;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_w_data;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_w_sel_driver;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_select;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_w_en_driver;
}

VL_INLINE_OPT void VAxiLite4Demodulator::_combo__TOP__35(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_combo__TOP__35\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_1_valid 
        = ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->mod_iq_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_2_valid 
        = ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->mod_iq_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_3_valid 
        = ((3U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->mod_iq_valid));
    vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__36(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__36\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver = 0U;
    } else {
        if (((((((((0U == (IData)(vlTOPp->axil4Ctrl_awaddr)) 
                   | (4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                  | (8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                 | (0xcU == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                | (0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
               | (0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
              | (0x24U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
             | (0x28U == (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
            if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((8U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0xcU != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((0x20U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                    if ((0x24U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                        if (vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver 
                                                = (0x1fU 
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
        vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver = 0U;
    } else {
        if (((((((((0U == (IData)(vlTOPp->axil4Ctrl_awaddr)) 
                   | (4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                  | (8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                 | (0xcU == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                | (0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
               | (0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
              | (0x24U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
             | (0x28U == (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
            if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((8U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0xcU != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                    if (vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire) {
                                        vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver 
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
        vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver = 0U;
    } else {
        if (((((((((0U == (IData)(vlTOPp->axil4Ctrl_awaddr)) 
                   | (4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                  | (8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                 | (0xcU == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                | (0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
               | (0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
              | (0x24U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
             | (0x28U == (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
            if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((8U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0xcU != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((0x20U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                    if ((0x24U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                        if (vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver 
                                                = (0x1fU 
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
        vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_iq_shift_driver = 0U;
    } else {
        if (((((((((0U == (IData)(vlTOPp->axil4Ctrl_awaddr)) 
                   | (4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                  | (8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                 | (0xcU == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                | (0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
               | (0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
              | (0x24U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
             | (0x28U == (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
            if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if (vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire) {
                        vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_iq_shift_driver 
                            = (7U & vlTOPp->axil4Ctrl_wdata);
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_w_addr = 0U;
    } else {
        if (((((((((0U == (IData)(vlTOPp->axil4Ctrl_awaddr)) 
                   | (4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                  | (8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                 | (0xcU == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                | (0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
               | (0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
              | (0x24U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
             | (0x28U == (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
            if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if (vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire) {
                            vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_w_addr 
                                = (0x3fU & vlTOPp->axil4Ctrl_wdata);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_w_data = 0U;
    } else {
        if (((((((((0U == (IData)(vlTOPp->axil4Ctrl_awaddr)) 
                   | (4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                  | (8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                 | (0xcU == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                | (0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
               | (0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
              | (0x24U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
             | (0x28U == (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
            if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((8U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0xcU == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if (vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire) {
                                vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_w_data 
                                    = vlTOPp->axil4Ctrl_wdata;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_w_sel_driver = 0U;
    } else {
        if (((((((((0U == (IData)(vlTOPp->axil4Ctrl_awaddr)) 
                   | (4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                  | (8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                 | (0xcU == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                | (0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
               | (0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
              | (0x24U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
             | (0x28U == (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
            if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if (vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire) {
                    vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_w_sel_driver 
                        = (3U & (vlTOPp->axil4Ctrl_wdata 
                                 >> 1U));
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_select = 0U;
    } else {
        if (((((((((0U == (IData)(vlTOPp->axil4Ctrl_awaddr)) 
                   | (4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                  | (8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                 | (0xcU == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                | (0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
               | (0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
              | (0x24U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
             | (0x28U == (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
            if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((8U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0xcU != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if (vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire) {
                                    vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_select 
                                        = (7U & vlTOPp->axil4Ctrl_wdata);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__37(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__37\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_w_en_driver = 0U;
    } else {
        if (((((((((0U == (IData)(vlTOPp->axil4Ctrl_awaddr)) 
                   | (4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                  | (8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                 | (0xcU == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
                | (0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
               | (0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
              | (0x24U == (IData)(vlTOPp->axil4Ctrl_awaddr))) 
             | (0x28U == (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
            if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if (vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire) {
                    vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_w_en_driver 
                        = (1U & vlTOPp->axil4Ctrl_wdata);
                }
            }
        }
    }
    vlTOPp->AxiLite4Demodulator__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->AxiLite4Demodulator__DOT__readRsp_data 
            = ((0xfffffffeU & vlTOPp->AxiLite4Demodulator__DOT__readRsp_data) 
               | (IData)(vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_w_en_driver));
        vlTOPp->AxiLite4Demodulator__DOT__readRsp_data 
            = ((0xfffffff9U & vlTOPp->AxiLite4Demodulator__DOT__readRsp_data) 
               | ((IData)(vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_w_sel_driver) 
                  << 1U));
    } else {
        if ((4U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->AxiLite4Demodulator__DOT__readRsp_data 
                = ((0xfffffff8U & vlTOPp->AxiLite4Demodulator__DOT__readRsp_data) 
                   | (IData)(vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_iq_shift_driver));
        } else {
            if ((0x20U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr))) {
                vlTOPp->AxiLite4Demodulator__DOT__readRsp_data 
                    = ((0xfffffffeU & vlTOPp->AxiLite4Demodulator__DOT__readRsp_data) 
                       | (IData)(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver));
            } else {
                if ((0x24U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr))) {
                    vlTOPp->AxiLite4Demodulator__DOT__readRsp_data 
                        = ((0xffffffe0U & vlTOPp->AxiLite4Demodulator__DOT__readRsp_data) 
                           | (IData)(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver));
                } else {
                    if ((0x28U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr))) {
                        vlTOPp->AxiLite4Demodulator__DOT__readRsp_data 
                            = ((0xffffffe0U & vlTOPp->AxiLite4Demodulator__DOT__readRsp_data) 
                               | (IData)(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver));
                    }
                }
            }
        }
    }
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4Demodulator__DOT__readRsp_data;
}

VL_INLINE_OPT void VAxiLite4Demodulator::_combo__TOP__38(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_combo__TOP__38\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire;
}

void VAxiLite4Demodulator::_eval(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_eval\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->rf_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__rf_clk)))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->_sequent__TOP__18(vlSymsp);
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->_sequent__TOP__20(vlSymsp);
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlTOPp->_sequent__TOP__22(vlSymsp);
        vlTOPp->_sequent__TOP__23(vlSymsp);
        vlTOPp->_sequent__TOP__24(vlSymsp);
        vlTOPp->_sequent__TOP__25(vlSymsp);
        vlTOPp->_sequent__TOP__26(vlSymsp);
        vlTOPp->_sequent__TOP__27(vlSymsp);
        vlTOPp->_sequent__TOP__28(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__30(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__34(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__35(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__36(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__37(vlSymsp);
    }
    vlTOPp->_combo__TOP__38(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rf_clk = vlTOPp->rf_clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAxiLite4Demodulator::_change_request(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_change_request\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxiLite4Demodulator::_change_request_1(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_change_request_1\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAxiLite4Demodulator::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((axil4Ctrl_awvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_awvalid");}
    if (VL_UNLIKELY((axil4Ctrl_awprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_awprot");}
    if (VL_UNLIKELY((axil4Ctrl_wvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_wvalid");}
    if (VL_UNLIKELY((axil4Ctrl_wstrb & 0xf0U))) {
        Verilated::overWidthError("axil4Ctrl_wstrb");}
    if (VL_UNLIKELY((axil4Ctrl_bready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_bready");}
    if (VL_UNLIKELY((axil4Ctrl_arvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_arvalid");}
    if (VL_UNLIKELY((axil4Ctrl_arprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_arprot");}
    if (VL_UNLIKELY((axil4Ctrl_rready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_rready");}
    if (VL_UNLIKELY((mod_iq_valid & 0xfeU))) {
        Verilated::overWidthError("mod_iq_valid");}
    if (VL_UNLIKELY((rf_clk & 0xfeU))) {
        Verilated::overWidthError("rf_clk");}
    if (VL_UNLIKELY((rf_resetn & 0xfeU))) {
        Verilated::overWidthError("rf_resetn");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
