// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : CFOCorrector
// Git hash  : cf8112ca4b6fbc647e801d7a00f410aa23474696



module CFOCorrector (
  input               ref_data_valid,
  input      [15:0]   ref_data_payload_cha_i,
  input      [15:0]   ref_data_payload_cha_q,
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_cha_i,
  input      [15:0]   raw_data_payload_cha_q,
  output              rotated_data_valid,
  output     [15:0]   rotated_data_payload_cha_i,
  output     [15:0]   rotated_data_payload_cha_q,
  input               enable,
  input               clk,
  input               reset
);
  wire                phase_rotator_rotated_data_valid;
  wire       [15:0]   phase_rotator_rotated_data_payload_cha_i;
  wire       [15:0]   phase_rotator_rotated_data_payload_cha_q;
  wire                cfo_estimator_delta_phi_valid;
  wire       [15:0]   cfo_estimator_delta_phi_payload;
  wire                phase_rotator_rotated_data_takeWhen_valid;
  wire       [15:0]   phase_rotator_rotated_data_takeWhen_payload_cha_i;
  wire       [15:0]   phase_rotator_rotated_data_takeWhen_payload_cha_q;

  PhaseRotator phase_rotator (
    .raw_data_valid                (raw_data_valid                            ), //i
    .raw_data_payload_cha_i        (raw_data_payload_cha_i                    ), //i
    .raw_data_payload_cha_q        (raw_data_payload_cha_q                    ), //i
    .phiCorrect_valid              (cfo_estimator_delta_phi_valid             ), //i
    .phiCorrect_payload            (cfo_estimator_delta_phi_payload           ), //i
    .rotated_data_valid            (phase_rotator_rotated_data_valid          ), //o
    .rotated_data_payload_cha_i    (phase_rotator_rotated_data_payload_cha_i  ), //o
    .rotated_data_payload_cha_q    (phase_rotator_rotated_data_payload_cha_q  ), //o
    .clk                           (clk                                       ), //i
    .reset                         (reset                                     )  //i
  );
  CFOEstimator cfo_estimator (
    .rotated_data_valid            (phase_rotator_rotated_data_takeWhen_valid          ), //i
    .rotated_data_payload_cha_i    (phase_rotator_rotated_data_takeWhen_payload_cha_i  ), //i
    .rotated_data_payload_cha_q    (phase_rotator_rotated_data_takeWhen_payload_cha_q  ), //i
    .delta_phi_valid               (cfo_estimator_delta_phi_valid                      ), //o
    .delta_phi_payload             (cfo_estimator_delta_phi_payload                    ), //o
    .clk                           (clk                                                ), //i
    .reset                         (reset                                              )  //i
  );
  assign rotated_data_valid = phase_rotator_rotated_data_valid;
  assign rotated_data_payload_cha_i = phase_rotator_rotated_data_payload_cha_i;
  assign rotated_data_payload_cha_q = phase_rotator_rotated_data_payload_cha_q;
  assign phase_rotator_rotated_data_takeWhen_valid = (phase_rotator_rotated_data_valid && enable);
  assign phase_rotator_rotated_data_takeWhen_payload_cha_i = phase_rotator_rotated_data_payload_cha_i;
  assign phase_rotator_rotated_data_takeWhen_payload_cha_q = phase_rotator_rotated_data_payload_cha_q;

endmodule

module CFOEstimator (
  input               rotated_data_valid,
  input      [15:0]   rotated_data_payload_cha_i,
  input      [15:0]   rotated_data_payload_cha_q,
  output              delta_phi_valid,
  output     [15:0]   delta_phi_payload,
  input               clk,
  input               reset
);
  wire       [31:0]   cordic_core_raw_data_payload_y;
  wire                auto_corr_core_corr_result_valid;
  wire       [31:0]   auto_corr_core_corr_result_payload_cha_i;
  wire       [31:0]   auto_corr_core_corr_result_payload_cha_q;
  wire                cordic_core_raw_data_ready;
  wire                cordic_core_result_valid;
  wire       [31:0]   cordic_core_result_payload_x;
  wire       [31:0]   cordic_core_result_payload_y;
  wire       [31:0]   cordic_core_result_payload_z;
  wire       [64:0]   _zz__zz_delta_phi_payload_4;
  wire       [64:0]   _zz__zz_delta_phi_payload_4_1;
  wire       [21:0]   _zz_when_SInt_l186;
  wire       [42:0]   _zz__zz_delta_phi_payload_6;
  wire       [42:0]   _zz__zz_delta_phi_payload_6_1;
  wire       [64:0]   _zz__zz_delta_phi_payload;
  wire       [64:0]   _zz__zz_delta_phi_payload_1;
  wire       [64:0]   _zz__zz_delta_phi_payload_2;
  wire       [1:0]    _zz_when_SInt_l126;
  wire       [0:0]    _zz_when_SInt_l132;
  wire       [26:0]   _zz_when_SInt_l126_1;
  wire       [25:0]   _zz_when_SInt_l132_1;
  wire       [6:0]    _zz_impluse_cnt;
  wire       [31:0]   scale;
  reg        [6:0]    impluse_cnt;
  wire       [63:0]   probe_val;
  reg        [42:0]   _zz_delta_phi_payload;
  wire       [63:0]   _zz_delta_phi_payload_1;
  wire       [63:0]   _zz_delta_phi_payload_2;
  wire       [63:0]   _zz_delta_phi_payload_3;
  wire       [64:0]   _zz_delta_phi_payload_4;
  wire       [63:0]   _zz_delta_phi_payload_5;
  wire                when_SInt_l332;
  reg        [42:0]   _zz_delta_phi_payload_6;
  wire                when_SInt_l186;
  reg        [41:0]   _zz_delta_phi_payload_7;
  wire                when_SInt_l125;
  wire                when_SInt_l126;
  wire                when_SInt_l132;
  reg        [15:0]   _zz_delta_phi_payload_8;
  wire                when_SInt_l125_1;
  wire                when_SInt_l126_1;
  wire                when_SInt_l132_1;

  assign _zz__zz_delta_phi_payload_4 = {_zz_delta_phi_payload_3[63],_zz_delta_phi_payload_3};
  assign _zz__zz_delta_phi_payload_4_1 = {_zz_delta_phi_payload_2[63],_zz_delta_phi_payload_2};
  assign _zz_when_SInt_l186 = _zz_delta_phi_payload_4[21 : 0];
  assign _zz__zz_delta_phi_payload_6 = _zz_delta_phi_payload_4[64 : 22];
  assign _zz__zz_delta_phi_payload_6_1 = 43'h00000000001;
  assign _zz__zz_delta_phi_payload = ($signed(_zz__zz_delta_phi_payload_1) + $signed(_zz__zz_delta_phi_payload_2));
  assign _zz__zz_delta_phi_payload_1 = {_zz_delta_phi_payload_5[63],_zz_delta_phi_payload_5};
  assign _zz__zz_delta_phi_payload_2 = {_zz_delta_phi_payload_1[63],_zz_delta_phi_payload_1};
  assign _zz_when_SInt_l126 = _zz_delta_phi_payload[42 : 41];
  assign _zz_when_SInt_l132 = _zz_delta_phi_payload[41 : 41];
  assign _zz_when_SInt_l126_1 = _zz_delta_phi_payload_7[41 : 15];
  assign _zz_when_SInt_l132_1 = _zz_delta_phi_payload_7[40 : 15];
  assign _zz_impluse_cnt = (impluse_cnt + 7'h01);
  AutoCorrelator auto_corr_core (
    .raw_data_valid               (rotated_data_valid                        ), //i
    .raw_data_payload_cha_i       (rotated_data_payload_cha_i                ), //i
    .raw_data_payload_cha_q       (rotated_data_payload_cha_q                ), //i
    .corr_result_valid            (auto_corr_core_corr_result_valid          ), //o
    .corr_result_payload_cha_i    (auto_corr_core_corr_result_payload_cha_i  ), //o
    .corr_result_payload_cha_q    (auto_corr_core_corr_result_payload_cha_q  ), //o
    .clk                          (clk                                       ), //i
    .reset                        (reset                                     )  //i
  );
  CordicRotator_1 cordic_core (
    .rotate_mode           (1'b0                                      ), //i
    .x_u                   (2'b00                                     ), //i
    .raw_data_valid        (auto_corr_core_corr_result_valid          ), //i
    .raw_data_ready        (cordic_core_raw_data_ready                ), //o
    .raw_data_payload_x    (auto_corr_core_corr_result_payload_cha_i  ), //i
    .raw_data_payload_y    (cordic_core_raw_data_payload_y            ), //i
    .raw_data_payload_z    (32'h0                                     ), //i
    .result_valid          (cordic_core_result_valid                  ), //o
    .result_payload_x      (cordic_core_result_payload_x              ), //o
    .result_payload_y      (cordic_core_result_payload_y              ), //o
    .result_payload_z      (cordic_core_result_payload_z              ), //o
    .clk                   (clk                                       ), //i
    .reset                 (reset                                     )  //i
  );
  assign scale = 32'h00001000;
  assign cordic_core_raw_data_payload_y = (- auto_corr_core_corr_result_payload_cha_q);
  assign delta_phi_valid = (cordic_core_result_valid && (impluse_cnt == 7'h50));
  assign probe_val = ($signed(cordic_core_result_payload_z) * $signed(scale));
  assign _zz_delta_phi_payload_1 = {{42'h0,1'b1},21'h0};
  assign _zz_delta_phi_payload_2 = {43'h7ffffffffff,21'h0};
  assign _zz_delta_phi_payload_3 = probe_val[63 : 0];
  assign _zz_delta_phi_payload_4 = ($signed(_zz__zz_delta_phi_payload_4) + $signed(_zz__zz_delta_phi_payload_4_1));
  assign _zz_delta_phi_payload_5 = probe_val[63 : 0];
  assign when_SInt_l332 = _zz_delta_phi_payload_4[64];
  assign when_SInt_l186 = (_zz_when_SInt_l186 != 22'h0);
  always @(*) begin
    if(when_SInt_l186) begin
      _zz_delta_phi_payload_6 = ($signed(_zz__zz_delta_phi_payload_6) + $signed(_zz__zz_delta_phi_payload_6_1));
    end else begin
      _zz_delta_phi_payload_6 = _zz_delta_phi_payload_4[64 : 22];
    end
  end

  always @(*) begin
    if(when_SInt_l332) begin
      _zz_delta_phi_payload = _zz_delta_phi_payload_6;
    end else begin
      _zz_delta_phi_payload = (_zz__zz_delta_phi_payload >>> 22);
    end
  end

  assign when_SInt_l125 = _zz_delta_phi_payload[42];
  assign when_SInt_l126 = (! (_zz_when_SInt_l126 == 2'b11));
  always @(*) begin
    if(when_SInt_l125) begin
      if(when_SInt_l126) begin
        _zz_delta_phi_payload_7 = 42'h20000000000;
      end else begin
        _zz_delta_phi_payload_7 = _zz_delta_phi_payload[41 : 0];
      end
    end else begin
      if(when_SInt_l132) begin
        _zz_delta_phi_payload_7 = 42'h1ffffffffff;
      end else begin
        _zz_delta_phi_payload_7 = _zz_delta_phi_payload[41 : 0];
      end
    end
  end

  assign when_SInt_l132 = (_zz_when_SInt_l132 != 1'b0);
  assign when_SInt_l125_1 = _zz_delta_phi_payload_7[41];
  assign when_SInt_l126_1 = (! (_zz_when_SInt_l126_1 == 27'h7ffffff));
  always @(*) begin
    if(when_SInt_l125_1) begin
      if(when_SInt_l126_1) begin
        _zz_delta_phi_payload_8 = 16'h8000;
      end else begin
        _zz_delta_phi_payload_8 = _zz_delta_phi_payload_7[15 : 0];
      end
    end else begin
      if(when_SInt_l132_1) begin
        _zz_delta_phi_payload_8 = 16'h7fff;
      end else begin
        _zz_delta_phi_payload_8 = _zz_delta_phi_payload_7[15 : 0];
      end
    end
  end

  assign when_SInt_l132_1 = (_zz_when_SInt_l132_1 != 26'h0);
  assign delta_phi_payload = _zz_delta_phi_payload_8;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      impluse_cnt <= 7'h0;
    end else begin
      if(rotated_data_valid) begin
        impluse_cnt <= ((impluse_cnt == 7'h50) ? 7'h0 : _zz_impluse_cnt);
      end else begin
        impluse_cnt <= 7'h0;
      end
    end
  end


endmodule

module PhaseRotator (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_cha_i,
  input      [15:0]   raw_data_payload_cha_q,
  input               phiCorrect_valid,
  input      [15:0]   phiCorrect_payload,
  output              rotated_data_valid,
  output     [15:0]   rotated_data_payload_cha_i,
  output     [15:0]   rotated_data_payload_cha_q,
  input               clk,
  input               reset
);
  wire                cordic_pipeline_core_raw_data_ready;
  wire                cordic_pipeline_core_result_valid;
  wire       [15:0]   cordic_pipeline_core_result_payload_x;
  wire       [15:0]   cordic_pipeline_core_result_payload_y;
  wire       [15:0]   cordic_pipeline_core_result_payload_z;
  wire       [15:0]   _zz_when_PhaseRotator_l39;
  wire       [15:0]   _zz_phiNext;
  wire       [15:0]   _zz_phiNext_1;
  wire       [15:0]   _zz_when_PhaseRotator_l41;
  wire       [15:0]   _zz_when_PhaseRotator_l41_1;
  reg        [15:0]   phi;
  reg        [15:0]   phiNext;
  wire       [15:0]   math_pi;
  wire       [15:0]   math_2_pi;
  wire                when_PhaseRotator_l39;
  wire                when_PhaseRotator_l41;

  assign _zz_when_PhaseRotator_l39 = ($signed(phi) + $signed(phiCorrect_payload));
  assign _zz_phiNext = ($signed(phi) - $signed(math_2_pi));
  assign _zz_phiNext_1 = ($signed(phi) + $signed(math_2_pi));
  assign _zz_when_PhaseRotator_l41 = ($signed(phi) + $signed(phiCorrect_payload));
  assign _zz_when_PhaseRotator_l41_1 = (- math_pi);
  CordicRotator cordic_pipeline_core (
    .rotate_mode           (1'b1                                   ), //i
    .x_u                   (2'b00                                  ), //i
    .raw_data_valid        (raw_data_valid                         ), //i
    .raw_data_ready        (cordic_pipeline_core_raw_data_ready    ), //o
    .raw_data_payload_x    (raw_data_payload_cha_i                 ), //i
    .raw_data_payload_y    (raw_data_payload_cha_q                 ), //i
    .raw_data_payload_z    (phi                                    ), //i
    .result_valid          (cordic_pipeline_core_result_valid      ), //o
    .result_payload_x      (cordic_pipeline_core_result_payload_x  ), //o
    .result_payload_y      (cordic_pipeline_core_result_payload_y  ), //o
    .result_payload_z      (cordic_pipeline_core_result_payload_z  ), //o
    .clk                   (clk                                    ), //i
    .reset                 (reset                                  )  //i
  );
  assign math_pi = 16'h0064;
  assign math_2_pi = 16'h00c9;
  assign when_PhaseRotator_l39 = ($signed(math_pi) < $signed(_zz_when_PhaseRotator_l39));
  always @(*) begin
    if(when_PhaseRotator_l39) begin
      phiNext = ($signed(_zz_phiNext) + $signed(phiCorrect_payload));
    end else begin
      if(when_PhaseRotator_l41) begin
        phiNext = ($signed(_zz_phiNext_1) + $signed(phiCorrect_payload));
      end else begin
        phiNext = ($signed(phi) + $signed(phiCorrect_payload));
      end
    end
  end

  assign when_PhaseRotator_l41 = ($signed(_zz_when_PhaseRotator_l41) < $signed(_zz_when_PhaseRotator_l41_1));
  assign rotated_data_valid = cordic_pipeline_core_result_valid;
  assign rotated_data_payload_cha_i = cordic_pipeline_core_result_payload_x;
  assign rotated_data_payload_cha_q = cordic_pipeline_core_result_payload_y;
  always @(posedge clk) begin
    if(raw_data_valid) begin
      phi <= 16'hffdb;
    end else begin
      phi <= 16'h0;
    end
  end


endmodule

module CordicRotator_1 (
  input               rotate_mode,
  input      [1:0]    x_u,
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
  wire       [31:0]   _zz__zz_result_payload_x_60;
  wire       [31:0]   _zz__zz_result_payload_x_60_1;
  wire       [31:0]   _zz__zz_result_payload_x_1;
  wire       [31:0]   _zz__zz_result_payload_x_1_1;
  wire       [31:0]   _zz__zz_result_payload_x_1_2;
  wire       [31:0]   _zz__zz_result_payload_x_1_3;
  wire       [31:0]   _zz__zz_result_payload_x_17;
  wire       [31:0]   _zz__zz_result_payload_x_17_1;
  wire       [31:0]   _zz__zz_result_payload_x_32;
  wire       [31:0]   _zz__zz_result_payload_x_32_1;
  wire       [31:0]   _zz__zz_result_payload_x_63;
  wire       [31:0]   _zz__zz_result_payload_x_63_1;
  wire       [31:0]   _zz__zz_result_payload_x_2;
  wire       [31:0]   _zz__zz_result_payload_x_2_1;
  wire       [31:0]   _zz__zz_result_payload_x_2_2;
  wire       [31:0]   _zz__zz_result_payload_x_2_3;
  wire       [31:0]   _zz__zz_result_payload_x_18;
  wire       [31:0]   _zz__zz_result_payload_x_18_1;
  wire       [31:0]   _zz__zz_result_payload_x_33;
  wire       [31:0]   _zz__zz_result_payload_x_33_1;
  wire       [31:0]   _zz__zz_result_payload_x_66;
  wire       [31:0]   _zz__zz_result_payload_x_66_1;
  wire       [31:0]   _zz__zz_result_payload_x_3;
  wire       [31:0]   _zz__zz_result_payload_x_3_1;
  wire       [31:0]   _zz__zz_result_payload_x_3_2;
  wire       [31:0]   _zz__zz_result_payload_x_3_3;
  wire       [31:0]   _zz__zz_result_payload_x_19;
  wire       [31:0]   _zz__zz_result_payload_x_19_1;
  wire       [31:0]   _zz__zz_result_payload_x_34;
  wire       [31:0]   _zz__zz_result_payload_x_34_1;
  wire       [31:0]   _zz__zz_result_payload_x_69;
  wire       [31:0]   _zz__zz_result_payload_x_69_1;
  wire       [31:0]   _zz__zz_result_payload_x_4;
  wire       [31:0]   _zz__zz_result_payload_x_4_1;
  wire       [31:0]   _zz__zz_result_payload_x_4_2;
  wire       [31:0]   _zz__zz_result_payload_x_4_3;
  wire       [31:0]   _zz__zz_result_payload_x_20;
  wire       [31:0]   _zz__zz_result_payload_x_20_1;
  wire       [31:0]   _zz__zz_result_payload_x_35;
  wire       [31:0]   _zz__zz_result_payload_x_35_1;
  wire       [31:0]   _zz__zz_result_payload_x_72;
  wire       [31:0]   _zz__zz_result_payload_x_72_1;
  wire       [31:0]   _zz__zz_result_payload_x_5;
  wire       [31:0]   _zz__zz_result_payload_x_5_1;
  wire       [31:0]   _zz__zz_result_payload_x_5_2;
  wire       [31:0]   _zz__zz_result_payload_x_5_3;
  wire       [31:0]   _zz__zz_result_payload_x_21;
  wire       [31:0]   _zz__zz_result_payload_x_21_1;
  wire       [31:0]   _zz__zz_result_payload_x_36;
  wire       [31:0]   _zz__zz_result_payload_x_36_1;
  wire       [31:0]   _zz__zz_result_payload_x_75;
  wire       [31:0]   _zz__zz_result_payload_x_75_1;
  wire       [31:0]   _zz__zz_result_payload_x_6;
  wire       [31:0]   _zz__zz_result_payload_x_6_1;
  wire       [31:0]   _zz__zz_result_payload_x_6_2;
  wire       [31:0]   _zz__zz_result_payload_x_6_3;
  wire       [31:0]   _zz__zz_result_payload_x_22;
  wire       [31:0]   _zz__zz_result_payload_x_22_1;
  wire       [31:0]   _zz__zz_result_payload_x_37;
  wire       [31:0]   _zz__zz_result_payload_x_37_1;
  wire       [31:0]   _zz__zz_result_payload_x_78;
  wire       [31:0]   _zz__zz_result_payload_x_78_1;
  wire       [31:0]   _zz__zz_result_payload_x_7;
  wire       [31:0]   _zz__zz_result_payload_x_7_1;
  wire       [31:0]   _zz__zz_result_payload_x_7_2;
  wire       [31:0]   _zz__zz_result_payload_x_7_3;
  wire       [31:0]   _zz__zz_result_payload_x_23;
  wire       [31:0]   _zz__zz_result_payload_x_23_1;
  wire       [31:0]   _zz__zz_result_payload_x_38;
  wire       [31:0]   _zz__zz_result_payload_x_38_1;
  wire       [31:0]   _zz__zz_result_payload_x_81;
  wire       [31:0]   _zz__zz_result_payload_x_81_1;
  wire       [31:0]   _zz__zz_result_payload_x_8;
  wire       [31:0]   _zz__zz_result_payload_x_8_1;
  wire       [31:0]   _zz__zz_result_payload_x_8_2;
  wire       [31:0]   _zz__zz_result_payload_x_8_3;
  wire       [31:0]   _zz__zz_result_payload_x_24;
  wire       [31:0]   _zz__zz_result_payload_x_24_1;
  wire       [31:0]   _zz__zz_result_payload_x_39;
  wire       [31:0]   _zz__zz_result_payload_x_39_1;
  wire       [31:0]   _zz__zz_result_payload_x_84;
  wire       [31:0]   _zz__zz_result_payload_x_84_1;
  wire       [31:0]   _zz__zz_result_payload_x_9;
  wire       [31:0]   _zz__zz_result_payload_x_9_1;
  wire       [31:0]   _zz__zz_result_payload_x_9_2;
  wire       [31:0]   _zz__zz_result_payload_x_9_3;
  wire       [31:0]   _zz__zz_result_payload_x_25;
  wire       [31:0]   _zz__zz_result_payload_x_25_1;
  wire       [31:0]   _zz__zz_result_payload_x_40;
  wire       [31:0]   _zz__zz_result_payload_x_40_1;
  wire       [31:0]   _zz__zz_result_payload_x_87;
  wire       [31:0]   _zz__zz_result_payload_x_87_1;
  wire       [31:0]   _zz__zz_result_payload_x_10;
  wire       [31:0]   _zz__zz_result_payload_x_10_1;
  wire       [31:0]   _zz__zz_result_payload_x_10_2;
  wire       [31:0]   _zz__zz_result_payload_x_10_3;
  wire       [31:0]   _zz__zz_result_payload_x_26;
  wire       [31:0]   _zz__zz_result_payload_x_26_1;
  wire       [31:0]   _zz__zz_result_payload_x_41;
  wire       [31:0]   _zz__zz_result_payload_x_41_1;
  wire       [31:0]   _zz__zz_result_payload_x_90;
  wire       [31:0]   _zz__zz_result_payload_x_90_1;
  wire       [31:0]   _zz__zz_result_payload_x_11;
  wire       [31:0]   _zz__zz_result_payload_x_11_1;
  wire       [31:0]   _zz__zz_result_payload_x_11_2;
  wire       [31:0]   _zz__zz_result_payload_x_11_3;
  wire       [31:0]   _zz__zz_result_payload_x_27;
  wire       [31:0]   _zz__zz_result_payload_x_27_1;
  wire       [31:0]   _zz__zz_result_payload_x_42;
  wire       [31:0]   _zz__zz_result_payload_x_42_1;
  wire       [31:0]   _zz__zz_result_payload_x_93;
  wire       [31:0]   _zz__zz_result_payload_x_93_1;
  wire       [31:0]   _zz__zz_result_payload_x_12;
  wire       [31:0]   _zz__zz_result_payload_x_12_1;
  wire       [31:0]   _zz__zz_result_payload_x_12_2;
  wire       [31:0]   _zz__zz_result_payload_x_12_3;
  wire       [31:0]   _zz__zz_result_payload_x_28;
  wire       [31:0]   _zz__zz_result_payload_x_28_1;
  wire       [31:0]   _zz__zz_result_payload_x_43;
  wire       [31:0]   _zz__zz_result_payload_x_43_1;
  wire       [31:0]   _zz__zz_result_payload_x_96;
  wire       [31:0]   _zz__zz_result_payload_x_96_1;
  wire       [31:0]   _zz__zz_result_payload_x_13;
  wire       [31:0]   _zz__zz_result_payload_x_13_1;
  wire       [31:0]   _zz__zz_result_payload_x_13_2;
  wire       [31:0]   _zz__zz_result_payload_x_13_3;
  wire       [31:0]   _zz__zz_result_payload_x_29;
  wire       [31:0]   _zz__zz_result_payload_x_29_1;
  wire       [31:0]   _zz__zz_result_payload_x_44;
  wire       [31:0]   _zz__zz_result_payload_x_44_1;
  wire       [31:0]   _zz__zz_result_payload_x_99;
  wire       [31:0]   _zz__zz_result_payload_x_99_1;
  wire       [31:0]   _zz__zz_result_payload_x_14;
  wire       [31:0]   _zz__zz_result_payload_x_14_1;
  wire       [31:0]   _zz__zz_result_payload_x_14_2;
  wire       [31:0]   _zz__zz_result_payload_x_14_3;
  wire       [31:0]   _zz__zz_result_payload_x_30;
  wire       [31:0]   _zz__zz_result_payload_x_30_1;
  wire       [31:0]   _zz__zz_result_payload_x_45;
  wire       [31:0]   _zz__zz_result_payload_x_45_1;
  wire       [31:0]   _zz__zz_result_payload_x_102;
  wire       [31:0]   _zz__zz_result_payload_x_102_1;
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
  reg        [31:0]   _zz_result_payload_x_46;
  reg        [31:0]   _zz_result_payload_x_47;
  reg        [31:0]   _zz_result_payload_x_48;
  reg        [31:0]   _zz_result_payload_x_49;
  reg        [31:0]   _zz_result_payload_x_50;
  reg        [31:0]   _zz_result_payload_x_51;
  reg        [31:0]   _zz_result_payload_x_52;
  reg        [31:0]   _zz_result_payload_x_53;
  reg        [31:0]   _zz_result_payload_x_54;
  reg        [31:0]   _zz_result_payload_x_55;
  reg        [31:0]   _zz_result_payload_x_56;
  reg        [31:0]   _zz_result_payload_x_57;
  reg        [31:0]   _zz_result_payload_x_58;
  reg        [31:0]   _zz_result_payload_x_59;
  reg        [31:0]   _zz_result_payload_z_1;
  wire                raw_data_fire;
  wire                _zz_result_payload_x_60;
  wire       [31:0]   _zz_result_payload_x_61;
  wire       [31:0]   _zz_result_payload_x_62;
  wire                _zz_result_payload_x_63;
  wire       [31:0]   _zz_result_payload_x_64;
  wire       [31:0]   _zz_result_payload_x_65;
  wire                _zz_result_payload_x_66;
  wire       [31:0]   _zz_result_payload_x_67;
  wire       [31:0]   _zz_result_payload_x_68;
  wire                _zz_result_payload_x_69;
  wire       [31:0]   _zz_result_payload_x_70;
  wire       [31:0]   _zz_result_payload_x_71;
  wire                _zz_result_payload_x_72;
  wire       [31:0]   _zz_result_payload_x_73;
  wire       [31:0]   _zz_result_payload_x_74;
  wire                _zz_result_payload_x_75;
  wire       [31:0]   _zz_result_payload_x_76;
  wire       [31:0]   _zz_result_payload_x_77;
  wire                _zz_result_payload_x_78;
  wire       [31:0]   _zz_result_payload_x_79;
  wire       [31:0]   _zz_result_payload_x_80;
  wire                _zz_result_payload_x_81;
  wire       [31:0]   _zz_result_payload_x_82;
  wire       [31:0]   _zz_result_payload_x_83;
  wire                _zz_result_payload_x_84;
  wire       [31:0]   _zz_result_payload_x_85;
  wire       [31:0]   _zz_result_payload_x_86;
  wire                _zz_result_payload_x_87;
  wire       [31:0]   _zz_result_payload_x_88;
  wire       [31:0]   _zz_result_payload_x_89;
  wire                _zz_result_payload_x_90;
  wire       [31:0]   _zz_result_payload_x_91;
  wire       [31:0]   _zz_result_payload_x_92;
  wire                _zz_result_payload_x_93;
  wire       [31:0]   _zz_result_payload_x_94;
  wire       [31:0]   _zz_result_payload_x_95;
  wire                _zz_result_payload_x_96;
  wire       [31:0]   _zz_result_payload_x_97;
  wire       [31:0]   _zz_result_payload_x_98;
  wire                _zz_result_payload_x_99;
  wire       [31:0]   _zz_result_payload_x_100;
  wire       [31:0]   _zz_result_payload_x_101;
  wire                _zz_result_payload_x_102;
  wire       [31:0]   _zz_result_payload_y_1;
  wire       [31:0]   _zz_result_payload_x_103;

  assign _zz__zz_result_payload_x_60 = 32'h0;
  assign _zz__zz_result_payload_x_60_1 = 32'h0;
  assign _zz__zz_result_payload_x_1 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_1_1 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_1_2 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_1_3 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_17 = ($signed(_zz_result_payload_x_16) + $signed(_zz_result_payload_x_61));
  assign _zz__zz_result_payload_x_17_1 = ($signed(_zz_result_payload_x_16) - $signed(_zz_result_payload_x_61));
  assign _zz__zz_result_payload_x_32 = ($signed(_zz_result_payload_x_31) - $signed(_zz_result_payload_x_46));
  assign _zz__zz_result_payload_x_32_1 = ($signed(_zz_result_payload_x_31) + $signed(_zz_result_payload_x_46));
  assign _zz__zz_result_payload_x_63 = 32'h0;
  assign _zz__zz_result_payload_x_63_1 = 32'h0;
  assign _zz__zz_result_payload_x_2 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_2_1 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_2_2 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_2_3 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_18 = ($signed(_zz_result_payload_x_17) + $signed(_zz_result_payload_x_64));
  assign _zz__zz_result_payload_x_18_1 = ($signed(_zz_result_payload_x_17) - $signed(_zz_result_payload_x_64));
  assign _zz__zz_result_payload_x_33 = ($signed(_zz_result_payload_x_32) - $signed(_zz_result_payload_x_47));
  assign _zz__zz_result_payload_x_33_1 = ($signed(_zz_result_payload_x_32) + $signed(_zz_result_payload_x_47));
  assign _zz__zz_result_payload_x_66 = 32'h0;
  assign _zz__zz_result_payload_x_66_1 = 32'h0;
  assign _zz__zz_result_payload_x_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_3_1 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_3_2 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_3_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_19 = ($signed(_zz_result_payload_x_18) + $signed(_zz_result_payload_x_67));
  assign _zz__zz_result_payload_x_19_1 = ($signed(_zz_result_payload_x_18) - $signed(_zz_result_payload_x_67));
  assign _zz__zz_result_payload_x_34 = ($signed(_zz_result_payload_x_33) - $signed(_zz_result_payload_x_48));
  assign _zz__zz_result_payload_x_34_1 = ($signed(_zz_result_payload_x_33) + $signed(_zz_result_payload_x_48));
  assign _zz__zz_result_payload_x_69 = 32'h0;
  assign _zz__zz_result_payload_x_69_1 = 32'h0;
  assign _zz__zz_result_payload_x_4 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_4_1 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_4_2 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_4_3 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_20 = ($signed(_zz_result_payload_x_19) + $signed(_zz_result_payload_x_70));
  assign _zz__zz_result_payload_x_20_1 = ($signed(_zz_result_payload_x_19) - $signed(_zz_result_payload_x_70));
  assign _zz__zz_result_payload_x_35 = ($signed(_zz_result_payload_x_34) - $signed(_zz_result_payload_x_49));
  assign _zz__zz_result_payload_x_35_1 = ($signed(_zz_result_payload_x_34) + $signed(_zz_result_payload_x_49));
  assign _zz__zz_result_payload_x_72 = 32'h0;
  assign _zz__zz_result_payload_x_72_1 = 32'h0;
  assign _zz__zz_result_payload_x_5 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_5_1 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_5_2 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_5_3 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_21 = ($signed(_zz_result_payload_x_20) + $signed(_zz_result_payload_x_73));
  assign _zz__zz_result_payload_x_21_1 = ($signed(_zz_result_payload_x_20) - $signed(_zz_result_payload_x_73));
  assign _zz__zz_result_payload_x_36 = ($signed(_zz_result_payload_x_35) - $signed(_zz_result_payload_x_50));
  assign _zz__zz_result_payload_x_36_1 = ($signed(_zz_result_payload_x_35) + $signed(_zz_result_payload_x_50));
  assign _zz__zz_result_payload_x_75 = 32'h0;
  assign _zz__zz_result_payload_x_75_1 = 32'h0;
  assign _zz__zz_result_payload_x_6 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_6_1 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_6_2 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_6_3 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_22 = ($signed(_zz_result_payload_x_21) + $signed(_zz_result_payload_x_76));
  assign _zz__zz_result_payload_x_22_1 = ($signed(_zz_result_payload_x_21) - $signed(_zz_result_payload_x_76));
  assign _zz__zz_result_payload_x_37 = ($signed(_zz_result_payload_x_36) - $signed(_zz_result_payload_x_51));
  assign _zz__zz_result_payload_x_37_1 = ($signed(_zz_result_payload_x_36) + $signed(_zz_result_payload_x_51));
  assign _zz__zz_result_payload_x_78 = 32'h0;
  assign _zz__zz_result_payload_x_78_1 = 32'h0;
  assign _zz__zz_result_payload_x_7 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_7_1 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_7_2 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_7_3 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_23 = ($signed(_zz_result_payload_x_22) + $signed(_zz_result_payload_x_79));
  assign _zz__zz_result_payload_x_23_1 = ($signed(_zz_result_payload_x_22) - $signed(_zz_result_payload_x_79));
  assign _zz__zz_result_payload_x_38 = ($signed(_zz_result_payload_x_37) - $signed(_zz_result_payload_x_52));
  assign _zz__zz_result_payload_x_38_1 = ($signed(_zz_result_payload_x_37) + $signed(_zz_result_payload_x_52));
  assign _zz__zz_result_payload_x_81 = 32'h0;
  assign _zz__zz_result_payload_x_81_1 = 32'h0;
  assign _zz__zz_result_payload_x_8 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_8_1 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_8_2 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_8_3 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_24 = ($signed(_zz_result_payload_x_23) + $signed(_zz_result_payload_x_82));
  assign _zz__zz_result_payload_x_24_1 = ($signed(_zz_result_payload_x_23) - $signed(_zz_result_payload_x_82));
  assign _zz__zz_result_payload_x_39 = ($signed(_zz_result_payload_x_38) - $signed(_zz_result_payload_x_53));
  assign _zz__zz_result_payload_x_39_1 = ($signed(_zz_result_payload_x_38) + $signed(_zz_result_payload_x_53));
  assign _zz__zz_result_payload_x_84 = 32'h0;
  assign _zz__zz_result_payload_x_84_1 = 32'h0;
  assign _zz__zz_result_payload_x_9 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_9_1 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_9_2 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_9_3 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_25 = ($signed(_zz_result_payload_x_24) + $signed(_zz_result_payload_x_85));
  assign _zz__zz_result_payload_x_25_1 = ($signed(_zz_result_payload_x_24) - $signed(_zz_result_payload_x_85));
  assign _zz__zz_result_payload_x_40 = ($signed(_zz_result_payload_x_39) - $signed(_zz_result_payload_x_54));
  assign _zz__zz_result_payload_x_40_1 = ($signed(_zz_result_payload_x_39) + $signed(_zz_result_payload_x_54));
  assign _zz__zz_result_payload_x_87 = 32'h0;
  assign _zz__zz_result_payload_x_87_1 = 32'h0;
  assign _zz__zz_result_payload_x_10 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_10_1 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_10_2 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_10_3 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_26 = ($signed(_zz_result_payload_x_25) + $signed(_zz_result_payload_x_88));
  assign _zz__zz_result_payload_x_26_1 = ($signed(_zz_result_payload_x_25) - $signed(_zz_result_payload_x_88));
  assign _zz__zz_result_payload_x_41 = ($signed(_zz_result_payload_x_40) - $signed(_zz_result_payload_x_55));
  assign _zz__zz_result_payload_x_41_1 = ($signed(_zz_result_payload_x_40) + $signed(_zz_result_payload_x_55));
  assign _zz__zz_result_payload_x_90 = 32'h0;
  assign _zz__zz_result_payload_x_90_1 = 32'h0;
  assign _zz__zz_result_payload_x_11 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_11_1 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_11_2 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_11_3 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_27 = ($signed(_zz_result_payload_x_26) + $signed(_zz_result_payload_x_91));
  assign _zz__zz_result_payload_x_27_1 = ($signed(_zz_result_payload_x_26) - $signed(_zz_result_payload_x_91));
  assign _zz__zz_result_payload_x_42 = ($signed(_zz_result_payload_x_41) - $signed(_zz_result_payload_x_56));
  assign _zz__zz_result_payload_x_42_1 = ($signed(_zz_result_payload_x_41) + $signed(_zz_result_payload_x_56));
  assign _zz__zz_result_payload_x_93 = 32'h0;
  assign _zz__zz_result_payload_x_93_1 = 32'h0;
  assign _zz__zz_result_payload_x_12 = ($signed(_zz_result_payload_x_11) - $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_12_1 = ($signed(_zz_result_payload_x_11) + $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_12_2 = ($signed(_zz_result_payload_x_11) + $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_12_3 = ($signed(_zz_result_payload_x_11) - $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_28 = ($signed(_zz_result_payload_x_27) + $signed(_zz_result_payload_x_94));
  assign _zz__zz_result_payload_x_28_1 = ($signed(_zz_result_payload_x_27) - $signed(_zz_result_payload_x_94));
  assign _zz__zz_result_payload_x_43 = ($signed(_zz_result_payload_x_42) - $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_43_1 = ($signed(_zz_result_payload_x_42) + $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_96 = 32'h0;
  assign _zz__zz_result_payload_x_96_1 = 32'h0;
  assign _zz__zz_result_payload_x_13 = ($signed(_zz_result_payload_x_12) - $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_13_1 = ($signed(_zz_result_payload_x_12) + $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_13_2 = ($signed(_zz_result_payload_x_12) + $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_13_3 = ($signed(_zz_result_payload_x_12) - $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_29 = ($signed(_zz_result_payload_x_28) + $signed(_zz_result_payload_x_97));
  assign _zz__zz_result_payload_x_29_1 = ($signed(_zz_result_payload_x_28) - $signed(_zz_result_payload_x_97));
  assign _zz__zz_result_payload_x_44 = ($signed(_zz_result_payload_x_43) - $signed(_zz_result_payload_x_58));
  assign _zz__zz_result_payload_x_44_1 = ($signed(_zz_result_payload_x_43) + $signed(_zz_result_payload_x_58));
  assign _zz__zz_result_payload_x_99 = 32'h0;
  assign _zz__zz_result_payload_x_99_1 = 32'h0;
  assign _zz__zz_result_payload_x_14 = ($signed(_zz_result_payload_x_13) - $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_14_1 = ($signed(_zz_result_payload_x_13) + $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_14_2 = ($signed(_zz_result_payload_x_13) + $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_14_3 = ($signed(_zz_result_payload_x_13) - $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_30 = ($signed(_zz_result_payload_x_29) + $signed(_zz_result_payload_x_100));
  assign _zz__zz_result_payload_x_30_1 = ($signed(_zz_result_payload_x_29) - $signed(_zz_result_payload_x_100));
  assign _zz__zz_result_payload_x_45 = ($signed(_zz_result_payload_x_44) - $signed(_zz_result_payload_x_59));
  assign _zz__zz_result_payload_x_45_1 = ($signed(_zz_result_payload_x_44) + $signed(_zz_result_payload_x_59));
  assign _zz__zz_result_payload_x_102 = 32'h0;
  assign _zz__zz_result_payload_x_102_1 = 32'h0;
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
    _zz_result_payload_x_46 <= 32'h0000c90f;
    _zz_result_payload_x_47 <= 32'h000076b1;
    _zz_result_payload_x_48 <= 32'h00003eb6;
    _zz_result_payload_x_49 <= 32'h00001fd5;
    _zz_result_payload_x_50 <= 32'h00000ffa;
    _zz_result_payload_x_51 <= 32'h000007ff;
    _zz_result_payload_x_52 <= 32'h000003ff;
    _zz_result_payload_x_53 <= 32'h000001ff;
    _zz_result_payload_x_54 <= 32'h000000ff;
    _zz_result_payload_x_55 <= 32'h0000007f;
    _zz_result_payload_x_56 <= 32'h0000003f;
    _zz_result_payload_x_57 <= 32'h0000001f;
    _zz_result_payload_x_58 <= 32'h0000000f;
    _zz_result_payload_x_59 <= 32'h00000007;
    _zz_result_payload_z_1 <= 32'h00000003;
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

module AutoCorrelator (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_cha_i,
  input      [15:0]   raw_data_payload_cha_q,
  output              corr_result_valid,
  output     [31:0]   corr_result_payload_cha_i,
  output     [31:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);
  wire                shiftRegisterE_3_output_valid;
  wire       [15:0]   shiftRegisterE_3_output_payload_cha_i;
  wire       [15:0]   shiftRegisterE_3_output_payload_cha_q;
  wire                corr_core_corr_result_valid;
  wire       [31:0]   corr_core_corr_result_payload_cha_i;
  wire       [31:0]   corr_core_corr_result_payload_cha_q;

  ShiftRegisterE_2 shiftRegisterE_3 (
    .input_valid             (raw_data_valid                         ), //i
    .input_payload_cha_i     (raw_data_payload_cha_i                 ), //i
    .input_payload_cha_q     (raw_data_payload_cha_q                 ), //i
    .output_valid            (shiftRegisterE_3_output_valid          ), //o
    .output_payload_cha_i    (shiftRegisterE_3_output_payload_cha_i  ), //o
    .output_payload_cha_q    (shiftRegisterE_3_output_payload_cha_q  ), //o
    .enable                  (raw_data_valid                         ), //i
    .clk                     (clk                                    ), //i
    .reset                   (reset                                  )  //i
  );
  Correlator corr_core (
    .raw_data_0_valid             (raw_data_valid                         ), //i
    .raw_data_0_payload_cha_i     (raw_data_payload_cha_i                 ), //i
    .raw_data_0_payload_cha_q     (raw_data_payload_cha_q                 ), //i
    .raw_data_1_valid             (shiftRegisterE_3_output_valid          ), //i
    .raw_data_1_payload_cha_i     (shiftRegisterE_3_output_payload_cha_i  ), //i
    .raw_data_1_payload_cha_q     (shiftRegisterE_3_output_payload_cha_q  ), //i
    .corr_result_valid            (corr_core_corr_result_valid            ), //o
    .corr_result_payload_cha_i    (corr_core_corr_result_payload_cha_i    ), //o
    .corr_result_payload_cha_q    (corr_core_corr_result_payload_cha_q    ), //o
    .clk                          (clk                                    ), //i
    .reset                        (reset                                  )  //i
  );
  assign corr_result_valid = corr_core_corr_result_valid;
  assign corr_result_payload_cha_i = corr_core_corr_result_payload_cha_i;
  assign corr_result_payload_cha_q = corr_core_corr_result_payload_cha_q;

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

module Correlator (
  input               raw_data_0_valid,
  input      [15:0]   raw_data_0_payload_cha_i,
  input      [15:0]   raw_data_0_payload_cha_q,
  input               raw_data_1_valid,
  input      [15:0]   raw_data_1_payload_cha_i,
  input      [15:0]   raw_data_1_payload_cha_q,
  output              corr_result_valid,
  output     [31:0]   corr_result_payload_cha_i,
  output     [31:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);
  wire       [31:0]   shiftRegisterE_3_output_1;
  wire       [31:0]   shiftRegisterE_4_output_1;
  wire       [15:0]   _zz_k1;
  wire       [15:0]   _zz_k2;
  wire       [15:0]   _zz_k3;
  wire       [31:0]   _zz_corr_val_i;
  wire       [31:0]   _zz_corr_val_q;
  reg        [31:0]   corr_val_i;
  reg        [31:0]   corr_val_q;
  wire       [31:0]   k1;
  wire       [31:0]   k2;
  wire       [31:0]   k3;
  reg        [31:0]   mul_i;
  reg        [31:0]   mul_q;
  reg                 mul_data_valid;
  reg                 corr_result_valid_1;

  assign _zz_k1 = ($signed(raw_data_0_payload_cha_i) + $signed(raw_data_0_payload_cha_q));
  assign _zz_k2 = ($signed(raw_data_1_payload_cha_q) + $signed(raw_data_1_payload_cha_i));
  assign _zz_k3 = ($signed(raw_data_1_payload_cha_i) - $signed(raw_data_1_payload_cha_q));
  assign _zz_corr_val_i = ($signed(corr_val_i) - $signed(shiftRegisterE_3_output_1));
  assign _zz_corr_val_q = ($signed(corr_val_q) - $signed(shiftRegisterE_4_output_1));
  ShiftRegisterE shiftRegisterE_3 (
    .input_1     (mul_i                      ), //i
    .output_1    (shiftRegisterE_3_output_1  ), //o
    .enable      (mul_data_valid             ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegisterE shiftRegisterE_4 (
    .input_1     (mul_q                      ), //i
    .output_1    (shiftRegisterE_4_output_1  ), //o
    .enable      (mul_data_valid             ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  assign k1 = ($signed(raw_data_1_payload_cha_i) * $signed(_zz_k1));
  assign k2 = ($signed(raw_data_0_payload_cha_i) * $signed(_zz_k2));
  assign k3 = ($signed(raw_data_0_payload_cha_q) * $signed(_zz_k3));
  assign corr_result_payload_cha_i = corr_val_i;
  assign corr_result_payload_cha_q = corr_val_q;
  assign corr_result_valid = corr_result_valid_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      corr_val_i <= 32'h0;
      corr_val_q <= 32'h0;
      mul_i <= 32'h0;
      mul_q <= 32'h0;
      mul_data_valid <= 1'b0;
      corr_result_valid_1 <= 1'b0;
    end else begin
      mul_i <= ($signed(k1) - $signed(k3));
      mul_q <= ($signed(k1) - $signed(k2));
      mul_data_valid <= (raw_data_0_valid && raw_data_1_valid);
      if(mul_data_valid) begin
        corr_result_valid_1 <= 1'b1;
        corr_val_i <= ($signed(_zz_corr_val_i) + $signed(mul_i));
        corr_val_q <= ($signed(_zz_corr_val_q) + $signed(mul_q));
      end else begin
        corr_result_valid_1 <= 1'b0;
      end
    end
  end


endmodule

module ShiftRegisterE_2 (
  input               input_valid,
  input      [15:0]   input_payload_cha_i,
  input      [15:0]   input_payload_cha_q,
  output              output_valid,
  output     [15:0]   output_payload_cha_i,
  output     [15:0]   output_payload_cha_q,
  input               enable,
  input               clk,
  input               reset
);
  reg                 shift_reg_0_valid;
  reg        [15:0]   shift_reg_0_payload_cha_i;
  reg        [15:0]   shift_reg_0_payload_cha_q;
  reg                 shift_reg_1_valid;
  reg        [15:0]   shift_reg_1_payload_cha_i;
  reg        [15:0]   shift_reg_1_payload_cha_q;
  reg                 shift_reg_2_valid;
  reg        [15:0]   shift_reg_2_payload_cha_i;
  reg        [15:0]   shift_reg_2_payload_cha_q;
  reg                 shift_reg_3_valid;
  reg        [15:0]   shift_reg_3_payload_cha_i;
  reg        [15:0]   shift_reg_3_payload_cha_q;
  reg                 shift_reg_4_valid;
  reg        [15:0]   shift_reg_4_payload_cha_i;
  reg        [15:0]   shift_reg_4_payload_cha_q;
  reg                 shift_reg_5_valid;
  reg        [15:0]   shift_reg_5_payload_cha_i;
  reg        [15:0]   shift_reg_5_payload_cha_q;
  reg                 shift_reg_6_valid;
  reg        [15:0]   shift_reg_6_payload_cha_i;
  reg        [15:0]   shift_reg_6_payload_cha_q;
  reg                 shift_reg_7_valid;
  reg        [15:0]   shift_reg_7_payload_cha_i;
  reg        [15:0]   shift_reg_7_payload_cha_q;
  reg                 shift_reg_8_valid;
  reg        [15:0]   shift_reg_8_payload_cha_i;
  reg        [15:0]   shift_reg_8_payload_cha_q;
  reg                 shift_reg_9_valid;
  reg        [15:0]   shift_reg_9_payload_cha_i;
  reg        [15:0]   shift_reg_9_payload_cha_q;
  reg                 shift_reg_10_valid;
  reg        [15:0]   shift_reg_10_payload_cha_i;
  reg        [15:0]   shift_reg_10_payload_cha_q;
  reg                 shift_reg_11_valid;
  reg        [15:0]   shift_reg_11_payload_cha_i;
  reg        [15:0]   shift_reg_11_payload_cha_q;
  reg                 shift_reg_12_valid;
  reg        [15:0]   shift_reg_12_payload_cha_i;
  reg        [15:0]   shift_reg_12_payload_cha_q;
  reg                 shift_reg_13_valid;
  reg        [15:0]   shift_reg_13_payload_cha_i;
  reg        [15:0]   shift_reg_13_payload_cha_q;
  reg                 shift_reg_14_valid;
  reg        [15:0]   shift_reg_14_payload_cha_i;
  reg        [15:0]   shift_reg_14_payload_cha_q;
  reg                 shift_reg_15_valid;
  reg        [15:0]   shift_reg_15_payload_cha_i;
  reg        [15:0]   shift_reg_15_payload_cha_q;
  reg                 shift_reg_16_valid;
  reg        [15:0]   shift_reg_16_payload_cha_i;
  reg        [15:0]   shift_reg_16_payload_cha_q;
  reg                 shift_reg_17_valid;
  reg        [15:0]   shift_reg_17_payload_cha_i;
  reg        [15:0]   shift_reg_17_payload_cha_q;
  reg                 shift_reg_18_valid;
  reg        [15:0]   shift_reg_18_payload_cha_i;
  reg        [15:0]   shift_reg_18_payload_cha_q;
  reg                 shift_reg_19_valid;
  reg        [15:0]   shift_reg_19_payload_cha_i;
  reg        [15:0]   shift_reg_19_payload_cha_q;
  reg                 shift_reg_20_valid;
  reg        [15:0]   shift_reg_20_payload_cha_i;
  reg        [15:0]   shift_reg_20_payload_cha_q;
  reg                 shift_reg_21_valid;
  reg        [15:0]   shift_reg_21_payload_cha_i;
  reg        [15:0]   shift_reg_21_payload_cha_q;
  reg                 shift_reg_22_valid;
  reg        [15:0]   shift_reg_22_payload_cha_i;
  reg        [15:0]   shift_reg_22_payload_cha_q;
  reg                 shift_reg_23_valid;
  reg        [15:0]   shift_reg_23_payload_cha_i;
  reg        [15:0]   shift_reg_23_payload_cha_q;
  reg                 shift_reg_24_valid;
  reg        [15:0]   shift_reg_24_payload_cha_i;
  reg        [15:0]   shift_reg_24_payload_cha_q;
  reg                 shift_reg_25_valid;
  reg        [15:0]   shift_reg_25_payload_cha_i;
  reg        [15:0]   shift_reg_25_payload_cha_q;
  reg                 shift_reg_26_valid;
  reg        [15:0]   shift_reg_26_payload_cha_i;
  reg        [15:0]   shift_reg_26_payload_cha_q;
  reg                 shift_reg_27_valid;
  reg        [15:0]   shift_reg_27_payload_cha_i;
  reg        [15:0]   shift_reg_27_payload_cha_q;
  reg                 shift_reg_28_valid;
  reg        [15:0]   shift_reg_28_payload_cha_i;
  reg        [15:0]   shift_reg_28_payload_cha_q;
  reg                 shift_reg_29_valid;
  reg        [15:0]   shift_reg_29_payload_cha_i;
  reg        [15:0]   shift_reg_29_payload_cha_q;
  reg                 shift_reg_30_valid;
  reg        [15:0]   shift_reg_30_payload_cha_i;
  reg        [15:0]   shift_reg_30_payload_cha_q;
  reg                 shift_reg_31_valid;
  reg        [15:0]   shift_reg_31_payload_cha_i;
  reg        [15:0]   shift_reg_31_payload_cha_q;
  reg                 shift_reg_32_valid;
  reg        [15:0]   shift_reg_32_payload_cha_i;
  reg        [15:0]   shift_reg_32_payload_cha_q;
  reg                 shift_reg_33_valid;
  reg        [15:0]   shift_reg_33_payload_cha_i;
  reg        [15:0]   shift_reg_33_payload_cha_q;
  reg                 shift_reg_34_valid;
  reg        [15:0]   shift_reg_34_payload_cha_i;
  reg        [15:0]   shift_reg_34_payload_cha_q;
  reg                 shift_reg_35_valid;
  reg        [15:0]   shift_reg_35_payload_cha_i;
  reg        [15:0]   shift_reg_35_payload_cha_q;
  reg                 shift_reg_36_valid;
  reg        [15:0]   shift_reg_36_payload_cha_i;
  reg        [15:0]   shift_reg_36_payload_cha_q;
  reg                 shift_reg_37_valid;
  reg        [15:0]   shift_reg_37_payload_cha_i;
  reg        [15:0]   shift_reg_37_payload_cha_q;
  reg                 shift_reg_38_valid;
  reg        [15:0]   shift_reg_38_payload_cha_i;
  reg        [15:0]   shift_reg_38_payload_cha_q;
  reg                 shift_reg_39_valid;
  reg        [15:0]   shift_reg_39_payload_cha_i;
  reg        [15:0]   shift_reg_39_payload_cha_q;
  reg                 shift_reg_40_valid;
  reg        [15:0]   shift_reg_40_payload_cha_i;
  reg        [15:0]   shift_reg_40_payload_cha_q;
  reg                 shift_reg_41_valid;
  reg        [15:0]   shift_reg_41_payload_cha_i;
  reg        [15:0]   shift_reg_41_payload_cha_q;
  reg                 shift_reg_42_valid;
  reg        [15:0]   shift_reg_42_payload_cha_i;
  reg        [15:0]   shift_reg_42_payload_cha_q;
  reg                 shift_reg_43_valid;
  reg        [15:0]   shift_reg_43_payload_cha_i;
  reg        [15:0]   shift_reg_43_payload_cha_q;
  reg                 shift_reg_44_valid;
  reg        [15:0]   shift_reg_44_payload_cha_i;
  reg        [15:0]   shift_reg_44_payload_cha_q;
  reg                 shift_reg_45_valid;
  reg        [15:0]   shift_reg_45_payload_cha_i;
  reg        [15:0]   shift_reg_45_payload_cha_q;
  reg                 shift_reg_46_valid;
  reg        [15:0]   shift_reg_46_payload_cha_i;
  reg        [15:0]   shift_reg_46_payload_cha_q;
  reg                 shift_reg_47_valid;
  reg        [15:0]   shift_reg_47_payload_cha_i;
  reg        [15:0]   shift_reg_47_payload_cha_q;
  reg                 shift_reg_48_valid;
  reg        [15:0]   shift_reg_48_payload_cha_i;
  reg        [15:0]   shift_reg_48_payload_cha_q;
  reg                 shift_reg_49_valid;
  reg        [15:0]   shift_reg_49_payload_cha_i;
  reg        [15:0]   shift_reg_49_payload_cha_q;
  reg                 shift_reg_50_valid;
  reg        [15:0]   shift_reg_50_payload_cha_i;
  reg        [15:0]   shift_reg_50_payload_cha_q;
  reg                 shift_reg_51_valid;
  reg        [15:0]   shift_reg_51_payload_cha_i;
  reg        [15:0]   shift_reg_51_payload_cha_q;
  reg                 shift_reg_52_valid;
  reg        [15:0]   shift_reg_52_payload_cha_i;
  reg        [15:0]   shift_reg_52_payload_cha_q;
  reg                 shift_reg_53_valid;
  reg        [15:0]   shift_reg_53_payload_cha_i;
  reg        [15:0]   shift_reg_53_payload_cha_q;
  reg                 shift_reg_54_valid;
  reg        [15:0]   shift_reg_54_payload_cha_i;
  reg        [15:0]   shift_reg_54_payload_cha_q;
  reg                 shift_reg_55_valid;
  reg        [15:0]   shift_reg_55_payload_cha_i;
  reg        [15:0]   shift_reg_55_payload_cha_q;
  reg                 shift_reg_56_valid;
  reg        [15:0]   shift_reg_56_payload_cha_i;
  reg        [15:0]   shift_reg_56_payload_cha_q;
  reg                 shift_reg_57_valid;
  reg        [15:0]   shift_reg_57_payload_cha_i;
  reg        [15:0]   shift_reg_57_payload_cha_q;
  reg                 shift_reg_58_valid;
  reg        [15:0]   shift_reg_58_payload_cha_i;
  reg        [15:0]   shift_reg_58_payload_cha_q;
  reg                 shift_reg_59_valid;
  reg        [15:0]   shift_reg_59_payload_cha_i;
  reg        [15:0]   shift_reg_59_payload_cha_q;
  reg                 shift_reg_60_valid;
  reg        [15:0]   shift_reg_60_payload_cha_i;
  reg        [15:0]   shift_reg_60_payload_cha_q;
  reg                 shift_reg_61_valid;
  reg        [15:0]   shift_reg_61_payload_cha_i;
  reg        [15:0]   shift_reg_61_payload_cha_q;
  reg                 shift_reg_62_valid;
  reg        [15:0]   shift_reg_62_payload_cha_i;
  reg        [15:0]   shift_reg_62_payload_cha_q;
  reg                 shift_reg_63_valid;
  reg        [15:0]   shift_reg_63_payload_cha_i;
  reg        [15:0]   shift_reg_63_payload_cha_q;

  assign output_valid = shift_reg_63_valid;
  assign output_payload_cha_i = shift_reg_63_payload_cha_i;
  assign output_payload_cha_q = shift_reg_63_payload_cha_q;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0_valid <= 1'b0;
      shift_reg_0_payload_cha_i <= 16'h0;
      shift_reg_0_payload_cha_q <= 16'h0;
      shift_reg_1_valid <= 1'b0;
      shift_reg_1_payload_cha_i <= 16'h0;
      shift_reg_1_payload_cha_q <= 16'h0;
      shift_reg_2_valid <= 1'b0;
      shift_reg_2_payload_cha_i <= 16'h0;
      shift_reg_2_payload_cha_q <= 16'h0;
      shift_reg_3_valid <= 1'b0;
      shift_reg_3_payload_cha_i <= 16'h0;
      shift_reg_3_payload_cha_q <= 16'h0;
      shift_reg_4_valid <= 1'b0;
      shift_reg_4_payload_cha_i <= 16'h0;
      shift_reg_4_payload_cha_q <= 16'h0;
      shift_reg_5_valid <= 1'b0;
      shift_reg_5_payload_cha_i <= 16'h0;
      shift_reg_5_payload_cha_q <= 16'h0;
      shift_reg_6_valid <= 1'b0;
      shift_reg_6_payload_cha_i <= 16'h0;
      shift_reg_6_payload_cha_q <= 16'h0;
      shift_reg_7_valid <= 1'b0;
      shift_reg_7_payload_cha_i <= 16'h0;
      shift_reg_7_payload_cha_q <= 16'h0;
      shift_reg_8_valid <= 1'b0;
      shift_reg_8_payload_cha_i <= 16'h0;
      shift_reg_8_payload_cha_q <= 16'h0;
      shift_reg_9_valid <= 1'b0;
      shift_reg_9_payload_cha_i <= 16'h0;
      shift_reg_9_payload_cha_q <= 16'h0;
      shift_reg_10_valid <= 1'b0;
      shift_reg_10_payload_cha_i <= 16'h0;
      shift_reg_10_payload_cha_q <= 16'h0;
      shift_reg_11_valid <= 1'b0;
      shift_reg_11_payload_cha_i <= 16'h0;
      shift_reg_11_payload_cha_q <= 16'h0;
      shift_reg_12_valid <= 1'b0;
      shift_reg_12_payload_cha_i <= 16'h0;
      shift_reg_12_payload_cha_q <= 16'h0;
      shift_reg_13_valid <= 1'b0;
      shift_reg_13_payload_cha_i <= 16'h0;
      shift_reg_13_payload_cha_q <= 16'h0;
      shift_reg_14_valid <= 1'b0;
      shift_reg_14_payload_cha_i <= 16'h0;
      shift_reg_14_payload_cha_q <= 16'h0;
      shift_reg_15_valid <= 1'b0;
      shift_reg_15_payload_cha_i <= 16'h0;
      shift_reg_15_payload_cha_q <= 16'h0;
      shift_reg_16_valid <= 1'b0;
      shift_reg_16_payload_cha_i <= 16'h0;
      shift_reg_16_payload_cha_q <= 16'h0;
      shift_reg_17_valid <= 1'b0;
      shift_reg_17_payload_cha_i <= 16'h0;
      shift_reg_17_payload_cha_q <= 16'h0;
      shift_reg_18_valid <= 1'b0;
      shift_reg_18_payload_cha_i <= 16'h0;
      shift_reg_18_payload_cha_q <= 16'h0;
      shift_reg_19_valid <= 1'b0;
      shift_reg_19_payload_cha_i <= 16'h0;
      shift_reg_19_payload_cha_q <= 16'h0;
      shift_reg_20_valid <= 1'b0;
      shift_reg_20_payload_cha_i <= 16'h0;
      shift_reg_20_payload_cha_q <= 16'h0;
      shift_reg_21_valid <= 1'b0;
      shift_reg_21_payload_cha_i <= 16'h0;
      shift_reg_21_payload_cha_q <= 16'h0;
      shift_reg_22_valid <= 1'b0;
      shift_reg_22_payload_cha_i <= 16'h0;
      shift_reg_22_payload_cha_q <= 16'h0;
      shift_reg_23_valid <= 1'b0;
      shift_reg_23_payload_cha_i <= 16'h0;
      shift_reg_23_payload_cha_q <= 16'h0;
      shift_reg_24_valid <= 1'b0;
      shift_reg_24_payload_cha_i <= 16'h0;
      shift_reg_24_payload_cha_q <= 16'h0;
      shift_reg_25_valid <= 1'b0;
      shift_reg_25_payload_cha_i <= 16'h0;
      shift_reg_25_payload_cha_q <= 16'h0;
      shift_reg_26_valid <= 1'b0;
      shift_reg_26_payload_cha_i <= 16'h0;
      shift_reg_26_payload_cha_q <= 16'h0;
      shift_reg_27_valid <= 1'b0;
      shift_reg_27_payload_cha_i <= 16'h0;
      shift_reg_27_payload_cha_q <= 16'h0;
      shift_reg_28_valid <= 1'b0;
      shift_reg_28_payload_cha_i <= 16'h0;
      shift_reg_28_payload_cha_q <= 16'h0;
      shift_reg_29_valid <= 1'b0;
      shift_reg_29_payload_cha_i <= 16'h0;
      shift_reg_29_payload_cha_q <= 16'h0;
      shift_reg_30_valid <= 1'b0;
      shift_reg_30_payload_cha_i <= 16'h0;
      shift_reg_30_payload_cha_q <= 16'h0;
      shift_reg_31_valid <= 1'b0;
      shift_reg_31_payload_cha_i <= 16'h0;
      shift_reg_31_payload_cha_q <= 16'h0;
      shift_reg_32_valid <= 1'b0;
      shift_reg_32_payload_cha_i <= 16'h0;
      shift_reg_32_payload_cha_q <= 16'h0;
      shift_reg_33_valid <= 1'b0;
      shift_reg_33_payload_cha_i <= 16'h0;
      shift_reg_33_payload_cha_q <= 16'h0;
      shift_reg_34_valid <= 1'b0;
      shift_reg_34_payload_cha_i <= 16'h0;
      shift_reg_34_payload_cha_q <= 16'h0;
      shift_reg_35_valid <= 1'b0;
      shift_reg_35_payload_cha_i <= 16'h0;
      shift_reg_35_payload_cha_q <= 16'h0;
      shift_reg_36_valid <= 1'b0;
      shift_reg_36_payload_cha_i <= 16'h0;
      shift_reg_36_payload_cha_q <= 16'h0;
      shift_reg_37_valid <= 1'b0;
      shift_reg_37_payload_cha_i <= 16'h0;
      shift_reg_37_payload_cha_q <= 16'h0;
      shift_reg_38_valid <= 1'b0;
      shift_reg_38_payload_cha_i <= 16'h0;
      shift_reg_38_payload_cha_q <= 16'h0;
      shift_reg_39_valid <= 1'b0;
      shift_reg_39_payload_cha_i <= 16'h0;
      shift_reg_39_payload_cha_q <= 16'h0;
      shift_reg_40_valid <= 1'b0;
      shift_reg_40_payload_cha_i <= 16'h0;
      shift_reg_40_payload_cha_q <= 16'h0;
      shift_reg_41_valid <= 1'b0;
      shift_reg_41_payload_cha_i <= 16'h0;
      shift_reg_41_payload_cha_q <= 16'h0;
      shift_reg_42_valid <= 1'b0;
      shift_reg_42_payload_cha_i <= 16'h0;
      shift_reg_42_payload_cha_q <= 16'h0;
      shift_reg_43_valid <= 1'b0;
      shift_reg_43_payload_cha_i <= 16'h0;
      shift_reg_43_payload_cha_q <= 16'h0;
      shift_reg_44_valid <= 1'b0;
      shift_reg_44_payload_cha_i <= 16'h0;
      shift_reg_44_payload_cha_q <= 16'h0;
      shift_reg_45_valid <= 1'b0;
      shift_reg_45_payload_cha_i <= 16'h0;
      shift_reg_45_payload_cha_q <= 16'h0;
      shift_reg_46_valid <= 1'b0;
      shift_reg_46_payload_cha_i <= 16'h0;
      shift_reg_46_payload_cha_q <= 16'h0;
      shift_reg_47_valid <= 1'b0;
      shift_reg_47_payload_cha_i <= 16'h0;
      shift_reg_47_payload_cha_q <= 16'h0;
      shift_reg_48_valid <= 1'b0;
      shift_reg_48_payload_cha_i <= 16'h0;
      shift_reg_48_payload_cha_q <= 16'h0;
      shift_reg_49_valid <= 1'b0;
      shift_reg_49_payload_cha_i <= 16'h0;
      shift_reg_49_payload_cha_q <= 16'h0;
      shift_reg_50_valid <= 1'b0;
      shift_reg_50_payload_cha_i <= 16'h0;
      shift_reg_50_payload_cha_q <= 16'h0;
      shift_reg_51_valid <= 1'b0;
      shift_reg_51_payload_cha_i <= 16'h0;
      shift_reg_51_payload_cha_q <= 16'h0;
      shift_reg_52_valid <= 1'b0;
      shift_reg_52_payload_cha_i <= 16'h0;
      shift_reg_52_payload_cha_q <= 16'h0;
      shift_reg_53_valid <= 1'b0;
      shift_reg_53_payload_cha_i <= 16'h0;
      shift_reg_53_payload_cha_q <= 16'h0;
      shift_reg_54_valid <= 1'b0;
      shift_reg_54_payload_cha_i <= 16'h0;
      shift_reg_54_payload_cha_q <= 16'h0;
      shift_reg_55_valid <= 1'b0;
      shift_reg_55_payload_cha_i <= 16'h0;
      shift_reg_55_payload_cha_q <= 16'h0;
      shift_reg_56_valid <= 1'b0;
      shift_reg_56_payload_cha_i <= 16'h0;
      shift_reg_56_payload_cha_q <= 16'h0;
      shift_reg_57_valid <= 1'b0;
      shift_reg_57_payload_cha_i <= 16'h0;
      shift_reg_57_payload_cha_q <= 16'h0;
      shift_reg_58_valid <= 1'b0;
      shift_reg_58_payload_cha_i <= 16'h0;
      shift_reg_58_payload_cha_q <= 16'h0;
      shift_reg_59_valid <= 1'b0;
      shift_reg_59_payload_cha_i <= 16'h0;
      shift_reg_59_payload_cha_q <= 16'h0;
      shift_reg_60_valid <= 1'b0;
      shift_reg_60_payload_cha_i <= 16'h0;
      shift_reg_60_payload_cha_q <= 16'h0;
      shift_reg_61_valid <= 1'b0;
      shift_reg_61_payload_cha_i <= 16'h0;
      shift_reg_61_payload_cha_q <= 16'h0;
      shift_reg_62_valid <= 1'b0;
      shift_reg_62_payload_cha_i <= 16'h0;
      shift_reg_62_payload_cha_q <= 16'h0;
      shift_reg_63_valid <= 1'b0;
      shift_reg_63_payload_cha_i <= 16'h0;
      shift_reg_63_payload_cha_q <= 16'h0;
    end else begin
      if(enable) begin
        shift_reg_0_valid <= input_valid;
        shift_reg_0_payload_cha_i <= input_payload_cha_i;
        shift_reg_0_payload_cha_q <= input_payload_cha_q;
        shift_reg_1_valid <= shift_reg_0_valid;
        shift_reg_1_payload_cha_i <= shift_reg_0_payload_cha_i;
        shift_reg_1_payload_cha_q <= shift_reg_0_payload_cha_q;
        shift_reg_2_valid <= shift_reg_1_valid;
        shift_reg_2_payload_cha_i <= shift_reg_1_payload_cha_i;
        shift_reg_2_payload_cha_q <= shift_reg_1_payload_cha_q;
        shift_reg_3_valid <= shift_reg_2_valid;
        shift_reg_3_payload_cha_i <= shift_reg_2_payload_cha_i;
        shift_reg_3_payload_cha_q <= shift_reg_2_payload_cha_q;
        shift_reg_4_valid <= shift_reg_3_valid;
        shift_reg_4_payload_cha_i <= shift_reg_3_payload_cha_i;
        shift_reg_4_payload_cha_q <= shift_reg_3_payload_cha_q;
        shift_reg_5_valid <= shift_reg_4_valid;
        shift_reg_5_payload_cha_i <= shift_reg_4_payload_cha_i;
        shift_reg_5_payload_cha_q <= shift_reg_4_payload_cha_q;
        shift_reg_6_valid <= shift_reg_5_valid;
        shift_reg_6_payload_cha_i <= shift_reg_5_payload_cha_i;
        shift_reg_6_payload_cha_q <= shift_reg_5_payload_cha_q;
        shift_reg_7_valid <= shift_reg_6_valid;
        shift_reg_7_payload_cha_i <= shift_reg_6_payload_cha_i;
        shift_reg_7_payload_cha_q <= shift_reg_6_payload_cha_q;
        shift_reg_8_valid <= shift_reg_7_valid;
        shift_reg_8_payload_cha_i <= shift_reg_7_payload_cha_i;
        shift_reg_8_payload_cha_q <= shift_reg_7_payload_cha_q;
        shift_reg_9_valid <= shift_reg_8_valid;
        shift_reg_9_payload_cha_i <= shift_reg_8_payload_cha_i;
        shift_reg_9_payload_cha_q <= shift_reg_8_payload_cha_q;
        shift_reg_10_valid <= shift_reg_9_valid;
        shift_reg_10_payload_cha_i <= shift_reg_9_payload_cha_i;
        shift_reg_10_payload_cha_q <= shift_reg_9_payload_cha_q;
        shift_reg_11_valid <= shift_reg_10_valid;
        shift_reg_11_payload_cha_i <= shift_reg_10_payload_cha_i;
        shift_reg_11_payload_cha_q <= shift_reg_10_payload_cha_q;
        shift_reg_12_valid <= shift_reg_11_valid;
        shift_reg_12_payload_cha_i <= shift_reg_11_payload_cha_i;
        shift_reg_12_payload_cha_q <= shift_reg_11_payload_cha_q;
        shift_reg_13_valid <= shift_reg_12_valid;
        shift_reg_13_payload_cha_i <= shift_reg_12_payload_cha_i;
        shift_reg_13_payload_cha_q <= shift_reg_12_payload_cha_q;
        shift_reg_14_valid <= shift_reg_13_valid;
        shift_reg_14_payload_cha_i <= shift_reg_13_payload_cha_i;
        shift_reg_14_payload_cha_q <= shift_reg_13_payload_cha_q;
        shift_reg_15_valid <= shift_reg_14_valid;
        shift_reg_15_payload_cha_i <= shift_reg_14_payload_cha_i;
        shift_reg_15_payload_cha_q <= shift_reg_14_payload_cha_q;
        shift_reg_16_valid <= shift_reg_15_valid;
        shift_reg_16_payload_cha_i <= shift_reg_15_payload_cha_i;
        shift_reg_16_payload_cha_q <= shift_reg_15_payload_cha_q;
        shift_reg_17_valid <= shift_reg_16_valid;
        shift_reg_17_payload_cha_i <= shift_reg_16_payload_cha_i;
        shift_reg_17_payload_cha_q <= shift_reg_16_payload_cha_q;
        shift_reg_18_valid <= shift_reg_17_valid;
        shift_reg_18_payload_cha_i <= shift_reg_17_payload_cha_i;
        shift_reg_18_payload_cha_q <= shift_reg_17_payload_cha_q;
        shift_reg_19_valid <= shift_reg_18_valid;
        shift_reg_19_payload_cha_i <= shift_reg_18_payload_cha_i;
        shift_reg_19_payload_cha_q <= shift_reg_18_payload_cha_q;
        shift_reg_20_valid <= shift_reg_19_valid;
        shift_reg_20_payload_cha_i <= shift_reg_19_payload_cha_i;
        shift_reg_20_payload_cha_q <= shift_reg_19_payload_cha_q;
        shift_reg_21_valid <= shift_reg_20_valid;
        shift_reg_21_payload_cha_i <= shift_reg_20_payload_cha_i;
        shift_reg_21_payload_cha_q <= shift_reg_20_payload_cha_q;
        shift_reg_22_valid <= shift_reg_21_valid;
        shift_reg_22_payload_cha_i <= shift_reg_21_payload_cha_i;
        shift_reg_22_payload_cha_q <= shift_reg_21_payload_cha_q;
        shift_reg_23_valid <= shift_reg_22_valid;
        shift_reg_23_payload_cha_i <= shift_reg_22_payload_cha_i;
        shift_reg_23_payload_cha_q <= shift_reg_22_payload_cha_q;
        shift_reg_24_valid <= shift_reg_23_valid;
        shift_reg_24_payload_cha_i <= shift_reg_23_payload_cha_i;
        shift_reg_24_payload_cha_q <= shift_reg_23_payload_cha_q;
        shift_reg_25_valid <= shift_reg_24_valid;
        shift_reg_25_payload_cha_i <= shift_reg_24_payload_cha_i;
        shift_reg_25_payload_cha_q <= shift_reg_24_payload_cha_q;
        shift_reg_26_valid <= shift_reg_25_valid;
        shift_reg_26_payload_cha_i <= shift_reg_25_payload_cha_i;
        shift_reg_26_payload_cha_q <= shift_reg_25_payload_cha_q;
        shift_reg_27_valid <= shift_reg_26_valid;
        shift_reg_27_payload_cha_i <= shift_reg_26_payload_cha_i;
        shift_reg_27_payload_cha_q <= shift_reg_26_payload_cha_q;
        shift_reg_28_valid <= shift_reg_27_valid;
        shift_reg_28_payload_cha_i <= shift_reg_27_payload_cha_i;
        shift_reg_28_payload_cha_q <= shift_reg_27_payload_cha_q;
        shift_reg_29_valid <= shift_reg_28_valid;
        shift_reg_29_payload_cha_i <= shift_reg_28_payload_cha_i;
        shift_reg_29_payload_cha_q <= shift_reg_28_payload_cha_q;
        shift_reg_30_valid <= shift_reg_29_valid;
        shift_reg_30_payload_cha_i <= shift_reg_29_payload_cha_i;
        shift_reg_30_payload_cha_q <= shift_reg_29_payload_cha_q;
        shift_reg_31_valid <= shift_reg_30_valid;
        shift_reg_31_payload_cha_i <= shift_reg_30_payload_cha_i;
        shift_reg_31_payload_cha_q <= shift_reg_30_payload_cha_q;
        shift_reg_32_valid <= shift_reg_31_valid;
        shift_reg_32_payload_cha_i <= shift_reg_31_payload_cha_i;
        shift_reg_32_payload_cha_q <= shift_reg_31_payload_cha_q;
        shift_reg_33_valid <= shift_reg_32_valid;
        shift_reg_33_payload_cha_i <= shift_reg_32_payload_cha_i;
        shift_reg_33_payload_cha_q <= shift_reg_32_payload_cha_q;
        shift_reg_34_valid <= shift_reg_33_valid;
        shift_reg_34_payload_cha_i <= shift_reg_33_payload_cha_i;
        shift_reg_34_payload_cha_q <= shift_reg_33_payload_cha_q;
        shift_reg_35_valid <= shift_reg_34_valid;
        shift_reg_35_payload_cha_i <= shift_reg_34_payload_cha_i;
        shift_reg_35_payload_cha_q <= shift_reg_34_payload_cha_q;
        shift_reg_36_valid <= shift_reg_35_valid;
        shift_reg_36_payload_cha_i <= shift_reg_35_payload_cha_i;
        shift_reg_36_payload_cha_q <= shift_reg_35_payload_cha_q;
        shift_reg_37_valid <= shift_reg_36_valid;
        shift_reg_37_payload_cha_i <= shift_reg_36_payload_cha_i;
        shift_reg_37_payload_cha_q <= shift_reg_36_payload_cha_q;
        shift_reg_38_valid <= shift_reg_37_valid;
        shift_reg_38_payload_cha_i <= shift_reg_37_payload_cha_i;
        shift_reg_38_payload_cha_q <= shift_reg_37_payload_cha_q;
        shift_reg_39_valid <= shift_reg_38_valid;
        shift_reg_39_payload_cha_i <= shift_reg_38_payload_cha_i;
        shift_reg_39_payload_cha_q <= shift_reg_38_payload_cha_q;
        shift_reg_40_valid <= shift_reg_39_valid;
        shift_reg_40_payload_cha_i <= shift_reg_39_payload_cha_i;
        shift_reg_40_payload_cha_q <= shift_reg_39_payload_cha_q;
        shift_reg_41_valid <= shift_reg_40_valid;
        shift_reg_41_payload_cha_i <= shift_reg_40_payload_cha_i;
        shift_reg_41_payload_cha_q <= shift_reg_40_payload_cha_q;
        shift_reg_42_valid <= shift_reg_41_valid;
        shift_reg_42_payload_cha_i <= shift_reg_41_payload_cha_i;
        shift_reg_42_payload_cha_q <= shift_reg_41_payload_cha_q;
        shift_reg_43_valid <= shift_reg_42_valid;
        shift_reg_43_payload_cha_i <= shift_reg_42_payload_cha_i;
        shift_reg_43_payload_cha_q <= shift_reg_42_payload_cha_q;
        shift_reg_44_valid <= shift_reg_43_valid;
        shift_reg_44_payload_cha_i <= shift_reg_43_payload_cha_i;
        shift_reg_44_payload_cha_q <= shift_reg_43_payload_cha_q;
        shift_reg_45_valid <= shift_reg_44_valid;
        shift_reg_45_payload_cha_i <= shift_reg_44_payload_cha_i;
        shift_reg_45_payload_cha_q <= shift_reg_44_payload_cha_q;
        shift_reg_46_valid <= shift_reg_45_valid;
        shift_reg_46_payload_cha_i <= shift_reg_45_payload_cha_i;
        shift_reg_46_payload_cha_q <= shift_reg_45_payload_cha_q;
        shift_reg_47_valid <= shift_reg_46_valid;
        shift_reg_47_payload_cha_i <= shift_reg_46_payload_cha_i;
        shift_reg_47_payload_cha_q <= shift_reg_46_payload_cha_q;
        shift_reg_48_valid <= shift_reg_47_valid;
        shift_reg_48_payload_cha_i <= shift_reg_47_payload_cha_i;
        shift_reg_48_payload_cha_q <= shift_reg_47_payload_cha_q;
        shift_reg_49_valid <= shift_reg_48_valid;
        shift_reg_49_payload_cha_i <= shift_reg_48_payload_cha_i;
        shift_reg_49_payload_cha_q <= shift_reg_48_payload_cha_q;
        shift_reg_50_valid <= shift_reg_49_valid;
        shift_reg_50_payload_cha_i <= shift_reg_49_payload_cha_i;
        shift_reg_50_payload_cha_q <= shift_reg_49_payload_cha_q;
        shift_reg_51_valid <= shift_reg_50_valid;
        shift_reg_51_payload_cha_i <= shift_reg_50_payload_cha_i;
        shift_reg_51_payload_cha_q <= shift_reg_50_payload_cha_q;
        shift_reg_52_valid <= shift_reg_51_valid;
        shift_reg_52_payload_cha_i <= shift_reg_51_payload_cha_i;
        shift_reg_52_payload_cha_q <= shift_reg_51_payload_cha_q;
        shift_reg_53_valid <= shift_reg_52_valid;
        shift_reg_53_payload_cha_i <= shift_reg_52_payload_cha_i;
        shift_reg_53_payload_cha_q <= shift_reg_52_payload_cha_q;
        shift_reg_54_valid <= shift_reg_53_valid;
        shift_reg_54_payload_cha_i <= shift_reg_53_payload_cha_i;
        shift_reg_54_payload_cha_q <= shift_reg_53_payload_cha_q;
        shift_reg_55_valid <= shift_reg_54_valid;
        shift_reg_55_payload_cha_i <= shift_reg_54_payload_cha_i;
        shift_reg_55_payload_cha_q <= shift_reg_54_payload_cha_q;
        shift_reg_56_valid <= shift_reg_55_valid;
        shift_reg_56_payload_cha_i <= shift_reg_55_payload_cha_i;
        shift_reg_56_payload_cha_q <= shift_reg_55_payload_cha_q;
        shift_reg_57_valid <= shift_reg_56_valid;
        shift_reg_57_payload_cha_i <= shift_reg_56_payload_cha_i;
        shift_reg_57_payload_cha_q <= shift_reg_56_payload_cha_q;
        shift_reg_58_valid <= shift_reg_57_valid;
        shift_reg_58_payload_cha_i <= shift_reg_57_payload_cha_i;
        shift_reg_58_payload_cha_q <= shift_reg_57_payload_cha_q;
        shift_reg_59_valid <= shift_reg_58_valid;
        shift_reg_59_payload_cha_i <= shift_reg_58_payload_cha_i;
        shift_reg_59_payload_cha_q <= shift_reg_58_payload_cha_q;
        shift_reg_60_valid <= shift_reg_59_valid;
        shift_reg_60_payload_cha_i <= shift_reg_59_payload_cha_i;
        shift_reg_60_payload_cha_q <= shift_reg_59_payload_cha_q;
        shift_reg_61_valid <= shift_reg_60_valid;
        shift_reg_61_payload_cha_i <= shift_reg_60_payload_cha_i;
        shift_reg_61_payload_cha_q <= shift_reg_60_payload_cha_q;
        shift_reg_62_valid <= shift_reg_61_valid;
        shift_reg_62_payload_cha_i <= shift_reg_61_payload_cha_i;
        shift_reg_62_payload_cha_q <= shift_reg_61_payload_cha_q;
        shift_reg_63_valid <= shift_reg_62_valid;
        shift_reg_63_payload_cha_i <= shift_reg_62_payload_cha_i;
        shift_reg_63_payload_cha_q <= shift_reg_62_payload_cha_q;
      end else begin
        shift_reg_0_valid <= 1'b0;
        shift_reg_0_payload_cha_i <= 16'h0;
        shift_reg_0_payload_cha_q <= 16'h0;
        shift_reg_1_valid <= 1'b0;
        shift_reg_1_payload_cha_i <= 16'h0;
        shift_reg_1_payload_cha_q <= 16'h0;
        shift_reg_2_valid <= 1'b0;
        shift_reg_2_payload_cha_i <= 16'h0;
        shift_reg_2_payload_cha_q <= 16'h0;
        shift_reg_3_valid <= 1'b0;
        shift_reg_3_payload_cha_i <= 16'h0;
        shift_reg_3_payload_cha_q <= 16'h0;
        shift_reg_4_valid <= 1'b0;
        shift_reg_4_payload_cha_i <= 16'h0;
        shift_reg_4_payload_cha_q <= 16'h0;
        shift_reg_5_valid <= 1'b0;
        shift_reg_5_payload_cha_i <= 16'h0;
        shift_reg_5_payload_cha_q <= 16'h0;
        shift_reg_6_valid <= 1'b0;
        shift_reg_6_payload_cha_i <= 16'h0;
        shift_reg_6_payload_cha_q <= 16'h0;
        shift_reg_7_valid <= 1'b0;
        shift_reg_7_payload_cha_i <= 16'h0;
        shift_reg_7_payload_cha_q <= 16'h0;
        shift_reg_8_valid <= 1'b0;
        shift_reg_8_payload_cha_i <= 16'h0;
        shift_reg_8_payload_cha_q <= 16'h0;
        shift_reg_9_valid <= 1'b0;
        shift_reg_9_payload_cha_i <= 16'h0;
        shift_reg_9_payload_cha_q <= 16'h0;
        shift_reg_10_valid <= 1'b0;
        shift_reg_10_payload_cha_i <= 16'h0;
        shift_reg_10_payload_cha_q <= 16'h0;
        shift_reg_11_valid <= 1'b0;
        shift_reg_11_payload_cha_i <= 16'h0;
        shift_reg_11_payload_cha_q <= 16'h0;
        shift_reg_12_valid <= 1'b0;
        shift_reg_12_payload_cha_i <= 16'h0;
        shift_reg_12_payload_cha_q <= 16'h0;
        shift_reg_13_valid <= 1'b0;
        shift_reg_13_payload_cha_i <= 16'h0;
        shift_reg_13_payload_cha_q <= 16'h0;
        shift_reg_14_valid <= 1'b0;
        shift_reg_14_payload_cha_i <= 16'h0;
        shift_reg_14_payload_cha_q <= 16'h0;
        shift_reg_15_valid <= 1'b0;
        shift_reg_15_payload_cha_i <= 16'h0;
        shift_reg_15_payload_cha_q <= 16'h0;
        shift_reg_16_valid <= 1'b0;
        shift_reg_16_payload_cha_i <= 16'h0;
        shift_reg_16_payload_cha_q <= 16'h0;
        shift_reg_17_valid <= 1'b0;
        shift_reg_17_payload_cha_i <= 16'h0;
        shift_reg_17_payload_cha_q <= 16'h0;
        shift_reg_18_valid <= 1'b0;
        shift_reg_18_payload_cha_i <= 16'h0;
        shift_reg_18_payload_cha_q <= 16'h0;
        shift_reg_19_valid <= 1'b0;
        shift_reg_19_payload_cha_i <= 16'h0;
        shift_reg_19_payload_cha_q <= 16'h0;
        shift_reg_20_valid <= 1'b0;
        shift_reg_20_payload_cha_i <= 16'h0;
        shift_reg_20_payload_cha_q <= 16'h0;
        shift_reg_21_valid <= 1'b0;
        shift_reg_21_payload_cha_i <= 16'h0;
        shift_reg_21_payload_cha_q <= 16'h0;
        shift_reg_22_valid <= 1'b0;
        shift_reg_22_payload_cha_i <= 16'h0;
        shift_reg_22_payload_cha_q <= 16'h0;
        shift_reg_23_valid <= 1'b0;
        shift_reg_23_payload_cha_i <= 16'h0;
        shift_reg_23_payload_cha_q <= 16'h0;
        shift_reg_24_valid <= 1'b0;
        shift_reg_24_payload_cha_i <= 16'h0;
        shift_reg_24_payload_cha_q <= 16'h0;
        shift_reg_25_valid <= 1'b0;
        shift_reg_25_payload_cha_i <= 16'h0;
        shift_reg_25_payload_cha_q <= 16'h0;
        shift_reg_26_valid <= 1'b0;
        shift_reg_26_payload_cha_i <= 16'h0;
        shift_reg_26_payload_cha_q <= 16'h0;
        shift_reg_27_valid <= 1'b0;
        shift_reg_27_payload_cha_i <= 16'h0;
        shift_reg_27_payload_cha_q <= 16'h0;
        shift_reg_28_valid <= 1'b0;
        shift_reg_28_payload_cha_i <= 16'h0;
        shift_reg_28_payload_cha_q <= 16'h0;
        shift_reg_29_valid <= 1'b0;
        shift_reg_29_payload_cha_i <= 16'h0;
        shift_reg_29_payload_cha_q <= 16'h0;
        shift_reg_30_valid <= 1'b0;
        shift_reg_30_payload_cha_i <= 16'h0;
        shift_reg_30_payload_cha_q <= 16'h0;
        shift_reg_31_valid <= 1'b0;
        shift_reg_31_payload_cha_i <= 16'h0;
        shift_reg_31_payload_cha_q <= 16'h0;
        shift_reg_32_valid <= 1'b0;
        shift_reg_32_payload_cha_i <= 16'h0;
        shift_reg_32_payload_cha_q <= 16'h0;
        shift_reg_33_valid <= 1'b0;
        shift_reg_33_payload_cha_i <= 16'h0;
        shift_reg_33_payload_cha_q <= 16'h0;
        shift_reg_34_valid <= 1'b0;
        shift_reg_34_payload_cha_i <= 16'h0;
        shift_reg_34_payload_cha_q <= 16'h0;
        shift_reg_35_valid <= 1'b0;
        shift_reg_35_payload_cha_i <= 16'h0;
        shift_reg_35_payload_cha_q <= 16'h0;
        shift_reg_36_valid <= 1'b0;
        shift_reg_36_payload_cha_i <= 16'h0;
        shift_reg_36_payload_cha_q <= 16'h0;
        shift_reg_37_valid <= 1'b0;
        shift_reg_37_payload_cha_i <= 16'h0;
        shift_reg_37_payload_cha_q <= 16'h0;
        shift_reg_38_valid <= 1'b0;
        shift_reg_38_payload_cha_i <= 16'h0;
        shift_reg_38_payload_cha_q <= 16'h0;
        shift_reg_39_valid <= 1'b0;
        shift_reg_39_payload_cha_i <= 16'h0;
        shift_reg_39_payload_cha_q <= 16'h0;
        shift_reg_40_valid <= 1'b0;
        shift_reg_40_payload_cha_i <= 16'h0;
        shift_reg_40_payload_cha_q <= 16'h0;
        shift_reg_41_valid <= 1'b0;
        shift_reg_41_payload_cha_i <= 16'h0;
        shift_reg_41_payload_cha_q <= 16'h0;
        shift_reg_42_valid <= 1'b0;
        shift_reg_42_payload_cha_i <= 16'h0;
        shift_reg_42_payload_cha_q <= 16'h0;
        shift_reg_43_valid <= 1'b0;
        shift_reg_43_payload_cha_i <= 16'h0;
        shift_reg_43_payload_cha_q <= 16'h0;
        shift_reg_44_valid <= 1'b0;
        shift_reg_44_payload_cha_i <= 16'h0;
        shift_reg_44_payload_cha_q <= 16'h0;
        shift_reg_45_valid <= 1'b0;
        shift_reg_45_payload_cha_i <= 16'h0;
        shift_reg_45_payload_cha_q <= 16'h0;
        shift_reg_46_valid <= 1'b0;
        shift_reg_46_payload_cha_i <= 16'h0;
        shift_reg_46_payload_cha_q <= 16'h0;
        shift_reg_47_valid <= 1'b0;
        shift_reg_47_payload_cha_i <= 16'h0;
        shift_reg_47_payload_cha_q <= 16'h0;
        shift_reg_48_valid <= 1'b0;
        shift_reg_48_payload_cha_i <= 16'h0;
        shift_reg_48_payload_cha_q <= 16'h0;
        shift_reg_49_valid <= 1'b0;
        shift_reg_49_payload_cha_i <= 16'h0;
        shift_reg_49_payload_cha_q <= 16'h0;
        shift_reg_50_valid <= 1'b0;
        shift_reg_50_payload_cha_i <= 16'h0;
        shift_reg_50_payload_cha_q <= 16'h0;
        shift_reg_51_valid <= 1'b0;
        shift_reg_51_payload_cha_i <= 16'h0;
        shift_reg_51_payload_cha_q <= 16'h0;
        shift_reg_52_valid <= 1'b0;
        shift_reg_52_payload_cha_i <= 16'h0;
        shift_reg_52_payload_cha_q <= 16'h0;
        shift_reg_53_valid <= 1'b0;
        shift_reg_53_payload_cha_i <= 16'h0;
        shift_reg_53_payload_cha_q <= 16'h0;
        shift_reg_54_valid <= 1'b0;
        shift_reg_54_payload_cha_i <= 16'h0;
        shift_reg_54_payload_cha_q <= 16'h0;
        shift_reg_55_valid <= 1'b0;
        shift_reg_55_payload_cha_i <= 16'h0;
        shift_reg_55_payload_cha_q <= 16'h0;
        shift_reg_56_valid <= 1'b0;
        shift_reg_56_payload_cha_i <= 16'h0;
        shift_reg_56_payload_cha_q <= 16'h0;
        shift_reg_57_valid <= 1'b0;
        shift_reg_57_payload_cha_i <= 16'h0;
        shift_reg_57_payload_cha_q <= 16'h0;
        shift_reg_58_valid <= 1'b0;
        shift_reg_58_payload_cha_i <= 16'h0;
        shift_reg_58_payload_cha_q <= 16'h0;
        shift_reg_59_valid <= 1'b0;
        shift_reg_59_payload_cha_i <= 16'h0;
        shift_reg_59_payload_cha_q <= 16'h0;
        shift_reg_60_valid <= 1'b0;
        shift_reg_60_payload_cha_i <= 16'h0;
        shift_reg_60_payload_cha_q <= 16'h0;
        shift_reg_61_valid <= 1'b0;
        shift_reg_61_payload_cha_i <= 16'h0;
        shift_reg_61_payload_cha_q <= 16'h0;
        shift_reg_62_valid <= 1'b0;
        shift_reg_62_payload_cha_i <= 16'h0;
        shift_reg_62_payload_cha_q <= 16'h0;
        shift_reg_63_valid <= 1'b0;
        shift_reg_63_payload_cha_i <= 16'h0;
        shift_reg_63_payload_cha_q <= 16'h0;
      end
    end
  end


endmodule

//ShiftRegisterE replaced by ShiftRegisterE

module ShiftRegisterE (
  input      [31:0]   input_1,
  output     [31:0]   output_1,
  input               enable,
  input               clk,
  input               reset
);
  reg        [31:0]   shift_reg_0;
  reg        [31:0]   shift_reg_1;
  reg        [31:0]   shift_reg_2;
  reg        [31:0]   shift_reg_3;
  reg        [31:0]   shift_reg_4;
  reg        [31:0]   shift_reg_5;
  reg        [31:0]   shift_reg_6;
  reg        [31:0]   shift_reg_7;
  reg        [31:0]   shift_reg_8;
  reg        [31:0]   shift_reg_9;
  reg        [31:0]   shift_reg_10;
  reg        [31:0]   shift_reg_11;
  reg        [31:0]   shift_reg_12;
  reg        [31:0]   shift_reg_13;
  reg        [31:0]   shift_reg_14;
  reg        [31:0]   shift_reg_15;
  reg        [31:0]   shift_reg_16;
  reg        [31:0]   shift_reg_17;
  reg        [31:0]   shift_reg_18;
  reg        [31:0]   shift_reg_19;
  reg        [31:0]   shift_reg_20;
  reg        [31:0]   shift_reg_21;
  reg        [31:0]   shift_reg_22;
  reg        [31:0]   shift_reg_23;
  reg        [31:0]   shift_reg_24;
  reg        [31:0]   shift_reg_25;
  reg        [31:0]   shift_reg_26;
  reg        [31:0]   shift_reg_27;
  reg        [31:0]   shift_reg_28;
  reg        [31:0]   shift_reg_29;
  reg        [31:0]   shift_reg_30;
  reg        [31:0]   shift_reg_31;
  reg        [31:0]   shift_reg_32;
  reg        [31:0]   shift_reg_33;
  reg        [31:0]   shift_reg_34;
  reg        [31:0]   shift_reg_35;
  reg        [31:0]   shift_reg_36;
  reg        [31:0]   shift_reg_37;
  reg        [31:0]   shift_reg_38;
  reg        [31:0]   shift_reg_39;
  reg        [31:0]   shift_reg_40;
  reg        [31:0]   shift_reg_41;
  reg        [31:0]   shift_reg_42;
  reg        [31:0]   shift_reg_43;
  reg        [31:0]   shift_reg_44;
  reg        [31:0]   shift_reg_45;
  reg        [31:0]   shift_reg_46;
  reg        [31:0]   shift_reg_47;
  reg        [31:0]   shift_reg_48;
  reg        [31:0]   shift_reg_49;
  reg        [31:0]   shift_reg_50;
  reg        [31:0]   shift_reg_51;
  reg        [31:0]   shift_reg_52;
  reg        [31:0]   shift_reg_53;
  reg        [31:0]   shift_reg_54;
  reg        [31:0]   shift_reg_55;
  reg        [31:0]   shift_reg_56;
  reg        [31:0]   shift_reg_57;
  reg        [31:0]   shift_reg_58;
  reg        [31:0]   shift_reg_59;
  reg        [31:0]   shift_reg_60;
  reg        [31:0]   shift_reg_61;
  reg        [31:0]   shift_reg_62;
  reg        [31:0]   shift_reg_63;

  assign output_1 = shift_reg_63;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 32'h0;
      shift_reg_1 <= 32'h0;
      shift_reg_2 <= 32'h0;
      shift_reg_3 <= 32'h0;
      shift_reg_4 <= 32'h0;
      shift_reg_5 <= 32'h0;
      shift_reg_6 <= 32'h0;
      shift_reg_7 <= 32'h0;
      shift_reg_8 <= 32'h0;
      shift_reg_9 <= 32'h0;
      shift_reg_10 <= 32'h0;
      shift_reg_11 <= 32'h0;
      shift_reg_12 <= 32'h0;
      shift_reg_13 <= 32'h0;
      shift_reg_14 <= 32'h0;
      shift_reg_15 <= 32'h0;
      shift_reg_16 <= 32'h0;
      shift_reg_17 <= 32'h0;
      shift_reg_18 <= 32'h0;
      shift_reg_19 <= 32'h0;
      shift_reg_20 <= 32'h0;
      shift_reg_21 <= 32'h0;
      shift_reg_22 <= 32'h0;
      shift_reg_23 <= 32'h0;
      shift_reg_24 <= 32'h0;
      shift_reg_25 <= 32'h0;
      shift_reg_26 <= 32'h0;
      shift_reg_27 <= 32'h0;
      shift_reg_28 <= 32'h0;
      shift_reg_29 <= 32'h0;
      shift_reg_30 <= 32'h0;
      shift_reg_31 <= 32'h0;
      shift_reg_32 <= 32'h0;
      shift_reg_33 <= 32'h0;
      shift_reg_34 <= 32'h0;
      shift_reg_35 <= 32'h0;
      shift_reg_36 <= 32'h0;
      shift_reg_37 <= 32'h0;
      shift_reg_38 <= 32'h0;
      shift_reg_39 <= 32'h0;
      shift_reg_40 <= 32'h0;
      shift_reg_41 <= 32'h0;
      shift_reg_42 <= 32'h0;
      shift_reg_43 <= 32'h0;
      shift_reg_44 <= 32'h0;
      shift_reg_45 <= 32'h0;
      shift_reg_46 <= 32'h0;
      shift_reg_47 <= 32'h0;
      shift_reg_48 <= 32'h0;
      shift_reg_49 <= 32'h0;
      shift_reg_50 <= 32'h0;
      shift_reg_51 <= 32'h0;
      shift_reg_52 <= 32'h0;
      shift_reg_53 <= 32'h0;
      shift_reg_54 <= 32'h0;
      shift_reg_55 <= 32'h0;
      shift_reg_56 <= 32'h0;
      shift_reg_57 <= 32'h0;
      shift_reg_58 <= 32'h0;
      shift_reg_59 <= 32'h0;
      shift_reg_60 <= 32'h0;
      shift_reg_61 <= 32'h0;
      shift_reg_62 <= 32'h0;
      shift_reg_63 <= 32'h0;
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
        shift_reg_11 <= shift_reg_10;
        shift_reg_12 <= shift_reg_11;
        shift_reg_13 <= shift_reg_12;
        shift_reg_14 <= shift_reg_13;
        shift_reg_15 <= shift_reg_14;
        shift_reg_16 <= shift_reg_15;
        shift_reg_17 <= shift_reg_16;
        shift_reg_18 <= shift_reg_17;
        shift_reg_19 <= shift_reg_18;
        shift_reg_20 <= shift_reg_19;
        shift_reg_21 <= shift_reg_20;
        shift_reg_22 <= shift_reg_21;
        shift_reg_23 <= shift_reg_22;
        shift_reg_24 <= shift_reg_23;
        shift_reg_25 <= shift_reg_24;
        shift_reg_26 <= shift_reg_25;
        shift_reg_27 <= shift_reg_26;
        shift_reg_28 <= shift_reg_27;
        shift_reg_29 <= shift_reg_28;
        shift_reg_30 <= shift_reg_29;
        shift_reg_31 <= shift_reg_30;
        shift_reg_32 <= shift_reg_31;
        shift_reg_33 <= shift_reg_32;
        shift_reg_34 <= shift_reg_33;
        shift_reg_35 <= shift_reg_34;
        shift_reg_36 <= shift_reg_35;
        shift_reg_37 <= shift_reg_36;
        shift_reg_38 <= shift_reg_37;
        shift_reg_39 <= shift_reg_38;
        shift_reg_40 <= shift_reg_39;
        shift_reg_41 <= shift_reg_40;
        shift_reg_42 <= shift_reg_41;
        shift_reg_43 <= shift_reg_42;
        shift_reg_44 <= shift_reg_43;
        shift_reg_45 <= shift_reg_44;
        shift_reg_46 <= shift_reg_45;
        shift_reg_47 <= shift_reg_46;
        shift_reg_48 <= shift_reg_47;
        shift_reg_49 <= shift_reg_48;
        shift_reg_50 <= shift_reg_49;
        shift_reg_51 <= shift_reg_50;
        shift_reg_52 <= shift_reg_51;
        shift_reg_53 <= shift_reg_52;
        shift_reg_54 <= shift_reg_53;
        shift_reg_55 <= shift_reg_54;
        shift_reg_56 <= shift_reg_55;
        shift_reg_57 <= shift_reg_56;
        shift_reg_58 <= shift_reg_57;
        shift_reg_59 <= shift_reg_58;
        shift_reg_60 <= shift_reg_59;
        shift_reg_61 <= shift_reg_60;
        shift_reg_62 <= shift_reg_61;
        shift_reg_63 <= shift_reg_62;
      end else begin
        shift_reg_0 <= 32'h0;
        shift_reg_1 <= 32'h0;
        shift_reg_2 <= 32'h0;
        shift_reg_3 <= 32'h0;
        shift_reg_4 <= 32'h0;
        shift_reg_5 <= 32'h0;
        shift_reg_6 <= 32'h0;
        shift_reg_7 <= 32'h0;
        shift_reg_8 <= 32'h0;
        shift_reg_9 <= 32'h0;
        shift_reg_10 <= 32'h0;
        shift_reg_11 <= 32'h0;
        shift_reg_12 <= 32'h0;
        shift_reg_13 <= 32'h0;
        shift_reg_14 <= 32'h0;
        shift_reg_15 <= 32'h0;
        shift_reg_16 <= 32'h0;
        shift_reg_17 <= 32'h0;
        shift_reg_18 <= 32'h0;
        shift_reg_19 <= 32'h0;
        shift_reg_20 <= 32'h0;
        shift_reg_21 <= 32'h0;
        shift_reg_22 <= 32'h0;
        shift_reg_23 <= 32'h0;
        shift_reg_24 <= 32'h0;
        shift_reg_25 <= 32'h0;
        shift_reg_26 <= 32'h0;
        shift_reg_27 <= 32'h0;
        shift_reg_28 <= 32'h0;
        shift_reg_29 <= 32'h0;
        shift_reg_30 <= 32'h0;
        shift_reg_31 <= 32'h0;
        shift_reg_32 <= 32'h0;
        shift_reg_33 <= 32'h0;
        shift_reg_34 <= 32'h0;
        shift_reg_35 <= 32'h0;
        shift_reg_36 <= 32'h0;
        shift_reg_37 <= 32'h0;
        shift_reg_38 <= 32'h0;
        shift_reg_39 <= 32'h0;
        shift_reg_40 <= 32'h0;
        shift_reg_41 <= 32'h0;
        shift_reg_42 <= 32'h0;
        shift_reg_43 <= 32'h0;
        shift_reg_44 <= 32'h0;
        shift_reg_45 <= 32'h0;
        shift_reg_46 <= 32'h0;
        shift_reg_47 <= 32'h0;
        shift_reg_48 <= 32'h0;
        shift_reg_49 <= 32'h0;
        shift_reg_50 <= 32'h0;
        shift_reg_51 <= 32'h0;
        shift_reg_52 <= 32'h0;
        shift_reg_53 <= 32'h0;
        shift_reg_54 <= 32'h0;
        shift_reg_55 <= 32'h0;
        shift_reg_56 <= 32'h0;
        shift_reg_57 <= 32'h0;
        shift_reg_58 <= 32'h0;
        shift_reg_59 <= 32'h0;
        shift_reg_60 <= 32'h0;
        shift_reg_61 <= 32'h0;
        shift_reg_62 <= 32'h0;
        shift_reg_63 <= 32'h0;
      end
    end
  end


endmodule
