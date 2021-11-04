// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AutoCorrelator
// Git hash  : d56fca2d93dfc76f393b3b10236c69be445a29e8



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

  assign output_valid = shift_reg_15_valid;
  assign output_payload_cha_i = shift_reg_15_payload_cha_i;
  assign output_payload_cha_q = shift_reg_15_payload_cha_q;
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

  assign output_1 = shift_reg_31;
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
      end
    end
  end


endmodule
