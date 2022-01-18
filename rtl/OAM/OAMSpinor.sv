// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : OAMSpinor
// Git hash  : 3aba5ba41129fa76a4728cd47203bcf10e3093cc



module OAMSpinor (
  input               base_iq_valid,
  input      [15:0]   base_iq_payload_0_cha_i,
  input      [15:0]   base_iq_payload_0_cha_q,
  input      [15:0]   base_iq_payload_1_cha_i,
  input      [15:0]   base_iq_payload_1_cha_q,
  input      [15:0]   base_iq_payload_2_cha_i,
  input      [15:0]   base_iq_payload_2_cha_q,
  input      [15:0]   base_iq_payload_3_cha_i,
  input      [15:0]   base_iq_payload_3_cha_q,
  output              mod_iqs_valid,
  output     [31:0]   mod_iqs_payload_0_cha_i,
  output     [31:0]   mod_iqs_payload_0_cha_q,
  output     [31:0]   mod_iqs_payload_1_cha_i,
  output     [31:0]   mod_iqs_payload_1_cha_q,
  output     [31:0]   mod_iqs_payload_2_cha_i,
  output     [31:0]   mod_iqs_payload_2_cha_q,
  output     [31:0]   mod_iqs_payload_3_cha_i,
  output     [31:0]   mod_iqs_payload_3_cha_q,
  output     [31:0]   mod_iqs_payload_4_cha_i,
  output     [31:0]   mod_iqs_payload_4_cha_q,
  output     [31:0]   mod_iqs_payload_5_cha_i,
  output     [31:0]   mod_iqs_payload_5_cha_q,
  output     [31:0]   mod_iqs_payload_6_cha_i,
  output     [31:0]   mod_iqs_payload_6_cha_q,
  output     [31:0]   mod_iqs_payload_7_cha_i,
  output     [31:0]   mod_iqs_payload_7_cha_q,
  input               w_sel,
  input               w_en,
  input      [4:0]    w_addr,
  input      [15:0]   w_data,
  input               clk,
  input               resetn
);
  wire       [15:0]   oAMSpin_4_shift_i_0;
  wire       [15:0]   oAMSpin_4_shift_i_1;
  wire       [15:0]   oAMSpin_4_shift_i_2;
  wire       [15:0]   oAMSpin_4_shift_i_3;
  wire       [15:0]   oAMSpin_4_shift_i_4;
  wire       [15:0]   oAMSpin_4_shift_i_5;
  wire       [15:0]   oAMSpin_4_shift_i_6;
  wire       [15:0]   oAMSpin_4_shift_i_7;
  wire       [15:0]   oAMSpin_4_shift_q_0;
  wire       [15:0]   oAMSpin_4_shift_q_1;
  wire       [15:0]   oAMSpin_4_shift_q_2;
  wire       [15:0]   oAMSpin_4_shift_q_3;
  wire       [15:0]   oAMSpin_4_shift_q_4;
  wire       [15:0]   oAMSpin_4_shift_q_5;
  wire       [15:0]   oAMSpin_4_shift_q_6;
  wire       [15:0]   oAMSpin_4_shift_q_7;
  wire       [15:0]   oAMSpin_5_shift_i_0;
  wire       [15:0]   oAMSpin_5_shift_i_1;
  wire       [15:0]   oAMSpin_5_shift_i_2;
  wire       [15:0]   oAMSpin_5_shift_i_3;
  wire       [15:0]   oAMSpin_5_shift_i_4;
  wire       [15:0]   oAMSpin_5_shift_i_5;
  wire       [15:0]   oAMSpin_5_shift_i_6;
  wire       [15:0]   oAMSpin_5_shift_i_7;
  wire       [15:0]   oAMSpin_5_shift_q_0;
  wire       [15:0]   oAMSpin_5_shift_q_1;
  wire       [15:0]   oAMSpin_5_shift_q_2;
  wire       [15:0]   oAMSpin_5_shift_q_3;
  wire       [15:0]   oAMSpin_5_shift_q_4;
  wire       [15:0]   oAMSpin_5_shift_q_5;
  wire       [15:0]   oAMSpin_5_shift_q_6;
  wire       [15:0]   oAMSpin_5_shift_q_7;
  wire       [15:0]   oAMSpin_6_shift_i_0;
  wire       [15:0]   oAMSpin_6_shift_i_1;
  wire       [15:0]   oAMSpin_6_shift_i_2;
  wire       [15:0]   oAMSpin_6_shift_i_3;
  wire       [15:0]   oAMSpin_6_shift_i_4;
  wire       [15:0]   oAMSpin_6_shift_i_5;
  wire       [15:0]   oAMSpin_6_shift_i_6;
  wire       [15:0]   oAMSpin_6_shift_i_7;
  wire       [15:0]   oAMSpin_6_shift_q_0;
  wire       [15:0]   oAMSpin_6_shift_q_1;
  wire       [15:0]   oAMSpin_6_shift_q_2;
  wire       [15:0]   oAMSpin_6_shift_q_3;
  wire       [15:0]   oAMSpin_6_shift_q_4;
  wire       [15:0]   oAMSpin_6_shift_q_5;
  wire       [15:0]   oAMSpin_6_shift_q_6;
  wire       [15:0]   oAMSpin_6_shift_q_7;
  wire       [15:0]   oAMSpin_7_shift_i_0;
  wire       [15:0]   oAMSpin_7_shift_i_1;
  wire       [15:0]   oAMSpin_7_shift_i_2;
  wire       [15:0]   oAMSpin_7_shift_i_3;
  wire       [15:0]   oAMSpin_7_shift_i_4;
  wire       [15:0]   oAMSpin_7_shift_i_5;
  wire       [15:0]   oAMSpin_7_shift_i_6;
  wire       [15:0]   oAMSpin_7_shift_i_7;
  wire       [15:0]   oAMSpin_7_shift_q_0;
  wire       [15:0]   oAMSpin_7_shift_q_1;
  wire       [15:0]   oAMSpin_7_shift_q_2;
  wire       [15:0]   oAMSpin_7_shift_q_3;
  wire       [15:0]   oAMSpin_7_shift_q_4;
  wire       [15:0]   oAMSpin_7_shift_q_5;
  wire       [15:0]   oAMSpin_7_shift_q_6;
  wire       [15:0]   oAMSpin_7_shift_q_7;
  wire       [15:0]   _zz_shift_i_map_port1;
  wire       [15:0]   _zz_shift_i_map_port2;
  wire       [15:0]   _zz_shift_i_map_port3;
  wire       [15:0]   _zz_shift_i_map_port4;
  wire       [15:0]   _zz_shift_i_map_port5;
  wire       [15:0]   _zz_shift_i_map_port6;
  wire       [15:0]   _zz_shift_i_map_port7;
  wire       [15:0]   _zz_shift_i_map_port8;
  wire       [15:0]   _zz_shift_i_map_port9;
  wire       [15:0]   _zz_shift_i_map_port10;
  wire       [15:0]   _zz_shift_i_map_port11;
  wire       [15:0]   _zz_shift_i_map_port12;
  wire       [15:0]   _zz_shift_i_map_port13;
  wire       [15:0]   _zz_shift_i_map_port14;
  wire       [15:0]   _zz_shift_i_map_port15;
  wire       [15:0]   _zz_shift_i_map_port16;
  wire       [15:0]   _zz_shift_i_map_port17;
  wire       [15:0]   _zz_shift_i_map_port18;
  wire       [15:0]   _zz_shift_i_map_port19;
  wire       [15:0]   _zz_shift_i_map_port20;
  wire       [15:0]   _zz_shift_i_map_port21;
  wire       [15:0]   _zz_shift_i_map_port22;
  wire       [15:0]   _zz_shift_i_map_port23;
  wire       [15:0]   _zz_shift_i_map_port24;
  wire       [15:0]   _zz_shift_i_map_port25;
  wire       [15:0]   _zz_shift_i_map_port26;
  wire       [15:0]   _zz_shift_i_map_port27;
  wire       [15:0]   _zz_shift_i_map_port28;
  wire       [15:0]   _zz_shift_i_map_port29;
  wire       [15:0]   _zz_shift_i_map_port30;
  wire       [15:0]   _zz_shift_i_map_port31;
  wire       [15:0]   _zz_shift_i_map_port32;
  wire       [15:0]   _zz_shift_q_map_port1;
  wire       [15:0]   _zz_shift_q_map_port2;
  wire       [15:0]   _zz_shift_q_map_port3;
  wire       [15:0]   _zz_shift_q_map_port4;
  wire       [15:0]   _zz_shift_q_map_port5;
  wire       [15:0]   _zz_shift_q_map_port6;
  wire       [15:0]   _zz_shift_q_map_port7;
  wire       [15:0]   _zz_shift_q_map_port8;
  wire       [15:0]   _zz_shift_q_map_port9;
  wire       [15:0]   _zz_shift_q_map_port10;
  wire       [15:0]   _zz_shift_q_map_port11;
  wire       [15:0]   _zz_shift_q_map_port12;
  wire       [15:0]   _zz_shift_q_map_port13;
  wire       [15:0]   _zz_shift_q_map_port14;
  wire       [15:0]   _zz_shift_q_map_port15;
  wire       [15:0]   _zz_shift_q_map_port16;
  wire       [15:0]   _zz_shift_q_map_port17;
  wire       [15:0]   _zz_shift_q_map_port18;
  wire       [15:0]   _zz_shift_q_map_port19;
  wire       [15:0]   _zz_shift_q_map_port20;
  wire       [15:0]   _zz_shift_q_map_port21;
  wire       [15:0]   _zz_shift_q_map_port22;
  wire       [15:0]   _zz_shift_q_map_port23;
  wire       [15:0]   _zz_shift_q_map_port24;
  wire       [15:0]   _zz_shift_q_map_port25;
  wire       [15:0]   _zz_shift_q_map_port26;
  wire       [15:0]   _zz_shift_q_map_port27;
  wire       [15:0]   _zz_shift_q_map_port28;
  wire       [15:0]   _zz_shift_q_map_port29;
  wire       [15:0]   _zz_shift_q_map_port30;
  wire       [15:0]   _zz_shift_q_map_port31;
  wire       [15:0]   _zz_shift_q_map_port32;
  wire                oAMSpin_4_mod_sub_iqs_valid;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_0_cha_i;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_0_cha_q;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_1_cha_i;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_1_cha_q;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_2_cha_i;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_2_cha_q;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_3_cha_i;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_3_cha_q;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_4_cha_i;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_4_cha_q;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_5_cha_i;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_5_cha_q;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_6_cha_i;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_6_cha_q;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_7_cha_i;
  wire       [31:0]   oAMSpin_4_mod_sub_iqs_payload_7_cha_q;
  wire                oAMSpin_5_mod_sub_iqs_valid;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_0_cha_i;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_0_cha_q;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_1_cha_i;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_1_cha_q;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_2_cha_i;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_2_cha_q;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_3_cha_i;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_3_cha_q;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_4_cha_i;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_4_cha_q;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_5_cha_i;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_5_cha_q;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_6_cha_i;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_6_cha_q;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_7_cha_i;
  wire       [31:0]   oAMSpin_5_mod_sub_iqs_payload_7_cha_q;
  wire                oAMSpin_6_mod_sub_iqs_valid;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_0_cha_i;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_0_cha_q;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_1_cha_i;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_1_cha_q;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_2_cha_i;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_2_cha_q;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_3_cha_i;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_3_cha_q;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_4_cha_i;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_4_cha_q;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_5_cha_i;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_5_cha_q;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_6_cha_i;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_6_cha_q;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_7_cha_i;
  wire       [31:0]   oAMSpin_6_mod_sub_iqs_payload_7_cha_q;
  wire                oAMSpin_7_mod_sub_iqs_valid;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_0_cha_i;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_0_cha_q;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_1_cha_i;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_1_cha_q;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_2_cha_i;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_2_cha_q;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_3_cha_i;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_3_cha_q;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_4_cha_i;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_4_cha_q;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_5_cha_i;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_5_cha_q;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_6_cha_i;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_6_cha_q;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_7_cha_i;
  wire       [31:0]   oAMSpin_7_mod_sub_iqs_payload_7_cha_q;
  wire                chaCompose_8_mod_iq_valid;
  wire       [31:0]   chaCompose_8_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_8_mod_iq_payload_cha_q;
  wire                chaCompose_9_mod_iq_valid;
  wire       [31:0]   chaCompose_9_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_9_mod_iq_payload_cha_q;
  wire                chaCompose_10_mod_iq_valid;
  wire       [31:0]   chaCompose_10_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_10_mod_iq_payload_cha_q;
  wire                chaCompose_11_mod_iq_valid;
  wire       [31:0]   chaCompose_11_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_11_mod_iq_payload_cha_q;
  wire                chaCompose_12_mod_iq_valid;
  wire       [31:0]   chaCompose_12_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_12_mod_iq_payload_cha_q;
  wire                chaCompose_13_mod_iq_valid;
  wire       [31:0]   chaCompose_13_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_13_mod_iq_payload_cha_q;
  wire                chaCompose_14_mod_iq_valid;
  wire       [31:0]   chaCompose_14_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_14_mod_iq_payload_cha_q;
  wire                chaCompose_15_mod_iq_valid;
  wire       [31:0]   chaCompose_15_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_15_mod_iq_payload_cha_q;
  wire       [15:0]   _zz_shift_i_map_port;
  wire       [15:0]   _zz_shift_q_map_port;
  wire       [4:0]    _zz_shift_i_map_port_1;
  wire       [4:0]    _zz_shift_i_0;
  wire       [4:0]    _zz_shift_q_map_port_1;
  wire       [4:0]    _zz_shift_q_0;
  wire       [4:0]    _zz_shift_i_map_port_2;
  wire       [4:0]    _zz_shift_i_1;
  wire       [4:0]    _zz_shift_q_map_port_2;
  wire       [4:0]    _zz_shift_q_1;
  wire       [4:0]    _zz_shift_i_map_port_3;
  wire       [4:0]    _zz_shift_i_2;
  wire       [4:0]    _zz_shift_q_map_port_3;
  wire       [4:0]    _zz_shift_q_2;
  wire       [4:0]    _zz_shift_i_map_port_4;
  wire       [4:0]    _zz_shift_i_3;
  wire       [4:0]    _zz_shift_q_map_port_4;
  wire       [4:0]    _zz_shift_q_3;
  wire       [4:0]    _zz_shift_i_map_port_5;
  wire       [4:0]    _zz_shift_i_4;
  wire       [4:0]    _zz_shift_q_map_port_5;
  wire       [4:0]    _zz_shift_q_4;
  wire       [4:0]    _zz_shift_i_map_port_6;
  wire       [4:0]    _zz_shift_i_5;
  wire       [4:0]    _zz_shift_q_map_port_6;
  wire       [4:0]    _zz_shift_q_5;
  wire       [4:0]    _zz_shift_i_map_port_7;
  wire       [4:0]    _zz_shift_i_6;
  wire       [4:0]    _zz_shift_q_map_port_7;
  wire       [4:0]    _zz_shift_q_6;
  wire       [4:0]    _zz_shift_i_map_port_8;
  wire       [4:0]    _zz_shift_i_7;
  wire       [4:0]    _zz_shift_q_map_port_8;
  wire       [4:0]    _zz_shift_q_7;
  wire       [4:0]    _zz_shift_i_map_port_9;
  wire       [4:0]    _zz_shift_i_0_1;
  wire       [4:0]    _zz_shift_q_map_port_9;
  wire       [4:0]    _zz_shift_q_0_1;
  wire       [4:0]    _zz_shift_i_map_port_10;
  wire       [4:0]    _zz_shift_i_1_1;
  wire       [4:0]    _zz_shift_q_map_port_10;
  wire       [4:0]    _zz_shift_q_1_1;
  wire       [4:0]    _zz_shift_i_map_port_11;
  wire       [4:0]    _zz_shift_i_2_1;
  wire       [4:0]    _zz_shift_q_map_port_11;
  wire       [4:0]    _zz_shift_q_2_1;
  wire       [4:0]    _zz_shift_i_map_port_12;
  wire       [4:0]    _zz_shift_i_3_1;
  wire       [4:0]    _zz_shift_q_map_port_12;
  wire       [4:0]    _zz_shift_q_3_1;
  wire       [4:0]    _zz_shift_i_map_port_13;
  wire       [4:0]    _zz_shift_i_4_1;
  wire       [4:0]    _zz_shift_q_map_port_13;
  wire       [4:0]    _zz_shift_q_4_1;
  wire       [4:0]    _zz_shift_i_map_port_14;
  wire       [4:0]    _zz_shift_i_5_1;
  wire       [4:0]    _zz_shift_q_map_port_14;
  wire       [4:0]    _zz_shift_q_5_1;
  wire       [4:0]    _zz_shift_i_map_port_15;
  wire       [4:0]    _zz_shift_i_6_1;
  wire       [4:0]    _zz_shift_q_map_port_15;
  wire       [4:0]    _zz_shift_q_6_1;
  wire       [4:0]    _zz_shift_i_map_port_16;
  wire       [4:0]    _zz_shift_i_7_1;
  wire       [4:0]    _zz_shift_q_map_port_16;
  wire       [4:0]    _zz_shift_q_7_1;
  wire       [4:0]    _zz_shift_i_map_port_17;
  wire       [4:0]    _zz_shift_i_0_2;
  wire       [4:0]    _zz_shift_q_map_port_17;
  wire       [4:0]    _zz_shift_q_0_2;
  wire       [4:0]    _zz_shift_i_map_port_18;
  wire       [4:0]    _zz_shift_i_1_2;
  wire       [4:0]    _zz_shift_q_map_port_18;
  wire       [4:0]    _zz_shift_q_1_2;
  wire       [4:0]    _zz_shift_i_map_port_19;
  wire       [4:0]    _zz_shift_i_2_2;
  wire       [4:0]    _zz_shift_q_map_port_19;
  wire       [4:0]    _zz_shift_q_2_2;
  wire       [4:0]    _zz_shift_i_map_port_20;
  wire       [4:0]    _zz_shift_i_3_2;
  wire       [4:0]    _zz_shift_q_map_port_20;
  wire       [4:0]    _zz_shift_q_3_2;
  wire       [4:0]    _zz_shift_i_map_port_21;
  wire       [4:0]    _zz_shift_i_4_2;
  wire       [4:0]    _zz_shift_q_map_port_21;
  wire       [4:0]    _zz_shift_q_4_2;
  wire       [4:0]    _zz_shift_i_map_port_22;
  wire       [4:0]    _zz_shift_i_5_2;
  wire       [4:0]    _zz_shift_q_map_port_22;
  wire       [4:0]    _zz_shift_q_5_2;
  wire       [4:0]    _zz_shift_i_map_port_23;
  wire       [4:0]    _zz_shift_i_6_2;
  wire       [4:0]    _zz_shift_q_map_port_23;
  wire       [4:0]    _zz_shift_q_6_2;
  wire       [4:0]    _zz_shift_i_map_port_24;
  wire       [4:0]    _zz_shift_i_7_2;
  wire       [4:0]    _zz_shift_q_map_port_24;
  wire       [4:0]    _zz_shift_q_7_2;
  wire       [4:0]    _zz_shift_i_map_port_25;
  wire       [4:0]    _zz_shift_i_0_3;
  wire       [4:0]    _zz_shift_q_map_port_25;
  wire       [4:0]    _zz_shift_q_0_3;
  wire       [4:0]    _zz_shift_i_map_port_26;
  wire       [4:0]    _zz_shift_i_1_3;
  wire       [4:0]    _zz_shift_q_map_port_26;
  wire       [4:0]    _zz_shift_q_1_3;
  wire       [4:0]    _zz_shift_i_map_port_27;
  wire       [4:0]    _zz_shift_i_2_3;
  wire       [4:0]    _zz_shift_q_map_port_27;
  wire       [4:0]    _zz_shift_q_2_3;
  wire       [4:0]    _zz_shift_i_map_port_28;
  wire       [4:0]    _zz_shift_i_3_3;
  wire       [4:0]    _zz_shift_q_map_port_28;
  wire       [4:0]    _zz_shift_q_3_3;
  wire       [4:0]    _zz_shift_i_map_port_29;
  wire       [4:0]    _zz_shift_i_4_3;
  wire       [4:0]    _zz_shift_q_map_port_29;
  wire       [4:0]    _zz_shift_q_4_3;
  wire       [4:0]    _zz_shift_i_map_port_30;
  wire       [4:0]    _zz_shift_i_5_3;
  wire       [4:0]    _zz_shift_q_map_port_30;
  wire       [4:0]    _zz_shift_q_5_3;
  wire       [4:0]    _zz_shift_i_map_port_31;
  wire       [4:0]    _zz_shift_i_6_3;
  wire       [4:0]    _zz_shift_q_map_port_31;
  wire       [4:0]    _zz_shift_q_6_3;
  wire       [4:0]    _zz_shift_i_map_port_32;
  wire       [4:0]    _zz_shift_i_7_3;
  wire       [4:0]    _zz_shift_q_map_port_32;
  wire       [4:0]    _zz_shift_q_7_3;
  reg                 _zz_1;
  reg                 _zz_2;
  wire       [31:0]   mod_sub_iqs_vec_0_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_0_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_1_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_1_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_2_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_2_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_3_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_3_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_4_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_4_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_5_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_5_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_6_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_6_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_7_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_7_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_8_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_8_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_9_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_9_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_10_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_10_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_11_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_11_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_12_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_12_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_13_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_13_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_14_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_14_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_15_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_15_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_16_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_16_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_17_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_17_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_18_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_18_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_19_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_19_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_20_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_20_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_21_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_21_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_22_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_22_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_23_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_23_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_24_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_24_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_25_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_25_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_26_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_26_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_27_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_27_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_28_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_28_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_29_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_29_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_30_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_30_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_31_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_31_cha_q;
  wire                mod_sub_valid_vec_0;
  wire                mod_sub_valid_vec_1;
  wire                mod_sub_valid_vec_2;
  wire                mod_sub_valid_vec_3;
  wire                mod_sub_valid_vec_4;
  wire                mod_sub_valid_vec_5;
  wire                mod_sub_valid_vec_6;
  wire                mod_sub_valid_vec_7;
  wire                mod_sub_valid_vec_8;
  wire                mod_sub_valid_vec_9;
  wire                mod_sub_valid_vec_10;
  wire                mod_sub_valid_vec_11;
  wire                mod_sub_valid_vec_12;
  wire                mod_sub_valid_vec_13;
  wire                mod_sub_valid_vec_14;
  wire                mod_sub_valid_vec_15;
  wire                mod_sub_valid_vec_16;
  wire                mod_sub_valid_vec_17;
  wire                mod_sub_valid_vec_18;
  wire                mod_sub_valid_vec_19;
  wire                mod_sub_valid_vec_20;
  wire                mod_sub_valid_vec_21;
  wire                mod_sub_valid_vec_22;
  wire                mod_sub_valid_vec_23;
  wire                mod_sub_valid_vec_24;
  wire                mod_sub_valid_vec_25;
  wire                mod_sub_valid_vec_26;
  wire                mod_sub_valid_vec_27;
  wire                mod_sub_valid_vec_28;
  wire                mod_sub_valid_vec_29;
  wire                mod_sub_valid_vec_30;
  wire                mod_sub_valid_vec_31;
  wire                mod_iq_valid_vec_0;
  wire                mod_iq_valid_vec_1;
  wire                mod_iq_valid_vec_2;
  wire                mod_iq_valid_vec_3;
  wire                mod_iq_valid_vec_4;
  wire                mod_iq_valid_vec_5;
  wire                mod_iq_valid_vec_6;
  wire                mod_iq_valid_vec_7;
  (* ram_style = "distributed" *) reg [15:0] shift_i_map [0:31];
  (* ram_style = "distributed" *) reg [15:0] shift_q_map [0:31];

  assign _zz_shift_i_map_port = w_data;
  assign _zz_shift_i_0 = 5'h0;
  assign _zz_shift_i_1 = 5'h01;
  assign _zz_shift_i_2 = 5'h02;
  assign _zz_shift_i_3 = 5'h03;
  assign _zz_shift_i_4 = 5'h04;
  assign _zz_shift_i_5 = 5'h05;
  assign _zz_shift_i_6 = 5'h06;
  assign _zz_shift_i_7 = 5'h07;
  assign _zz_shift_i_0_1 = 5'h08;
  assign _zz_shift_i_1_1 = 5'h09;
  assign _zz_shift_i_2_1 = 5'h0a;
  assign _zz_shift_i_3_1 = 5'h0b;
  assign _zz_shift_i_4_1 = 5'h0c;
  assign _zz_shift_i_5_1 = 5'h0d;
  assign _zz_shift_i_6_1 = 5'h0e;
  assign _zz_shift_i_7_1 = 5'h0f;
  assign _zz_shift_i_0_2 = 5'h10;
  assign _zz_shift_i_1_2 = 5'h11;
  assign _zz_shift_i_2_2 = 5'h12;
  assign _zz_shift_i_3_2 = 5'h13;
  assign _zz_shift_i_4_2 = 5'h14;
  assign _zz_shift_i_5_2 = 5'h15;
  assign _zz_shift_i_6_2 = 5'h16;
  assign _zz_shift_i_7_2 = 5'h17;
  assign _zz_shift_i_0_3 = 5'h18;
  assign _zz_shift_i_1_3 = 5'h19;
  assign _zz_shift_i_2_3 = 5'h1a;
  assign _zz_shift_i_3_3 = 5'h1b;
  assign _zz_shift_i_4_3 = 5'h1c;
  assign _zz_shift_i_5_3 = 5'h1d;
  assign _zz_shift_i_6_3 = 5'h1e;
  assign _zz_shift_i_7_3 = 5'h1f;
  assign _zz_shift_q_map_port = w_data;
  assign _zz_shift_q_0 = 5'h0;
  assign _zz_shift_q_1 = 5'h01;
  assign _zz_shift_q_2 = 5'h02;
  assign _zz_shift_q_3 = 5'h03;
  assign _zz_shift_q_4 = 5'h04;
  assign _zz_shift_q_5 = 5'h05;
  assign _zz_shift_q_6 = 5'h06;
  assign _zz_shift_q_7 = 5'h07;
  assign _zz_shift_q_0_1 = 5'h08;
  assign _zz_shift_q_1_1 = 5'h09;
  assign _zz_shift_q_2_1 = 5'h0a;
  assign _zz_shift_q_3_1 = 5'h0b;
  assign _zz_shift_q_4_1 = 5'h0c;
  assign _zz_shift_q_5_1 = 5'h0d;
  assign _zz_shift_q_6_1 = 5'h0e;
  assign _zz_shift_q_7_1 = 5'h0f;
  assign _zz_shift_q_0_2 = 5'h10;
  assign _zz_shift_q_1_2 = 5'h11;
  assign _zz_shift_q_2_2 = 5'h12;
  assign _zz_shift_q_3_2 = 5'h13;
  assign _zz_shift_q_4_2 = 5'h14;
  assign _zz_shift_q_5_2 = 5'h15;
  assign _zz_shift_q_6_2 = 5'h16;
  assign _zz_shift_q_7_2 = 5'h17;
  assign _zz_shift_q_0_3 = 5'h18;
  assign _zz_shift_q_1_3 = 5'h19;
  assign _zz_shift_q_2_3 = 5'h1a;
  assign _zz_shift_q_3_3 = 5'h1b;
  assign _zz_shift_q_4_3 = 5'h1c;
  assign _zz_shift_q_5_3 = 5'h1d;
  assign _zz_shift_q_6_3 = 5'h1e;
  assign _zz_shift_q_7_3 = 5'h1f;
  always @(posedge clk) begin
    if(_zz_2) begin
      shift_i_map[w_addr] <= _zz_shift_i_map_port;
    end
  end

  assign _zz_shift_i_map_port1 = shift_i_map[_zz_shift_i_0];
  assign _zz_shift_i_map_port2 = shift_i_map[_zz_shift_i_1];
  assign _zz_shift_i_map_port3 = shift_i_map[_zz_shift_i_2];
  assign _zz_shift_i_map_port4 = shift_i_map[_zz_shift_i_3];
  assign _zz_shift_i_map_port5 = shift_i_map[_zz_shift_i_4];
  assign _zz_shift_i_map_port6 = shift_i_map[_zz_shift_i_5];
  assign _zz_shift_i_map_port7 = shift_i_map[_zz_shift_i_6];
  assign _zz_shift_i_map_port8 = shift_i_map[_zz_shift_i_7];
  assign _zz_shift_i_map_port9 = shift_i_map[_zz_shift_i_0_1];
  assign _zz_shift_i_map_port10 = shift_i_map[_zz_shift_i_1_1];
  assign _zz_shift_i_map_port11 = shift_i_map[_zz_shift_i_2_1];
  assign _zz_shift_i_map_port12 = shift_i_map[_zz_shift_i_3_1];
  assign _zz_shift_i_map_port13 = shift_i_map[_zz_shift_i_4_1];
  assign _zz_shift_i_map_port14 = shift_i_map[_zz_shift_i_5_1];
  assign _zz_shift_i_map_port15 = shift_i_map[_zz_shift_i_6_1];
  assign _zz_shift_i_map_port16 = shift_i_map[_zz_shift_i_7_1];
  assign _zz_shift_i_map_port17 = shift_i_map[_zz_shift_i_0_2];
  assign _zz_shift_i_map_port18 = shift_i_map[_zz_shift_i_1_2];
  assign _zz_shift_i_map_port19 = shift_i_map[_zz_shift_i_2_2];
  assign _zz_shift_i_map_port20 = shift_i_map[_zz_shift_i_3_2];
  assign _zz_shift_i_map_port21 = shift_i_map[_zz_shift_i_4_2];
  assign _zz_shift_i_map_port22 = shift_i_map[_zz_shift_i_5_2];
  assign _zz_shift_i_map_port23 = shift_i_map[_zz_shift_i_6_2];
  assign _zz_shift_i_map_port24 = shift_i_map[_zz_shift_i_7_2];
  assign _zz_shift_i_map_port25 = shift_i_map[_zz_shift_i_0_3];
  assign _zz_shift_i_map_port26 = shift_i_map[_zz_shift_i_1_3];
  assign _zz_shift_i_map_port27 = shift_i_map[_zz_shift_i_2_3];
  assign _zz_shift_i_map_port28 = shift_i_map[_zz_shift_i_3_3];
  assign _zz_shift_i_map_port29 = shift_i_map[_zz_shift_i_4_3];
  assign _zz_shift_i_map_port30 = shift_i_map[_zz_shift_i_5_3];
  assign _zz_shift_i_map_port31 = shift_i_map[_zz_shift_i_6_3];
  assign _zz_shift_i_map_port32 = shift_i_map[_zz_shift_i_7_3];
  always @(posedge clk) begin
    if(_zz_1) begin
      shift_q_map[w_addr] <= _zz_shift_q_map_port;
    end
  end

  assign _zz_shift_q_map_port1 = shift_q_map[_zz_shift_q_0];
  assign _zz_shift_q_map_port2 = shift_q_map[_zz_shift_q_1];
  assign _zz_shift_q_map_port3 = shift_q_map[_zz_shift_q_2];
  assign _zz_shift_q_map_port4 = shift_q_map[_zz_shift_q_3];
  assign _zz_shift_q_map_port5 = shift_q_map[_zz_shift_q_4];
  assign _zz_shift_q_map_port6 = shift_q_map[_zz_shift_q_5];
  assign _zz_shift_q_map_port7 = shift_q_map[_zz_shift_q_6];
  assign _zz_shift_q_map_port8 = shift_q_map[_zz_shift_q_7];
  assign _zz_shift_q_map_port9 = shift_q_map[_zz_shift_q_0_1];
  assign _zz_shift_q_map_port10 = shift_q_map[_zz_shift_q_1_1];
  assign _zz_shift_q_map_port11 = shift_q_map[_zz_shift_q_2_1];
  assign _zz_shift_q_map_port12 = shift_q_map[_zz_shift_q_3_1];
  assign _zz_shift_q_map_port13 = shift_q_map[_zz_shift_q_4_1];
  assign _zz_shift_q_map_port14 = shift_q_map[_zz_shift_q_5_1];
  assign _zz_shift_q_map_port15 = shift_q_map[_zz_shift_q_6_1];
  assign _zz_shift_q_map_port16 = shift_q_map[_zz_shift_q_7_1];
  assign _zz_shift_q_map_port17 = shift_q_map[_zz_shift_q_0_2];
  assign _zz_shift_q_map_port18 = shift_q_map[_zz_shift_q_1_2];
  assign _zz_shift_q_map_port19 = shift_q_map[_zz_shift_q_2_2];
  assign _zz_shift_q_map_port20 = shift_q_map[_zz_shift_q_3_2];
  assign _zz_shift_q_map_port21 = shift_q_map[_zz_shift_q_4_2];
  assign _zz_shift_q_map_port22 = shift_q_map[_zz_shift_q_5_2];
  assign _zz_shift_q_map_port23 = shift_q_map[_zz_shift_q_6_2];
  assign _zz_shift_q_map_port24 = shift_q_map[_zz_shift_q_7_2];
  assign _zz_shift_q_map_port25 = shift_q_map[_zz_shift_q_0_3];
  assign _zz_shift_q_map_port26 = shift_q_map[_zz_shift_q_1_3];
  assign _zz_shift_q_map_port27 = shift_q_map[_zz_shift_q_2_3];
  assign _zz_shift_q_map_port28 = shift_q_map[_zz_shift_q_3_3];
  assign _zz_shift_q_map_port29 = shift_q_map[_zz_shift_q_4_3];
  assign _zz_shift_q_map_port30 = shift_q_map[_zz_shift_q_5_3];
  assign _zz_shift_q_map_port31 = shift_q_map[_zz_shift_q_6_3];
  assign _zz_shift_q_map_port32 = shift_q_map[_zz_shift_q_7_3];
  OAMSpin oAMSpin_4 (
    .shift_i_0                      (oAMSpin_4_shift_i_0                    ), //i
    .shift_i_1                      (oAMSpin_4_shift_i_1                    ), //i
    .shift_i_2                      (oAMSpin_4_shift_i_2                    ), //i
    .shift_i_3                      (oAMSpin_4_shift_i_3                    ), //i
    .shift_i_4                      (oAMSpin_4_shift_i_4                    ), //i
    .shift_i_5                      (oAMSpin_4_shift_i_5                    ), //i
    .shift_i_6                      (oAMSpin_4_shift_i_6                    ), //i
    .shift_i_7                      (oAMSpin_4_shift_i_7                    ), //i
    .shift_q_0                      (oAMSpin_4_shift_q_0                    ), //i
    .shift_q_1                      (oAMSpin_4_shift_q_1                    ), //i
    .shift_q_2                      (oAMSpin_4_shift_q_2                    ), //i
    .shift_q_3                      (oAMSpin_4_shift_q_3                    ), //i
    .shift_q_4                      (oAMSpin_4_shift_q_4                    ), //i
    .shift_q_5                      (oAMSpin_4_shift_q_5                    ), //i
    .shift_q_6                      (oAMSpin_4_shift_q_6                    ), //i
    .shift_q_7                      (oAMSpin_4_shift_q_7                    ), //i
    .base_iq_valid                  (base_iq_valid                          ), //i
    .base_iq_payload_cha_i          (base_iq_payload_0_cha_i                ), //i
    .base_iq_payload_cha_q          (base_iq_payload_0_cha_q                ), //i
    .mod_sub_iqs_valid              (oAMSpin_4_mod_sub_iqs_valid            ), //o
    .mod_sub_iqs_payload_0_cha_i    (oAMSpin_4_mod_sub_iqs_payload_0_cha_i  ), //o
    .mod_sub_iqs_payload_0_cha_q    (oAMSpin_4_mod_sub_iqs_payload_0_cha_q  ), //o
    .mod_sub_iqs_payload_1_cha_i    (oAMSpin_4_mod_sub_iqs_payload_1_cha_i  ), //o
    .mod_sub_iqs_payload_1_cha_q    (oAMSpin_4_mod_sub_iqs_payload_1_cha_q  ), //o
    .mod_sub_iqs_payload_2_cha_i    (oAMSpin_4_mod_sub_iqs_payload_2_cha_i  ), //o
    .mod_sub_iqs_payload_2_cha_q    (oAMSpin_4_mod_sub_iqs_payload_2_cha_q  ), //o
    .mod_sub_iqs_payload_3_cha_i    (oAMSpin_4_mod_sub_iqs_payload_3_cha_i  ), //o
    .mod_sub_iqs_payload_3_cha_q    (oAMSpin_4_mod_sub_iqs_payload_3_cha_q  ), //o
    .mod_sub_iqs_payload_4_cha_i    (oAMSpin_4_mod_sub_iqs_payload_4_cha_i  ), //o
    .mod_sub_iqs_payload_4_cha_q    (oAMSpin_4_mod_sub_iqs_payload_4_cha_q  ), //o
    .mod_sub_iqs_payload_5_cha_i    (oAMSpin_4_mod_sub_iqs_payload_5_cha_i  ), //o
    .mod_sub_iqs_payload_5_cha_q    (oAMSpin_4_mod_sub_iqs_payload_5_cha_q  ), //o
    .mod_sub_iqs_payload_6_cha_i    (oAMSpin_4_mod_sub_iqs_payload_6_cha_i  ), //o
    .mod_sub_iqs_payload_6_cha_q    (oAMSpin_4_mod_sub_iqs_payload_6_cha_q  ), //o
    .mod_sub_iqs_payload_7_cha_i    (oAMSpin_4_mod_sub_iqs_payload_7_cha_i  ), //o
    .mod_sub_iqs_payload_7_cha_q    (oAMSpin_4_mod_sub_iqs_payload_7_cha_q  ), //o
    .clk                            (clk                                    ), //i
    .resetn                         (resetn                                 )  //i
  );
  OAMSpin oAMSpin_5 (
    .shift_i_0                      (oAMSpin_5_shift_i_0                    ), //i
    .shift_i_1                      (oAMSpin_5_shift_i_1                    ), //i
    .shift_i_2                      (oAMSpin_5_shift_i_2                    ), //i
    .shift_i_3                      (oAMSpin_5_shift_i_3                    ), //i
    .shift_i_4                      (oAMSpin_5_shift_i_4                    ), //i
    .shift_i_5                      (oAMSpin_5_shift_i_5                    ), //i
    .shift_i_6                      (oAMSpin_5_shift_i_6                    ), //i
    .shift_i_7                      (oAMSpin_5_shift_i_7                    ), //i
    .shift_q_0                      (oAMSpin_5_shift_q_0                    ), //i
    .shift_q_1                      (oAMSpin_5_shift_q_1                    ), //i
    .shift_q_2                      (oAMSpin_5_shift_q_2                    ), //i
    .shift_q_3                      (oAMSpin_5_shift_q_3                    ), //i
    .shift_q_4                      (oAMSpin_5_shift_q_4                    ), //i
    .shift_q_5                      (oAMSpin_5_shift_q_5                    ), //i
    .shift_q_6                      (oAMSpin_5_shift_q_6                    ), //i
    .shift_q_7                      (oAMSpin_5_shift_q_7                    ), //i
    .base_iq_valid                  (base_iq_valid                          ), //i
    .base_iq_payload_cha_i          (base_iq_payload_1_cha_i                ), //i
    .base_iq_payload_cha_q          (base_iq_payload_1_cha_q                ), //i
    .mod_sub_iqs_valid              (oAMSpin_5_mod_sub_iqs_valid            ), //o
    .mod_sub_iqs_payload_0_cha_i    (oAMSpin_5_mod_sub_iqs_payload_0_cha_i  ), //o
    .mod_sub_iqs_payload_0_cha_q    (oAMSpin_5_mod_sub_iqs_payload_0_cha_q  ), //o
    .mod_sub_iqs_payload_1_cha_i    (oAMSpin_5_mod_sub_iqs_payload_1_cha_i  ), //o
    .mod_sub_iqs_payload_1_cha_q    (oAMSpin_5_mod_sub_iqs_payload_1_cha_q  ), //o
    .mod_sub_iqs_payload_2_cha_i    (oAMSpin_5_mod_sub_iqs_payload_2_cha_i  ), //o
    .mod_sub_iqs_payload_2_cha_q    (oAMSpin_5_mod_sub_iqs_payload_2_cha_q  ), //o
    .mod_sub_iqs_payload_3_cha_i    (oAMSpin_5_mod_sub_iqs_payload_3_cha_i  ), //o
    .mod_sub_iqs_payload_3_cha_q    (oAMSpin_5_mod_sub_iqs_payload_3_cha_q  ), //o
    .mod_sub_iqs_payload_4_cha_i    (oAMSpin_5_mod_sub_iqs_payload_4_cha_i  ), //o
    .mod_sub_iqs_payload_4_cha_q    (oAMSpin_5_mod_sub_iqs_payload_4_cha_q  ), //o
    .mod_sub_iqs_payload_5_cha_i    (oAMSpin_5_mod_sub_iqs_payload_5_cha_i  ), //o
    .mod_sub_iqs_payload_5_cha_q    (oAMSpin_5_mod_sub_iqs_payload_5_cha_q  ), //o
    .mod_sub_iqs_payload_6_cha_i    (oAMSpin_5_mod_sub_iqs_payload_6_cha_i  ), //o
    .mod_sub_iqs_payload_6_cha_q    (oAMSpin_5_mod_sub_iqs_payload_6_cha_q  ), //o
    .mod_sub_iqs_payload_7_cha_i    (oAMSpin_5_mod_sub_iqs_payload_7_cha_i  ), //o
    .mod_sub_iqs_payload_7_cha_q    (oAMSpin_5_mod_sub_iqs_payload_7_cha_q  ), //o
    .clk                            (clk                                    ), //i
    .resetn                         (resetn                                 )  //i
  );
  OAMSpin oAMSpin_6 (
    .shift_i_0                      (oAMSpin_6_shift_i_0                    ), //i
    .shift_i_1                      (oAMSpin_6_shift_i_1                    ), //i
    .shift_i_2                      (oAMSpin_6_shift_i_2                    ), //i
    .shift_i_3                      (oAMSpin_6_shift_i_3                    ), //i
    .shift_i_4                      (oAMSpin_6_shift_i_4                    ), //i
    .shift_i_5                      (oAMSpin_6_shift_i_5                    ), //i
    .shift_i_6                      (oAMSpin_6_shift_i_6                    ), //i
    .shift_i_7                      (oAMSpin_6_shift_i_7                    ), //i
    .shift_q_0                      (oAMSpin_6_shift_q_0                    ), //i
    .shift_q_1                      (oAMSpin_6_shift_q_1                    ), //i
    .shift_q_2                      (oAMSpin_6_shift_q_2                    ), //i
    .shift_q_3                      (oAMSpin_6_shift_q_3                    ), //i
    .shift_q_4                      (oAMSpin_6_shift_q_4                    ), //i
    .shift_q_5                      (oAMSpin_6_shift_q_5                    ), //i
    .shift_q_6                      (oAMSpin_6_shift_q_6                    ), //i
    .shift_q_7                      (oAMSpin_6_shift_q_7                    ), //i
    .base_iq_valid                  (base_iq_valid                          ), //i
    .base_iq_payload_cha_i          (base_iq_payload_2_cha_i                ), //i
    .base_iq_payload_cha_q          (base_iq_payload_2_cha_q                ), //i
    .mod_sub_iqs_valid              (oAMSpin_6_mod_sub_iqs_valid            ), //o
    .mod_sub_iqs_payload_0_cha_i    (oAMSpin_6_mod_sub_iqs_payload_0_cha_i  ), //o
    .mod_sub_iqs_payload_0_cha_q    (oAMSpin_6_mod_sub_iqs_payload_0_cha_q  ), //o
    .mod_sub_iqs_payload_1_cha_i    (oAMSpin_6_mod_sub_iqs_payload_1_cha_i  ), //o
    .mod_sub_iqs_payload_1_cha_q    (oAMSpin_6_mod_sub_iqs_payload_1_cha_q  ), //o
    .mod_sub_iqs_payload_2_cha_i    (oAMSpin_6_mod_sub_iqs_payload_2_cha_i  ), //o
    .mod_sub_iqs_payload_2_cha_q    (oAMSpin_6_mod_sub_iqs_payload_2_cha_q  ), //o
    .mod_sub_iqs_payload_3_cha_i    (oAMSpin_6_mod_sub_iqs_payload_3_cha_i  ), //o
    .mod_sub_iqs_payload_3_cha_q    (oAMSpin_6_mod_sub_iqs_payload_3_cha_q  ), //o
    .mod_sub_iqs_payload_4_cha_i    (oAMSpin_6_mod_sub_iqs_payload_4_cha_i  ), //o
    .mod_sub_iqs_payload_4_cha_q    (oAMSpin_6_mod_sub_iqs_payload_4_cha_q  ), //o
    .mod_sub_iqs_payload_5_cha_i    (oAMSpin_6_mod_sub_iqs_payload_5_cha_i  ), //o
    .mod_sub_iqs_payload_5_cha_q    (oAMSpin_6_mod_sub_iqs_payload_5_cha_q  ), //o
    .mod_sub_iqs_payload_6_cha_i    (oAMSpin_6_mod_sub_iqs_payload_6_cha_i  ), //o
    .mod_sub_iqs_payload_6_cha_q    (oAMSpin_6_mod_sub_iqs_payload_6_cha_q  ), //o
    .mod_sub_iqs_payload_7_cha_i    (oAMSpin_6_mod_sub_iqs_payload_7_cha_i  ), //o
    .mod_sub_iqs_payload_7_cha_q    (oAMSpin_6_mod_sub_iqs_payload_7_cha_q  ), //o
    .clk                            (clk                                    ), //i
    .resetn                         (resetn                                 )  //i
  );
  OAMSpin oAMSpin_7 (
    .shift_i_0                      (oAMSpin_7_shift_i_0                    ), //i
    .shift_i_1                      (oAMSpin_7_shift_i_1                    ), //i
    .shift_i_2                      (oAMSpin_7_shift_i_2                    ), //i
    .shift_i_3                      (oAMSpin_7_shift_i_3                    ), //i
    .shift_i_4                      (oAMSpin_7_shift_i_4                    ), //i
    .shift_i_5                      (oAMSpin_7_shift_i_5                    ), //i
    .shift_i_6                      (oAMSpin_7_shift_i_6                    ), //i
    .shift_i_7                      (oAMSpin_7_shift_i_7                    ), //i
    .shift_q_0                      (oAMSpin_7_shift_q_0                    ), //i
    .shift_q_1                      (oAMSpin_7_shift_q_1                    ), //i
    .shift_q_2                      (oAMSpin_7_shift_q_2                    ), //i
    .shift_q_3                      (oAMSpin_7_shift_q_3                    ), //i
    .shift_q_4                      (oAMSpin_7_shift_q_4                    ), //i
    .shift_q_5                      (oAMSpin_7_shift_q_5                    ), //i
    .shift_q_6                      (oAMSpin_7_shift_q_6                    ), //i
    .shift_q_7                      (oAMSpin_7_shift_q_7                    ), //i
    .base_iq_valid                  (base_iq_valid                          ), //i
    .base_iq_payload_cha_i          (base_iq_payload_3_cha_i                ), //i
    .base_iq_payload_cha_q          (base_iq_payload_3_cha_q                ), //i
    .mod_sub_iqs_valid              (oAMSpin_7_mod_sub_iqs_valid            ), //o
    .mod_sub_iqs_payload_0_cha_i    (oAMSpin_7_mod_sub_iqs_payload_0_cha_i  ), //o
    .mod_sub_iqs_payload_0_cha_q    (oAMSpin_7_mod_sub_iqs_payload_0_cha_q  ), //o
    .mod_sub_iqs_payload_1_cha_i    (oAMSpin_7_mod_sub_iqs_payload_1_cha_i  ), //o
    .mod_sub_iqs_payload_1_cha_q    (oAMSpin_7_mod_sub_iqs_payload_1_cha_q  ), //o
    .mod_sub_iqs_payload_2_cha_i    (oAMSpin_7_mod_sub_iqs_payload_2_cha_i  ), //o
    .mod_sub_iqs_payload_2_cha_q    (oAMSpin_7_mod_sub_iqs_payload_2_cha_q  ), //o
    .mod_sub_iqs_payload_3_cha_i    (oAMSpin_7_mod_sub_iqs_payload_3_cha_i  ), //o
    .mod_sub_iqs_payload_3_cha_q    (oAMSpin_7_mod_sub_iqs_payload_3_cha_q  ), //o
    .mod_sub_iqs_payload_4_cha_i    (oAMSpin_7_mod_sub_iqs_payload_4_cha_i  ), //o
    .mod_sub_iqs_payload_4_cha_q    (oAMSpin_7_mod_sub_iqs_payload_4_cha_q  ), //o
    .mod_sub_iqs_payload_5_cha_i    (oAMSpin_7_mod_sub_iqs_payload_5_cha_i  ), //o
    .mod_sub_iqs_payload_5_cha_q    (oAMSpin_7_mod_sub_iqs_payload_5_cha_q  ), //o
    .mod_sub_iqs_payload_6_cha_i    (oAMSpin_7_mod_sub_iqs_payload_6_cha_i  ), //o
    .mod_sub_iqs_payload_6_cha_q    (oAMSpin_7_mod_sub_iqs_payload_6_cha_q  ), //o
    .mod_sub_iqs_payload_7_cha_i    (oAMSpin_7_mod_sub_iqs_payload_7_cha_i  ), //o
    .mod_sub_iqs_payload_7_cha_q    (oAMSpin_7_mod_sub_iqs_payload_7_cha_q  ), //o
    .clk                            (clk                                    ), //i
    .resetn                         (resetn                                 )  //i
  );
  ChaCompose chaCompose_8 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_0                ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_0_cha_i            ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_0_cha_q            ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_8                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_8_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_8_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_16               ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_16_cha_i           ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_16_cha_q           ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_24               ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_24_cha_i           ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_24_cha_q           ), //i
    .mod_iq_valid                   (chaCompose_8_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_8_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_8_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_9 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_1                ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_1_cha_i            ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_1_cha_q            ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_9                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_9_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_9_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_17               ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_17_cha_i           ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_17_cha_q           ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_25               ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_25_cha_i           ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_25_cha_q           ), //i
    .mod_iq_valid                   (chaCompose_9_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_9_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_9_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_10 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_2                 ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_2_cha_i             ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_2_cha_q             ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_10                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_10_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_10_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_18                ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_18_cha_i            ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_18_cha_q            ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_26                ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_26_cha_i            ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_26_cha_q            ), //i
    .mod_iq_valid                   (chaCompose_10_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_10_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_10_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_11 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_3                 ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_3_cha_i             ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_3_cha_q             ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_11                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_11_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_11_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_19                ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_19_cha_i            ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_19_cha_q            ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_27                ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_27_cha_i            ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_27_cha_q            ), //i
    .mod_iq_valid                   (chaCompose_11_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_11_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_11_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_12 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_4                 ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_4_cha_i             ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_4_cha_q             ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_12                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_12_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_12_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_20                ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_20_cha_i            ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_20_cha_q            ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_28                ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_28_cha_i            ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_28_cha_q            ), //i
    .mod_iq_valid                   (chaCompose_12_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_12_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_12_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_13 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_5                 ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_5_cha_i             ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_5_cha_q             ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_13                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_13_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_13_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_21                ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_21_cha_i            ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_21_cha_q            ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_29                ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_29_cha_i            ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_29_cha_q            ), //i
    .mod_iq_valid                   (chaCompose_13_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_13_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_13_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_14 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_6                 ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_6_cha_i             ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_6_cha_q             ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_14                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_14_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_14_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_22                ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_22_cha_i            ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_22_cha_q            ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_30                ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_30_cha_i            ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_30_cha_q            ), //i
    .mod_iq_valid                   (chaCompose_14_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_14_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_14_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_15 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_7                 ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_7_cha_i             ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_7_cha_q             ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_15                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_15_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_15_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_23                ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_23_cha_i            ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_23_cha_q            ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_31                ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_31_cha_i            ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_31_cha_q            ), //i
    .mod_iq_valid                   (chaCompose_15_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_15_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_15_mod_iq_payload_cha_q  )  //o
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(w_en) begin
      if(!w_sel) begin
        _zz_1 = 1'b1;
      end
    end
  end

  always @(*) begin
    _zz_2 = 1'b0;
    if(w_en) begin
      if(w_sel) begin
        _zz_2 = 1'b1;
      end
    end
  end

  assign oAMSpin_4_shift_i_0 = _zz_shift_i_map_port1;
  assign oAMSpin_4_shift_q_0 = _zz_shift_q_map_port1;
  assign mod_sub_iqs_vec_0_cha_i = oAMSpin_4_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_0_cha_q = oAMSpin_4_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_0 = oAMSpin_4_mod_sub_iqs_valid;
  assign oAMSpin_4_shift_i_1 = _zz_shift_i_map_port2;
  assign oAMSpin_4_shift_q_1 = _zz_shift_q_map_port2;
  assign mod_sub_iqs_vec_1_cha_i = oAMSpin_4_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_1_cha_q = oAMSpin_4_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_1 = oAMSpin_4_mod_sub_iqs_valid;
  assign oAMSpin_4_shift_i_2 = _zz_shift_i_map_port3;
  assign oAMSpin_4_shift_q_2 = _zz_shift_q_map_port3;
  assign mod_sub_iqs_vec_2_cha_i = oAMSpin_4_mod_sub_iqs_payload_2_cha_i;
  assign mod_sub_iqs_vec_2_cha_q = oAMSpin_4_mod_sub_iqs_payload_2_cha_q;
  assign mod_sub_valid_vec_2 = oAMSpin_4_mod_sub_iqs_valid;
  assign oAMSpin_4_shift_i_3 = _zz_shift_i_map_port4;
  assign oAMSpin_4_shift_q_3 = _zz_shift_q_map_port4;
  assign mod_sub_iqs_vec_3_cha_i = oAMSpin_4_mod_sub_iqs_payload_3_cha_i;
  assign mod_sub_iqs_vec_3_cha_q = oAMSpin_4_mod_sub_iqs_payload_3_cha_q;
  assign mod_sub_valid_vec_3 = oAMSpin_4_mod_sub_iqs_valid;
  assign oAMSpin_4_shift_i_4 = _zz_shift_i_map_port5;
  assign oAMSpin_4_shift_q_4 = _zz_shift_q_map_port5;
  assign mod_sub_iqs_vec_4_cha_i = oAMSpin_4_mod_sub_iqs_payload_4_cha_i;
  assign mod_sub_iqs_vec_4_cha_q = oAMSpin_4_mod_sub_iqs_payload_4_cha_q;
  assign mod_sub_valid_vec_4 = oAMSpin_4_mod_sub_iqs_valid;
  assign oAMSpin_4_shift_i_5 = _zz_shift_i_map_port6;
  assign oAMSpin_4_shift_q_5 = _zz_shift_q_map_port6;
  assign mod_sub_iqs_vec_5_cha_i = oAMSpin_4_mod_sub_iqs_payload_5_cha_i;
  assign mod_sub_iqs_vec_5_cha_q = oAMSpin_4_mod_sub_iqs_payload_5_cha_q;
  assign mod_sub_valid_vec_5 = oAMSpin_4_mod_sub_iqs_valid;
  assign oAMSpin_4_shift_i_6 = _zz_shift_i_map_port7;
  assign oAMSpin_4_shift_q_6 = _zz_shift_q_map_port7;
  assign mod_sub_iqs_vec_6_cha_i = oAMSpin_4_mod_sub_iqs_payload_6_cha_i;
  assign mod_sub_iqs_vec_6_cha_q = oAMSpin_4_mod_sub_iqs_payload_6_cha_q;
  assign mod_sub_valid_vec_6 = oAMSpin_4_mod_sub_iqs_valid;
  assign oAMSpin_4_shift_i_7 = _zz_shift_i_map_port8;
  assign oAMSpin_4_shift_q_7 = _zz_shift_q_map_port8;
  assign mod_sub_iqs_vec_7_cha_i = oAMSpin_4_mod_sub_iqs_payload_7_cha_i;
  assign mod_sub_iqs_vec_7_cha_q = oAMSpin_4_mod_sub_iqs_payload_7_cha_q;
  assign mod_sub_valid_vec_7 = oAMSpin_4_mod_sub_iqs_valid;
  assign oAMSpin_5_shift_i_0 = _zz_shift_i_map_port9;
  assign oAMSpin_5_shift_q_0 = _zz_shift_q_map_port9;
  assign mod_sub_iqs_vec_8_cha_i = oAMSpin_5_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_8_cha_q = oAMSpin_5_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_8 = oAMSpin_5_mod_sub_iqs_valid;
  assign oAMSpin_5_shift_i_1 = _zz_shift_i_map_port10;
  assign oAMSpin_5_shift_q_1 = _zz_shift_q_map_port10;
  assign mod_sub_iqs_vec_9_cha_i = oAMSpin_5_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_9_cha_q = oAMSpin_5_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_9 = oAMSpin_5_mod_sub_iqs_valid;
  assign oAMSpin_5_shift_i_2 = _zz_shift_i_map_port11;
  assign oAMSpin_5_shift_q_2 = _zz_shift_q_map_port11;
  assign mod_sub_iqs_vec_10_cha_i = oAMSpin_5_mod_sub_iqs_payload_2_cha_i;
  assign mod_sub_iqs_vec_10_cha_q = oAMSpin_5_mod_sub_iqs_payload_2_cha_q;
  assign mod_sub_valid_vec_10 = oAMSpin_5_mod_sub_iqs_valid;
  assign oAMSpin_5_shift_i_3 = _zz_shift_i_map_port12;
  assign oAMSpin_5_shift_q_3 = _zz_shift_q_map_port12;
  assign mod_sub_iqs_vec_11_cha_i = oAMSpin_5_mod_sub_iqs_payload_3_cha_i;
  assign mod_sub_iqs_vec_11_cha_q = oAMSpin_5_mod_sub_iqs_payload_3_cha_q;
  assign mod_sub_valid_vec_11 = oAMSpin_5_mod_sub_iqs_valid;
  assign oAMSpin_5_shift_i_4 = _zz_shift_i_map_port13;
  assign oAMSpin_5_shift_q_4 = _zz_shift_q_map_port13;
  assign mod_sub_iqs_vec_12_cha_i = oAMSpin_5_mod_sub_iqs_payload_4_cha_i;
  assign mod_sub_iqs_vec_12_cha_q = oAMSpin_5_mod_sub_iqs_payload_4_cha_q;
  assign mod_sub_valid_vec_12 = oAMSpin_5_mod_sub_iqs_valid;
  assign oAMSpin_5_shift_i_5 = _zz_shift_i_map_port14;
  assign oAMSpin_5_shift_q_5 = _zz_shift_q_map_port14;
  assign mod_sub_iqs_vec_13_cha_i = oAMSpin_5_mod_sub_iqs_payload_5_cha_i;
  assign mod_sub_iqs_vec_13_cha_q = oAMSpin_5_mod_sub_iqs_payload_5_cha_q;
  assign mod_sub_valid_vec_13 = oAMSpin_5_mod_sub_iqs_valid;
  assign oAMSpin_5_shift_i_6 = _zz_shift_i_map_port15;
  assign oAMSpin_5_shift_q_6 = _zz_shift_q_map_port15;
  assign mod_sub_iqs_vec_14_cha_i = oAMSpin_5_mod_sub_iqs_payload_6_cha_i;
  assign mod_sub_iqs_vec_14_cha_q = oAMSpin_5_mod_sub_iqs_payload_6_cha_q;
  assign mod_sub_valid_vec_14 = oAMSpin_5_mod_sub_iqs_valid;
  assign oAMSpin_5_shift_i_7 = _zz_shift_i_map_port16;
  assign oAMSpin_5_shift_q_7 = _zz_shift_q_map_port16;
  assign mod_sub_iqs_vec_15_cha_i = oAMSpin_5_mod_sub_iqs_payload_7_cha_i;
  assign mod_sub_iqs_vec_15_cha_q = oAMSpin_5_mod_sub_iqs_payload_7_cha_q;
  assign mod_sub_valid_vec_15 = oAMSpin_5_mod_sub_iqs_valid;
  assign oAMSpin_6_shift_i_0 = _zz_shift_i_map_port17;
  assign oAMSpin_6_shift_q_0 = _zz_shift_q_map_port17;
  assign mod_sub_iqs_vec_16_cha_i = oAMSpin_6_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_16_cha_q = oAMSpin_6_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_16 = oAMSpin_6_mod_sub_iqs_valid;
  assign oAMSpin_6_shift_i_1 = _zz_shift_i_map_port18;
  assign oAMSpin_6_shift_q_1 = _zz_shift_q_map_port18;
  assign mod_sub_iqs_vec_17_cha_i = oAMSpin_6_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_17_cha_q = oAMSpin_6_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_17 = oAMSpin_6_mod_sub_iqs_valid;
  assign oAMSpin_6_shift_i_2 = _zz_shift_i_map_port19;
  assign oAMSpin_6_shift_q_2 = _zz_shift_q_map_port19;
  assign mod_sub_iqs_vec_18_cha_i = oAMSpin_6_mod_sub_iqs_payload_2_cha_i;
  assign mod_sub_iqs_vec_18_cha_q = oAMSpin_6_mod_sub_iqs_payload_2_cha_q;
  assign mod_sub_valid_vec_18 = oAMSpin_6_mod_sub_iqs_valid;
  assign oAMSpin_6_shift_i_3 = _zz_shift_i_map_port20;
  assign oAMSpin_6_shift_q_3 = _zz_shift_q_map_port20;
  assign mod_sub_iqs_vec_19_cha_i = oAMSpin_6_mod_sub_iqs_payload_3_cha_i;
  assign mod_sub_iqs_vec_19_cha_q = oAMSpin_6_mod_sub_iqs_payload_3_cha_q;
  assign mod_sub_valid_vec_19 = oAMSpin_6_mod_sub_iqs_valid;
  assign oAMSpin_6_shift_i_4 = _zz_shift_i_map_port21;
  assign oAMSpin_6_shift_q_4 = _zz_shift_q_map_port21;
  assign mod_sub_iqs_vec_20_cha_i = oAMSpin_6_mod_sub_iqs_payload_4_cha_i;
  assign mod_sub_iqs_vec_20_cha_q = oAMSpin_6_mod_sub_iqs_payload_4_cha_q;
  assign mod_sub_valid_vec_20 = oAMSpin_6_mod_sub_iqs_valid;
  assign oAMSpin_6_shift_i_5 = _zz_shift_i_map_port22;
  assign oAMSpin_6_shift_q_5 = _zz_shift_q_map_port22;
  assign mod_sub_iqs_vec_21_cha_i = oAMSpin_6_mod_sub_iqs_payload_5_cha_i;
  assign mod_sub_iqs_vec_21_cha_q = oAMSpin_6_mod_sub_iqs_payload_5_cha_q;
  assign mod_sub_valid_vec_21 = oAMSpin_6_mod_sub_iqs_valid;
  assign oAMSpin_6_shift_i_6 = _zz_shift_i_map_port23;
  assign oAMSpin_6_shift_q_6 = _zz_shift_q_map_port23;
  assign mod_sub_iqs_vec_22_cha_i = oAMSpin_6_mod_sub_iqs_payload_6_cha_i;
  assign mod_sub_iqs_vec_22_cha_q = oAMSpin_6_mod_sub_iqs_payload_6_cha_q;
  assign mod_sub_valid_vec_22 = oAMSpin_6_mod_sub_iqs_valid;
  assign oAMSpin_6_shift_i_7 = _zz_shift_i_map_port24;
  assign oAMSpin_6_shift_q_7 = _zz_shift_q_map_port24;
  assign mod_sub_iqs_vec_23_cha_i = oAMSpin_6_mod_sub_iqs_payload_7_cha_i;
  assign mod_sub_iqs_vec_23_cha_q = oAMSpin_6_mod_sub_iqs_payload_7_cha_q;
  assign mod_sub_valid_vec_23 = oAMSpin_6_mod_sub_iqs_valid;
  assign oAMSpin_7_shift_i_0 = _zz_shift_i_map_port25;
  assign oAMSpin_7_shift_q_0 = _zz_shift_q_map_port25;
  assign mod_sub_iqs_vec_24_cha_i = oAMSpin_7_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_24_cha_q = oAMSpin_7_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_24 = oAMSpin_7_mod_sub_iqs_valid;
  assign oAMSpin_7_shift_i_1 = _zz_shift_i_map_port26;
  assign oAMSpin_7_shift_q_1 = _zz_shift_q_map_port26;
  assign mod_sub_iqs_vec_25_cha_i = oAMSpin_7_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_25_cha_q = oAMSpin_7_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_25 = oAMSpin_7_mod_sub_iqs_valid;
  assign oAMSpin_7_shift_i_2 = _zz_shift_i_map_port27;
  assign oAMSpin_7_shift_q_2 = _zz_shift_q_map_port27;
  assign mod_sub_iqs_vec_26_cha_i = oAMSpin_7_mod_sub_iqs_payload_2_cha_i;
  assign mod_sub_iqs_vec_26_cha_q = oAMSpin_7_mod_sub_iqs_payload_2_cha_q;
  assign mod_sub_valid_vec_26 = oAMSpin_7_mod_sub_iqs_valid;
  assign oAMSpin_7_shift_i_3 = _zz_shift_i_map_port28;
  assign oAMSpin_7_shift_q_3 = _zz_shift_q_map_port28;
  assign mod_sub_iqs_vec_27_cha_i = oAMSpin_7_mod_sub_iqs_payload_3_cha_i;
  assign mod_sub_iqs_vec_27_cha_q = oAMSpin_7_mod_sub_iqs_payload_3_cha_q;
  assign mod_sub_valid_vec_27 = oAMSpin_7_mod_sub_iqs_valid;
  assign oAMSpin_7_shift_i_4 = _zz_shift_i_map_port29;
  assign oAMSpin_7_shift_q_4 = _zz_shift_q_map_port29;
  assign mod_sub_iqs_vec_28_cha_i = oAMSpin_7_mod_sub_iqs_payload_4_cha_i;
  assign mod_sub_iqs_vec_28_cha_q = oAMSpin_7_mod_sub_iqs_payload_4_cha_q;
  assign mod_sub_valid_vec_28 = oAMSpin_7_mod_sub_iqs_valid;
  assign oAMSpin_7_shift_i_5 = _zz_shift_i_map_port30;
  assign oAMSpin_7_shift_q_5 = _zz_shift_q_map_port30;
  assign mod_sub_iqs_vec_29_cha_i = oAMSpin_7_mod_sub_iqs_payload_5_cha_i;
  assign mod_sub_iqs_vec_29_cha_q = oAMSpin_7_mod_sub_iqs_payload_5_cha_q;
  assign mod_sub_valid_vec_29 = oAMSpin_7_mod_sub_iqs_valid;
  assign oAMSpin_7_shift_i_6 = _zz_shift_i_map_port31;
  assign oAMSpin_7_shift_q_6 = _zz_shift_q_map_port31;
  assign mod_sub_iqs_vec_30_cha_i = oAMSpin_7_mod_sub_iqs_payload_6_cha_i;
  assign mod_sub_iqs_vec_30_cha_q = oAMSpin_7_mod_sub_iqs_payload_6_cha_q;
  assign mod_sub_valid_vec_30 = oAMSpin_7_mod_sub_iqs_valid;
  assign oAMSpin_7_shift_i_7 = _zz_shift_i_map_port32;
  assign oAMSpin_7_shift_q_7 = _zz_shift_q_map_port32;
  assign mod_sub_iqs_vec_31_cha_i = oAMSpin_7_mod_sub_iqs_payload_7_cha_i;
  assign mod_sub_iqs_vec_31_cha_q = oAMSpin_7_mod_sub_iqs_payload_7_cha_q;
  assign mod_sub_valid_vec_31 = oAMSpin_7_mod_sub_iqs_valid;
  assign mod_iqs_payload_0_cha_i = chaCompose_8_mod_iq_payload_cha_i;
  assign mod_iqs_payload_0_cha_q = chaCompose_8_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_0 = chaCompose_8_mod_iq_valid;
  assign mod_iqs_payload_1_cha_i = chaCompose_9_mod_iq_payload_cha_i;
  assign mod_iqs_payload_1_cha_q = chaCompose_9_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_1 = chaCompose_9_mod_iq_valid;
  assign mod_iqs_payload_2_cha_i = chaCompose_10_mod_iq_payload_cha_i;
  assign mod_iqs_payload_2_cha_q = chaCompose_10_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_2 = chaCompose_10_mod_iq_valid;
  assign mod_iqs_payload_3_cha_i = chaCompose_11_mod_iq_payload_cha_i;
  assign mod_iqs_payload_3_cha_q = chaCompose_11_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_3 = chaCompose_11_mod_iq_valid;
  assign mod_iqs_payload_4_cha_i = chaCompose_12_mod_iq_payload_cha_i;
  assign mod_iqs_payload_4_cha_q = chaCompose_12_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_4 = chaCompose_12_mod_iq_valid;
  assign mod_iqs_payload_5_cha_i = chaCompose_13_mod_iq_payload_cha_i;
  assign mod_iqs_payload_5_cha_q = chaCompose_13_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_5 = chaCompose_13_mod_iq_valid;
  assign mod_iqs_payload_6_cha_i = chaCompose_14_mod_iq_payload_cha_i;
  assign mod_iqs_payload_6_cha_q = chaCompose_14_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_6 = chaCompose_14_mod_iq_valid;
  assign mod_iqs_payload_7_cha_i = chaCompose_15_mod_iq_payload_cha_i;
  assign mod_iqs_payload_7_cha_q = chaCompose_15_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_7 = chaCompose_15_mod_iq_valid;
  assign mod_iqs_valid = (((((((mod_iq_valid_vec_0 && mod_iq_valid_vec_1) && mod_iq_valid_vec_2) && mod_iq_valid_vec_3) && mod_iq_valid_vec_4) && mod_iq_valid_vec_5) && mod_iq_valid_vec_6) && mod_iq_valid_vec_7);

endmodule

//ChaCompose replaced by ChaCompose

//ChaCompose replaced by ChaCompose

//ChaCompose replaced by ChaCompose

//ChaCompose replaced by ChaCompose

//ChaCompose replaced by ChaCompose

//ChaCompose replaced by ChaCompose

//ChaCompose replaced by ChaCompose

module ChaCompose (
  input               mod_sub_iqs_0_valid,
  input      [31:0]   mod_sub_iqs_0_payload_cha_i,
  input      [31:0]   mod_sub_iqs_0_payload_cha_q,
  input               mod_sub_iqs_1_valid,
  input      [31:0]   mod_sub_iqs_1_payload_cha_i,
  input      [31:0]   mod_sub_iqs_1_payload_cha_q,
  input               mod_sub_iqs_2_valid,
  input      [31:0]   mod_sub_iqs_2_payload_cha_i,
  input      [31:0]   mod_sub_iqs_2_payload_cha_q,
  input               mod_sub_iqs_3_valid,
  input      [31:0]   mod_sub_iqs_3_payload_cha_i,
  input      [31:0]   mod_sub_iqs_3_payload_cha_q,
  output              mod_iq_valid,
  output     [31:0]   mod_iq_payload_cha_i,
  output     [31:0]   mod_iq_payload_cha_q
);
  wire       [29:0]   _zz_sub_i_data_vec_0;
  wire       [29:0]   _zz_sub_q_data_vec_0;
  wire       [29:0]   _zz_sub_i_data_vec_1;
  wire       [29:0]   _zz_sub_q_data_vec_1;
  wire       [29:0]   _zz_sub_i_data_vec_2;
  wire       [29:0]   _zz_sub_q_data_vec_2;
  wire       [29:0]   _zz_sub_i_data_vec_3;
  wire       [29:0]   _zz_sub_q_data_vec_3;
  wire       [31:0]   _zz_mod_iq_payload_cha_i;
  wire       [31:0]   _zz_mod_iq_payload_cha_i_1;
  wire       [31:0]   _zz_mod_iq_payload_cha_q;
  wire       [31:0]   _zz_mod_iq_payload_cha_q_1;
  wire       [31:0]   sub_i_data_vec_0;
  wire       [31:0]   sub_i_data_vec_1;
  wire       [31:0]   sub_i_data_vec_2;
  wire       [31:0]   sub_i_data_vec_3;
  wire       [31:0]   sub_q_data_vec_0;
  wire       [31:0]   sub_q_data_vec_1;
  wire       [31:0]   sub_q_data_vec_2;
  wire       [31:0]   sub_q_data_vec_3;
  wire                sub_iqs_valid_vec_0;
  wire                sub_iqs_valid_vec_1;
  wire                sub_iqs_valid_vec_2;
  wire                sub_iqs_valid_vec_3;

  assign _zz_sub_i_data_vec_0 = (mod_sub_iqs_0_payload_cha_i >>> 2);
  assign _zz_sub_q_data_vec_0 = (mod_sub_iqs_0_payload_cha_q >>> 2);
  assign _zz_sub_i_data_vec_1 = (mod_sub_iqs_1_payload_cha_i >>> 2);
  assign _zz_sub_q_data_vec_1 = (mod_sub_iqs_1_payload_cha_q >>> 2);
  assign _zz_sub_i_data_vec_2 = (mod_sub_iqs_2_payload_cha_i >>> 2);
  assign _zz_sub_q_data_vec_2 = (mod_sub_iqs_2_payload_cha_q >>> 2);
  assign _zz_sub_i_data_vec_3 = (mod_sub_iqs_3_payload_cha_i >>> 2);
  assign _zz_sub_q_data_vec_3 = (mod_sub_iqs_3_payload_cha_q >>> 2);
  assign _zz_mod_iq_payload_cha_i = ($signed(sub_i_data_vec_0) + $signed(sub_i_data_vec_1));
  assign _zz_mod_iq_payload_cha_i_1 = ($signed(sub_i_data_vec_2) + $signed(sub_i_data_vec_3));
  assign _zz_mod_iq_payload_cha_q = ($signed(sub_q_data_vec_0) + $signed(sub_q_data_vec_1));
  assign _zz_mod_iq_payload_cha_q_1 = ($signed(sub_q_data_vec_2) + $signed(sub_q_data_vec_3));
  assign sub_i_data_vec_0 = {{2{_zz_sub_i_data_vec_0[29]}}, _zz_sub_i_data_vec_0};
  assign sub_q_data_vec_0 = {{2{_zz_sub_q_data_vec_0[29]}}, _zz_sub_q_data_vec_0};
  assign sub_iqs_valid_vec_0 = mod_sub_iqs_0_valid;
  assign sub_i_data_vec_1 = {{2{_zz_sub_i_data_vec_1[29]}}, _zz_sub_i_data_vec_1};
  assign sub_q_data_vec_1 = {{2{_zz_sub_q_data_vec_1[29]}}, _zz_sub_q_data_vec_1};
  assign sub_iqs_valid_vec_1 = mod_sub_iqs_1_valid;
  assign sub_i_data_vec_2 = {{2{_zz_sub_i_data_vec_2[29]}}, _zz_sub_i_data_vec_2};
  assign sub_q_data_vec_2 = {{2{_zz_sub_q_data_vec_2[29]}}, _zz_sub_q_data_vec_2};
  assign sub_iqs_valid_vec_2 = mod_sub_iqs_2_valid;
  assign sub_i_data_vec_3 = {{2{_zz_sub_i_data_vec_3[29]}}, _zz_sub_i_data_vec_3};
  assign sub_q_data_vec_3 = {{2{_zz_sub_q_data_vec_3[29]}}, _zz_sub_q_data_vec_3};
  assign sub_iqs_valid_vec_3 = mod_sub_iqs_3_valid;
  assign mod_iq_payload_cha_i = ($signed(_zz_mod_iq_payload_cha_i) + $signed(_zz_mod_iq_payload_cha_i_1));
  assign mod_iq_payload_cha_q = ($signed(_zz_mod_iq_payload_cha_q) + $signed(_zz_mod_iq_payload_cha_q_1));
  assign mod_iq_valid = ((sub_iqs_valid_vec_0 && sub_iqs_valid_vec_1) && (sub_iqs_valid_vec_2 && sub_iqs_valid_vec_3));

endmodule

//OAMSpin replaced by OAMSpin

//OAMSpin replaced by OAMSpin

//OAMSpin replaced by OAMSpin

module OAMSpin (
  input      [15:0]   shift_i_0,
  input      [15:0]   shift_i_1,
  input      [15:0]   shift_i_2,
  input      [15:0]   shift_i_3,
  input      [15:0]   shift_i_4,
  input      [15:0]   shift_i_5,
  input      [15:0]   shift_i_6,
  input      [15:0]   shift_i_7,
  input      [15:0]   shift_q_0,
  input      [15:0]   shift_q_1,
  input      [15:0]   shift_q_2,
  input      [15:0]   shift_q_3,
  input      [15:0]   shift_q_4,
  input      [15:0]   shift_q_5,
  input      [15:0]   shift_q_6,
  input      [15:0]   shift_q_7,
  input               base_iq_valid,
  input      [15:0]   base_iq_payload_cha_i,
  input      [15:0]   base_iq_payload_cha_q,
  output              mod_sub_iqs_valid,
  output     [31:0]   mod_sub_iqs_payload_0_cha_i,
  output     [31:0]   mod_sub_iqs_payload_0_cha_q,
  output     [31:0]   mod_sub_iqs_payload_1_cha_i,
  output     [31:0]   mod_sub_iqs_payload_1_cha_q,
  output     [31:0]   mod_sub_iqs_payload_2_cha_i,
  output     [31:0]   mod_sub_iqs_payload_2_cha_q,
  output     [31:0]   mod_sub_iqs_payload_3_cha_i,
  output     [31:0]   mod_sub_iqs_payload_3_cha_q,
  output     [31:0]   mod_sub_iqs_payload_4_cha_i,
  output     [31:0]   mod_sub_iqs_payload_4_cha_q,
  output     [31:0]   mod_sub_iqs_payload_5_cha_i,
  output     [31:0]   mod_sub_iqs_payload_5_cha_q,
  output     [31:0]   mod_sub_iqs_payload_6_cha_i,
  output     [31:0]   mod_sub_iqs_payload_6_cha_q,
  output     [31:0]   mod_sub_iqs_payload_7_cha_i,
  output     [31:0]   mod_sub_iqs_payload_7_cha_q,
  input               clk,
  input               resetn
);
  wire       [31:0]   _zz_mod_iqs_vec_0_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_0_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_0_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_0_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_1_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_1_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_1_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_1_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_2_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_2_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_2_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_2_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_3_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_3_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_3_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_3_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_4_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_4_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_4_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_4_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_5_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_5_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_5_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_5_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_6_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_6_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_6_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_6_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_7_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_7_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_7_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_7_cha_q_1;
  reg        [15:0]   base_iq_buf_cha_i;
  reg        [15:0]   base_iq_buf_cha_q;
  reg                 base_valid_buf;
  reg        [31:0]   mod_iqs_vec_0_cha_i;
  reg        [31:0]   mod_iqs_vec_0_cha_q;
  reg        [31:0]   mod_iqs_vec_1_cha_i;
  reg        [31:0]   mod_iqs_vec_1_cha_q;
  reg        [31:0]   mod_iqs_vec_2_cha_i;
  reg        [31:0]   mod_iqs_vec_2_cha_q;
  reg        [31:0]   mod_iqs_vec_3_cha_i;
  reg        [31:0]   mod_iqs_vec_3_cha_q;
  reg        [31:0]   mod_iqs_vec_4_cha_i;
  reg        [31:0]   mod_iqs_vec_4_cha_q;
  reg        [31:0]   mod_iqs_vec_5_cha_i;
  reg        [31:0]   mod_iqs_vec_5_cha_q;
  reg        [31:0]   mod_iqs_vec_6_cha_i;
  reg        [31:0]   mod_iqs_vec_6_cha_q;
  reg        [31:0]   mod_iqs_vec_7_cha_i;
  reg        [31:0]   mod_iqs_vec_7_cha_q;
  reg                 mod_iqs_valid;

  assign _zz_mod_iqs_vec_0_cha_i = ($signed(shift_i_0) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_0_cha_i_1 = ($signed(shift_q_0) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_0_cha_q = ($signed(shift_q_0) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_0_cha_q_1 = ($signed(shift_i_0) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_1_cha_i = ($signed(shift_i_1) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_1_cha_i_1 = ($signed(shift_q_1) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_1_cha_q = ($signed(shift_q_1) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_1_cha_q_1 = ($signed(shift_i_1) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_2_cha_i = ($signed(shift_i_2) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_2_cha_i_1 = ($signed(shift_q_2) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_2_cha_q = ($signed(shift_q_2) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_2_cha_q_1 = ($signed(shift_i_2) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_3_cha_i = ($signed(shift_i_3) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_3_cha_i_1 = ($signed(shift_q_3) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_3_cha_q = ($signed(shift_q_3) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_3_cha_q_1 = ($signed(shift_i_3) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_4_cha_i = ($signed(shift_i_4) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_4_cha_i_1 = ($signed(shift_q_4) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_4_cha_q = ($signed(shift_q_4) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_4_cha_q_1 = ($signed(shift_i_4) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_5_cha_i = ($signed(shift_i_5) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_5_cha_i_1 = ($signed(shift_q_5) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_5_cha_q = ($signed(shift_q_5) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_5_cha_q_1 = ($signed(shift_i_5) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_6_cha_i = ($signed(shift_i_6) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_6_cha_i_1 = ($signed(shift_q_6) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_6_cha_q = ($signed(shift_q_6) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_6_cha_q_1 = ($signed(shift_i_6) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_7_cha_i = ($signed(shift_i_7) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_7_cha_i_1 = ($signed(shift_q_7) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_7_cha_q = ($signed(shift_q_7) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_7_cha_q_1 = ($signed(shift_i_7) * $signed(base_iq_buf_cha_q));
  assign mod_sub_iqs_payload_0_cha_i = mod_iqs_vec_0_cha_i;
  assign mod_sub_iqs_payload_0_cha_q = mod_iqs_vec_0_cha_q;
  assign mod_sub_iqs_payload_1_cha_i = mod_iqs_vec_1_cha_i;
  assign mod_sub_iqs_payload_1_cha_q = mod_iqs_vec_1_cha_q;
  assign mod_sub_iqs_payload_2_cha_i = mod_iqs_vec_2_cha_i;
  assign mod_sub_iqs_payload_2_cha_q = mod_iqs_vec_2_cha_q;
  assign mod_sub_iqs_payload_3_cha_i = mod_iqs_vec_3_cha_i;
  assign mod_sub_iqs_payload_3_cha_q = mod_iqs_vec_3_cha_q;
  assign mod_sub_iqs_payload_4_cha_i = mod_iqs_vec_4_cha_i;
  assign mod_sub_iqs_payload_4_cha_q = mod_iqs_vec_4_cha_q;
  assign mod_sub_iqs_payload_5_cha_i = mod_iqs_vec_5_cha_i;
  assign mod_sub_iqs_payload_5_cha_q = mod_iqs_vec_5_cha_q;
  assign mod_sub_iqs_payload_6_cha_i = mod_iqs_vec_6_cha_i;
  assign mod_sub_iqs_payload_6_cha_q = mod_iqs_vec_6_cha_q;
  assign mod_sub_iqs_payload_7_cha_i = mod_iqs_vec_7_cha_i;
  assign mod_sub_iqs_payload_7_cha_q = mod_iqs_vec_7_cha_q;
  assign mod_sub_iqs_valid = mod_iqs_valid;
  always @(posedge clk) begin
    base_iq_buf_cha_i <= base_iq_payload_cha_i;
    base_iq_buf_cha_q <= base_iq_payload_cha_q;
    if(base_valid_buf) begin
      mod_iqs_vec_0_cha_i <= ($signed(_zz_mod_iqs_vec_0_cha_i) - $signed(_zz_mod_iqs_vec_0_cha_i_1));
      mod_iqs_vec_0_cha_q <= ($signed(_zz_mod_iqs_vec_0_cha_q) + $signed(_zz_mod_iqs_vec_0_cha_q_1));
      mod_iqs_vec_1_cha_i <= ($signed(_zz_mod_iqs_vec_1_cha_i) - $signed(_zz_mod_iqs_vec_1_cha_i_1));
      mod_iqs_vec_1_cha_q <= ($signed(_zz_mod_iqs_vec_1_cha_q) + $signed(_zz_mod_iqs_vec_1_cha_q_1));
      mod_iqs_vec_2_cha_i <= ($signed(_zz_mod_iqs_vec_2_cha_i) - $signed(_zz_mod_iqs_vec_2_cha_i_1));
      mod_iqs_vec_2_cha_q <= ($signed(_zz_mod_iqs_vec_2_cha_q) + $signed(_zz_mod_iqs_vec_2_cha_q_1));
      mod_iqs_vec_3_cha_i <= ($signed(_zz_mod_iqs_vec_3_cha_i) - $signed(_zz_mod_iqs_vec_3_cha_i_1));
      mod_iqs_vec_3_cha_q <= ($signed(_zz_mod_iqs_vec_3_cha_q) + $signed(_zz_mod_iqs_vec_3_cha_q_1));
      mod_iqs_vec_4_cha_i <= ($signed(_zz_mod_iqs_vec_4_cha_i) - $signed(_zz_mod_iqs_vec_4_cha_i_1));
      mod_iqs_vec_4_cha_q <= ($signed(_zz_mod_iqs_vec_4_cha_q) + $signed(_zz_mod_iqs_vec_4_cha_q_1));
      mod_iqs_vec_5_cha_i <= ($signed(_zz_mod_iqs_vec_5_cha_i) - $signed(_zz_mod_iqs_vec_5_cha_i_1));
      mod_iqs_vec_5_cha_q <= ($signed(_zz_mod_iqs_vec_5_cha_q) + $signed(_zz_mod_iqs_vec_5_cha_q_1));
      mod_iqs_vec_6_cha_i <= ($signed(_zz_mod_iqs_vec_6_cha_i) - $signed(_zz_mod_iqs_vec_6_cha_i_1));
      mod_iqs_vec_6_cha_q <= ($signed(_zz_mod_iqs_vec_6_cha_q) + $signed(_zz_mod_iqs_vec_6_cha_q_1));
      mod_iqs_vec_7_cha_i <= ($signed(_zz_mod_iqs_vec_7_cha_i) - $signed(_zz_mod_iqs_vec_7_cha_i_1));
      mod_iqs_vec_7_cha_q <= ($signed(_zz_mod_iqs_vec_7_cha_q) + $signed(_zz_mod_iqs_vec_7_cha_q_1));
    end else begin
      mod_iqs_vec_0_cha_i <= 32'h0;
      mod_iqs_vec_0_cha_q <= 32'h0;
      mod_iqs_vec_1_cha_i <= 32'h0;
      mod_iqs_vec_1_cha_q <= 32'h0;
      mod_iqs_vec_2_cha_i <= 32'h0;
      mod_iqs_vec_2_cha_q <= 32'h0;
      mod_iqs_vec_3_cha_i <= 32'h0;
      mod_iqs_vec_3_cha_q <= 32'h0;
      mod_iqs_vec_4_cha_i <= 32'h0;
      mod_iqs_vec_4_cha_q <= 32'h0;
      mod_iqs_vec_5_cha_i <= 32'h0;
      mod_iqs_vec_5_cha_q <= 32'h0;
      mod_iqs_vec_6_cha_i <= 32'h0;
      mod_iqs_vec_6_cha_q <= 32'h0;
      mod_iqs_vec_7_cha_i <= 32'h0;
      mod_iqs_vec_7_cha_q <= 32'h0;
    end
  end

  always @(posedge clk) begin
    if(!resetn) begin
      base_valid_buf <= 1'b0;
      mod_iqs_valid <= 1'b0;
    end else begin
      base_valid_buf <= base_iq_valid;
      if(base_valid_buf) begin
        mod_iqs_valid <= 1'b1;
      end else begin
        mod_iqs_valid <= 1'b0;
      end
    end
  end


endmodule
