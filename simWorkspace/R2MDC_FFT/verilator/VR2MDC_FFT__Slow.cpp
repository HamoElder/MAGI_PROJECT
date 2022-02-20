// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VR2MDC_FFT.h for the primary calling header

#include "VR2MDC_FFT.h"
#include "VR2MDC_FFT__Syms.h"

//==========

VL_CTOR_IMP(VR2MDC_FFT) {
    VR2MDC_FFT__Syms* __restrict vlSymsp = __VlSymsp = new VR2MDC_FFT__Syms(this, name());
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VR2MDC_FFT::__Vconfigure(VR2MDC_FFT__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VR2MDC_FFT::~VR2MDC_FFT() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VR2MDC_FFT::_settle__TOP__11(VR2MDC_FFT__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC_FFT::_settle__TOP__11\n"); );
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->R2MDC_FFT__DOT__when_R2MDC_FFT_l28 = (0x3fU 
                                                  == (IData)(vlTOPp->R2MDC_FFT__DOT__pop_cnt));
    vlTOPp->result_iq_valid = vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__sorted_valid_1_regNext;
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt_index 
        = ((0x10U & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt) 
                     << 4U)) | ((8U & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt) 
                                       << 2U)) | ((4U 
                                                   & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt)) 
                                                  | ((2U 
                                                      & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt) 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt) 
                                                           >> 4U))))));
    vlTOPp->result_iq_payload_last = ((0U == (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__out_cnt)) 
                                      & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__sorted_valid_1_regNext));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__sorted_valid_1 
        = ((0x1fU == (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt)) 
           | (0U != (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__out_cnt)));
    vlTOPp->result_iq_payload_fragment_cha_i = (0xffffffU 
                                                & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_3)
                                                    ? (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_low_port1)
                                                    : (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_high_port1)));
    vlTOPp->result_iq_payload_fragment_cha_q = (0xffffffU 
                                                & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_3)
                                                    ? (IData)(
                                                              (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_low_port1 
                                                               >> 0x18U))
                                                    : (IData)(
                                                              (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_high_port1 
                                                               >> 0x18U))));
    vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9_wn_im 
        = (0xffffffU & ((IData)(vlTOPp->mode) ? (IData)(
                                                        (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_5_port0 
                                                         >> 0x18U))
                         : VL_NEGATE_I((IData)((vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_5_port0 
                                                >> 0x18U)))));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8_wn_im 
        = (0xffffffU & ((IData)(vlTOPp->mode) ? (IData)(
                                                        (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_4_port0 
                                                         >> 0x18U))
                         : VL_NEGATE_I((IData)((vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_4_port0 
                                                >> 0x18U)))));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7_wn_im 
        = (0xffffffU & ((IData)(vlTOPp->mode) ? (IData)(
                                                        (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_3_port0 
                                                         >> 0x18U))
                         : VL_NEGATE_I((IData)((vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_3_port0 
                                                >> 0x18U)))));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6_wn_im 
        = (0xffffffU & ((IData)(vlTOPp->mode) ? (IData)(
                                                        (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_2_port0 
                                                         >> 0x18U))
                         : VL_NEGATE_I((IData)((vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_2_port0 
                                                >> 0x18U)))));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz_cnt 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt)));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_1 = 0U;
    if ((0x3fU < (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))) {
        vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_1 = 1U;
    }
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_2 = 0U;
    if ((0x3fU < (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))) {
        vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_2 = 1U;
    }
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5_wn_im 
        = (0xffffffU & ((IData)(vlTOPp->mode) ? (IData)(
                                                        (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_1_port0 
                                                         >> 0x18U))
                         : VL_NEGATE_I((IData)((vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_1_port0 
                                                >> 0x18U)))));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_re 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_31_re 
                        - (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_logic_ram_port0)));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_im 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_31_im 
                        - (IData)((vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_logic_ram_port0 
                                   >> 0x18U))));
    vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_ready 
        = ((0x40U > (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt)) 
           & (IData)(vlTOPp->R2MDC_FFT__DOT__fifo_pop_en));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_re 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_31_re 
                        + (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_logic_ram_port0)));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_im 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_31_im 
                        + (IData)((vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_logic_ram_port0 
                                   >> 0x18U))));
    vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_re 
        = ((0x10U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
            ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_re
            : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_re);
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_im 
        = ((0x10U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
            ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_im
            : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_im);
    vlTOPp->raw_data_iq_ready = (1U & (~ (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_full)));
    vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->raw_data_iq_valid) & (~ (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_full)));
    vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_full))))));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_re 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_15_re 
                        - vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_re));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_re 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_15_re 
                        + vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_re));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_im 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_15_im 
                        - vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_im));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_im 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_15_im 
                        + vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_im));
    vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushing) {
        vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushing) {
        vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__when_R2MDC_l20 
        = ((((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid) 
             & (IData)(vlTOPp->R2MDC_FFT__DOT__fifo_pop_en)) 
            & (0x40U > (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))) 
           | (0x40U <= (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt)));
    vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_ready));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_re 
        = ((8U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
            ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_re
            : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_re);
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_im 
        = ((8U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
            ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_im
            : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_im);
    vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_valueNext 
        = (0x7fU & ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popping) {
        vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_re 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_7_re 
                        - vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_re));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_re 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_7_re 
                        + vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_re));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_im 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_7_im 
                        - vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_im));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_im 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_7_im 
                        + vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_im));
    vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_valueNext 
        = (0x7fU & ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_re 
        = ((4U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
            ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_re
            : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_re);
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_im 
        = ((4U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
            ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_im
            : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_im);
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_re 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_3_re 
                        - vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_re));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_re 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_3_re 
                        + vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_re));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_im 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_3_im 
                        - vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_im));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_im 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_3_im 
                        + vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_im));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_re 
        = ((2U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
            ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_re
            : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_re);
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_im 
        = ((2U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
            ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_im
            : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_im);
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_re 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_1_re 
                        - vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_re));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_re 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_1_re 
                        + vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_re));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_im 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_1_im 
                        - vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_im));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_im 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_1_im 
                        + vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_im));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_re 
        = ((1U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
            ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_re
            : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_re);
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_im 
        = ((1U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
            ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_im
            : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_im);
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_re 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1D1_re 
                        + vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_re));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_re 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1D1_re 
                        - vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_re));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_im 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1D1_im 
                        + vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_im));
    vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_im 
        = (0xffffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1D1_im 
                        - vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_im));
}

void VR2MDC_FFT::_initial__TOP__12(VR2MDC_FFT__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC_FFT::_initial__TOP__12\n"); );
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*319:0*/ __Vtemp1[10];
    WData/*319:0*/ __Vtemp2[10];
    WData/*319:0*/ __Vtemp3[10];
    WData/*319:0*/ __Vtemp4[10];
    WData/*319:0*/ __Vtemp5[10];
    // Body
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x7a7a5f35U;
    __Vtemp1[2U] = 0x72655f5fU;
    __Vtemp1[3U] = 0x745f636fU;
    __Vtemp1[4U] = 0x6c5f6666U;
    __Vtemp1[5U] = 0x6c657665U;
    __Vtemp1[6U] = 0x5f746f70U;
    __Vtemp1[7U] = 0x46542e76U;
    __Vtemp1[8U] = 0x44435f46U;
    __Vtemp1[9U] = 0x52324dU;
    VL_READMEM_N(false, 48, 2, 0, VL_CVT_PACK_STR_NW(10, __Vtemp1)
                 , vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz_5
                 , 0, ~VL_ULL(0));
    __Vtemp2[0U] = 0x2e62696eU;
    __Vtemp2[1U] = 0x7a7a5f34U;
    __Vtemp2[2U] = 0x72655f5fU;
    __Vtemp2[3U] = 0x745f636fU;
    __Vtemp2[4U] = 0x6c5f6666U;
    __Vtemp2[5U] = 0x6c657665U;
    __Vtemp2[6U] = 0x5f746f70U;
    __Vtemp2[7U] = 0x46542e76U;
    __Vtemp2[8U] = 0x44435f46U;
    __Vtemp2[9U] = 0x52324dU;
    VL_READMEM_N(false, 48, 4, 0, VL_CVT_PACK_STR_NW(10, __Vtemp2)
                 , vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz_4
                 , 0, ~VL_ULL(0));
    __Vtemp3[0U] = 0x2e62696eU;
    __Vtemp3[1U] = 0x7a7a5f33U;
    __Vtemp3[2U] = 0x72655f5fU;
    __Vtemp3[3U] = 0x745f636fU;
    __Vtemp3[4U] = 0x6c5f6666U;
    __Vtemp3[5U] = 0x6c657665U;
    __Vtemp3[6U] = 0x5f746f70U;
    __Vtemp3[7U] = 0x46542e76U;
    __Vtemp3[8U] = 0x44435f46U;
    __Vtemp3[9U] = 0x52324dU;
    VL_READMEM_N(false, 48, 8, 0, VL_CVT_PACK_STR_NW(10, __Vtemp3)
                 , vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz_3
                 , 0, ~VL_ULL(0));
    __Vtemp4[0U] = 0x2e62696eU;
    __Vtemp4[1U] = 0x7a7a5f32U;
    __Vtemp4[2U] = 0x72655f5fU;
    __Vtemp4[3U] = 0x745f636fU;
    __Vtemp4[4U] = 0x6c5f6666U;
    __Vtemp4[5U] = 0x6c657665U;
    __Vtemp4[6U] = 0x5f746f70U;
    __Vtemp4[7U] = 0x46542e76U;
    __Vtemp4[8U] = 0x44435f46U;
    __Vtemp4[9U] = 0x52324dU;
    VL_READMEM_N(false, 48, 16, 0, VL_CVT_PACK_STR_NW(10, __Vtemp4)
                 , vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz_2
                 , 0, ~VL_ULL(0));
    __Vtemp5[0U] = 0x2e62696eU;
    __Vtemp5[1U] = 0x7a7a5f31U;
    __Vtemp5[2U] = 0x72655f5fU;
    __Vtemp5[3U] = 0x745f636fU;
    __Vtemp5[4U] = 0x6c5f6666U;
    __Vtemp5[5U] = 0x6c657665U;
    __Vtemp5[6U] = 0x5f746f70U;
    __Vtemp5[7U] = 0x46542e76U;
    __Vtemp5[8U] = 0x44435f46U;
    __Vtemp5[9U] = 0x52324dU;
    VL_READMEM_N(false, 48, 32, 0, VL_CVT_PACK_STR_NW(10, __Vtemp5)
                 , vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz_1
                 , 0, ~VL_ULL(0));
}

void VR2MDC_FFT::_eval_initial(VR2MDC_FFT__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC_FFT::_eval_initial\n"); );
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__12(vlSymsp);
}

void VR2MDC_FFT::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC_FFT::final\n"); );
    // Variables
    VR2MDC_FFT__Syms* __restrict vlSymsp = this->__VlSymsp;
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VR2MDC_FFT::_eval_settle(VR2MDC_FFT__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC_FFT::_eval_settle\n"); );
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VR2MDC_FFT::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VR2MDC_FFT::_ctor_var_reset\n"); );
    // Body
    mode = VL_RAND_RESET_I(1);
    raw_data_iq_valid = VL_RAND_RESET_I(1);
    raw_data_iq_ready = VL_RAND_RESET_I(1);
    raw_data_iq_payload_cha_i = VL_RAND_RESET_I(24);
    raw_data_iq_payload_cha_q = VL_RAND_RESET_I(24);
    result_iq_valid = VL_RAND_RESET_I(1);
    result_iq_payload_last = VL_RAND_RESET_I(1);
    result_iq_payload_fragment_cha_i = VL_RAND_RESET_I(24);
    result_iq_payload_fragment_cha_q = VL_RAND_RESET_I(24);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__raw_data_fifo_io_pop_ready = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__fifo_pop_en = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__pop_cnt = VL_RAND_RESET_I(6);
    R2MDC_FFT__DOT__when_R2MDC_FFT_l28 = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(48);
    R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(7);
    R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(7);
    R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(7);
    R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(7);
    R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
            R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(48);
    }}
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5_wn_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6_wn_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7_wn_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8_wn_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9_wn_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_1_port0 = VL_RAND_RESET_Q(48);
    R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_2_port0 = VL_RAND_RESET_Q(48);
    R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_3_port0 = VL_RAND_RESET_Q(48);
    R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_4_port0 = VL_RAND_RESET_Q(48);
    R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_5_port0 = VL_RAND_RESET_Q(48);
    R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT___zz_cnt = VL_RAND_RESET_I(7);
    R2MDC_FFT__DOT__fft_core__DOT__cnt = VL_RAND_RESET_I(7);
    R2MDC_FFT__DOT__fft_core__DOT__when_R2MDC_l20 = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__out1D1_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__out1D1_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__result_out1_regNext_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__result_out1_regNext_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__result_out2_regNext_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__result_out2_regNext_im = VL_RAND_RESET_I(24);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            R2MDC_FFT__DOT__fft_core__DOT___zz_1[__Vi0] = VL_RAND_RESET_Q(48);
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            R2MDC_FFT__DOT__fft_core__DOT___zz_2[__Vi0] = VL_RAND_RESET_Q(48);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            R2MDC_FFT__DOT__fft_core__DOT___zz_3[__Vi0] = VL_RAND_RESET_Q(48);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            R2MDC_FFT__DOT__fft_core__DOT___zz_4[__Vi0] = VL_RAND_RESET_Q(48);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            R2MDC_FFT__DOT__fft_core__DOT___zz_5[__Vi0] = VL_RAND_RESET_Q(48);
    }}
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_0_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_0_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_1_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_1_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_2_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_2_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_3_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_3_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_4_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_4_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_5_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_5_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_6_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_6_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_7_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_7_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_8_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_8_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_9_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_9_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_10_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_10_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_11_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_11_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_12_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_12_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_13_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_13_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_14_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_14_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_15_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_15_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_16_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_16_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_17_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_17_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_18_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_18_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_19_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_19_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_20_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_20_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_21_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_21_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_22_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_22_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_23_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_23_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_24_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_24_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_25_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_25_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_26_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_26_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_27_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_27_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_28_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_28_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_29_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_29_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_30_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_30_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_31_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_31_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_0_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_0_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_1_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_1_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_2_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_2_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_3_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_3_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_4_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_4_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_5_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_5_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_6_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_6_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_7_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_7_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_8_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_8_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_9_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_9_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_10_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_10_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_11_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_11_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_12_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_12_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_13_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_13_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_14_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_14_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_0_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_0_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_1_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_1_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_2_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_2_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_3_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_3_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_4_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_4_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_5_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_5_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_6_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_6_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_7_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_7_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_8_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_8_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_9_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_9_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_10_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_10_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_11_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_11_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_12_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_12_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_13_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_13_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_14_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_14_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_15_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_15_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_0_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_0_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_1_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_1_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_2_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_2_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_3_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_3_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_4_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_4_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_5_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_5_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_6_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_6_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_0_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_0_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_1_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_1_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_2_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_2_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_3_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_3_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_4_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_4_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_5_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_5_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_6_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_6_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_7_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_7_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_0_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_0_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_1_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_1_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_2_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_2_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_0_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_0_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_1_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_1_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_2_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_2_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_3_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_3_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_0_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_0_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_0_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_0_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_1_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_1_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_re = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_im = VL_RAND_RESET_I(24);
    R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_low_port1 = VL_RAND_RESET_Q(48);
    R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_high_port1 = VL_RAND_RESET_Q(48);
    R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt = VL_RAND_RESET_I(5);
    R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__out_cnt = VL_RAND_RESET_I(6);
    R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt_index = VL_RAND_RESET_I(5);
    R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__sorted_valid_1 = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_3 = VL_RAND_RESET_I(1);
    R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__sorted_valid_1_regNext = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[__Vi0] = VL_RAND_RESET_Q(48);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[__Vi0] = VL_RAND_RESET_Q(48);
    }}
    __Vdlyvdim0__R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_Q(48);
    __Vdlyvset__R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ram__v0 = 0;
    __Vm_traceActivity = 0;
}
