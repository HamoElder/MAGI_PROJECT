// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : PhaseRotator
// Git hash  : d56fca2d93dfc76f393b3b10236c69be445a29e8



module PhaseRotator (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_cha_i,
  input      [15:0]   raw_data_payload_cha_q,
  output              rotated_data_valid,
  input               rotated_data_ready,
  output     [15:0]   rotated_data_payload_cha_i,
  output     [15:0]   rotated_data_payload_cha_q,
  input      [15:0]   phiCorrect,
  input               clk,
  input               reset
);
  wire                cordic_pipeline_core_raw_data_ready;
  wire                cordic_pipeline_core_result_valid;
  wire       [15:0]   cordic_pipeline_core_result_payload_x;
  wire       [15:0]   cordic_pipeline_core_result_payload_y;
  wire       [15:0]   cordic_pipeline_core_result_payload_z;
  wire       [15:0]   _zz_when_PhaseRotator_l37;
  wire       [15:0]   _zz_phiNext;
  wire       [15:0]   _zz_phiNext_1;
  wire       [15:0]   _zz_when_PhaseRotator_l39;
  wire       [15:0]   _zz_when_PhaseRotator_l39_1;
  reg        [15:0]   phi;
  reg        [15:0]   phiNext;
  wire       [15:0]   math_pi;
  wire       [15:0]   math_2_pi;
  wire                when_PhaseRotator_l37;
  wire                when_PhaseRotator_l39;

  assign _zz_when_PhaseRotator_l37 = ($signed(phi) + $signed(phiCorrect));
  assign _zz_phiNext = ($signed(phi) - $signed(math_2_pi));
  assign _zz_phiNext_1 = ($signed(phi) + $signed(math_2_pi));
  assign _zz_when_PhaseRotator_l39 = ($signed(phi) + $signed(phiCorrect));
  assign _zz_when_PhaseRotator_l39_1 = (- math_pi);
  CordicRotator cordic_pipeline_core (
    .rotate_mode           (1'b1                                   ), //i
    .x_u                   (2'b00                                  ), //i
    .raw_data_valid        (raw_data_valid                         ), //i
    .raw_data_ready        (cordic_pipeline_core_raw_data_ready    ), //o
    .raw_data_payload_x    (raw_data_payload_cha_i                 ), //i
    .raw_data_payload_y    (raw_data_payload_cha_q                 ), //i
    .raw_data_payload_z    (phi                                    ), //i
    .result_valid          (cordic_pipeline_core_result_valid      ), //o
    .result_ready          (rotated_data_ready                     ), //i
    .result_payload_x      (cordic_pipeline_core_result_payload_x  ), //o
    .result_payload_y      (cordic_pipeline_core_result_payload_y  ), //o
    .result_payload_z      (cordic_pipeline_core_result_payload_z  ), //o
    .clk                   (clk                                    ), //i
    .reset                 (reset                                  )  //i
  );
  assign math_pi = 16'h0064;
  assign math_2_pi = 16'h00c9;
  assign when_PhaseRotator_l37 = ($signed(math_pi) < $signed(_zz_when_PhaseRotator_l37));
  always @(*) begin
    if(when_PhaseRotator_l37) begin
      phiNext = ($signed(_zz_phiNext) + $signed(phiCorrect));
    end else begin
      if(when_PhaseRotator_l39) begin
        phiNext = ($signed(_zz_phiNext_1) + $signed(phiCorrect));
      end else begin
        phiNext = ($signed(phi) + $signed(phiCorrect));
      end
    end
  end

  assign when_PhaseRotator_l39 = ($signed(_zz_when_PhaseRotator_l39) < $signed(_zz_when_PhaseRotator_l39_1));
  assign rotated_data_valid = cordic_pipeline_core_result_valid;
  assign rotated_data_payload_cha_i = cordic_pipeline_core_result_payload_x;
  assign rotated_data_payload_cha_q = cordic_pipeline_core_result_payload_y;
  always @(posedge clk) begin
    if(raw_data_valid) begin
      phi <= phiNext;
    end else begin
      phi <= 16'h0;
    end
  end


endmodule

module CordicRotator (
  input               rotate_mode,
  input      [1:0]    x_u,
  input               raw_data_valid,
  output              raw_data_ready,
  input      [15:0]   raw_data_payload_x,
  input      [15:0]   raw_data_payload_y,
  input      [15:0]   raw_data_payload_z,
  output              result_valid,
  input               result_ready,
  output     [15:0]   result_payload_x,
  output     [15:0]   result_payload_y,
  output     [15:0]   result_payload_z,
  input               clk,
  input               reset
);
  wire       [15:0]   _zz__zz_result_payload_x_60;
  wire       [15:0]   _zz__zz_result_payload_x_60_1;
  wire       [15:0]   _zz__zz_result_payload_x_1;
  wire       [15:0]   _zz__zz_result_payload_x_1_1;
  wire       [15:0]   _zz__zz_result_payload_x_1_2;
  wire       [15:0]   _zz__zz_result_payload_x_1_3;
  wire       [15:0]   _zz__zz_result_payload_x_17;
  wire       [15:0]   _zz__zz_result_payload_x_17_1;
  wire       [15:0]   _zz__zz_result_payload_x_32;
  wire       [15:0]   _zz__zz_result_payload_x_32_1;
  wire       [15:0]   _zz__zz_result_payload_x_63;
  wire       [15:0]   _zz__zz_result_payload_x_63_1;
  wire       [15:0]   _zz__zz_result_payload_x_2;
  wire       [15:0]   _zz__zz_result_payload_x_2_1;
  wire       [15:0]   _zz__zz_result_payload_x_2_2;
  wire       [15:0]   _zz__zz_result_payload_x_2_3;
  wire       [15:0]   _zz__zz_result_payload_x_18;
  wire       [15:0]   _zz__zz_result_payload_x_18_1;
  wire       [15:0]   _zz__zz_result_payload_x_33;
  wire       [15:0]   _zz__zz_result_payload_x_33_1;
  wire       [15:0]   _zz__zz_result_payload_x_66;
  wire       [15:0]   _zz__zz_result_payload_x_66_1;
  wire       [15:0]   _zz__zz_result_payload_x_3;
  wire       [15:0]   _zz__zz_result_payload_x_3_1;
  wire       [15:0]   _zz__zz_result_payload_x_3_2;
  wire       [15:0]   _zz__zz_result_payload_x_3_3;
  wire       [15:0]   _zz__zz_result_payload_x_19;
  wire       [15:0]   _zz__zz_result_payload_x_19_1;
  wire       [15:0]   _zz__zz_result_payload_x_34;
  wire       [15:0]   _zz__zz_result_payload_x_34_1;
  wire       [15:0]   _zz__zz_result_payload_x_69;
  wire       [15:0]   _zz__zz_result_payload_x_69_1;
  wire       [15:0]   _zz__zz_result_payload_x_4;
  wire       [15:0]   _zz__zz_result_payload_x_4_1;
  wire       [15:0]   _zz__zz_result_payload_x_4_2;
  wire       [15:0]   _zz__zz_result_payload_x_4_3;
  wire       [15:0]   _zz__zz_result_payload_x_20;
  wire       [15:0]   _zz__zz_result_payload_x_20_1;
  wire       [15:0]   _zz__zz_result_payload_x_35;
  wire       [15:0]   _zz__zz_result_payload_x_35_1;
  wire       [15:0]   _zz__zz_result_payload_x_72;
  wire       [15:0]   _zz__zz_result_payload_x_72_1;
  wire       [15:0]   _zz__zz_result_payload_x_5;
  wire       [15:0]   _zz__zz_result_payload_x_5_1;
  wire       [15:0]   _zz__zz_result_payload_x_5_2;
  wire       [15:0]   _zz__zz_result_payload_x_5_3;
  wire       [15:0]   _zz__zz_result_payload_x_21;
  wire       [15:0]   _zz__zz_result_payload_x_21_1;
  wire       [15:0]   _zz__zz_result_payload_x_36;
  wire       [15:0]   _zz__zz_result_payload_x_36_1;
  wire       [15:0]   _zz__zz_result_payload_x_75;
  wire       [15:0]   _zz__zz_result_payload_x_75_1;
  wire       [15:0]   _zz__zz_result_payload_x_6;
  wire       [15:0]   _zz__zz_result_payload_x_6_1;
  wire       [15:0]   _zz__zz_result_payload_x_6_2;
  wire       [15:0]   _zz__zz_result_payload_x_6_3;
  wire       [15:0]   _zz__zz_result_payload_x_22;
  wire       [15:0]   _zz__zz_result_payload_x_22_1;
  wire       [15:0]   _zz__zz_result_payload_x_37;
  wire       [15:0]   _zz__zz_result_payload_x_37_1;
  wire       [15:0]   _zz__zz_result_payload_x_78;
  wire       [15:0]   _zz__zz_result_payload_x_78_1;
  wire       [15:0]   _zz__zz_result_payload_x_7;
  wire       [15:0]   _zz__zz_result_payload_x_7_1;
  wire       [15:0]   _zz__zz_result_payload_x_7_2;
  wire       [15:0]   _zz__zz_result_payload_x_7_3;
  wire       [15:0]   _zz__zz_result_payload_x_23;
  wire       [15:0]   _zz__zz_result_payload_x_23_1;
  wire       [15:0]   _zz__zz_result_payload_x_38;
  wire       [15:0]   _zz__zz_result_payload_x_38_1;
  wire       [15:0]   _zz__zz_result_payload_x_81;
  wire       [15:0]   _zz__zz_result_payload_x_81_1;
  wire       [15:0]   _zz__zz_result_payload_x_8;
  wire       [15:0]   _zz__zz_result_payload_x_8_1;
  wire       [15:0]   _zz__zz_result_payload_x_8_2;
  wire       [15:0]   _zz__zz_result_payload_x_8_3;
  wire       [15:0]   _zz__zz_result_payload_x_24;
  wire       [15:0]   _zz__zz_result_payload_x_24_1;
  wire       [15:0]   _zz__zz_result_payload_x_39;
  wire       [15:0]   _zz__zz_result_payload_x_39_1;
  wire       [15:0]   _zz__zz_result_payload_x_84;
  wire       [15:0]   _zz__zz_result_payload_x_84_1;
  wire       [15:0]   _zz__zz_result_payload_x_9;
  wire       [15:0]   _zz__zz_result_payload_x_9_1;
  wire       [15:0]   _zz__zz_result_payload_x_9_2;
  wire       [15:0]   _zz__zz_result_payload_x_9_3;
  wire       [15:0]   _zz__zz_result_payload_x_25;
  wire       [15:0]   _zz__zz_result_payload_x_25_1;
  wire       [15:0]   _zz__zz_result_payload_x_40;
  wire       [15:0]   _zz__zz_result_payload_x_40_1;
  wire       [15:0]   _zz__zz_result_payload_x_87;
  wire       [15:0]   _zz__zz_result_payload_x_87_1;
  wire       [15:0]   _zz__zz_result_payload_x_10;
  wire       [15:0]   _zz__zz_result_payload_x_10_1;
  wire       [15:0]   _zz__zz_result_payload_x_10_2;
  wire       [15:0]   _zz__zz_result_payload_x_10_3;
  wire       [15:0]   _zz__zz_result_payload_x_26;
  wire       [15:0]   _zz__zz_result_payload_x_26_1;
  wire       [15:0]   _zz__zz_result_payload_x_41;
  wire       [15:0]   _zz__zz_result_payload_x_41_1;
  wire       [15:0]   _zz__zz_result_payload_x_90;
  wire       [15:0]   _zz__zz_result_payload_x_90_1;
  wire       [15:0]   _zz__zz_result_payload_x_11;
  wire       [15:0]   _zz__zz_result_payload_x_11_1;
  wire       [15:0]   _zz__zz_result_payload_x_11_2;
  wire       [15:0]   _zz__zz_result_payload_x_11_3;
  wire       [15:0]   _zz__zz_result_payload_x_27;
  wire       [15:0]   _zz__zz_result_payload_x_27_1;
  wire       [15:0]   _zz__zz_result_payload_x_42;
  wire       [15:0]   _zz__zz_result_payload_x_42_1;
  wire       [15:0]   _zz__zz_result_payload_x_93;
  wire       [15:0]   _zz__zz_result_payload_x_93_1;
  wire       [15:0]   _zz__zz_result_payload_x_12;
  wire       [15:0]   _zz__zz_result_payload_x_12_1;
  wire       [15:0]   _zz__zz_result_payload_x_12_2;
  wire       [15:0]   _zz__zz_result_payload_x_12_3;
  wire       [15:0]   _zz__zz_result_payload_x_28;
  wire       [15:0]   _zz__zz_result_payload_x_28_1;
  wire       [15:0]   _zz__zz_result_payload_x_43;
  wire       [15:0]   _zz__zz_result_payload_x_43_1;
  wire       [15:0]   _zz__zz_result_payload_x_96;
  wire       [15:0]   _zz__zz_result_payload_x_96_1;
  wire       [15:0]   _zz__zz_result_payload_x_13;
  wire       [15:0]   _zz__zz_result_payload_x_13_1;
  wire       [15:0]   _zz__zz_result_payload_x_13_2;
  wire       [15:0]   _zz__zz_result_payload_x_13_3;
  wire       [15:0]   _zz__zz_result_payload_x_29;
  wire       [15:0]   _zz__zz_result_payload_x_29_1;
  wire       [15:0]   _zz__zz_result_payload_x_44;
  wire       [15:0]   _zz__zz_result_payload_x_44_1;
  wire       [15:0]   _zz__zz_result_payload_x_99;
  wire       [15:0]   _zz__zz_result_payload_x_99_1;
  wire       [15:0]   _zz__zz_result_payload_x_14;
  wire       [15:0]   _zz__zz_result_payload_x_14_1;
  wire       [15:0]   _zz__zz_result_payload_x_14_2;
  wire       [15:0]   _zz__zz_result_payload_x_14_3;
  wire       [15:0]   _zz__zz_result_payload_x_30;
  wire       [15:0]   _zz__zz_result_payload_x_30_1;
  wire       [15:0]   _zz__zz_result_payload_x_45;
  wire       [15:0]   _zz__zz_result_payload_x_45_1;
  wire       [15:0]   _zz__zz_result_payload_x_102;
  wire       [15:0]   _zz__zz_result_payload_x_102_1;
  wire       [15:0]   _zz__zz_result_payload_x_15;
  wire       [15:0]   _zz__zz_result_payload_x_15_1;
  wire       [15:0]   _zz__zz_result_payload_x_15_2;
  wire       [15:0]   _zz__zz_result_payload_x_15_3;
  wire       [15:0]   _zz__zz_result_payload_y;
  wire       [15:0]   _zz__zz_result_payload_y_1;
  wire       [15:0]   _zz__zz_result_payload_z;
  wire       [15:0]   _zz__zz_result_payload_z_1;
  reg        [15:0]   _zz_result_payload_x;
  reg        [15:0]   _zz_result_payload_x_1;
  reg        [15:0]   _zz_result_payload_x_2;
  reg        [15:0]   _zz_result_payload_x_3;
  reg        [15:0]   _zz_result_payload_x_4;
  reg        [15:0]   _zz_result_payload_x_5;
  reg        [15:0]   _zz_result_payload_x_6;
  reg        [15:0]   _zz_result_payload_x_7;
  reg        [15:0]   _zz_result_payload_x_8;
  reg        [15:0]   _zz_result_payload_x_9;
  reg        [15:0]   _zz_result_payload_x_10;
  reg        [15:0]   _zz_result_payload_x_11;
  reg        [15:0]   _zz_result_payload_x_12;
  reg        [15:0]   _zz_result_payload_x_13;
  reg        [15:0]   _zz_result_payload_x_14;
  reg        [15:0]   _zz_result_payload_x_15;
  reg        [15:0]   _zz_result_payload_x_16;
  reg        [15:0]   _zz_result_payload_x_17;
  reg        [15:0]   _zz_result_payload_x_18;
  reg        [15:0]   _zz_result_payload_x_19;
  reg        [15:0]   _zz_result_payload_x_20;
  reg        [15:0]   _zz_result_payload_x_21;
  reg        [15:0]   _zz_result_payload_x_22;
  reg        [15:0]   _zz_result_payload_x_23;
  reg        [15:0]   _zz_result_payload_x_24;
  reg        [15:0]   _zz_result_payload_x_25;
  reg        [15:0]   _zz_result_payload_x_26;
  reg        [15:0]   _zz_result_payload_x_27;
  reg        [15:0]   _zz_result_payload_x_28;
  reg        [15:0]   _zz_result_payload_x_29;
  reg        [15:0]   _zz_result_payload_x_30;
  reg        [15:0]   _zz_result_payload_y;
  reg        [15:0]   _zz_result_payload_x_31;
  reg        [15:0]   _zz_result_payload_x_32;
  reg        [15:0]   _zz_result_payload_x_33;
  reg        [15:0]   _zz_result_payload_x_34;
  reg        [15:0]   _zz_result_payload_x_35;
  reg        [15:0]   _zz_result_payload_x_36;
  reg        [15:0]   _zz_result_payload_x_37;
  reg        [15:0]   _zz_result_payload_x_38;
  reg        [15:0]   _zz_result_payload_x_39;
  reg        [15:0]   _zz_result_payload_x_40;
  reg        [15:0]   _zz_result_payload_x_41;
  reg        [15:0]   _zz_result_payload_x_42;
  reg        [15:0]   _zz_result_payload_x_43;
  reg        [15:0]   _zz_result_payload_x_44;
  reg        [15:0]   _zz_result_payload_x_45;
  reg        [15:0]   _zz_result_payload_z;
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
  reg        [15:0]   _zz_result_payload_x_46;
  reg        [15:0]   _zz_result_payload_x_47;
  reg        [15:0]   _zz_result_payload_x_48;
  reg        [15:0]   _zz_result_payload_x_49;
  reg        [15:0]   _zz_result_payload_x_50;
  reg        [15:0]   _zz_result_payload_x_51;
  reg        [15:0]   _zz_result_payload_x_52;
  reg        [15:0]   _zz_result_payload_x_53;
  reg        [15:0]   _zz_result_payload_x_54;
  reg        [15:0]   _zz_result_payload_x_55;
  reg        [15:0]   _zz_result_payload_x_56;
  reg        [15:0]   _zz_result_payload_x_57;
  reg        [15:0]   _zz_result_payload_x_58;
  reg        [15:0]   _zz_result_payload_x_59;
  reg        [15:0]   _zz_result_payload_z_1;
  wire                raw_data_fire;
  wire                _zz_result_payload_x_60;
  wire       [15:0]   _zz_result_payload_x_61;
  wire       [15:0]   _zz_result_payload_x_62;
  wire                _zz_result_payload_x_63;
  wire       [15:0]   _zz_result_payload_x_64;
  wire       [15:0]   _zz_result_payload_x_65;
  wire                _zz_result_payload_x_66;
  wire       [15:0]   _zz_result_payload_x_67;
  wire       [15:0]   _zz_result_payload_x_68;
  wire                _zz_result_payload_x_69;
  wire       [15:0]   _zz_result_payload_x_70;
  wire       [15:0]   _zz_result_payload_x_71;
  wire                _zz_result_payload_x_72;
  wire       [15:0]   _zz_result_payload_x_73;
  wire       [15:0]   _zz_result_payload_x_74;
  wire                _zz_result_payload_x_75;
  wire       [15:0]   _zz_result_payload_x_76;
  wire       [15:0]   _zz_result_payload_x_77;
  wire                _zz_result_payload_x_78;
  wire       [15:0]   _zz_result_payload_x_79;
  wire       [15:0]   _zz_result_payload_x_80;
  wire                _zz_result_payload_x_81;
  wire       [15:0]   _zz_result_payload_x_82;
  wire       [15:0]   _zz_result_payload_x_83;
  wire                _zz_result_payload_x_84;
  wire       [15:0]   _zz_result_payload_x_85;
  wire       [15:0]   _zz_result_payload_x_86;
  wire                _zz_result_payload_x_87;
  wire       [15:0]   _zz_result_payload_x_88;
  wire       [15:0]   _zz_result_payload_x_89;
  wire                _zz_result_payload_x_90;
  wire       [15:0]   _zz_result_payload_x_91;
  wire       [15:0]   _zz_result_payload_x_92;
  wire                _zz_result_payload_x_93;
  wire       [15:0]   _zz_result_payload_x_94;
  wire       [15:0]   _zz_result_payload_x_95;
  wire                _zz_result_payload_x_96;
  wire       [15:0]   _zz_result_payload_x_97;
  wire       [15:0]   _zz_result_payload_x_98;
  wire                _zz_result_payload_x_99;
  wire       [15:0]   _zz_result_payload_x_100;
  wire       [15:0]   _zz_result_payload_x_101;
  wire                _zz_result_payload_x_102;
  wire       [15:0]   _zz_result_payload_y_1;
  wire       [15:0]   _zz_result_payload_x_103;

  assign _zz__zz_result_payload_x_60 = 16'h0;
  assign _zz__zz_result_payload_x_60_1 = 16'h0;
  assign _zz__zz_result_payload_x_1 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_1_1 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_1_2 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_1_3 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_17 = ($signed(_zz_result_payload_x_16) + $signed(_zz_result_payload_x_61));
  assign _zz__zz_result_payload_x_17_1 = ($signed(_zz_result_payload_x_16) - $signed(_zz_result_payload_x_61));
  assign _zz__zz_result_payload_x_32 = ($signed(_zz_result_payload_x_31) - $signed(_zz_result_payload_x_46));
  assign _zz__zz_result_payload_x_32_1 = ($signed(_zz_result_payload_x_31) + $signed(_zz_result_payload_x_46));
  assign _zz__zz_result_payload_x_63 = 16'h0;
  assign _zz__zz_result_payload_x_63_1 = 16'h0;
  assign _zz__zz_result_payload_x_2 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_2_1 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_2_2 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_2_3 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_18 = ($signed(_zz_result_payload_x_17) + $signed(_zz_result_payload_x_64));
  assign _zz__zz_result_payload_x_18_1 = ($signed(_zz_result_payload_x_17) - $signed(_zz_result_payload_x_64));
  assign _zz__zz_result_payload_x_33 = ($signed(_zz_result_payload_x_32) - $signed(_zz_result_payload_x_47));
  assign _zz__zz_result_payload_x_33_1 = ($signed(_zz_result_payload_x_32) + $signed(_zz_result_payload_x_47));
  assign _zz__zz_result_payload_x_66 = 16'h0;
  assign _zz__zz_result_payload_x_66_1 = 16'h0;
  assign _zz__zz_result_payload_x_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_3_1 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_3_2 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_3_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_19 = ($signed(_zz_result_payload_x_18) + $signed(_zz_result_payload_x_67));
  assign _zz__zz_result_payload_x_19_1 = ($signed(_zz_result_payload_x_18) - $signed(_zz_result_payload_x_67));
  assign _zz__zz_result_payload_x_34 = ($signed(_zz_result_payload_x_33) - $signed(_zz_result_payload_x_48));
  assign _zz__zz_result_payload_x_34_1 = ($signed(_zz_result_payload_x_33) + $signed(_zz_result_payload_x_48));
  assign _zz__zz_result_payload_x_69 = 16'h0;
  assign _zz__zz_result_payload_x_69_1 = 16'h0;
  assign _zz__zz_result_payload_x_4 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_4_1 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_4_2 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_4_3 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_20 = ($signed(_zz_result_payload_x_19) + $signed(_zz_result_payload_x_70));
  assign _zz__zz_result_payload_x_20_1 = ($signed(_zz_result_payload_x_19) - $signed(_zz_result_payload_x_70));
  assign _zz__zz_result_payload_x_35 = ($signed(_zz_result_payload_x_34) - $signed(_zz_result_payload_x_49));
  assign _zz__zz_result_payload_x_35_1 = ($signed(_zz_result_payload_x_34) + $signed(_zz_result_payload_x_49));
  assign _zz__zz_result_payload_x_72 = 16'h0;
  assign _zz__zz_result_payload_x_72_1 = 16'h0;
  assign _zz__zz_result_payload_x_5 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_5_1 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_5_2 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_5_3 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_21 = ($signed(_zz_result_payload_x_20) + $signed(_zz_result_payload_x_73));
  assign _zz__zz_result_payload_x_21_1 = ($signed(_zz_result_payload_x_20) - $signed(_zz_result_payload_x_73));
  assign _zz__zz_result_payload_x_36 = ($signed(_zz_result_payload_x_35) - $signed(_zz_result_payload_x_50));
  assign _zz__zz_result_payload_x_36_1 = ($signed(_zz_result_payload_x_35) + $signed(_zz_result_payload_x_50));
  assign _zz__zz_result_payload_x_75 = 16'h0;
  assign _zz__zz_result_payload_x_75_1 = 16'h0;
  assign _zz__zz_result_payload_x_6 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_6_1 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_6_2 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_6_3 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_22 = ($signed(_zz_result_payload_x_21) + $signed(_zz_result_payload_x_76));
  assign _zz__zz_result_payload_x_22_1 = ($signed(_zz_result_payload_x_21) - $signed(_zz_result_payload_x_76));
  assign _zz__zz_result_payload_x_37 = ($signed(_zz_result_payload_x_36) - $signed(_zz_result_payload_x_51));
  assign _zz__zz_result_payload_x_37_1 = ($signed(_zz_result_payload_x_36) + $signed(_zz_result_payload_x_51));
  assign _zz__zz_result_payload_x_78 = 16'h0;
  assign _zz__zz_result_payload_x_78_1 = 16'h0;
  assign _zz__zz_result_payload_x_7 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_7_1 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_7_2 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_7_3 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_23 = ($signed(_zz_result_payload_x_22) + $signed(_zz_result_payload_x_79));
  assign _zz__zz_result_payload_x_23_1 = ($signed(_zz_result_payload_x_22) - $signed(_zz_result_payload_x_79));
  assign _zz__zz_result_payload_x_38 = ($signed(_zz_result_payload_x_37) - $signed(_zz_result_payload_x_52));
  assign _zz__zz_result_payload_x_38_1 = ($signed(_zz_result_payload_x_37) + $signed(_zz_result_payload_x_52));
  assign _zz__zz_result_payload_x_81 = 16'h0;
  assign _zz__zz_result_payload_x_81_1 = 16'h0;
  assign _zz__zz_result_payload_x_8 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_8_1 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_8_2 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_8_3 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_24 = ($signed(_zz_result_payload_x_23) + $signed(_zz_result_payload_x_82));
  assign _zz__zz_result_payload_x_24_1 = ($signed(_zz_result_payload_x_23) - $signed(_zz_result_payload_x_82));
  assign _zz__zz_result_payload_x_39 = ($signed(_zz_result_payload_x_38) - $signed(_zz_result_payload_x_53));
  assign _zz__zz_result_payload_x_39_1 = ($signed(_zz_result_payload_x_38) + $signed(_zz_result_payload_x_53));
  assign _zz__zz_result_payload_x_84 = 16'h0;
  assign _zz__zz_result_payload_x_84_1 = 16'h0;
  assign _zz__zz_result_payload_x_9 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_9_1 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_9_2 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_9_3 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_25 = ($signed(_zz_result_payload_x_24) + $signed(_zz_result_payload_x_85));
  assign _zz__zz_result_payload_x_25_1 = ($signed(_zz_result_payload_x_24) - $signed(_zz_result_payload_x_85));
  assign _zz__zz_result_payload_x_40 = ($signed(_zz_result_payload_x_39) - $signed(_zz_result_payload_x_54));
  assign _zz__zz_result_payload_x_40_1 = ($signed(_zz_result_payload_x_39) + $signed(_zz_result_payload_x_54));
  assign _zz__zz_result_payload_x_87 = 16'h0;
  assign _zz__zz_result_payload_x_87_1 = 16'h0;
  assign _zz__zz_result_payload_x_10 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_10_1 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_10_2 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_10_3 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_26 = ($signed(_zz_result_payload_x_25) + $signed(_zz_result_payload_x_88));
  assign _zz__zz_result_payload_x_26_1 = ($signed(_zz_result_payload_x_25) - $signed(_zz_result_payload_x_88));
  assign _zz__zz_result_payload_x_41 = ($signed(_zz_result_payload_x_40) - $signed(_zz_result_payload_x_55));
  assign _zz__zz_result_payload_x_41_1 = ($signed(_zz_result_payload_x_40) + $signed(_zz_result_payload_x_55));
  assign _zz__zz_result_payload_x_90 = 16'h0;
  assign _zz__zz_result_payload_x_90_1 = 16'h0;
  assign _zz__zz_result_payload_x_11 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_11_1 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_11_2 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_11_3 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_27 = ($signed(_zz_result_payload_x_26) + $signed(_zz_result_payload_x_91));
  assign _zz__zz_result_payload_x_27_1 = ($signed(_zz_result_payload_x_26) - $signed(_zz_result_payload_x_91));
  assign _zz__zz_result_payload_x_42 = ($signed(_zz_result_payload_x_41) - $signed(_zz_result_payload_x_56));
  assign _zz__zz_result_payload_x_42_1 = ($signed(_zz_result_payload_x_41) + $signed(_zz_result_payload_x_56));
  assign _zz__zz_result_payload_x_93 = 16'h0;
  assign _zz__zz_result_payload_x_93_1 = 16'h0;
  assign _zz__zz_result_payload_x_12 = ($signed(_zz_result_payload_x_11) - $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_12_1 = ($signed(_zz_result_payload_x_11) + $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_12_2 = ($signed(_zz_result_payload_x_11) + $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_12_3 = ($signed(_zz_result_payload_x_11) - $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_28 = ($signed(_zz_result_payload_x_27) + $signed(_zz_result_payload_x_94));
  assign _zz__zz_result_payload_x_28_1 = ($signed(_zz_result_payload_x_27) - $signed(_zz_result_payload_x_94));
  assign _zz__zz_result_payload_x_43 = ($signed(_zz_result_payload_x_42) - $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_43_1 = ($signed(_zz_result_payload_x_42) + $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_96 = 16'h0;
  assign _zz__zz_result_payload_x_96_1 = 16'h0;
  assign _zz__zz_result_payload_x_13 = ($signed(_zz_result_payload_x_12) - $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_13_1 = ($signed(_zz_result_payload_x_12) + $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_13_2 = ($signed(_zz_result_payload_x_12) + $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_13_3 = ($signed(_zz_result_payload_x_12) - $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_29 = ($signed(_zz_result_payload_x_28) + $signed(_zz_result_payload_x_97));
  assign _zz__zz_result_payload_x_29_1 = ($signed(_zz_result_payload_x_28) - $signed(_zz_result_payload_x_97));
  assign _zz__zz_result_payload_x_44 = ($signed(_zz_result_payload_x_43) - $signed(_zz_result_payload_x_58));
  assign _zz__zz_result_payload_x_44_1 = ($signed(_zz_result_payload_x_43) + $signed(_zz_result_payload_x_58));
  assign _zz__zz_result_payload_x_99 = 16'h0;
  assign _zz__zz_result_payload_x_99_1 = 16'h0;
  assign _zz__zz_result_payload_x_14 = ($signed(_zz_result_payload_x_13) - $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_14_1 = ($signed(_zz_result_payload_x_13) + $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_14_2 = ($signed(_zz_result_payload_x_13) + $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_14_3 = ($signed(_zz_result_payload_x_13) - $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_30 = ($signed(_zz_result_payload_x_29) + $signed(_zz_result_payload_x_100));
  assign _zz__zz_result_payload_x_30_1 = ($signed(_zz_result_payload_x_29) - $signed(_zz_result_payload_x_100));
  assign _zz__zz_result_payload_x_45 = ($signed(_zz_result_payload_x_44) - $signed(_zz_result_payload_x_59));
  assign _zz__zz_result_payload_x_45_1 = ($signed(_zz_result_payload_x_44) + $signed(_zz_result_payload_x_59));
  assign _zz__zz_result_payload_x_102 = 16'h0;
  assign _zz__zz_result_payload_x_102_1 = 16'h0;
  assign _zz__zz_result_payload_x_15 = ($signed(_zz_result_payload_x_14) - $signed(_zz_result_payload_x_103));
  assign _zz__zz_result_payload_x_15_1 = ($signed(_zz_result_payload_x_14) + $signed(_zz_result_payload_x_103));
  assign _zz__zz_result_payload_x_15_2 = ($signed(_zz_result_payload_x_14) + $signed(_zz_result_payload_x_103));
  assign _zz__zz_result_payload_x_15_3 = ($signed(_zz_result_payload_x_14) - $signed(_zz_result_payload_x_103));
  assign _zz__zz_result_payload_y = ($signed(_zz_result_payload_x_30) + $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_y_1 = ($signed(_zz_result_payload_x_30) - $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_z = ($signed(_zz_result_payload_x_45) - $signed(_zz_result_payload_z_1));
  assign _zz__zz_result_payload_z_1 = ($signed(_zz_result_payload_x_45) + $signed(_zz_result_payload_z_1));
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign _zz_result_payload_x_60 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_60) <= $signed(_zz_result_payload_x_31)) : ($signed(_zz_result_payload_x_16) < $signed(_zz__zz_result_payload_x_60_1)));
  assign _zz_result_payload_x_61 = ($signed(_zz_result_payload_x) >>> 0);
  assign _zz_result_payload_x_62 = ($signed(_zz_result_payload_x_16) >>> 0);
  assign _zz_result_payload_x_63 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_63) <= $signed(_zz_result_payload_x_32)) : ($signed(_zz_result_payload_x_17) < $signed(_zz__zz_result_payload_x_63_1)));
  assign _zz_result_payload_x_64 = ($signed(_zz_result_payload_x_1) >>> 1);
  assign _zz_result_payload_x_65 = ($signed(_zz_result_payload_x_17) >>> 1);
  assign _zz_result_payload_x_66 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_66) <= $signed(_zz_result_payload_x_33)) : ($signed(_zz_result_payload_x_18) < $signed(_zz__zz_result_payload_x_66_1)));
  assign _zz_result_payload_x_67 = ($signed(_zz_result_payload_x_2) >>> 2);
  assign _zz_result_payload_x_68 = ($signed(_zz_result_payload_x_18) >>> 2);
  assign _zz_result_payload_x_69 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_69) <= $signed(_zz_result_payload_x_34)) : ($signed(_zz_result_payload_x_19) < $signed(_zz__zz_result_payload_x_69_1)));
  assign _zz_result_payload_x_70 = ($signed(_zz_result_payload_x_3) >>> 3);
  assign _zz_result_payload_x_71 = ($signed(_zz_result_payload_x_19) >>> 3);
  assign _zz_result_payload_x_72 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_72) <= $signed(_zz_result_payload_x_35)) : ($signed(_zz_result_payload_x_20) < $signed(_zz__zz_result_payload_x_72_1)));
  assign _zz_result_payload_x_73 = ($signed(_zz_result_payload_x_4) >>> 4);
  assign _zz_result_payload_x_74 = ($signed(_zz_result_payload_x_20) >>> 4);
  assign _zz_result_payload_x_75 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_75) <= $signed(_zz_result_payload_x_36)) : ($signed(_zz_result_payload_x_21) < $signed(_zz__zz_result_payload_x_75_1)));
  assign _zz_result_payload_x_76 = ($signed(_zz_result_payload_x_5) >>> 5);
  assign _zz_result_payload_x_77 = ($signed(_zz_result_payload_x_21) >>> 5);
  assign _zz_result_payload_x_78 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_78) <= $signed(_zz_result_payload_x_37)) : ($signed(_zz_result_payload_x_22) < $signed(_zz__zz_result_payload_x_78_1)));
  assign _zz_result_payload_x_79 = ($signed(_zz_result_payload_x_6) >>> 6);
  assign _zz_result_payload_x_80 = ($signed(_zz_result_payload_x_22) >>> 6);
  assign _zz_result_payload_x_81 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_81) <= $signed(_zz_result_payload_x_38)) : ($signed(_zz_result_payload_x_23) < $signed(_zz__zz_result_payload_x_81_1)));
  assign _zz_result_payload_x_82 = ($signed(_zz_result_payload_x_7) >>> 7);
  assign _zz_result_payload_x_83 = ($signed(_zz_result_payload_x_23) >>> 7);
  assign _zz_result_payload_x_84 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_84) <= $signed(_zz_result_payload_x_39)) : ($signed(_zz_result_payload_x_24) < $signed(_zz__zz_result_payload_x_84_1)));
  assign _zz_result_payload_x_85 = ($signed(_zz_result_payload_x_8) >>> 8);
  assign _zz_result_payload_x_86 = ($signed(_zz_result_payload_x_24) >>> 8);
  assign _zz_result_payload_x_87 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_87) <= $signed(_zz_result_payload_x_40)) : ($signed(_zz_result_payload_x_25) < $signed(_zz__zz_result_payload_x_87_1)));
  assign _zz_result_payload_x_88 = ($signed(_zz_result_payload_x_9) >>> 9);
  assign _zz_result_payload_x_89 = ($signed(_zz_result_payload_x_25) >>> 9);
  assign _zz_result_payload_x_90 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_90) <= $signed(_zz_result_payload_x_41)) : ($signed(_zz_result_payload_x_26) < $signed(_zz__zz_result_payload_x_90_1)));
  assign _zz_result_payload_x_91 = ($signed(_zz_result_payload_x_10) >>> 10);
  assign _zz_result_payload_x_92 = ($signed(_zz_result_payload_x_26) >>> 10);
  assign _zz_result_payload_x_93 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_93) <= $signed(_zz_result_payload_x_42)) : ($signed(_zz_result_payload_x_27) < $signed(_zz__zz_result_payload_x_93_1)));
  assign _zz_result_payload_x_94 = ($signed(_zz_result_payload_x_11) >>> 11);
  assign _zz_result_payload_x_95 = ($signed(_zz_result_payload_x_27) >>> 11);
  assign _zz_result_payload_x_96 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_96) <= $signed(_zz_result_payload_x_43)) : ($signed(_zz_result_payload_x_28) < $signed(_zz__zz_result_payload_x_96_1)));
  assign _zz_result_payload_x_97 = ($signed(_zz_result_payload_x_12) >>> 12);
  assign _zz_result_payload_x_98 = ($signed(_zz_result_payload_x_28) >>> 12);
  assign _zz_result_payload_x_99 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_99) <= $signed(_zz_result_payload_x_44)) : ($signed(_zz_result_payload_x_29) < $signed(_zz__zz_result_payload_x_99_1)));
  assign _zz_result_payload_x_100 = ($signed(_zz_result_payload_x_13) >>> 13);
  assign _zz_result_payload_x_101 = ($signed(_zz_result_payload_x_29) >>> 13);
  assign _zz_result_payload_x_102 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_102) <= $signed(_zz_result_payload_x_45)) : ($signed(_zz_result_payload_x_30) < $signed(_zz__zz_result_payload_x_102_1)));
  assign _zz_result_payload_y_1 = ($signed(_zz_result_payload_x_14) >>> 14);
  assign _zz_result_payload_x_103 = ($signed(_zz_result_payload_x_30) >>> 14);
  assign result_valid = _zz_result_valid_15;
  assign result_payload_x = _zz_result_payload_x_15;
  assign result_payload_y = _zz_result_payload_y;
  assign result_payload_z = _zz_result_payload_z;
  assign raw_data_ready = result_ready;
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
    _zz_result_payload_x_46 <= 16'h0019;
    _zz_result_payload_x_47 <= 16'h000e;
    _zz_result_payload_x_48 <= 16'h0007;
    _zz_result_payload_x_49 <= 16'h0003;
    _zz_result_payload_x_50 <= 16'h0001;
    _zz_result_payload_x_51 <= 16'h0;
    _zz_result_payload_x_52 <= 16'h0;
    _zz_result_payload_x_53 <= 16'h0;
    _zz_result_payload_x_54 <= 16'h0;
    _zz_result_payload_x_55 <= 16'h0;
    _zz_result_payload_x_56 <= 16'h0;
    _zz_result_payload_x_57 <= 16'h0;
    _zz_result_payload_x_58 <= 16'h0;
    _zz_result_payload_x_59 <= 16'h0;
    _zz_result_payload_z_1 <= 16'h0;
    if(raw_data_fire) begin
      _zz_result_payload_x <= raw_data_payload_x;
      _zz_result_payload_x_16 <= raw_data_payload_y;
      _zz_result_payload_x_31 <= raw_data_payload_z;
    end
    if(_zz_result_valid) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_60 ? _zz__zz_result_payload_x_1 : _zz__zz_result_payload_x_1_1);
        end
        2'b10 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_60 ? _zz__zz_result_payload_x_1_2 : _zz__zz_result_payload_x_1_3);
        end
        default : begin
          _zz_result_payload_x_1 <= _zz_result_payload_x;
        end
      endcase
      _zz_result_payload_x_17 <= (_zz_result_payload_x_60 ? _zz__zz_result_payload_x_17 : _zz__zz_result_payload_x_17_1);
      _zz_result_payload_x_32 <= (_zz_result_payload_x_60 ? _zz__zz_result_payload_x_32 : _zz__zz_result_payload_x_32_1);
    end
    if(_zz_result_valid_1) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_63 ? _zz__zz_result_payload_x_2 : _zz__zz_result_payload_x_2_1);
        end
        2'b10 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_63 ? _zz__zz_result_payload_x_2_2 : _zz__zz_result_payload_x_2_3);
        end
        default : begin
          _zz_result_payload_x_2 <= _zz_result_payload_x_1;
        end
      endcase
      _zz_result_payload_x_18 <= (_zz_result_payload_x_63 ? _zz__zz_result_payload_x_18 : _zz__zz_result_payload_x_18_1);
      _zz_result_payload_x_33 <= (_zz_result_payload_x_63 ? _zz__zz_result_payload_x_33 : _zz__zz_result_payload_x_33_1);
    end
    if(_zz_result_valid_2) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_66 ? _zz__zz_result_payload_x_3 : _zz__zz_result_payload_x_3_1);
        end
        2'b10 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_66 ? _zz__zz_result_payload_x_3_2 : _zz__zz_result_payload_x_3_3);
        end
        default : begin
          _zz_result_payload_x_3 <= _zz_result_payload_x_2;
        end
      endcase
      _zz_result_payload_x_19 <= (_zz_result_payload_x_66 ? _zz__zz_result_payload_x_19 : _zz__zz_result_payload_x_19_1);
      _zz_result_payload_x_34 <= (_zz_result_payload_x_66 ? _zz__zz_result_payload_x_34 : _zz__zz_result_payload_x_34_1);
    end
    if(_zz_result_valid_3) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_69 ? _zz__zz_result_payload_x_4 : _zz__zz_result_payload_x_4_1);
        end
        2'b10 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_69 ? _zz__zz_result_payload_x_4_2 : _zz__zz_result_payload_x_4_3);
        end
        default : begin
          _zz_result_payload_x_4 <= _zz_result_payload_x_3;
        end
      endcase
      _zz_result_payload_x_20 <= (_zz_result_payload_x_69 ? _zz__zz_result_payload_x_20 : _zz__zz_result_payload_x_20_1);
      _zz_result_payload_x_35 <= (_zz_result_payload_x_69 ? _zz__zz_result_payload_x_35 : _zz__zz_result_payload_x_35_1);
    end
    if(_zz_result_valid_4) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_72 ? _zz__zz_result_payload_x_5 : _zz__zz_result_payload_x_5_1);
        end
        2'b10 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_72 ? _zz__zz_result_payload_x_5_2 : _zz__zz_result_payload_x_5_3);
        end
        default : begin
          _zz_result_payload_x_5 <= _zz_result_payload_x_4;
        end
      endcase
      _zz_result_payload_x_21 <= (_zz_result_payload_x_72 ? _zz__zz_result_payload_x_21 : _zz__zz_result_payload_x_21_1);
      _zz_result_payload_x_36 <= (_zz_result_payload_x_72 ? _zz__zz_result_payload_x_36 : _zz__zz_result_payload_x_36_1);
    end
    if(_zz_result_valid_5) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_75 ? _zz__zz_result_payload_x_6 : _zz__zz_result_payload_x_6_1);
        end
        2'b10 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_75 ? _zz__zz_result_payload_x_6_2 : _zz__zz_result_payload_x_6_3);
        end
        default : begin
          _zz_result_payload_x_6 <= _zz_result_payload_x_5;
        end
      endcase
      _zz_result_payload_x_22 <= (_zz_result_payload_x_75 ? _zz__zz_result_payload_x_22 : _zz__zz_result_payload_x_22_1);
      _zz_result_payload_x_37 <= (_zz_result_payload_x_75 ? _zz__zz_result_payload_x_37 : _zz__zz_result_payload_x_37_1);
    end
    if(_zz_result_valid_6) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_78 ? _zz__zz_result_payload_x_7 : _zz__zz_result_payload_x_7_1);
        end
        2'b10 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_78 ? _zz__zz_result_payload_x_7_2 : _zz__zz_result_payload_x_7_3);
        end
        default : begin
          _zz_result_payload_x_7 <= _zz_result_payload_x_6;
        end
      endcase
      _zz_result_payload_x_23 <= (_zz_result_payload_x_78 ? _zz__zz_result_payload_x_23 : _zz__zz_result_payload_x_23_1);
      _zz_result_payload_x_38 <= (_zz_result_payload_x_78 ? _zz__zz_result_payload_x_38 : _zz__zz_result_payload_x_38_1);
    end
    if(_zz_result_valid_7) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_81 ? _zz__zz_result_payload_x_8 : _zz__zz_result_payload_x_8_1);
        end
        2'b10 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_81 ? _zz__zz_result_payload_x_8_2 : _zz__zz_result_payload_x_8_3);
        end
        default : begin
          _zz_result_payload_x_8 <= _zz_result_payload_x_7;
        end
      endcase
      _zz_result_payload_x_24 <= (_zz_result_payload_x_81 ? _zz__zz_result_payload_x_24 : _zz__zz_result_payload_x_24_1);
      _zz_result_payload_x_39 <= (_zz_result_payload_x_81 ? _zz__zz_result_payload_x_39 : _zz__zz_result_payload_x_39_1);
    end
    if(_zz_result_valid_8) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_84 ? _zz__zz_result_payload_x_9 : _zz__zz_result_payload_x_9_1);
        end
        2'b10 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_84 ? _zz__zz_result_payload_x_9_2 : _zz__zz_result_payload_x_9_3);
        end
        default : begin
          _zz_result_payload_x_9 <= _zz_result_payload_x_8;
        end
      endcase
      _zz_result_payload_x_25 <= (_zz_result_payload_x_84 ? _zz__zz_result_payload_x_25 : _zz__zz_result_payload_x_25_1);
      _zz_result_payload_x_40 <= (_zz_result_payload_x_84 ? _zz__zz_result_payload_x_40 : _zz__zz_result_payload_x_40_1);
    end
    if(_zz_result_valid_9) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_87 ? _zz__zz_result_payload_x_10 : _zz__zz_result_payload_x_10_1);
        end
        2'b10 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_87 ? _zz__zz_result_payload_x_10_2 : _zz__zz_result_payload_x_10_3);
        end
        default : begin
          _zz_result_payload_x_10 <= _zz_result_payload_x_9;
        end
      endcase
      _zz_result_payload_x_26 <= (_zz_result_payload_x_87 ? _zz__zz_result_payload_x_26 : _zz__zz_result_payload_x_26_1);
      _zz_result_payload_x_41 <= (_zz_result_payload_x_87 ? _zz__zz_result_payload_x_41 : _zz__zz_result_payload_x_41_1);
    end
    if(_zz_result_valid_10) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_90 ? _zz__zz_result_payload_x_11 : _zz__zz_result_payload_x_11_1);
        end
        2'b10 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_90 ? _zz__zz_result_payload_x_11_2 : _zz__zz_result_payload_x_11_3);
        end
        default : begin
          _zz_result_payload_x_11 <= _zz_result_payload_x_10;
        end
      endcase
      _zz_result_payload_x_27 <= (_zz_result_payload_x_90 ? _zz__zz_result_payload_x_27 : _zz__zz_result_payload_x_27_1);
      _zz_result_payload_x_42 <= (_zz_result_payload_x_90 ? _zz__zz_result_payload_x_42 : _zz__zz_result_payload_x_42_1);
    end
    if(_zz_result_valid_11) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_12 <= (_zz_result_payload_x_93 ? _zz__zz_result_payload_x_12 : _zz__zz_result_payload_x_12_1);
        end
        2'b10 : begin
          _zz_result_payload_x_12 <= (_zz_result_payload_x_93 ? _zz__zz_result_payload_x_12_2 : _zz__zz_result_payload_x_12_3);
        end
        default : begin
          _zz_result_payload_x_12 <= _zz_result_payload_x_11;
        end
      endcase
      _zz_result_payload_x_28 <= (_zz_result_payload_x_93 ? _zz__zz_result_payload_x_28 : _zz__zz_result_payload_x_28_1);
      _zz_result_payload_x_43 <= (_zz_result_payload_x_93 ? _zz__zz_result_payload_x_43 : _zz__zz_result_payload_x_43_1);
    end
    if(_zz_result_valid_12) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_13 <= (_zz_result_payload_x_96 ? _zz__zz_result_payload_x_13 : _zz__zz_result_payload_x_13_1);
        end
        2'b10 : begin
          _zz_result_payload_x_13 <= (_zz_result_payload_x_96 ? _zz__zz_result_payload_x_13_2 : _zz__zz_result_payload_x_13_3);
        end
        default : begin
          _zz_result_payload_x_13 <= _zz_result_payload_x_12;
        end
      endcase
      _zz_result_payload_x_29 <= (_zz_result_payload_x_96 ? _zz__zz_result_payload_x_29 : _zz__zz_result_payload_x_29_1);
      _zz_result_payload_x_44 <= (_zz_result_payload_x_96 ? _zz__zz_result_payload_x_44 : _zz__zz_result_payload_x_44_1);
    end
    if(_zz_result_valid_13) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_14 <= (_zz_result_payload_x_99 ? _zz__zz_result_payload_x_14 : _zz__zz_result_payload_x_14_1);
        end
        2'b10 : begin
          _zz_result_payload_x_14 <= (_zz_result_payload_x_99 ? _zz__zz_result_payload_x_14_2 : _zz__zz_result_payload_x_14_3);
        end
        default : begin
          _zz_result_payload_x_14 <= _zz_result_payload_x_13;
        end
      endcase
      _zz_result_payload_x_30 <= (_zz_result_payload_x_99 ? _zz__zz_result_payload_x_30 : _zz__zz_result_payload_x_30_1);
      _zz_result_payload_x_45 <= (_zz_result_payload_x_99 ? _zz__zz_result_payload_x_45 : _zz__zz_result_payload_x_45_1);
    end
    if(_zz_result_valid_14) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_15 <= (_zz_result_payload_x_102 ? _zz__zz_result_payload_x_15 : _zz__zz_result_payload_x_15_1);
        end
        2'b10 : begin
          _zz_result_payload_x_15 <= (_zz_result_payload_x_102 ? _zz__zz_result_payload_x_15_2 : _zz__zz_result_payload_x_15_3);
        end
        default : begin
          _zz_result_payload_x_15 <= _zz_result_payload_x_14;
        end
      endcase
      _zz_result_payload_y <= (_zz_result_payload_x_102 ? _zz__zz_result_payload_y : _zz__zz_result_payload_y_1);
      _zz_result_payload_z <= (_zz_result_payload_x_102 ? _zz__zz_result_payload_z : _zz__zz_result_payload_z_1);
    end
  end


endmodule
