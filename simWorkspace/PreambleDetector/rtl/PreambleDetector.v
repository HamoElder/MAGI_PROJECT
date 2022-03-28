// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : PreambleDetector
// Git hash  : 41d71cf9ab449e73a475f6b0f32b020b0dbe98fe



module PreambleDetector (
  input      [23:0]   gate_threshold,
  output              pkg_detected,
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              raw_data_out_valid,
  output     [11:0]   raw_data_out_payload_cha_i,
  output     [11:0]   raw_data_out_payload_cha_q,
  output              corr_result_valid,
  output     [23:0]   corr_result_payload_cha_i,
  output     [23:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);
  wire                autoCorrelator_1_corr_result_valid;
  wire       [23:0]   autoCorrelator_1_corr_result_payload_cha_i;
  wire       [23:0]   autoCorrelator_1_corr_result_payload_cha_q;
  wire       [23:0]   _zz_prod_avg_mag;
  wire       [23:0]   _zz_prod_avg_mag_1;
  wire       [23:0]   _zz_prod_avg_mag_2;
  wire       [23:0]   _zz_prod_avg_mag_3;
  wire       [0:0]    _zz_prod_avg_mag_4;
  wire       [23:0]   _zz_prod_avg_mag_5;
  wire       [23:0]   _zz_prod_avg_mag_6;
  wire       [23:0]   _zz_prod_avg_mag_7;
  wire       [23:0]   _zz_prod_avg_mag_8;
  wire       [0:0]    _zz_prod_avg_mag_9;
  reg                 gate_pkg_det;
  reg        [23:0]   prod_avg_mag;

  assign _zz_prod_avg_mag = (_zz_prod_avg_mag_1 + _zz_prod_avg_mag_3);
  assign _zz_prod_avg_mag_1 = (autoCorrelator_1_corr_result_payload_cha_i[23] ? _zz_prod_avg_mag_2 : autoCorrelator_1_corr_result_payload_cha_i);
  assign _zz_prod_avg_mag_2 = (~ autoCorrelator_1_corr_result_payload_cha_i);
  assign _zz_prod_avg_mag_4 = autoCorrelator_1_corr_result_payload_cha_i[23];
  assign _zz_prod_avg_mag_3 = {23'd0, _zz_prod_avg_mag_4};
  assign _zz_prod_avg_mag_5 = (_zz_prod_avg_mag_6 + _zz_prod_avg_mag_8);
  assign _zz_prod_avg_mag_6 = (autoCorrelator_1_corr_result_payload_cha_q[23] ? _zz_prod_avg_mag_7 : autoCorrelator_1_corr_result_payload_cha_q);
  assign _zz_prod_avg_mag_7 = (~ autoCorrelator_1_corr_result_payload_cha_q);
  assign _zz_prod_avg_mag_9 = autoCorrelator_1_corr_result_payload_cha_q[23];
  assign _zz_prod_avg_mag_8 = {23'd0, _zz_prod_avg_mag_9};
  AutoCorrelator autoCorrelator_1 (
    .raw_data_valid               (raw_data_valid                              ), //i
    .raw_data_payload_cha_i       (raw_data_payload_cha_i                      ), //i
    .raw_data_payload_cha_q       (raw_data_payload_cha_q                      ), //i
    .corr_result_valid            (autoCorrelator_1_corr_result_valid          ), //o
    .corr_result_payload_cha_i    (autoCorrelator_1_corr_result_payload_cha_i  ), //o
    .corr_result_payload_cha_q    (autoCorrelator_1_corr_result_payload_cha_q  ), //o
    .clk                          (clk                                         ), //i
    .reset                        (reset                                       )  //i
  );
  assign raw_data_out_valid = raw_data_valid;
  assign raw_data_out_payload_cha_i = raw_data_payload_cha_i;
  assign raw_data_out_payload_cha_q = raw_data_payload_cha_q;
  assign corr_result_valid = autoCorrelator_1_corr_result_valid;
  assign corr_result_payload_cha_i = autoCorrelator_1_corr_result_payload_cha_i;
  assign corr_result_payload_cha_q = autoCorrelator_1_corr_result_payload_cha_q;
  assign pkg_detected = gate_pkg_det;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      gate_pkg_det <= 1'b0;
      prod_avg_mag <= 24'h0;
    end else begin
      gate_pkg_det <= (gate_threshold < prod_avg_mag);
      if(autoCorrelator_1_corr_result_valid) begin
        prod_avg_mag <= (_zz_prod_avg_mag + _zz_prod_avg_mag_5);
      end else begin
        prod_avg_mag <= 24'h0;
      end
    end
  end


endmodule

module AutoCorrelator (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              corr_result_valid,
  output     [23:0]   corr_result_payload_cha_i,
  output     [23:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);
  wire                shiftRegister_3_output_valid;
  wire       [11:0]   shiftRegister_3_output_payload_cha_i;
  wire       [11:0]   shiftRegister_3_output_payload_cha_q;
  wire                corr_core_corr_result_valid;
  wire       [23:0]   corr_core_corr_result_payload_cha_i;
  wire       [23:0]   corr_core_corr_result_payload_cha_q;

  ShiftRegister_2 shiftRegister_3 (
    .input_valid             (raw_data_valid                        ), //i
    .input_payload_cha_i     (raw_data_payload_cha_i                ), //i
    .input_payload_cha_q     (raw_data_payload_cha_q                ), //i
    .output_valid            (shiftRegister_3_output_valid          ), //o
    .output_payload_cha_i    (shiftRegister_3_output_payload_cha_i  ), //o
    .output_payload_cha_q    (shiftRegister_3_output_payload_cha_q  ), //o
    .enable                  (raw_data_valid                        ), //i
    .clk                     (clk                                   ), //i
    .reset                   (reset                                 )  //i
  );
  Correlator corr_core (
    .raw_data_0_valid             (raw_data_valid                        ), //i
    .raw_data_0_payload_cha_i     (raw_data_payload_cha_i                ), //i
    .raw_data_0_payload_cha_q     (raw_data_payload_cha_q                ), //i
    .raw_data_1_valid             (shiftRegister_3_output_valid          ), //i
    .raw_data_1_payload_cha_i     (shiftRegister_3_output_payload_cha_i  ), //i
    .raw_data_1_payload_cha_q     (shiftRegister_3_output_payload_cha_q  ), //i
    .corr_result_valid            (corr_core_corr_result_valid           ), //o
    .corr_result_payload_cha_i    (corr_core_corr_result_payload_cha_i   ), //o
    .corr_result_payload_cha_q    (corr_core_corr_result_payload_cha_q   ), //o
    .clk                          (clk                                   ), //i
    .reset                        (reset                                 )  //i
  );
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
  output     [23:0]   corr_result_payload_cha_i,
  output     [23:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);
  wire       [23:0]   shiftRegister_3_output_1;
  wire       [23:0]   shiftRegister_4_output_1;
  wire       [11:0]   _zz_k1;
  wire       [11:0]   _zz_k2;
  wire       [11:0]   _zz_k3;
  wire       [23:0]   _zz_corr_val_i;
  wire       [23:0]   _zz_corr_val_q;
  reg        [23:0]   corr_val_i;
  reg        [23:0]   corr_val_q;
  wire       [23:0]   k1;
  wire       [23:0]   k2;
  wire       [23:0]   k3;
  reg        [23:0]   mul_i;
  reg        [23:0]   mul_q;
  reg                 mul_data_valid;
  reg                 corr_result_valid_1;

  assign _zz_k1 = ($signed(raw_data_0_payload_cha_i) + $signed(raw_data_0_payload_cha_q));
  assign _zz_k2 = ($signed(raw_data_1_payload_cha_q) + $signed(raw_data_1_payload_cha_i));
  assign _zz_k3 = ($signed(raw_data_1_payload_cha_i) - $signed(raw_data_1_payload_cha_q));
  assign _zz_corr_val_i = ($signed(corr_val_i) - $signed(shiftRegister_3_output_1));
  assign _zz_corr_val_q = ($signed(corr_val_q) - $signed(shiftRegister_4_output_1));
  ShiftRegister shiftRegister_3 (
    .input_1     (mul_i                     ), //i
    .output_1    (shiftRegister_3_output_1  ), //o
    .enable      (mul_data_valid            ), //i
    .clk         (clk                       ), //i
    .reset       (reset                     )  //i
  );
  ShiftRegister shiftRegister_4 (
    .input_1     (mul_q                     ), //i
    .output_1    (shiftRegister_4_output_1  ), //o
    .enable      (mul_data_valid            ), //i
    .clk         (clk                       ), //i
    .reset       (reset                     )  //i
  );
  assign k1 = ($signed(raw_data_1_payload_cha_i) * $signed(_zz_k1));
  assign k2 = ($signed(raw_data_0_payload_cha_i) * $signed(_zz_k2));
  assign k3 = ($signed(raw_data_0_payload_cha_q) * $signed(_zz_k3));
  assign corr_result_payload_cha_i = corr_val_i;
  assign corr_result_payload_cha_q = corr_val_q;
  assign corr_result_valid = corr_result_valid_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      corr_val_i <= 24'h0;
      corr_val_q <= 24'h0;
      mul_i <= 24'h0;
      mul_q <= 24'h0;
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

module ShiftRegister_2 (
  input               input_valid,
  input      [11:0]   input_payload_cha_i,
  input      [11:0]   input_payload_cha_q,
  output              output_valid,
  output     [11:0]   output_payload_cha_i,
  output     [11:0]   output_payload_cha_q,
  input               enable,
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
  reg                 shift_reg_32_valid;
  reg        [11:0]   shift_reg_32_payload_cha_i;
  reg        [11:0]   shift_reg_32_payload_cha_q;
  reg                 shift_reg_33_valid;
  reg        [11:0]   shift_reg_33_payload_cha_i;
  reg        [11:0]   shift_reg_33_payload_cha_q;
  reg                 shift_reg_34_valid;
  reg        [11:0]   shift_reg_34_payload_cha_i;
  reg        [11:0]   shift_reg_34_payload_cha_q;
  reg                 shift_reg_35_valid;
  reg        [11:0]   shift_reg_35_payload_cha_i;
  reg        [11:0]   shift_reg_35_payload_cha_q;
  reg                 shift_reg_36_valid;
  reg        [11:0]   shift_reg_36_payload_cha_i;
  reg        [11:0]   shift_reg_36_payload_cha_q;
  reg                 shift_reg_37_valid;
  reg        [11:0]   shift_reg_37_payload_cha_i;
  reg        [11:0]   shift_reg_37_payload_cha_q;
  reg                 shift_reg_38_valid;
  reg        [11:0]   shift_reg_38_payload_cha_i;
  reg        [11:0]   shift_reg_38_payload_cha_q;
  reg                 shift_reg_39_valid;
  reg        [11:0]   shift_reg_39_payload_cha_i;
  reg        [11:0]   shift_reg_39_payload_cha_q;
  reg                 shift_reg_40_valid;
  reg        [11:0]   shift_reg_40_payload_cha_i;
  reg        [11:0]   shift_reg_40_payload_cha_q;
  reg                 shift_reg_41_valid;
  reg        [11:0]   shift_reg_41_payload_cha_i;
  reg        [11:0]   shift_reg_41_payload_cha_q;
  reg                 shift_reg_42_valid;
  reg        [11:0]   shift_reg_42_payload_cha_i;
  reg        [11:0]   shift_reg_42_payload_cha_q;
  reg                 shift_reg_43_valid;
  reg        [11:0]   shift_reg_43_payload_cha_i;
  reg        [11:0]   shift_reg_43_payload_cha_q;
  reg                 shift_reg_44_valid;
  reg        [11:0]   shift_reg_44_payload_cha_i;
  reg        [11:0]   shift_reg_44_payload_cha_q;
  reg                 shift_reg_45_valid;
  reg        [11:0]   shift_reg_45_payload_cha_i;
  reg        [11:0]   shift_reg_45_payload_cha_q;
  reg                 shift_reg_46_valid;
  reg        [11:0]   shift_reg_46_payload_cha_i;
  reg        [11:0]   shift_reg_46_payload_cha_q;
  reg                 shift_reg_47_valid;
  reg        [11:0]   shift_reg_47_payload_cha_i;
  reg        [11:0]   shift_reg_47_payload_cha_q;
  reg                 shift_reg_48_valid;
  reg        [11:0]   shift_reg_48_payload_cha_i;
  reg        [11:0]   shift_reg_48_payload_cha_q;
  reg                 shift_reg_49_valid;
  reg        [11:0]   shift_reg_49_payload_cha_i;
  reg        [11:0]   shift_reg_49_payload_cha_q;
  reg                 shift_reg_50_valid;
  reg        [11:0]   shift_reg_50_payload_cha_i;
  reg        [11:0]   shift_reg_50_payload_cha_q;
  reg                 shift_reg_51_valid;
  reg        [11:0]   shift_reg_51_payload_cha_i;
  reg        [11:0]   shift_reg_51_payload_cha_q;
  reg                 shift_reg_52_valid;
  reg        [11:0]   shift_reg_52_payload_cha_i;
  reg        [11:0]   shift_reg_52_payload_cha_q;
  reg                 shift_reg_53_valid;
  reg        [11:0]   shift_reg_53_payload_cha_i;
  reg        [11:0]   shift_reg_53_payload_cha_q;
  reg                 shift_reg_54_valid;
  reg        [11:0]   shift_reg_54_payload_cha_i;
  reg        [11:0]   shift_reg_54_payload_cha_q;
  reg                 shift_reg_55_valid;
  reg        [11:0]   shift_reg_55_payload_cha_i;
  reg        [11:0]   shift_reg_55_payload_cha_q;
  reg                 shift_reg_56_valid;
  reg        [11:0]   shift_reg_56_payload_cha_i;
  reg        [11:0]   shift_reg_56_payload_cha_q;
  reg                 shift_reg_57_valid;
  reg        [11:0]   shift_reg_57_payload_cha_i;
  reg        [11:0]   shift_reg_57_payload_cha_q;
  reg                 shift_reg_58_valid;
  reg        [11:0]   shift_reg_58_payload_cha_i;
  reg        [11:0]   shift_reg_58_payload_cha_q;
  reg                 shift_reg_59_valid;
  reg        [11:0]   shift_reg_59_payload_cha_i;
  reg        [11:0]   shift_reg_59_payload_cha_q;
  reg                 shift_reg_60_valid;
  reg        [11:0]   shift_reg_60_payload_cha_i;
  reg        [11:0]   shift_reg_60_payload_cha_q;
  reg                 shift_reg_61_valid;
  reg        [11:0]   shift_reg_61_payload_cha_i;
  reg        [11:0]   shift_reg_61_payload_cha_q;
  reg                 shift_reg_62_valid;
  reg        [11:0]   shift_reg_62_payload_cha_i;
  reg        [11:0]   shift_reg_62_payload_cha_q;
  reg                 shift_reg_63_valid;
  reg        [11:0]   shift_reg_63_payload_cha_i;
  reg        [11:0]   shift_reg_63_payload_cha_q;

  assign output_valid = shift_reg_63_valid;
  assign output_payload_cha_i = shift_reg_63_payload_cha_i;
  assign output_payload_cha_q = shift_reg_63_payload_cha_q;
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
      shift_reg_32_valid <= 1'b0;
      shift_reg_32_payload_cha_i <= 12'h0;
      shift_reg_32_payload_cha_q <= 12'h0;
      shift_reg_33_valid <= 1'b0;
      shift_reg_33_payload_cha_i <= 12'h0;
      shift_reg_33_payload_cha_q <= 12'h0;
      shift_reg_34_valid <= 1'b0;
      shift_reg_34_payload_cha_i <= 12'h0;
      shift_reg_34_payload_cha_q <= 12'h0;
      shift_reg_35_valid <= 1'b0;
      shift_reg_35_payload_cha_i <= 12'h0;
      shift_reg_35_payload_cha_q <= 12'h0;
      shift_reg_36_valid <= 1'b0;
      shift_reg_36_payload_cha_i <= 12'h0;
      shift_reg_36_payload_cha_q <= 12'h0;
      shift_reg_37_valid <= 1'b0;
      shift_reg_37_payload_cha_i <= 12'h0;
      shift_reg_37_payload_cha_q <= 12'h0;
      shift_reg_38_valid <= 1'b0;
      shift_reg_38_payload_cha_i <= 12'h0;
      shift_reg_38_payload_cha_q <= 12'h0;
      shift_reg_39_valid <= 1'b0;
      shift_reg_39_payload_cha_i <= 12'h0;
      shift_reg_39_payload_cha_q <= 12'h0;
      shift_reg_40_valid <= 1'b0;
      shift_reg_40_payload_cha_i <= 12'h0;
      shift_reg_40_payload_cha_q <= 12'h0;
      shift_reg_41_valid <= 1'b0;
      shift_reg_41_payload_cha_i <= 12'h0;
      shift_reg_41_payload_cha_q <= 12'h0;
      shift_reg_42_valid <= 1'b0;
      shift_reg_42_payload_cha_i <= 12'h0;
      shift_reg_42_payload_cha_q <= 12'h0;
      shift_reg_43_valid <= 1'b0;
      shift_reg_43_payload_cha_i <= 12'h0;
      shift_reg_43_payload_cha_q <= 12'h0;
      shift_reg_44_valid <= 1'b0;
      shift_reg_44_payload_cha_i <= 12'h0;
      shift_reg_44_payload_cha_q <= 12'h0;
      shift_reg_45_valid <= 1'b0;
      shift_reg_45_payload_cha_i <= 12'h0;
      shift_reg_45_payload_cha_q <= 12'h0;
      shift_reg_46_valid <= 1'b0;
      shift_reg_46_payload_cha_i <= 12'h0;
      shift_reg_46_payload_cha_q <= 12'h0;
      shift_reg_47_valid <= 1'b0;
      shift_reg_47_payload_cha_i <= 12'h0;
      shift_reg_47_payload_cha_q <= 12'h0;
      shift_reg_48_valid <= 1'b0;
      shift_reg_48_payload_cha_i <= 12'h0;
      shift_reg_48_payload_cha_q <= 12'h0;
      shift_reg_49_valid <= 1'b0;
      shift_reg_49_payload_cha_i <= 12'h0;
      shift_reg_49_payload_cha_q <= 12'h0;
      shift_reg_50_valid <= 1'b0;
      shift_reg_50_payload_cha_i <= 12'h0;
      shift_reg_50_payload_cha_q <= 12'h0;
      shift_reg_51_valid <= 1'b0;
      shift_reg_51_payload_cha_i <= 12'h0;
      shift_reg_51_payload_cha_q <= 12'h0;
      shift_reg_52_valid <= 1'b0;
      shift_reg_52_payload_cha_i <= 12'h0;
      shift_reg_52_payload_cha_q <= 12'h0;
      shift_reg_53_valid <= 1'b0;
      shift_reg_53_payload_cha_i <= 12'h0;
      shift_reg_53_payload_cha_q <= 12'h0;
      shift_reg_54_valid <= 1'b0;
      shift_reg_54_payload_cha_i <= 12'h0;
      shift_reg_54_payload_cha_q <= 12'h0;
      shift_reg_55_valid <= 1'b0;
      shift_reg_55_payload_cha_i <= 12'h0;
      shift_reg_55_payload_cha_q <= 12'h0;
      shift_reg_56_valid <= 1'b0;
      shift_reg_56_payload_cha_i <= 12'h0;
      shift_reg_56_payload_cha_q <= 12'h0;
      shift_reg_57_valid <= 1'b0;
      shift_reg_57_payload_cha_i <= 12'h0;
      shift_reg_57_payload_cha_q <= 12'h0;
      shift_reg_58_valid <= 1'b0;
      shift_reg_58_payload_cha_i <= 12'h0;
      shift_reg_58_payload_cha_q <= 12'h0;
      shift_reg_59_valid <= 1'b0;
      shift_reg_59_payload_cha_i <= 12'h0;
      shift_reg_59_payload_cha_q <= 12'h0;
      shift_reg_60_valid <= 1'b0;
      shift_reg_60_payload_cha_i <= 12'h0;
      shift_reg_60_payload_cha_q <= 12'h0;
      shift_reg_61_valid <= 1'b0;
      shift_reg_61_payload_cha_i <= 12'h0;
      shift_reg_61_payload_cha_q <= 12'h0;
      shift_reg_62_valid <= 1'b0;
      shift_reg_62_payload_cha_i <= 12'h0;
      shift_reg_62_payload_cha_q <= 12'h0;
      shift_reg_63_valid <= 1'b0;
      shift_reg_63_payload_cha_i <= 12'h0;
      shift_reg_63_payload_cha_q <= 12'h0;
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
      end
    end
  end


endmodule

//ShiftRegister replaced by ShiftRegister

module ShiftRegister (
  input      [23:0]   input_1,
  output     [23:0]   output_1,
  input               enable,
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
  reg        [23:0]   shift_reg_32;
  reg        [23:0]   shift_reg_33;
  reg        [23:0]   shift_reg_34;
  reg        [23:0]   shift_reg_35;
  reg        [23:0]   shift_reg_36;
  reg        [23:0]   shift_reg_37;
  reg        [23:0]   shift_reg_38;
  reg        [23:0]   shift_reg_39;
  reg        [23:0]   shift_reg_40;
  reg        [23:0]   shift_reg_41;
  reg        [23:0]   shift_reg_42;
  reg        [23:0]   shift_reg_43;
  reg        [23:0]   shift_reg_44;
  reg        [23:0]   shift_reg_45;
  reg        [23:0]   shift_reg_46;
  reg        [23:0]   shift_reg_47;
  reg        [23:0]   shift_reg_48;
  reg        [23:0]   shift_reg_49;
  reg        [23:0]   shift_reg_50;
  reg        [23:0]   shift_reg_51;
  reg        [23:0]   shift_reg_52;
  reg        [23:0]   shift_reg_53;
  reg        [23:0]   shift_reg_54;
  reg        [23:0]   shift_reg_55;
  reg        [23:0]   shift_reg_56;
  reg        [23:0]   shift_reg_57;
  reg        [23:0]   shift_reg_58;
  reg        [23:0]   shift_reg_59;
  reg        [23:0]   shift_reg_60;
  reg        [23:0]   shift_reg_61;
  reg        [23:0]   shift_reg_62;
  reg        [23:0]   shift_reg_63;

  assign output_1 = shift_reg_63;
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
      shift_reg_32 <= 24'h0;
      shift_reg_33 <= 24'h0;
      shift_reg_34 <= 24'h0;
      shift_reg_35 <= 24'h0;
      shift_reg_36 <= 24'h0;
      shift_reg_37 <= 24'h0;
      shift_reg_38 <= 24'h0;
      shift_reg_39 <= 24'h0;
      shift_reg_40 <= 24'h0;
      shift_reg_41 <= 24'h0;
      shift_reg_42 <= 24'h0;
      shift_reg_43 <= 24'h0;
      shift_reg_44 <= 24'h0;
      shift_reg_45 <= 24'h0;
      shift_reg_46 <= 24'h0;
      shift_reg_47 <= 24'h0;
      shift_reg_48 <= 24'h0;
      shift_reg_49 <= 24'h0;
      shift_reg_50 <= 24'h0;
      shift_reg_51 <= 24'h0;
      shift_reg_52 <= 24'h0;
      shift_reg_53 <= 24'h0;
      shift_reg_54 <= 24'h0;
      shift_reg_55 <= 24'h0;
      shift_reg_56 <= 24'h0;
      shift_reg_57 <= 24'h0;
      shift_reg_58 <= 24'h0;
      shift_reg_59 <= 24'h0;
      shift_reg_60 <= 24'h0;
      shift_reg_61 <= 24'h0;
      shift_reg_62 <= 24'h0;
      shift_reg_63 <= 24'h0;
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
      end
    end
  end


endmodule
