// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : BitonicSorter
// Git hash  : 3719e1498550fcb5698cad1a7a1f3542c14ddf12



module BitonicSorter (
  input               raw_data_valid,
  input      [7:0]    raw_data_payload_0,
  input      [7:0]    raw_data_payload_1,
  input      [7:0]    raw_data_payload_2,
  input      [7:0]    raw_data_payload_3,
  input      [7:0]    raw_data_payload_4,
  input      [7:0]    raw_data_payload_5,
  input      [7:0]    raw_data_payload_6,
  input      [7:0]    raw_data_payload_7,
  input      [7:0]    raw_data_payload_8,
  input      [7:0]    raw_data_payload_9,
  input      [7:0]    raw_data_payload_10,
  input      [7:0]    raw_data_payload_11,
  input      [7:0]    raw_data_payload_12,
  input      [7:0]    raw_data_payload_13,
  input      [7:0]    raw_data_payload_14,
  input      [7:0]    raw_data_payload_15,
  input               ascending_order,
  output              sorted_data_valid,
  output     [7:0]    sorted_data_payload_0_data,
  output     [7:0]    sorted_data_payload_1_data,
  output     [7:0]    sorted_data_payload_2_data,
  output     [7:0]    sorted_data_payload_3_data,
  output     [7:0]    sorted_data_payload_4_data,
  output     [7:0]    sorted_data_payload_5_data,
  output     [7:0]    sorted_data_payload_6_data,
  output     [7:0]    sorted_data_payload_7_data,
  output     [7:0]    sorted_data_payload_8_data,
  output     [7:0]    sorted_data_payload_9_data,
  output     [7:0]    sorted_data_payload_10_data,
  output     [7:0]    sorted_data_payload_11_data,
  output     [7:0]    sorted_data_payload_12_data,
  output     [7:0]    sorted_data_payload_13_data,
  output     [7:0]    sorted_data_payload_14_data,
  output     [7:0]    sorted_data_payload_15_data,
  input               clk,
  input               reset
);
  wire       [7:0]    cmpUnit_80_out1_data;
  wire       [7:0]    cmpUnit_80_out2_data;
  wire       [7:0]    cmpUnit_81_out1_data;
  wire       [7:0]    cmpUnit_81_out2_data;
  wire       [7:0]    cmpUnit_82_out1_data;
  wire       [7:0]    cmpUnit_82_out2_data;
  wire       [7:0]    cmpUnit_83_out1_data;
  wire       [7:0]    cmpUnit_83_out2_data;
  wire       [7:0]    cmpUnit_84_out1_data;
  wire       [7:0]    cmpUnit_84_out2_data;
  wire       [7:0]    cmpUnit_85_out1_data;
  wire       [7:0]    cmpUnit_85_out2_data;
  wire       [7:0]    cmpUnit_86_out1_data;
  wire       [7:0]    cmpUnit_86_out2_data;
  wire       [7:0]    cmpUnit_87_out1_data;
  wire       [7:0]    cmpUnit_87_out2_data;
  wire       [7:0]    cmpUnit_88_out1_data;
  wire       [7:0]    cmpUnit_88_out2_data;
  wire       [7:0]    cmpUnit_89_out1_data;
  wire       [7:0]    cmpUnit_89_out2_data;
  wire       [7:0]    cmpUnit_90_out1_data;
  wire       [7:0]    cmpUnit_90_out2_data;
  wire       [7:0]    cmpUnit_91_out1_data;
  wire       [7:0]    cmpUnit_91_out2_data;
  wire       [7:0]    cmpUnit_92_out1_data;
  wire       [7:0]    cmpUnit_92_out2_data;
  wire       [7:0]    cmpUnit_93_out1_data;
  wire       [7:0]    cmpUnit_93_out2_data;
  wire       [7:0]    cmpUnit_94_out1_data;
  wire       [7:0]    cmpUnit_94_out2_data;
  wire       [7:0]    cmpUnit_95_out1_data;
  wire       [7:0]    cmpUnit_95_out2_data;
  wire       [7:0]    cmpUnit_96_out1_data;
  wire       [7:0]    cmpUnit_96_out2_data;
  wire       [7:0]    cmpUnit_97_out1_data;
  wire       [7:0]    cmpUnit_97_out2_data;
  wire       [7:0]    cmpUnit_98_out1_data;
  wire       [7:0]    cmpUnit_98_out2_data;
  wire       [7:0]    cmpUnit_99_out1_data;
  wire       [7:0]    cmpUnit_99_out2_data;
  wire       [7:0]    cmpUnit_100_out1_data;
  wire       [7:0]    cmpUnit_100_out2_data;
  wire       [7:0]    cmpUnit_101_out1_data;
  wire       [7:0]    cmpUnit_101_out2_data;
  wire       [7:0]    cmpUnit_102_out1_data;
  wire       [7:0]    cmpUnit_102_out2_data;
  wire       [7:0]    cmpUnit_103_out1_data;
  wire       [7:0]    cmpUnit_103_out2_data;
  wire       [7:0]    cmpUnit_104_out1_data;
  wire       [7:0]    cmpUnit_104_out2_data;
  wire       [7:0]    cmpUnit_105_out1_data;
  wire       [7:0]    cmpUnit_105_out2_data;
  wire       [7:0]    cmpUnit_106_out1_data;
  wire       [7:0]    cmpUnit_106_out2_data;
  wire       [7:0]    cmpUnit_107_out1_data;
  wire       [7:0]    cmpUnit_107_out2_data;
  wire       [7:0]    cmpUnit_108_out1_data;
  wire       [7:0]    cmpUnit_108_out2_data;
  wire       [7:0]    cmpUnit_109_out1_data;
  wire       [7:0]    cmpUnit_109_out2_data;
  wire       [7:0]    cmpUnit_110_out1_data;
  wire       [7:0]    cmpUnit_110_out2_data;
  wire       [7:0]    cmpUnit_111_out1_data;
  wire       [7:0]    cmpUnit_111_out2_data;
  wire       [7:0]    cmpUnit_112_out1_data;
  wire       [7:0]    cmpUnit_112_out2_data;
  wire       [7:0]    cmpUnit_113_out1_data;
  wire       [7:0]    cmpUnit_113_out2_data;
  wire       [7:0]    cmpUnit_114_out1_data;
  wire       [7:0]    cmpUnit_114_out2_data;
  wire       [7:0]    cmpUnit_115_out1_data;
  wire       [7:0]    cmpUnit_115_out2_data;
  wire       [7:0]    cmpUnit_116_out1_data;
  wire       [7:0]    cmpUnit_116_out2_data;
  wire       [7:0]    cmpUnit_117_out1_data;
  wire       [7:0]    cmpUnit_117_out2_data;
  wire       [7:0]    cmpUnit_118_out1_data;
  wire       [7:0]    cmpUnit_118_out2_data;
  wire       [7:0]    cmpUnit_119_out1_data;
  wire       [7:0]    cmpUnit_119_out2_data;
  wire       [7:0]    cmpUnit_120_out1_data;
  wire       [7:0]    cmpUnit_120_out2_data;
  wire       [7:0]    cmpUnit_121_out1_data;
  wire       [7:0]    cmpUnit_121_out2_data;
  wire       [7:0]    cmpUnit_122_out1_data;
  wire       [7:0]    cmpUnit_122_out2_data;
  wire       [7:0]    cmpUnit_123_out1_data;
  wire       [7:0]    cmpUnit_123_out2_data;
  wire       [7:0]    cmpUnit_124_out1_data;
  wire       [7:0]    cmpUnit_124_out2_data;
  wire       [7:0]    cmpUnit_125_out1_data;
  wire       [7:0]    cmpUnit_125_out2_data;
  wire       [7:0]    cmpUnit_126_out1_data;
  wire       [7:0]    cmpUnit_126_out2_data;
  wire       [7:0]    cmpUnit_127_out1_data;
  wire       [7:0]    cmpUnit_127_out2_data;
  wire       [7:0]    cmpUnit_128_out1_data;
  wire       [7:0]    cmpUnit_128_out2_data;
  wire       [7:0]    cmpUnit_129_out1_data;
  wire       [7:0]    cmpUnit_129_out2_data;
  wire       [7:0]    cmpUnit_130_out1_data;
  wire       [7:0]    cmpUnit_130_out2_data;
  wire       [7:0]    cmpUnit_131_out1_data;
  wire       [7:0]    cmpUnit_131_out2_data;
  wire       [7:0]    cmpUnit_132_out1_data;
  wire       [7:0]    cmpUnit_132_out2_data;
  wire       [7:0]    cmpUnit_133_out1_data;
  wire       [7:0]    cmpUnit_133_out2_data;
  wire       [7:0]    cmpUnit_134_out1_data;
  wire       [7:0]    cmpUnit_134_out2_data;
  wire       [7:0]    cmpUnit_135_out1_data;
  wire       [7:0]    cmpUnit_135_out2_data;
  wire       [7:0]    cmpUnit_136_out1_data;
  wire       [7:0]    cmpUnit_136_out2_data;
  wire       [7:0]    cmpUnit_137_out1_data;
  wire       [7:0]    cmpUnit_137_out2_data;
  wire       [7:0]    cmpUnit_138_out1_data;
  wire       [7:0]    cmpUnit_138_out2_data;
  wire       [7:0]    cmpUnit_139_out1_data;
  wire       [7:0]    cmpUnit_139_out2_data;
  wire       [7:0]    cmpUnit_140_out1_data;
  wire       [7:0]    cmpUnit_140_out2_data;
  wire       [7:0]    cmpUnit_141_out1_data;
  wire       [7:0]    cmpUnit_141_out2_data;
  wire       [7:0]    cmpUnit_142_out1_data;
  wire       [7:0]    cmpUnit_142_out2_data;
  wire       [7:0]    cmpUnit_143_out1_data;
  wire       [7:0]    cmpUnit_143_out2_data;
  wire       [7:0]    cmpUnit_144_out1_data;
  wire       [7:0]    cmpUnit_144_out2_data;
  wire       [7:0]    cmpUnit_145_out1_data;
  wire       [7:0]    cmpUnit_145_out2_data;
  wire       [7:0]    cmpUnit_146_out1_data;
  wire       [7:0]    cmpUnit_146_out2_data;
  wire       [7:0]    cmpUnit_147_out1_data;
  wire       [7:0]    cmpUnit_147_out2_data;
  wire       [7:0]    cmpUnit_148_out1_data;
  wire       [7:0]    cmpUnit_148_out2_data;
  wire       [7:0]    cmpUnit_149_out1_data;
  wire       [7:0]    cmpUnit_149_out2_data;
  wire       [7:0]    cmpUnit_150_out1_data;
  wire       [7:0]    cmpUnit_150_out2_data;
  wire       [7:0]    cmpUnit_151_out1_data;
  wire       [7:0]    cmpUnit_151_out2_data;
  wire       [7:0]    cmpUnit_152_out1_data;
  wire       [7:0]    cmpUnit_152_out2_data;
  wire       [7:0]    cmpUnit_153_out1_data;
  wire       [7:0]    cmpUnit_153_out2_data;
  wire       [7:0]    cmpUnit_154_out1_data;
  wire       [7:0]    cmpUnit_154_out2_data;
  wire       [7:0]    cmpUnit_155_out1_data;
  wire       [7:0]    cmpUnit_155_out2_data;
  wire       [7:0]    cmpUnit_156_out1_data;
  wire       [7:0]    cmpUnit_156_out2_data;
  wire       [7:0]    cmpUnit_157_out1_data;
  wire       [7:0]    cmpUnit_157_out2_data;
  wire       [7:0]    cmpUnit_158_out1_data;
  wire       [7:0]    cmpUnit_158_out2_data;
  wire       [7:0]    cmpUnit_159_out1_data;
  wire       [7:0]    cmpUnit_159_out2_data;
  wire                shiftRegister_1_output_1;
  reg        [7:0]    reg_data_buf_0_data;
  reg        [7:0]    reg_data_buf_1_data;
  reg        [7:0]    reg_data_buf_2_data;
  reg        [7:0]    reg_data_buf_3_data;
  reg        [7:0]    reg_data_buf_4_data;
  reg        [7:0]    reg_data_buf_5_data;
  reg        [7:0]    reg_data_buf_6_data;
  reg        [7:0]    reg_data_buf_7_data;
  reg        [7:0]    reg_data_buf_8_data;
  reg        [7:0]    reg_data_buf_9_data;
  reg        [7:0]    reg_data_buf_10_data;
  reg        [7:0]    reg_data_buf_11_data;
  reg        [7:0]    reg_data_buf_12_data;
  reg        [7:0]    reg_data_buf_13_data;
  reg        [7:0]    reg_data_buf_14_data;
  reg        [7:0]    reg_data_buf_15_data;
  reg        [7:0]    _zz_in1_data;
  reg        [7:0]    _zz_in1_data_1;
  reg        [7:0]    _zz_in2_data;
  reg        [7:0]    _zz_in2_data_1;
  reg        [7:0]    _zz_in1_data_2;
  reg        [7:0]    _zz_in1_data_3;
  reg        [7:0]    _zz_in2_data_2;
  reg        [7:0]    _zz_in2_data_3;
  reg        [7:0]    _zz_in1_data_4;
  reg        [7:0]    _zz_in1_data_5;
  reg        [7:0]    _zz_in2_data_4;
  reg        [7:0]    _zz_in2_data_5;
  reg        [7:0]    _zz_in1_data_6;
  reg        [7:0]    _zz_in1_data_7;
  reg        [7:0]    _zz_in2_data_6;
  reg        [7:0]    _zz_in2_data_7;
  reg        [7:0]    _zz_in1_data_8;
  reg        [7:0]    _zz_in2_data_8;
  reg        [7:0]    _zz_in1_data_9;
  reg        [7:0]    _zz_in2_data_9;
  reg        [7:0]    _zz_in1_data_10;
  reg        [7:0]    _zz_in2_data_10;
  reg        [7:0]    _zz_in1_data_11;
  reg        [7:0]    _zz_in2_data_11;
  reg        [7:0]    _zz_in1_data_12;
  reg        [7:0]    _zz_in2_data_12;
  reg        [7:0]    _zz_in1_data_13;
  reg        [7:0]    _zz_in2_data_13;
  reg        [7:0]    _zz_in1_data_14;
  reg        [7:0]    _zz_in2_data_14;
  reg        [7:0]    _zz_in1_data_15;
  reg        [7:0]    _zz_in2_data_15;
  reg        [7:0]    _zz_in1_data_16;
  reg        [7:0]    _zz_in1_data_17;
  reg        [7:0]    _zz_in1_data_18;
  reg        [7:0]    _zz_in1_data_19;
  reg        [7:0]    _zz_in2_data_16;
  reg        [7:0]    _zz_in2_data_17;
  reg        [7:0]    _zz_in2_data_18;
  reg        [7:0]    _zz_in2_data_19;
  reg        [7:0]    _zz_in1_data_20;
  reg        [7:0]    _zz_in1_data_21;
  reg        [7:0]    _zz_in1_data_22;
  reg        [7:0]    _zz_in1_data_23;
  reg        [7:0]    _zz_in2_data_20;
  reg        [7:0]    _zz_in2_data_21;
  reg        [7:0]    _zz_in2_data_22;
  reg        [7:0]    _zz_in2_data_23;
  reg        [7:0]    _zz_in1_data_24;
  reg        [7:0]    _zz_in1_data_25;
  reg        [7:0]    _zz_in2_data_24;
  reg        [7:0]    _zz_in2_data_25;
  reg        [7:0]    _zz_in1_data_26;
  reg        [7:0]    _zz_in1_data_27;
  reg        [7:0]    _zz_in2_data_26;
  reg        [7:0]    _zz_in2_data_27;
  reg        [7:0]    _zz_in1_data_28;
  reg        [7:0]    _zz_in1_data_29;
  reg        [7:0]    _zz_in2_data_28;
  reg        [7:0]    _zz_in2_data_29;
  reg        [7:0]    _zz_in1_data_30;
  reg        [7:0]    _zz_in1_data_31;
  reg        [7:0]    _zz_in2_data_30;
  reg        [7:0]    _zz_in2_data_31;
  reg        [7:0]    _zz_in1_data_32;
  reg        [7:0]    _zz_in2_data_32;
  reg        [7:0]    _zz_in1_data_33;
  reg        [7:0]    _zz_in2_data_33;
  reg        [7:0]    _zz_in1_data_34;
  reg        [7:0]    _zz_in2_data_34;
  reg        [7:0]    _zz_in1_data_35;
  reg        [7:0]    _zz_in2_data_35;
  reg        [7:0]    _zz_in1_data_36;
  reg        [7:0]    _zz_in2_data_36;
  reg        [7:0]    _zz_in1_data_37;
  reg        [7:0]    _zz_in2_data_37;
  reg        [7:0]    _zz_in1_data_38;
  reg        [7:0]    _zz_in2_data_38;
  reg        [7:0]    _zz_in1_data_39;
  reg        [7:0]    _zz_in2_data_39;
  reg        [7:0]    _zz_in1_data_40;
  reg        [7:0]    _zz_in1_data_41;
  reg        [7:0]    _zz_in1_data_42;
  reg        [7:0]    _zz_in1_data_43;
  reg        [7:0]    _zz_in1_data_44;
  reg        [7:0]    _zz_in1_data_45;
  reg        [7:0]    _zz_in1_data_46;
  reg        [7:0]    _zz_in1_data_47;
  reg        [7:0]    _zz_in2_data_40;
  reg        [7:0]    _zz_in2_data_41;
  reg        [7:0]    _zz_in2_data_42;
  reg        [7:0]    _zz_in2_data_43;
  reg        [7:0]    _zz_in2_data_44;
  reg        [7:0]    _zz_in2_data_45;
  reg        [7:0]    _zz_in2_data_46;
  reg        [7:0]    _zz_in2_data_47;
  reg        [7:0]    _zz_in1_data_48;
  reg        [7:0]    _zz_in1_data_49;
  reg        [7:0]    _zz_in1_data_50;
  reg        [7:0]    _zz_in1_data_51;
  reg        [7:0]    _zz_in2_data_48;
  reg        [7:0]    _zz_in2_data_49;
  reg        [7:0]    _zz_in2_data_50;
  reg        [7:0]    _zz_in2_data_51;
  reg        [7:0]    _zz_in1_data_52;
  reg        [7:0]    _zz_in1_data_53;
  reg        [7:0]    _zz_in1_data_54;
  reg        [7:0]    _zz_in1_data_55;
  reg        [7:0]    _zz_in2_data_52;
  reg        [7:0]    _zz_in2_data_53;
  reg        [7:0]    _zz_in2_data_54;
  reg        [7:0]    _zz_in2_data_55;
  reg        [7:0]    _zz_in1_data_56;
  reg        [7:0]    _zz_in1_data_57;
  reg        [7:0]    _zz_in2_data_56;
  reg        [7:0]    _zz_in2_data_57;
  reg        [7:0]    _zz_in1_data_58;
  reg        [7:0]    _zz_in1_data_59;
  reg        [7:0]    _zz_in2_data_58;
  reg        [7:0]    _zz_in2_data_59;
  reg        [7:0]    _zz_in1_data_60;
  reg        [7:0]    _zz_in1_data_61;
  reg        [7:0]    _zz_in2_data_60;
  reg        [7:0]    _zz_in2_data_61;
  reg        [7:0]    _zz_in1_data_62;
  reg        [7:0]    _zz_in1_data_63;
  reg        [7:0]    _zz_in2_data_62;
  reg        [7:0]    _zz_in2_data_63;
  reg        [7:0]    _zz_in1_data_64;
  reg        [7:0]    _zz_in2_data_64;
  reg        [7:0]    _zz_in1_data_65;
  reg        [7:0]    _zz_in2_data_65;
  reg        [7:0]    _zz_in1_data_66;
  reg        [7:0]    _zz_in2_data_66;
  reg        [7:0]    _zz_in1_data_67;
  reg        [7:0]    _zz_in2_data_67;
  reg        [7:0]    _zz_in1_data_68;
  reg        [7:0]    _zz_in2_data_68;
  reg        [7:0]    _zz_in1_data_69;
  reg        [7:0]    _zz_in2_data_69;
  reg        [7:0]    _zz_in1_data_70;
  reg        [7:0]    _zz_in2_data_70;
  reg        [7:0]    _zz_in1_data_71;
  reg        [7:0]    _zz_in2_data_71;
  reg        [7:0]    _zz_sorted_data_payload_0_data;
  reg        [7:0]    _zz_sorted_data_payload_1_data;
  reg        [7:0]    _zz_sorted_data_payload_2_data;
  reg        [7:0]    _zz_sorted_data_payload_3_data;
  reg        [7:0]    _zz_sorted_data_payload_4_data;
  reg        [7:0]    _zz_sorted_data_payload_5_data;
  reg        [7:0]    _zz_sorted_data_payload_6_data;
  reg        [7:0]    _zz_sorted_data_payload_7_data;
  reg        [7:0]    _zz_sorted_data_payload_8_data;
  reg        [7:0]    _zz_sorted_data_payload_9_data;
  reg        [7:0]    _zz_sorted_data_payload_10_data;
  reg        [7:0]    _zz_sorted_data_payload_11_data;
  reg        [7:0]    _zz_sorted_data_payload_12_data;
  reg        [7:0]    _zz_sorted_data_payload_13_data;
  reg        [7:0]    _zz_sorted_data_payload_14_data;
  reg        [7:0]    _zz_sorted_data_payload_15_data;

  CmpUnit cmpUnit_80 (
    .in1_data     (reg_data_buf_0_data   ), //i
    .in2_data     (reg_data_buf_1_data   ), //i
    .less         (1'b1                  ), //i
    .out1_data    (cmpUnit_80_out1_data  ), //o
    .out2_data    (cmpUnit_80_out2_data  )  //o
  );
  CmpUnit cmpUnit_81 (
    .in1_data     (reg_data_buf_2_data   ), //i
    .in2_data     (reg_data_buf_3_data   ), //i
    .less         (1'b0                  ), //i
    .out1_data    (cmpUnit_81_out1_data  ), //o
    .out2_data    (cmpUnit_81_out2_data  )  //o
  );
  CmpUnit cmpUnit_82 (
    .in1_data     (reg_data_buf_4_data   ), //i
    .in2_data     (reg_data_buf_5_data   ), //i
    .less         (1'b1                  ), //i
    .out1_data    (cmpUnit_82_out1_data  ), //o
    .out2_data    (cmpUnit_82_out2_data  )  //o
  );
  CmpUnit cmpUnit_83 (
    .in1_data     (reg_data_buf_6_data   ), //i
    .in2_data     (reg_data_buf_7_data   ), //i
    .less         (1'b0                  ), //i
    .out1_data    (cmpUnit_83_out1_data  ), //o
    .out2_data    (cmpUnit_83_out2_data  )  //o
  );
  CmpUnit cmpUnit_84 (
    .in1_data     (reg_data_buf_8_data   ), //i
    .in2_data     (reg_data_buf_9_data   ), //i
    .less         (1'b1                  ), //i
    .out1_data    (cmpUnit_84_out1_data  ), //o
    .out2_data    (cmpUnit_84_out2_data  )  //o
  );
  CmpUnit cmpUnit_85 (
    .in1_data     (reg_data_buf_10_data  ), //i
    .in2_data     (reg_data_buf_11_data  ), //i
    .less         (1'b0                  ), //i
    .out1_data    (cmpUnit_85_out1_data  ), //o
    .out2_data    (cmpUnit_85_out2_data  )  //o
  );
  CmpUnit cmpUnit_86 (
    .in1_data     (reg_data_buf_12_data  ), //i
    .in2_data     (reg_data_buf_13_data  ), //i
    .less         (1'b1                  ), //i
    .out1_data    (cmpUnit_86_out1_data  ), //o
    .out2_data    (cmpUnit_86_out2_data  )  //o
  );
  CmpUnit cmpUnit_87 (
    .in1_data     (reg_data_buf_14_data  ), //i
    .in2_data     (reg_data_buf_15_data  ), //i
    .less         (1'b0                  ), //i
    .out1_data    (cmpUnit_87_out1_data  ), //o
    .out2_data    (cmpUnit_87_out2_data  )  //o
  );
  CmpUnit cmpUnit_88 (
    .in1_data     (_zz_in1_data          ), //i
    .in2_data     (_zz_in2_data          ), //i
    .less         (1'b1                  ), //i
    .out1_data    (cmpUnit_88_out1_data  ), //o
    .out2_data    (cmpUnit_88_out2_data  )  //o
  );
  CmpUnit cmpUnit_89 (
    .in1_data     (_zz_in1_data_1        ), //i
    .in2_data     (_zz_in2_data_1        ), //i
    .less         (1'b1                  ), //i
    .out1_data    (cmpUnit_89_out1_data  ), //o
    .out2_data    (cmpUnit_89_out2_data  )  //o
  );
  CmpUnit cmpUnit_90 (
    .in1_data     (_zz_in1_data_2        ), //i
    .in2_data     (_zz_in2_data_2        ), //i
    .less         (1'b0                  ), //i
    .out1_data    (cmpUnit_90_out1_data  ), //o
    .out2_data    (cmpUnit_90_out2_data  )  //o
  );
  CmpUnit cmpUnit_91 (
    .in1_data     (_zz_in1_data_3        ), //i
    .in2_data     (_zz_in2_data_3        ), //i
    .less         (1'b0                  ), //i
    .out1_data    (cmpUnit_91_out1_data  ), //o
    .out2_data    (cmpUnit_91_out2_data  )  //o
  );
  CmpUnit cmpUnit_92 (
    .in1_data     (_zz_in1_data_4        ), //i
    .in2_data     (_zz_in2_data_4        ), //i
    .less         (1'b1                  ), //i
    .out1_data    (cmpUnit_92_out1_data  ), //o
    .out2_data    (cmpUnit_92_out2_data  )  //o
  );
  CmpUnit cmpUnit_93 (
    .in1_data     (_zz_in1_data_5        ), //i
    .in2_data     (_zz_in2_data_5        ), //i
    .less         (1'b1                  ), //i
    .out1_data    (cmpUnit_93_out1_data  ), //o
    .out2_data    (cmpUnit_93_out2_data  )  //o
  );
  CmpUnit cmpUnit_94 (
    .in1_data     (_zz_in1_data_6        ), //i
    .in2_data     (_zz_in2_data_6        ), //i
    .less         (1'b0                  ), //i
    .out1_data    (cmpUnit_94_out1_data  ), //o
    .out2_data    (cmpUnit_94_out2_data  )  //o
  );
  CmpUnit cmpUnit_95 (
    .in1_data     (_zz_in1_data_7        ), //i
    .in2_data     (_zz_in2_data_7        ), //i
    .less         (1'b0                  ), //i
    .out1_data    (cmpUnit_95_out1_data  ), //o
    .out2_data    (cmpUnit_95_out2_data  )  //o
  );
  CmpUnit cmpUnit_96 (
    .in1_data     (_zz_in1_data_8        ), //i
    .in2_data     (_zz_in2_data_8        ), //i
    .less         (1'b1                  ), //i
    .out1_data    (cmpUnit_96_out1_data  ), //o
    .out2_data    (cmpUnit_96_out2_data  )  //o
  );
  CmpUnit cmpUnit_97 (
    .in1_data     (_zz_in1_data_9        ), //i
    .in2_data     (_zz_in2_data_9        ), //i
    .less         (1'b1                  ), //i
    .out1_data    (cmpUnit_97_out1_data  ), //o
    .out2_data    (cmpUnit_97_out2_data  )  //o
  );
  CmpUnit cmpUnit_98 (
    .in1_data     (_zz_in1_data_10       ), //i
    .in2_data     (_zz_in2_data_10       ), //i
    .less         (1'b0                  ), //i
    .out1_data    (cmpUnit_98_out1_data  ), //o
    .out2_data    (cmpUnit_98_out2_data  )  //o
  );
  CmpUnit cmpUnit_99 (
    .in1_data     (_zz_in1_data_11       ), //i
    .in2_data     (_zz_in2_data_11       ), //i
    .less         (1'b0                  ), //i
    .out1_data    (cmpUnit_99_out1_data  ), //o
    .out2_data    (cmpUnit_99_out2_data  )  //o
  );
  CmpUnit cmpUnit_100 (
    .in1_data     (_zz_in1_data_12        ), //i
    .in2_data     (_zz_in2_data_12        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_100_out1_data  ), //o
    .out2_data    (cmpUnit_100_out2_data  )  //o
  );
  CmpUnit cmpUnit_101 (
    .in1_data     (_zz_in1_data_13        ), //i
    .in2_data     (_zz_in2_data_13        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_101_out1_data  ), //o
    .out2_data    (cmpUnit_101_out2_data  )  //o
  );
  CmpUnit cmpUnit_102 (
    .in1_data     (_zz_in1_data_14        ), //i
    .in2_data     (_zz_in2_data_14        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_102_out1_data  ), //o
    .out2_data    (cmpUnit_102_out2_data  )  //o
  );
  CmpUnit cmpUnit_103 (
    .in1_data     (_zz_in1_data_15        ), //i
    .in2_data     (_zz_in2_data_15        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_103_out1_data  ), //o
    .out2_data    (cmpUnit_103_out2_data  )  //o
  );
  CmpUnit cmpUnit_104 (
    .in1_data     (_zz_in1_data_16        ), //i
    .in2_data     (_zz_in2_data_16        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_104_out1_data  ), //o
    .out2_data    (cmpUnit_104_out2_data  )  //o
  );
  CmpUnit cmpUnit_105 (
    .in1_data     (_zz_in1_data_17        ), //i
    .in2_data     (_zz_in2_data_17        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_105_out1_data  ), //o
    .out2_data    (cmpUnit_105_out2_data  )  //o
  );
  CmpUnit cmpUnit_106 (
    .in1_data     (_zz_in1_data_18        ), //i
    .in2_data     (_zz_in2_data_18        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_106_out1_data  ), //o
    .out2_data    (cmpUnit_106_out2_data  )  //o
  );
  CmpUnit cmpUnit_107 (
    .in1_data     (_zz_in1_data_19        ), //i
    .in2_data     (_zz_in2_data_19        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_107_out1_data  ), //o
    .out2_data    (cmpUnit_107_out2_data  )  //o
  );
  CmpUnit cmpUnit_108 (
    .in1_data     (_zz_in1_data_20        ), //i
    .in2_data     (_zz_in2_data_20        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_108_out1_data  ), //o
    .out2_data    (cmpUnit_108_out2_data  )  //o
  );
  CmpUnit cmpUnit_109 (
    .in1_data     (_zz_in1_data_21        ), //i
    .in2_data     (_zz_in2_data_21        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_109_out1_data  ), //o
    .out2_data    (cmpUnit_109_out2_data  )  //o
  );
  CmpUnit cmpUnit_110 (
    .in1_data     (_zz_in1_data_22        ), //i
    .in2_data     (_zz_in2_data_22        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_110_out1_data  ), //o
    .out2_data    (cmpUnit_110_out2_data  )  //o
  );
  CmpUnit cmpUnit_111 (
    .in1_data     (_zz_in1_data_23        ), //i
    .in2_data     (_zz_in2_data_23        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_111_out1_data  ), //o
    .out2_data    (cmpUnit_111_out2_data  )  //o
  );
  CmpUnit cmpUnit_112 (
    .in1_data     (_zz_in1_data_24        ), //i
    .in2_data     (_zz_in2_data_24        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_112_out1_data  ), //o
    .out2_data    (cmpUnit_112_out2_data  )  //o
  );
  CmpUnit cmpUnit_113 (
    .in1_data     (_zz_in1_data_25        ), //i
    .in2_data     (_zz_in2_data_25        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_113_out1_data  ), //o
    .out2_data    (cmpUnit_113_out2_data  )  //o
  );
  CmpUnit cmpUnit_114 (
    .in1_data     (_zz_in1_data_26        ), //i
    .in2_data     (_zz_in2_data_26        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_114_out1_data  ), //o
    .out2_data    (cmpUnit_114_out2_data  )  //o
  );
  CmpUnit cmpUnit_115 (
    .in1_data     (_zz_in1_data_27        ), //i
    .in2_data     (_zz_in2_data_27        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_115_out1_data  ), //o
    .out2_data    (cmpUnit_115_out2_data  )  //o
  );
  CmpUnit cmpUnit_116 (
    .in1_data     (_zz_in1_data_28        ), //i
    .in2_data     (_zz_in2_data_28        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_116_out1_data  ), //o
    .out2_data    (cmpUnit_116_out2_data  )  //o
  );
  CmpUnit cmpUnit_117 (
    .in1_data     (_zz_in1_data_29        ), //i
    .in2_data     (_zz_in2_data_29        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_117_out1_data  ), //o
    .out2_data    (cmpUnit_117_out2_data  )  //o
  );
  CmpUnit cmpUnit_118 (
    .in1_data     (_zz_in1_data_30        ), //i
    .in2_data     (_zz_in2_data_30        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_118_out1_data  ), //o
    .out2_data    (cmpUnit_118_out2_data  )  //o
  );
  CmpUnit cmpUnit_119 (
    .in1_data     (_zz_in1_data_31        ), //i
    .in2_data     (_zz_in2_data_31        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_119_out1_data  ), //o
    .out2_data    (cmpUnit_119_out2_data  )  //o
  );
  CmpUnit cmpUnit_120 (
    .in1_data     (_zz_in1_data_32        ), //i
    .in2_data     (_zz_in2_data_32        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_120_out1_data  ), //o
    .out2_data    (cmpUnit_120_out2_data  )  //o
  );
  CmpUnit cmpUnit_121 (
    .in1_data     (_zz_in1_data_33        ), //i
    .in2_data     (_zz_in2_data_33        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_121_out1_data  ), //o
    .out2_data    (cmpUnit_121_out2_data  )  //o
  );
  CmpUnit cmpUnit_122 (
    .in1_data     (_zz_in1_data_34        ), //i
    .in2_data     (_zz_in2_data_34        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_122_out1_data  ), //o
    .out2_data    (cmpUnit_122_out2_data  )  //o
  );
  CmpUnit cmpUnit_123 (
    .in1_data     (_zz_in1_data_35        ), //i
    .in2_data     (_zz_in2_data_35        ), //i
    .less         (1'b1                   ), //i
    .out1_data    (cmpUnit_123_out1_data  ), //o
    .out2_data    (cmpUnit_123_out2_data  )  //o
  );
  CmpUnit cmpUnit_124 (
    .in1_data     (_zz_in1_data_36        ), //i
    .in2_data     (_zz_in2_data_36        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_124_out1_data  ), //o
    .out2_data    (cmpUnit_124_out2_data  )  //o
  );
  CmpUnit cmpUnit_125 (
    .in1_data     (_zz_in1_data_37        ), //i
    .in2_data     (_zz_in2_data_37        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_125_out1_data  ), //o
    .out2_data    (cmpUnit_125_out2_data  )  //o
  );
  CmpUnit cmpUnit_126 (
    .in1_data     (_zz_in1_data_38        ), //i
    .in2_data     (_zz_in2_data_38        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_126_out1_data  ), //o
    .out2_data    (cmpUnit_126_out2_data  )  //o
  );
  CmpUnit cmpUnit_127 (
    .in1_data     (_zz_in1_data_39        ), //i
    .in2_data     (_zz_in2_data_39        ), //i
    .less         (1'b0                   ), //i
    .out1_data    (cmpUnit_127_out1_data  ), //o
    .out2_data    (cmpUnit_127_out2_data  )  //o
  );
  CmpUnit cmpUnit_128 (
    .in1_data     (_zz_in1_data_40        ), //i
    .in2_data     (_zz_in2_data_40        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_128_out1_data  ), //o
    .out2_data    (cmpUnit_128_out2_data  )  //o
  );
  CmpUnit cmpUnit_129 (
    .in1_data     (_zz_in1_data_41        ), //i
    .in2_data     (_zz_in2_data_41        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_129_out1_data  ), //o
    .out2_data    (cmpUnit_129_out2_data  )  //o
  );
  CmpUnit cmpUnit_130 (
    .in1_data     (_zz_in1_data_42        ), //i
    .in2_data     (_zz_in2_data_42        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_130_out1_data  ), //o
    .out2_data    (cmpUnit_130_out2_data  )  //o
  );
  CmpUnit cmpUnit_131 (
    .in1_data     (_zz_in1_data_43        ), //i
    .in2_data     (_zz_in2_data_43        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_131_out1_data  ), //o
    .out2_data    (cmpUnit_131_out2_data  )  //o
  );
  CmpUnit cmpUnit_132 (
    .in1_data     (_zz_in1_data_44        ), //i
    .in2_data     (_zz_in2_data_44        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_132_out1_data  ), //o
    .out2_data    (cmpUnit_132_out2_data  )  //o
  );
  CmpUnit cmpUnit_133 (
    .in1_data     (_zz_in1_data_45        ), //i
    .in2_data     (_zz_in2_data_45        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_133_out1_data  ), //o
    .out2_data    (cmpUnit_133_out2_data  )  //o
  );
  CmpUnit cmpUnit_134 (
    .in1_data     (_zz_in1_data_46        ), //i
    .in2_data     (_zz_in2_data_46        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_134_out1_data  ), //o
    .out2_data    (cmpUnit_134_out2_data  )  //o
  );
  CmpUnit cmpUnit_135 (
    .in1_data     (_zz_in1_data_47        ), //i
    .in2_data     (_zz_in2_data_47        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_135_out1_data  ), //o
    .out2_data    (cmpUnit_135_out2_data  )  //o
  );
  CmpUnit cmpUnit_136 (
    .in1_data     (_zz_in1_data_48        ), //i
    .in2_data     (_zz_in2_data_48        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_136_out1_data  ), //o
    .out2_data    (cmpUnit_136_out2_data  )  //o
  );
  CmpUnit cmpUnit_137 (
    .in1_data     (_zz_in1_data_49        ), //i
    .in2_data     (_zz_in2_data_49        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_137_out1_data  ), //o
    .out2_data    (cmpUnit_137_out2_data  )  //o
  );
  CmpUnit cmpUnit_138 (
    .in1_data     (_zz_in1_data_50        ), //i
    .in2_data     (_zz_in2_data_50        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_138_out1_data  ), //o
    .out2_data    (cmpUnit_138_out2_data  )  //o
  );
  CmpUnit cmpUnit_139 (
    .in1_data     (_zz_in1_data_51        ), //i
    .in2_data     (_zz_in2_data_51        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_139_out1_data  ), //o
    .out2_data    (cmpUnit_139_out2_data  )  //o
  );
  CmpUnit cmpUnit_140 (
    .in1_data     (_zz_in1_data_52        ), //i
    .in2_data     (_zz_in2_data_52        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_140_out1_data  ), //o
    .out2_data    (cmpUnit_140_out2_data  )  //o
  );
  CmpUnit cmpUnit_141 (
    .in1_data     (_zz_in1_data_53        ), //i
    .in2_data     (_zz_in2_data_53        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_141_out1_data  ), //o
    .out2_data    (cmpUnit_141_out2_data  )  //o
  );
  CmpUnit cmpUnit_142 (
    .in1_data     (_zz_in1_data_54        ), //i
    .in2_data     (_zz_in2_data_54        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_142_out1_data  ), //o
    .out2_data    (cmpUnit_142_out2_data  )  //o
  );
  CmpUnit cmpUnit_143 (
    .in1_data     (_zz_in1_data_55        ), //i
    .in2_data     (_zz_in2_data_55        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_143_out1_data  ), //o
    .out2_data    (cmpUnit_143_out2_data  )  //o
  );
  CmpUnit cmpUnit_144 (
    .in1_data     (_zz_in1_data_56        ), //i
    .in2_data     (_zz_in2_data_56        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_144_out1_data  ), //o
    .out2_data    (cmpUnit_144_out2_data  )  //o
  );
  CmpUnit cmpUnit_145 (
    .in1_data     (_zz_in1_data_57        ), //i
    .in2_data     (_zz_in2_data_57        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_145_out1_data  ), //o
    .out2_data    (cmpUnit_145_out2_data  )  //o
  );
  CmpUnit cmpUnit_146 (
    .in1_data     (_zz_in1_data_58        ), //i
    .in2_data     (_zz_in2_data_58        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_146_out1_data  ), //o
    .out2_data    (cmpUnit_146_out2_data  )  //o
  );
  CmpUnit cmpUnit_147 (
    .in1_data     (_zz_in1_data_59        ), //i
    .in2_data     (_zz_in2_data_59        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_147_out1_data  ), //o
    .out2_data    (cmpUnit_147_out2_data  )  //o
  );
  CmpUnit cmpUnit_148 (
    .in1_data     (_zz_in1_data_60        ), //i
    .in2_data     (_zz_in2_data_60        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_148_out1_data  ), //o
    .out2_data    (cmpUnit_148_out2_data  )  //o
  );
  CmpUnit cmpUnit_149 (
    .in1_data     (_zz_in1_data_61        ), //i
    .in2_data     (_zz_in2_data_61        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_149_out1_data  ), //o
    .out2_data    (cmpUnit_149_out2_data  )  //o
  );
  CmpUnit cmpUnit_150 (
    .in1_data     (_zz_in1_data_62        ), //i
    .in2_data     (_zz_in2_data_62        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_150_out1_data  ), //o
    .out2_data    (cmpUnit_150_out2_data  )  //o
  );
  CmpUnit cmpUnit_151 (
    .in1_data     (_zz_in1_data_63        ), //i
    .in2_data     (_zz_in2_data_63        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_151_out1_data  ), //o
    .out2_data    (cmpUnit_151_out2_data  )  //o
  );
  CmpUnit cmpUnit_152 (
    .in1_data     (_zz_in1_data_64        ), //i
    .in2_data     (_zz_in2_data_64        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_152_out1_data  ), //o
    .out2_data    (cmpUnit_152_out2_data  )  //o
  );
  CmpUnit cmpUnit_153 (
    .in1_data     (_zz_in1_data_65        ), //i
    .in2_data     (_zz_in2_data_65        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_153_out1_data  ), //o
    .out2_data    (cmpUnit_153_out2_data  )  //o
  );
  CmpUnit cmpUnit_154 (
    .in1_data     (_zz_in1_data_66        ), //i
    .in2_data     (_zz_in2_data_66        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_154_out1_data  ), //o
    .out2_data    (cmpUnit_154_out2_data  )  //o
  );
  CmpUnit cmpUnit_155 (
    .in1_data     (_zz_in1_data_67        ), //i
    .in2_data     (_zz_in2_data_67        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_155_out1_data  ), //o
    .out2_data    (cmpUnit_155_out2_data  )  //o
  );
  CmpUnit cmpUnit_156 (
    .in1_data     (_zz_in1_data_68        ), //i
    .in2_data     (_zz_in2_data_68        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_156_out1_data  ), //o
    .out2_data    (cmpUnit_156_out2_data  )  //o
  );
  CmpUnit cmpUnit_157 (
    .in1_data     (_zz_in1_data_69        ), //i
    .in2_data     (_zz_in2_data_69        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_157_out1_data  ), //o
    .out2_data    (cmpUnit_157_out2_data  )  //o
  );
  CmpUnit cmpUnit_158 (
    .in1_data     (_zz_in1_data_70        ), //i
    .in2_data     (_zz_in2_data_70        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_158_out1_data  ), //o
    .out2_data    (cmpUnit_158_out2_data  )  //o
  );
  CmpUnit cmpUnit_159 (
    .in1_data     (_zz_in1_data_71        ), //i
    .in2_data     (_zz_in2_data_71        ), //i
    .less         (ascending_order        ), //i
    .out1_data    (cmpUnit_159_out1_data  ), //o
    .out2_data    (cmpUnit_159_out2_data  )  //o
  );
  ShiftRegister shiftRegister_1 (
    .input_1     (raw_data_valid            ), //i
    .output_1    (shiftRegister_1_output_1  ), //o
    .enable      (1'b1                      ), //i
    .clk         (clk                       ), //i
    .reset       (reset                     )  //i
  );
  assign sorted_data_payload_0_data = _zz_sorted_data_payload_0_data;
  assign sorted_data_payload_1_data = _zz_sorted_data_payload_1_data;
  assign sorted_data_payload_2_data = _zz_sorted_data_payload_2_data;
  assign sorted_data_payload_3_data = _zz_sorted_data_payload_3_data;
  assign sorted_data_payload_4_data = _zz_sorted_data_payload_4_data;
  assign sorted_data_payload_5_data = _zz_sorted_data_payload_5_data;
  assign sorted_data_payload_6_data = _zz_sorted_data_payload_6_data;
  assign sorted_data_payload_7_data = _zz_sorted_data_payload_7_data;
  assign sorted_data_payload_8_data = _zz_sorted_data_payload_8_data;
  assign sorted_data_payload_9_data = _zz_sorted_data_payload_9_data;
  assign sorted_data_payload_10_data = _zz_sorted_data_payload_10_data;
  assign sorted_data_payload_11_data = _zz_sorted_data_payload_11_data;
  assign sorted_data_payload_12_data = _zz_sorted_data_payload_12_data;
  assign sorted_data_payload_13_data = _zz_sorted_data_payload_13_data;
  assign sorted_data_payload_14_data = _zz_sorted_data_payload_14_data;
  assign sorted_data_payload_15_data = _zz_sorted_data_payload_15_data;
  assign sorted_data_valid = shiftRegister_1_output_1;
  always @(posedge clk) begin
    if(raw_data_valid) begin
      reg_data_buf_0_data <= raw_data_payload_0;
      reg_data_buf_1_data <= raw_data_payload_1;
      reg_data_buf_2_data <= raw_data_payload_2;
      reg_data_buf_3_data <= raw_data_payload_3;
      reg_data_buf_4_data <= raw_data_payload_4;
      reg_data_buf_5_data <= raw_data_payload_5;
      reg_data_buf_6_data <= raw_data_payload_6;
      reg_data_buf_7_data <= raw_data_payload_7;
      reg_data_buf_8_data <= raw_data_payload_8;
      reg_data_buf_9_data <= raw_data_payload_9;
      reg_data_buf_10_data <= raw_data_payload_10;
      reg_data_buf_11_data <= raw_data_payload_11;
      reg_data_buf_12_data <= raw_data_payload_12;
      reg_data_buf_13_data <= raw_data_payload_13;
      reg_data_buf_14_data <= raw_data_payload_14;
      reg_data_buf_15_data <= raw_data_payload_15;
    end
    _zz_in1_data <= cmpUnit_80_out1_data;
    _zz_in1_data_1 <= cmpUnit_80_out2_data;
    _zz_in2_data <= cmpUnit_81_out1_data;
    _zz_in2_data_1 <= cmpUnit_81_out2_data;
    _zz_in1_data_2 <= cmpUnit_82_out1_data;
    _zz_in1_data_3 <= cmpUnit_82_out2_data;
    _zz_in2_data_2 <= cmpUnit_83_out1_data;
    _zz_in2_data_3 <= cmpUnit_83_out2_data;
    _zz_in1_data_4 <= cmpUnit_84_out1_data;
    _zz_in1_data_5 <= cmpUnit_84_out2_data;
    _zz_in2_data_4 <= cmpUnit_85_out1_data;
    _zz_in2_data_5 <= cmpUnit_85_out2_data;
    _zz_in1_data_6 <= cmpUnit_86_out1_data;
    _zz_in1_data_7 <= cmpUnit_86_out2_data;
    _zz_in2_data_6 <= cmpUnit_87_out1_data;
    _zz_in2_data_7 <= cmpUnit_87_out2_data;
    _zz_in1_data_8 <= cmpUnit_88_out1_data;
    _zz_in1_data_9 <= cmpUnit_88_out2_data;
    _zz_in2_data_8 <= cmpUnit_89_out1_data;
    _zz_in2_data_9 <= cmpUnit_89_out2_data;
    _zz_in1_data_10 <= cmpUnit_90_out1_data;
    _zz_in1_data_11 <= cmpUnit_90_out2_data;
    _zz_in2_data_10 <= cmpUnit_91_out1_data;
    _zz_in2_data_11 <= cmpUnit_91_out2_data;
    _zz_in1_data_12 <= cmpUnit_92_out1_data;
    _zz_in1_data_13 <= cmpUnit_92_out2_data;
    _zz_in2_data_12 <= cmpUnit_93_out1_data;
    _zz_in2_data_13 <= cmpUnit_93_out2_data;
    _zz_in1_data_14 <= cmpUnit_94_out1_data;
    _zz_in1_data_15 <= cmpUnit_94_out2_data;
    _zz_in2_data_14 <= cmpUnit_95_out1_data;
    _zz_in2_data_15 <= cmpUnit_95_out2_data;
    _zz_in1_data_16 <= cmpUnit_96_out1_data;
    _zz_in1_data_17 <= cmpUnit_96_out2_data;
    _zz_in1_data_18 <= cmpUnit_97_out1_data;
    _zz_in1_data_19 <= cmpUnit_97_out2_data;
    _zz_in2_data_16 <= cmpUnit_98_out1_data;
    _zz_in2_data_17 <= cmpUnit_98_out2_data;
    _zz_in2_data_18 <= cmpUnit_99_out1_data;
    _zz_in2_data_19 <= cmpUnit_99_out2_data;
    _zz_in1_data_20 <= cmpUnit_100_out1_data;
    _zz_in1_data_21 <= cmpUnit_100_out2_data;
    _zz_in1_data_22 <= cmpUnit_101_out1_data;
    _zz_in1_data_23 <= cmpUnit_101_out2_data;
    _zz_in2_data_20 <= cmpUnit_102_out1_data;
    _zz_in2_data_21 <= cmpUnit_102_out2_data;
    _zz_in2_data_22 <= cmpUnit_103_out1_data;
    _zz_in2_data_23 <= cmpUnit_103_out2_data;
    _zz_in1_data_24 <= cmpUnit_104_out1_data;
    _zz_in1_data_26 <= cmpUnit_104_out2_data;
    _zz_in1_data_25 <= cmpUnit_105_out1_data;
    _zz_in1_data_27 <= cmpUnit_105_out2_data;
    _zz_in2_data_24 <= cmpUnit_106_out1_data;
    _zz_in2_data_26 <= cmpUnit_106_out2_data;
    _zz_in2_data_25 <= cmpUnit_107_out1_data;
    _zz_in2_data_27 <= cmpUnit_107_out2_data;
    _zz_in1_data_28 <= cmpUnit_108_out1_data;
    _zz_in1_data_30 <= cmpUnit_108_out2_data;
    _zz_in1_data_29 <= cmpUnit_109_out1_data;
    _zz_in1_data_31 <= cmpUnit_109_out2_data;
    _zz_in2_data_28 <= cmpUnit_110_out1_data;
    _zz_in2_data_30 <= cmpUnit_110_out2_data;
    _zz_in2_data_29 <= cmpUnit_111_out1_data;
    _zz_in2_data_31 <= cmpUnit_111_out2_data;
    _zz_in1_data_32 <= cmpUnit_112_out1_data;
    _zz_in1_data_33 <= cmpUnit_112_out2_data;
    _zz_in2_data_32 <= cmpUnit_113_out1_data;
    _zz_in2_data_33 <= cmpUnit_113_out2_data;
    _zz_in1_data_34 <= cmpUnit_114_out1_data;
    _zz_in1_data_35 <= cmpUnit_114_out2_data;
    _zz_in2_data_34 <= cmpUnit_115_out1_data;
    _zz_in2_data_35 <= cmpUnit_115_out2_data;
    _zz_in1_data_36 <= cmpUnit_116_out1_data;
    _zz_in1_data_37 <= cmpUnit_116_out2_data;
    _zz_in2_data_36 <= cmpUnit_117_out1_data;
    _zz_in2_data_37 <= cmpUnit_117_out2_data;
    _zz_in1_data_38 <= cmpUnit_118_out1_data;
    _zz_in1_data_39 <= cmpUnit_118_out2_data;
    _zz_in2_data_38 <= cmpUnit_119_out1_data;
    _zz_in2_data_39 <= cmpUnit_119_out2_data;
    _zz_in1_data_40 <= cmpUnit_120_out1_data;
    _zz_in1_data_41 <= cmpUnit_120_out2_data;
    _zz_in1_data_42 <= cmpUnit_121_out1_data;
    _zz_in1_data_43 <= cmpUnit_121_out2_data;
    _zz_in1_data_44 <= cmpUnit_122_out1_data;
    _zz_in1_data_45 <= cmpUnit_122_out2_data;
    _zz_in1_data_46 <= cmpUnit_123_out1_data;
    _zz_in1_data_47 <= cmpUnit_123_out2_data;
    _zz_in2_data_40 <= cmpUnit_124_out1_data;
    _zz_in2_data_41 <= cmpUnit_124_out2_data;
    _zz_in2_data_42 <= cmpUnit_125_out1_data;
    _zz_in2_data_43 <= cmpUnit_125_out2_data;
    _zz_in2_data_44 <= cmpUnit_126_out1_data;
    _zz_in2_data_45 <= cmpUnit_126_out2_data;
    _zz_in2_data_46 <= cmpUnit_127_out1_data;
    _zz_in2_data_47 <= cmpUnit_127_out2_data;
    _zz_in1_data_48 <= cmpUnit_128_out1_data;
    _zz_in1_data_52 <= cmpUnit_128_out2_data;
    _zz_in1_data_49 <= cmpUnit_129_out1_data;
    _zz_in1_data_53 <= cmpUnit_129_out2_data;
    _zz_in1_data_50 <= cmpUnit_130_out1_data;
    _zz_in1_data_54 <= cmpUnit_130_out2_data;
    _zz_in1_data_51 <= cmpUnit_131_out1_data;
    _zz_in1_data_55 <= cmpUnit_131_out2_data;
    _zz_in2_data_48 <= cmpUnit_132_out1_data;
    _zz_in2_data_52 <= cmpUnit_132_out2_data;
    _zz_in2_data_49 <= cmpUnit_133_out1_data;
    _zz_in2_data_53 <= cmpUnit_133_out2_data;
    _zz_in2_data_50 <= cmpUnit_134_out1_data;
    _zz_in2_data_54 <= cmpUnit_134_out2_data;
    _zz_in2_data_51 <= cmpUnit_135_out1_data;
    _zz_in2_data_55 <= cmpUnit_135_out2_data;
    _zz_in1_data_56 <= cmpUnit_136_out1_data;
    _zz_in1_data_58 <= cmpUnit_136_out2_data;
    _zz_in1_data_57 <= cmpUnit_137_out1_data;
    _zz_in1_data_59 <= cmpUnit_137_out2_data;
    _zz_in2_data_56 <= cmpUnit_138_out1_data;
    _zz_in2_data_58 <= cmpUnit_138_out2_data;
    _zz_in2_data_57 <= cmpUnit_139_out1_data;
    _zz_in2_data_59 <= cmpUnit_139_out2_data;
    _zz_in1_data_60 <= cmpUnit_140_out1_data;
    _zz_in1_data_62 <= cmpUnit_140_out2_data;
    _zz_in1_data_61 <= cmpUnit_141_out1_data;
    _zz_in1_data_63 <= cmpUnit_141_out2_data;
    _zz_in2_data_60 <= cmpUnit_142_out1_data;
    _zz_in2_data_62 <= cmpUnit_142_out2_data;
    _zz_in2_data_61 <= cmpUnit_143_out1_data;
    _zz_in2_data_63 <= cmpUnit_143_out2_data;
    _zz_in1_data_64 <= cmpUnit_144_out1_data;
    _zz_in1_data_65 <= cmpUnit_144_out2_data;
    _zz_in2_data_64 <= cmpUnit_145_out1_data;
    _zz_in2_data_65 <= cmpUnit_145_out2_data;
    _zz_in1_data_66 <= cmpUnit_146_out1_data;
    _zz_in1_data_67 <= cmpUnit_146_out2_data;
    _zz_in2_data_66 <= cmpUnit_147_out1_data;
    _zz_in2_data_67 <= cmpUnit_147_out2_data;
    _zz_in1_data_68 <= cmpUnit_148_out1_data;
    _zz_in1_data_69 <= cmpUnit_148_out2_data;
    _zz_in2_data_68 <= cmpUnit_149_out1_data;
    _zz_in2_data_69 <= cmpUnit_149_out2_data;
    _zz_in1_data_70 <= cmpUnit_150_out1_data;
    _zz_in1_data_71 <= cmpUnit_150_out2_data;
    _zz_in2_data_70 <= cmpUnit_151_out1_data;
    _zz_in2_data_71 <= cmpUnit_151_out2_data;
    _zz_sorted_data_payload_0_data <= cmpUnit_152_out1_data;
    _zz_sorted_data_payload_1_data <= cmpUnit_152_out2_data;
    _zz_sorted_data_payload_2_data <= cmpUnit_153_out1_data;
    _zz_sorted_data_payload_3_data <= cmpUnit_153_out2_data;
    _zz_sorted_data_payload_4_data <= cmpUnit_154_out1_data;
    _zz_sorted_data_payload_5_data <= cmpUnit_154_out2_data;
    _zz_sorted_data_payload_6_data <= cmpUnit_155_out1_data;
    _zz_sorted_data_payload_7_data <= cmpUnit_155_out2_data;
    _zz_sorted_data_payload_8_data <= cmpUnit_156_out1_data;
    _zz_sorted_data_payload_9_data <= cmpUnit_156_out2_data;
    _zz_sorted_data_payload_10_data <= cmpUnit_157_out1_data;
    _zz_sorted_data_payload_11_data <= cmpUnit_157_out2_data;
    _zz_sorted_data_payload_12_data <= cmpUnit_158_out1_data;
    _zz_sorted_data_payload_13_data <= cmpUnit_158_out2_data;
    _zz_sorted_data_payload_14_data <= cmpUnit_159_out1_data;
    _zz_sorted_data_payload_15_data <= cmpUnit_159_out2_data;
  end


endmodule

module ShiftRegister (
  input               input_1,
  output              output_1,
  input               enable,
  input               clk,
  input               reset
);
  reg                 shift_reg_0;
  reg                 shift_reg_1;
  reg                 shift_reg_2;
  reg                 shift_reg_3;
  reg                 shift_reg_4;
  reg                 shift_reg_5;
  reg                 shift_reg_6;
  reg                 shift_reg_7;
  reg                 shift_reg_8;
  reg                 shift_reg_9;
  reg                 shift_reg_10;

  assign output_1 = shift_reg_10;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 1'b0;
      shift_reg_1 <= 1'b0;
      shift_reg_2 <= 1'b0;
      shift_reg_3 <= 1'b0;
      shift_reg_4 <= 1'b0;
      shift_reg_5 <= 1'b0;
      shift_reg_6 <= 1'b0;
      shift_reg_7 <= 1'b0;
      shift_reg_8 <= 1'b0;
      shift_reg_9 <= 1'b0;
      shift_reg_10 <= 1'b0;
    end else begin
      if(enable) begin
        shift_reg_0 <= input_1;
        shift_reg_1 <= shift_reg_0;
        shift_reg_2 <= shift_reg_1;
        shift_reg_3 <= shift_reg_2;
        shift_reg_4 <= shift_reg_3;
        shift_reg_5 <= shift_reg_4;
        shift_reg_6 <= shift_reg_5;
        shift_reg_7 <= shift_reg_6;
        shift_reg_8 <= shift_reg_7;
        shift_reg_9 <= shift_reg_8;
        shift_reg_10 <= shift_reg_9;
      end
    end
  end


endmodule

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

//CmpUnit replaced by CmpUnit

module CmpUnit (
  input      [7:0]    in1_data,
  input      [7:0]    in2_data,
  input               less,
  output     [7:0]    out1_data,
  output     [7:0]    out2_data
);
  wire                cmp_less_result;
  wire                cmp_sel;

  assign cmp_less_result = (in1_data < in2_data);
  assign cmp_sel = (less ? cmp_less_result : (! cmp_less_result));
  assign out1_data = (cmp_sel ? in1_data : in2_data);
  assign out2_data = (cmp_sel ? in2_data : in1_data);

endmodule
