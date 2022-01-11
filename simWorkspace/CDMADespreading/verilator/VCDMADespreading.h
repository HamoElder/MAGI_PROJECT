// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCDMADespreading_H_
#define _VCDMADespreading_H_

#include "verilated.h"
#include "VCDMADespreading__Inlines.h"
class VCDMADespreading__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VCDMADespreading) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(w_en,0,0);
    VL_IN8(w_addr,2,0);
    VL_IN8(w_data,7,0);
    VL_IN8(clc,0,0);
    VL_IN8(cnt_limit,2,0);
    VL_IN8(mod_iq_valid,0,0);
    VL_OUT8(mod_iq_ready,0,0);
    VL_OUT8(base_sub_iqs_0_valid,0,0);
    VL_OUT8(base_sub_iqs_1_valid,0,0);
    VL_OUT8(base_sub_iqs_2_valid,0,0);
    VL_OUT8(base_sub_iqs_3_valid,0,0);
    VL_OUT8(base_sub_iqs_4_valid,0,0);
    VL_OUT8(base_sub_iqs_5_valid,0,0);
    VL_OUT8(base_sub_iqs_6_valid,0,0);
    VL_OUT8(base_sub_iqs_7_valid,0,0);
    //char	__VpadToAlign17[1];
    VL_IN16(mod_iq_payload_cha_i,15,0);
    VL_IN16(mod_iq_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_0_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_0_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_1_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_1_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_2_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_2_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_3_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_3_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_4_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_4_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_5_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_5_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_6_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_6_payload_cha_q,15,0);
    VL_OUT16(base_sub_iqs_7_payload_cha_i,15,0);
    VL_OUT16(base_sub_iqs_7_payload_cha_q,15,0);
    //char	__VpadToAlign54[2];
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(CDMADespreading__DOT___zz_code_map_port0,7,0);
    VL_SIG8(CDMADespreading__DOT___zz_code_map_port1,7,0);
    VL_SIG8(CDMADespreading__DOT___zz_code_map_port2,7,0);
    VL_SIG8(CDMADespreading__DOT___zz_code_map_port3,7,0);
    VL_SIG8(CDMADespreading__DOT___zz_code_map_port4,7,0);
    VL_SIG8(CDMADespreading__DOT___zz_code_map_port5,7,0);
    VL_SIG8(CDMADespreading__DOT___zz_code_map_port6,7,0);
    VL_SIG8(CDMADespreading__DOT___zz_code_map_port7,7,0);
    VL_SIG8(CDMADespreading__DOT___zz_1,0,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_8__DOT___zz_cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_8__DOT__cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_8__DOT___zz_base_iq_valid,0,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_9__DOT___zz_cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_9__DOT__cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_9__DOT___zz_base_iq_valid,0,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_10__DOT___zz_cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_10__DOT__cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_10__DOT___zz_base_iq_valid,0,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_11__DOT___zz_cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_11__DOT__cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_11__DOT___zz_base_iq_valid,0,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_12__DOT___zz_cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_12__DOT__cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_12__DOT___zz_base_iq_valid,0,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_13__DOT___zz_cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_13__DOT__cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_13__DOT___zz_base_iq_valid,0,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_14__DOT___zz_cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_14__DOT__cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_14__DOT___zz_base_iq_valid,0,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_15__DOT___zz_cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_15__DOT__cnt,2,0);
    VL_SIG8(CDMADespreading__DOT__computeUnit_15__DOT___zz_base_iq_valid,0,0);
    //char	__VpadToAlign93[1];
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__base_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__base_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__data_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__data_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__base_i_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__base_q_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__base_i_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__base_q_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__base_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__base_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__data_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__data_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__base_i_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__base_q_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__base_i_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__base_q_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__base_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__base_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__data_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__data_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__base_i_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__base_q_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__base_i_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__base_q_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__base_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__base_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__data_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__data_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__base_i_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__base_q_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__base_i_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__base_q_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__base_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__base_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__data_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__data_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__base_i_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__base_q_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__base_i_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__base_q_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__base_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__base_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__data_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__data_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__base_i_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__base_q_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__base_i_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__base_q_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__base_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__base_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__data_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__data_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__base_i_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__base_q_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__base_i_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__base_q_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__base_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__base_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__data_i,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__data_q,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__base_i_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__base_q_next,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__base_i_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__base_q_next_regNext,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_7,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_7,15,0);
    //char	__VpadToAlign478[2];
    VL_SIG8(CDMADespreading__DOT__code_map[8],7,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdlyvdim0__CDMADespreading__DOT__code_map__v0,2,0);
    VL_SIG8(__Vdlyvval__CDMADespreading__DOT__code_map__v0,7,0);
    VL_SIG8(__Vdlyvset__CDMADespreading__DOT__code_map__v0,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign497[1];
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5,15,0);
    VL_SIG16(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6,15,0);
    //char	__VpadToAlign722[2];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign732[4];
    VCDMADespreading__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VCDMADespreading& operator= (const VCDMADespreading&);	///< Copying not allowed
    VCDMADespreading(const VCDMADespreading&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VCDMADespreading(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCDMADespreading();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCDMADespreading__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCDMADespreading__Syms* symsp, bool first);
  private:
    static QData	_change_request(VCDMADespreading__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VCDMADespreading__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__14(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	_combo__TOP__16(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	_combo__TOP__2(VCDMADespreading__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VCDMADespreading__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	_eval_initial(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	_eval_settle(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__11(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__13(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__9(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	_settle__TOP__15(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	_settle__TOP__17(VCDMADespreading__Syms* __restrict vlSymsp);
    static void	traceChgThis(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__7(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__2(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
