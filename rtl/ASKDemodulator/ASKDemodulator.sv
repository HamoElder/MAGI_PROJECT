// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : ASKDemodulator
// Git hash  : 9fb11367d50fe6259b12eed46bdcbc0cd78ce9fb

`timescale 1ns/1ps

module ASKDemodulator (
  input               raw_data_0_valid,
  output              raw_data_0_ready,
  input      [31:0]   raw_data_0_payload,
  input               raw_data_1_valid,
  output              raw_data_1_ready,
  input      [31:0]   raw_data_1_payload,
  input               raw_data_2_valid,
  output              raw_data_2_ready,
  input      [31:0]   raw_data_2_payload,
  input               raw_data_3_valid,
  output              raw_data_3_ready,
  input      [31:0]   raw_data_3_payload,
  input               raw_data_4_valid,
  output              raw_data_4_ready,
  input      [31:0]   raw_data_4_payload,
  input               raw_data_5_valid,
  output              raw_data_5_ready,
  input      [31:0]   raw_data_5_payload,
  input               raw_data_6_valid,
  output              raw_data_6_ready,
  input      [31:0]   raw_data_6_payload,
  input               raw_data_7_valid,
  output              raw_data_7_ready,
  input      [31:0]   raw_data_7_payload,
  output              result_data_0_valid,
  input               result_data_0_ready,
  output              result_data_0_payload,
  output              result_data_1_valid,
  input               result_data_1_ready,
  output              result_data_1_payload,
  output              result_data_2_valid,
  input               result_data_2_ready,
  output              result_data_2_payload,
  output              result_data_3_valid,
  input               result_data_3_ready,
  output              result_data_3_payload,
  output              result_data_4_valid,
  input               result_data_4_ready,
  output              result_data_4_payload,
  output              result_data_5_valid,
  input               result_data_5_ready,
  output              result_data_5_payload,
  output              result_data_6_valid,
  input               result_data_6_ready,
  output              result_data_6_payload,
  output              result_data_7_valid,
  input               result_data_7_ready,
  output              result_data_7_payload,
  input      [23:0]   threshold,
  input               clk,
  input               resetn
);

  wire                fir_filter_filtered_data_0_valid;
  wire       [23:0]   fir_filter_filtered_data_0_payload;
  wire                fir_filter_filtered_data_1_valid;
  wire       [23:0]   fir_filter_filtered_data_1_payload;
  wire                fir_filter_filtered_data_2_valid;
  wire       [23:0]   fir_filter_filtered_data_2_payload;
  wire                fir_filter_filtered_data_3_valid;
  wire       [23:0]   fir_filter_filtered_data_3_payload;
  wire                fir_filter_filtered_data_4_valid;
  wire       [23:0]   fir_filter_filtered_data_4_payload;
  wire                fir_filter_filtered_data_5_valid;
  wire       [23:0]   fir_filter_filtered_data_5_payload;
  wire                fir_filter_filtered_data_6_valid;
  wire       [23:0]   fir_filter_filtered_data_6_payload;
  wire                fir_filter_filtered_data_7_valid;
  wire       [23:0]   fir_filter_filtered_data_7_payload;
  wire       [32:0]   _zz__zz_when_SInt_l337_2;
  wire       [32:0]   _zz__zz_when_SInt_l337_2_1;
  wire       [15:0]   _zz_when_SInt_l191;
  wire       [16:0]   _zz__zz_when_SInt_l130_3;
  wire       [16:0]   _zz__zz_when_SInt_l130_3_1;
  wire       [32:0]   _zz__zz_when_SInt_l130;
  wire       [32:0]   _zz__zz_when_SInt_l130_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_2;
  wire       [1:0]    _zz_when_SInt_l131;
  wire       [0:0]    _zz_when_SInt_l137;
  wire       [32:0]   _zz__zz_when_SInt_l337_5;
  wire       [32:0]   _zz__zz_when_SInt_l337_5_1;
  wire       [15:0]   _zz_when_SInt_l191_1;
  wire       [16:0]   _zz__zz_when_SInt_l130_7;
  wire       [16:0]   _zz__zz_when_SInt_l130_7_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_4;
  wire       [32:0]   _zz__zz_when_SInt_l130_4_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_4_2;
  wire       [1:0]    _zz_when_SInt_l131_1;
  wire       [0:0]    _zz_when_SInt_l137_1;
  wire       [32:0]   _zz__zz_when_SInt_l337_8;
  wire       [32:0]   _zz__zz_when_SInt_l337_8_1;
  wire       [15:0]   _zz_when_SInt_l191_2;
  wire       [16:0]   _zz__zz_when_SInt_l130_11;
  wire       [16:0]   _zz__zz_when_SInt_l130_11_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_8;
  wire       [32:0]   _zz__zz_when_SInt_l130_8_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_8_2;
  wire       [1:0]    _zz_when_SInt_l131_2;
  wire       [0:0]    _zz_when_SInt_l137_2;
  wire       [32:0]   _zz__zz_when_SInt_l337_11;
  wire       [32:0]   _zz__zz_when_SInt_l337_11_1;
  wire       [15:0]   _zz_when_SInt_l191_3;
  wire       [16:0]   _zz__zz_when_SInt_l130_15;
  wire       [16:0]   _zz__zz_when_SInt_l130_15_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_12;
  wire       [32:0]   _zz__zz_when_SInt_l130_12_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_12_2;
  wire       [1:0]    _zz_when_SInt_l131_3;
  wire       [0:0]    _zz_when_SInt_l137_3;
  wire       [32:0]   _zz__zz_when_SInt_l337_14;
  wire       [32:0]   _zz__zz_when_SInt_l337_14_1;
  wire       [15:0]   _zz_when_SInt_l191_4;
  wire       [16:0]   _zz__zz_when_SInt_l130_19;
  wire       [16:0]   _zz__zz_when_SInt_l130_19_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_16;
  wire       [32:0]   _zz__zz_when_SInt_l130_16_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_16_2;
  wire       [1:0]    _zz_when_SInt_l131_4;
  wire       [0:0]    _zz_when_SInt_l137_4;
  wire       [32:0]   _zz__zz_when_SInt_l337_17;
  wire       [32:0]   _zz__zz_when_SInt_l337_17_1;
  wire       [15:0]   _zz_when_SInt_l191_5;
  wire       [16:0]   _zz__zz_when_SInt_l130_23;
  wire       [16:0]   _zz__zz_when_SInt_l130_23_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_20;
  wire       [32:0]   _zz__zz_when_SInt_l130_20_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_20_2;
  wire       [1:0]    _zz_when_SInt_l131_5;
  wire       [0:0]    _zz_when_SInt_l137_5;
  wire       [32:0]   _zz__zz_when_SInt_l337_20;
  wire       [32:0]   _zz__zz_when_SInt_l337_20_1;
  wire       [15:0]   _zz_when_SInt_l191_6;
  wire       [16:0]   _zz__zz_when_SInt_l130_27;
  wire       [16:0]   _zz__zz_when_SInt_l130_27_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_24;
  wire       [32:0]   _zz__zz_when_SInt_l130_24_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_24_2;
  wire       [1:0]    _zz_when_SInt_l131_6;
  wire       [0:0]    _zz_when_SInt_l137_6;
  wire       [32:0]   _zz__zz_when_SInt_l337_23;
  wire       [32:0]   _zz__zz_when_SInt_l337_23_1;
  wire       [15:0]   _zz_when_SInt_l191_7;
  wire       [16:0]   _zz__zz_when_SInt_l130_31;
  wire       [16:0]   _zz__zz_when_SInt_l130_31_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_28;
  wire       [32:0]   _zz__zz_when_SInt_l130_28_1;
  wire       [32:0]   _zz__zz_when_SInt_l130_28_2;
  wire       [1:0]    _zz_when_SInt_l131_7;
  wire       [0:0]    _zz_when_SInt_l137_7;
  reg        [16:0]   _zz_when_SInt_l130;
  wire       [31:0]   _zz_when_SInt_l130_1;
  wire       [31:0]   _zz_when_SInt_l337;
  wire       [31:0]   _zz_when_SInt_l337_1;
  wire       [32:0]   _zz_when_SInt_l337_2;
  wire       [31:0]   _zz_when_SInt_l130_2;
  wire                when_SInt_l337;
  reg        [16:0]   _zz_when_SInt_l130_3;
  wire                when_SInt_l191;
  reg        [15:0]   _zz_raw_data_0_payload;
  wire                when_SInt_l130;
  wire                when_SInt_l131;
  wire                when_SInt_l137;
  reg        [16:0]   _zz_when_SInt_l130_4;
  wire       [31:0]   _zz_when_SInt_l130_5;
  wire       [31:0]   _zz_when_SInt_l337_3;
  wire       [31:0]   _zz_when_SInt_l337_4;
  wire       [32:0]   _zz_when_SInt_l337_5;
  wire       [31:0]   _zz_when_SInt_l130_6;
  wire                when_SInt_l337_1;
  reg        [16:0]   _zz_when_SInt_l130_7;
  wire                when_SInt_l191_1;
  reg        [15:0]   _zz_raw_data_1_payload;
  wire                when_SInt_l130_1;
  wire                when_SInt_l131_1;
  wire                when_SInt_l137_1;
  reg        [16:0]   _zz_when_SInt_l130_8;
  wire       [31:0]   _zz_when_SInt_l130_9;
  wire       [31:0]   _zz_when_SInt_l337_6;
  wire       [31:0]   _zz_when_SInt_l337_7;
  wire       [32:0]   _zz_when_SInt_l337_8;
  wire       [31:0]   _zz_when_SInt_l130_10;
  wire                when_SInt_l337_2;
  reg        [16:0]   _zz_when_SInt_l130_11;
  wire                when_SInt_l191_2;
  reg        [15:0]   _zz_raw_data_2_payload;
  wire                when_SInt_l130_2;
  wire                when_SInt_l131_2;
  wire                when_SInt_l137_2;
  reg        [16:0]   _zz_when_SInt_l130_12;
  wire       [31:0]   _zz_when_SInt_l130_13;
  wire       [31:0]   _zz_when_SInt_l337_9;
  wire       [31:0]   _zz_when_SInt_l337_10;
  wire       [32:0]   _zz_when_SInt_l337_11;
  wire       [31:0]   _zz_when_SInt_l130_14;
  wire                when_SInt_l337_3;
  reg        [16:0]   _zz_when_SInt_l130_15;
  wire                when_SInt_l191_3;
  reg        [15:0]   _zz_raw_data_3_payload;
  wire                when_SInt_l130_3;
  wire                when_SInt_l131_3;
  wire                when_SInt_l137_3;
  reg        [16:0]   _zz_when_SInt_l130_16;
  wire       [31:0]   _zz_when_SInt_l130_17;
  wire       [31:0]   _zz_when_SInt_l337_12;
  wire       [31:0]   _zz_when_SInt_l337_13;
  wire       [32:0]   _zz_when_SInt_l337_14;
  wire       [31:0]   _zz_when_SInt_l130_18;
  wire                when_SInt_l337_4;
  reg        [16:0]   _zz_when_SInt_l130_19;
  wire                when_SInt_l191_4;
  reg        [15:0]   _zz_raw_data_4_payload;
  wire                when_SInt_l130_4;
  wire                when_SInt_l131_4;
  wire                when_SInt_l137_4;
  reg        [16:0]   _zz_when_SInt_l130_20;
  wire       [31:0]   _zz_when_SInt_l130_21;
  wire       [31:0]   _zz_when_SInt_l337_15;
  wire       [31:0]   _zz_when_SInt_l337_16;
  wire       [32:0]   _zz_when_SInt_l337_17;
  wire       [31:0]   _zz_when_SInt_l130_22;
  wire                when_SInt_l337_5;
  reg        [16:0]   _zz_when_SInt_l130_23;
  wire                when_SInt_l191_5;
  reg        [15:0]   _zz_raw_data_5_payload;
  wire                when_SInt_l130_5;
  wire                when_SInt_l131_5;
  wire                when_SInt_l137_5;
  reg        [16:0]   _zz_when_SInt_l130_24;
  wire       [31:0]   _zz_when_SInt_l130_25;
  wire       [31:0]   _zz_when_SInt_l337_18;
  wire       [31:0]   _zz_when_SInt_l337_19;
  wire       [32:0]   _zz_when_SInt_l337_20;
  wire       [31:0]   _zz_when_SInt_l130_26;
  wire                when_SInt_l337_6;
  reg        [16:0]   _zz_when_SInt_l130_27;
  wire                when_SInt_l191_6;
  reg        [15:0]   _zz_raw_data_6_payload;
  wire                when_SInt_l130_6;
  wire                when_SInt_l131_6;
  wire                when_SInt_l137_6;
  reg        [16:0]   _zz_when_SInt_l130_28;
  wire       [31:0]   _zz_when_SInt_l130_29;
  wire       [31:0]   _zz_when_SInt_l337_21;
  wire       [31:0]   _zz_when_SInt_l337_22;
  wire       [32:0]   _zz_when_SInt_l337_23;
  wire       [31:0]   _zz_when_SInt_l130_30;
  wire                when_SInt_l337_7;
  reg        [16:0]   _zz_when_SInt_l130_31;
  wire                when_SInt_l191_7;
  reg        [15:0]   _zz_raw_data_7_payload;
  wire                when_SInt_l130_7;
  wire                when_SInt_l131_7;
  wire                when_SInt_l137_7;

  assign _zz__zz_when_SInt_l337_2 = {_zz_when_SInt_l337_1[31],_zz_when_SInt_l337_1};
  assign _zz__zz_when_SInt_l337_2_1 = {_zz_when_SInt_l337[31],_zz_when_SInt_l337};
  assign _zz_when_SInt_l191 = _zz_when_SInt_l337_2[15 : 0];
  assign _zz__zz_when_SInt_l130_3 = _zz_when_SInt_l337_2[32 : 16];
  assign _zz__zz_when_SInt_l130_3_1 = 17'h00001;
  assign _zz__zz_when_SInt_l130 = ($signed(_zz__zz_when_SInt_l130_1) + $signed(_zz__zz_when_SInt_l130_2));
  assign _zz__zz_when_SInt_l130_1 = {_zz_when_SInt_l130_2[31],_zz_when_SInt_l130_2};
  assign _zz__zz_when_SInt_l130_2 = {_zz_when_SInt_l130_1[31],_zz_when_SInt_l130_1};
  assign _zz_when_SInt_l131 = _zz_when_SInt_l130[16 : 15];
  assign _zz_when_SInt_l137 = _zz_when_SInt_l130[15 : 15];
  assign _zz__zz_when_SInt_l337_5 = {_zz_when_SInt_l337_4[31],_zz_when_SInt_l337_4};
  assign _zz__zz_when_SInt_l337_5_1 = {_zz_when_SInt_l337_3[31],_zz_when_SInt_l337_3};
  assign _zz_when_SInt_l191_1 = _zz_when_SInt_l337_5[15 : 0];
  assign _zz__zz_when_SInt_l130_7 = _zz_when_SInt_l337_5[32 : 16];
  assign _zz__zz_when_SInt_l130_7_1 = 17'h00001;
  assign _zz__zz_when_SInt_l130_4 = ($signed(_zz__zz_when_SInt_l130_4_1) + $signed(_zz__zz_when_SInt_l130_4_2));
  assign _zz__zz_when_SInt_l130_4_1 = {_zz_when_SInt_l130_6[31],_zz_when_SInt_l130_6};
  assign _zz__zz_when_SInt_l130_4_2 = {_zz_when_SInt_l130_5[31],_zz_when_SInt_l130_5};
  assign _zz_when_SInt_l131_1 = _zz_when_SInt_l130_4[16 : 15];
  assign _zz_when_SInt_l137_1 = _zz_when_SInt_l130_4[15 : 15];
  assign _zz__zz_when_SInt_l337_8 = {_zz_when_SInt_l337_7[31],_zz_when_SInt_l337_7};
  assign _zz__zz_when_SInt_l337_8_1 = {_zz_when_SInt_l337_6[31],_zz_when_SInt_l337_6};
  assign _zz_when_SInt_l191_2 = _zz_when_SInt_l337_8[15 : 0];
  assign _zz__zz_when_SInt_l130_11 = _zz_when_SInt_l337_8[32 : 16];
  assign _zz__zz_when_SInt_l130_11_1 = 17'h00001;
  assign _zz__zz_when_SInt_l130_8 = ($signed(_zz__zz_when_SInt_l130_8_1) + $signed(_zz__zz_when_SInt_l130_8_2));
  assign _zz__zz_when_SInt_l130_8_1 = {_zz_when_SInt_l130_10[31],_zz_when_SInt_l130_10};
  assign _zz__zz_when_SInt_l130_8_2 = {_zz_when_SInt_l130_9[31],_zz_when_SInt_l130_9};
  assign _zz_when_SInt_l131_2 = _zz_when_SInt_l130_8[16 : 15];
  assign _zz_when_SInt_l137_2 = _zz_when_SInt_l130_8[15 : 15];
  assign _zz__zz_when_SInt_l337_11 = {_zz_when_SInt_l337_10[31],_zz_when_SInt_l337_10};
  assign _zz__zz_when_SInt_l337_11_1 = {_zz_when_SInt_l337_9[31],_zz_when_SInt_l337_9};
  assign _zz_when_SInt_l191_3 = _zz_when_SInt_l337_11[15 : 0];
  assign _zz__zz_when_SInt_l130_15 = _zz_when_SInt_l337_11[32 : 16];
  assign _zz__zz_when_SInt_l130_15_1 = 17'h00001;
  assign _zz__zz_when_SInt_l130_12 = ($signed(_zz__zz_when_SInt_l130_12_1) + $signed(_zz__zz_when_SInt_l130_12_2));
  assign _zz__zz_when_SInt_l130_12_1 = {_zz_when_SInt_l130_14[31],_zz_when_SInt_l130_14};
  assign _zz__zz_when_SInt_l130_12_2 = {_zz_when_SInt_l130_13[31],_zz_when_SInt_l130_13};
  assign _zz_when_SInt_l131_3 = _zz_when_SInt_l130_12[16 : 15];
  assign _zz_when_SInt_l137_3 = _zz_when_SInt_l130_12[15 : 15];
  assign _zz__zz_when_SInt_l337_14 = {_zz_when_SInt_l337_13[31],_zz_when_SInt_l337_13};
  assign _zz__zz_when_SInt_l337_14_1 = {_zz_when_SInt_l337_12[31],_zz_when_SInt_l337_12};
  assign _zz_when_SInt_l191_4 = _zz_when_SInt_l337_14[15 : 0];
  assign _zz__zz_when_SInt_l130_19 = _zz_when_SInt_l337_14[32 : 16];
  assign _zz__zz_when_SInt_l130_19_1 = 17'h00001;
  assign _zz__zz_when_SInt_l130_16 = ($signed(_zz__zz_when_SInt_l130_16_1) + $signed(_zz__zz_when_SInt_l130_16_2));
  assign _zz__zz_when_SInt_l130_16_1 = {_zz_when_SInt_l130_18[31],_zz_when_SInt_l130_18};
  assign _zz__zz_when_SInt_l130_16_2 = {_zz_when_SInt_l130_17[31],_zz_when_SInt_l130_17};
  assign _zz_when_SInt_l131_4 = _zz_when_SInt_l130_16[16 : 15];
  assign _zz_when_SInt_l137_4 = _zz_when_SInt_l130_16[15 : 15];
  assign _zz__zz_when_SInt_l337_17 = {_zz_when_SInt_l337_16[31],_zz_when_SInt_l337_16};
  assign _zz__zz_when_SInt_l337_17_1 = {_zz_when_SInt_l337_15[31],_zz_when_SInt_l337_15};
  assign _zz_when_SInt_l191_5 = _zz_when_SInt_l337_17[15 : 0];
  assign _zz__zz_when_SInt_l130_23 = _zz_when_SInt_l337_17[32 : 16];
  assign _zz__zz_when_SInt_l130_23_1 = 17'h00001;
  assign _zz__zz_when_SInt_l130_20 = ($signed(_zz__zz_when_SInt_l130_20_1) + $signed(_zz__zz_when_SInt_l130_20_2));
  assign _zz__zz_when_SInt_l130_20_1 = {_zz_when_SInt_l130_22[31],_zz_when_SInt_l130_22};
  assign _zz__zz_when_SInt_l130_20_2 = {_zz_when_SInt_l130_21[31],_zz_when_SInt_l130_21};
  assign _zz_when_SInt_l131_5 = _zz_when_SInt_l130_20[16 : 15];
  assign _zz_when_SInt_l137_5 = _zz_when_SInt_l130_20[15 : 15];
  assign _zz__zz_when_SInt_l337_20 = {_zz_when_SInt_l337_19[31],_zz_when_SInt_l337_19};
  assign _zz__zz_when_SInt_l337_20_1 = {_zz_when_SInt_l337_18[31],_zz_when_SInt_l337_18};
  assign _zz_when_SInt_l191_6 = _zz_when_SInt_l337_20[15 : 0];
  assign _zz__zz_when_SInt_l130_27 = _zz_when_SInt_l337_20[32 : 16];
  assign _zz__zz_when_SInt_l130_27_1 = 17'h00001;
  assign _zz__zz_when_SInt_l130_24 = ($signed(_zz__zz_when_SInt_l130_24_1) + $signed(_zz__zz_when_SInt_l130_24_2));
  assign _zz__zz_when_SInt_l130_24_1 = {_zz_when_SInt_l130_26[31],_zz_when_SInt_l130_26};
  assign _zz__zz_when_SInt_l130_24_2 = {_zz_when_SInt_l130_25[31],_zz_when_SInt_l130_25};
  assign _zz_when_SInt_l131_6 = _zz_when_SInt_l130_24[16 : 15];
  assign _zz_when_SInt_l137_6 = _zz_when_SInt_l130_24[15 : 15];
  assign _zz__zz_when_SInt_l337_23 = {_zz_when_SInt_l337_22[31],_zz_when_SInt_l337_22};
  assign _zz__zz_when_SInt_l337_23_1 = {_zz_when_SInt_l337_21[31],_zz_when_SInt_l337_21};
  assign _zz_when_SInt_l191_7 = _zz_when_SInt_l337_23[15 : 0];
  assign _zz__zz_when_SInt_l130_31 = _zz_when_SInt_l337_23[32 : 16];
  assign _zz__zz_when_SInt_l130_31_1 = 17'h00001;
  assign _zz__zz_when_SInt_l130_28 = ($signed(_zz__zz_when_SInt_l130_28_1) + $signed(_zz__zz_when_SInt_l130_28_2));
  assign _zz__zz_when_SInt_l130_28_1 = {_zz_when_SInt_l130_30[31],_zz_when_SInt_l130_30};
  assign _zz__zz_when_SInt_l130_28_2 = {_zz_when_SInt_l130_29[31],_zz_when_SInt_l130_29};
  assign _zz_when_SInt_l131_7 = _zz_when_SInt_l130_28[16 : 15];
  assign _zz_when_SInt_l137_7 = _zz_when_SInt_l130_28[15 : 15];
  SystolicFIR fir_filter (
    .raw_data_0_valid        (raw_data_0_valid                        ), //i
    .raw_data_0_payload      (_zz_raw_data_0_payload[15:0]            ), //i
    .raw_data_1_valid        (raw_data_1_valid                        ), //i
    .raw_data_1_payload      (_zz_raw_data_1_payload[15:0]            ), //i
    .raw_data_2_valid        (raw_data_2_valid                        ), //i
    .raw_data_2_payload      (_zz_raw_data_2_payload[15:0]            ), //i
    .raw_data_3_valid        (raw_data_3_valid                        ), //i
    .raw_data_3_payload      (_zz_raw_data_3_payload[15:0]            ), //i
    .raw_data_4_valid        (raw_data_4_valid                        ), //i
    .raw_data_4_payload      (_zz_raw_data_4_payload[15:0]            ), //i
    .raw_data_5_valid        (raw_data_5_valid                        ), //i
    .raw_data_5_payload      (_zz_raw_data_5_payload[15:0]            ), //i
    .raw_data_6_valid        (raw_data_6_valid                        ), //i
    .raw_data_6_payload      (_zz_raw_data_6_payload[15:0]            ), //i
    .raw_data_7_valid        (raw_data_7_valid                        ), //i
    .raw_data_7_payload      (_zz_raw_data_7_payload[15:0]            ), //i
    .filtered_data_0_valid   (fir_filter_filtered_data_0_valid        ), //o
    .filtered_data_0_payload (fir_filter_filtered_data_0_payload[23:0]), //o
    .filtered_data_1_valid   (fir_filter_filtered_data_1_valid        ), //o
    .filtered_data_1_payload (fir_filter_filtered_data_1_payload[23:0]), //o
    .filtered_data_2_valid   (fir_filter_filtered_data_2_valid        ), //o
    .filtered_data_2_payload (fir_filter_filtered_data_2_payload[23:0]), //o
    .filtered_data_3_valid   (fir_filter_filtered_data_3_valid        ), //o
    .filtered_data_3_payload (fir_filter_filtered_data_3_payload[23:0]), //o
    .filtered_data_4_valid   (fir_filter_filtered_data_4_valid        ), //o
    .filtered_data_4_payload (fir_filter_filtered_data_4_payload[23:0]), //o
    .filtered_data_5_valid   (fir_filter_filtered_data_5_valid        ), //o
    .filtered_data_5_payload (fir_filter_filtered_data_5_payload[23:0]), //o
    .filtered_data_6_valid   (fir_filter_filtered_data_6_valid        ), //o
    .filtered_data_6_payload (fir_filter_filtered_data_6_payload[23:0]), //o
    .filtered_data_7_valid   (fir_filter_filtered_data_7_valid        ), //o
    .filtered_data_7_payload (fir_filter_filtered_data_7_payload[23:0]), //o
    .clk                     (clk                                     ), //i
    .resetn                  (resetn                                  )  //i
  );
  assign raw_data_0_ready = 1'b1;
  assign _zz_when_SInt_l130_1 = {{16'h0,1'b1},15'h0};
  assign _zz_when_SInt_l337 = {17'h1ffff,15'h0};
  assign _zz_when_SInt_l337_1 = raw_data_0_payload[31 : 0];
  assign _zz_when_SInt_l337_2 = ($signed(_zz__zz_when_SInt_l337_2) + $signed(_zz__zz_when_SInt_l337_2_1));
  assign _zz_when_SInt_l130_2 = raw_data_0_payload[31 : 0];
  assign when_SInt_l337 = _zz_when_SInt_l337_2[32];
  assign when_SInt_l191 = (|_zz_when_SInt_l191);
  always @(*) begin
    if(when_SInt_l191) begin
      _zz_when_SInt_l130_3 = ($signed(_zz__zz_when_SInt_l130_3) + $signed(_zz__zz_when_SInt_l130_3_1));
    end else begin
      _zz_when_SInt_l130_3 = _zz_when_SInt_l337_2[32 : 16];
    end
  end

  always @(*) begin
    if(when_SInt_l337) begin
      _zz_when_SInt_l130 = _zz_when_SInt_l130_3;
    end else begin
      _zz_when_SInt_l130 = (_zz__zz_when_SInt_l130 >>> 16);
    end
  end

  assign when_SInt_l130 = _zz_when_SInt_l130[16];
  assign when_SInt_l131 = (! (&_zz_when_SInt_l131));
  always @(*) begin
    if(when_SInt_l130) begin
      if(when_SInt_l131) begin
        _zz_raw_data_0_payload = 16'h8000;
      end else begin
        _zz_raw_data_0_payload = _zz_when_SInt_l130[15 : 0];
      end
    end else begin
      if(when_SInt_l137) begin
        _zz_raw_data_0_payload = 16'h7fff;
      end else begin
        _zz_raw_data_0_payload = _zz_when_SInt_l130[15 : 0];
      end
    end
  end

  assign when_SInt_l137 = (|_zz_when_SInt_l137);
  assign result_data_0_valid = fir_filter_filtered_data_0_valid;
  assign result_data_0_payload = ($signed(threshold) < $signed(fir_filter_filtered_data_0_payload));
  assign raw_data_1_ready = 1'b1;
  assign _zz_when_SInt_l130_5 = {{16'h0,1'b1},15'h0};
  assign _zz_when_SInt_l337_3 = {17'h1ffff,15'h0};
  assign _zz_when_SInt_l337_4 = raw_data_1_payload[31 : 0];
  assign _zz_when_SInt_l337_5 = ($signed(_zz__zz_when_SInt_l337_5) + $signed(_zz__zz_when_SInt_l337_5_1));
  assign _zz_when_SInt_l130_6 = raw_data_1_payload[31 : 0];
  assign when_SInt_l337_1 = _zz_when_SInt_l337_5[32];
  assign when_SInt_l191_1 = (|_zz_when_SInt_l191_1);
  always @(*) begin
    if(when_SInt_l191_1) begin
      _zz_when_SInt_l130_7 = ($signed(_zz__zz_when_SInt_l130_7) + $signed(_zz__zz_when_SInt_l130_7_1));
    end else begin
      _zz_when_SInt_l130_7 = _zz_when_SInt_l337_5[32 : 16];
    end
  end

  always @(*) begin
    if(when_SInt_l337_1) begin
      _zz_when_SInt_l130_4 = _zz_when_SInt_l130_7;
    end else begin
      _zz_when_SInt_l130_4 = (_zz__zz_when_SInt_l130_4 >>> 16);
    end
  end

  assign when_SInt_l130_1 = _zz_when_SInt_l130_4[16];
  assign when_SInt_l131_1 = (! (&_zz_when_SInt_l131_1));
  always @(*) begin
    if(when_SInt_l130_1) begin
      if(when_SInt_l131_1) begin
        _zz_raw_data_1_payload = 16'h8000;
      end else begin
        _zz_raw_data_1_payload = _zz_when_SInt_l130_4[15 : 0];
      end
    end else begin
      if(when_SInt_l137_1) begin
        _zz_raw_data_1_payload = 16'h7fff;
      end else begin
        _zz_raw_data_1_payload = _zz_when_SInt_l130_4[15 : 0];
      end
    end
  end

  assign when_SInt_l137_1 = (|_zz_when_SInt_l137_1);
  assign result_data_1_valid = fir_filter_filtered_data_1_valid;
  assign result_data_1_payload = ($signed(threshold) < $signed(fir_filter_filtered_data_1_payload));
  assign raw_data_2_ready = 1'b1;
  assign _zz_when_SInt_l130_9 = {{16'h0,1'b1},15'h0};
  assign _zz_when_SInt_l337_6 = {17'h1ffff,15'h0};
  assign _zz_when_SInt_l337_7 = raw_data_2_payload[31 : 0];
  assign _zz_when_SInt_l337_8 = ($signed(_zz__zz_when_SInt_l337_8) + $signed(_zz__zz_when_SInt_l337_8_1));
  assign _zz_when_SInt_l130_10 = raw_data_2_payload[31 : 0];
  assign when_SInt_l337_2 = _zz_when_SInt_l337_8[32];
  assign when_SInt_l191_2 = (|_zz_when_SInt_l191_2);
  always @(*) begin
    if(when_SInt_l191_2) begin
      _zz_when_SInt_l130_11 = ($signed(_zz__zz_when_SInt_l130_11) + $signed(_zz__zz_when_SInt_l130_11_1));
    end else begin
      _zz_when_SInt_l130_11 = _zz_when_SInt_l337_8[32 : 16];
    end
  end

  always @(*) begin
    if(when_SInt_l337_2) begin
      _zz_when_SInt_l130_8 = _zz_when_SInt_l130_11;
    end else begin
      _zz_when_SInt_l130_8 = (_zz__zz_when_SInt_l130_8 >>> 16);
    end
  end

  assign when_SInt_l130_2 = _zz_when_SInt_l130_8[16];
  assign when_SInt_l131_2 = (! (&_zz_when_SInt_l131_2));
  always @(*) begin
    if(when_SInt_l130_2) begin
      if(when_SInt_l131_2) begin
        _zz_raw_data_2_payload = 16'h8000;
      end else begin
        _zz_raw_data_2_payload = _zz_when_SInt_l130_8[15 : 0];
      end
    end else begin
      if(when_SInt_l137_2) begin
        _zz_raw_data_2_payload = 16'h7fff;
      end else begin
        _zz_raw_data_2_payload = _zz_when_SInt_l130_8[15 : 0];
      end
    end
  end

  assign when_SInt_l137_2 = (|_zz_when_SInt_l137_2);
  assign result_data_2_valid = fir_filter_filtered_data_2_valid;
  assign result_data_2_payload = ($signed(threshold) < $signed(fir_filter_filtered_data_2_payload));
  assign raw_data_3_ready = 1'b1;
  assign _zz_when_SInt_l130_13 = {{16'h0,1'b1},15'h0};
  assign _zz_when_SInt_l337_9 = {17'h1ffff,15'h0};
  assign _zz_when_SInt_l337_10 = raw_data_3_payload[31 : 0];
  assign _zz_when_SInt_l337_11 = ($signed(_zz__zz_when_SInt_l337_11) + $signed(_zz__zz_when_SInt_l337_11_1));
  assign _zz_when_SInt_l130_14 = raw_data_3_payload[31 : 0];
  assign when_SInt_l337_3 = _zz_when_SInt_l337_11[32];
  assign when_SInt_l191_3 = (|_zz_when_SInt_l191_3);
  always @(*) begin
    if(when_SInt_l191_3) begin
      _zz_when_SInt_l130_15 = ($signed(_zz__zz_when_SInt_l130_15) + $signed(_zz__zz_when_SInt_l130_15_1));
    end else begin
      _zz_when_SInt_l130_15 = _zz_when_SInt_l337_11[32 : 16];
    end
  end

  always @(*) begin
    if(when_SInt_l337_3) begin
      _zz_when_SInt_l130_12 = _zz_when_SInt_l130_15;
    end else begin
      _zz_when_SInt_l130_12 = (_zz__zz_when_SInt_l130_12 >>> 16);
    end
  end

  assign when_SInt_l130_3 = _zz_when_SInt_l130_12[16];
  assign when_SInt_l131_3 = (! (&_zz_when_SInt_l131_3));
  always @(*) begin
    if(when_SInt_l130_3) begin
      if(when_SInt_l131_3) begin
        _zz_raw_data_3_payload = 16'h8000;
      end else begin
        _zz_raw_data_3_payload = _zz_when_SInt_l130_12[15 : 0];
      end
    end else begin
      if(when_SInt_l137_3) begin
        _zz_raw_data_3_payload = 16'h7fff;
      end else begin
        _zz_raw_data_3_payload = _zz_when_SInt_l130_12[15 : 0];
      end
    end
  end

  assign when_SInt_l137_3 = (|_zz_when_SInt_l137_3);
  assign result_data_3_valid = fir_filter_filtered_data_3_valid;
  assign result_data_3_payload = ($signed(threshold) < $signed(fir_filter_filtered_data_3_payload));
  assign raw_data_4_ready = 1'b1;
  assign _zz_when_SInt_l130_17 = {{16'h0,1'b1},15'h0};
  assign _zz_when_SInt_l337_12 = {17'h1ffff,15'h0};
  assign _zz_when_SInt_l337_13 = raw_data_4_payload[31 : 0];
  assign _zz_when_SInt_l337_14 = ($signed(_zz__zz_when_SInt_l337_14) + $signed(_zz__zz_when_SInt_l337_14_1));
  assign _zz_when_SInt_l130_18 = raw_data_4_payload[31 : 0];
  assign when_SInt_l337_4 = _zz_when_SInt_l337_14[32];
  assign when_SInt_l191_4 = (|_zz_when_SInt_l191_4);
  always @(*) begin
    if(when_SInt_l191_4) begin
      _zz_when_SInt_l130_19 = ($signed(_zz__zz_when_SInt_l130_19) + $signed(_zz__zz_when_SInt_l130_19_1));
    end else begin
      _zz_when_SInt_l130_19 = _zz_when_SInt_l337_14[32 : 16];
    end
  end

  always @(*) begin
    if(when_SInt_l337_4) begin
      _zz_when_SInt_l130_16 = _zz_when_SInt_l130_19;
    end else begin
      _zz_when_SInt_l130_16 = (_zz__zz_when_SInt_l130_16 >>> 16);
    end
  end

  assign when_SInt_l130_4 = _zz_when_SInt_l130_16[16];
  assign when_SInt_l131_4 = (! (&_zz_when_SInt_l131_4));
  always @(*) begin
    if(when_SInt_l130_4) begin
      if(when_SInt_l131_4) begin
        _zz_raw_data_4_payload = 16'h8000;
      end else begin
        _zz_raw_data_4_payload = _zz_when_SInt_l130_16[15 : 0];
      end
    end else begin
      if(when_SInt_l137_4) begin
        _zz_raw_data_4_payload = 16'h7fff;
      end else begin
        _zz_raw_data_4_payload = _zz_when_SInt_l130_16[15 : 0];
      end
    end
  end

  assign when_SInt_l137_4 = (|_zz_when_SInt_l137_4);
  assign result_data_4_valid = fir_filter_filtered_data_4_valid;
  assign result_data_4_payload = ($signed(threshold) < $signed(fir_filter_filtered_data_4_payload));
  assign raw_data_5_ready = 1'b1;
  assign _zz_when_SInt_l130_21 = {{16'h0,1'b1},15'h0};
  assign _zz_when_SInt_l337_15 = {17'h1ffff,15'h0};
  assign _zz_when_SInt_l337_16 = raw_data_5_payload[31 : 0];
  assign _zz_when_SInt_l337_17 = ($signed(_zz__zz_when_SInt_l337_17) + $signed(_zz__zz_when_SInt_l337_17_1));
  assign _zz_when_SInt_l130_22 = raw_data_5_payload[31 : 0];
  assign when_SInt_l337_5 = _zz_when_SInt_l337_17[32];
  assign when_SInt_l191_5 = (|_zz_when_SInt_l191_5);
  always @(*) begin
    if(when_SInt_l191_5) begin
      _zz_when_SInt_l130_23 = ($signed(_zz__zz_when_SInt_l130_23) + $signed(_zz__zz_when_SInt_l130_23_1));
    end else begin
      _zz_when_SInt_l130_23 = _zz_when_SInt_l337_17[32 : 16];
    end
  end

  always @(*) begin
    if(when_SInt_l337_5) begin
      _zz_when_SInt_l130_20 = _zz_when_SInt_l130_23;
    end else begin
      _zz_when_SInt_l130_20 = (_zz__zz_when_SInt_l130_20 >>> 16);
    end
  end

  assign when_SInt_l130_5 = _zz_when_SInt_l130_20[16];
  assign when_SInt_l131_5 = (! (&_zz_when_SInt_l131_5));
  always @(*) begin
    if(when_SInt_l130_5) begin
      if(when_SInt_l131_5) begin
        _zz_raw_data_5_payload = 16'h8000;
      end else begin
        _zz_raw_data_5_payload = _zz_when_SInt_l130_20[15 : 0];
      end
    end else begin
      if(when_SInt_l137_5) begin
        _zz_raw_data_5_payload = 16'h7fff;
      end else begin
        _zz_raw_data_5_payload = _zz_when_SInt_l130_20[15 : 0];
      end
    end
  end

  assign when_SInt_l137_5 = (|_zz_when_SInt_l137_5);
  assign result_data_5_valid = fir_filter_filtered_data_5_valid;
  assign result_data_5_payload = ($signed(threshold) < $signed(fir_filter_filtered_data_5_payload));
  assign raw_data_6_ready = 1'b1;
  assign _zz_when_SInt_l130_25 = {{16'h0,1'b1},15'h0};
  assign _zz_when_SInt_l337_18 = {17'h1ffff,15'h0};
  assign _zz_when_SInt_l337_19 = raw_data_6_payload[31 : 0];
  assign _zz_when_SInt_l337_20 = ($signed(_zz__zz_when_SInt_l337_20) + $signed(_zz__zz_when_SInt_l337_20_1));
  assign _zz_when_SInt_l130_26 = raw_data_6_payload[31 : 0];
  assign when_SInt_l337_6 = _zz_when_SInt_l337_20[32];
  assign when_SInt_l191_6 = (|_zz_when_SInt_l191_6);
  always @(*) begin
    if(when_SInt_l191_6) begin
      _zz_when_SInt_l130_27 = ($signed(_zz__zz_when_SInt_l130_27) + $signed(_zz__zz_when_SInt_l130_27_1));
    end else begin
      _zz_when_SInt_l130_27 = _zz_when_SInt_l337_20[32 : 16];
    end
  end

  always @(*) begin
    if(when_SInt_l337_6) begin
      _zz_when_SInt_l130_24 = _zz_when_SInt_l130_27;
    end else begin
      _zz_when_SInt_l130_24 = (_zz__zz_when_SInt_l130_24 >>> 16);
    end
  end

  assign when_SInt_l130_6 = _zz_when_SInt_l130_24[16];
  assign when_SInt_l131_6 = (! (&_zz_when_SInt_l131_6));
  always @(*) begin
    if(when_SInt_l130_6) begin
      if(when_SInt_l131_6) begin
        _zz_raw_data_6_payload = 16'h8000;
      end else begin
        _zz_raw_data_6_payload = _zz_when_SInt_l130_24[15 : 0];
      end
    end else begin
      if(when_SInt_l137_6) begin
        _zz_raw_data_6_payload = 16'h7fff;
      end else begin
        _zz_raw_data_6_payload = _zz_when_SInt_l130_24[15 : 0];
      end
    end
  end

  assign when_SInt_l137_6 = (|_zz_when_SInt_l137_6);
  assign result_data_6_valid = fir_filter_filtered_data_6_valid;
  assign result_data_6_payload = ($signed(threshold) < $signed(fir_filter_filtered_data_6_payload));
  assign raw_data_7_ready = 1'b1;
  assign _zz_when_SInt_l130_29 = {{16'h0,1'b1},15'h0};
  assign _zz_when_SInt_l337_21 = {17'h1ffff,15'h0};
  assign _zz_when_SInt_l337_22 = raw_data_7_payload[31 : 0];
  assign _zz_when_SInt_l337_23 = ($signed(_zz__zz_when_SInt_l337_23) + $signed(_zz__zz_when_SInt_l337_23_1));
  assign _zz_when_SInt_l130_30 = raw_data_7_payload[31 : 0];
  assign when_SInt_l337_7 = _zz_when_SInt_l337_23[32];
  assign when_SInt_l191_7 = (|_zz_when_SInt_l191_7);
  always @(*) begin
    if(when_SInt_l191_7) begin
      _zz_when_SInt_l130_31 = ($signed(_zz__zz_when_SInt_l130_31) + $signed(_zz__zz_when_SInt_l130_31_1));
    end else begin
      _zz_when_SInt_l130_31 = _zz_when_SInt_l337_23[32 : 16];
    end
  end

  always @(*) begin
    if(when_SInt_l337_7) begin
      _zz_when_SInt_l130_28 = _zz_when_SInt_l130_31;
    end else begin
      _zz_when_SInt_l130_28 = (_zz__zz_when_SInt_l130_28 >>> 16);
    end
  end

  assign when_SInt_l130_7 = _zz_when_SInt_l130_28[16];
  assign when_SInt_l131_7 = (! (&_zz_when_SInt_l131_7));
  always @(*) begin
    if(when_SInt_l130_7) begin
      if(when_SInt_l131_7) begin
        _zz_raw_data_7_payload = 16'h8000;
      end else begin
        _zz_raw_data_7_payload = _zz_when_SInt_l130_28[15 : 0];
      end
    end else begin
      if(when_SInt_l137_7) begin
        _zz_raw_data_7_payload = 16'h7fff;
      end else begin
        _zz_raw_data_7_payload = _zz_when_SInt_l130_28[15 : 0];
      end
    end
  end

  assign when_SInt_l137_7 = (|_zz_when_SInt_l137_7);
  assign result_data_7_valid = fir_filter_filtered_data_7_valid;
  assign result_data_7_payload = ($signed(threshold) < $signed(fir_filter_filtered_data_7_payload));

endmodule

module SystolicFIR (
  input               raw_data_0_valid,
  input      [15:0]   raw_data_0_payload,
  input               raw_data_1_valid,
  input      [15:0]   raw_data_1_payload,
  input               raw_data_2_valid,
  input      [15:0]   raw_data_2_payload,
  input               raw_data_3_valid,
  input      [15:0]   raw_data_3_payload,
  input               raw_data_4_valid,
  input      [15:0]   raw_data_4_payload,
  input               raw_data_5_valid,
  input      [15:0]   raw_data_5_payload,
  input               raw_data_6_valid,
  input      [15:0]   raw_data_6_payload,
  input               raw_data_7_valid,
  input      [15:0]   raw_data_7_payload,
  output              filtered_data_0_valid,
  output     [23:0]   filtered_data_0_payload,
  output              filtered_data_1_valid,
  output     [23:0]   filtered_data_1_payload,
  output              filtered_data_2_valid,
  output     [23:0]   filtered_data_2_payload,
  output              filtered_data_3_valid,
  output     [23:0]   filtered_data_3_payload,
  output              filtered_data_4_valid,
  output     [23:0]   filtered_data_4_payload,
  output              filtered_data_5_valid,
  output     [23:0]   filtered_data_5_payload,
  output              filtered_data_6_valid,
  output     [23:0]   filtered_data_6_payload,
  output              filtered_data_7_valid,
  output     [23:0]   filtered_data_7_payload,
  input               clk,
  input               resetn
);

  wire       [23:0]   systolicCore_232_input_data;
  wire       [23:0]   systolicCore_261_input_data;
  wire       [23:0]   systolicCore_290_input_data;
  wire       [23:0]   systolicCore_319_input_data;
  wire       [23:0]   systolicCore_348_input_data;
  wire       [23:0]   systolicCore_377_input_data;
  wire       [23:0]   systolicCore_406_input_data;
  wire       [23:0]   systolicCore_435_input_data;
  wire       [23:0]   systolicCore_232_next_input_data;
  wire       [23:0]   systolicCore_232_next_adder_data;
  wire                systolicCore_232_next_valid;
  wire       [23:0]   systolicCore_233_next_input_data;
  wire       [23:0]   systolicCore_233_next_adder_data;
  wire                systolicCore_233_next_valid;
  wire       [23:0]   systolicCore_234_next_input_data;
  wire       [23:0]   systolicCore_234_next_adder_data;
  wire                systolicCore_234_next_valid;
  wire       [23:0]   systolicCore_235_next_input_data;
  wire       [23:0]   systolicCore_235_next_adder_data;
  wire                systolicCore_235_next_valid;
  wire       [23:0]   systolicCore_236_next_input_data;
  wire       [23:0]   systolicCore_236_next_adder_data;
  wire                systolicCore_236_next_valid;
  wire       [23:0]   systolicCore_237_next_input_data;
  wire       [23:0]   systolicCore_237_next_adder_data;
  wire                systolicCore_237_next_valid;
  wire       [23:0]   systolicCore_238_next_input_data;
  wire       [23:0]   systolicCore_238_next_adder_data;
  wire                systolicCore_238_next_valid;
  wire       [23:0]   systolicCore_239_next_input_data;
  wire       [23:0]   systolicCore_239_next_adder_data;
  wire                systolicCore_239_next_valid;
  wire       [23:0]   systolicCore_240_next_input_data;
  wire       [23:0]   systolicCore_240_next_adder_data;
  wire                systolicCore_240_next_valid;
  wire       [23:0]   systolicCore_241_next_input_data;
  wire       [23:0]   systolicCore_241_next_adder_data;
  wire                systolicCore_241_next_valid;
  wire       [23:0]   systolicCore_242_next_input_data;
  wire       [23:0]   systolicCore_242_next_adder_data;
  wire                systolicCore_242_next_valid;
  wire       [23:0]   systolicCore_243_next_input_data;
  wire       [23:0]   systolicCore_243_next_adder_data;
  wire                systolicCore_243_next_valid;
  wire       [23:0]   systolicCore_244_next_input_data;
  wire       [23:0]   systolicCore_244_next_adder_data;
  wire                systolicCore_244_next_valid;
  wire       [23:0]   systolicCore_245_next_input_data;
  wire       [23:0]   systolicCore_245_next_adder_data;
  wire                systolicCore_245_next_valid;
  wire       [23:0]   systolicCore_246_next_input_data;
  wire       [23:0]   systolicCore_246_next_adder_data;
  wire                systolicCore_246_next_valid;
  wire       [23:0]   systolicCore_247_next_input_data;
  wire       [23:0]   systolicCore_247_next_adder_data;
  wire                systolicCore_247_next_valid;
  wire       [23:0]   systolicCore_248_next_input_data;
  wire       [23:0]   systolicCore_248_next_adder_data;
  wire                systolicCore_248_next_valid;
  wire       [23:0]   systolicCore_249_next_input_data;
  wire       [23:0]   systolicCore_249_next_adder_data;
  wire                systolicCore_249_next_valid;
  wire       [23:0]   systolicCore_250_next_input_data;
  wire       [23:0]   systolicCore_250_next_adder_data;
  wire                systolicCore_250_next_valid;
  wire       [23:0]   systolicCore_251_next_input_data;
  wire       [23:0]   systolicCore_251_next_adder_data;
  wire                systolicCore_251_next_valid;
  wire       [23:0]   systolicCore_252_next_input_data;
  wire       [23:0]   systolicCore_252_next_adder_data;
  wire                systolicCore_252_next_valid;
  wire       [23:0]   systolicCore_253_next_input_data;
  wire       [23:0]   systolicCore_253_next_adder_data;
  wire                systolicCore_253_next_valid;
  wire       [23:0]   systolicCore_254_next_input_data;
  wire       [23:0]   systolicCore_254_next_adder_data;
  wire                systolicCore_254_next_valid;
  wire       [23:0]   systolicCore_255_next_input_data;
  wire       [23:0]   systolicCore_255_next_adder_data;
  wire                systolicCore_255_next_valid;
  wire       [23:0]   systolicCore_256_next_input_data;
  wire       [23:0]   systolicCore_256_next_adder_data;
  wire                systolicCore_256_next_valid;
  wire       [23:0]   systolicCore_257_next_input_data;
  wire       [23:0]   systolicCore_257_next_adder_data;
  wire                systolicCore_257_next_valid;
  wire       [23:0]   systolicCore_258_next_input_data;
  wire       [23:0]   systolicCore_258_next_adder_data;
  wire                systolicCore_258_next_valid;
  wire       [23:0]   systolicCore_259_next_input_data;
  wire       [23:0]   systolicCore_259_next_adder_data;
  wire                systolicCore_259_next_valid;
  wire       [23:0]   systolicCore_260_next_input_data;
  wire       [23:0]   systolicCore_260_next_adder_data;
  wire                systolicCore_260_next_valid;
  wire       [23:0]   systolicCore_261_next_input_data;
  wire       [23:0]   systolicCore_261_next_adder_data;
  wire                systolicCore_261_next_valid;
  wire       [23:0]   systolicCore_262_next_input_data;
  wire       [23:0]   systolicCore_262_next_adder_data;
  wire                systolicCore_262_next_valid;
  wire       [23:0]   systolicCore_263_next_input_data;
  wire       [23:0]   systolicCore_263_next_adder_data;
  wire                systolicCore_263_next_valid;
  wire       [23:0]   systolicCore_264_next_input_data;
  wire       [23:0]   systolicCore_264_next_adder_data;
  wire                systolicCore_264_next_valid;
  wire       [23:0]   systolicCore_265_next_input_data;
  wire       [23:0]   systolicCore_265_next_adder_data;
  wire                systolicCore_265_next_valid;
  wire       [23:0]   systolicCore_266_next_input_data;
  wire       [23:0]   systolicCore_266_next_adder_data;
  wire                systolicCore_266_next_valid;
  wire       [23:0]   systolicCore_267_next_input_data;
  wire       [23:0]   systolicCore_267_next_adder_data;
  wire                systolicCore_267_next_valid;
  wire       [23:0]   systolicCore_268_next_input_data;
  wire       [23:0]   systolicCore_268_next_adder_data;
  wire                systolicCore_268_next_valid;
  wire       [23:0]   systolicCore_269_next_input_data;
  wire       [23:0]   systolicCore_269_next_adder_data;
  wire                systolicCore_269_next_valid;
  wire       [23:0]   systolicCore_270_next_input_data;
  wire       [23:0]   systolicCore_270_next_adder_data;
  wire                systolicCore_270_next_valid;
  wire       [23:0]   systolicCore_271_next_input_data;
  wire       [23:0]   systolicCore_271_next_adder_data;
  wire                systolicCore_271_next_valid;
  wire       [23:0]   systolicCore_272_next_input_data;
  wire       [23:0]   systolicCore_272_next_adder_data;
  wire                systolicCore_272_next_valid;
  wire       [23:0]   systolicCore_273_next_input_data;
  wire       [23:0]   systolicCore_273_next_adder_data;
  wire                systolicCore_273_next_valid;
  wire       [23:0]   systolicCore_274_next_input_data;
  wire       [23:0]   systolicCore_274_next_adder_data;
  wire                systolicCore_274_next_valid;
  wire       [23:0]   systolicCore_275_next_input_data;
  wire       [23:0]   systolicCore_275_next_adder_data;
  wire                systolicCore_275_next_valid;
  wire       [23:0]   systolicCore_276_next_input_data;
  wire       [23:0]   systolicCore_276_next_adder_data;
  wire                systolicCore_276_next_valid;
  wire       [23:0]   systolicCore_277_next_input_data;
  wire       [23:0]   systolicCore_277_next_adder_data;
  wire                systolicCore_277_next_valid;
  wire       [23:0]   systolicCore_278_next_input_data;
  wire       [23:0]   systolicCore_278_next_adder_data;
  wire                systolicCore_278_next_valid;
  wire       [23:0]   systolicCore_279_next_input_data;
  wire       [23:0]   systolicCore_279_next_adder_data;
  wire                systolicCore_279_next_valid;
  wire       [23:0]   systolicCore_280_next_input_data;
  wire       [23:0]   systolicCore_280_next_adder_data;
  wire                systolicCore_280_next_valid;
  wire       [23:0]   systolicCore_281_next_input_data;
  wire       [23:0]   systolicCore_281_next_adder_data;
  wire                systolicCore_281_next_valid;
  wire       [23:0]   systolicCore_282_next_input_data;
  wire       [23:0]   systolicCore_282_next_adder_data;
  wire                systolicCore_282_next_valid;
  wire       [23:0]   systolicCore_283_next_input_data;
  wire       [23:0]   systolicCore_283_next_adder_data;
  wire                systolicCore_283_next_valid;
  wire       [23:0]   systolicCore_284_next_input_data;
  wire       [23:0]   systolicCore_284_next_adder_data;
  wire                systolicCore_284_next_valid;
  wire       [23:0]   systolicCore_285_next_input_data;
  wire       [23:0]   systolicCore_285_next_adder_data;
  wire                systolicCore_285_next_valid;
  wire       [23:0]   systolicCore_286_next_input_data;
  wire       [23:0]   systolicCore_286_next_adder_data;
  wire                systolicCore_286_next_valid;
  wire       [23:0]   systolicCore_287_next_input_data;
  wire       [23:0]   systolicCore_287_next_adder_data;
  wire                systolicCore_287_next_valid;
  wire       [23:0]   systolicCore_288_next_input_data;
  wire       [23:0]   systolicCore_288_next_adder_data;
  wire                systolicCore_288_next_valid;
  wire       [23:0]   systolicCore_289_next_input_data;
  wire       [23:0]   systolicCore_289_next_adder_data;
  wire                systolicCore_289_next_valid;
  wire       [23:0]   systolicCore_290_next_input_data;
  wire       [23:0]   systolicCore_290_next_adder_data;
  wire                systolicCore_290_next_valid;
  wire       [23:0]   systolicCore_291_next_input_data;
  wire       [23:0]   systolicCore_291_next_adder_data;
  wire                systolicCore_291_next_valid;
  wire       [23:0]   systolicCore_292_next_input_data;
  wire       [23:0]   systolicCore_292_next_adder_data;
  wire                systolicCore_292_next_valid;
  wire       [23:0]   systolicCore_293_next_input_data;
  wire       [23:0]   systolicCore_293_next_adder_data;
  wire                systolicCore_293_next_valid;
  wire       [23:0]   systolicCore_294_next_input_data;
  wire       [23:0]   systolicCore_294_next_adder_data;
  wire                systolicCore_294_next_valid;
  wire       [23:0]   systolicCore_295_next_input_data;
  wire       [23:0]   systolicCore_295_next_adder_data;
  wire                systolicCore_295_next_valid;
  wire       [23:0]   systolicCore_296_next_input_data;
  wire       [23:0]   systolicCore_296_next_adder_data;
  wire                systolicCore_296_next_valid;
  wire       [23:0]   systolicCore_297_next_input_data;
  wire       [23:0]   systolicCore_297_next_adder_data;
  wire                systolicCore_297_next_valid;
  wire       [23:0]   systolicCore_298_next_input_data;
  wire       [23:0]   systolicCore_298_next_adder_data;
  wire                systolicCore_298_next_valid;
  wire       [23:0]   systolicCore_299_next_input_data;
  wire       [23:0]   systolicCore_299_next_adder_data;
  wire                systolicCore_299_next_valid;
  wire       [23:0]   systolicCore_300_next_input_data;
  wire       [23:0]   systolicCore_300_next_adder_data;
  wire                systolicCore_300_next_valid;
  wire       [23:0]   systolicCore_301_next_input_data;
  wire       [23:0]   systolicCore_301_next_adder_data;
  wire                systolicCore_301_next_valid;
  wire       [23:0]   systolicCore_302_next_input_data;
  wire       [23:0]   systolicCore_302_next_adder_data;
  wire                systolicCore_302_next_valid;
  wire       [23:0]   systolicCore_303_next_input_data;
  wire       [23:0]   systolicCore_303_next_adder_data;
  wire                systolicCore_303_next_valid;
  wire       [23:0]   systolicCore_304_next_input_data;
  wire       [23:0]   systolicCore_304_next_adder_data;
  wire                systolicCore_304_next_valid;
  wire       [23:0]   systolicCore_305_next_input_data;
  wire       [23:0]   systolicCore_305_next_adder_data;
  wire                systolicCore_305_next_valid;
  wire       [23:0]   systolicCore_306_next_input_data;
  wire       [23:0]   systolicCore_306_next_adder_data;
  wire                systolicCore_306_next_valid;
  wire       [23:0]   systolicCore_307_next_input_data;
  wire       [23:0]   systolicCore_307_next_adder_data;
  wire                systolicCore_307_next_valid;
  wire       [23:0]   systolicCore_308_next_input_data;
  wire       [23:0]   systolicCore_308_next_adder_data;
  wire                systolicCore_308_next_valid;
  wire       [23:0]   systolicCore_309_next_input_data;
  wire       [23:0]   systolicCore_309_next_adder_data;
  wire                systolicCore_309_next_valid;
  wire       [23:0]   systolicCore_310_next_input_data;
  wire       [23:0]   systolicCore_310_next_adder_data;
  wire                systolicCore_310_next_valid;
  wire       [23:0]   systolicCore_311_next_input_data;
  wire       [23:0]   systolicCore_311_next_adder_data;
  wire                systolicCore_311_next_valid;
  wire       [23:0]   systolicCore_312_next_input_data;
  wire       [23:0]   systolicCore_312_next_adder_data;
  wire                systolicCore_312_next_valid;
  wire       [23:0]   systolicCore_313_next_input_data;
  wire       [23:0]   systolicCore_313_next_adder_data;
  wire                systolicCore_313_next_valid;
  wire       [23:0]   systolicCore_314_next_input_data;
  wire       [23:0]   systolicCore_314_next_adder_data;
  wire                systolicCore_314_next_valid;
  wire       [23:0]   systolicCore_315_next_input_data;
  wire       [23:0]   systolicCore_315_next_adder_data;
  wire                systolicCore_315_next_valid;
  wire       [23:0]   systolicCore_316_next_input_data;
  wire       [23:0]   systolicCore_316_next_adder_data;
  wire                systolicCore_316_next_valid;
  wire       [23:0]   systolicCore_317_next_input_data;
  wire       [23:0]   systolicCore_317_next_adder_data;
  wire                systolicCore_317_next_valid;
  wire       [23:0]   systolicCore_318_next_input_data;
  wire       [23:0]   systolicCore_318_next_adder_data;
  wire                systolicCore_318_next_valid;
  wire       [23:0]   systolicCore_319_next_input_data;
  wire       [23:0]   systolicCore_319_next_adder_data;
  wire                systolicCore_319_next_valid;
  wire       [23:0]   systolicCore_320_next_input_data;
  wire       [23:0]   systolicCore_320_next_adder_data;
  wire                systolicCore_320_next_valid;
  wire       [23:0]   systolicCore_321_next_input_data;
  wire       [23:0]   systolicCore_321_next_adder_data;
  wire                systolicCore_321_next_valid;
  wire       [23:0]   systolicCore_322_next_input_data;
  wire       [23:0]   systolicCore_322_next_adder_data;
  wire                systolicCore_322_next_valid;
  wire       [23:0]   systolicCore_323_next_input_data;
  wire       [23:0]   systolicCore_323_next_adder_data;
  wire                systolicCore_323_next_valid;
  wire       [23:0]   systolicCore_324_next_input_data;
  wire       [23:0]   systolicCore_324_next_adder_data;
  wire                systolicCore_324_next_valid;
  wire       [23:0]   systolicCore_325_next_input_data;
  wire       [23:0]   systolicCore_325_next_adder_data;
  wire                systolicCore_325_next_valid;
  wire       [23:0]   systolicCore_326_next_input_data;
  wire       [23:0]   systolicCore_326_next_adder_data;
  wire                systolicCore_326_next_valid;
  wire       [23:0]   systolicCore_327_next_input_data;
  wire       [23:0]   systolicCore_327_next_adder_data;
  wire                systolicCore_327_next_valid;
  wire       [23:0]   systolicCore_328_next_input_data;
  wire       [23:0]   systolicCore_328_next_adder_data;
  wire                systolicCore_328_next_valid;
  wire       [23:0]   systolicCore_329_next_input_data;
  wire       [23:0]   systolicCore_329_next_adder_data;
  wire                systolicCore_329_next_valid;
  wire       [23:0]   systolicCore_330_next_input_data;
  wire       [23:0]   systolicCore_330_next_adder_data;
  wire                systolicCore_330_next_valid;
  wire       [23:0]   systolicCore_331_next_input_data;
  wire       [23:0]   systolicCore_331_next_adder_data;
  wire                systolicCore_331_next_valid;
  wire       [23:0]   systolicCore_332_next_input_data;
  wire       [23:0]   systolicCore_332_next_adder_data;
  wire                systolicCore_332_next_valid;
  wire       [23:0]   systolicCore_333_next_input_data;
  wire       [23:0]   systolicCore_333_next_adder_data;
  wire                systolicCore_333_next_valid;
  wire       [23:0]   systolicCore_334_next_input_data;
  wire       [23:0]   systolicCore_334_next_adder_data;
  wire                systolicCore_334_next_valid;
  wire       [23:0]   systolicCore_335_next_input_data;
  wire       [23:0]   systolicCore_335_next_adder_data;
  wire                systolicCore_335_next_valid;
  wire       [23:0]   systolicCore_336_next_input_data;
  wire       [23:0]   systolicCore_336_next_adder_data;
  wire                systolicCore_336_next_valid;
  wire       [23:0]   systolicCore_337_next_input_data;
  wire       [23:0]   systolicCore_337_next_adder_data;
  wire                systolicCore_337_next_valid;
  wire       [23:0]   systolicCore_338_next_input_data;
  wire       [23:0]   systolicCore_338_next_adder_data;
  wire                systolicCore_338_next_valid;
  wire       [23:0]   systolicCore_339_next_input_data;
  wire       [23:0]   systolicCore_339_next_adder_data;
  wire                systolicCore_339_next_valid;
  wire       [23:0]   systolicCore_340_next_input_data;
  wire       [23:0]   systolicCore_340_next_adder_data;
  wire                systolicCore_340_next_valid;
  wire       [23:0]   systolicCore_341_next_input_data;
  wire       [23:0]   systolicCore_341_next_adder_data;
  wire                systolicCore_341_next_valid;
  wire       [23:0]   systolicCore_342_next_input_data;
  wire       [23:0]   systolicCore_342_next_adder_data;
  wire                systolicCore_342_next_valid;
  wire       [23:0]   systolicCore_343_next_input_data;
  wire       [23:0]   systolicCore_343_next_adder_data;
  wire                systolicCore_343_next_valid;
  wire       [23:0]   systolicCore_344_next_input_data;
  wire       [23:0]   systolicCore_344_next_adder_data;
  wire                systolicCore_344_next_valid;
  wire       [23:0]   systolicCore_345_next_input_data;
  wire       [23:0]   systolicCore_345_next_adder_data;
  wire                systolicCore_345_next_valid;
  wire       [23:0]   systolicCore_346_next_input_data;
  wire       [23:0]   systolicCore_346_next_adder_data;
  wire                systolicCore_346_next_valid;
  wire       [23:0]   systolicCore_347_next_input_data;
  wire       [23:0]   systolicCore_347_next_adder_data;
  wire                systolicCore_347_next_valid;
  wire       [23:0]   systolicCore_348_next_input_data;
  wire       [23:0]   systolicCore_348_next_adder_data;
  wire                systolicCore_348_next_valid;
  wire       [23:0]   systolicCore_349_next_input_data;
  wire       [23:0]   systolicCore_349_next_adder_data;
  wire                systolicCore_349_next_valid;
  wire       [23:0]   systolicCore_350_next_input_data;
  wire       [23:0]   systolicCore_350_next_adder_data;
  wire                systolicCore_350_next_valid;
  wire       [23:0]   systolicCore_351_next_input_data;
  wire       [23:0]   systolicCore_351_next_adder_data;
  wire                systolicCore_351_next_valid;
  wire       [23:0]   systolicCore_352_next_input_data;
  wire       [23:0]   systolicCore_352_next_adder_data;
  wire                systolicCore_352_next_valid;
  wire       [23:0]   systolicCore_353_next_input_data;
  wire       [23:0]   systolicCore_353_next_adder_data;
  wire                systolicCore_353_next_valid;
  wire       [23:0]   systolicCore_354_next_input_data;
  wire       [23:0]   systolicCore_354_next_adder_data;
  wire                systolicCore_354_next_valid;
  wire       [23:0]   systolicCore_355_next_input_data;
  wire       [23:0]   systolicCore_355_next_adder_data;
  wire                systolicCore_355_next_valid;
  wire       [23:0]   systolicCore_356_next_input_data;
  wire       [23:0]   systolicCore_356_next_adder_data;
  wire                systolicCore_356_next_valid;
  wire       [23:0]   systolicCore_357_next_input_data;
  wire       [23:0]   systolicCore_357_next_adder_data;
  wire                systolicCore_357_next_valid;
  wire       [23:0]   systolicCore_358_next_input_data;
  wire       [23:0]   systolicCore_358_next_adder_data;
  wire                systolicCore_358_next_valid;
  wire       [23:0]   systolicCore_359_next_input_data;
  wire       [23:0]   systolicCore_359_next_adder_data;
  wire                systolicCore_359_next_valid;
  wire       [23:0]   systolicCore_360_next_input_data;
  wire       [23:0]   systolicCore_360_next_adder_data;
  wire                systolicCore_360_next_valid;
  wire       [23:0]   systolicCore_361_next_input_data;
  wire       [23:0]   systolicCore_361_next_adder_data;
  wire                systolicCore_361_next_valid;
  wire       [23:0]   systolicCore_362_next_input_data;
  wire       [23:0]   systolicCore_362_next_adder_data;
  wire                systolicCore_362_next_valid;
  wire       [23:0]   systolicCore_363_next_input_data;
  wire       [23:0]   systolicCore_363_next_adder_data;
  wire                systolicCore_363_next_valid;
  wire       [23:0]   systolicCore_364_next_input_data;
  wire       [23:0]   systolicCore_364_next_adder_data;
  wire                systolicCore_364_next_valid;
  wire       [23:0]   systolicCore_365_next_input_data;
  wire       [23:0]   systolicCore_365_next_adder_data;
  wire                systolicCore_365_next_valid;
  wire       [23:0]   systolicCore_366_next_input_data;
  wire       [23:0]   systolicCore_366_next_adder_data;
  wire                systolicCore_366_next_valid;
  wire       [23:0]   systolicCore_367_next_input_data;
  wire       [23:0]   systolicCore_367_next_adder_data;
  wire                systolicCore_367_next_valid;
  wire       [23:0]   systolicCore_368_next_input_data;
  wire       [23:0]   systolicCore_368_next_adder_data;
  wire                systolicCore_368_next_valid;
  wire       [23:0]   systolicCore_369_next_input_data;
  wire       [23:0]   systolicCore_369_next_adder_data;
  wire                systolicCore_369_next_valid;
  wire       [23:0]   systolicCore_370_next_input_data;
  wire       [23:0]   systolicCore_370_next_adder_data;
  wire                systolicCore_370_next_valid;
  wire       [23:0]   systolicCore_371_next_input_data;
  wire       [23:0]   systolicCore_371_next_adder_data;
  wire                systolicCore_371_next_valid;
  wire       [23:0]   systolicCore_372_next_input_data;
  wire       [23:0]   systolicCore_372_next_adder_data;
  wire                systolicCore_372_next_valid;
  wire       [23:0]   systolicCore_373_next_input_data;
  wire       [23:0]   systolicCore_373_next_adder_data;
  wire                systolicCore_373_next_valid;
  wire       [23:0]   systolicCore_374_next_input_data;
  wire       [23:0]   systolicCore_374_next_adder_data;
  wire                systolicCore_374_next_valid;
  wire       [23:0]   systolicCore_375_next_input_data;
  wire       [23:0]   systolicCore_375_next_adder_data;
  wire                systolicCore_375_next_valid;
  wire       [23:0]   systolicCore_376_next_input_data;
  wire       [23:0]   systolicCore_376_next_adder_data;
  wire                systolicCore_376_next_valid;
  wire       [23:0]   systolicCore_377_next_input_data;
  wire       [23:0]   systolicCore_377_next_adder_data;
  wire                systolicCore_377_next_valid;
  wire       [23:0]   systolicCore_378_next_input_data;
  wire       [23:0]   systolicCore_378_next_adder_data;
  wire                systolicCore_378_next_valid;
  wire       [23:0]   systolicCore_379_next_input_data;
  wire       [23:0]   systolicCore_379_next_adder_data;
  wire                systolicCore_379_next_valid;
  wire       [23:0]   systolicCore_380_next_input_data;
  wire       [23:0]   systolicCore_380_next_adder_data;
  wire                systolicCore_380_next_valid;
  wire       [23:0]   systolicCore_381_next_input_data;
  wire       [23:0]   systolicCore_381_next_adder_data;
  wire                systolicCore_381_next_valid;
  wire       [23:0]   systolicCore_382_next_input_data;
  wire       [23:0]   systolicCore_382_next_adder_data;
  wire                systolicCore_382_next_valid;
  wire       [23:0]   systolicCore_383_next_input_data;
  wire       [23:0]   systolicCore_383_next_adder_data;
  wire                systolicCore_383_next_valid;
  wire       [23:0]   systolicCore_384_next_input_data;
  wire       [23:0]   systolicCore_384_next_adder_data;
  wire                systolicCore_384_next_valid;
  wire       [23:0]   systolicCore_385_next_input_data;
  wire       [23:0]   systolicCore_385_next_adder_data;
  wire                systolicCore_385_next_valid;
  wire       [23:0]   systolicCore_386_next_input_data;
  wire       [23:0]   systolicCore_386_next_adder_data;
  wire                systolicCore_386_next_valid;
  wire       [23:0]   systolicCore_387_next_input_data;
  wire       [23:0]   systolicCore_387_next_adder_data;
  wire                systolicCore_387_next_valid;
  wire       [23:0]   systolicCore_388_next_input_data;
  wire       [23:0]   systolicCore_388_next_adder_data;
  wire                systolicCore_388_next_valid;
  wire       [23:0]   systolicCore_389_next_input_data;
  wire       [23:0]   systolicCore_389_next_adder_data;
  wire                systolicCore_389_next_valid;
  wire       [23:0]   systolicCore_390_next_input_data;
  wire       [23:0]   systolicCore_390_next_adder_data;
  wire                systolicCore_390_next_valid;
  wire       [23:0]   systolicCore_391_next_input_data;
  wire       [23:0]   systolicCore_391_next_adder_data;
  wire                systolicCore_391_next_valid;
  wire       [23:0]   systolicCore_392_next_input_data;
  wire       [23:0]   systolicCore_392_next_adder_data;
  wire                systolicCore_392_next_valid;
  wire       [23:0]   systolicCore_393_next_input_data;
  wire       [23:0]   systolicCore_393_next_adder_data;
  wire                systolicCore_393_next_valid;
  wire       [23:0]   systolicCore_394_next_input_data;
  wire       [23:0]   systolicCore_394_next_adder_data;
  wire                systolicCore_394_next_valid;
  wire       [23:0]   systolicCore_395_next_input_data;
  wire       [23:0]   systolicCore_395_next_adder_data;
  wire                systolicCore_395_next_valid;
  wire       [23:0]   systolicCore_396_next_input_data;
  wire       [23:0]   systolicCore_396_next_adder_data;
  wire                systolicCore_396_next_valid;
  wire       [23:0]   systolicCore_397_next_input_data;
  wire       [23:0]   systolicCore_397_next_adder_data;
  wire                systolicCore_397_next_valid;
  wire       [23:0]   systolicCore_398_next_input_data;
  wire       [23:0]   systolicCore_398_next_adder_data;
  wire                systolicCore_398_next_valid;
  wire       [23:0]   systolicCore_399_next_input_data;
  wire       [23:0]   systolicCore_399_next_adder_data;
  wire                systolicCore_399_next_valid;
  wire       [23:0]   systolicCore_400_next_input_data;
  wire       [23:0]   systolicCore_400_next_adder_data;
  wire                systolicCore_400_next_valid;
  wire       [23:0]   systolicCore_401_next_input_data;
  wire       [23:0]   systolicCore_401_next_adder_data;
  wire                systolicCore_401_next_valid;
  wire       [23:0]   systolicCore_402_next_input_data;
  wire       [23:0]   systolicCore_402_next_adder_data;
  wire                systolicCore_402_next_valid;
  wire       [23:0]   systolicCore_403_next_input_data;
  wire       [23:0]   systolicCore_403_next_adder_data;
  wire                systolicCore_403_next_valid;
  wire       [23:0]   systolicCore_404_next_input_data;
  wire       [23:0]   systolicCore_404_next_adder_data;
  wire                systolicCore_404_next_valid;
  wire       [23:0]   systolicCore_405_next_input_data;
  wire       [23:0]   systolicCore_405_next_adder_data;
  wire                systolicCore_405_next_valid;
  wire       [23:0]   systolicCore_406_next_input_data;
  wire       [23:0]   systolicCore_406_next_adder_data;
  wire                systolicCore_406_next_valid;
  wire       [23:0]   systolicCore_407_next_input_data;
  wire       [23:0]   systolicCore_407_next_adder_data;
  wire                systolicCore_407_next_valid;
  wire       [23:0]   systolicCore_408_next_input_data;
  wire       [23:0]   systolicCore_408_next_adder_data;
  wire                systolicCore_408_next_valid;
  wire       [23:0]   systolicCore_409_next_input_data;
  wire       [23:0]   systolicCore_409_next_adder_data;
  wire                systolicCore_409_next_valid;
  wire       [23:0]   systolicCore_410_next_input_data;
  wire       [23:0]   systolicCore_410_next_adder_data;
  wire                systolicCore_410_next_valid;
  wire       [23:0]   systolicCore_411_next_input_data;
  wire       [23:0]   systolicCore_411_next_adder_data;
  wire                systolicCore_411_next_valid;
  wire       [23:0]   systolicCore_412_next_input_data;
  wire       [23:0]   systolicCore_412_next_adder_data;
  wire                systolicCore_412_next_valid;
  wire       [23:0]   systolicCore_413_next_input_data;
  wire       [23:0]   systolicCore_413_next_adder_data;
  wire                systolicCore_413_next_valid;
  wire       [23:0]   systolicCore_414_next_input_data;
  wire       [23:0]   systolicCore_414_next_adder_data;
  wire                systolicCore_414_next_valid;
  wire       [23:0]   systolicCore_415_next_input_data;
  wire       [23:0]   systolicCore_415_next_adder_data;
  wire                systolicCore_415_next_valid;
  wire       [23:0]   systolicCore_416_next_input_data;
  wire       [23:0]   systolicCore_416_next_adder_data;
  wire                systolicCore_416_next_valid;
  wire       [23:0]   systolicCore_417_next_input_data;
  wire       [23:0]   systolicCore_417_next_adder_data;
  wire                systolicCore_417_next_valid;
  wire       [23:0]   systolicCore_418_next_input_data;
  wire       [23:0]   systolicCore_418_next_adder_data;
  wire                systolicCore_418_next_valid;
  wire       [23:0]   systolicCore_419_next_input_data;
  wire       [23:0]   systolicCore_419_next_adder_data;
  wire                systolicCore_419_next_valid;
  wire       [23:0]   systolicCore_420_next_input_data;
  wire       [23:0]   systolicCore_420_next_adder_data;
  wire                systolicCore_420_next_valid;
  wire       [23:0]   systolicCore_421_next_input_data;
  wire       [23:0]   systolicCore_421_next_adder_data;
  wire                systolicCore_421_next_valid;
  wire       [23:0]   systolicCore_422_next_input_data;
  wire       [23:0]   systolicCore_422_next_adder_data;
  wire                systolicCore_422_next_valid;
  wire       [23:0]   systolicCore_423_next_input_data;
  wire       [23:0]   systolicCore_423_next_adder_data;
  wire                systolicCore_423_next_valid;
  wire       [23:0]   systolicCore_424_next_input_data;
  wire       [23:0]   systolicCore_424_next_adder_data;
  wire                systolicCore_424_next_valid;
  wire       [23:0]   systolicCore_425_next_input_data;
  wire       [23:0]   systolicCore_425_next_adder_data;
  wire                systolicCore_425_next_valid;
  wire       [23:0]   systolicCore_426_next_input_data;
  wire       [23:0]   systolicCore_426_next_adder_data;
  wire                systolicCore_426_next_valid;
  wire       [23:0]   systolicCore_427_next_input_data;
  wire       [23:0]   systolicCore_427_next_adder_data;
  wire                systolicCore_427_next_valid;
  wire       [23:0]   systolicCore_428_next_input_data;
  wire       [23:0]   systolicCore_428_next_adder_data;
  wire                systolicCore_428_next_valid;
  wire       [23:0]   systolicCore_429_next_input_data;
  wire       [23:0]   systolicCore_429_next_adder_data;
  wire                systolicCore_429_next_valid;
  wire       [23:0]   systolicCore_430_next_input_data;
  wire       [23:0]   systolicCore_430_next_adder_data;
  wire                systolicCore_430_next_valid;
  wire       [23:0]   systolicCore_431_next_input_data;
  wire       [23:0]   systolicCore_431_next_adder_data;
  wire                systolicCore_431_next_valid;
  wire       [23:0]   systolicCore_432_next_input_data;
  wire       [23:0]   systolicCore_432_next_adder_data;
  wire                systolicCore_432_next_valid;
  wire       [23:0]   systolicCore_433_next_input_data;
  wire       [23:0]   systolicCore_433_next_adder_data;
  wire                systolicCore_433_next_valid;
  wire       [23:0]   systolicCore_434_next_input_data;
  wire       [23:0]   systolicCore_434_next_adder_data;
  wire                systolicCore_434_next_valid;
  wire       [23:0]   systolicCore_435_next_input_data;
  wire       [23:0]   systolicCore_435_next_adder_data;
  wire                systolicCore_435_next_valid;
  wire       [23:0]   systolicCore_436_next_input_data;
  wire       [23:0]   systolicCore_436_next_adder_data;
  wire                systolicCore_436_next_valid;
  wire       [23:0]   systolicCore_437_next_input_data;
  wire       [23:0]   systolicCore_437_next_adder_data;
  wire                systolicCore_437_next_valid;
  wire       [23:0]   systolicCore_438_next_input_data;
  wire       [23:0]   systolicCore_438_next_adder_data;
  wire                systolicCore_438_next_valid;
  wire       [23:0]   systolicCore_439_next_input_data;
  wire       [23:0]   systolicCore_439_next_adder_data;
  wire                systolicCore_439_next_valid;
  wire       [23:0]   systolicCore_440_next_input_data;
  wire       [23:0]   systolicCore_440_next_adder_data;
  wire                systolicCore_440_next_valid;
  wire       [23:0]   systolicCore_441_next_input_data;
  wire       [23:0]   systolicCore_441_next_adder_data;
  wire                systolicCore_441_next_valid;
  wire       [23:0]   systolicCore_442_next_input_data;
  wire       [23:0]   systolicCore_442_next_adder_data;
  wire                systolicCore_442_next_valid;
  wire       [23:0]   systolicCore_443_next_input_data;
  wire       [23:0]   systolicCore_443_next_adder_data;
  wire                systolicCore_443_next_valid;
  wire       [23:0]   systolicCore_444_next_input_data;
  wire       [23:0]   systolicCore_444_next_adder_data;
  wire                systolicCore_444_next_valid;
  wire       [23:0]   systolicCore_445_next_input_data;
  wire       [23:0]   systolicCore_445_next_adder_data;
  wire                systolicCore_445_next_valid;
  wire       [23:0]   systolicCore_446_next_input_data;
  wire       [23:0]   systolicCore_446_next_adder_data;
  wire                systolicCore_446_next_valid;
  wire       [23:0]   systolicCore_447_next_input_data;
  wire       [23:0]   systolicCore_447_next_adder_data;
  wire                systolicCore_447_next_valid;
  wire       [23:0]   systolicCore_448_next_input_data;
  wire       [23:0]   systolicCore_448_next_adder_data;
  wire                systolicCore_448_next_valid;
  wire       [23:0]   systolicCore_449_next_input_data;
  wire       [23:0]   systolicCore_449_next_adder_data;
  wire                systolicCore_449_next_valid;
  wire       [23:0]   systolicCore_450_next_input_data;
  wire       [23:0]   systolicCore_450_next_adder_data;
  wire                systolicCore_450_next_valid;
  wire       [23:0]   systolicCore_451_next_input_data;
  wire       [23:0]   systolicCore_451_next_adder_data;
  wire                systolicCore_451_next_valid;
  wire       [23:0]   systolicCore_452_next_input_data;
  wire       [23:0]   systolicCore_452_next_adder_data;
  wire                systolicCore_452_next_valid;
  wire       [23:0]   systolicCore_453_next_input_data;
  wire       [23:0]   systolicCore_453_next_adder_data;
  wire                systolicCore_453_next_valid;
  wire       [23:0]   systolicCore_454_next_input_data;
  wire       [23:0]   systolicCore_454_next_adder_data;
  wire                systolicCore_454_next_valid;
  wire       [23:0]   systolicCore_455_next_input_data;
  wire       [23:0]   systolicCore_455_next_adder_data;
  wire                systolicCore_455_next_valid;
  wire       [23:0]   systolicCore_456_next_input_data;
  wire       [23:0]   systolicCore_456_next_adder_data;
  wire                systolicCore_456_next_valid;
  wire       [23:0]   systolicCore_457_next_input_data;
  wire       [23:0]   systolicCore_457_next_adder_data;
  wire                systolicCore_457_next_valid;
  wire       [23:0]   systolicCore_458_next_input_data;
  wire       [23:0]   systolicCore_458_next_adder_data;
  wire                systolicCore_458_next_valid;
  wire       [23:0]   systolicCore_459_next_input_data;
  wire       [23:0]   systolicCore_459_next_adder_data;
  wire                systolicCore_459_next_valid;
  wire       [23:0]   systolicCore_460_next_input_data;
  wire       [23:0]   systolicCore_460_next_adder_data;
  wire                systolicCore_460_next_valid;
  wire       [23:0]   systolicCore_461_next_input_data;
  wire       [23:0]   systolicCore_461_next_adder_data;
  wire                systolicCore_461_next_valid;
  wire       [23:0]   systolicCore_462_next_input_data;
  wire       [23:0]   systolicCore_462_next_adder_data;
  wire                systolicCore_462_next_valid;
  wire       [23:0]   systolicCore_463_next_input_data;
  wire       [23:0]   systolicCore_463_next_adder_data;
  wire                systolicCore_463_next_valid;

  SystolicCore systolicCore_232 (
    .input_data      (systolicCore_232_input_data[23:0]     ), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (24'h0                                 ), //i
    .valid           (raw_data_0_valid                      ), //i
    .next_input_data (systolicCore_232_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_232_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_232_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_233 (
    .input_data      (systolicCore_232_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_232_next_adder_data[23:0]), //i
    .valid           (systolicCore_232_next_valid           ), //i
    .next_input_data (systolicCore_233_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_233_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_233_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_234 (
    .input_data      (systolicCore_233_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_233_next_adder_data[23:0]), //i
    .valid           (systolicCore_233_next_valid           ), //i
    .next_input_data (systolicCore_234_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_234_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_234_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_235 (
    .input_data      (systolicCore_234_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_234_next_adder_data[23:0]), //i
    .valid           (systolicCore_234_next_valid           ), //i
    .next_input_data (systolicCore_235_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_235_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_235_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_236 (
    .input_data      (systolicCore_235_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_235_next_adder_data[23:0]), //i
    .valid           (systolicCore_235_next_valid           ), //i
    .next_input_data (systolicCore_236_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_236_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_236_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_237 (
    .input_data      (systolicCore_236_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_236_next_adder_data[23:0]), //i
    .valid           (systolicCore_236_next_valid           ), //i
    .next_input_data (systolicCore_237_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_237_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_237_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_238 (
    .input_data      (systolicCore_237_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_237_next_adder_data[23:0]), //i
    .valid           (systolicCore_237_next_valid           ), //i
    .next_input_data (systolicCore_238_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_238_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_238_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_239 (
    .input_data      (systolicCore_238_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_238_next_adder_data[23:0]), //i
    .valid           (systolicCore_238_next_valid           ), //i
    .next_input_data (systolicCore_239_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_239_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_239_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_240 (
    .input_data      (systolicCore_239_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_239_next_adder_data[23:0]), //i
    .valid           (systolicCore_239_next_valid           ), //i
    .next_input_data (systolicCore_240_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_240_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_240_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_241 (
    .input_data      (systolicCore_240_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_240_next_adder_data[23:0]), //i
    .valid           (systolicCore_240_next_valid           ), //i
    .next_input_data (systolicCore_241_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_241_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_241_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_242 (
    .input_data      (systolicCore_241_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_241_next_adder_data[23:0]), //i
    .valid           (systolicCore_241_next_valid           ), //i
    .next_input_data (systolicCore_242_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_242_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_242_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_243 (
    .input_data      (systolicCore_242_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_242_next_adder_data[23:0]), //i
    .valid           (systolicCore_242_next_valid           ), //i
    .next_input_data (systolicCore_243_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_243_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_243_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_244 (
    .input_data      (systolicCore_243_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_243_next_adder_data[23:0]), //i
    .valid           (systolicCore_243_next_valid           ), //i
    .next_input_data (systolicCore_244_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_244_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_244_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_245 (
    .input_data      (systolicCore_244_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_244_next_adder_data[23:0]), //i
    .valid           (systolicCore_244_next_valid           ), //i
    .next_input_data (systolicCore_245_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_245_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_245_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_246 (
    .input_data      (systolicCore_245_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_245_next_adder_data[23:0]), //i
    .valid           (systolicCore_245_next_valid           ), //i
    .next_input_data (systolicCore_246_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_246_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_246_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_247 (
    .input_data      (systolicCore_246_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_246_next_adder_data[23:0]), //i
    .valid           (systolicCore_246_next_valid           ), //i
    .next_input_data (systolicCore_247_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_247_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_247_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_248 (
    .input_data      (systolicCore_247_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_247_next_adder_data[23:0]), //i
    .valid           (systolicCore_247_next_valid           ), //i
    .next_input_data (systolicCore_248_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_248_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_248_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_249 (
    .input_data      (systolicCore_248_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_248_next_adder_data[23:0]), //i
    .valid           (systolicCore_248_next_valid           ), //i
    .next_input_data (systolicCore_249_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_249_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_249_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_250 (
    .input_data      (systolicCore_249_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_249_next_adder_data[23:0]), //i
    .valid           (systolicCore_249_next_valid           ), //i
    .next_input_data (systolicCore_250_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_250_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_250_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_251 (
    .input_data      (systolicCore_250_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_250_next_adder_data[23:0]), //i
    .valid           (systolicCore_250_next_valid           ), //i
    .next_input_data (systolicCore_251_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_251_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_251_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_252 (
    .input_data      (systolicCore_251_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_251_next_adder_data[23:0]), //i
    .valid           (systolicCore_251_next_valid           ), //i
    .next_input_data (systolicCore_252_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_252_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_252_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_253 (
    .input_data      (systolicCore_252_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_252_next_adder_data[23:0]), //i
    .valid           (systolicCore_252_next_valid           ), //i
    .next_input_data (systolicCore_253_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_253_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_253_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_254 (
    .input_data      (systolicCore_253_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_253_next_adder_data[23:0]), //i
    .valid           (systolicCore_253_next_valid           ), //i
    .next_input_data (systolicCore_254_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_254_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_254_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_255 (
    .input_data      (systolicCore_254_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_254_next_adder_data[23:0]), //i
    .valid           (systolicCore_254_next_valid           ), //i
    .next_input_data (systolicCore_255_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_255_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_255_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_256 (
    .input_data      (systolicCore_255_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_255_next_adder_data[23:0]), //i
    .valid           (systolicCore_255_next_valid           ), //i
    .next_input_data (systolicCore_256_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_256_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_256_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_257 (
    .input_data      (systolicCore_256_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_256_next_adder_data[23:0]), //i
    .valid           (systolicCore_256_next_valid           ), //i
    .next_input_data (systolicCore_257_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_257_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_257_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_258 (
    .input_data      (systolicCore_257_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_257_next_adder_data[23:0]), //i
    .valid           (systolicCore_257_next_valid           ), //i
    .next_input_data (systolicCore_258_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_258_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_258_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_259 (
    .input_data      (systolicCore_258_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_258_next_adder_data[23:0]), //i
    .valid           (systolicCore_258_next_valid           ), //i
    .next_input_data (systolicCore_259_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_259_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_259_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_260 (
    .input_data      (systolicCore_259_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_259_next_adder_data[23:0]), //i
    .valid           (systolicCore_259_next_valid           ), //i
    .next_input_data (systolicCore_260_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_260_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_260_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_261 (
    .input_data      (systolicCore_261_input_data[23:0]     ), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (24'h0                                 ), //i
    .valid           (raw_data_1_valid                      ), //i
    .next_input_data (systolicCore_261_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_261_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_261_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_262 (
    .input_data      (systolicCore_261_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_261_next_adder_data[23:0]), //i
    .valid           (systolicCore_261_next_valid           ), //i
    .next_input_data (systolicCore_262_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_262_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_262_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_263 (
    .input_data      (systolicCore_262_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_262_next_adder_data[23:0]), //i
    .valid           (systolicCore_262_next_valid           ), //i
    .next_input_data (systolicCore_263_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_263_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_263_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_264 (
    .input_data      (systolicCore_263_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_263_next_adder_data[23:0]), //i
    .valid           (systolicCore_263_next_valid           ), //i
    .next_input_data (systolicCore_264_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_264_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_264_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_265 (
    .input_data      (systolicCore_264_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_264_next_adder_data[23:0]), //i
    .valid           (systolicCore_264_next_valid           ), //i
    .next_input_data (systolicCore_265_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_265_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_265_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_266 (
    .input_data      (systolicCore_265_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_265_next_adder_data[23:0]), //i
    .valid           (systolicCore_265_next_valid           ), //i
    .next_input_data (systolicCore_266_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_266_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_266_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_267 (
    .input_data      (systolicCore_266_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_266_next_adder_data[23:0]), //i
    .valid           (systolicCore_266_next_valid           ), //i
    .next_input_data (systolicCore_267_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_267_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_267_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_268 (
    .input_data      (systolicCore_267_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_267_next_adder_data[23:0]), //i
    .valid           (systolicCore_267_next_valid           ), //i
    .next_input_data (systolicCore_268_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_268_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_268_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_269 (
    .input_data      (systolicCore_268_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_268_next_adder_data[23:0]), //i
    .valid           (systolicCore_268_next_valid           ), //i
    .next_input_data (systolicCore_269_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_269_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_269_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_270 (
    .input_data      (systolicCore_269_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_269_next_adder_data[23:0]), //i
    .valid           (systolicCore_269_next_valid           ), //i
    .next_input_data (systolicCore_270_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_270_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_270_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_271 (
    .input_data      (systolicCore_270_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_270_next_adder_data[23:0]), //i
    .valid           (systolicCore_270_next_valid           ), //i
    .next_input_data (systolicCore_271_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_271_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_271_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_272 (
    .input_data      (systolicCore_271_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_271_next_adder_data[23:0]), //i
    .valid           (systolicCore_271_next_valid           ), //i
    .next_input_data (systolicCore_272_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_272_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_272_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_273 (
    .input_data      (systolicCore_272_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_272_next_adder_data[23:0]), //i
    .valid           (systolicCore_272_next_valid           ), //i
    .next_input_data (systolicCore_273_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_273_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_273_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_274 (
    .input_data      (systolicCore_273_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_273_next_adder_data[23:0]), //i
    .valid           (systolicCore_273_next_valid           ), //i
    .next_input_data (systolicCore_274_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_274_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_274_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_275 (
    .input_data      (systolicCore_274_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_274_next_adder_data[23:0]), //i
    .valid           (systolicCore_274_next_valid           ), //i
    .next_input_data (systolicCore_275_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_275_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_275_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_276 (
    .input_data      (systolicCore_275_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_275_next_adder_data[23:0]), //i
    .valid           (systolicCore_275_next_valid           ), //i
    .next_input_data (systolicCore_276_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_276_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_276_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_277 (
    .input_data      (systolicCore_276_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_276_next_adder_data[23:0]), //i
    .valid           (systolicCore_276_next_valid           ), //i
    .next_input_data (systolicCore_277_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_277_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_277_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_278 (
    .input_data      (systolicCore_277_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_277_next_adder_data[23:0]), //i
    .valid           (systolicCore_277_next_valid           ), //i
    .next_input_data (systolicCore_278_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_278_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_278_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_279 (
    .input_data      (systolicCore_278_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_278_next_adder_data[23:0]), //i
    .valid           (systolicCore_278_next_valid           ), //i
    .next_input_data (systolicCore_279_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_279_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_279_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_280 (
    .input_data      (systolicCore_279_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_279_next_adder_data[23:0]), //i
    .valid           (systolicCore_279_next_valid           ), //i
    .next_input_data (systolicCore_280_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_280_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_280_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_281 (
    .input_data      (systolicCore_280_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_280_next_adder_data[23:0]), //i
    .valid           (systolicCore_280_next_valid           ), //i
    .next_input_data (systolicCore_281_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_281_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_281_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_282 (
    .input_data      (systolicCore_281_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_281_next_adder_data[23:0]), //i
    .valid           (systolicCore_281_next_valid           ), //i
    .next_input_data (systolicCore_282_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_282_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_282_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_283 (
    .input_data      (systolicCore_282_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_282_next_adder_data[23:0]), //i
    .valid           (systolicCore_282_next_valid           ), //i
    .next_input_data (systolicCore_283_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_283_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_283_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_284 (
    .input_data      (systolicCore_283_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_283_next_adder_data[23:0]), //i
    .valid           (systolicCore_283_next_valid           ), //i
    .next_input_data (systolicCore_284_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_284_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_284_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_285 (
    .input_data      (systolicCore_284_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_284_next_adder_data[23:0]), //i
    .valid           (systolicCore_284_next_valid           ), //i
    .next_input_data (systolicCore_285_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_285_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_285_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_286 (
    .input_data      (systolicCore_285_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_285_next_adder_data[23:0]), //i
    .valid           (systolicCore_285_next_valid           ), //i
    .next_input_data (systolicCore_286_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_286_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_286_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_287 (
    .input_data      (systolicCore_286_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_286_next_adder_data[23:0]), //i
    .valid           (systolicCore_286_next_valid           ), //i
    .next_input_data (systolicCore_287_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_287_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_287_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_288 (
    .input_data      (systolicCore_287_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_287_next_adder_data[23:0]), //i
    .valid           (systolicCore_287_next_valid           ), //i
    .next_input_data (systolicCore_288_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_288_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_288_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_289 (
    .input_data      (systolicCore_288_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_288_next_adder_data[23:0]), //i
    .valid           (systolicCore_288_next_valid           ), //i
    .next_input_data (systolicCore_289_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_289_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_289_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_290 (
    .input_data      (systolicCore_290_input_data[23:0]     ), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (24'h0                                 ), //i
    .valid           (raw_data_2_valid                      ), //i
    .next_input_data (systolicCore_290_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_290_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_290_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_291 (
    .input_data      (systolicCore_290_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_290_next_adder_data[23:0]), //i
    .valid           (systolicCore_290_next_valid           ), //i
    .next_input_data (systolicCore_291_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_291_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_291_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_292 (
    .input_data      (systolicCore_291_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_291_next_adder_data[23:0]), //i
    .valid           (systolicCore_291_next_valid           ), //i
    .next_input_data (systolicCore_292_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_292_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_292_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_293 (
    .input_data      (systolicCore_292_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_292_next_adder_data[23:0]), //i
    .valid           (systolicCore_292_next_valid           ), //i
    .next_input_data (systolicCore_293_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_293_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_293_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_294 (
    .input_data      (systolicCore_293_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_293_next_adder_data[23:0]), //i
    .valid           (systolicCore_293_next_valid           ), //i
    .next_input_data (systolicCore_294_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_294_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_294_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_295 (
    .input_data      (systolicCore_294_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_294_next_adder_data[23:0]), //i
    .valid           (systolicCore_294_next_valid           ), //i
    .next_input_data (systolicCore_295_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_295_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_295_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_296 (
    .input_data      (systolicCore_295_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_295_next_adder_data[23:0]), //i
    .valid           (systolicCore_295_next_valid           ), //i
    .next_input_data (systolicCore_296_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_296_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_296_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_297 (
    .input_data      (systolicCore_296_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_296_next_adder_data[23:0]), //i
    .valid           (systolicCore_296_next_valid           ), //i
    .next_input_data (systolicCore_297_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_297_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_297_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_298 (
    .input_data      (systolicCore_297_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_297_next_adder_data[23:0]), //i
    .valid           (systolicCore_297_next_valid           ), //i
    .next_input_data (systolicCore_298_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_298_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_298_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_299 (
    .input_data      (systolicCore_298_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_298_next_adder_data[23:0]), //i
    .valid           (systolicCore_298_next_valid           ), //i
    .next_input_data (systolicCore_299_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_299_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_299_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_300 (
    .input_data      (systolicCore_299_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_299_next_adder_data[23:0]), //i
    .valid           (systolicCore_299_next_valid           ), //i
    .next_input_data (systolicCore_300_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_300_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_300_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_301 (
    .input_data      (systolicCore_300_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_300_next_adder_data[23:0]), //i
    .valid           (systolicCore_300_next_valid           ), //i
    .next_input_data (systolicCore_301_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_301_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_301_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_302 (
    .input_data      (systolicCore_301_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_301_next_adder_data[23:0]), //i
    .valid           (systolicCore_301_next_valid           ), //i
    .next_input_data (systolicCore_302_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_302_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_302_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_303 (
    .input_data      (systolicCore_302_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_302_next_adder_data[23:0]), //i
    .valid           (systolicCore_302_next_valid           ), //i
    .next_input_data (systolicCore_303_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_303_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_303_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_304 (
    .input_data      (systolicCore_303_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_303_next_adder_data[23:0]), //i
    .valid           (systolicCore_303_next_valid           ), //i
    .next_input_data (systolicCore_304_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_304_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_304_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_305 (
    .input_data      (systolicCore_304_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_304_next_adder_data[23:0]), //i
    .valid           (systolicCore_304_next_valid           ), //i
    .next_input_data (systolicCore_305_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_305_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_305_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_306 (
    .input_data      (systolicCore_305_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_305_next_adder_data[23:0]), //i
    .valid           (systolicCore_305_next_valid           ), //i
    .next_input_data (systolicCore_306_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_306_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_306_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_307 (
    .input_data      (systolicCore_306_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_306_next_adder_data[23:0]), //i
    .valid           (systolicCore_306_next_valid           ), //i
    .next_input_data (systolicCore_307_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_307_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_307_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_308 (
    .input_data      (systolicCore_307_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_307_next_adder_data[23:0]), //i
    .valid           (systolicCore_307_next_valid           ), //i
    .next_input_data (systolicCore_308_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_308_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_308_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_309 (
    .input_data      (systolicCore_308_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_308_next_adder_data[23:0]), //i
    .valid           (systolicCore_308_next_valid           ), //i
    .next_input_data (systolicCore_309_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_309_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_309_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_310 (
    .input_data      (systolicCore_309_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_309_next_adder_data[23:0]), //i
    .valid           (systolicCore_309_next_valid           ), //i
    .next_input_data (systolicCore_310_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_310_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_310_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_311 (
    .input_data      (systolicCore_310_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_310_next_adder_data[23:0]), //i
    .valid           (systolicCore_310_next_valid           ), //i
    .next_input_data (systolicCore_311_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_311_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_311_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_312 (
    .input_data      (systolicCore_311_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_311_next_adder_data[23:0]), //i
    .valid           (systolicCore_311_next_valid           ), //i
    .next_input_data (systolicCore_312_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_312_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_312_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_313 (
    .input_data      (systolicCore_312_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_312_next_adder_data[23:0]), //i
    .valid           (systolicCore_312_next_valid           ), //i
    .next_input_data (systolicCore_313_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_313_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_313_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_314 (
    .input_data      (systolicCore_313_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_313_next_adder_data[23:0]), //i
    .valid           (systolicCore_313_next_valid           ), //i
    .next_input_data (systolicCore_314_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_314_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_314_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_315 (
    .input_data      (systolicCore_314_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_314_next_adder_data[23:0]), //i
    .valid           (systolicCore_314_next_valid           ), //i
    .next_input_data (systolicCore_315_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_315_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_315_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_316 (
    .input_data      (systolicCore_315_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_315_next_adder_data[23:0]), //i
    .valid           (systolicCore_315_next_valid           ), //i
    .next_input_data (systolicCore_316_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_316_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_316_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_317 (
    .input_data      (systolicCore_316_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_316_next_adder_data[23:0]), //i
    .valid           (systolicCore_316_next_valid           ), //i
    .next_input_data (systolicCore_317_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_317_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_317_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_318 (
    .input_data      (systolicCore_317_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_317_next_adder_data[23:0]), //i
    .valid           (systolicCore_317_next_valid           ), //i
    .next_input_data (systolicCore_318_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_318_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_318_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_319 (
    .input_data      (systolicCore_319_input_data[23:0]     ), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (24'h0                                 ), //i
    .valid           (raw_data_3_valid                      ), //i
    .next_input_data (systolicCore_319_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_319_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_319_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_320 (
    .input_data      (systolicCore_319_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_319_next_adder_data[23:0]), //i
    .valid           (systolicCore_319_next_valid           ), //i
    .next_input_data (systolicCore_320_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_320_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_320_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_321 (
    .input_data      (systolicCore_320_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_320_next_adder_data[23:0]), //i
    .valid           (systolicCore_320_next_valid           ), //i
    .next_input_data (systolicCore_321_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_321_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_321_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_322 (
    .input_data      (systolicCore_321_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_321_next_adder_data[23:0]), //i
    .valid           (systolicCore_321_next_valid           ), //i
    .next_input_data (systolicCore_322_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_322_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_322_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_323 (
    .input_data      (systolicCore_322_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_322_next_adder_data[23:0]), //i
    .valid           (systolicCore_322_next_valid           ), //i
    .next_input_data (systolicCore_323_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_323_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_323_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_324 (
    .input_data      (systolicCore_323_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_323_next_adder_data[23:0]), //i
    .valid           (systolicCore_323_next_valid           ), //i
    .next_input_data (systolicCore_324_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_324_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_324_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_325 (
    .input_data      (systolicCore_324_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_324_next_adder_data[23:0]), //i
    .valid           (systolicCore_324_next_valid           ), //i
    .next_input_data (systolicCore_325_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_325_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_325_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_326 (
    .input_data      (systolicCore_325_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_325_next_adder_data[23:0]), //i
    .valid           (systolicCore_325_next_valid           ), //i
    .next_input_data (systolicCore_326_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_326_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_326_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_327 (
    .input_data      (systolicCore_326_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_326_next_adder_data[23:0]), //i
    .valid           (systolicCore_326_next_valid           ), //i
    .next_input_data (systolicCore_327_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_327_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_327_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_328 (
    .input_data      (systolicCore_327_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_327_next_adder_data[23:0]), //i
    .valid           (systolicCore_327_next_valid           ), //i
    .next_input_data (systolicCore_328_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_328_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_328_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_329 (
    .input_data      (systolicCore_328_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_328_next_adder_data[23:0]), //i
    .valid           (systolicCore_328_next_valid           ), //i
    .next_input_data (systolicCore_329_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_329_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_329_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_330 (
    .input_data      (systolicCore_329_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_329_next_adder_data[23:0]), //i
    .valid           (systolicCore_329_next_valid           ), //i
    .next_input_data (systolicCore_330_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_330_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_330_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_331 (
    .input_data      (systolicCore_330_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_330_next_adder_data[23:0]), //i
    .valid           (systolicCore_330_next_valid           ), //i
    .next_input_data (systolicCore_331_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_331_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_331_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_332 (
    .input_data      (systolicCore_331_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_331_next_adder_data[23:0]), //i
    .valid           (systolicCore_331_next_valid           ), //i
    .next_input_data (systolicCore_332_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_332_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_332_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_333 (
    .input_data      (systolicCore_332_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_332_next_adder_data[23:0]), //i
    .valid           (systolicCore_332_next_valid           ), //i
    .next_input_data (systolicCore_333_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_333_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_333_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_334 (
    .input_data      (systolicCore_333_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_333_next_adder_data[23:0]), //i
    .valid           (systolicCore_333_next_valid           ), //i
    .next_input_data (systolicCore_334_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_334_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_334_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_335 (
    .input_data      (systolicCore_334_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_334_next_adder_data[23:0]), //i
    .valid           (systolicCore_334_next_valid           ), //i
    .next_input_data (systolicCore_335_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_335_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_335_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_336 (
    .input_data      (systolicCore_335_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_335_next_adder_data[23:0]), //i
    .valid           (systolicCore_335_next_valid           ), //i
    .next_input_data (systolicCore_336_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_336_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_336_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_337 (
    .input_data      (systolicCore_336_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_336_next_adder_data[23:0]), //i
    .valid           (systolicCore_336_next_valid           ), //i
    .next_input_data (systolicCore_337_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_337_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_337_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_338 (
    .input_data      (systolicCore_337_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_337_next_adder_data[23:0]), //i
    .valid           (systolicCore_337_next_valid           ), //i
    .next_input_data (systolicCore_338_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_338_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_338_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_339 (
    .input_data      (systolicCore_338_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_338_next_adder_data[23:0]), //i
    .valid           (systolicCore_338_next_valid           ), //i
    .next_input_data (systolicCore_339_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_339_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_339_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_340 (
    .input_data      (systolicCore_339_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_339_next_adder_data[23:0]), //i
    .valid           (systolicCore_339_next_valid           ), //i
    .next_input_data (systolicCore_340_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_340_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_340_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_341 (
    .input_data      (systolicCore_340_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_340_next_adder_data[23:0]), //i
    .valid           (systolicCore_340_next_valid           ), //i
    .next_input_data (systolicCore_341_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_341_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_341_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_342 (
    .input_data      (systolicCore_341_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_341_next_adder_data[23:0]), //i
    .valid           (systolicCore_341_next_valid           ), //i
    .next_input_data (systolicCore_342_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_342_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_342_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_343 (
    .input_data      (systolicCore_342_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_342_next_adder_data[23:0]), //i
    .valid           (systolicCore_342_next_valid           ), //i
    .next_input_data (systolicCore_343_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_343_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_343_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_344 (
    .input_data      (systolicCore_343_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_343_next_adder_data[23:0]), //i
    .valid           (systolicCore_343_next_valid           ), //i
    .next_input_data (systolicCore_344_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_344_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_344_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_345 (
    .input_data      (systolicCore_344_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_344_next_adder_data[23:0]), //i
    .valid           (systolicCore_344_next_valid           ), //i
    .next_input_data (systolicCore_345_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_345_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_345_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_346 (
    .input_data      (systolicCore_345_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_345_next_adder_data[23:0]), //i
    .valid           (systolicCore_345_next_valid           ), //i
    .next_input_data (systolicCore_346_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_346_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_346_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_347 (
    .input_data      (systolicCore_346_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_346_next_adder_data[23:0]), //i
    .valid           (systolicCore_346_next_valid           ), //i
    .next_input_data (systolicCore_347_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_347_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_347_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_348 (
    .input_data      (systolicCore_348_input_data[23:0]     ), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (24'h0                                 ), //i
    .valid           (raw_data_4_valid                      ), //i
    .next_input_data (systolicCore_348_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_348_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_348_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_349 (
    .input_data      (systolicCore_348_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_348_next_adder_data[23:0]), //i
    .valid           (systolicCore_348_next_valid           ), //i
    .next_input_data (systolicCore_349_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_349_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_349_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_350 (
    .input_data      (systolicCore_349_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_349_next_adder_data[23:0]), //i
    .valid           (systolicCore_349_next_valid           ), //i
    .next_input_data (systolicCore_350_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_350_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_350_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_351 (
    .input_data      (systolicCore_350_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_350_next_adder_data[23:0]), //i
    .valid           (systolicCore_350_next_valid           ), //i
    .next_input_data (systolicCore_351_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_351_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_351_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_352 (
    .input_data      (systolicCore_351_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_351_next_adder_data[23:0]), //i
    .valid           (systolicCore_351_next_valid           ), //i
    .next_input_data (systolicCore_352_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_352_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_352_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_353 (
    .input_data      (systolicCore_352_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_352_next_adder_data[23:0]), //i
    .valid           (systolicCore_352_next_valid           ), //i
    .next_input_data (systolicCore_353_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_353_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_353_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_354 (
    .input_data      (systolicCore_353_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_353_next_adder_data[23:0]), //i
    .valid           (systolicCore_353_next_valid           ), //i
    .next_input_data (systolicCore_354_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_354_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_354_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_355 (
    .input_data      (systolicCore_354_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_354_next_adder_data[23:0]), //i
    .valid           (systolicCore_354_next_valid           ), //i
    .next_input_data (systolicCore_355_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_355_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_355_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_356 (
    .input_data      (systolicCore_355_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_355_next_adder_data[23:0]), //i
    .valid           (systolicCore_355_next_valid           ), //i
    .next_input_data (systolicCore_356_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_356_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_356_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_357 (
    .input_data      (systolicCore_356_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_356_next_adder_data[23:0]), //i
    .valid           (systolicCore_356_next_valid           ), //i
    .next_input_data (systolicCore_357_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_357_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_357_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_358 (
    .input_data      (systolicCore_357_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_357_next_adder_data[23:0]), //i
    .valid           (systolicCore_357_next_valid           ), //i
    .next_input_data (systolicCore_358_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_358_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_358_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_359 (
    .input_data      (systolicCore_358_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_358_next_adder_data[23:0]), //i
    .valid           (systolicCore_358_next_valid           ), //i
    .next_input_data (systolicCore_359_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_359_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_359_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_360 (
    .input_data      (systolicCore_359_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_359_next_adder_data[23:0]), //i
    .valid           (systolicCore_359_next_valid           ), //i
    .next_input_data (systolicCore_360_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_360_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_360_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_361 (
    .input_data      (systolicCore_360_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_360_next_adder_data[23:0]), //i
    .valid           (systolicCore_360_next_valid           ), //i
    .next_input_data (systolicCore_361_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_361_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_361_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_362 (
    .input_data      (systolicCore_361_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_361_next_adder_data[23:0]), //i
    .valid           (systolicCore_361_next_valid           ), //i
    .next_input_data (systolicCore_362_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_362_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_362_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_363 (
    .input_data      (systolicCore_362_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_362_next_adder_data[23:0]), //i
    .valid           (systolicCore_362_next_valid           ), //i
    .next_input_data (systolicCore_363_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_363_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_363_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_364 (
    .input_data      (systolicCore_363_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_363_next_adder_data[23:0]), //i
    .valid           (systolicCore_363_next_valid           ), //i
    .next_input_data (systolicCore_364_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_364_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_364_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_365 (
    .input_data      (systolicCore_364_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_364_next_adder_data[23:0]), //i
    .valid           (systolicCore_364_next_valid           ), //i
    .next_input_data (systolicCore_365_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_365_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_365_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_366 (
    .input_data      (systolicCore_365_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_365_next_adder_data[23:0]), //i
    .valid           (systolicCore_365_next_valid           ), //i
    .next_input_data (systolicCore_366_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_366_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_366_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_367 (
    .input_data      (systolicCore_366_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_366_next_adder_data[23:0]), //i
    .valid           (systolicCore_366_next_valid           ), //i
    .next_input_data (systolicCore_367_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_367_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_367_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_368 (
    .input_data      (systolicCore_367_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_367_next_adder_data[23:0]), //i
    .valid           (systolicCore_367_next_valid           ), //i
    .next_input_data (systolicCore_368_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_368_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_368_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_369 (
    .input_data      (systolicCore_368_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_368_next_adder_data[23:0]), //i
    .valid           (systolicCore_368_next_valid           ), //i
    .next_input_data (systolicCore_369_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_369_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_369_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_370 (
    .input_data      (systolicCore_369_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_369_next_adder_data[23:0]), //i
    .valid           (systolicCore_369_next_valid           ), //i
    .next_input_data (systolicCore_370_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_370_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_370_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_371 (
    .input_data      (systolicCore_370_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_370_next_adder_data[23:0]), //i
    .valid           (systolicCore_370_next_valid           ), //i
    .next_input_data (systolicCore_371_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_371_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_371_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_372 (
    .input_data      (systolicCore_371_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_371_next_adder_data[23:0]), //i
    .valid           (systolicCore_371_next_valid           ), //i
    .next_input_data (systolicCore_372_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_372_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_372_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_373 (
    .input_data      (systolicCore_372_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_372_next_adder_data[23:0]), //i
    .valid           (systolicCore_372_next_valid           ), //i
    .next_input_data (systolicCore_373_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_373_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_373_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_374 (
    .input_data      (systolicCore_373_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_373_next_adder_data[23:0]), //i
    .valid           (systolicCore_373_next_valid           ), //i
    .next_input_data (systolicCore_374_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_374_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_374_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_375 (
    .input_data      (systolicCore_374_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_374_next_adder_data[23:0]), //i
    .valid           (systolicCore_374_next_valid           ), //i
    .next_input_data (systolicCore_375_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_375_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_375_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_376 (
    .input_data      (systolicCore_375_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_375_next_adder_data[23:0]), //i
    .valid           (systolicCore_375_next_valid           ), //i
    .next_input_data (systolicCore_376_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_376_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_376_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_377 (
    .input_data      (systolicCore_377_input_data[23:0]     ), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (24'h0                                 ), //i
    .valid           (raw_data_5_valid                      ), //i
    .next_input_data (systolicCore_377_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_377_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_377_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_378 (
    .input_data      (systolicCore_377_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_377_next_adder_data[23:0]), //i
    .valid           (systolicCore_377_next_valid           ), //i
    .next_input_data (systolicCore_378_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_378_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_378_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_379 (
    .input_data      (systolicCore_378_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_378_next_adder_data[23:0]), //i
    .valid           (systolicCore_378_next_valid           ), //i
    .next_input_data (systolicCore_379_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_379_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_379_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_380 (
    .input_data      (systolicCore_379_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_379_next_adder_data[23:0]), //i
    .valid           (systolicCore_379_next_valid           ), //i
    .next_input_data (systolicCore_380_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_380_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_380_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_381 (
    .input_data      (systolicCore_380_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_380_next_adder_data[23:0]), //i
    .valid           (systolicCore_380_next_valid           ), //i
    .next_input_data (systolicCore_381_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_381_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_381_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_382 (
    .input_data      (systolicCore_381_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_381_next_adder_data[23:0]), //i
    .valid           (systolicCore_381_next_valid           ), //i
    .next_input_data (systolicCore_382_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_382_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_382_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_383 (
    .input_data      (systolicCore_382_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_382_next_adder_data[23:0]), //i
    .valid           (systolicCore_382_next_valid           ), //i
    .next_input_data (systolicCore_383_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_383_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_383_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_384 (
    .input_data      (systolicCore_383_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_383_next_adder_data[23:0]), //i
    .valid           (systolicCore_383_next_valid           ), //i
    .next_input_data (systolicCore_384_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_384_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_384_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_385 (
    .input_data      (systolicCore_384_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_384_next_adder_data[23:0]), //i
    .valid           (systolicCore_384_next_valid           ), //i
    .next_input_data (systolicCore_385_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_385_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_385_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_386 (
    .input_data      (systolicCore_385_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_385_next_adder_data[23:0]), //i
    .valid           (systolicCore_385_next_valid           ), //i
    .next_input_data (systolicCore_386_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_386_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_386_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_387 (
    .input_data      (systolicCore_386_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_386_next_adder_data[23:0]), //i
    .valid           (systolicCore_386_next_valid           ), //i
    .next_input_data (systolicCore_387_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_387_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_387_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_388 (
    .input_data      (systolicCore_387_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_387_next_adder_data[23:0]), //i
    .valid           (systolicCore_387_next_valid           ), //i
    .next_input_data (systolicCore_388_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_388_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_388_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_389 (
    .input_data      (systolicCore_388_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_388_next_adder_data[23:0]), //i
    .valid           (systolicCore_388_next_valid           ), //i
    .next_input_data (systolicCore_389_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_389_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_389_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_390 (
    .input_data      (systolicCore_389_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_389_next_adder_data[23:0]), //i
    .valid           (systolicCore_389_next_valid           ), //i
    .next_input_data (systolicCore_390_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_390_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_390_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_391 (
    .input_data      (systolicCore_390_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_390_next_adder_data[23:0]), //i
    .valid           (systolicCore_390_next_valid           ), //i
    .next_input_data (systolicCore_391_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_391_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_391_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_392 (
    .input_data      (systolicCore_391_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_391_next_adder_data[23:0]), //i
    .valid           (systolicCore_391_next_valid           ), //i
    .next_input_data (systolicCore_392_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_392_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_392_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_393 (
    .input_data      (systolicCore_392_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_392_next_adder_data[23:0]), //i
    .valid           (systolicCore_392_next_valid           ), //i
    .next_input_data (systolicCore_393_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_393_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_393_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_394 (
    .input_data      (systolicCore_393_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_393_next_adder_data[23:0]), //i
    .valid           (systolicCore_393_next_valid           ), //i
    .next_input_data (systolicCore_394_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_394_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_394_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_395 (
    .input_data      (systolicCore_394_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_394_next_adder_data[23:0]), //i
    .valid           (systolicCore_394_next_valid           ), //i
    .next_input_data (systolicCore_395_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_395_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_395_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_396 (
    .input_data      (systolicCore_395_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_395_next_adder_data[23:0]), //i
    .valid           (systolicCore_395_next_valid           ), //i
    .next_input_data (systolicCore_396_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_396_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_396_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_397 (
    .input_data      (systolicCore_396_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_396_next_adder_data[23:0]), //i
    .valid           (systolicCore_396_next_valid           ), //i
    .next_input_data (systolicCore_397_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_397_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_397_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_398 (
    .input_data      (systolicCore_397_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_397_next_adder_data[23:0]), //i
    .valid           (systolicCore_397_next_valid           ), //i
    .next_input_data (systolicCore_398_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_398_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_398_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_399 (
    .input_data      (systolicCore_398_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_398_next_adder_data[23:0]), //i
    .valid           (systolicCore_398_next_valid           ), //i
    .next_input_data (systolicCore_399_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_399_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_399_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_400 (
    .input_data      (systolicCore_399_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_399_next_adder_data[23:0]), //i
    .valid           (systolicCore_399_next_valid           ), //i
    .next_input_data (systolicCore_400_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_400_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_400_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_401 (
    .input_data      (systolicCore_400_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_400_next_adder_data[23:0]), //i
    .valid           (systolicCore_400_next_valid           ), //i
    .next_input_data (systolicCore_401_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_401_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_401_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_402 (
    .input_data      (systolicCore_401_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_401_next_adder_data[23:0]), //i
    .valid           (systolicCore_401_next_valid           ), //i
    .next_input_data (systolicCore_402_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_402_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_402_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_403 (
    .input_data      (systolicCore_402_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_402_next_adder_data[23:0]), //i
    .valid           (systolicCore_402_next_valid           ), //i
    .next_input_data (systolicCore_403_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_403_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_403_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_404 (
    .input_data      (systolicCore_403_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_403_next_adder_data[23:0]), //i
    .valid           (systolicCore_403_next_valid           ), //i
    .next_input_data (systolicCore_404_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_404_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_404_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_405 (
    .input_data      (systolicCore_404_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_404_next_adder_data[23:0]), //i
    .valid           (systolicCore_404_next_valid           ), //i
    .next_input_data (systolicCore_405_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_405_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_405_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_406 (
    .input_data      (systolicCore_406_input_data[23:0]     ), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (24'h0                                 ), //i
    .valid           (raw_data_6_valid                      ), //i
    .next_input_data (systolicCore_406_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_406_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_406_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_407 (
    .input_data      (systolicCore_406_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_406_next_adder_data[23:0]), //i
    .valid           (systolicCore_406_next_valid           ), //i
    .next_input_data (systolicCore_407_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_407_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_407_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_408 (
    .input_data      (systolicCore_407_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_407_next_adder_data[23:0]), //i
    .valid           (systolicCore_407_next_valid           ), //i
    .next_input_data (systolicCore_408_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_408_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_408_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_409 (
    .input_data      (systolicCore_408_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_408_next_adder_data[23:0]), //i
    .valid           (systolicCore_408_next_valid           ), //i
    .next_input_data (systolicCore_409_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_409_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_409_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_410 (
    .input_data      (systolicCore_409_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_409_next_adder_data[23:0]), //i
    .valid           (systolicCore_409_next_valid           ), //i
    .next_input_data (systolicCore_410_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_410_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_410_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_411 (
    .input_data      (systolicCore_410_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_410_next_adder_data[23:0]), //i
    .valid           (systolicCore_410_next_valid           ), //i
    .next_input_data (systolicCore_411_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_411_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_411_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_412 (
    .input_data      (systolicCore_411_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_411_next_adder_data[23:0]), //i
    .valid           (systolicCore_411_next_valid           ), //i
    .next_input_data (systolicCore_412_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_412_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_412_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_413 (
    .input_data      (systolicCore_412_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_412_next_adder_data[23:0]), //i
    .valid           (systolicCore_412_next_valid           ), //i
    .next_input_data (systolicCore_413_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_413_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_413_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_414 (
    .input_data      (systolicCore_413_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_413_next_adder_data[23:0]), //i
    .valid           (systolicCore_413_next_valid           ), //i
    .next_input_data (systolicCore_414_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_414_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_414_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_415 (
    .input_data      (systolicCore_414_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_414_next_adder_data[23:0]), //i
    .valid           (systolicCore_414_next_valid           ), //i
    .next_input_data (systolicCore_415_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_415_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_415_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_416 (
    .input_data      (systolicCore_415_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_415_next_adder_data[23:0]), //i
    .valid           (systolicCore_415_next_valid           ), //i
    .next_input_data (systolicCore_416_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_416_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_416_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_417 (
    .input_data      (systolicCore_416_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_416_next_adder_data[23:0]), //i
    .valid           (systolicCore_416_next_valid           ), //i
    .next_input_data (systolicCore_417_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_417_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_417_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_418 (
    .input_data      (systolicCore_417_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_417_next_adder_data[23:0]), //i
    .valid           (systolicCore_417_next_valid           ), //i
    .next_input_data (systolicCore_418_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_418_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_418_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_419 (
    .input_data      (systolicCore_418_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_418_next_adder_data[23:0]), //i
    .valid           (systolicCore_418_next_valid           ), //i
    .next_input_data (systolicCore_419_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_419_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_419_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_420 (
    .input_data      (systolicCore_419_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_419_next_adder_data[23:0]), //i
    .valid           (systolicCore_419_next_valid           ), //i
    .next_input_data (systolicCore_420_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_420_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_420_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_421 (
    .input_data      (systolicCore_420_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_420_next_adder_data[23:0]), //i
    .valid           (systolicCore_420_next_valid           ), //i
    .next_input_data (systolicCore_421_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_421_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_421_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_422 (
    .input_data      (systolicCore_421_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_421_next_adder_data[23:0]), //i
    .valid           (systolicCore_421_next_valid           ), //i
    .next_input_data (systolicCore_422_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_422_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_422_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_423 (
    .input_data      (systolicCore_422_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_422_next_adder_data[23:0]), //i
    .valid           (systolicCore_422_next_valid           ), //i
    .next_input_data (systolicCore_423_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_423_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_423_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_424 (
    .input_data      (systolicCore_423_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_423_next_adder_data[23:0]), //i
    .valid           (systolicCore_423_next_valid           ), //i
    .next_input_data (systolicCore_424_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_424_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_424_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_425 (
    .input_data      (systolicCore_424_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_424_next_adder_data[23:0]), //i
    .valid           (systolicCore_424_next_valid           ), //i
    .next_input_data (systolicCore_425_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_425_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_425_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_426 (
    .input_data      (systolicCore_425_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_425_next_adder_data[23:0]), //i
    .valid           (systolicCore_425_next_valid           ), //i
    .next_input_data (systolicCore_426_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_426_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_426_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_427 (
    .input_data      (systolicCore_426_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_426_next_adder_data[23:0]), //i
    .valid           (systolicCore_426_next_valid           ), //i
    .next_input_data (systolicCore_427_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_427_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_427_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_428 (
    .input_data      (systolicCore_427_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_427_next_adder_data[23:0]), //i
    .valid           (systolicCore_427_next_valid           ), //i
    .next_input_data (systolicCore_428_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_428_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_428_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_429 (
    .input_data      (systolicCore_428_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_428_next_adder_data[23:0]), //i
    .valid           (systolicCore_428_next_valid           ), //i
    .next_input_data (systolicCore_429_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_429_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_429_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_430 (
    .input_data      (systolicCore_429_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_429_next_adder_data[23:0]), //i
    .valid           (systolicCore_429_next_valid           ), //i
    .next_input_data (systolicCore_430_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_430_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_430_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_431 (
    .input_data      (systolicCore_430_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_430_next_adder_data[23:0]), //i
    .valid           (systolicCore_430_next_valid           ), //i
    .next_input_data (systolicCore_431_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_431_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_431_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_432 (
    .input_data      (systolicCore_431_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_431_next_adder_data[23:0]), //i
    .valid           (systolicCore_431_next_valid           ), //i
    .next_input_data (systolicCore_432_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_432_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_432_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_433 (
    .input_data      (systolicCore_432_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_432_next_adder_data[23:0]), //i
    .valid           (systolicCore_432_next_valid           ), //i
    .next_input_data (systolicCore_433_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_433_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_433_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_434 (
    .input_data      (systolicCore_433_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_433_next_adder_data[23:0]), //i
    .valid           (systolicCore_433_next_valid           ), //i
    .next_input_data (systolicCore_434_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_434_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_434_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_435 (
    .input_data      (systolicCore_435_input_data[23:0]     ), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (24'h0                                 ), //i
    .valid           (raw_data_7_valid                      ), //i
    .next_input_data (systolicCore_435_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_435_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_435_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_436 (
    .input_data      (systolicCore_435_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_435_next_adder_data[23:0]), //i
    .valid           (systolicCore_435_next_valid           ), //i
    .next_input_data (systolicCore_436_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_436_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_436_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_437 (
    .input_data      (systolicCore_436_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_436_next_adder_data[23:0]), //i
    .valid           (systolicCore_436_next_valid           ), //i
    .next_input_data (systolicCore_437_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_437_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_437_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_438 (
    .input_data      (systolicCore_437_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_437_next_adder_data[23:0]), //i
    .valid           (systolicCore_437_next_valid           ), //i
    .next_input_data (systolicCore_438_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_438_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_438_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_439 (
    .input_data      (systolicCore_438_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_438_next_adder_data[23:0]), //i
    .valid           (systolicCore_438_next_valid           ), //i
    .next_input_data (systolicCore_439_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_439_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_439_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_440 (
    .input_data      (systolicCore_439_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_439_next_adder_data[23:0]), //i
    .valid           (systolicCore_439_next_valid           ), //i
    .next_input_data (systolicCore_440_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_440_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_440_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_441 (
    .input_data      (systolicCore_440_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_440_next_adder_data[23:0]), //i
    .valid           (systolicCore_440_next_valid           ), //i
    .next_input_data (systolicCore_441_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_441_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_441_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_442 (
    .input_data      (systolicCore_441_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_441_next_adder_data[23:0]), //i
    .valid           (systolicCore_441_next_valid           ), //i
    .next_input_data (systolicCore_442_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_442_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_442_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_443 (
    .input_data      (systolicCore_442_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_442_next_adder_data[23:0]), //i
    .valid           (systolicCore_442_next_valid           ), //i
    .next_input_data (systolicCore_443_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_443_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_443_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_444 (
    .input_data      (systolicCore_443_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_443_next_adder_data[23:0]), //i
    .valid           (systolicCore_443_next_valid           ), //i
    .next_input_data (systolicCore_444_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_444_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_444_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_445 (
    .input_data      (systolicCore_444_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_444_next_adder_data[23:0]), //i
    .valid           (systolicCore_444_next_valid           ), //i
    .next_input_data (systolicCore_445_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_445_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_445_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_446 (
    .input_data      (systolicCore_445_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_445_next_adder_data[23:0]), //i
    .valid           (systolicCore_445_next_valid           ), //i
    .next_input_data (systolicCore_446_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_446_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_446_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_447 (
    .input_data      (systolicCore_446_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_446_next_adder_data[23:0]), //i
    .valid           (systolicCore_446_next_valid           ), //i
    .next_input_data (systolicCore_447_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_447_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_447_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_448 (
    .input_data      (systolicCore_447_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_447_next_adder_data[23:0]), //i
    .valid           (systolicCore_447_next_valid           ), //i
    .next_input_data (systolicCore_448_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_448_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_448_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_449 (
    .input_data      (systolicCore_448_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_448_next_adder_data[23:0]), //i
    .valid           (systolicCore_448_next_valid           ), //i
    .next_input_data (systolicCore_449_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_449_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_449_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_450 (
    .input_data      (systolicCore_449_next_input_data[23:0]), //i
    .coff_data       (6'h17                                 ), //i
    .adder_data      (systolicCore_449_next_adder_data[23:0]), //i
    .valid           (systolicCore_449_next_valid           ), //i
    .next_input_data (systolicCore_450_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_450_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_450_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_451 (
    .input_data      (systolicCore_450_next_input_data[23:0]), //i
    .coff_data       (6'h15                                 ), //i
    .adder_data      (systolicCore_450_next_adder_data[23:0]), //i
    .valid           (systolicCore_450_next_valid           ), //i
    .next_input_data (systolicCore_451_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_451_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_451_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_452 (
    .input_data      (systolicCore_451_next_input_data[23:0]), //i
    .coff_data       (6'h13                                 ), //i
    .adder_data      (systolicCore_451_next_adder_data[23:0]), //i
    .valid           (systolicCore_451_next_valid           ), //i
    .next_input_data (systolicCore_452_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_452_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_452_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_453 (
    .input_data      (systolicCore_452_next_input_data[23:0]), //i
    .coff_data       (6'h10                                 ), //i
    .adder_data      (systolicCore_452_next_adder_data[23:0]), //i
    .valid           (systolicCore_452_next_valid           ), //i
    .next_input_data (systolicCore_453_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_453_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_453_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_454 (
    .input_data      (systolicCore_453_next_input_data[23:0]), //i
    .coff_data       (6'h0d                                 ), //i
    .adder_data      (systolicCore_453_next_adder_data[23:0]), //i
    .valid           (systolicCore_453_next_valid           ), //i
    .next_input_data (systolicCore_454_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_454_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_454_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_455 (
    .input_data      (systolicCore_454_next_input_data[23:0]), //i
    .coff_data       (6'h0a                                 ), //i
    .adder_data      (systolicCore_454_next_adder_data[23:0]), //i
    .valid           (systolicCore_454_next_valid           ), //i
    .next_input_data (systolicCore_455_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_455_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_455_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_456 (
    .input_data      (systolicCore_455_next_input_data[23:0]), //i
    .coff_data       (6'h07                                 ), //i
    .adder_data      (systolicCore_455_next_adder_data[23:0]), //i
    .valid           (systolicCore_455_next_valid           ), //i
    .next_input_data (systolicCore_456_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_456_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_456_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_457 (
    .input_data      (systolicCore_456_next_input_data[23:0]), //i
    .coff_data       (6'h05                                 ), //i
    .adder_data      (systolicCore_456_next_adder_data[23:0]), //i
    .valid           (systolicCore_456_next_valid           ), //i
    .next_input_data (systolicCore_457_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_457_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_457_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_458 (
    .input_data      (systolicCore_457_next_input_data[23:0]), //i
    .coff_data       (6'h03                                 ), //i
    .adder_data      (systolicCore_457_next_adder_data[23:0]), //i
    .valid           (systolicCore_457_next_valid           ), //i
    .next_input_data (systolicCore_458_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_458_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_458_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_459 (
    .input_data      (systolicCore_458_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_458_next_adder_data[23:0]), //i
    .valid           (systolicCore_458_next_valid           ), //i
    .next_input_data (systolicCore_459_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_459_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_459_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_460 (
    .input_data      (systolicCore_459_next_input_data[23:0]), //i
    .coff_data       (6'h01                                 ), //i
    .adder_data      (systolicCore_459_next_adder_data[23:0]), //i
    .valid           (systolicCore_459_next_valid           ), //i
    .next_input_data (systolicCore_460_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_460_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_460_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_461 (
    .input_data      (systolicCore_460_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_460_next_adder_data[23:0]), //i
    .valid           (systolicCore_460_next_valid           ), //i
    .next_input_data (systolicCore_461_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_461_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_461_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_462 (
    .input_data      (systolicCore_461_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_461_next_adder_data[23:0]), //i
    .valid           (systolicCore_461_next_valid           ), //i
    .next_input_data (systolicCore_462_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_462_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_462_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  SystolicCore systolicCore_463 (
    .input_data      (systolicCore_462_next_input_data[23:0]), //i
    .coff_data       (6'h0                                  ), //i
    .adder_data      (systolicCore_462_next_adder_data[23:0]), //i
    .valid           (systolicCore_462_next_valid           ), //i
    .next_input_data (systolicCore_463_next_input_data[23:0]), //o
    .next_adder_data (systolicCore_463_next_adder_data[23:0]), //o
    .next_valid      (systolicCore_463_next_valid           ), //o
    .clk             (clk                                   ), //i
    .resetn          (resetn                                )  //i
  );
  assign systolicCore_232_input_data = {{8{raw_data_0_payload[15]}}, raw_data_0_payload};
  assign filtered_data_0_payload = systolicCore_260_next_adder_data;
  assign filtered_data_0_valid = systolicCore_260_next_valid;
  assign systolicCore_261_input_data = {{8{raw_data_1_payload[15]}}, raw_data_1_payload};
  assign filtered_data_1_payload = systolicCore_289_next_adder_data;
  assign filtered_data_1_valid = systolicCore_289_next_valid;
  assign systolicCore_290_input_data = {{8{raw_data_2_payload[15]}}, raw_data_2_payload};
  assign filtered_data_2_payload = systolicCore_318_next_adder_data;
  assign filtered_data_2_valid = systolicCore_318_next_valid;
  assign systolicCore_319_input_data = {{8{raw_data_3_payload[15]}}, raw_data_3_payload};
  assign filtered_data_3_payload = systolicCore_347_next_adder_data;
  assign filtered_data_3_valid = systolicCore_347_next_valid;
  assign systolicCore_348_input_data = {{8{raw_data_4_payload[15]}}, raw_data_4_payload};
  assign filtered_data_4_payload = systolicCore_376_next_adder_data;
  assign filtered_data_4_valid = systolicCore_376_next_valid;
  assign systolicCore_377_input_data = {{8{raw_data_5_payload[15]}}, raw_data_5_payload};
  assign filtered_data_5_payload = systolicCore_405_next_adder_data;
  assign filtered_data_5_valid = systolicCore_405_next_valid;
  assign systolicCore_406_input_data = {{8{raw_data_6_payload[15]}}, raw_data_6_payload};
  assign filtered_data_6_payload = systolicCore_434_next_adder_data;
  assign filtered_data_6_valid = systolicCore_434_next_valid;
  assign systolicCore_435_input_data = {{8{raw_data_7_payload[15]}}, raw_data_7_payload};
  assign filtered_data_7_payload = systolicCore_463_next_adder_data;
  assign filtered_data_7_valid = systolicCore_463_next_valid;

endmodule

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

module SystolicCore (
  input      [23:0]   input_data,
  input      [5:0]    coff_data,
  input      [23:0]   adder_data,
  input               valid,
  output     [23:0]   next_input_data,
  output     [23:0]   next_adder_data,
  output              next_valid,
  input               clk,
  input               resetn
);

  wire       [23:0]   shiftRegister_232_output_1;
  wire       [29:0]   _zz_next_adder;
  reg        [29:0]   mult;
  reg        [29:0]   next_adder;
  reg                 valid_regNext;

  assign _zz_next_adder = {{6{adder_data[23]}}, adder_data};
  ShiftRegister shiftRegister_232 (
    .input_1  (input_data[23:0]                ), //i
    .output_1 (shiftRegister_232_output_1[23:0]), //o
    .enable   (valid                           ), //i
    .clk      (clk                             ), //i
    .resetn   (resetn                          )  //i
  );
  assign next_valid = valid_regNext;
  assign next_input_data = shiftRegister_232_output_1;
  assign next_adder_data = next_adder[23:0];
  always @(posedge clk) begin
    if(!resetn) begin
      mult <= 30'h0;
      next_adder <= 30'h0;
      valid_regNext <= 1'b0;
    end else begin
      if(valid) begin
        mult <= ($signed(coff_data) * $signed(shiftRegister_232_output_1));
      end
      if(valid) begin
        next_adder <= ($signed(mult) + $signed(_zz_next_adder));
      end
      valid_regNext <= valid;
    end
  end


endmodule

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

module ShiftRegister (
  input      [23:0]   input_1,
  output     [23:0]   output_1,
  input               enable,
  input               clk,
  input               resetn
);

  reg        [23:0]   shift_reg_0;
  reg        [23:0]   shift_reg_1;

  assign output_1 = shift_reg_1;
  always @(posedge clk) begin
    if(!resetn) begin
      shift_reg_0 <= 24'h0;
      shift_reg_1 <= 24'h0;
    end else begin
      if(enable) begin
        shift_reg_0 <= input_1;
        shift_reg_1 <= shift_reg_0;
      end
    end
  end


endmodule
