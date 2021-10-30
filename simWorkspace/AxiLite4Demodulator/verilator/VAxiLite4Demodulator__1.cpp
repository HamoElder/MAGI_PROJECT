// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4Demodulator.h for the primary calling header

#include "VAxiLite4Demodulator.h"
#include "VAxiLite4Demodulator__Syms.h"

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__18(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__18\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_15__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_15__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_valid 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_valid 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_valid 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid));
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__19(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__19\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__unit_valid 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_valid 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_valid));
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__codeTable_q 
        = ((IData)(vlTOPp->rf_resetn) ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_q)
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__compTable_i 
        = ((IData)(vlTOPp->rf_resetn) ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_i)
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__codeTable_q 
        = ((IData)(vlTOPp->rf_resetn) ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_q)
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__compTable_i 
        = ((IData)(vlTOPp->rf_resetn) ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_i)
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__codeTable_q 
        = ((IData)(vlTOPp->rf_resetn) & VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_data_q)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__compTable_i 
        = ((IData)(vlTOPp->rf_resetn) & VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_data_i)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__compTable_i 
        = ((IData)(vlTOPp->rf_resetn) & VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_data_i)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i 
        = ((IData)(vlTOPp->rf_resetn) ? vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i
            : VL_ULL(0));
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1))))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_0 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 1U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_1 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 2U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_2 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 3U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_3 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 4U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_4 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 5U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_5 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 6U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_6 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 7U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_7 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 8U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_8 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 9U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_9 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0xaU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_10 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0xbU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_11 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0xcU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_12 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0xdU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_13 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0xeU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_14 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0xfU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_15 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x10U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_16 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x11U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_17 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__20(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__20\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x12U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_18 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x13U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_19 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x14U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_20 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x15U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_21 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x16U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_22 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x17U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_23 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x18U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_24 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x19U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_25 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x1aU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_26 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x1bU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_27 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x1cU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_28 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x1dU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_29 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x1eU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_30 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x1fU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_31 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x20U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_32 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x21U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_33 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x22U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_34 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x23U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_35 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x24U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_36 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x25U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_37 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x26U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_38 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__21(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__21\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x27U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_39 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x28U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_40 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x29U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_41 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x2aU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_42 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x2bU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_43 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x2cU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_44 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x2dU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_45 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x2eU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_46 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x2fU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_47 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x30U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_48 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x31U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_49 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x32U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_50 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x33U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_51 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x34U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_52 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x35U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_53 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x36U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_54 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x37U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_55 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x38U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_56 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x39U)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_57 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x3aU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_58 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x3bU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_59 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__22(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__22\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x3cU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_60 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x3dU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_61 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x3eU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_62 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                   >> 0x3fU)))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_63 
                        = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                }
            }
        }
    }
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q 
        = ((IData)(vlTOPp->rf_resetn) ? vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q
            : VL_ULL(0));
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1))))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_0 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 1U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_1 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 2U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_2 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 3U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_3 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 4U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_4 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 5U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_5 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 6U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_6 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 7U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_7 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 8U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_8 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 9U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_9 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0xaU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_10 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0xbU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_11 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0xcU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_12 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0xdU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_13 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0xeU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_14 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__23(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__23\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0xfU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_15 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x10U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_16 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x11U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_17 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x12U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_18 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x13U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_19 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x14U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_20 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x15U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_21 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x16U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_22 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x17U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_23 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x18U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_24 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x19U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_25 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x1aU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_26 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x1bU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_27 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x1cU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_28 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x1dU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_29 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x1eU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_30 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x1fU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_31 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x20U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_32 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__24(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__24\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x21U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_33 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x22U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_34 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x23U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_35 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x24U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_36 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x25U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_37 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x26U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_38 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x27U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_39 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x28U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_40 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x29U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_41 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x2aU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_42 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x2bU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_43 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x2cU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_44 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x2dU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_45 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x2eU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_46 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x2fU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_47 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x30U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_48 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x31U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_49 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x32U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_50 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__25(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__25\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x33U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_51 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x34U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_52 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x35U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_53 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x36U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_54 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x37U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_55 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x38U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_56 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x39U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_57 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x3aU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_58 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x3bU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_59 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x3cU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_60 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x3dU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_61 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x3eU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_62 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x3fU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_63 
                            = (0x3fU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_q 
        = ((0x1eU & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_q)) 
           | VL_LTS_III(32,16,16, 0xc4c0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_q)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_q 
        = ((0x1dU & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,16,16, 0xd880U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_q)) 
              << 1U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_q 
        = ((0x1bU & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,16,16, 0xec40U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_q)) 
              << 2U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_q 
        = ((0x17U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_q)) 
              << 3U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_q 
        = ((0xfU & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,16,16, 0x13c0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_q)) 
              << 4U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_i 
        = ((0x1eU & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_i)) 
           | VL_LTS_III(32,16,16, 0xc4c0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_i)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_i 
        = ((0x1dU & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,16,16, 0xd880U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_i)) 
              << 1U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_i 
        = ((0x1bU & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,16,16, 0xec40U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_i)) 
              << 2U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_i 
        = ((0x17U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_i)) 
              << 3U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_i 
        = ((0xfU & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,16,16, 0x13c0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_i)) 
              << 4U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_q 
        = ((6U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_q)) 
           | VL_LTS_III(32,16,16, 0xd786U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_data_q)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_q 
        = ((5U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,16,16, 0xffffU, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_data_q)) 
              << 1U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_q 
        = ((3U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,16,16, 0x2879U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_data_q)) 
              << 2U));
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__26(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__26\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_i 
        = ((6U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_i)) 
           | VL_LTS_III(32,16,16, 0xd786U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_data_i)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_i 
        = ((5U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,16,16, 0xffffU, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_data_i)) 
              << 1U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_i 
        = ((3U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,16,16, 0x2879U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_data_i)) 
              << 2U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffffffffe) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | (IData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_0), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffffffffd) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_1), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 1U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffffffffb) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_2), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 2U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffffffff7) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_3), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 3U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffffffffef) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_4), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 4U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffffffffdf) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_5), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 5U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffffffffbf) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_6), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 6U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffffffff7f) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_7), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 7U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffffffeff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_8), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 8U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffffffdff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_9), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 9U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffffffbff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_10), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0xaU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffffff7ff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_11), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0xbU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffffffefff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_12), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0xcU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffffffdfff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_13), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0xdU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffffffbfff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_14), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0xeU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffffff7fff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_15), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0xfU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffffeffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_16), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x10U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffffdffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_17), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x11U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffffbffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_18), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x12U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffff7ffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_19), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x13U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffffefffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_20), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x14U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffffdfffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_21), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x15U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffffbfffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_22), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x16U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffff7fffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_23), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x17U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffeffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_24), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x18U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffdffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_25), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x19U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffffbffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_26), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x1aU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffff7ffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_27), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x1bU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffefffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_28), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x1cU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffdfffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_29), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x1dU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffffbfffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_30), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x1eU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffff7fffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_31), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x1fU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffeffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_32), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x20U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffdffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_33), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x21U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffffbffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_34), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x22U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffff7ffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_35), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x23U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffefffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_36), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x24U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffdfffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_37), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x25U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffffbfffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_38), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x26U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffff7fffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_39), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x27U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffeffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_40), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x28U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffdffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_41), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x29U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffffbffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_42), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x2aU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffff7ffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_43), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x2bU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffefffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_44), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x2cU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffdfffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_45), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x2dU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fffbfffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_46), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x2eU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fff7fffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_47), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x2fU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffeffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_48), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x30U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffdffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_49), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x31U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ffbffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_50), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x32U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7ff7ffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_51), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x33U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fefffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_52), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x34U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fdfffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_53), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x35U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7fbfffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_54), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x36U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7f7fffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_55), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x37U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7effffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_56), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x38U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7dffffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_57), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x39U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x7bffffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_58), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x3aU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x77ffffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_59), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x3bU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x6fffffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_60), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x3cU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x5fffffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_61), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x3dU));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i 
        = ((VL_ULL(0x3fffffffffffffff) & vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i) 
           | ((QData)((IData)(VL_LTS_III(1,16,16, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_62), (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i)))) 
              << 0x3eU));
}
