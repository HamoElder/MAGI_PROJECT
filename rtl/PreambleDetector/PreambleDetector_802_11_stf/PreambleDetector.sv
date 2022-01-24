// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : PreambleDetector
// Git hash  : e700e7347423171eccd7b05bac962965acefbb15



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
  input               resetn
);
  wire                autoCorrelator_1_corr_result_valid;
  wire       [23:0]   autoCorrelator_1_corr_result_payload_cha_i;
  wire       [23:0]   autoCorrelator_1_corr_result_payload_cha_q;
  wire       [23:0]   _zz_gate_pkg_det;
  reg                 gate_pkg_det;
  reg        [23:0]   prod_avg_mag;

  assign _zz_gate_pkg_det = ($signed(autoCorrelator_1_corr_result_payload_cha_i) + $signed(autoCorrelator_1_corr_result_payload_cha_q));
  AutoCorrelator autoCorrelator_1 (
    .raw_data_valid               (raw_data_valid                              ), //i
    .raw_data_payload_cha_i       (raw_data_payload_cha_i                      ), //i
    .raw_data_payload_cha_q       (raw_data_payload_cha_q                      ), //i
    .corr_result_valid            (autoCorrelator_1_corr_result_valid          ), //o
    .corr_result_payload_cha_i    (autoCorrelator_1_corr_result_payload_cha_i  ), //o
    .corr_result_payload_cha_q    (autoCorrelator_1_corr_result_payload_cha_q  ), //o
    .clk                          (clk                                         ), //i
    .resetn                       (resetn                                      )  //i
  );
  assign raw_data_out_valid = raw_data_valid;
  assign raw_data_out_payload_cha_i = raw_data_payload_cha_i;
  assign raw_data_out_payload_cha_q = raw_data_payload_cha_q;
  assign corr_result_valid = autoCorrelator_1_corr_result_valid;
  assign corr_result_payload_cha_i = autoCorrelator_1_corr_result_payload_cha_i;
  assign corr_result_payload_cha_q = autoCorrelator_1_corr_result_payload_cha_q;
  assign pkg_detected = gate_pkg_det;
  always @(posedge clk) begin
    if(!resetn) begin
      gate_pkg_det <= 1'b0;
      prod_avg_mag <= 24'h0;
    end else begin
      if(autoCorrelator_1_corr_result_valid) begin
        gate_pkg_det <= ($signed(gate_threshold) < $signed(_zz_gate_pkg_det));
        prod_avg_mag <= autoCorrelator_1_corr_result_payload_cha_i;
      end else begin
        gate_pkg_det <= 1'b0;
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
  input               resetn
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
    .resetn                  (resetn                                )  //i
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
    .resetn                       (resetn                                )  //i
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
  input               resetn
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
    .resetn      (resetn                    )  //i
  );
  ShiftRegister shiftRegister_4 (
    .input_1     (mul_q                     ), //i
    .output_1    (shiftRegister_4_output_1  ), //o
    .enable      (mul_data_valid            ), //i
    .clk         (clk                       ), //i
    .resetn      (resetn                    )  //i
  );
  assign k1 = ($signed(raw_data_1_payload_cha_i) * $signed(_zz_k1));
  assign k2 = ($signed(raw_data_0_payload_cha_i) * $signed(_zz_k2));
  assign k3 = ($signed(raw_data_0_payload_cha_q) * $signed(_zz_k3));
  assign corr_result_payload_cha_i = corr_val_i;
  assign corr_result_payload_cha_q = corr_val_q;
  assign corr_result_valid = corr_result_valid_1;
  always @(posedge clk) begin
    if(!resetn) begin
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
  input               resetn
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

  assign output_valid = shift_reg_15_valid;
  assign output_payload_cha_i = shift_reg_15_payload_cha_i;
  assign output_payload_cha_q = shift_reg_15_payload_cha_q;
  always @(posedge clk) begin
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
    end
  end


endmodule

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
  always @(posedge clk) begin
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


endmodule
