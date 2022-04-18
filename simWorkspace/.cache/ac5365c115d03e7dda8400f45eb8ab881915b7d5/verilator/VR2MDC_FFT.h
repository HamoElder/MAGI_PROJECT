// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VR2MDC_FFT_H_
#define _VR2MDC_FFT_H_  // guard

#include "verilated_heavy.h"

//==========

class VR2MDC_FFT__Syms;
class VR2MDC_FFT_VerilatedVcd;


//----------

VL_MODULE(VR2MDC_FFT) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(mode,0,0);
    VL_IN8(raw_data_iq_valid,0,0);
    VL_OUT8(raw_data_iq_ready,0,0);
    VL_OUT8(result_iq_valid,0,0);
    VL_OUT8(result_iq_payload_last,0,0);
    VL_IN(raw_data_iq_payload_cha_i,23,0);
    VL_IN(raw_data_iq_payload_cha_q,23,0);
    VL_OUT(result_iq_payload_fragment_cha_i,23,0);
    VL_OUT(result_iq_payload_fragment_cha_q,23,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ R2MDC_FFT__DOT__raw_data_fifo_io_pop_ready;
        CData/*0:0*/ R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid;
        CData/*0:0*/ R2MDC_FFT__DOT__fifo_pop_en;
        CData/*5:0*/ R2MDC_FFT__DOT__pop_cnt;
        CData/*0:0*/ R2MDC_FFT__DOT__when_R2MDC_FFT_l28;
        CData/*0:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_1;
        CData/*0:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*6:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*6:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*6:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*6:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popping;
        CData/*0:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_full;
        CData/*0:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_io_pop_valid;
        CData/*6:0*/ R2MDC_FFT__DOT__fft_core__DOT___zz_cnt;
        CData/*6:0*/ R2MDC_FFT__DOT__fft_core__DOT__cnt;
        CData/*0:0*/ R2MDC_FFT__DOT__fft_core__DOT__when_R2MDC_l20;
        CData/*0:0*/ R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_1;
        CData/*0:0*/ R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_2;
        CData/*4:0*/ R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt;
        CData/*5:0*/ R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__out_cnt;
        CData/*4:0*/ R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt_index;
        CData/*0:0*/ R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__sorted_valid_1;
        CData/*0:0*/ R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_3;
        CData/*0:0*/ R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__sorted_valid_1_regNext;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5_wn_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6_wn_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7_wn_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8_wn_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9_wn_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__out1D1_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__out1D1_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__result_out1_regNext_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__result_out1_regNext_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__result_out2_regNext_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__result_out2_regNext_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_0_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_0_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_1_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_1_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_2_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_2_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_3_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_3_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_4_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_4_im;
    };
    struct {
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_5_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_5_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_6_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_6_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_7_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_7_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_8_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_8_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_9_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_9_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_10_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_10_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_11_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_11_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_12_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_12_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_13_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_13_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_14_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_14_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_15_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_15_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_16_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_16_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_17_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_17_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_18_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_18_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_19_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_19_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_20_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_20_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_21_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_21_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_22_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_22_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_23_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_23_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_24_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_24_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_25_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_25_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_26_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_26_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_27_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_27_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_28_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_28_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_29_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_29_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_30_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_30_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_31_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_31_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_0_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_0_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_1_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_1_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_2_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_2_im;
    };
    struct {
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_3_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_3_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_4_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_4_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_5_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_5_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_6_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_6_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_7_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_7_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_8_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_8_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_9_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_9_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_10_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_10_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_11_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_11_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_12_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_12_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_13_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_13_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_14_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_14_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_0_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_0_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_1_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_1_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_2_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_2_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_3_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_3_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_4_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_4_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_5_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_5_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_6_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_6_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_7_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_7_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_8_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_8_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_9_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_9_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_10_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_10_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_11_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_11_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_12_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_12_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_13_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_13_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_14_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_14_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_15_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_15_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_0_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_0_im;
    };
    struct {
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_1_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_1_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_2_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_2_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_3_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_3_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_4_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_4_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_5_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_5_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_6_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_6_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_0_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_0_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_1_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_1_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_2_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_2_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_3_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_3_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_4_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_4_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_5_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_5_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_6_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_6_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_7_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_7_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_0_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_0_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_1_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_1_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_2_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_2_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_0_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_0_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_1_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_1_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_2_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_2_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_3_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_3_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_0_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_0_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_0_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_0_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_1_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_1_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_im;
    };
    struct {
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_im;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_re;
        IData/*23:0*/ R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_im;
        QData/*47:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_logic_ram_port0;
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_1_port0;
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_2_port0;
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_3_port0;
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_4_port0;
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_5_port0;
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_low_port1;
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_high_port1;
        QData/*47:0*/ R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ram[128];
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT___zz_1[32];
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT___zz_2[16];
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT___zz_3[8];
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT___zz_4[4];
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT___zz_5[2];
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[32];
        QData/*47:0*/ R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[32];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*6:0*/ __Vdlyvdim0__R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    QData/*47:0*/ __Vdlyvval__R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ram__v0;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VR2MDC_FFT__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VR2MDC_FFT);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VR2MDC_FFT(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VR2MDC_FFT();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VR2MDC_FFT__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VR2MDC_FFT__Syms* symsp, bool first);
  private:
    static QData _change_request(VR2MDC_FFT__Syms* __restrict vlSymsp);
    static QData _change_request_1(VR2MDC_FFT__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__13(VR2MDC_FFT__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VR2MDC_FFT__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VR2MDC_FFT__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VR2MDC_FFT__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__12(VR2MDC_FFT__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VR2MDC_FFT__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VR2MDC_FFT__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VR2MDC_FFT__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VR2MDC_FFT__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VR2MDC_FFT__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VR2MDC_FFT__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VR2MDC_FFT__Syms* __restrict vlSymsp);
    static void _settle__TOP__11(VR2MDC_FFT__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__10(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__14(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__2(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
