// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : SystolicFIR
// Git hash  : cf8112ca4b6fbc647e801d7a00f410aa23474696



module SystolicFIR (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_cha_i,
  input      [15:0]   raw_data_payload_cha_q,
  output              filtered_data_valid,
  output     [23:0]   filtered_data_payload_cha_i,
  output     [23:0]   filtered_data_payload_cha_q,
  input               clk,
  input               reset
);
  wire       [15:0]   shiftRegister_34_output_1;
  wire       [15:0]   shiftRegister_35_output_1;
  wire       [15:0]   shiftRegister_36_output_1;
  wire       [15:0]   shiftRegister_37_output_1;
  wire       [15:0]   shiftRegister_38_output_1;
  wire       [15:0]   shiftRegister_39_output_1;
  wire       [15:0]   shiftRegister_40_output_1;
  wire       [15:0]   shiftRegister_41_output_1;
  wire       [15:0]   shiftRegister_42_output_1;
  wire       [15:0]   shiftRegister_43_output_1;
  wire       [15:0]   shiftRegister_44_output_1;
  wire       [15:0]   shiftRegister_45_output_1;
  wire       [15:0]   shiftRegister_46_output_1;
  wire       [15:0]   shiftRegister_47_output_1;
  wire       [15:0]   shiftRegister_48_output_1;
  wire       [15:0]   shiftRegister_49_output_1;
  wire       [15:0]   shiftRegister_50_output_1;
  wire       [15:0]   shiftRegister_51_output_1;
  wire       [15:0]   shiftRegister_52_output_1;
  wire       [15:0]   shiftRegister_53_output_1;
  wire       [15:0]   shiftRegister_54_output_1;
  wire       [15:0]   shiftRegister_55_output_1;
  wire       [15:0]   shiftRegister_56_output_1;
  wire       [15:0]   shiftRegister_57_output_1;
  wire       [15:0]   shiftRegister_58_output_1;
  wire       [15:0]   shiftRegister_59_output_1;
  wire       [15:0]   shiftRegister_60_output_1;
  wire       [15:0]   shiftRegister_61_output_1;
  wire       [15:0]   shiftRegister_62_output_1;
  wire       [15:0]   shiftRegister_63_output_1;
  wire       [15:0]   shiftRegister_64_output_1;
  wire       [15:0]   shiftRegister_65_output_1;
  wire       [15:0]   shiftRegister_66_output_1;
  wire       [15:0]   shiftRegister_67_output_1;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i;
  wire       [23:0]   _zz__zz_filtered_data_payload_cha_i_1;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_2;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_4;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_6;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_8;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_10;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_12;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_14;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_16;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_18;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_20;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_22;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_24;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_26;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_28;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_i_30;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q;
  wire       [23:0]   _zz__zz_filtered_data_payload_cha_q_1;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_2;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_4;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_6;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_8;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_10;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_12;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_14;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_16;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_18;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_20;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_22;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_24;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_26;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_28;
  wire       [7:0]    _zz__zz_filtered_data_payload_cha_q_30;
  reg        [23:0]   _zz_filtered_data_payload_cha_i;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_1;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_2;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_3;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_4;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_5;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_6;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_7;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_8;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_9;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_10;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_11;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_12;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_13;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_14;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_15;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_16;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_17;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_18;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_19;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_20;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_21;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_22;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_23;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_24;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_25;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_26;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_27;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_28;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_29;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_30;
  reg        [23:0]   _zz_filtered_data_payload_cha_i_31;
  reg        [23:0]   _zz_filtered_data_payload_cha_q;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_1;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_2;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_3;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_4;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_5;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_6;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_7;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_8;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_9;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_10;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_11;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_12;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_13;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_14;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_15;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_16;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_17;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_18;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_19;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_20;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_21;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_22;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_23;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_24;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_25;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_26;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_27;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_28;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_29;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_30;
  reg        [23:0]   _zz_filtered_data_payload_cha_q_31;

  assign _zz__zz_filtered_data_payload_cha_i = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_1 = 24'h0;
  assign _zz__zz_filtered_data_payload_cha_i_2 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_4 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_6 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_8 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_10 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_12 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_14 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_16 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_18 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_20 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_22 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_24 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_26 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_28 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_i_30 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_1 = 24'h0;
  assign _zz__zz_filtered_data_payload_cha_q_2 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_4 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_6 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_8 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_10 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_12 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_14 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_16 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_18 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_20 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_22 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_24 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_26 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_28 = 8'h7f;
  assign _zz__zz_filtered_data_payload_cha_q_30 = 8'h7f;
  ShiftRegister shiftRegister_34 (
    .input_1     (raw_data_payload_cha_i     ), //i
    .output_1    (shiftRegister_34_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_35 (
    .input_1     (shiftRegister_34_output_1  ), //i
    .output_1    (shiftRegister_35_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_36 (
    .input_1     (shiftRegister_35_output_1  ), //i
    .output_1    (shiftRegister_36_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_37 (
    .input_1     (shiftRegister_36_output_1  ), //i
    .output_1    (shiftRegister_37_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_38 (
    .input_1     (shiftRegister_37_output_1  ), //i
    .output_1    (shiftRegister_38_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_39 (
    .input_1     (shiftRegister_38_output_1  ), //i
    .output_1    (shiftRegister_39_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_40 (
    .input_1     (shiftRegister_39_output_1  ), //i
    .output_1    (shiftRegister_40_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_41 (
    .input_1     (shiftRegister_40_output_1  ), //i
    .output_1    (shiftRegister_41_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_42 (
    .input_1     (shiftRegister_41_output_1  ), //i
    .output_1    (shiftRegister_42_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_43 (
    .input_1     (shiftRegister_42_output_1  ), //i
    .output_1    (shiftRegister_43_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_44 (
    .input_1     (shiftRegister_43_output_1  ), //i
    .output_1    (shiftRegister_44_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_45 (
    .input_1     (shiftRegister_44_output_1  ), //i
    .output_1    (shiftRegister_45_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_46 (
    .input_1     (shiftRegister_45_output_1  ), //i
    .output_1    (shiftRegister_46_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_47 (
    .input_1     (shiftRegister_46_output_1  ), //i
    .output_1    (shiftRegister_47_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_48 (
    .input_1     (shiftRegister_47_output_1  ), //i
    .output_1    (shiftRegister_48_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_49 (
    .input_1     (shiftRegister_48_output_1  ), //i
    .output_1    (shiftRegister_49_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_50 (
    .input_1     (shiftRegister_49_output_1  ), //i
    .output_1    (shiftRegister_50_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_51 (
    .input_1     (raw_data_payload_cha_q     ), //i
    .output_1    (shiftRegister_51_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_52 (
    .input_1     (shiftRegister_51_output_1  ), //i
    .output_1    (shiftRegister_52_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_53 (
    .input_1     (shiftRegister_52_output_1  ), //i
    .output_1    (shiftRegister_53_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_54 (
    .input_1     (shiftRegister_53_output_1  ), //i
    .output_1    (shiftRegister_54_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_55 (
    .input_1     (shiftRegister_54_output_1  ), //i
    .output_1    (shiftRegister_55_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_56 (
    .input_1     (shiftRegister_55_output_1  ), //i
    .output_1    (shiftRegister_56_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_57 (
    .input_1     (shiftRegister_56_output_1  ), //i
    .output_1    (shiftRegister_57_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_58 (
    .input_1     (shiftRegister_57_output_1  ), //i
    .output_1    (shiftRegister_58_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_59 (
    .input_1     (shiftRegister_58_output_1  ), //i
    .output_1    (shiftRegister_59_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_60 (
    .input_1     (shiftRegister_59_output_1  ), //i
    .output_1    (shiftRegister_60_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_61 (
    .input_1     (shiftRegister_60_output_1  ), //i
    .output_1    (shiftRegister_61_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_62 (
    .input_1     (shiftRegister_61_output_1  ), //i
    .output_1    (shiftRegister_62_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_63 (
    .input_1     (shiftRegister_62_output_1  ), //i
    .output_1    (shiftRegister_63_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_64 (
    .input_1     (shiftRegister_63_output_1  ), //i
    .output_1    (shiftRegister_64_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_65 (
    .input_1     (shiftRegister_64_output_1  ), //i
    .output_1    (shiftRegister_65_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_66 (
    .input_1     (shiftRegister_65_output_1  ), //i
    .output_1    (shiftRegister_66_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_67 (
    .input_1     (shiftRegister_66_output_1  ), //i
    .output_1    (shiftRegister_67_output_1  ), //o
    .enable      (1'b1                       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  assign filtered_data_payload_cha_i = _zz_filtered_data_payload_cha_i_31;
  assign filtered_data_payload_cha_q = _zz_filtered_data_payload_cha_q_31;
  assign filtered_data_valid = raw_data_valid;
  always @(posedge clk) begin
    _zz_filtered_data_payload_cha_i <= ($signed(_zz__zz_filtered_data_payload_cha_i) * $signed(shiftRegister_34_output_1));
    _zz_filtered_data_payload_cha_i_1 <= ($signed(_zz_filtered_data_payload_cha_i) + $signed(_zz__zz_filtered_data_payload_cha_i_1));
    _zz_filtered_data_payload_cha_i_2 <= ($signed(_zz__zz_filtered_data_payload_cha_i_2) * $signed(shiftRegister_35_output_1));
    _zz_filtered_data_payload_cha_i_3 <= ($signed(_zz_filtered_data_payload_cha_i_2) + $signed(_zz_filtered_data_payload_cha_i_1));
    _zz_filtered_data_payload_cha_i_4 <= ($signed(_zz__zz_filtered_data_payload_cha_i_4) * $signed(shiftRegister_36_output_1));
    _zz_filtered_data_payload_cha_i_5 <= ($signed(_zz_filtered_data_payload_cha_i_4) + $signed(_zz_filtered_data_payload_cha_i_3));
    _zz_filtered_data_payload_cha_i_6 <= ($signed(_zz__zz_filtered_data_payload_cha_i_6) * $signed(shiftRegister_37_output_1));
    _zz_filtered_data_payload_cha_i_7 <= ($signed(_zz_filtered_data_payload_cha_i_6) + $signed(_zz_filtered_data_payload_cha_i_5));
    _zz_filtered_data_payload_cha_i_8 <= ($signed(_zz__zz_filtered_data_payload_cha_i_8) * $signed(shiftRegister_38_output_1));
    _zz_filtered_data_payload_cha_i_9 <= ($signed(_zz_filtered_data_payload_cha_i_8) + $signed(_zz_filtered_data_payload_cha_i_7));
    _zz_filtered_data_payload_cha_i_10 <= ($signed(_zz__zz_filtered_data_payload_cha_i_10) * $signed(shiftRegister_39_output_1));
    _zz_filtered_data_payload_cha_i_11 <= ($signed(_zz_filtered_data_payload_cha_i_10) + $signed(_zz_filtered_data_payload_cha_i_9));
    _zz_filtered_data_payload_cha_i_12 <= ($signed(_zz__zz_filtered_data_payload_cha_i_12) * $signed(shiftRegister_40_output_1));
    _zz_filtered_data_payload_cha_i_13 <= ($signed(_zz_filtered_data_payload_cha_i_12) + $signed(_zz_filtered_data_payload_cha_i_11));
    _zz_filtered_data_payload_cha_i_14 <= ($signed(_zz__zz_filtered_data_payload_cha_i_14) * $signed(shiftRegister_41_output_1));
    _zz_filtered_data_payload_cha_i_15 <= ($signed(_zz_filtered_data_payload_cha_i_14) + $signed(_zz_filtered_data_payload_cha_i_13));
    _zz_filtered_data_payload_cha_i_16 <= ($signed(_zz__zz_filtered_data_payload_cha_i_16) * $signed(shiftRegister_42_output_1));
    _zz_filtered_data_payload_cha_i_17 <= ($signed(_zz_filtered_data_payload_cha_i_16) + $signed(_zz_filtered_data_payload_cha_i_15));
    _zz_filtered_data_payload_cha_i_18 <= ($signed(_zz__zz_filtered_data_payload_cha_i_18) * $signed(shiftRegister_43_output_1));
    _zz_filtered_data_payload_cha_i_19 <= ($signed(_zz_filtered_data_payload_cha_i_18) + $signed(_zz_filtered_data_payload_cha_i_17));
    _zz_filtered_data_payload_cha_i_20 <= ($signed(_zz__zz_filtered_data_payload_cha_i_20) * $signed(shiftRegister_44_output_1));
    _zz_filtered_data_payload_cha_i_21 <= ($signed(_zz_filtered_data_payload_cha_i_20) + $signed(_zz_filtered_data_payload_cha_i_19));
    _zz_filtered_data_payload_cha_i_22 <= ($signed(_zz__zz_filtered_data_payload_cha_i_22) * $signed(shiftRegister_45_output_1));
    _zz_filtered_data_payload_cha_i_23 <= ($signed(_zz_filtered_data_payload_cha_i_22) + $signed(_zz_filtered_data_payload_cha_i_21));
    _zz_filtered_data_payload_cha_i_24 <= ($signed(_zz__zz_filtered_data_payload_cha_i_24) * $signed(shiftRegister_46_output_1));
    _zz_filtered_data_payload_cha_i_25 <= ($signed(_zz_filtered_data_payload_cha_i_24) + $signed(_zz_filtered_data_payload_cha_i_23));
    _zz_filtered_data_payload_cha_i_26 <= ($signed(_zz__zz_filtered_data_payload_cha_i_26) * $signed(shiftRegister_47_output_1));
    _zz_filtered_data_payload_cha_i_27 <= ($signed(_zz_filtered_data_payload_cha_i_26) + $signed(_zz_filtered_data_payload_cha_i_25));
    _zz_filtered_data_payload_cha_i_28 <= ($signed(_zz__zz_filtered_data_payload_cha_i_28) * $signed(shiftRegister_48_output_1));
    _zz_filtered_data_payload_cha_i_29 <= ($signed(_zz_filtered_data_payload_cha_i_28) + $signed(_zz_filtered_data_payload_cha_i_27));
    _zz_filtered_data_payload_cha_i_30 <= ($signed(_zz__zz_filtered_data_payload_cha_i_30) * $signed(shiftRegister_49_output_1));
    _zz_filtered_data_payload_cha_i_31 <= ($signed(_zz_filtered_data_payload_cha_i_30) + $signed(_zz_filtered_data_payload_cha_i_29));
    _zz_filtered_data_payload_cha_q <= ($signed(_zz__zz_filtered_data_payload_cha_q) * $signed(shiftRegister_51_output_1));
    _zz_filtered_data_payload_cha_q_1 <= ($signed(_zz_filtered_data_payload_cha_q) + $signed(_zz__zz_filtered_data_payload_cha_q_1));
    _zz_filtered_data_payload_cha_q_2 <= ($signed(_zz__zz_filtered_data_payload_cha_q_2) * $signed(shiftRegister_52_output_1));
    _zz_filtered_data_payload_cha_q_3 <= ($signed(_zz_filtered_data_payload_cha_q_2) + $signed(_zz_filtered_data_payload_cha_q_1));
    _zz_filtered_data_payload_cha_q_4 <= ($signed(_zz__zz_filtered_data_payload_cha_q_4) * $signed(shiftRegister_53_output_1));
    _zz_filtered_data_payload_cha_q_5 <= ($signed(_zz_filtered_data_payload_cha_q_4) + $signed(_zz_filtered_data_payload_cha_q_3));
    _zz_filtered_data_payload_cha_q_6 <= ($signed(_zz__zz_filtered_data_payload_cha_q_6) * $signed(shiftRegister_54_output_1));
    _zz_filtered_data_payload_cha_q_7 <= ($signed(_zz_filtered_data_payload_cha_q_6) + $signed(_zz_filtered_data_payload_cha_q_5));
    _zz_filtered_data_payload_cha_q_8 <= ($signed(_zz__zz_filtered_data_payload_cha_q_8) * $signed(shiftRegister_55_output_1));
    _zz_filtered_data_payload_cha_q_9 <= ($signed(_zz_filtered_data_payload_cha_q_8) + $signed(_zz_filtered_data_payload_cha_q_7));
    _zz_filtered_data_payload_cha_q_10 <= ($signed(_zz__zz_filtered_data_payload_cha_q_10) * $signed(shiftRegister_56_output_1));
    _zz_filtered_data_payload_cha_q_11 <= ($signed(_zz_filtered_data_payload_cha_q_10) + $signed(_zz_filtered_data_payload_cha_q_9));
    _zz_filtered_data_payload_cha_q_12 <= ($signed(_zz__zz_filtered_data_payload_cha_q_12) * $signed(shiftRegister_57_output_1));
    _zz_filtered_data_payload_cha_q_13 <= ($signed(_zz_filtered_data_payload_cha_q_12) + $signed(_zz_filtered_data_payload_cha_q_11));
    _zz_filtered_data_payload_cha_q_14 <= ($signed(_zz__zz_filtered_data_payload_cha_q_14) * $signed(shiftRegister_58_output_1));
    _zz_filtered_data_payload_cha_q_15 <= ($signed(_zz_filtered_data_payload_cha_q_14) + $signed(_zz_filtered_data_payload_cha_q_13));
    _zz_filtered_data_payload_cha_q_16 <= ($signed(_zz__zz_filtered_data_payload_cha_q_16) * $signed(shiftRegister_59_output_1));
    _zz_filtered_data_payload_cha_q_17 <= ($signed(_zz_filtered_data_payload_cha_q_16) + $signed(_zz_filtered_data_payload_cha_q_15));
    _zz_filtered_data_payload_cha_q_18 <= ($signed(_zz__zz_filtered_data_payload_cha_q_18) * $signed(shiftRegister_60_output_1));
    _zz_filtered_data_payload_cha_q_19 <= ($signed(_zz_filtered_data_payload_cha_q_18) + $signed(_zz_filtered_data_payload_cha_q_17));
    _zz_filtered_data_payload_cha_q_20 <= ($signed(_zz__zz_filtered_data_payload_cha_q_20) * $signed(shiftRegister_61_output_1));
    _zz_filtered_data_payload_cha_q_21 <= ($signed(_zz_filtered_data_payload_cha_q_20) + $signed(_zz_filtered_data_payload_cha_q_19));
    _zz_filtered_data_payload_cha_q_22 <= ($signed(_zz__zz_filtered_data_payload_cha_q_22) * $signed(shiftRegister_62_output_1));
    _zz_filtered_data_payload_cha_q_23 <= ($signed(_zz_filtered_data_payload_cha_q_22) + $signed(_zz_filtered_data_payload_cha_q_21));
    _zz_filtered_data_payload_cha_q_24 <= ($signed(_zz__zz_filtered_data_payload_cha_q_24) * $signed(shiftRegister_63_output_1));
    _zz_filtered_data_payload_cha_q_25 <= ($signed(_zz_filtered_data_payload_cha_q_24) + $signed(_zz_filtered_data_payload_cha_q_23));
    _zz_filtered_data_payload_cha_q_26 <= ($signed(_zz__zz_filtered_data_payload_cha_q_26) * $signed(shiftRegister_64_output_1));
    _zz_filtered_data_payload_cha_q_27 <= ($signed(_zz_filtered_data_payload_cha_q_26) + $signed(_zz_filtered_data_payload_cha_q_25));
    _zz_filtered_data_payload_cha_q_28 <= ($signed(_zz__zz_filtered_data_payload_cha_q_28) * $signed(shiftRegister_65_output_1));
    _zz_filtered_data_payload_cha_q_29 <= ($signed(_zz_filtered_data_payload_cha_q_28) + $signed(_zz_filtered_data_payload_cha_q_27));
    _zz_filtered_data_payload_cha_q_30 <= ($signed(_zz__zz_filtered_data_payload_cha_q_30) * $signed(shiftRegister_66_output_1));
    _zz_filtered_data_payload_cha_q_31 <= ($signed(_zz_filtered_data_payload_cha_q_30) + $signed(_zz_filtered_data_payload_cha_q_29));
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

module ShiftRegister (
  input      [15:0]   input_1,
  output     [15:0]   output_1,
  input               enable,
  input               clk,
  input               reset
);
  reg        [15:0]   shift_reg_0;
  reg        [15:0]   shift_reg_1;

  assign output_1 = shift_reg_1;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0 <= input_1;
      shift_reg_1 <= shift_reg_0;
    end
  end


endmodule
