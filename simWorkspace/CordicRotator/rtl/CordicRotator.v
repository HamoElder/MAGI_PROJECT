// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : CordicRotator
// Git hash  : c25aef4ce126c6f2485d3659049da526d3e7b24f



module CordicRotator (
  input               rotate_mode,
  input      [1:0]    x_u,
  input               w_en,
  input      [7:0]    w_addr,
  input      [31:0]   w_data,
  input               raw_data_valid,
  output              raw_data_ready,
  input      [31:0]   raw_data_payload_x,
  input      [31:0]   raw_data_payload_y,
  input      [31:0]   raw_data_payload_z,
  output              result_valid,
  output     [31:0]   result_payload_x,
  output     [31:0]   result_payload_y,
  output     [31:0]   result_payload_z,
  input               clk,
  input               reset
);
  wire       [3:0]    _zz__zz_1;
  wire       [31:0]   _zz__zz_result_payload_x_1;
  wire       [31:0]   _zz__zz_result_payload_x_1_1;
  wire       [31:0]   _zz__zz_result_payload_x_1_2;
  wire       [31:0]   _zz__zz_result_payload_x_1_3;
  wire       [31:0]   _zz__zz_result_payload_x_17;
  wire       [31:0]   _zz__zz_result_payload_x_17_1;
  wire       [31:0]   _zz__zz_result_payload_x_32;
  wire       [31:0]   _zz__zz_result_payload_x_32_1;
  wire       [31:0]   _zz__zz_result_payload_x_2;
  wire       [31:0]   _zz__zz_result_payload_x_2_1;
  wire       [31:0]   _zz__zz_result_payload_x_2_2;
  wire       [31:0]   _zz__zz_result_payload_x_2_3;
  wire       [31:0]   _zz__zz_result_payload_x_18;
  wire       [31:0]   _zz__zz_result_payload_x_18_1;
  wire       [31:0]   _zz__zz_result_payload_x_33;
  wire       [31:0]   _zz__zz_result_payload_x_33_1;
  wire       [31:0]   _zz__zz_result_payload_x_3;
  wire       [31:0]   _zz__zz_result_payload_x_3_1;
  wire       [31:0]   _zz__zz_result_payload_x_3_2;
  wire       [31:0]   _zz__zz_result_payload_x_3_3;
  wire       [31:0]   _zz__zz_result_payload_x_19;
  wire       [31:0]   _zz__zz_result_payload_x_19_1;
  wire       [31:0]   _zz__zz_result_payload_x_34;
  wire       [31:0]   _zz__zz_result_payload_x_34_1;
  wire       [31:0]   _zz__zz_result_payload_x_4;
  wire       [31:0]   _zz__zz_result_payload_x_4_1;
  wire       [31:0]   _zz__zz_result_payload_x_4_2;
  wire       [31:0]   _zz__zz_result_payload_x_4_3;
  wire       [31:0]   _zz__zz_result_payload_x_20;
  wire       [31:0]   _zz__zz_result_payload_x_20_1;
  wire       [31:0]   _zz__zz_result_payload_x_35;
  wire       [31:0]   _zz__zz_result_payload_x_35_1;
  wire       [31:0]   _zz__zz_result_payload_x_5;
  wire       [31:0]   _zz__zz_result_payload_x_5_1;
  wire       [31:0]   _zz__zz_result_payload_x_5_2;
  wire       [31:0]   _zz__zz_result_payload_x_5_3;
  wire       [31:0]   _zz__zz_result_payload_x_21;
  wire       [31:0]   _zz__zz_result_payload_x_21_1;
  wire       [31:0]   _zz__zz_result_payload_x_36;
  wire       [31:0]   _zz__zz_result_payload_x_36_1;
  wire       [31:0]   _zz__zz_result_payload_x_6;
  wire       [31:0]   _zz__zz_result_payload_x_6_1;
  wire       [31:0]   _zz__zz_result_payload_x_6_2;
  wire       [31:0]   _zz__zz_result_payload_x_6_3;
  wire       [31:0]   _zz__zz_result_payload_x_22;
  wire       [31:0]   _zz__zz_result_payload_x_22_1;
  wire       [31:0]   _zz__zz_result_payload_x_37;
  wire       [31:0]   _zz__zz_result_payload_x_37_1;
  wire       [31:0]   _zz__zz_result_payload_x_7;
  wire       [31:0]   _zz__zz_result_payload_x_7_1;
  wire       [31:0]   _zz__zz_result_payload_x_7_2;
  wire       [31:0]   _zz__zz_result_payload_x_7_3;
  wire       [31:0]   _zz__zz_result_payload_x_23;
  wire       [31:0]   _zz__zz_result_payload_x_23_1;
  wire       [31:0]   _zz__zz_result_payload_x_38;
  wire       [31:0]   _zz__zz_result_payload_x_38_1;
  wire       [31:0]   _zz__zz_result_payload_x_8;
  wire       [31:0]   _zz__zz_result_payload_x_8_1;
  wire       [31:0]   _zz__zz_result_payload_x_8_2;
  wire       [31:0]   _zz__zz_result_payload_x_8_3;
  wire       [31:0]   _zz__zz_result_payload_x_24;
  wire       [31:0]   _zz__zz_result_payload_x_24_1;
  wire       [31:0]   _zz__zz_result_payload_x_39;
  wire       [31:0]   _zz__zz_result_payload_x_39_1;
  wire       [31:0]   _zz__zz_result_payload_x_9;
  wire       [31:0]   _zz__zz_result_payload_x_9_1;
  wire       [31:0]   _zz__zz_result_payload_x_9_2;
  wire       [31:0]   _zz__zz_result_payload_x_9_3;
  wire       [31:0]   _zz__zz_result_payload_x_25;
  wire       [31:0]   _zz__zz_result_payload_x_25_1;
  wire       [31:0]   _zz__zz_result_payload_x_40;
  wire       [31:0]   _zz__zz_result_payload_x_40_1;
  wire       [31:0]   _zz__zz_result_payload_x_10;
  wire       [31:0]   _zz__zz_result_payload_x_10_1;
  wire       [31:0]   _zz__zz_result_payload_x_10_2;
  wire       [31:0]   _zz__zz_result_payload_x_10_3;
  wire       [31:0]   _zz__zz_result_payload_x_26;
  wire       [31:0]   _zz__zz_result_payload_x_26_1;
  wire       [31:0]   _zz__zz_result_payload_x_41;
  wire       [31:0]   _zz__zz_result_payload_x_41_1;
  wire       [31:0]   _zz__zz_result_payload_x_11;
  wire       [31:0]   _zz__zz_result_payload_x_11_1;
  wire       [31:0]   _zz__zz_result_payload_x_11_2;
  wire       [31:0]   _zz__zz_result_payload_x_11_3;
  wire       [31:0]   _zz__zz_result_payload_x_27;
  wire       [31:0]   _zz__zz_result_payload_x_27_1;
  wire       [31:0]   _zz__zz_result_payload_x_42;
  wire       [31:0]   _zz__zz_result_payload_x_42_1;
  wire       [31:0]   _zz__zz_result_payload_x_12;
  wire       [31:0]   _zz__zz_result_payload_x_12_1;
  wire       [31:0]   _zz__zz_result_payload_x_12_2;
  wire       [31:0]   _zz__zz_result_payload_x_12_3;
  wire       [31:0]   _zz__zz_result_payload_x_28;
  wire       [31:0]   _zz__zz_result_payload_x_28_1;
  wire       [31:0]   _zz__zz_result_payload_x_43;
  wire       [31:0]   _zz__zz_result_payload_x_43_1;
  wire       [31:0]   _zz__zz_result_payload_x_13;
  wire       [31:0]   _zz__zz_result_payload_x_13_1;
  wire       [31:0]   _zz__zz_result_payload_x_13_2;
  wire       [31:0]   _zz__zz_result_payload_x_13_3;
  wire       [31:0]   _zz__zz_result_payload_x_29;
  wire       [31:0]   _zz__zz_result_payload_x_29_1;
  wire       [31:0]   _zz__zz_result_payload_x_44;
  wire       [31:0]   _zz__zz_result_payload_x_44_1;
  wire       [31:0]   _zz__zz_result_payload_x_14;
  wire       [31:0]   _zz__zz_result_payload_x_14_1;
  wire       [31:0]   _zz__zz_result_payload_x_14_2;
  wire       [31:0]   _zz__zz_result_payload_x_14_3;
  wire       [31:0]   _zz__zz_result_payload_x_30;
  wire       [31:0]   _zz__zz_result_payload_x_30_1;
  wire       [31:0]   _zz__zz_result_payload_x_45;
  wire       [31:0]   _zz__zz_result_payload_x_45_1;
  wire       [31:0]   _zz__zz_result_payload_x_15;
  wire       [31:0]   _zz__zz_result_payload_x_15_1;
  wire       [31:0]   _zz__zz_result_payload_x_15_2;
  wire       [31:0]   _zz__zz_result_payload_x_15_3;
  wire       [31:0]   _zz__zz_result_payload_y;
  wire       [31:0]   _zz__zz_result_payload_y_1;
  wire       [31:0]   _zz__zz_result_payload_z;
  wire       [31:0]   _zz__zz_result_payload_z_1;
  reg        [31:0]   _zz_result_payload_x;
  reg        [31:0]   _zz_result_payload_x_1;
  reg        [31:0]   _zz_result_payload_x_2;
  reg        [31:0]   _zz_result_payload_x_3;
  reg        [31:0]   _zz_result_payload_x_4;
  reg        [31:0]   _zz_result_payload_x_5;
  reg        [31:0]   _zz_result_payload_x_6;
  reg        [31:0]   _zz_result_payload_x_7;
  reg        [31:0]   _zz_result_payload_x_8;
  reg        [31:0]   _zz_result_payload_x_9;
  reg        [31:0]   _zz_result_payload_x_10;
  reg        [31:0]   _zz_result_payload_x_11;
  reg        [31:0]   _zz_result_payload_x_12;
  reg        [31:0]   _zz_result_payload_x_13;
  reg        [31:0]   _zz_result_payload_x_14;
  reg        [31:0]   _zz_result_payload_x_15;
  reg        [31:0]   _zz_result_payload_x_16;
  reg        [31:0]   _zz_result_payload_x_17;
  reg        [31:0]   _zz_result_payload_x_18;
  reg        [31:0]   _zz_result_payload_x_19;
  reg        [31:0]   _zz_result_payload_x_20;
  reg        [31:0]   _zz_result_payload_x_21;
  reg        [31:0]   _zz_result_payload_x_22;
  reg        [31:0]   _zz_result_payload_x_23;
  reg        [31:0]   _zz_result_payload_x_24;
  reg        [31:0]   _zz_result_payload_x_25;
  reg        [31:0]   _zz_result_payload_x_26;
  reg        [31:0]   _zz_result_payload_x_27;
  reg        [31:0]   _zz_result_payload_x_28;
  reg        [31:0]   _zz_result_payload_x_29;
  reg        [31:0]   _zz_result_payload_x_30;
  reg        [31:0]   _zz_result_payload_y;
  reg        [31:0]   _zz_result_payload_x_31;
  reg        [31:0]   _zz_result_payload_x_32;
  reg        [31:0]   _zz_result_payload_x_33;
  reg        [31:0]   _zz_result_payload_x_34;
  reg        [31:0]   _zz_result_payload_x_35;
  reg        [31:0]   _zz_result_payload_x_36;
  reg        [31:0]   _zz_result_payload_x_37;
  reg        [31:0]   _zz_result_payload_x_38;
  reg        [31:0]   _zz_result_payload_x_39;
  reg        [31:0]   _zz_result_payload_x_40;
  reg        [31:0]   _zz_result_payload_x_41;
  reg        [31:0]   _zz_result_payload_x_42;
  reg        [31:0]   _zz_result_payload_x_43;
  reg        [31:0]   _zz_result_payload_x_44;
  reg        [31:0]   _zz_result_payload_x_45;
  reg        [31:0]   _zz_result_payload_z;
  reg                 _zz_result_valid;
  reg                 _zz_result_valid_1;
  reg                 _zz_result_valid_2;
  reg                 _zz_result_valid_3;
  reg                 _zz_result_valid_4;
  reg                 _zz_result_valid_5;
  reg                 _zz_result_valid_6;
  reg                 _zz_result_valid_7;
  reg                 _zz_result_valid_8;
  reg                 _zz_result_valid_9;
  reg                 _zz_result_valid_10;
  reg                 _zz_result_valid_11;
  reg                 _zz_result_valid_12;
  reg                 _zz_result_valid_13;
  reg                 _zz_result_valid_14;
  reg                 _zz_result_valid_15;
  reg                 _zz_result_payload_x_46;
  reg                 _zz_result_payload_x_47;
  reg                 _zz_result_payload_x_48;
  reg                 _zz_result_payload_x_49;
  reg                 _zz_result_payload_x_50;
  reg                 _zz_result_payload_x_51;
  reg                 _zz_result_payload_x_52;
  reg                 _zz_result_payload_x_53;
  reg                 _zz_result_payload_x_54;
  reg                 _zz_result_payload_x_55;
  reg                 _zz_result_payload_x_56;
  reg                 _zz_result_payload_x_57;
  reg                 _zz_result_payload_x_58;
  reg                 _zz_result_payload_x_59;
  reg                 _zz_result_payload_x_60;
  reg        [31:0]   _zz_result_payload_x_61;
  reg        [31:0]   _zz_result_payload_x_62;
  reg        [31:0]   _zz_result_payload_x_63;
  reg        [31:0]   _zz_result_payload_x_64;
  reg        [31:0]   _zz_result_payload_x_65;
  reg        [31:0]   _zz_result_payload_x_66;
  reg        [31:0]   _zz_result_payload_x_67;
  reg        [31:0]   _zz_result_payload_x_68;
  reg        [31:0]   _zz_result_payload_x_69;
  reg        [31:0]   _zz_result_payload_x_70;
  reg        [31:0]   _zz_result_payload_x_71;
  reg        [31:0]   _zz_result_payload_x_72;
  reg        [31:0]   _zz_result_payload_x_73;
  reg        [31:0]   _zz_result_payload_x_74;
  reg        [31:0]   _zz_result_payload_z_1;
  wire       [15:0]   _zz_1;
  wire       [31:0]   _zz_result_payload_x_75;
  wire                raw_data_fire;
  wire                _zz_result_payload_x_76;
  wire       [31:0]   _zz_result_payload_x_77;
  wire       [31:0]   _zz_result_payload_x_78;
  wire                _zz_result_payload_x_79;
  wire       [31:0]   _zz_result_payload_x_80;
  wire       [31:0]   _zz_result_payload_x_81;
  wire                _zz_result_payload_x_82;
  wire       [31:0]   _zz_result_payload_x_83;
  wire       [31:0]   _zz_result_payload_x_84;
  wire                _zz_result_payload_x_85;
  wire       [31:0]   _zz_result_payload_x_86;
  wire       [31:0]   _zz_result_payload_x_87;
  wire                _zz_result_payload_x_88;
  wire       [31:0]   _zz_result_payload_x_89;
  wire       [31:0]   _zz_result_payload_x_90;
  wire                _zz_result_payload_x_91;
  wire       [31:0]   _zz_result_payload_x_92;
  wire       [31:0]   _zz_result_payload_x_93;
  wire                _zz_result_payload_x_94;
  wire       [31:0]   _zz_result_payload_x_95;
  wire       [31:0]   _zz_result_payload_x_96;
  wire                _zz_result_payload_x_97;
  wire       [31:0]   _zz_result_payload_x_98;
  wire       [31:0]   _zz_result_payload_x_99;
  wire                _zz_result_payload_x_100;
  wire       [31:0]   _zz_result_payload_x_101;
  wire       [31:0]   _zz_result_payload_x_102;
  wire                _zz_result_payload_x_103;
  wire       [31:0]   _zz_result_payload_x_104;
  wire       [31:0]   _zz_result_payload_x_105;
  wire                _zz_result_payload_x_106;
  wire       [31:0]   _zz_result_payload_x_107;
  wire       [31:0]   _zz_result_payload_x_108;
  wire                _zz_result_payload_x_109;
  wire       [31:0]   _zz_result_payload_x_110;
  wire       [31:0]   _zz_result_payload_x_111;
  wire                _zz_result_payload_x_112;
  wire       [31:0]   _zz_result_payload_x_113;
  wire       [31:0]   _zz_result_payload_x_114;
  wire                _zz_result_payload_x_115;
  wire       [31:0]   _zz_result_payload_x_116;
  wire       [31:0]   _zz_result_payload_x_117;
  wire                _zz_result_payload_x_118;
  wire       [31:0]   _zz_result_payload_y_1;
  wire       [31:0]   _zz_result_payload_x_119;

  assign _zz__zz_1 = w_addr[3:0];
  assign _zz__zz_result_payload_x_1 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_1_1 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_1_2 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_1_3 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_17 = ($signed(_zz_result_payload_x_16) + $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_17_1 = ($signed(_zz_result_payload_x_16) - $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_32 = ($signed(_zz_result_payload_x_31) - $signed(_zz_result_payload_x_61));
  assign _zz__zz_result_payload_x_32_1 = ($signed(_zz_result_payload_x_31) + $signed(_zz_result_payload_x_61));
  assign _zz__zz_result_payload_x_2 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_2_1 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_2_2 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_2_3 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_18 = ($signed(_zz_result_payload_x_17) + $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_18_1 = ($signed(_zz_result_payload_x_17) - $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_33 = ($signed(_zz_result_payload_x_32) - $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_33_1 = ($signed(_zz_result_payload_x_32) + $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_3_1 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_3_2 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_3_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_19 = ($signed(_zz_result_payload_x_18) + $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_19_1 = ($signed(_zz_result_payload_x_18) - $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_34 = ($signed(_zz_result_payload_x_33) - $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_34_1 = ($signed(_zz_result_payload_x_33) + $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_4 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_87));
  assign _zz__zz_result_payload_x_4_1 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_87));
  assign _zz__zz_result_payload_x_4_2 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_87));
  assign _zz__zz_result_payload_x_4_3 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_87));
  assign _zz__zz_result_payload_x_20 = ($signed(_zz_result_payload_x_19) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_20_1 = ($signed(_zz_result_payload_x_19) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_35 = ($signed(_zz_result_payload_x_34) - $signed(_zz_result_payload_x_64));
  assign _zz__zz_result_payload_x_35_1 = ($signed(_zz_result_payload_x_34) + $signed(_zz_result_payload_x_64));
  assign _zz__zz_result_payload_x_5 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_90));
  assign _zz__zz_result_payload_x_5_1 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_90));
  assign _zz__zz_result_payload_x_5_2 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_90));
  assign _zz__zz_result_payload_x_5_3 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_90));
  assign _zz__zz_result_payload_x_21 = ($signed(_zz_result_payload_x_20) + $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_21_1 = ($signed(_zz_result_payload_x_20) - $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_36 = ($signed(_zz_result_payload_x_35) - $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_36_1 = ($signed(_zz_result_payload_x_35) + $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_6 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_93));
  assign _zz__zz_result_payload_x_6_1 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_93));
  assign _zz__zz_result_payload_x_6_2 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_93));
  assign _zz__zz_result_payload_x_6_3 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_93));
  assign _zz__zz_result_payload_x_22 = ($signed(_zz_result_payload_x_21) + $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_22_1 = ($signed(_zz_result_payload_x_21) - $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_37 = ($signed(_zz_result_payload_x_36) - $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_37_1 = ($signed(_zz_result_payload_x_36) + $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_7 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_96));
  assign _zz__zz_result_payload_x_7_1 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_96));
  assign _zz__zz_result_payload_x_7_2 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_96));
  assign _zz__zz_result_payload_x_7_3 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_96));
  assign _zz__zz_result_payload_x_23 = ($signed(_zz_result_payload_x_22) + $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_23_1 = ($signed(_zz_result_payload_x_22) - $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_38 = ($signed(_zz_result_payload_x_37) - $signed(_zz_result_payload_x_67));
  assign _zz__zz_result_payload_x_38_1 = ($signed(_zz_result_payload_x_37) + $signed(_zz_result_payload_x_67));
  assign _zz__zz_result_payload_x_8 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_99));
  assign _zz__zz_result_payload_x_8_1 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_99));
  assign _zz__zz_result_payload_x_8_2 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_99));
  assign _zz__zz_result_payload_x_8_3 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_99));
  assign _zz__zz_result_payload_x_24 = ($signed(_zz_result_payload_x_23) + $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_24_1 = ($signed(_zz_result_payload_x_23) - $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_39 = ($signed(_zz_result_payload_x_38) - $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_39_1 = ($signed(_zz_result_payload_x_38) + $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_9 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_102));
  assign _zz__zz_result_payload_x_9_1 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_102));
  assign _zz__zz_result_payload_x_9_2 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_102));
  assign _zz__zz_result_payload_x_9_3 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_102));
  assign _zz__zz_result_payload_x_25 = ($signed(_zz_result_payload_x_24) + $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_25_1 = ($signed(_zz_result_payload_x_24) - $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_40 = ($signed(_zz_result_payload_x_39) - $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_40_1 = ($signed(_zz_result_payload_x_39) + $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_10 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_105));
  assign _zz__zz_result_payload_x_10_1 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_105));
  assign _zz__zz_result_payload_x_10_2 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_105));
  assign _zz__zz_result_payload_x_10_3 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_105));
  assign _zz__zz_result_payload_x_26 = ($signed(_zz_result_payload_x_25) + $signed(_zz_result_payload_x_104));
  assign _zz__zz_result_payload_x_26_1 = ($signed(_zz_result_payload_x_25) - $signed(_zz_result_payload_x_104));
  assign _zz__zz_result_payload_x_41 = ($signed(_zz_result_payload_x_40) - $signed(_zz_result_payload_x_70));
  assign _zz__zz_result_payload_x_41_1 = ($signed(_zz_result_payload_x_40) + $signed(_zz_result_payload_x_70));
  assign _zz__zz_result_payload_x_11 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_108));
  assign _zz__zz_result_payload_x_11_1 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_108));
  assign _zz__zz_result_payload_x_11_2 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_108));
  assign _zz__zz_result_payload_x_11_3 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_108));
  assign _zz__zz_result_payload_x_27 = ($signed(_zz_result_payload_x_26) + $signed(_zz_result_payload_x_107));
  assign _zz__zz_result_payload_x_27_1 = ($signed(_zz_result_payload_x_26) - $signed(_zz_result_payload_x_107));
  assign _zz__zz_result_payload_x_42 = ($signed(_zz_result_payload_x_41) - $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_42_1 = ($signed(_zz_result_payload_x_41) + $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_12 = ($signed(_zz_result_payload_x_11) - $signed(_zz_result_payload_x_111));
  assign _zz__zz_result_payload_x_12_1 = ($signed(_zz_result_payload_x_11) + $signed(_zz_result_payload_x_111));
  assign _zz__zz_result_payload_x_12_2 = ($signed(_zz_result_payload_x_11) + $signed(_zz_result_payload_x_111));
  assign _zz__zz_result_payload_x_12_3 = ($signed(_zz_result_payload_x_11) - $signed(_zz_result_payload_x_111));
  assign _zz__zz_result_payload_x_28 = ($signed(_zz_result_payload_x_27) + $signed(_zz_result_payload_x_110));
  assign _zz__zz_result_payload_x_28_1 = ($signed(_zz_result_payload_x_27) - $signed(_zz_result_payload_x_110));
  assign _zz__zz_result_payload_x_43 = ($signed(_zz_result_payload_x_42) - $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_43_1 = ($signed(_zz_result_payload_x_42) + $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_13 = ($signed(_zz_result_payload_x_12) - $signed(_zz_result_payload_x_114));
  assign _zz__zz_result_payload_x_13_1 = ($signed(_zz_result_payload_x_12) + $signed(_zz_result_payload_x_114));
  assign _zz__zz_result_payload_x_13_2 = ($signed(_zz_result_payload_x_12) + $signed(_zz_result_payload_x_114));
  assign _zz__zz_result_payload_x_13_3 = ($signed(_zz_result_payload_x_12) - $signed(_zz_result_payload_x_114));
  assign _zz__zz_result_payload_x_29 = ($signed(_zz_result_payload_x_28) + $signed(_zz_result_payload_x_113));
  assign _zz__zz_result_payload_x_29_1 = ($signed(_zz_result_payload_x_28) - $signed(_zz_result_payload_x_113));
  assign _zz__zz_result_payload_x_44 = ($signed(_zz_result_payload_x_43) - $signed(_zz_result_payload_x_73));
  assign _zz__zz_result_payload_x_44_1 = ($signed(_zz_result_payload_x_43) + $signed(_zz_result_payload_x_73));
  assign _zz__zz_result_payload_x_14 = ($signed(_zz_result_payload_x_13) - $signed(_zz_result_payload_x_117));
  assign _zz__zz_result_payload_x_14_1 = ($signed(_zz_result_payload_x_13) + $signed(_zz_result_payload_x_117));
  assign _zz__zz_result_payload_x_14_2 = ($signed(_zz_result_payload_x_13) + $signed(_zz_result_payload_x_117));
  assign _zz__zz_result_payload_x_14_3 = ($signed(_zz_result_payload_x_13) - $signed(_zz_result_payload_x_117));
  assign _zz__zz_result_payload_x_30 = ($signed(_zz_result_payload_x_29) + $signed(_zz_result_payload_x_116));
  assign _zz__zz_result_payload_x_30_1 = ($signed(_zz_result_payload_x_29) - $signed(_zz_result_payload_x_116));
  assign _zz__zz_result_payload_x_45 = ($signed(_zz_result_payload_x_44) - $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_45_1 = ($signed(_zz_result_payload_x_44) + $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_15 = ($signed(_zz_result_payload_x_14) - $signed(_zz_result_payload_x_119));
  assign _zz__zz_result_payload_x_15_1 = ($signed(_zz_result_payload_x_14) + $signed(_zz_result_payload_x_119));
  assign _zz__zz_result_payload_x_15_2 = ($signed(_zz_result_payload_x_14) + $signed(_zz_result_payload_x_119));
  assign _zz__zz_result_payload_x_15_3 = ($signed(_zz_result_payload_x_14) - $signed(_zz_result_payload_x_119));
  assign _zz__zz_result_payload_y = ($signed(_zz_result_payload_x_30) + $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_y_1 = ($signed(_zz_result_payload_x_30) - $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_z = ($signed(_zz_result_payload_x_45) - $signed(_zz_result_payload_z_1));
  assign _zz__zz_result_payload_z_1 = ($signed(_zz_result_payload_x_45) + $signed(_zz_result_payload_z_1));
  assign _zz_1 = ({15'd0,1'b1} <<< _zz__zz_1);
  assign _zz_result_payload_x_75 = w_data;
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign _zz_result_payload_x_76 = (_zz_result_payload_x_46 ? (! _zz_result_payload_x_31[31]) : _zz_result_payload_x_16[31]);
  assign _zz_result_payload_x_77 = ($signed(_zz_result_payload_x) >>> 0);
  assign _zz_result_payload_x_78 = ($signed(_zz_result_payload_x_16) >>> 0);
  assign _zz_result_payload_x_79 = (_zz_result_payload_x_47 ? (! _zz_result_payload_x_32[31]) : _zz_result_payload_x_17[31]);
  assign _zz_result_payload_x_80 = ($signed(_zz_result_payload_x_1) >>> 1);
  assign _zz_result_payload_x_81 = ($signed(_zz_result_payload_x_17) >>> 1);
  assign _zz_result_payload_x_82 = (_zz_result_payload_x_48 ? (! _zz_result_payload_x_33[31]) : _zz_result_payload_x_18[31]);
  assign _zz_result_payload_x_83 = ($signed(_zz_result_payload_x_2) >>> 2);
  assign _zz_result_payload_x_84 = ($signed(_zz_result_payload_x_18) >>> 2);
  assign _zz_result_payload_x_85 = (_zz_result_payload_x_49 ? (! _zz_result_payload_x_34[31]) : _zz_result_payload_x_19[31]);
  assign _zz_result_payload_x_86 = ($signed(_zz_result_payload_x_3) >>> 3);
  assign _zz_result_payload_x_87 = ($signed(_zz_result_payload_x_19) >>> 3);
  assign _zz_result_payload_x_88 = (_zz_result_payload_x_50 ? (! _zz_result_payload_x_35[31]) : _zz_result_payload_x_20[31]);
  assign _zz_result_payload_x_89 = ($signed(_zz_result_payload_x_4) >>> 4);
  assign _zz_result_payload_x_90 = ($signed(_zz_result_payload_x_20) >>> 4);
  assign _zz_result_payload_x_91 = (_zz_result_payload_x_51 ? (! _zz_result_payload_x_36[31]) : _zz_result_payload_x_21[31]);
  assign _zz_result_payload_x_92 = ($signed(_zz_result_payload_x_5) >>> 5);
  assign _zz_result_payload_x_93 = ($signed(_zz_result_payload_x_21) >>> 5);
  assign _zz_result_payload_x_94 = (_zz_result_payload_x_52 ? (! _zz_result_payload_x_37[31]) : _zz_result_payload_x_22[31]);
  assign _zz_result_payload_x_95 = ($signed(_zz_result_payload_x_6) >>> 6);
  assign _zz_result_payload_x_96 = ($signed(_zz_result_payload_x_22) >>> 6);
  assign _zz_result_payload_x_97 = (_zz_result_payload_x_53 ? (! _zz_result_payload_x_38[31]) : _zz_result_payload_x_23[31]);
  assign _zz_result_payload_x_98 = ($signed(_zz_result_payload_x_7) >>> 7);
  assign _zz_result_payload_x_99 = ($signed(_zz_result_payload_x_23) >>> 7);
  assign _zz_result_payload_x_100 = (_zz_result_payload_x_54 ? (! _zz_result_payload_x_39[31]) : _zz_result_payload_x_24[31]);
  assign _zz_result_payload_x_101 = ($signed(_zz_result_payload_x_8) >>> 8);
  assign _zz_result_payload_x_102 = ($signed(_zz_result_payload_x_24) >>> 8);
  assign _zz_result_payload_x_103 = (_zz_result_payload_x_55 ? (! _zz_result_payload_x_40[31]) : _zz_result_payload_x_25[31]);
  assign _zz_result_payload_x_104 = ($signed(_zz_result_payload_x_9) >>> 9);
  assign _zz_result_payload_x_105 = ($signed(_zz_result_payload_x_25) >>> 9);
  assign _zz_result_payload_x_106 = (_zz_result_payload_x_56 ? (! _zz_result_payload_x_41[31]) : _zz_result_payload_x_26[31]);
  assign _zz_result_payload_x_107 = ($signed(_zz_result_payload_x_10) >>> 10);
  assign _zz_result_payload_x_108 = ($signed(_zz_result_payload_x_26) >>> 10);
  assign _zz_result_payload_x_109 = (_zz_result_payload_x_57 ? (! _zz_result_payload_x_42[31]) : _zz_result_payload_x_27[31]);
  assign _zz_result_payload_x_110 = ($signed(_zz_result_payload_x_11) >>> 11);
  assign _zz_result_payload_x_111 = ($signed(_zz_result_payload_x_27) >>> 11);
  assign _zz_result_payload_x_112 = (_zz_result_payload_x_58 ? (! _zz_result_payload_x_43[31]) : _zz_result_payload_x_28[31]);
  assign _zz_result_payload_x_113 = ($signed(_zz_result_payload_x_12) >>> 12);
  assign _zz_result_payload_x_114 = ($signed(_zz_result_payload_x_28) >>> 12);
  assign _zz_result_payload_x_115 = (_zz_result_payload_x_59 ? (! _zz_result_payload_x_44[31]) : _zz_result_payload_x_29[31]);
  assign _zz_result_payload_x_116 = ($signed(_zz_result_payload_x_13) >>> 13);
  assign _zz_result_payload_x_117 = ($signed(_zz_result_payload_x_29) >>> 13);
  assign _zz_result_payload_x_118 = (_zz_result_payload_x_60 ? (! _zz_result_payload_x_45[31]) : _zz_result_payload_x_30[31]);
  assign _zz_result_payload_y_1 = ($signed(_zz_result_payload_x_14) >>> 14);
  assign _zz_result_payload_x_119 = ($signed(_zz_result_payload_x_30) >>> 14);
  assign result_valid = _zz_result_valid_15;
  assign result_payload_x = _zz_result_payload_x_15;
  assign result_payload_y = _zz_result_payload_y;
  assign result_payload_z = _zz_result_payload_z;
  assign raw_data_ready = 1'b1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_result_valid <= 1'b0;
      _zz_result_valid_1 <= 1'b0;
      _zz_result_valid_2 <= 1'b0;
      _zz_result_valid_3 <= 1'b0;
      _zz_result_valid_4 <= 1'b0;
      _zz_result_valid_5 <= 1'b0;
      _zz_result_valid_6 <= 1'b0;
      _zz_result_valid_7 <= 1'b0;
      _zz_result_valid_8 <= 1'b0;
      _zz_result_valid_9 <= 1'b0;
      _zz_result_valid_10 <= 1'b0;
      _zz_result_valid_11 <= 1'b0;
      _zz_result_valid_12 <= 1'b0;
      _zz_result_valid_13 <= 1'b0;
      _zz_result_valid_14 <= 1'b0;
      _zz_result_valid_15 <= 1'b0;
    end else begin
      if(raw_data_fire) begin
        _zz_result_valid <= 1'b1;
      end else begin
        _zz_result_valid <= 1'b0;
      end
      _zz_result_valid_1 <= _zz_result_valid;
      _zz_result_valid_2 <= _zz_result_valid_1;
      _zz_result_valid_3 <= _zz_result_valid_2;
      _zz_result_valid_4 <= _zz_result_valid_3;
      _zz_result_valid_5 <= _zz_result_valid_4;
      _zz_result_valid_6 <= _zz_result_valid_5;
      _zz_result_valid_7 <= _zz_result_valid_6;
      _zz_result_valid_8 <= _zz_result_valid_7;
      _zz_result_valid_9 <= _zz_result_valid_8;
      _zz_result_valid_10 <= _zz_result_valid_9;
      _zz_result_valid_11 <= _zz_result_valid_10;
      _zz_result_valid_12 <= _zz_result_valid_11;
      _zz_result_valid_13 <= _zz_result_valid_12;
      _zz_result_valid_14 <= _zz_result_valid_13;
      _zz_result_valid_15 <= _zz_result_valid_14;
    end
  end

  always @(posedge clk) begin
    if(w_en) begin
      if(_zz_1[0]) begin
        _zz_result_payload_x_61 <= _zz_result_payload_x_75;
      end
      if(_zz_1[1]) begin
        _zz_result_payload_x_62 <= _zz_result_payload_x_75;
      end
      if(_zz_1[2]) begin
        _zz_result_payload_x_63 <= _zz_result_payload_x_75;
      end
      if(_zz_1[3]) begin
        _zz_result_payload_x_64 <= _zz_result_payload_x_75;
      end
      if(_zz_1[4]) begin
        _zz_result_payload_x_65 <= _zz_result_payload_x_75;
      end
      if(_zz_1[5]) begin
        _zz_result_payload_x_66 <= _zz_result_payload_x_75;
      end
      if(_zz_1[6]) begin
        _zz_result_payload_x_67 <= _zz_result_payload_x_75;
      end
      if(_zz_1[7]) begin
        _zz_result_payload_x_68 <= _zz_result_payload_x_75;
      end
      if(_zz_1[8]) begin
        _zz_result_payload_x_69 <= _zz_result_payload_x_75;
      end
      if(_zz_1[9]) begin
        _zz_result_payload_x_70 <= _zz_result_payload_x_75;
      end
      if(_zz_1[10]) begin
        _zz_result_payload_x_71 <= _zz_result_payload_x_75;
      end
      if(_zz_1[11]) begin
        _zz_result_payload_x_72 <= _zz_result_payload_x_75;
      end
      if(_zz_1[12]) begin
        _zz_result_payload_x_73 <= _zz_result_payload_x_75;
      end
      if(_zz_1[13]) begin
        _zz_result_payload_x_74 <= _zz_result_payload_x_75;
      end
      if(_zz_1[14]) begin
        _zz_result_payload_z_1 <= _zz_result_payload_x_75;
      end
    end
    if(raw_data_fire) begin
      _zz_result_payload_x <= raw_data_payload_x;
      _zz_result_payload_x_16 <= raw_data_payload_y;
      _zz_result_payload_x_31 <= raw_data_payload_z;
      _zz_result_payload_x_46 <= rotate_mode;
    end
    if(_zz_result_valid) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_1 : _zz__zz_result_payload_x_1_1);
        end
        2'b10 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_1_2 : _zz__zz_result_payload_x_1_3);
        end
        default : begin
          _zz_result_payload_x_1 <= _zz_result_payload_x;
        end
      endcase
      _zz_result_payload_x_17 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_17 : _zz__zz_result_payload_x_17_1);
      _zz_result_payload_x_32 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_32 : _zz__zz_result_payload_x_32_1);
    end
    _zz_result_payload_x_47 <= _zz_result_payload_x_46;
    if(_zz_result_valid_1) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_2 : _zz__zz_result_payload_x_2_1);
        end
        2'b10 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_2_2 : _zz__zz_result_payload_x_2_3);
        end
        default : begin
          _zz_result_payload_x_2 <= _zz_result_payload_x_1;
        end
      endcase
      _zz_result_payload_x_18 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_18 : _zz__zz_result_payload_x_18_1);
      _zz_result_payload_x_33 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_33 : _zz__zz_result_payload_x_33_1);
    end
    _zz_result_payload_x_48 <= _zz_result_payload_x_47;
    if(_zz_result_valid_2) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_3 : _zz__zz_result_payload_x_3_1);
        end
        2'b10 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_3_2 : _zz__zz_result_payload_x_3_3);
        end
        default : begin
          _zz_result_payload_x_3 <= _zz_result_payload_x_2;
        end
      endcase
      _zz_result_payload_x_19 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_19 : _zz__zz_result_payload_x_19_1);
      _zz_result_payload_x_34 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_34 : _zz__zz_result_payload_x_34_1);
    end
    _zz_result_payload_x_49 <= _zz_result_payload_x_48;
    if(_zz_result_valid_3) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_x_4 : _zz__zz_result_payload_x_4_1);
        end
        2'b10 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_x_4_2 : _zz__zz_result_payload_x_4_3);
        end
        default : begin
          _zz_result_payload_x_4 <= _zz_result_payload_x_3;
        end
      endcase
      _zz_result_payload_x_20 <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_x_20 : _zz__zz_result_payload_x_20_1);
      _zz_result_payload_x_35 <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_x_35 : _zz__zz_result_payload_x_35_1);
    end
    _zz_result_payload_x_50 <= _zz_result_payload_x_49;
    if(_zz_result_valid_4) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_88 ? _zz__zz_result_payload_x_5 : _zz__zz_result_payload_x_5_1);
        end
        2'b10 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_88 ? _zz__zz_result_payload_x_5_2 : _zz__zz_result_payload_x_5_3);
        end
        default : begin
          _zz_result_payload_x_5 <= _zz_result_payload_x_4;
        end
      endcase
      _zz_result_payload_x_21 <= (_zz_result_payload_x_88 ? _zz__zz_result_payload_x_21 : _zz__zz_result_payload_x_21_1);
      _zz_result_payload_x_36 <= (_zz_result_payload_x_88 ? _zz__zz_result_payload_x_36 : _zz__zz_result_payload_x_36_1);
    end
    _zz_result_payload_x_51 <= _zz_result_payload_x_50;
    if(_zz_result_valid_5) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_91 ? _zz__zz_result_payload_x_6 : _zz__zz_result_payload_x_6_1);
        end
        2'b10 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_91 ? _zz__zz_result_payload_x_6_2 : _zz__zz_result_payload_x_6_3);
        end
        default : begin
          _zz_result_payload_x_6 <= _zz_result_payload_x_5;
        end
      endcase
      _zz_result_payload_x_22 <= (_zz_result_payload_x_91 ? _zz__zz_result_payload_x_22 : _zz__zz_result_payload_x_22_1);
      _zz_result_payload_x_37 <= (_zz_result_payload_x_91 ? _zz__zz_result_payload_x_37 : _zz__zz_result_payload_x_37_1);
    end
    _zz_result_payload_x_52 <= _zz_result_payload_x_51;
    if(_zz_result_valid_6) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_94 ? _zz__zz_result_payload_x_7 : _zz__zz_result_payload_x_7_1);
        end
        2'b10 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_94 ? _zz__zz_result_payload_x_7_2 : _zz__zz_result_payload_x_7_3);
        end
        default : begin
          _zz_result_payload_x_7 <= _zz_result_payload_x_6;
        end
      endcase
      _zz_result_payload_x_23 <= (_zz_result_payload_x_94 ? _zz__zz_result_payload_x_23 : _zz__zz_result_payload_x_23_1);
      _zz_result_payload_x_38 <= (_zz_result_payload_x_94 ? _zz__zz_result_payload_x_38 : _zz__zz_result_payload_x_38_1);
    end
    _zz_result_payload_x_53 <= _zz_result_payload_x_52;
    if(_zz_result_valid_7) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_97 ? _zz__zz_result_payload_x_8 : _zz__zz_result_payload_x_8_1);
        end
        2'b10 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_97 ? _zz__zz_result_payload_x_8_2 : _zz__zz_result_payload_x_8_3);
        end
        default : begin
          _zz_result_payload_x_8 <= _zz_result_payload_x_7;
        end
      endcase
      _zz_result_payload_x_24 <= (_zz_result_payload_x_97 ? _zz__zz_result_payload_x_24 : _zz__zz_result_payload_x_24_1);
      _zz_result_payload_x_39 <= (_zz_result_payload_x_97 ? _zz__zz_result_payload_x_39 : _zz__zz_result_payload_x_39_1);
    end
    _zz_result_payload_x_54 <= _zz_result_payload_x_53;
    if(_zz_result_valid_8) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_100 ? _zz__zz_result_payload_x_9 : _zz__zz_result_payload_x_9_1);
        end
        2'b10 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_100 ? _zz__zz_result_payload_x_9_2 : _zz__zz_result_payload_x_9_3);
        end
        default : begin
          _zz_result_payload_x_9 <= _zz_result_payload_x_8;
        end
      endcase
      _zz_result_payload_x_25 <= (_zz_result_payload_x_100 ? _zz__zz_result_payload_x_25 : _zz__zz_result_payload_x_25_1);
      _zz_result_payload_x_40 <= (_zz_result_payload_x_100 ? _zz__zz_result_payload_x_40 : _zz__zz_result_payload_x_40_1);
    end
    _zz_result_payload_x_55 <= _zz_result_payload_x_54;
    if(_zz_result_valid_9) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_103 ? _zz__zz_result_payload_x_10 : _zz__zz_result_payload_x_10_1);
        end
        2'b10 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_103 ? _zz__zz_result_payload_x_10_2 : _zz__zz_result_payload_x_10_3);
        end
        default : begin
          _zz_result_payload_x_10 <= _zz_result_payload_x_9;
        end
      endcase
      _zz_result_payload_x_26 <= (_zz_result_payload_x_103 ? _zz__zz_result_payload_x_26 : _zz__zz_result_payload_x_26_1);
      _zz_result_payload_x_41 <= (_zz_result_payload_x_103 ? _zz__zz_result_payload_x_41 : _zz__zz_result_payload_x_41_1);
    end
    _zz_result_payload_x_56 <= _zz_result_payload_x_55;
    if(_zz_result_valid_10) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_106 ? _zz__zz_result_payload_x_11 : _zz__zz_result_payload_x_11_1);
        end
        2'b10 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_106 ? _zz__zz_result_payload_x_11_2 : _zz__zz_result_payload_x_11_3);
        end
        default : begin
          _zz_result_payload_x_11 <= _zz_result_payload_x_10;
        end
      endcase
      _zz_result_payload_x_27 <= (_zz_result_payload_x_106 ? _zz__zz_result_payload_x_27 : _zz__zz_result_payload_x_27_1);
      _zz_result_payload_x_42 <= (_zz_result_payload_x_106 ? _zz__zz_result_payload_x_42 : _zz__zz_result_payload_x_42_1);
    end
    _zz_result_payload_x_57 <= _zz_result_payload_x_56;
    if(_zz_result_valid_11) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_12 <= (_zz_result_payload_x_109 ? _zz__zz_result_payload_x_12 : _zz__zz_result_payload_x_12_1);
        end
        2'b10 : begin
          _zz_result_payload_x_12 <= (_zz_result_payload_x_109 ? _zz__zz_result_payload_x_12_2 : _zz__zz_result_payload_x_12_3);
        end
        default : begin
          _zz_result_payload_x_12 <= _zz_result_payload_x_11;
        end
      endcase
      _zz_result_payload_x_28 <= (_zz_result_payload_x_109 ? _zz__zz_result_payload_x_28 : _zz__zz_result_payload_x_28_1);
      _zz_result_payload_x_43 <= (_zz_result_payload_x_109 ? _zz__zz_result_payload_x_43 : _zz__zz_result_payload_x_43_1);
    end
    _zz_result_payload_x_58 <= _zz_result_payload_x_57;
    if(_zz_result_valid_12) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_13 <= (_zz_result_payload_x_112 ? _zz__zz_result_payload_x_13 : _zz__zz_result_payload_x_13_1);
        end
        2'b10 : begin
          _zz_result_payload_x_13 <= (_zz_result_payload_x_112 ? _zz__zz_result_payload_x_13_2 : _zz__zz_result_payload_x_13_3);
        end
        default : begin
          _zz_result_payload_x_13 <= _zz_result_payload_x_12;
        end
      endcase
      _zz_result_payload_x_29 <= (_zz_result_payload_x_112 ? _zz__zz_result_payload_x_29 : _zz__zz_result_payload_x_29_1);
      _zz_result_payload_x_44 <= (_zz_result_payload_x_112 ? _zz__zz_result_payload_x_44 : _zz__zz_result_payload_x_44_1);
    end
    _zz_result_payload_x_59 <= _zz_result_payload_x_58;
    if(_zz_result_valid_13) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_14 <= (_zz_result_payload_x_115 ? _zz__zz_result_payload_x_14 : _zz__zz_result_payload_x_14_1);
        end
        2'b10 : begin
          _zz_result_payload_x_14 <= (_zz_result_payload_x_115 ? _zz__zz_result_payload_x_14_2 : _zz__zz_result_payload_x_14_3);
        end
        default : begin
          _zz_result_payload_x_14 <= _zz_result_payload_x_13;
        end
      endcase
      _zz_result_payload_x_30 <= (_zz_result_payload_x_115 ? _zz__zz_result_payload_x_30 : _zz__zz_result_payload_x_30_1);
      _zz_result_payload_x_45 <= (_zz_result_payload_x_115 ? _zz__zz_result_payload_x_45 : _zz__zz_result_payload_x_45_1);
    end
    _zz_result_payload_x_60 <= _zz_result_payload_x_59;
    if(_zz_result_valid_14) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_15 <= (_zz_result_payload_x_118 ? _zz__zz_result_payload_x_15 : _zz__zz_result_payload_x_15_1);
        end
        2'b10 : begin
          _zz_result_payload_x_15 <= (_zz_result_payload_x_118 ? _zz__zz_result_payload_x_15_2 : _zz__zz_result_payload_x_15_3);
        end
        default : begin
          _zz_result_payload_x_15 <= _zz_result_payload_x_14;
        end
      endcase
      _zz_result_payload_y <= (_zz_result_payload_x_118 ? _zz__zz_result_payload_y : _zz__zz_result_payload_y_1);
      _zz_result_payload_z <= (_zz_result_payload_x_118 ? _zz__zz_result_payload_z : _zz__zz_result_payload_z_1);
    end
  end


endmodule
