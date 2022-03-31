// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : CFOEstimator
// Git hash  : 6be8dabf8c1accc6c72f4cef9610ca5bac2b27e6

`timescale 1ns/1ps 

module CFOEstimator (
  input               rotated_data_valid,
  input      [11:0]   rotated_data_payload_cha_i,
  input      [11:0]   rotated_data_payload_cha_q,
  output              delta_phi_valid,
  output     [23:0]   delta_phi_payload,
  input               clk,
  input               reset
);

  wire                auto_corr_core_corr_result_valid;
  wire       [43:0]   auto_corr_core_corr_result_payload_cha_i;
  wire       [43:0]   auto_corr_core_corr_result_payload_cha_q;
  wire                cordic_core_raw_data_ready;
  wire                cordic_core_result_valid;
  wire       [23:0]   cordic_core_result_payload_x;
  wire       [23:0]   cordic_core_result_payload_y;
  wire       [23:0]   cordic_core_result_payload_z;
  wire       [44:0]   _zz__zz_when_SInt_l337_2;
  wire       [44:0]   _zz__zz_when_SInt_l337_2_1;
  wire       [19:0]   _zz_when_SInt_l191;
  wire       [24:0]   _zz__zz_when_SInt_l130_3;
  wire       [24:0]   _zz__zz_when_SInt_l130_3_1;
  wire       [44:0]   _zz__zz_when_SInt_l130;
  wire       [44:0]   _zz__zz_when_SInt_l130_1;
  wire       [44:0]   _zz__zz_when_SInt_l130_2;
  wire       [1:0]    _zz_when_SInt_l131;
  wire       [0:0]    _zz_when_SInt_l137;
  wire       [44:0]   _zz__zz_when_SInt_l337_5;
  wire       [44:0]   _zz__zz_when_SInt_l337_5_1;
  wire       [19:0]   _zz_when_SInt_l191_1;
  wire       [24:0]   _zz__zz_when_SInt_l130_7;
  wire       [24:0]   _zz__zz_when_SInt_l130_7_1;
  wire       [44:0]   _zz__zz_when_SInt_l130_4;
  wire       [44:0]   _zz__zz_when_SInt_l130_4_1;
  wire       [44:0]   _zz__zz_when_SInt_l130_4_2;
  wire       [1:0]    _zz_when_SInt_l131_1;
  wire       [0:0]    _zz_when_SInt_l137_1;
  wire       [5:0]    _zz_impulse_cnt;
  reg        [5:0]    impulse_cnt;
  reg        [24:0]   _zz_when_SInt_l130;
  wire       [43:0]   _zz_when_SInt_l130_1;
  wire       [43:0]   _zz_when_SInt_l337;
  wire       [43:0]   _zz_when_SInt_l337_1;
  wire       [44:0]   _zz_when_SInt_l337_2;
  wire       [43:0]   _zz_when_SInt_l130_2;
  wire                when_SInt_l337;
  reg        [24:0]   _zz_when_SInt_l130_3;
  wire                when_SInt_l191;
  reg        [23:0]   _zz_raw_data_payload_x;
  wire                when_SInt_l130;
  wire                when_SInt_l131;
  wire                when_SInt_l137;
  reg        [24:0]   _zz_when_SInt_l130_4;
  wire       [43:0]   _zz_when_SInt_l130_5;
  wire       [43:0]   _zz_when_SInt_l337_3;
  wire       [43:0]   _zz_when_SInt_l337_4;
  wire       [44:0]   _zz_when_SInt_l337_5;
  wire       [43:0]   _zz_when_SInt_l130_6;
  wire                when_SInt_l337_1;
  reg        [24:0]   _zz_when_SInt_l130_7;
  wire                when_SInt_l191_1;
  reg        [23:0]   _zz_raw_data_payload_y;
  wire                when_SInt_l130_1;
  wire                when_SInt_l131_1;
  wire                when_SInt_l137_1;

  assign _zz__zz_when_SInt_l337_2 = {_zz_when_SInt_l337_1[43],_zz_when_SInt_l337_1};
  assign _zz__zz_when_SInt_l337_2_1 = {_zz_when_SInt_l337[43],_zz_when_SInt_l337};
  assign _zz_when_SInt_l191 = _zz_when_SInt_l337_2[19 : 0];
  assign _zz__zz_when_SInt_l130_3 = _zz_when_SInt_l337_2[44 : 20];
  assign _zz__zz_when_SInt_l130_3_1 = 25'h0000001;
  assign _zz__zz_when_SInt_l130 = ($signed(_zz__zz_when_SInt_l130_1) + $signed(_zz__zz_when_SInt_l130_2));
  assign _zz__zz_when_SInt_l130_1 = {_zz_when_SInt_l130_2[43],_zz_when_SInt_l130_2};
  assign _zz__zz_when_SInt_l130_2 = {_zz_when_SInt_l130_1[43],_zz_when_SInt_l130_1};
  assign _zz_when_SInt_l131 = _zz_when_SInt_l130[24 : 23];
  assign _zz_when_SInt_l137 = _zz_when_SInt_l130[23 : 23];
  assign _zz__zz_when_SInt_l337_5 = {_zz_when_SInt_l337_4[43],_zz_when_SInt_l337_4};
  assign _zz__zz_when_SInt_l337_5_1 = {_zz_when_SInt_l337_3[43],_zz_when_SInt_l337_3};
  assign _zz_when_SInt_l191_1 = _zz_when_SInt_l337_5[19 : 0];
  assign _zz__zz_when_SInt_l130_7 = _zz_when_SInt_l337_5[44 : 20];
  assign _zz__zz_when_SInt_l130_7_1 = 25'h0000001;
  assign _zz__zz_when_SInt_l130_4 = ($signed(_zz__zz_when_SInt_l130_4_1) + $signed(_zz__zz_when_SInt_l130_4_2));
  assign _zz__zz_when_SInt_l130_4_1 = {_zz_when_SInt_l130_6[43],_zz_when_SInt_l130_6};
  assign _zz__zz_when_SInt_l130_4_2 = {_zz_when_SInt_l130_5[43],_zz_when_SInt_l130_5};
  assign _zz_when_SInt_l131_1 = _zz_when_SInt_l130_4[24 : 23];
  assign _zz_when_SInt_l137_1 = _zz_when_SInt_l130_4[23 : 23];
  assign _zz_impulse_cnt = (impulse_cnt + 6'h01);
  AutoCorrelator auto_corr_core (
    .raw_data_valid               (rotated_data_valid                              ), //i
    .raw_data_payload_cha_i       (rotated_data_payload_cha_i[11:0]                ), //i
    .raw_data_payload_cha_q       (rotated_data_payload_cha_q[11:0]                ), //i
    .corr_result_valid            (auto_corr_core_corr_result_valid                ), //o
    .corr_result_payload_cha_i    (auto_corr_core_corr_result_payload_cha_i[43:0]  ), //o
    .corr_result_payload_cha_q    (auto_corr_core_corr_result_payload_cha_q[43:0]  ), //o
    .clk                          (clk                                             ), //i
    .reset                        (reset                                           )  //i
  );
  CordicRotator cordic_core (
    .rotate_mode           (1'b0                                ), //i
    .x_u                   (2'b00                               ), //i
    .raw_data_valid        (auto_corr_core_corr_result_valid    ), //i
    .raw_data_ready        (cordic_core_raw_data_ready          ), //o
    .raw_data_payload_x    (_zz_raw_data_payload_x[23:0]        ), //i
    .raw_data_payload_y    (_zz_raw_data_payload_y[23:0]        ), //i
    .raw_data_payload_z    (24'h0                               ), //i
    .result_valid          (cordic_core_result_valid            ), //o
    .result_payload_x      (cordic_core_result_payload_x[23:0]  ), //o
    .result_payload_y      (cordic_core_result_payload_y[23:0]  ), //o
    .result_payload_z      (cordic_core_result_payload_z[23:0]  ), //o
    .clk                   (clk                                 ), //i
    .reset                 (reset                               )  //i
  );
  assign _zz_when_SInt_l130_1 = {{24'h0,1'b1},19'h0};
  assign _zz_when_SInt_l337 = {25'h1ffffff,19'h0};
  assign _zz_when_SInt_l337_1 = auto_corr_core_corr_result_payload_cha_i[43 : 0];
  assign _zz_when_SInt_l337_2 = ($signed(_zz__zz_when_SInt_l337_2) + $signed(_zz__zz_when_SInt_l337_2_1));
  assign _zz_when_SInt_l130_2 = auto_corr_core_corr_result_payload_cha_i[43 : 0];
  assign when_SInt_l337 = _zz_when_SInt_l337_2[44];
  assign when_SInt_l191 = (|_zz_when_SInt_l191);
  always @(*) begin
    if(when_SInt_l191) begin
      _zz_when_SInt_l130_3 = ($signed(_zz__zz_when_SInt_l130_3) + $signed(_zz__zz_when_SInt_l130_3_1));
    end else begin
      _zz_when_SInt_l130_3 = _zz_when_SInt_l337_2[44 : 20];
    end
  end

  always @(*) begin
    if(when_SInt_l337) begin
      _zz_when_SInt_l130 = _zz_when_SInt_l130_3;
    end else begin
      _zz_when_SInt_l130 = (_zz__zz_when_SInt_l130 >>> 20);
    end
  end

  assign when_SInt_l130 = _zz_when_SInt_l130[24];
  assign when_SInt_l131 = (! (&_zz_when_SInt_l131));
  always @(*) begin
    if(when_SInt_l130) begin
      if(when_SInt_l131) begin
        _zz_raw_data_payload_x = 24'h800000;
      end else begin
        _zz_raw_data_payload_x = _zz_when_SInt_l130[23 : 0];
      end
    end else begin
      if(when_SInt_l137) begin
        _zz_raw_data_payload_x = 24'h7fffff;
      end else begin
        _zz_raw_data_payload_x = _zz_when_SInt_l130[23 : 0];
      end
    end
  end

  assign when_SInt_l137 = (|_zz_when_SInt_l137);
  assign _zz_when_SInt_l130_5 = {{24'h0,1'b1},19'h0};
  assign _zz_when_SInt_l337_3 = {25'h1ffffff,19'h0};
  assign _zz_when_SInt_l337_4 = auto_corr_core_corr_result_payload_cha_q[43 : 0];
  assign _zz_when_SInt_l337_5 = ($signed(_zz__zz_when_SInt_l337_5) + $signed(_zz__zz_when_SInt_l337_5_1));
  assign _zz_when_SInt_l130_6 = auto_corr_core_corr_result_payload_cha_q[43 : 0];
  assign when_SInt_l337_1 = _zz_when_SInt_l337_5[44];
  assign when_SInt_l191_1 = (|_zz_when_SInt_l191_1);
  always @(*) begin
    if(when_SInt_l191_1) begin
      _zz_when_SInt_l130_7 = ($signed(_zz__zz_when_SInt_l130_7) + $signed(_zz__zz_when_SInt_l130_7_1));
    end else begin
      _zz_when_SInt_l130_7 = _zz_when_SInt_l337_5[44 : 20];
    end
  end

  always @(*) begin
    if(when_SInt_l337_1) begin
      _zz_when_SInt_l130_4 = _zz_when_SInt_l130_7;
    end else begin
      _zz_when_SInt_l130_4 = (_zz__zz_when_SInt_l130_4 >>> 20);
    end
  end

  assign when_SInt_l130_1 = _zz_when_SInt_l130_4[24];
  assign when_SInt_l131_1 = (! (&_zz_when_SInt_l131_1));
  always @(*) begin
    if(when_SInt_l130_1) begin
      if(when_SInt_l131_1) begin
        _zz_raw_data_payload_y = 24'h800000;
      end else begin
        _zz_raw_data_payload_y = _zz_when_SInt_l130_4[23 : 0];
      end
    end else begin
      if(when_SInt_l137_1) begin
        _zz_raw_data_payload_y = 24'h7fffff;
      end else begin
        _zz_raw_data_payload_y = _zz_when_SInt_l130_4[23 : 0];
      end
    end
  end

  assign when_SInt_l137_1 = (|_zz_when_SInt_l137_1);
  assign delta_phi_valid = (cordic_core_result_valid && (impulse_cnt == 6'h39));
  assign delta_phi_payload = ($signed(cordic_core_result_payload_z) >>> 5);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      impulse_cnt <= 6'h0;
    end else begin
      if(auto_corr_core_corr_result_valid) begin
        impulse_cnt <= ((6'h39 <= impulse_cnt) ? 6'h0 : _zz_impulse_cnt);
      end else begin
        impulse_cnt <= 6'h0;
      end
    end
  end


endmodule

module CordicRotator (
  input               rotate_mode,
  input      [1:0]    x_u,
  input               raw_data_valid,
  output              raw_data_ready,
  input      [23:0]   raw_data_payload_x,
  input      [23:0]   raw_data_payload_y,
  input      [23:0]   raw_data_payload_z,
  output              result_valid,
  output     [23:0]   result_payload_x,
  output     [23:0]   result_payload_y,
  output     [23:0]   result_payload_z,
  input               clk,
  input               reset
);

  wire       [23:0]   _zz__zz_result_payload_x_1;
  wire       [23:0]   _zz__zz_result_payload_x_1_1;
  wire       [23:0]   _zz__zz_result_payload_x_1_2;
  wire       [23:0]   _zz__zz_result_payload_x_1_3;
  wire       [23:0]   _zz__zz_result_payload_x_13;
  wire       [23:0]   _zz__zz_result_payload_x_13_1;
  wire       [23:0]   _zz__zz_result_payload_x_24;
  wire       [23:0]   _zz__zz_result_payload_x_24_1;
  wire       [23:0]   _zz__zz_result_payload_x_2;
  wire       [23:0]   _zz__zz_result_payload_x_2_1;
  wire       [23:0]   _zz__zz_result_payload_x_2_2;
  wire       [23:0]   _zz__zz_result_payload_x_2_3;
  wire       [23:0]   _zz__zz_result_payload_x_14;
  wire       [23:0]   _zz__zz_result_payload_x_14_1;
  wire       [23:0]   _zz__zz_result_payload_x_25;
  wire       [23:0]   _zz__zz_result_payload_x_25_1;
  wire       [23:0]   _zz__zz_result_payload_x_3;
  wire       [23:0]   _zz__zz_result_payload_x_3_1;
  wire       [23:0]   _zz__zz_result_payload_x_3_2;
  wire       [23:0]   _zz__zz_result_payload_x_3_3;
  wire       [23:0]   _zz__zz_result_payload_x_15;
  wire       [23:0]   _zz__zz_result_payload_x_15_1;
  wire       [23:0]   _zz__zz_result_payload_x_26;
  wire       [23:0]   _zz__zz_result_payload_x_26_1;
  wire       [23:0]   _zz__zz_result_payload_x_4;
  wire       [23:0]   _zz__zz_result_payload_x_4_1;
  wire       [23:0]   _zz__zz_result_payload_x_4_2;
  wire       [23:0]   _zz__zz_result_payload_x_4_3;
  wire       [23:0]   _zz__zz_result_payload_x_16;
  wire       [23:0]   _zz__zz_result_payload_x_16_1;
  wire       [23:0]   _zz__zz_result_payload_x_27;
  wire       [23:0]   _zz__zz_result_payload_x_27_1;
  wire       [23:0]   _zz__zz_result_payload_x_5;
  wire       [23:0]   _zz__zz_result_payload_x_5_1;
  wire       [23:0]   _zz__zz_result_payload_x_5_2;
  wire       [23:0]   _zz__zz_result_payload_x_5_3;
  wire       [23:0]   _zz__zz_result_payload_x_17;
  wire       [23:0]   _zz__zz_result_payload_x_17_1;
  wire       [23:0]   _zz__zz_result_payload_x_28;
  wire       [23:0]   _zz__zz_result_payload_x_28_1;
  wire       [23:0]   _zz__zz_result_payload_x_6;
  wire       [23:0]   _zz__zz_result_payload_x_6_1;
  wire       [23:0]   _zz__zz_result_payload_x_6_2;
  wire       [23:0]   _zz__zz_result_payload_x_6_3;
  wire       [23:0]   _zz__zz_result_payload_x_18;
  wire       [23:0]   _zz__zz_result_payload_x_18_1;
  wire       [23:0]   _zz__zz_result_payload_x_29;
  wire       [23:0]   _zz__zz_result_payload_x_29_1;
  wire       [23:0]   _zz__zz_result_payload_x_7;
  wire       [23:0]   _zz__zz_result_payload_x_7_1;
  wire       [23:0]   _zz__zz_result_payload_x_7_2;
  wire       [23:0]   _zz__zz_result_payload_x_7_3;
  wire       [23:0]   _zz__zz_result_payload_x_19;
  wire       [23:0]   _zz__zz_result_payload_x_19_1;
  wire       [23:0]   _zz__zz_result_payload_x_30;
  wire       [23:0]   _zz__zz_result_payload_x_30_1;
  wire       [23:0]   _zz__zz_result_payload_x_8;
  wire       [23:0]   _zz__zz_result_payload_x_8_1;
  wire       [23:0]   _zz__zz_result_payload_x_8_2;
  wire       [23:0]   _zz__zz_result_payload_x_8_3;
  wire       [23:0]   _zz__zz_result_payload_x_20;
  wire       [23:0]   _zz__zz_result_payload_x_20_1;
  wire       [23:0]   _zz__zz_result_payload_x_31;
  wire       [23:0]   _zz__zz_result_payload_x_31_1;
  wire       [23:0]   _zz__zz_result_payload_x_9;
  wire       [23:0]   _zz__zz_result_payload_x_9_1;
  wire       [23:0]   _zz__zz_result_payload_x_9_2;
  wire       [23:0]   _zz__zz_result_payload_x_9_3;
  wire       [23:0]   _zz__zz_result_payload_x_21;
  wire       [23:0]   _zz__zz_result_payload_x_21_1;
  wire       [23:0]   _zz__zz_result_payload_x_32;
  wire       [23:0]   _zz__zz_result_payload_x_32_1;
  wire       [23:0]   _zz__zz_result_payload_x_10;
  wire       [23:0]   _zz__zz_result_payload_x_10_1;
  wire       [23:0]   _zz__zz_result_payload_x_10_2;
  wire       [23:0]   _zz__zz_result_payload_x_10_3;
  wire       [23:0]   _zz__zz_result_payload_x_22;
  wire       [23:0]   _zz__zz_result_payload_x_22_1;
  wire       [23:0]   _zz__zz_result_payload_x_33;
  wire       [23:0]   _zz__zz_result_payload_x_33_1;
  wire       [23:0]   _zz__zz_result_payload_x_11;
  wire       [23:0]   _zz__zz_result_payload_x_11_1;
  wire       [23:0]   _zz__zz_result_payload_x_11_2;
  wire       [23:0]   _zz__zz_result_payload_x_11_3;
  wire       [23:0]   _zz__zz_result_payload_y;
  wire       [23:0]   _zz__zz_result_payload_y_1;
  wire       [23:0]   _zz__zz_result_payload_z;
  wire       [23:0]   _zz__zz_result_payload_z_1;
  reg        [23:0]   _zz_result_payload_x;
  reg        [23:0]   _zz_result_payload_x_1;
  reg        [23:0]   _zz_result_payload_x_2;
  reg        [23:0]   _zz_result_payload_x_3;
  reg        [23:0]   _zz_result_payload_x_4;
  reg        [23:0]   _zz_result_payload_x_5;
  reg        [23:0]   _zz_result_payload_x_6;
  reg        [23:0]   _zz_result_payload_x_7;
  reg        [23:0]   _zz_result_payload_x_8;
  reg        [23:0]   _zz_result_payload_x_9;
  reg        [23:0]   _zz_result_payload_x_10;
  reg        [23:0]   _zz_result_payload_x_11;
  reg        [23:0]   _zz_result_payload_x_12;
  reg        [23:0]   _zz_result_payload_x_13;
  reg        [23:0]   _zz_result_payload_x_14;
  reg        [23:0]   _zz_result_payload_x_15;
  reg        [23:0]   _zz_result_payload_x_16;
  reg        [23:0]   _zz_result_payload_x_17;
  reg        [23:0]   _zz_result_payload_x_18;
  reg        [23:0]   _zz_result_payload_x_19;
  reg        [23:0]   _zz_result_payload_x_20;
  reg        [23:0]   _zz_result_payload_x_21;
  reg        [23:0]   _zz_result_payload_x_22;
  reg        [23:0]   _zz_result_payload_y;
  reg        [23:0]   _zz_result_payload_x_23;
  reg        [23:0]   _zz_result_payload_x_24;
  reg        [23:0]   _zz_result_payload_x_25;
  reg        [23:0]   _zz_result_payload_x_26;
  reg        [23:0]   _zz_result_payload_x_27;
  reg        [23:0]   _zz_result_payload_x_28;
  reg        [23:0]   _zz_result_payload_x_29;
  reg        [23:0]   _zz_result_payload_x_30;
  reg        [23:0]   _zz_result_payload_x_31;
  reg        [23:0]   _zz_result_payload_x_32;
  reg        [23:0]   _zz_result_payload_x_33;
  reg        [23:0]   _zz_result_payload_z;
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
  reg                 _zz_result_payload_x_34;
  reg                 _zz_result_payload_x_35;
  reg                 _zz_result_payload_x_36;
  reg                 _zz_result_payload_x_37;
  reg                 _zz_result_payload_x_38;
  reg                 _zz_result_payload_x_39;
  reg                 _zz_result_payload_x_40;
  reg                 _zz_result_payload_x_41;
  reg                 _zz_result_payload_x_42;
  reg                 _zz_result_payload_x_43;
  reg                 _zz_result_payload_x_44;
  reg        [23:0]   _zz_result_payload_x_45;
  reg        [23:0]   _zz_result_payload_x_46;
  reg        [23:0]   _zz_result_payload_x_47;
  reg        [23:0]   _zz_result_payload_x_48;
  reg        [23:0]   _zz_result_payload_x_49;
  reg        [23:0]   _zz_result_payload_x_50;
  reg        [23:0]   _zz_result_payload_x_51;
  reg        [23:0]   _zz_result_payload_x_52;
  reg        [23:0]   _zz_result_payload_x_53;
  reg        [23:0]   _zz_result_payload_x_54;
  reg        [23:0]   _zz_result_payload_z_1;
  wire                raw_data_fire;
  wire                _zz_result_payload_x_55;
  wire       [23:0]   _zz_result_payload_x_56;
  wire       [23:0]   _zz_result_payload_x_57;
  wire                _zz_result_payload_x_58;
  wire       [23:0]   _zz_result_payload_x_59;
  wire       [23:0]   _zz_result_payload_x_60;
  wire                _zz_result_payload_x_61;
  wire       [23:0]   _zz_result_payload_x_62;
  wire       [23:0]   _zz_result_payload_x_63;
  wire                _zz_result_payload_x_64;
  wire       [23:0]   _zz_result_payload_x_65;
  wire       [23:0]   _zz_result_payload_x_66;
  wire                _zz_result_payload_x_67;
  wire       [23:0]   _zz_result_payload_x_68;
  wire       [23:0]   _zz_result_payload_x_69;
  wire                _zz_result_payload_x_70;
  wire       [23:0]   _zz_result_payload_x_71;
  wire       [23:0]   _zz_result_payload_x_72;
  wire                _zz_result_payload_x_73;
  wire       [23:0]   _zz_result_payload_x_74;
  wire       [23:0]   _zz_result_payload_x_75;
  wire                _zz_result_payload_x_76;
  wire       [23:0]   _zz_result_payload_x_77;
  wire       [23:0]   _zz_result_payload_x_78;
  wire                _zz_result_payload_x_79;
  wire       [23:0]   _zz_result_payload_x_80;
  wire       [23:0]   _zz_result_payload_x_81;
  wire                _zz_result_payload_x_82;
  wire       [23:0]   _zz_result_payload_x_83;
  wire       [23:0]   _zz_result_payload_x_84;
  wire                _zz_result_payload_x_85;
  wire       [23:0]   _zz_result_payload_y_1;
  wire       [23:0]   _zz_result_payload_x_86;

  assign _zz__zz_result_payload_x_1 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_1_1 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_1_2 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_1_3 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_13 = ($signed(_zz_result_payload_x_12) + $signed(_zz_result_payload_x_56));
  assign _zz__zz_result_payload_x_13_1 = ($signed(_zz_result_payload_x_12) - $signed(_zz_result_payload_x_56));
  assign _zz__zz_result_payload_x_24 = ($signed(_zz_result_payload_x_23) - $signed(_zz_result_payload_x_45));
  assign _zz__zz_result_payload_x_24_1 = ($signed(_zz_result_payload_x_23) + $signed(_zz_result_payload_x_45));
  assign _zz__zz_result_payload_x_2 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_60));
  assign _zz__zz_result_payload_x_2_1 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_60));
  assign _zz__zz_result_payload_x_2_2 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_60));
  assign _zz__zz_result_payload_x_2_3 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_60));
  assign _zz__zz_result_payload_x_14 = ($signed(_zz_result_payload_x_13) + $signed(_zz_result_payload_x_59));
  assign _zz__zz_result_payload_x_14_1 = ($signed(_zz_result_payload_x_13) - $signed(_zz_result_payload_x_59));
  assign _zz__zz_result_payload_x_25 = ($signed(_zz_result_payload_x_24) - $signed(_zz_result_payload_x_46));
  assign _zz__zz_result_payload_x_25_1 = ($signed(_zz_result_payload_x_24) + $signed(_zz_result_payload_x_46));
  assign _zz__zz_result_payload_x_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_3_1 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_3_2 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_3_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_15 = ($signed(_zz_result_payload_x_14) + $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_15_1 = ($signed(_zz_result_payload_x_14) - $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_26 = ($signed(_zz_result_payload_x_25) - $signed(_zz_result_payload_x_47));
  assign _zz__zz_result_payload_x_26_1 = ($signed(_zz_result_payload_x_25) + $signed(_zz_result_payload_x_47));
  assign _zz__zz_result_payload_x_4 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_4_1 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_4_2 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_4_3 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_16 = ($signed(_zz_result_payload_x_15) + $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_16_1 = ($signed(_zz_result_payload_x_15) - $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_27 = ($signed(_zz_result_payload_x_26) - $signed(_zz_result_payload_x_48));
  assign _zz__zz_result_payload_x_27_1 = ($signed(_zz_result_payload_x_26) + $signed(_zz_result_payload_x_48));
  assign _zz__zz_result_payload_x_5 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_5_1 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_5_2 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_5_3 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_17 = ($signed(_zz_result_payload_x_16) + $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_17_1 = ($signed(_zz_result_payload_x_16) - $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_28 = ($signed(_zz_result_payload_x_27) - $signed(_zz_result_payload_x_49));
  assign _zz__zz_result_payload_x_28_1 = ($signed(_zz_result_payload_x_27) + $signed(_zz_result_payload_x_49));
  assign _zz__zz_result_payload_x_6 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_6_1 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_6_2 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_6_3 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_18 = ($signed(_zz_result_payload_x_17) + $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_18_1 = ($signed(_zz_result_payload_x_17) - $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_29 = ($signed(_zz_result_payload_x_28) - $signed(_zz_result_payload_x_50));
  assign _zz__zz_result_payload_x_29_1 = ($signed(_zz_result_payload_x_28) + $signed(_zz_result_payload_x_50));
  assign _zz__zz_result_payload_x_7 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_75));
  assign _zz__zz_result_payload_x_7_1 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_75));
  assign _zz__zz_result_payload_x_7_2 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_75));
  assign _zz__zz_result_payload_x_7_3 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_75));
  assign _zz__zz_result_payload_x_19 = ($signed(_zz_result_payload_x_18) + $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_19_1 = ($signed(_zz_result_payload_x_18) - $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_30 = ($signed(_zz_result_payload_x_29) - $signed(_zz_result_payload_x_51));
  assign _zz__zz_result_payload_x_30_1 = ($signed(_zz_result_payload_x_29) + $signed(_zz_result_payload_x_51));
  assign _zz__zz_result_payload_x_8 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_8_1 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_8_2 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_8_3 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_20 = ($signed(_zz_result_payload_x_19) + $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_20_1 = ($signed(_zz_result_payload_x_19) - $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_31 = ($signed(_zz_result_payload_x_30) - $signed(_zz_result_payload_x_52));
  assign _zz__zz_result_payload_x_31_1 = ($signed(_zz_result_payload_x_30) + $signed(_zz_result_payload_x_52));
  assign _zz__zz_result_payload_x_9 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_9_1 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_9_2 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_9_3 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_21 = ($signed(_zz_result_payload_x_20) + $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_21_1 = ($signed(_zz_result_payload_x_20) - $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_32 = ($signed(_zz_result_payload_x_31) - $signed(_zz_result_payload_x_53));
  assign _zz__zz_result_payload_x_32_1 = ($signed(_zz_result_payload_x_31) + $signed(_zz_result_payload_x_53));
  assign _zz__zz_result_payload_x_10 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_10_1 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_10_2 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_10_3 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_22 = ($signed(_zz_result_payload_x_21) + $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_22_1 = ($signed(_zz_result_payload_x_21) - $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_33 = ($signed(_zz_result_payload_x_32) - $signed(_zz_result_payload_x_54));
  assign _zz__zz_result_payload_x_33_1 = ($signed(_zz_result_payload_x_32) + $signed(_zz_result_payload_x_54));
  assign _zz__zz_result_payload_x_11 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_11_1 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_11_2 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_11_3 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_y = ($signed(_zz_result_payload_x_22) + $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_y_1 = ($signed(_zz_result_payload_x_22) - $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_z = ($signed(_zz_result_payload_x_33) - $signed(_zz_result_payload_z_1));
  assign _zz__zz_result_payload_z_1 = ($signed(_zz_result_payload_x_33) + $signed(_zz_result_payload_z_1));
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign _zz_result_payload_x_55 = (_zz_result_payload_x_34 ? (! _zz_result_payload_x_23[23]) : _zz_result_payload_x_12[23]);
  assign _zz_result_payload_x_56 = ($signed(_zz_result_payload_x) >>> 0);
  assign _zz_result_payload_x_57 = ($signed(_zz_result_payload_x_12) >>> 0);
  assign _zz_result_payload_x_58 = (_zz_result_payload_x_35 ? (! _zz_result_payload_x_24[23]) : _zz_result_payload_x_13[23]);
  assign _zz_result_payload_x_59 = ($signed(_zz_result_payload_x_1) >>> 1);
  assign _zz_result_payload_x_60 = ($signed(_zz_result_payload_x_13) >>> 1);
  assign _zz_result_payload_x_61 = (_zz_result_payload_x_36 ? (! _zz_result_payload_x_25[23]) : _zz_result_payload_x_14[23]);
  assign _zz_result_payload_x_62 = ($signed(_zz_result_payload_x_2) >>> 2);
  assign _zz_result_payload_x_63 = ($signed(_zz_result_payload_x_14) >>> 2);
  assign _zz_result_payload_x_64 = (_zz_result_payload_x_37 ? (! _zz_result_payload_x_26[23]) : _zz_result_payload_x_15[23]);
  assign _zz_result_payload_x_65 = ($signed(_zz_result_payload_x_3) >>> 3);
  assign _zz_result_payload_x_66 = ($signed(_zz_result_payload_x_15) >>> 3);
  assign _zz_result_payload_x_67 = (_zz_result_payload_x_38 ? (! _zz_result_payload_x_27[23]) : _zz_result_payload_x_16[23]);
  assign _zz_result_payload_x_68 = ($signed(_zz_result_payload_x_4) >>> 4);
  assign _zz_result_payload_x_69 = ($signed(_zz_result_payload_x_16) >>> 4);
  assign _zz_result_payload_x_70 = (_zz_result_payload_x_39 ? (! _zz_result_payload_x_28[23]) : _zz_result_payload_x_17[23]);
  assign _zz_result_payload_x_71 = ($signed(_zz_result_payload_x_5) >>> 5);
  assign _zz_result_payload_x_72 = ($signed(_zz_result_payload_x_17) >>> 5);
  assign _zz_result_payload_x_73 = (_zz_result_payload_x_40 ? (! _zz_result_payload_x_29[23]) : _zz_result_payload_x_18[23]);
  assign _zz_result_payload_x_74 = ($signed(_zz_result_payload_x_6) >>> 6);
  assign _zz_result_payload_x_75 = ($signed(_zz_result_payload_x_18) >>> 6);
  assign _zz_result_payload_x_76 = (_zz_result_payload_x_41 ? (! _zz_result_payload_x_30[23]) : _zz_result_payload_x_19[23]);
  assign _zz_result_payload_x_77 = ($signed(_zz_result_payload_x_7) >>> 7);
  assign _zz_result_payload_x_78 = ($signed(_zz_result_payload_x_19) >>> 7);
  assign _zz_result_payload_x_79 = (_zz_result_payload_x_42 ? (! _zz_result_payload_x_31[23]) : _zz_result_payload_x_20[23]);
  assign _zz_result_payload_x_80 = ($signed(_zz_result_payload_x_8) >>> 8);
  assign _zz_result_payload_x_81 = ($signed(_zz_result_payload_x_20) >>> 8);
  assign _zz_result_payload_x_82 = (_zz_result_payload_x_43 ? (! _zz_result_payload_x_32[23]) : _zz_result_payload_x_21[23]);
  assign _zz_result_payload_x_83 = ($signed(_zz_result_payload_x_9) >>> 9);
  assign _zz_result_payload_x_84 = ($signed(_zz_result_payload_x_21) >>> 9);
  assign _zz_result_payload_x_85 = (_zz_result_payload_x_44 ? (! _zz_result_payload_x_33[23]) : _zz_result_payload_x_22[23]);
  assign _zz_result_payload_y_1 = ($signed(_zz_result_payload_x_10) >>> 10);
  assign _zz_result_payload_x_86 = ($signed(_zz_result_payload_x_22) >>> 10);
  assign result_valid = _zz_result_valid_11;
  assign result_payload_x = _zz_result_payload_x_11;
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
    end
  end

  always @(posedge clk) begin
    _zz_result_payload_x_45 <= 24'h000c90;
    _zz_result_payload_x_46 <= 24'h00076b;
    _zz_result_payload_x_47 <= 24'h0003eb;
    _zz_result_payload_x_48 <= 24'h0001fd;
    _zz_result_payload_x_49 <= 24'h0000ff;
    _zz_result_payload_x_50 <= 24'h00007f;
    _zz_result_payload_x_51 <= 24'h00003f;
    _zz_result_payload_x_52 <= 24'h00001f;
    _zz_result_payload_x_53 <= 24'h00000f;
    _zz_result_payload_x_54 <= 24'h000007;
    _zz_result_payload_z_1 <= 24'h000003;
    if(raw_data_fire) begin
      _zz_result_payload_x <= raw_data_payload_x;
      _zz_result_payload_x_12 <= raw_data_payload_y;
      _zz_result_payload_x_23 <= raw_data_payload_z;
      _zz_result_payload_x_34 <= rotate_mode;
    end
    if(_zz_result_valid) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_55 ? _zz__zz_result_payload_x_1 : _zz__zz_result_payload_x_1_1);
        end
        2'b10 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_55 ? _zz__zz_result_payload_x_1_2 : _zz__zz_result_payload_x_1_3);
        end
        default : begin
          _zz_result_payload_x_1 <= _zz_result_payload_x;
        end
      endcase
      _zz_result_payload_x_13 <= (_zz_result_payload_x_55 ? _zz__zz_result_payload_x_13 : _zz__zz_result_payload_x_13_1);
      _zz_result_payload_x_24 <= (_zz_result_payload_x_55 ? _zz__zz_result_payload_x_24 : _zz__zz_result_payload_x_24_1);
    end
    _zz_result_payload_x_35 <= _zz_result_payload_x_34;
    if(_zz_result_valid_1) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_58 ? _zz__zz_result_payload_x_2 : _zz__zz_result_payload_x_2_1);
        end
        2'b10 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_58 ? _zz__zz_result_payload_x_2_2 : _zz__zz_result_payload_x_2_3);
        end
        default : begin
          _zz_result_payload_x_2 <= _zz_result_payload_x_1;
        end
      endcase
      _zz_result_payload_x_14 <= (_zz_result_payload_x_58 ? _zz__zz_result_payload_x_14 : _zz__zz_result_payload_x_14_1);
      _zz_result_payload_x_25 <= (_zz_result_payload_x_58 ? _zz__zz_result_payload_x_25 : _zz__zz_result_payload_x_25_1);
    end
    _zz_result_payload_x_36 <= _zz_result_payload_x_35;
    if(_zz_result_valid_2) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_61 ? _zz__zz_result_payload_x_3 : _zz__zz_result_payload_x_3_1);
        end
        2'b10 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_61 ? _zz__zz_result_payload_x_3_2 : _zz__zz_result_payload_x_3_3);
        end
        default : begin
          _zz_result_payload_x_3 <= _zz_result_payload_x_2;
        end
      endcase
      _zz_result_payload_x_15 <= (_zz_result_payload_x_61 ? _zz__zz_result_payload_x_15 : _zz__zz_result_payload_x_15_1);
      _zz_result_payload_x_26 <= (_zz_result_payload_x_61 ? _zz__zz_result_payload_x_26 : _zz__zz_result_payload_x_26_1);
    end
    _zz_result_payload_x_37 <= _zz_result_payload_x_36;
    if(_zz_result_valid_3) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_64 ? _zz__zz_result_payload_x_4 : _zz__zz_result_payload_x_4_1);
        end
        2'b10 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_64 ? _zz__zz_result_payload_x_4_2 : _zz__zz_result_payload_x_4_3);
        end
        default : begin
          _zz_result_payload_x_4 <= _zz_result_payload_x_3;
        end
      endcase
      _zz_result_payload_x_16 <= (_zz_result_payload_x_64 ? _zz__zz_result_payload_x_16 : _zz__zz_result_payload_x_16_1);
      _zz_result_payload_x_27 <= (_zz_result_payload_x_64 ? _zz__zz_result_payload_x_27 : _zz__zz_result_payload_x_27_1);
    end
    _zz_result_payload_x_38 <= _zz_result_payload_x_37;
    if(_zz_result_valid_4) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_67 ? _zz__zz_result_payload_x_5 : _zz__zz_result_payload_x_5_1);
        end
        2'b10 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_67 ? _zz__zz_result_payload_x_5_2 : _zz__zz_result_payload_x_5_3);
        end
        default : begin
          _zz_result_payload_x_5 <= _zz_result_payload_x_4;
        end
      endcase
      _zz_result_payload_x_17 <= (_zz_result_payload_x_67 ? _zz__zz_result_payload_x_17 : _zz__zz_result_payload_x_17_1);
      _zz_result_payload_x_28 <= (_zz_result_payload_x_67 ? _zz__zz_result_payload_x_28 : _zz__zz_result_payload_x_28_1);
    end
    _zz_result_payload_x_39 <= _zz_result_payload_x_38;
    if(_zz_result_valid_5) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_70 ? _zz__zz_result_payload_x_6 : _zz__zz_result_payload_x_6_1);
        end
        2'b10 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_70 ? _zz__zz_result_payload_x_6_2 : _zz__zz_result_payload_x_6_3);
        end
        default : begin
          _zz_result_payload_x_6 <= _zz_result_payload_x_5;
        end
      endcase
      _zz_result_payload_x_18 <= (_zz_result_payload_x_70 ? _zz__zz_result_payload_x_18 : _zz__zz_result_payload_x_18_1);
      _zz_result_payload_x_29 <= (_zz_result_payload_x_70 ? _zz__zz_result_payload_x_29 : _zz__zz_result_payload_x_29_1);
    end
    _zz_result_payload_x_40 <= _zz_result_payload_x_39;
    if(_zz_result_valid_6) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_73 ? _zz__zz_result_payload_x_7 : _zz__zz_result_payload_x_7_1);
        end
        2'b10 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_73 ? _zz__zz_result_payload_x_7_2 : _zz__zz_result_payload_x_7_3);
        end
        default : begin
          _zz_result_payload_x_7 <= _zz_result_payload_x_6;
        end
      endcase
      _zz_result_payload_x_19 <= (_zz_result_payload_x_73 ? _zz__zz_result_payload_x_19 : _zz__zz_result_payload_x_19_1);
      _zz_result_payload_x_30 <= (_zz_result_payload_x_73 ? _zz__zz_result_payload_x_30 : _zz__zz_result_payload_x_30_1);
    end
    _zz_result_payload_x_41 <= _zz_result_payload_x_40;
    if(_zz_result_valid_7) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_8 : _zz__zz_result_payload_x_8_1);
        end
        2'b10 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_8_2 : _zz__zz_result_payload_x_8_3);
        end
        default : begin
          _zz_result_payload_x_8 <= _zz_result_payload_x_7;
        end
      endcase
      _zz_result_payload_x_20 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_20 : _zz__zz_result_payload_x_20_1);
      _zz_result_payload_x_31 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_31 : _zz__zz_result_payload_x_31_1);
    end
    _zz_result_payload_x_42 <= _zz_result_payload_x_41;
    if(_zz_result_valid_8) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_9 : _zz__zz_result_payload_x_9_1);
        end
        2'b10 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_9_2 : _zz__zz_result_payload_x_9_3);
        end
        default : begin
          _zz_result_payload_x_9 <= _zz_result_payload_x_8;
        end
      endcase
      _zz_result_payload_x_21 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_21 : _zz__zz_result_payload_x_21_1);
      _zz_result_payload_x_32 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_32 : _zz__zz_result_payload_x_32_1);
    end
    _zz_result_payload_x_43 <= _zz_result_payload_x_42;
    if(_zz_result_valid_9) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_10 : _zz__zz_result_payload_x_10_1);
        end
        2'b10 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_10_2 : _zz__zz_result_payload_x_10_3);
        end
        default : begin
          _zz_result_payload_x_10 <= _zz_result_payload_x_9;
        end
      endcase
      _zz_result_payload_x_22 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_22 : _zz__zz_result_payload_x_22_1);
      _zz_result_payload_x_33 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_33 : _zz__zz_result_payload_x_33_1);
    end
    _zz_result_payload_x_44 <= _zz_result_payload_x_43;
    if(_zz_result_valid_10) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_x_11 : _zz__zz_result_payload_x_11_1);
        end
        2'b10 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_x_11_2 : _zz__zz_result_payload_x_11_3);
        end
        default : begin
          _zz_result_payload_x_11 <= _zz_result_payload_x_10;
        end
      endcase
      _zz_result_payload_y <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_y : _zz__zz_result_payload_y_1);
      _zz_result_payload_z <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_z : _zz__zz_result_payload_z_1);
    end
  end


endmodule

module AutoCorrelator (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              corr_result_valid,
  output     [43:0]   corr_result_payload_cha_i,
  output     [43:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);

  wire                shiftRegister_3_clc;
  wire                shiftRegister_3_output_valid;
  wire       [11:0]   shiftRegister_3_output_payload_cha_i;
  wire       [11:0]   shiftRegister_3_output_payload_cha_q;
  wire                corr_core_corr_result_valid;
  wire       [43:0]   corr_core_corr_result_payload_cha_i;
  wire       [43:0]   corr_core_corr_result_payload_cha_q;

  ShiftRegister_2 shiftRegister_3 (
    .input_valid             (raw_data_valid                              ), //i
    .input_payload_cha_i     (raw_data_payload_cha_i[11:0]                ), //i
    .input_payload_cha_q     (raw_data_payload_cha_q[11:0]                ), //i
    .output_valid            (shiftRegister_3_output_valid                ), //o
    .output_payload_cha_i    (shiftRegister_3_output_payload_cha_i[11:0]  ), //o
    .output_payload_cha_q    (shiftRegister_3_output_payload_cha_q[11:0]  ), //o
    .enable                  (raw_data_valid                              ), //i
    .clc                     (shiftRegister_3_clc                         ), //i
    .clk                     (clk                                         ), //i
    .reset                   (reset                                       )  //i
  );
  Correlator corr_core (
    .raw_data_0_valid             (raw_data_valid                              ), //i
    .raw_data_0_payload_cha_i     (raw_data_payload_cha_i[11:0]                ), //i
    .raw_data_0_payload_cha_q     (raw_data_payload_cha_q[11:0]                ), //i
    .raw_data_1_valid             (shiftRegister_3_output_valid                ), //i
    .raw_data_1_payload_cha_i     (shiftRegister_3_output_payload_cha_i[11:0]  ), //i
    .raw_data_1_payload_cha_q     (shiftRegister_3_output_payload_cha_q[11:0]  ), //i
    .corr_result_valid            (corr_core_corr_result_valid                 ), //o
    .corr_result_payload_cha_i    (corr_core_corr_result_payload_cha_i[43:0]   ), //o
    .corr_result_payload_cha_q    (corr_core_corr_result_payload_cha_q[43:0]   ), //o
    .clk                          (clk                                         ), //i
    .reset                        (reset                                       )  //i
  );
  assign shiftRegister_3_clc = (! raw_data_valid);
  assign corr_result_valid = corr_core_corr_result_valid;
  assign corr_result_payload_cha_i = corr_core_corr_result_payload_cha_i;
  assign corr_result_payload_cha_q = corr_core_corr_result_payload_cha_q;

endmodule

module Correlator (
  input               raw_data_0_valid,
  input      [11:0]   raw_data_0_payload_cha_i,
  input      [11:0]   raw_data_0_payload_cha_q,
  input               raw_data_1_valid,
  input      [11:0]   raw_data_1_payload_cha_i,
  input      [11:0]   raw_data_1_payload_cha_q,
  output              corr_result_valid,
  output     [43:0]   corr_result_payload_cha_i,
  output     [43:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);

  wire                shiftRegister_3_clc;
  wire                shiftRegister_4_clc;
  wire       [23:0]   shiftRegister_3_output_1;
  wire       [23:0]   shiftRegister_4_output_1;
  wire       [23:0]   _zz__zz_corr_val_i;
  wire       [23:0]   _zz__zz_corr_val_i_1;
  wire       [23:0]   _zz__zz_corr_val_q;
  wire       [23:0]   _zz__zz_corr_val_q_1;
  wire       [43:0]   _zz_corr_val_i_1;
  wire       [43:0]   _zz_corr_val_i_2;
  wire       [43:0]   _zz_corr_val_i_3;
  wire       [43:0]   _zz_corr_val_q_1;
  wire       [43:0]   _zz_corr_val_q_2;
  wire       [43:0]   _zz_corr_val_q_3;
  reg        [43:0]   corr_val_i;
  reg        [43:0]   corr_val_q;
  reg        [23:0]   _zz_corr_val_i;
  reg        [23:0]   _zz_corr_val_q;
  reg                 _zz_enable;
  reg                 _zz_corr_result_valid;

  assign _zz__zz_corr_val_i = ($signed(raw_data_0_payload_cha_i) * $signed(raw_data_1_payload_cha_i));
  assign _zz__zz_corr_val_i_1 = ($signed(raw_data_0_payload_cha_q) * $signed(raw_data_1_payload_cha_q));
  assign _zz__zz_corr_val_q = ($signed(raw_data_0_payload_cha_q) * $signed(raw_data_1_payload_cha_i));
  assign _zz__zz_corr_val_q_1 = ($signed(raw_data_0_payload_cha_i) * $signed(raw_data_1_payload_cha_q));
  assign _zz_corr_val_i_1 = ($signed(corr_val_i) - $signed(_zz_corr_val_i_2));
  assign _zz_corr_val_i_2 = {{20{shiftRegister_3_output_1[23]}}, shiftRegister_3_output_1};
  assign _zz_corr_val_i_3 = {{20{_zz_corr_val_i[23]}}, _zz_corr_val_i};
  assign _zz_corr_val_q_1 = ($signed(corr_val_q) - $signed(_zz_corr_val_q_2));
  assign _zz_corr_val_q_2 = {{20{shiftRegister_4_output_1[23]}}, shiftRegister_4_output_1};
  assign _zz_corr_val_q_3 = {{20{_zz_corr_val_q[23]}}, _zz_corr_val_q};
  ShiftRegister shiftRegister_3 (
    .input_1     (_zz_corr_val_i[23:0]            ), //i
    .output_1    (shiftRegister_3_output_1[23:0]  ), //o
    .enable      (_zz_enable                      ), //i
    .clc         (shiftRegister_3_clc             ), //i
    .clk         (clk                             ), //i
    .reset       (reset                           )  //i
  );
  ShiftRegister shiftRegister_4 (
    .input_1     (_zz_corr_val_q[23:0]            ), //i
    .output_1    (shiftRegister_4_output_1[23:0]  ), //o
    .enable      (_zz_enable                      ), //i
    .clc         (shiftRegister_4_clc             ), //i
    .clk         (clk                             ), //i
    .reset       (reset                           )  //i
  );
  assign shiftRegister_3_clc = (! _zz_enable);
  assign shiftRegister_4_clc = (! _zz_enable);
  assign corr_result_payload_cha_i = corr_val_i;
  assign corr_result_payload_cha_q = corr_val_q;
  assign corr_result_valid = _zz_corr_result_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      corr_val_i <= 44'h0;
      corr_val_q <= 44'h0;
      _zz_corr_val_i <= 24'h0;
      _zz_corr_val_q <= 24'h0;
      _zz_enable <= 1'b0;
      _zz_corr_result_valid <= 1'b0;
    end else begin
      _zz_corr_val_i <= ($signed(_zz__zz_corr_val_i) + $signed(_zz__zz_corr_val_i_1));
      _zz_corr_val_q <= ($signed(_zz__zz_corr_val_q) - $signed(_zz__zz_corr_val_q_1));
      _zz_enable <= (raw_data_0_valid && raw_data_1_valid);
      if(_zz_enable) begin
        _zz_corr_result_valid <= 1'b1;
        corr_val_i <= ($signed(_zz_corr_val_i_1) + $signed(_zz_corr_val_i_3));
        corr_val_q <= ($signed(_zz_corr_val_q_1) + $signed(_zz_corr_val_q_3));
      end else begin
        _zz_corr_result_valid <= 1'b0;
        corr_val_i <= 44'h0;
        corr_val_q <= 44'h0;
      end
    end
  end


endmodule

module ShiftRegister_2 (
  input               input_valid,
  input      [11:0]   input_payload_cha_i,
  input      [11:0]   input_payload_cha_q,
  output              output_valid,
  output     [11:0]   output_payload_cha_i,
  output     [11:0]   output_payload_cha_q,
  input               enable,
  input               clc,
  input               clk,
  input               reset
);

  reg                 shift_reg_0_valid;
  reg        [11:0]   shift_reg_0_payload_cha_i;
  reg        [11:0]   shift_reg_0_payload_cha_q;
  reg                 shift_reg_1_valid;
  reg        [11:0]   shift_reg_1_payload_cha_i;
  reg        [11:0]   shift_reg_1_payload_cha_q;
  reg                 shift_reg_2_valid;
  reg        [11:0]   shift_reg_2_payload_cha_i;
  reg        [11:0]   shift_reg_2_payload_cha_q;
  reg                 shift_reg_3_valid;
  reg        [11:0]   shift_reg_3_payload_cha_i;
  reg        [11:0]   shift_reg_3_payload_cha_q;
  reg                 shift_reg_4_valid;
  reg        [11:0]   shift_reg_4_payload_cha_i;
  reg        [11:0]   shift_reg_4_payload_cha_q;
  reg                 shift_reg_5_valid;
  reg        [11:0]   shift_reg_5_payload_cha_i;
  reg        [11:0]   shift_reg_5_payload_cha_q;
  reg                 shift_reg_6_valid;
  reg        [11:0]   shift_reg_6_payload_cha_i;
  reg        [11:0]   shift_reg_6_payload_cha_q;
  reg                 shift_reg_7_valid;
  reg        [11:0]   shift_reg_7_payload_cha_i;
  reg        [11:0]   shift_reg_7_payload_cha_q;
  reg                 shift_reg_8_valid;
  reg        [11:0]   shift_reg_8_payload_cha_i;
  reg        [11:0]   shift_reg_8_payload_cha_q;
  reg                 shift_reg_9_valid;
  reg        [11:0]   shift_reg_9_payload_cha_i;
  reg        [11:0]   shift_reg_9_payload_cha_q;
  reg                 shift_reg_10_valid;
  reg        [11:0]   shift_reg_10_payload_cha_i;
  reg        [11:0]   shift_reg_10_payload_cha_q;
  reg                 shift_reg_11_valid;
  reg        [11:0]   shift_reg_11_payload_cha_i;
  reg        [11:0]   shift_reg_11_payload_cha_q;
  reg                 shift_reg_12_valid;
  reg        [11:0]   shift_reg_12_payload_cha_i;
  reg        [11:0]   shift_reg_12_payload_cha_q;
  reg                 shift_reg_13_valid;
  reg        [11:0]   shift_reg_13_payload_cha_i;
  reg        [11:0]   shift_reg_13_payload_cha_q;
  reg                 shift_reg_14_valid;
  reg        [11:0]   shift_reg_14_payload_cha_i;
  reg        [11:0]   shift_reg_14_payload_cha_q;
  reg                 shift_reg_15_valid;
  reg        [11:0]   shift_reg_15_payload_cha_i;
  reg        [11:0]   shift_reg_15_payload_cha_q;
  reg                 shift_reg_16_valid;
  reg        [11:0]   shift_reg_16_payload_cha_i;
  reg        [11:0]   shift_reg_16_payload_cha_q;
  reg                 shift_reg_17_valid;
  reg        [11:0]   shift_reg_17_payload_cha_i;
  reg        [11:0]   shift_reg_17_payload_cha_q;
  reg                 shift_reg_18_valid;
  reg        [11:0]   shift_reg_18_payload_cha_i;
  reg        [11:0]   shift_reg_18_payload_cha_q;
  reg                 shift_reg_19_valid;
  reg        [11:0]   shift_reg_19_payload_cha_i;
  reg        [11:0]   shift_reg_19_payload_cha_q;
  reg                 shift_reg_20_valid;
  reg        [11:0]   shift_reg_20_payload_cha_i;
  reg        [11:0]   shift_reg_20_payload_cha_q;
  reg                 shift_reg_21_valid;
  reg        [11:0]   shift_reg_21_payload_cha_i;
  reg        [11:0]   shift_reg_21_payload_cha_q;
  reg                 shift_reg_22_valid;
  reg        [11:0]   shift_reg_22_payload_cha_i;
  reg        [11:0]   shift_reg_22_payload_cha_q;
  reg                 shift_reg_23_valid;
  reg        [11:0]   shift_reg_23_payload_cha_i;
  reg        [11:0]   shift_reg_23_payload_cha_q;
  reg                 shift_reg_24_valid;
  reg        [11:0]   shift_reg_24_payload_cha_i;
  reg        [11:0]   shift_reg_24_payload_cha_q;
  reg                 shift_reg_25_valid;
  reg        [11:0]   shift_reg_25_payload_cha_i;
  reg        [11:0]   shift_reg_25_payload_cha_q;
  reg                 shift_reg_26_valid;
  reg        [11:0]   shift_reg_26_payload_cha_i;
  reg        [11:0]   shift_reg_26_payload_cha_q;
  reg                 shift_reg_27_valid;
  reg        [11:0]   shift_reg_27_payload_cha_i;
  reg        [11:0]   shift_reg_27_payload_cha_q;
  reg                 shift_reg_28_valid;
  reg        [11:0]   shift_reg_28_payload_cha_i;
  reg        [11:0]   shift_reg_28_payload_cha_q;
  reg                 shift_reg_29_valid;
  reg        [11:0]   shift_reg_29_payload_cha_i;
  reg        [11:0]   shift_reg_29_payload_cha_q;
  reg                 shift_reg_30_valid;
  reg        [11:0]   shift_reg_30_payload_cha_i;
  reg        [11:0]   shift_reg_30_payload_cha_q;
  reg                 shift_reg_31_valid;
  reg        [11:0]   shift_reg_31_payload_cha_i;
  reg        [11:0]   shift_reg_31_payload_cha_q;

  assign output_valid = shift_reg_31_valid;
  assign output_payload_cha_i = shift_reg_31_payload_cha_i;
  assign output_payload_cha_q = shift_reg_31_payload_cha_q;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0_valid <= 1'b0;
      shift_reg_0_payload_cha_i <= 12'h0;
      shift_reg_0_payload_cha_q <= 12'h0;
      shift_reg_1_valid <= 1'b0;
      shift_reg_1_payload_cha_i <= 12'h0;
      shift_reg_1_payload_cha_q <= 12'h0;
      shift_reg_2_valid <= 1'b0;
      shift_reg_2_payload_cha_i <= 12'h0;
      shift_reg_2_payload_cha_q <= 12'h0;
      shift_reg_3_valid <= 1'b0;
      shift_reg_3_payload_cha_i <= 12'h0;
      shift_reg_3_payload_cha_q <= 12'h0;
      shift_reg_4_valid <= 1'b0;
      shift_reg_4_payload_cha_i <= 12'h0;
      shift_reg_4_payload_cha_q <= 12'h0;
      shift_reg_5_valid <= 1'b0;
      shift_reg_5_payload_cha_i <= 12'h0;
      shift_reg_5_payload_cha_q <= 12'h0;
      shift_reg_6_valid <= 1'b0;
      shift_reg_6_payload_cha_i <= 12'h0;
      shift_reg_6_payload_cha_q <= 12'h0;
      shift_reg_7_valid <= 1'b0;
      shift_reg_7_payload_cha_i <= 12'h0;
      shift_reg_7_payload_cha_q <= 12'h0;
      shift_reg_8_valid <= 1'b0;
      shift_reg_8_payload_cha_i <= 12'h0;
      shift_reg_8_payload_cha_q <= 12'h0;
      shift_reg_9_valid <= 1'b0;
      shift_reg_9_payload_cha_i <= 12'h0;
      shift_reg_9_payload_cha_q <= 12'h0;
      shift_reg_10_valid <= 1'b0;
      shift_reg_10_payload_cha_i <= 12'h0;
      shift_reg_10_payload_cha_q <= 12'h0;
      shift_reg_11_valid <= 1'b0;
      shift_reg_11_payload_cha_i <= 12'h0;
      shift_reg_11_payload_cha_q <= 12'h0;
      shift_reg_12_valid <= 1'b0;
      shift_reg_12_payload_cha_i <= 12'h0;
      shift_reg_12_payload_cha_q <= 12'h0;
      shift_reg_13_valid <= 1'b0;
      shift_reg_13_payload_cha_i <= 12'h0;
      shift_reg_13_payload_cha_q <= 12'h0;
      shift_reg_14_valid <= 1'b0;
      shift_reg_14_payload_cha_i <= 12'h0;
      shift_reg_14_payload_cha_q <= 12'h0;
      shift_reg_15_valid <= 1'b0;
      shift_reg_15_payload_cha_i <= 12'h0;
      shift_reg_15_payload_cha_q <= 12'h0;
      shift_reg_16_valid <= 1'b0;
      shift_reg_16_payload_cha_i <= 12'h0;
      shift_reg_16_payload_cha_q <= 12'h0;
      shift_reg_17_valid <= 1'b0;
      shift_reg_17_payload_cha_i <= 12'h0;
      shift_reg_17_payload_cha_q <= 12'h0;
      shift_reg_18_valid <= 1'b0;
      shift_reg_18_payload_cha_i <= 12'h0;
      shift_reg_18_payload_cha_q <= 12'h0;
      shift_reg_19_valid <= 1'b0;
      shift_reg_19_payload_cha_i <= 12'h0;
      shift_reg_19_payload_cha_q <= 12'h0;
      shift_reg_20_valid <= 1'b0;
      shift_reg_20_payload_cha_i <= 12'h0;
      shift_reg_20_payload_cha_q <= 12'h0;
      shift_reg_21_valid <= 1'b0;
      shift_reg_21_payload_cha_i <= 12'h0;
      shift_reg_21_payload_cha_q <= 12'h0;
      shift_reg_22_valid <= 1'b0;
      shift_reg_22_payload_cha_i <= 12'h0;
      shift_reg_22_payload_cha_q <= 12'h0;
      shift_reg_23_valid <= 1'b0;
      shift_reg_23_payload_cha_i <= 12'h0;
      shift_reg_23_payload_cha_q <= 12'h0;
      shift_reg_24_valid <= 1'b0;
      shift_reg_24_payload_cha_i <= 12'h0;
      shift_reg_24_payload_cha_q <= 12'h0;
      shift_reg_25_valid <= 1'b0;
      shift_reg_25_payload_cha_i <= 12'h0;
      shift_reg_25_payload_cha_q <= 12'h0;
      shift_reg_26_valid <= 1'b0;
      shift_reg_26_payload_cha_i <= 12'h0;
      shift_reg_26_payload_cha_q <= 12'h0;
      shift_reg_27_valid <= 1'b0;
      shift_reg_27_payload_cha_i <= 12'h0;
      shift_reg_27_payload_cha_q <= 12'h0;
      shift_reg_28_valid <= 1'b0;
      shift_reg_28_payload_cha_i <= 12'h0;
      shift_reg_28_payload_cha_q <= 12'h0;
      shift_reg_29_valid <= 1'b0;
      shift_reg_29_payload_cha_i <= 12'h0;
      shift_reg_29_payload_cha_q <= 12'h0;
      shift_reg_30_valid <= 1'b0;
      shift_reg_30_payload_cha_i <= 12'h0;
      shift_reg_30_payload_cha_q <= 12'h0;
      shift_reg_31_valid <= 1'b0;
      shift_reg_31_payload_cha_i <= 12'h0;
      shift_reg_31_payload_cha_q <= 12'h0;
    end else begin
      if(clc) begin
        shift_reg_0_valid <= 1'b0;
        shift_reg_0_payload_cha_i <= 12'h0;
        shift_reg_0_payload_cha_q <= 12'h0;
        shift_reg_1_valid <= 1'b0;
        shift_reg_1_payload_cha_i <= 12'h0;
        shift_reg_1_payload_cha_q <= 12'h0;
        shift_reg_2_valid <= 1'b0;
        shift_reg_2_payload_cha_i <= 12'h0;
        shift_reg_2_payload_cha_q <= 12'h0;
        shift_reg_3_valid <= 1'b0;
        shift_reg_3_payload_cha_i <= 12'h0;
        shift_reg_3_payload_cha_q <= 12'h0;
        shift_reg_4_valid <= 1'b0;
        shift_reg_4_payload_cha_i <= 12'h0;
        shift_reg_4_payload_cha_q <= 12'h0;
        shift_reg_5_valid <= 1'b0;
        shift_reg_5_payload_cha_i <= 12'h0;
        shift_reg_5_payload_cha_q <= 12'h0;
        shift_reg_6_valid <= 1'b0;
        shift_reg_6_payload_cha_i <= 12'h0;
        shift_reg_6_payload_cha_q <= 12'h0;
        shift_reg_7_valid <= 1'b0;
        shift_reg_7_payload_cha_i <= 12'h0;
        shift_reg_7_payload_cha_q <= 12'h0;
        shift_reg_8_valid <= 1'b0;
        shift_reg_8_payload_cha_i <= 12'h0;
        shift_reg_8_payload_cha_q <= 12'h0;
        shift_reg_9_valid <= 1'b0;
        shift_reg_9_payload_cha_i <= 12'h0;
        shift_reg_9_payload_cha_q <= 12'h0;
        shift_reg_10_valid <= 1'b0;
        shift_reg_10_payload_cha_i <= 12'h0;
        shift_reg_10_payload_cha_q <= 12'h0;
        shift_reg_11_valid <= 1'b0;
        shift_reg_11_payload_cha_i <= 12'h0;
        shift_reg_11_payload_cha_q <= 12'h0;
        shift_reg_12_valid <= 1'b0;
        shift_reg_12_payload_cha_i <= 12'h0;
        shift_reg_12_payload_cha_q <= 12'h0;
        shift_reg_13_valid <= 1'b0;
        shift_reg_13_payload_cha_i <= 12'h0;
        shift_reg_13_payload_cha_q <= 12'h0;
        shift_reg_14_valid <= 1'b0;
        shift_reg_14_payload_cha_i <= 12'h0;
        shift_reg_14_payload_cha_q <= 12'h0;
        shift_reg_15_valid <= 1'b0;
        shift_reg_15_payload_cha_i <= 12'h0;
        shift_reg_15_payload_cha_q <= 12'h0;
        shift_reg_16_valid <= 1'b0;
        shift_reg_16_payload_cha_i <= 12'h0;
        shift_reg_16_payload_cha_q <= 12'h0;
        shift_reg_17_valid <= 1'b0;
        shift_reg_17_payload_cha_i <= 12'h0;
        shift_reg_17_payload_cha_q <= 12'h0;
        shift_reg_18_valid <= 1'b0;
        shift_reg_18_payload_cha_i <= 12'h0;
        shift_reg_18_payload_cha_q <= 12'h0;
        shift_reg_19_valid <= 1'b0;
        shift_reg_19_payload_cha_i <= 12'h0;
        shift_reg_19_payload_cha_q <= 12'h0;
        shift_reg_20_valid <= 1'b0;
        shift_reg_20_payload_cha_i <= 12'h0;
        shift_reg_20_payload_cha_q <= 12'h0;
        shift_reg_21_valid <= 1'b0;
        shift_reg_21_payload_cha_i <= 12'h0;
        shift_reg_21_payload_cha_q <= 12'h0;
        shift_reg_22_valid <= 1'b0;
        shift_reg_22_payload_cha_i <= 12'h0;
        shift_reg_22_payload_cha_q <= 12'h0;
        shift_reg_23_valid <= 1'b0;
        shift_reg_23_payload_cha_i <= 12'h0;
        shift_reg_23_payload_cha_q <= 12'h0;
        shift_reg_24_valid <= 1'b0;
        shift_reg_24_payload_cha_i <= 12'h0;
        shift_reg_24_payload_cha_q <= 12'h0;
        shift_reg_25_valid <= 1'b0;
        shift_reg_25_payload_cha_i <= 12'h0;
        shift_reg_25_payload_cha_q <= 12'h0;
        shift_reg_26_valid <= 1'b0;
        shift_reg_26_payload_cha_i <= 12'h0;
        shift_reg_26_payload_cha_q <= 12'h0;
        shift_reg_27_valid <= 1'b0;
        shift_reg_27_payload_cha_i <= 12'h0;
        shift_reg_27_payload_cha_q <= 12'h0;
        shift_reg_28_valid <= 1'b0;
        shift_reg_28_payload_cha_i <= 12'h0;
        shift_reg_28_payload_cha_q <= 12'h0;
        shift_reg_29_valid <= 1'b0;
        shift_reg_29_payload_cha_i <= 12'h0;
        shift_reg_29_payload_cha_q <= 12'h0;
        shift_reg_30_valid <= 1'b0;
        shift_reg_30_payload_cha_i <= 12'h0;
        shift_reg_30_payload_cha_q <= 12'h0;
        shift_reg_31_valid <= 1'b0;
        shift_reg_31_payload_cha_i <= 12'h0;
        shift_reg_31_payload_cha_q <= 12'h0;
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
        end
      end
    end
  end


endmodule

//ShiftRegister replaced by ShiftRegister

module ShiftRegister (
  input      [23:0]   input_1,
  output     [23:0]   output_1,
  input               enable,
  input               clc,
  input               clk,
  input               reset
);

  reg        [23:0]   shift_reg_0;
  reg        [23:0]   shift_reg_1;
  reg        [23:0]   shift_reg_2;
  reg        [23:0]   shift_reg_3;
  reg        [23:0]   shift_reg_4;
  reg        [23:0]   shift_reg_5;
  reg        [23:0]   shift_reg_6;
  reg        [23:0]   shift_reg_7;
  reg        [23:0]   shift_reg_8;
  reg        [23:0]   shift_reg_9;
  reg        [23:0]   shift_reg_10;
  reg        [23:0]   shift_reg_11;
  reg        [23:0]   shift_reg_12;
  reg        [23:0]   shift_reg_13;
  reg        [23:0]   shift_reg_14;
  reg        [23:0]   shift_reg_15;
  reg        [23:0]   shift_reg_16;
  reg        [23:0]   shift_reg_17;
  reg        [23:0]   shift_reg_18;
  reg        [23:0]   shift_reg_19;
  reg        [23:0]   shift_reg_20;
  reg        [23:0]   shift_reg_21;
  reg        [23:0]   shift_reg_22;
  reg        [23:0]   shift_reg_23;
  reg        [23:0]   shift_reg_24;
  reg        [23:0]   shift_reg_25;
  reg        [23:0]   shift_reg_26;
  reg        [23:0]   shift_reg_27;
  reg        [23:0]   shift_reg_28;
  reg        [23:0]   shift_reg_29;
  reg        [23:0]   shift_reg_30;
  reg        [23:0]   shift_reg_31;

  assign output_1 = shift_reg_31;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 24'h0;
      shift_reg_1 <= 24'h0;
      shift_reg_2 <= 24'h0;
      shift_reg_3 <= 24'h0;
      shift_reg_4 <= 24'h0;
      shift_reg_5 <= 24'h0;
      shift_reg_6 <= 24'h0;
      shift_reg_7 <= 24'h0;
      shift_reg_8 <= 24'h0;
      shift_reg_9 <= 24'h0;
      shift_reg_10 <= 24'h0;
      shift_reg_11 <= 24'h0;
      shift_reg_12 <= 24'h0;
      shift_reg_13 <= 24'h0;
      shift_reg_14 <= 24'h0;
      shift_reg_15 <= 24'h0;
      shift_reg_16 <= 24'h0;
      shift_reg_17 <= 24'h0;
      shift_reg_18 <= 24'h0;
      shift_reg_19 <= 24'h0;
      shift_reg_20 <= 24'h0;
      shift_reg_21 <= 24'h0;
      shift_reg_22 <= 24'h0;
      shift_reg_23 <= 24'h0;
      shift_reg_24 <= 24'h0;
      shift_reg_25 <= 24'h0;
      shift_reg_26 <= 24'h0;
      shift_reg_27 <= 24'h0;
      shift_reg_28 <= 24'h0;
      shift_reg_29 <= 24'h0;
      shift_reg_30 <= 24'h0;
      shift_reg_31 <= 24'h0;
    end else begin
      if(clc) begin
        shift_reg_0 <= 24'h0;
        shift_reg_1 <= 24'h0;
        shift_reg_2 <= 24'h0;
        shift_reg_3 <= 24'h0;
        shift_reg_4 <= 24'h0;
        shift_reg_5 <= 24'h0;
        shift_reg_6 <= 24'h0;
        shift_reg_7 <= 24'h0;
        shift_reg_8 <= 24'h0;
        shift_reg_9 <= 24'h0;
        shift_reg_10 <= 24'h0;
        shift_reg_11 <= 24'h0;
        shift_reg_12 <= 24'h0;
        shift_reg_13 <= 24'h0;
        shift_reg_14 <= 24'h0;
        shift_reg_15 <= 24'h0;
        shift_reg_16 <= 24'h0;
        shift_reg_17 <= 24'h0;
        shift_reg_18 <= 24'h0;
        shift_reg_19 <= 24'h0;
        shift_reg_20 <= 24'h0;
        shift_reg_21 <= 24'h0;
        shift_reg_22 <= 24'h0;
        shift_reg_23 <= 24'h0;
        shift_reg_24 <= 24'h0;
        shift_reg_25 <= 24'h0;
        shift_reg_26 <= 24'h0;
        shift_reg_27 <= 24'h0;
        shift_reg_28 <= 24'h0;
        shift_reg_29 <= 24'h0;
        shift_reg_30 <= 24'h0;
        shift_reg_31 <= 24'h0;
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
        end
      end
    end
  end


endmodule
