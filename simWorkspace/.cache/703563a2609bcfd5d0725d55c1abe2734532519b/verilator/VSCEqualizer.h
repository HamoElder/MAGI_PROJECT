// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSCEQUALIZER_H_
#define _VSCEQUALIZER_H_  // guard

#include "verilated.h"

//==========

class VSCEqualizer__Syms;
class VSCEqualizer_VerilatedVcd;


//----------

VL_MODULE(VSCEqualizer) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(raw_data_payload_last,0,0);
    VL_OUT8(equalized_data_valid,0,0);
    VL_OUT8(equalized_data_payload_last,0,0);
    VL_IN16(raw_data_payload_fragment_cha_i,15,0);
    VL_IN16(raw_data_payload_fragment_cha_q,15,0);
    VL_OUT16(equalized_data_payload_fragment_cha_i,15,0);
    VL_OUT16(equalized_data_payload_fragment_cha_q,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*5:0*/ SCEqualizer__DOT___zz_cnt;
        CData/*5:0*/ SCEqualizer__DOT__cnt;
        CData/*0:0*/ SCEqualizer__DOT__train_en;
        CData/*5:0*/ SCEqualizer__DOT__train_cnt;
        CData/*0:0*/ SCEqualizer__DOT__train_finished;
        CData/*0:0*/ SCEqualizer__DOT__when_SCEqualizer_l76;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_ready_1;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_1;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_2;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_3;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_4;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_5;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_6;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_7;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_8;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_9;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_10;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_11;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_12;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_13;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_14;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_15;
        CData/*0:0*/ SCEqualizer__DOT__raw_data_payload_last_delay_16;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_1;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_2;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_3;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_4;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_5;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_6;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_7;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_8;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_9;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_10;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_11;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_12;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_13;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_14;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__x_sign;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8;
    };
    struct {
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114;
        CData/*0:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_1;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_2;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_3;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_4;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_5;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_6;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_7;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_8;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_9;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_10;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_11;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_12;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_13;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_14;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__x_sign;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11;
    };
    struct {
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114;
        CData/*0:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq_result_data_payload;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq_result_data_payload;
        SData/*15:0*/ SCEqualizer__DOT___zz_ref_data;
        SData/*15:0*/ SCEqualizer__DOT___zz_ref_data_1;
        SData/*15:0*/ SCEqualizer__DOT___zz_cha_i_scale;
        SData/*15:0*/ SCEqualizer__DOT___zz_cha_q_scale;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_scale;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_scale;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_0;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_1;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_2;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_3;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_4;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_5;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_6;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_7;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_8;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_9;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_10;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_11;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_12;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_13;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_14;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_15;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_16;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_17;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_18;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_19;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_20;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_21;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_22;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_23;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_24;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_25;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_26;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_27;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_28;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_29;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_30;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_31;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_32;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_33;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_34;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_35;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_36;
    };
    struct {
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_37;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_38;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_39;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_40;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_41;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_42;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_43;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_44;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_45;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_46;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_47;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_48;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_49;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_50;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_51;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_52;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_53;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_54;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_55;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_56;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_57;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_58;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_59;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_60;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_61;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_62;
        SData/*15:0*/ SCEqualizer__DOT__cha_i_ref_63;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_0;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_1;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_2;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_3;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_4;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_5;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_6;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_7;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_8;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_9;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_10;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_11;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_12;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_13;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_14;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_15;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_16;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_17;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_18;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_19;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_20;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_21;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_22;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_23;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_24;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_25;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_26;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_27;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_28;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_29;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_30;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_31;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_32;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_33;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_34;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_35;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_36;
    };
    struct {
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_37;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_38;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_39;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_40;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_41;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_42;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_43;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_44;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_45;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_46;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_47;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_48;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_49;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_50;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_51;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_52;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_53;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_54;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_55;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_56;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_57;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_58;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_59;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_60;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_61;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_62;
        SData/*15:0*/ SCEqualizer__DOT__cha_q_ref_63;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35;
    };
    struct {
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73;
        SData/*15:0*/ SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37;
    };
    struct {
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65;
        SData/*15:0*/ SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSCEqualizer__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSCEqualizer);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSCEqualizer(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSCEqualizer();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VSCEqualizer__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSCEqualizer__Syms* symsp, bool first);
  private:
    static QData _change_request(VSCEqualizer__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSCEqualizer__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VSCEqualizer__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSCEqualizer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSCEqualizer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VSCEqualizer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VSCEqualizer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VSCEqualizer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VSCEqualizer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VSCEqualizer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__16(VSCEqualizer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(VSCEqualizer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__18(VSCEqualizer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__21(VSCEqualizer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VSCEqualizer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VSCEqualizer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VSCEqualizer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VSCEqualizer__Syms* __restrict vlSymsp);
    static void _settle__TOP__19(VSCEqualizer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__20(VSCEqualizer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
