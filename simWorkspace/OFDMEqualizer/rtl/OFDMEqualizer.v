// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : OFDMEqualizer
// Git hash  : c25aef4ce126c6f2485d3659049da526d3e7b24f



module OFDMEqualizer (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment_cha_i,
  input      [15:0]   raw_data_payload_fragment_cha_q,
  output              equalized_data_valid,
  output              equalized_data_payload_last,
  output     [15:0]   equalized_data_payload_fragment_cha_i,
  output     [15:0]   equalized_data_payload_fragment_cha_q,
  input               clk,
  input               reset
);
  wire       [15:0]   i_zf_eq_scale;
  wire       [15:0]   i_zf_eq_ref_data;
  wire       [15:0]   q_zf_eq_scale;
  wire       [15:0]   q_zf_eq_ref_data;
  wire                i_zf_eq_raw_data_ready;
  wire                i_zf_eq_result_data_valid;
  wire       [15:0]   i_zf_eq_result_data_payload;
  wire                q_zf_eq_raw_data_ready;
  wire                q_zf_eq_result_data_valid;
  wire       [15:0]   q_zf_eq_result_data_payload;
  wire       [5:0]    _zz_cnt;
  reg        [15:0]   _zz_scale;
  reg        [15:0]   _zz_ref_data;
  reg        [15:0]   _zz_scale_1;
  reg        [15:0]   _zz_ref_data_1;
  wire       [15:0]   _zz_equalized_data_payload_fragment_cha_i;
  wire       [15:0]   _zz_equalized_data_payload_fragment_cha_q;
  reg        [15:0]   cha_i_ref_0;
  reg        [15:0]   cha_i_ref_1;
  reg        [15:0]   cha_i_ref_2;
  reg        [15:0]   cha_i_ref_3;
  reg        [15:0]   cha_i_ref_4;
  reg        [15:0]   cha_i_ref_5;
  reg        [15:0]   cha_i_ref_6;
  reg        [15:0]   cha_i_ref_7;
  reg        [15:0]   cha_i_ref_8;
  reg        [15:0]   cha_i_ref_9;
  reg        [15:0]   cha_i_ref_10;
  reg        [15:0]   cha_i_ref_11;
  reg        [15:0]   cha_i_ref_12;
  reg        [15:0]   cha_i_ref_13;
  reg        [15:0]   cha_i_ref_14;
  reg        [15:0]   cha_i_ref_15;
  reg        [15:0]   cha_i_ref_16;
  reg        [15:0]   cha_i_ref_17;
  reg        [15:0]   cha_i_ref_18;
  reg        [15:0]   cha_i_ref_19;
  reg        [15:0]   cha_i_ref_20;
  reg        [15:0]   cha_i_ref_21;
  reg        [15:0]   cha_i_ref_22;
  reg        [15:0]   cha_i_ref_23;
  reg        [15:0]   cha_i_ref_24;
  reg        [15:0]   cha_i_ref_25;
  reg        [15:0]   cha_i_ref_26;
  reg        [15:0]   cha_i_ref_27;
  reg        [15:0]   cha_i_ref_28;
  reg        [15:0]   cha_i_ref_29;
  reg        [15:0]   cha_i_ref_30;
  reg        [15:0]   cha_i_ref_31;
  reg        [15:0]   cha_i_ref_32;
  reg        [15:0]   cha_i_ref_33;
  reg        [15:0]   cha_i_ref_34;
  reg        [15:0]   cha_i_ref_35;
  reg        [15:0]   cha_i_ref_36;
  reg        [15:0]   cha_i_ref_37;
  reg        [15:0]   cha_i_ref_38;
  reg        [15:0]   cha_i_ref_39;
  reg        [15:0]   cha_i_ref_40;
  reg        [15:0]   cha_i_ref_41;
  reg        [15:0]   cha_i_ref_42;
  reg        [15:0]   cha_i_ref_43;
  reg        [15:0]   cha_i_ref_44;
  reg        [15:0]   cha_i_ref_45;
  reg        [15:0]   cha_i_ref_46;
  reg        [15:0]   cha_i_ref_47;
  reg        [15:0]   cha_i_ref_48;
  reg        [15:0]   cha_i_ref_49;
  reg        [15:0]   cha_i_ref_50;
  reg        [15:0]   cha_i_ref_51;
  reg        [15:0]   cha_i_ref_52;
  reg        [15:0]   cha_i_ref_53;
  reg        [15:0]   cha_i_ref_54;
  reg        [15:0]   cha_i_ref_55;
  reg        [15:0]   cha_i_ref_56;
  reg        [15:0]   cha_i_ref_57;
  reg        [15:0]   cha_i_ref_58;
  reg        [15:0]   cha_i_ref_59;
  reg        [15:0]   cha_i_ref_60;
  reg        [15:0]   cha_i_ref_61;
  reg        [15:0]   cha_i_ref_62;
  reg        [15:0]   cha_i_ref_63;
  reg        [15:0]   cha_q_ref_0;
  reg        [15:0]   cha_q_ref_1;
  reg        [15:0]   cha_q_ref_2;
  reg        [15:0]   cha_q_ref_3;
  reg        [15:0]   cha_q_ref_4;
  reg        [15:0]   cha_q_ref_5;
  reg        [15:0]   cha_q_ref_6;
  reg        [15:0]   cha_q_ref_7;
  reg        [15:0]   cha_q_ref_8;
  reg        [15:0]   cha_q_ref_9;
  reg        [15:0]   cha_q_ref_10;
  reg        [15:0]   cha_q_ref_11;
  reg        [15:0]   cha_q_ref_12;
  reg        [15:0]   cha_q_ref_13;
  reg        [15:0]   cha_q_ref_14;
  reg        [15:0]   cha_q_ref_15;
  reg        [15:0]   cha_q_ref_16;
  reg        [15:0]   cha_q_ref_17;
  reg        [15:0]   cha_q_ref_18;
  reg        [15:0]   cha_q_ref_19;
  reg        [15:0]   cha_q_ref_20;
  reg        [15:0]   cha_q_ref_21;
  reg        [15:0]   cha_q_ref_22;
  reg        [15:0]   cha_q_ref_23;
  reg        [15:0]   cha_q_ref_24;
  reg        [15:0]   cha_q_ref_25;
  reg        [15:0]   cha_q_ref_26;
  reg        [15:0]   cha_q_ref_27;
  reg        [15:0]   cha_q_ref_28;
  reg        [15:0]   cha_q_ref_29;
  reg        [15:0]   cha_q_ref_30;
  reg        [15:0]   cha_q_ref_31;
  reg        [15:0]   cha_q_ref_32;
  reg        [15:0]   cha_q_ref_33;
  reg        [15:0]   cha_q_ref_34;
  reg        [15:0]   cha_q_ref_35;
  reg        [15:0]   cha_q_ref_36;
  reg        [15:0]   cha_q_ref_37;
  reg        [15:0]   cha_q_ref_38;
  reg        [15:0]   cha_q_ref_39;
  reg        [15:0]   cha_q_ref_40;
  reg        [15:0]   cha_q_ref_41;
  reg        [15:0]   cha_q_ref_42;
  reg        [15:0]   cha_q_ref_43;
  reg        [15:0]   cha_q_ref_44;
  reg        [15:0]   cha_q_ref_45;
  reg        [15:0]   cha_q_ref_46;
  reg        [15:0]   cha_q_ref_47;
  reg        [15:0]   cha_q_ref_48;
  reg        [15:0]   cha_q_ref_49;
  reg        [15:0]   cha_q_ref_50;
  reg        [15:0]   cha_q_ref_51;
  reg        [15:0]   cha_q_ref_52;
  reg        [15:0]   cha_q_ref_53;
  reg        [15:0]   cha_q_ref_54;
  reg        [15:0]   cha_q_ref_55;
  reg        [15:0]   cha_q_ref_56;
  reg        [15:0]   cha_q_ref_57;
  reg        [15:0]   cha_q_ref_58;
  reg        [15:0]   cha_q_ref_59;
  reg        [15:0]   cha_q_ref_60;
  reg        [15:0]   cha_q_ref_61;
  reg        [15:0]   cha_q_ref_62;
  reg        [15:0]   cha_q_ref_63;
  reg        [15:0]   cha_i_scale_0;
  reg        [15:0]   cha_i_scale_1;
  reg        [15:0]   cha_i_scale_2;
  reg        [15:0]   cha_i_scale_3;
  reg        [15:0]   cha_i_scale_4;
  reg        [15:0]   cha_i_scale_5;
  reg        [15:0]   cha_i_scale_6;
  reg        [15:0]   cha_i_scale_7;
  reg        [15:0]   cha_i_scale_8;
  reg        [15:0]   cha_i_scale_9;
  reg        [15:0]   cha_i_scale_10;
  reg        [15:0]   cha_i_scale_11;
  reg        [15:0]   cha_i_scale_12;
  reg        [15:0]   cha_i_scale_13;
  reg        [15:0]   cha_i_scale_14;
  reg        [15:0]   cha_i_scale_15;
  reg        [15:0]   cha_i_scale_16;
  reg        [15:0]   cha_i_scale_17;
  reg        [15:0]   cha_i_scale_18;
  reg        [15:0]   cha_i_scale_19;
  reg        [15:0]   cha_i_scale_20;
  reg        [15:0]   cha_i_scale_21;
  reg        [15:0]   cha_i_scale_22;
  reg        [15:0]   cha_i_scale_23;
  reg        [15:0]   cha_i_scale_24;
  reg        [15:0]   cha_i_scale_25;
  reg        [15:0]   cha_i_scale_26;
  reg        [15:0]   cha_i_scale_27;
  reg        [15:0]   cha_i_scale_28;
  reg        [15:0]   cha_i_scale_29;
  reg        [15:0]   cha_i_scale_30;
  reg        [15:0]   cha_i_scale_31;
  reg        [15:0]   cha_i_scale_32;
  reg        [15:0]   cha_i_scale_33;
  reg        [15:0]   cha_i_scale_34;
  reg        [15:0]   cha_i_scale_35;
  reg        [15:0]   cha_i_scale_36;
  reg        [15:0]   cha_i_scale_37;
  reg        [15:0]   cha_i_scale_38;
  reg        [15:0]   cha_i_scale_39;
  reg        [15:0]   cha_i_scale_40;
  reg        [15:0]   cha_i_scale_41;
  reg        [15:0]   cha_i_scale_42;
  reg        [15:0]   cha_i_scale_43;
  reg        [15:0]   cha_i_scale_44;
  reg        [15:0]   cha_i_scale_45;
  reg        [15:0]   cha_i_scale_46;
  reg        [15:0]   cha_i_scale_47;
  reg        [15:0]   cha_i_scale_48;
  reg        [15:0]   cha_i_scale_49;
  reg        [15:0]   cha_i_scale_50;
  reg        [15:0]   cha_i_scale_51;
  reg        [15:0]   cha_i_scale_52;
  reg        [15:0]   cha_i_scale_53;
  reg        [15:0]   cha_i_scale_54;
  reg        [15:0]   cha_i_scale_55;
  reg        [15:0]   cha_i_scale_56;
  reg        [15:0]   cha_i_scale_57;
  reg        [15:0]   cha_i_scale_58;
  reg        [15:0]   cha_i_scale_59;
  reg        [15:0]   cha_i_scale_60;
  reg        [15:0]   cha_i_scale_61;
  reg        [15:0]   cha_i_scale_62;
  reg        [15:0]   cha_i_scale_63;
  reg        [15:0]   cha_q_scale_0;
  reg        [15:0]   cha_q_scale_1;
  reg        [15:0]   cha_q_scale_2;
  reg        [15:0]   cha_q_scale_3;
  reg        [15:0]   cha_q_scale_4;
  reg        [15:0]   cha_q_scale_5;
  reg        [15:0]   cha_q_scale_6;
  reg        [15:0]   cha_q_scale_7;
  reg        [15:0]   cha_q_scale_8;
  reg        [15:0]   cha_q_scale_9;
  reg        [15:0]   cha_q_scale_10;
  reg        [15:0]   cha_q_scale_11;
  reg        [15:0]   cha_q_scale_12;
  reg        [15:0]   cha_q_scale_13;
  reg        [15:0]   cha_q_scale_14;
  reg        [15:0]   cha_q_scale_15;
  reg        [15:0]   cha_q_scale_16;
  reg        [15:0]   cha_q_scale_17;
  reg        [15:0]   cha_q_scale_18;
  reg        [15:0]   cha_q_scale_19;
  reg        [15:0]   cha_q_scale_20;
  reg        [15:0]   cha_q_scale_21;
  reg        [15:0]   cha_q_scale_22;
  reg        [15:0]   cha_q_scale_23;
  reg        [15:0]   cha_q_scale_24;
  reg        [15:0]   cha_q_scale_25;
  reg        [15:0]   cha_q_scale_26;
  reg        [15:0]   cha_q_scale_27;
  reg        [15:0]   cha_q_scale_28;
  reg        [15:0]   cha_q_scale_29;
  reg        [15:0]   cha_q_scale_30;
  reg        [15:0]   cha_q_scale_31;
  reg        [15:0]   cha_q_scale_32;
  reg        [15:0]   cha_q_scale_33;
  reg        [15:0]   cha_q_scale_34;
  reg        [15:0]   cha_q_scale_35;
  reg        [15:0]   cha_q_scale_36;
  reg        [15:0]   cha_q_scale_37;
  reg        [15:0]   cha_q_scale_38;
  reg        [15:0]   cha_q_scale_39;
  reg        [15:0]   cha_q_scale_40;
  reg        [15:0]   cha_q_scale_41;
  reg        [15:0]   cha_q_scale_42;
  reg        [15:0]   cha_q_scale_43;
  reg        [15:0]   cha_q_scale_44;
  reg        [15:0]   cha_q_scale_45;
  reg        [15:0]   cha_q_scale_46;
  reg        [15:0]   cha_q_scale_47;
  reg        [15:0]   cha_q_scale_48;
  reg        [15:0]   cha_q_scale_49;
  reg        [15:0]   cha_q_scale_50;
  reg        [15:0]   cha_q_scale_51;
  reg        [15:0]   cha_q_scale_52;
  reg        [15:0]   cha_q_scale_53;
  reg        [15:0]   cha_q_scale_54;
  reg        [15:0]   cha_q_scale_55;
  reg        [15:0]   cha_q_scale_56;
  reg        [15:0]   cha_q_scale_57;
  reg        [15:0]   cha_q_scale_58;
  reg        [15:0]   cha_q_scale_59;
  reg        [15:0]   cha_q_scale_60;
  reg        [15:0]   cha_q_scale_61;
  reg        [15:0]   cha_q_scale_62;
  reg        [15:0]   cha_q_scale_63;
  reg        [5:0]    cnt;
  reg                 train_en;
  wire                raw_data_fire;
  wire                when_OFDMEqualizer_l47;
  reg        [5:0]    train_cnt;
  reg                 train_finished;
  wire                when_OFDMEqualizer_l71;
  wire       [63:0]   _zz_1;
  wire       [63:0]   _zz_2;
  wire                when_OFDMEqualizer_l69;
  reg                 raw_data_ready_1;
  wire                raw_data_fire_1;
  wire                when_OFDMEqualizer_l78;
  wire                when_OFDMEqualizer_l80;
  reg                 raw_data_payload_last_delay_1;
  reg                 raw_data_payload_last_delay_2;
  reg                 raw_data_payload_last_delay_3;
  reg                 raw_data_payload_last_delay_4;
  reg                 raw_data_payload_last_delay_5;
  reg                 raw_data_payload_last_delay_6;
  reg                 raw_data_payload_last_delay_7;
  reg                 raw_data_payload_last_delay_8;
  reg                 raw_data_payload_last_delay_9;
  reg                 raw_data_payload_last_delay_10;
  reg                 raw_data_payload_last_delay_11;
  reg                 raw_data_payload_last_delay_12;
  reg                 raw_data_payload_last_delay_13;
  reg                 raw_data_payload_last_delay_14;
  reg                 raw_data_payload_last_delay_15;
  reg                 raw_data_payload_last_delay_16;

  assign _zz_cnt = (cnt + 6'h01);
  assign _zz_equalized_data_payload_fragment_cha_i = 16'h0;
  assign _zz_equalized_data_payload_fragment_cha_q = 16'h0;
  ZeroForcing i_zf_eq (
    .raw_data_valid         (raw_data_valid                   ), //i
    .raw_data_ready         (i_zf_eq_raw_data_ready           ), //o
    .raw_data_payload       (raw_data_payload_fragment_cha_i  ), //i
    .scale                  (i_zf_eq_scale                    ), //i
    .ref_data               (i_zf_eq_ref_data                 ), //i
    .train_en               (train_en                         ), //i
    .result_data_valid      (i_zf_eq_result_data_valid        ), //o
    .result_data_payload    (i_zf_eq_result_data_payload      ), //o
    .clk                    (clk                              ), //i
    .reset                  (reset                            )  //i
  );
  ZeroForcing q_zf_eq (
    .raw_data_valid         (raw_data_valid                   ), //i
    .raw_data_ready         (q_zf_eq_raw_data_ready           ), //o
    .raw_data_payload       (raw_data_payload_fragment_cha_q  ), //i
    .scale                  (q_zf_eq_scale                    ), //i
    .ref_data               (q_zf_eq_ref_data                 ), //i
    .train_en               (train_en                         ), //i
    .result_data_valid      (q_zf_eq_result_data_valid        ), //o
    .result_data_payload    (q_zf_eq_result_data_payload      ), //o
    .clk                    (clk                              ), //i
    .reset                  (reset                            )  //i
  );
  always @(*) begin
    case(cnt)
      6'b000000 : begin
        _zz_scale = cha_i_scale_0;
        _zz_ref_data = cha_i_ref_0;
        _zz_scale_1 = cha_q_scale_0;
        _zz_ref_data_1 = cha_q_ref_0;
      end
      6'b000001 : begin
        _zz_scale = cha_i_scale_1;
        _zz_ref_data = cha_i_ref_1;
        _zz_scale_1 = cha_q_scale_1;
        _zz_ref_data_1 = cha_q_ref_1;
      end
      6'b000010 : begin
        _zz_scale = cha_i_scale_2;
        _zz_ref_data = cha_i_ref_2;
        _zz_scale_1 = cha_q_scale_2;
        _zz_ref_data_1 = cha_q_ref_2;
      end
      6'b000011 : begin
        _zz_scale = cha_i_scale_3;
        _zz_ref_data = cha_i_ref_3;
        _zz_scale_1 = cha_q_scale_3;
        _zz_ref_data_1 = cha_q_ref_3;
      end
      6'b000100 : begin
        _zz_scale = cha_i_scale_4;
        _zz_ref_data = cha_i_ref_4;
        _zz_scale_1 = cha_q_scale_4;
        _zz_ref_data_1 = cha_q_ref_4;
      end
      6'b000101 : begin
        _zz_scale = cha_i_scale_5;
        _zz_ref_data = cha_i_ref_5;
        _zz_scale_1 = cha_q_scale_5;
        _zz_ref_data_1 = cha_q_ref_5;
      end
      6'b000110 : begin
        _zz_scale = cha_i_scale_6;
        _zz_ref_data = cha_i_ref_6;
        _zz_scale_1 = cha_q_scale_6;
        _zz_ref_data_1 = cha_q_ref_6;
      end
      6'b000111 : begin
        _zz_scale = cha_i_scale_7;
        _zz_ref_data = cha_i_ref_7;
        _zz_scale_1 = cha_q_scale_7;
        _zz_ref_data_1 = cha_q_ref_7;
      end
      6'b001000 : begin
        _zz_scale = cha_i_scale_8;
        _zz_ref_data = cha_i_ref_8;
        _zz_scale_1 = cha_q_scale_8;
        _zz_ref_data_1 = cha_q_ref_8;
      end
      6'b001001 : begin
        _zz_scale = cha_i_scale_9;
        _zz_ref_data = cha_i_ref_9;
        _zz_scale_1 = cha_q_scale_9;
        _zz_ref_data_1 = cha_q_ref_9;
      end
      6'b001010 : begin
        _zz_scale = cha_i_scale_10;
        _zz_ref_data = cha_i_ref_10;
        _zz_scale_1 = cha_q_scale_10;
        _zz_ref_data_1 = cha_q_ref_10;
      end
      6'b001011 : begin
        _zz_scale = cha_i_scale_11;
        _zz_ref_data = cha_i_ref_11;
        _zz_scale_1 = cha_q_scale_11;
        _zz_ref_data_1 = cha_q_ref_11;
      end
      6'b001100 : begin
        _zz_scale = cha_i_scale_12;
        _zz_ref_data = cha_i_ref_12;
        _zz_scale_1 = cha_q_scale_12;
        _zz_ref_data_1 = cha_q_ref_12;
      end
      6'b001101 : begin
        _zz_scale = cha_i_scale_13;
        _zz_ref_data = cha_i_ref_13;
        _zz_scale_1 = cha_q_scale_13;
        _zz_ref_data_1 = cha_q_ref_13;
      end
      6'b001110 : begin
        _zz_scale = cha_i_scale_14;
        _zz_ref_data = cha_i_ref_14;
        _zz_scale_1 = cha_q_scale_14;
        _zz_ref_data_1 = cha_q_ref_14;
      end
      6'b001111 : begin
        _zz_scale = cha_i_scale_15;
        _zz_ref_data = cha_i_ref_15;
        _zz_scale_1 = cha_q_scale_15;
        _zz_ref_data_1 = cha_q_ref_15;
      end
      6'b010000 : begin
        _zz_scale = cha_i_scale_16;
        _zz_ref_data = cha_i_ref_16;
        _zz_scale_1 = cha_q_scale_16;
        _zz_ref_data_1 = cha_q_ref_16;
      end
      6'b010001 : begin
        _zz_scale = cha_i_scale_17;
        _zz_ref_data = cha_i_ref_17;
        _zz_scale_1 = cha_q_scale_17;
        _zz_ref_data_1 = cha_q_ref_17;
      end
      6'b010010 : begin
        _zz_scale = cha_i_scale_18;
        _zz_ref_data = cha_i_ref_18;
        _zz_scale_1 = cha_q_scale_18;
        _zz_ref_data_1 = cha_q_ref_18;
      end
      6'b010011 : begin
        _zz_scale = cha_i_scale_19;
        _zz_ref_data = cha_i_ref_19;
        _zz_scale_1 = cha_q_scale_19;
        _zz_ref_data_1 = cha_q_ref_19;
      end
      6'b010100 : begin
        _zz_scale = cha_i_scale_20;
        _zz_ref_data = cha_i_ref_20;
        _zz_scale_1 = cha_q_scale_20;
        _zz_ref_data_1 = cha_q_ref_20;
      end
      6'b010101 : begin
        _zz_scale = cha_i_scale_21;
        _zz_ref_data = cha_i_ref_21;
        _zz_scale_1 = cha_q_scale_21;
        _zz_ref_data_1 = cha_q_ref_21;
      end
      6'b010110 : begin
        _zz_scale = cha_i_scale_22;
        _zz_ref_data = cha_i_ref_22;
        _zz_scale_1 = cha_q_scale_22;
        _zz_ref_data_1 = cha_q_ref_22;
      end
      6'b010111 : begin
        _zz_scale = cha_i_scale_23;
        _zz_ref_data = cha_i_ref_23;
        _zz_scale_1 = cha_q_scale_23;
        _zz_ref_data_1 = cha_q_ref_23;
      end
      6'b011000 : begin
        _zz_scale = cha_i_scale_24;
        _zz_ref_data = cha_i_ref_24;
        _zz_scale_1 = cha_q_scale_24;
        _zz_ref_data_1 = cha_q_ref_24;
      end
      6'b011001 : begin
        _zz_scale = cha_i_scale_25;
        _zz_ref_data = cha_i_ref_25;
        _zz_scale_1 = cha_q_scale_25;
        _zz_ref_data_1 = cha_q_ref_25;
      end
      6'b011010 : begin
        _zz_scale = cha_i_scale_26;
        _zz_ref_data = cha_i_ref_26;
        _zz_scale_1 = cha_q_scale_26;
        _zz_ref_data_1 = cha_q_ref_26;
      end
      6'b011011 : begin
        _zz_scale = cha_i_scale_27;
        _zz_ref_data = cha_i_ref_27;
        _zz_scale_1 = cha_q_scale_27;
        _zz_ref_data_1 = cha_q_ref_27;
      end
      6'b011100 : begin
        _zz_scale = cha_i_scale_28;
        _zz_ref_data = cha_i_ref_28;
        _zz_scale_1 = cha_q_scale_28;
        _zz_ref_data_1 = cha_q_ref_28;
      end
      6'b011101 : begin
        _zz_scale = cha_i_scale_29;
        _zz_ref_data = cha_i_ref_29;
        _zz_scale_1 = cha_q_scale_29;
        _zz_ref_data_1 = cha_q_ref_29;
      end
      6'b011110 : begin
        _zz_scale = cha_i_scale_30;
        _zz_ref_data = cha_i_ref_30;
        _zz_scale_1 = cha_q_scale_30;
        _zz_ref_data_1 = cha_q_ref_30;
      end
      6'b011111 : begin
        _zz_scale = cha_i_scale_31;
        _zz_ref_data = cha_i_ref_31;
        _zz_scale_1 = cha_q_scale_31;
        _zz_ref_data_1 = cha_q_ref_31;
      end
      6'b100000 : begin
        _zz_scale = cha_i_scale_32;
        _zz_ref_data = cha_i_ref_32;
        _zz_scale_1 = cha_q_scale_32;
        _zz_ref_data_1 = cha_q_ref_32;
      end
      6'b100001 : begin
        _zz_scale = cha_i_scale_33;
        _zz_ref_data = cha_i_ref_33;
        _zz_scale_1 = cha_q_scale_33;
        _zz_ref_data_1 = cha_q_ref_33;
      end
      6'b100010 : begin
        _zz_scale = cha_i_scale_34;
        _zz_ref_data = cha_i_ref_34;
        _zz_scale_1 = cha_q_scale_34;
        _zz_ref_data_1 = cha_q_ref_34;
      end
      6'b100011 : begin
        _zz_scale = cha_i_scale_35;
        _zz_ref_data = cha_i_ref_35;
        _zz_scale_1 = cha_q_scale_35;
        _zz_ref_data_1 = cha_q_ref_35;
      end
      6'b100100 : begin
        _zz_scale = cha_i_scale_36;
        _zz_ref_data = cha_i_ref_36;
        _zz_scale_1 = cha_q_scale_36;
        _zz_ref_data_1 = cha_q_ref_36;
      end
      6'b100101 : begin
        _zz_scale = cha_i_scale_37;
        _zz_ref_data = cha_i_ref_37;
        _zz_scale_1 = cha_q_scale_37;
        _zz_ref_data_1 = cha_q_ref_37;
      end
      6'b100110 : begin
        _zz_scale = cha_i_scale_38;
        _zz_ref_data = cha_i_ref_38;
        _zz_scale_1 = cha_q_scale_38;
        _zz_ref_data_1 = cha_q_ref_38;
      end
      6'b100111 : begin
        _zz_scale = cha_i_scale_39;
        _zz_ref_data = cha_i_ref_39;
        _zz_scale_1 = cha_q_scale_39;
        _zz_ref_data_1 = cha_q_ref_39;
      end
      6'b101000 : begin
        _zz_scale = cha_i_scale_40;
        _zz_ref_data = cha_i_ref_40;
        _zz_scale_1 = cha_q_scale_40;
        _zz_ref_data_1 = cha_q_ref_40;
      end
      6'b101001 : begin
        _zz_scale = cha_i_scale_41;
        _zz_ref_data = cha_i_ref_41;
        _zz_scale_1 = cha_q_scale_41;
        _zz_ref_data_1 = cha_q_ref_41;
      end
      6'b101010 : begin
        _zz_scale = cha_i_scale_42;
        _zz_ref_data = cha_i_ref_42;
        _zz_scale_1 = cha_q_scale_42;
        _zz_ref_data_1 = cha_q_ref_42;
      end
      6'b101011 : begin
        _zz_scale = cha_i_scale_43;
        _zz_ref_data = cha_i_ref_43;
        _zz_scale_1 = cha_q_scale_43;
        _zz_ref_data_1 = cha_q_ref_43;
      end
      6'b101100 : begin
        _zz_scale = cha_i_scale_44;
        _zz_ref_data = cha_i_ref_44;
        _zz_scale_1 = cha_q_scale_44;
        _zz_ref_data_1 = cha_q_ref_44;
      end
      6'b101101 : begin
        _zz_scale = cha_i_scale_45;
        _zz_ref_data = cha_i_ref_45;
        _zz_scale_1 = cha_q_scale_45;
        _zz_ref_data_1 = cha_q_ref_45;
      end
      6'b101110 : begin
        _zz_scale = cha_i_scale_46;
        _zz_ref_data = cha_i_ref_46;
        _zz_scale_1 = cha_q_scale_46;
        _zz_ref_data_1 = cha_q_ref_46;
      end
      6'b101111 : begin
        _zz_scale = cha_i_scale_47;
        _zz_ref_data = cha_i_ref_47;
        _zz_scale_1 = cha_q_scale_47;
        _zz_ref_data_1 = cha_q_ref_47;
      end
      6'b110000 : begin
        _zz_scale = cha_i_scale_48;
        _zz_ref_data = cha_i_ref_48;
        _zz_scale_1 = cha_q_scale_48;
        _zz_ref_data_1 = cha_q_ref_48;
      end
      6'b110001 : begin
        _zz_scale = cha_i_scale_49;
        _zz_ref_data = cha_i_ref_49;
        _zz_scale_1 = cha_q_scale_49;
        _zz_ref_data_1 = cha_q_ref_49;
      end
      6'b110010 : begin
        _zz_scale = cha_i_scale_50;
        _zz_ref_data = cha_i_ref_50;
        _zz_scale_1 = cha_q_scale_50;
        _zz_ref_data_1 = cha_q_ref_50;
      end
      6'b110011 : begin
        _zz_scale = cha_i_scale_51;
        _zz_ref_data = cha_i_ref_51;
        _zz_scale_1 = cha_q_scale_51;
        _zz_ref_data_1 = cha_q_ref_51;
      end
      6'b110100 : begin
        _zz_scale = cha_i_scale_52;
        _zz_ref_data = cha_i_ref_52;
        _zz_scale_1 = cha_q_scale_52;
        _zz_ref_data_1 = cha_q_ref_52;
      end
      6'b110101 : begin
        _zz_scale = cha_i_scale_53;
        _zz_ref_data = cha_i_ref_53;
        _zz_scale_1 = cha_q_scale_53;
        _zz_ref_data_1 = cha_q_ref_53;
      end
      6'b110110 : begin
        _zz_scale = cha_i_scale_54;
        _zz_ref_data = cha_i_ref_54;
        _zz_scale_1 = cha_q_scale_54;
        _zz_ref_data_1 = cha_q_ref_54;
      end
      6'b110111 : begin
        _zz_scale = cha_i_scale_55;
        _zz_ref_data = cha_i_ref_55;
        _zz_scale_1 = cha_q_scale_55;
        _zz_ref_data_1 = cha_q_ref_55;
      end
      6'b111000 : begin
        _zz_scale = cha_i_scale_56;
        _zz_ref_data = cha_i_ref_56;
        _zz_scale_1 = cha_q_scale_56;
        _zz_ref_data_1 = cha_q_ref_56;
      end
      6'b111001 : begin
        _zz_scale = cha_i_scale_57;
        _zz_ref_data = cha_i_ref_57;
        _zz_scale_1 = cha_q_scale_57;
        _zz_ref_data_1 = cha_q_ref_57;
      end
      6'b111010 : begin
        _zz_scale = cha_i_scale_58;
        _zz_ref_data = cha_i_ref_58;
        _zz_scale_1 = cha_q_scale_58;
        _zz_ref_data_1 = cha_q_ref_58;
      end
      6'b111011 : begin
        _zz_scale = cha_i_scale_59;
        _zz_ref_data = cha_i_ref_59;
        _zz_scale_1 = cha_q_scale_59;
        _zz_ref_data_1 = cha_q_ref_59;
      end
      6'b111100 : begin
        _zz_scale = cha_i_scale_60;
        _zz_ref_data = cha_i_ref_60;
        _zz_scale_1 = cha_q_scale_60;
        _zz_ref_data_1 = cha_q_ref_60;
      end
      6'b111101 : begin
        _zz_scale = cha_i_scale_61;
        _zz_ref_data = cha_i_ref_61;
        _zz_scale_1 = cha_q_scale_61;
        _zz_ref_data_1 = cha_q_ref_61;
      end
      6'b111110 : begin
        _zz_scale = cha_i_scale_62;
        _zz_ref_data = cha_i_ref_62;
        _zz_scale_1 = cha_q_scale_62;
        _zz_ref_data_1 = cha_q_ref_62;
      end
      default : begin
        _zz_scale = cha_i_scale_63;
        _zz_ref_data = cha_i_ref_63;
        _zz_scale_1 = cha_q_scale_63;
        _zz_ref_data_1 = cha_q_ref_63;
      end
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_OFDMEqualizer_l47 = (cnt == 6'h3f);
  assign i_zf_eq_scale = _zz_scale;
  assign i_zf_eq_ref_data = _zz_ref_data;
  assign q_zf_eq_scale = _zz_scale_1;
  assign q_zf_eq_ref_data = _zz_ref_data_1;
  assign when_OFDMEqualizer_l71 = (train_cnt == 6'h3f);
  assign _zz_1 = ({63'd0,1'b1} <<< train_cnt);
  assign _zz_2 = ({63'd0,1'b1} <<< train_cnt);
  assign when_OFDMEqualizer_l69 = ((i_zf_eq_result_data_valid && q_zf_eq_result_data_valid) && (! train_finished));
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign when_OFDMEqualizer_l78 = (raw_data_payload_last && raw_data_fire_1);
  assign when_OFDMEqualizer_l80 = (equalized_data_payload_last && equalized_data_valid);
  assign raw_data_ready = raw_data_ready_1;
  assign equalized_data_valid = (train_finished ? (i_zf_eq_result_data_valid && q_zf_eq_result_data_valid) : 1'b0);
  assign equalized_data_payload_fragment_cha_i = (train_finished ? i_zf_eq_result_data_payload : _zz_equalized_data_payload_fragment_cha_i);
  assign equalized_data_payload_fragment_cha_q = (train_finished ? q_zf_eq_result_data_payload : _zz_equalized_data_payload_fragment_cha_q);
  assign equalized_data_payload_last = raw_data_payload_last_delay_16;
  always @(posedge clk) begin
    cha_i_ref_0 <= 16'h0;
    cha_q_ref_0 <= 16'h0;
    cha_i_ref_1 <= 16'h0080;
    cha_q_ref_1 <= 16'h0;
    cha_i_ref_2 <= 16'hff80;
    cha_q_ref_2 <= 16'h0;
    cha_i_ref_3 <= 16'hff80;
    cha_q_ref_3 <= 16'h0;
    cha_i_ref_4 <= 16'h0080;
    cha_q_ref_4 <= 16'h0;
    cha_i_ref_5 <= 16'h0080;
    cha_q_ref_5 <= 16'h0;
    cha_i_ref_6 <= 16'hff80;
    cha_q_ref_6 <= 16'h0;
    cha_i_ref_7 <= 16'h0080;
    cha_q_ref_7 <= 16'h0;
    cha_i_ref_8 <= 16'hff80;
    cha_q_ref_8 <= 16'h0;
    cha_i_ref_9 <= 16'h0080;
    cha_q_ref_9 <= 16'h0;
    cha_i_ref_10 <= 16'hff80;
    cha_q_ref_10 <= 16'h0;
    cha_i_ref_11 <= 16'hff80;
    cha_q_ref_11 <= 16'h0;
    cha_i_ref_12 <= 16'hff80;
    cha_q_ref_12 <= 16'h0;
    cha_i_ref_13 <= 16'hff80;
    cha_q_ref_13 <= 16'h0;
    cha_i_ref_14 <= 16'hff80;
    cha_q_ref_14 <= 16'h0;
    cha_i_ref_15 <= 16'h0080;
    cha_q_ref_15 <= 16'h0;
    cha_i_ref_16 <= 16'h0080;
    cha_q_ref_16 <= 16'h0;
    cha_i_ref_17 <= 16'hff80;
    cha_q_ref_17 <= 16'h0;
    cha_i_ref_18 <= 16'hff80;
    cha_q_ref_18 <= 16'h0;
    cha_i_ref_19 <= 16'h0080;
    cha_q_ref_19 <= 16'h0;
    cha_i_ref_20 <= 16'hff80;
    cha_q_ref_20 <= 16'h0;
    cha_i_ref_21 <= 16'h0080;
    cha_q_ref_21 <= 16'h0;
    cha_i_ref_22 <= 16'hff80;
    cha_q_ref_22 <= 16'h0;
    cha_i_ref_23 <= 16'h0080;
    cha_q_ref_23 <= 16'h0;
    cha_i_ref_24 <= 16'h0080;
    cha_q_ref_24 <= 16'h0;
    cha_i_ref_25 <= 16'h0080;
    cha_q_ref_25 <= 16'h0;
    cha_i_ref_26 <= 16'h0080;
    cha_q_ref_26 <= 16'h0;
    cha_i_ref_27 <= 16'h0;
    cha_q_ref_27 <= 16'h0;
    cha_i_ref_28 <= 16'h0;
    cha_q_ref_28 <= 16'h0;
    cha_i_ref_29 <= 16'h0;
    cha_q_ref_29 <= 16'h0;
    cha_i_ref_30 <= 16'h0;
    cha_q_ref_30 <= 16'h0;
    cha_i_ref_31 <= 16'h0;
    cha_q_ref_31 <= 16'h0;
    cha_i_ref_32 <= 16'h0;
    cha_q_ref_32 <= 16'h0;
    cha_i_ref_33 <= 16'h0;
    cha_q_ref_33 <= 16'h0;
    cha_i_ref_34 <= 16'h0;
    cha_q_ref_34 <= 16'h0;
    cha_i_ref_35 <= 16'h0;
    cha_q_ref_35 <= 16'h0;
    cha_i_ref_36 <= 16'h0;
    cha_q_ref_36 <= 16'h0;
    cha_i_ref_37 <= 16'h0;
    cha_q_ref_37 <= 16'h0;
    cha_i_ref_38 <= 16'h0080;
    cha_q_ref_38 <= 16'h0;
    cha_i_ref_39 <= 16'h0080;
    cha_q_ref_39 <= 16'h0;
    cha_i_ref_40 <= 16'hff80;
    cha_q_ref_40 <= 16'h0;
    cha_i_ref_41 <= 16'hff80;
    cha_q_ref_41 <= 16'h0;
    cha_i_ref_42 <= 16'h0080;
    cha_q_ref_42 <= 16'h0;
    cha_i_ref_43 <= 16'h0080;
    cha_q_ref_43 <= 16'h0;
    cha_i_ref_44 <= 16'hff80;
    cha_q_ref_44 <= 16'h0;
    cha_i_ref_45 <= 16'h0080;
    cha_q_ref_45 <= 16'h0;
    cha_i_ref_46 <= 16'hff80;
    cha_q_ref_46 <= 16'h0;
    cha_i_ref_47 <= 16'h0080;
    cha_q_ref_47 <= 16'h0;
    cha_i_ref_48 <= 16'h0080;
    cha_q_ref_48 <= 16'h0;
    cha_i_ref_49 <= 16'h0080;
    cha_q_ref_49 <= 16'h0;
    cha_i_ref_50 <= 16'h0080;
    cha_q_ref_50 <= 16'h0;
    cha_i_ref_51 <= 16'h0080;
    cha_q_ref_51 <= 16'h0;
    cha_i_ref_52 <= 16'h0080;
    cha_q_ref_52 <= 16'h0;
    cha_i_ref_53 <= 16'hff80;
    cha_q_ref_53 <= 16'h0;
    cha_i_ref_54 <= 16'hff80;
    cha_q_ref_54 <= 16'h0;
    cha_i_ref_55 <= 16'h0080;
    cha_q_ref_55 <= 16'h0;
    cha_i_ref_56 <= 16'h0080;
    cha_q_ref_56 <= 16'h0;
    cha_i_ref_57 <= 16'hff80;
    cha_q_ref_57 <= 16'h0;
    cha_i_ref_58 <= 16'h0080;
    cha_q_ref_58 <= 16'h0;
    cha_i_ref_59 <= 16'hff80;
    cha_q_ref_59 <= 16'h0;
    cha_i_ref_60 <= 16'h0080;
    cha_q_ref_60 <= 16'h0;
    cha_i_ref_61 <= 16'h0080;
    cha_q_ref_61 <= 16'h0;
    cha_i_ref_62 <= 16'h0080;
    cha_q_ref_62 <= 16'h0;
    cha_i_ref_63 <= 16'h0080;
    cha_q_ref_63 <= 16'h0;
    if(!equalized_data_payload_last) begin
      if(when_OFDMEqualizer_l69) begin
        if(_zz_1[0]) begin
          cha_i_scale_0 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[1]) begin
          cha_i_scale_1 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[2]) begin
          cha_i_scale_2 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[3]) begin
          cha_i_scale_3 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[4]) begin
          cha_i_scale_4 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[5]) begin
          cha_i_scale_5 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[6]) begin
          cha_i_scale_6 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[7]) begin
          cha_i_scale_7 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[8]) begin
          cha_i_scale_8 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[9]) begin
          cha_i_scale_9 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[10]) begin
          cha_i_scale_10 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[11]) begin
          cha_i_scale_11 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[12]) begin
          cha_i_scale_12 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[13]) begin
          cha_i_scale_13 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[14]) begin
          cha_i_scale_14 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[15]) begin
          cha_i_scale_15 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[16]) begin
          cha_i_scale_16 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[17]) begin
          cha_i_scale_17 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[18]) begin
          cha_i_scale_18 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[19]) begin
          cha_i_scale_19 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[20]) begin
          cha_i_scale_20 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[21]) begin
          cha_i_scale_21 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[22]) begin
          cha_i_scale_22 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[23]) begin
          cha_i_scale_23 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[24]) begin
          cha_i_scale_24 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[25]) begin
          cha_i_scale_25 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[26]) begin
          cha_i_scale_26 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[27]) begin
          cha_i_scale_27 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[28]) begin
          cha_i_scale_28 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[29]) begin
          cha_i_scale_29 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[30]) begin
          cha_i_scale_30 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[31]) begin
          cha_i_scale_31 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[32]) begin
          cha_i_scale_32 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[33]) begin
          cha_i_scale_33 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[34]) begin
          cha_i_scale_34 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[35]) begin
          cha_i_scale_35 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[36]) begin
          cha_i_scale_36 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[37]) begin
          cha_i_scale_37 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[38]) begin
          cha_i_scale_38 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[39]) begin
          cha_i_scale_39 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[40]) begin
          cha_i_scale_40 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[41]) begin
          cha_i_scale_41 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[42]) begin
          cha_i_scale_42 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[43]) begin
          cha_i_scale_43 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[44]) begin
          cha_i_scale_44 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[45]) begin
          cha_i_scale_45 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[46]) begin
          cha_i_scale_46 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[47]) begin
          cha_i_scale_47 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[48]) begin
          cha_i_scale_48 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[49]) begin
          cha_i_scale_49 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[50]) begin
          cha_i_scale_50 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[51]) begin
          cha_i_scale_51 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[52]) begin
          cha_i_scale_52 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[53]) begin
          cha_i_scale_53 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[54]) begin
          cha_i_scale_54 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[55]) begin
          cha_i_scale_55 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[56]) begin
          cha_i_scale_56 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[57]) begin
          cha_i_scale_57 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[58]) begin
          cha_i_scale_58 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[59]) begin
          cha_i_scale_59 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[60]) begin
          cha_i_scale_60 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[61]) begin
          cha_i_scale_61 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[62]) begin
          cha_i_scale_62 <= i_zf_eq_result_data_payload;
        end
        if(_zz_1[63]) begin
          cha_i_scale_63 <= i_zf_eq_result_data_payload;
        end
        if(_zz_2[0]) begin
          cha_q_scale_0 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[1]) begin
          cha_q_scale_1 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[2]) begin
          cha_q_scale_2 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[3]) begin
          cha_q_scale_3 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[4]) begin
          cha_q_scale_4 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[5]) begin
          cha_q_scale_5 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[6]) begin
          cha_q_scale_6 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[7]) begin
          cha_q_scale_7 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[8]) begin
          cha_q_scale_8 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[9]) begin
          cha_q_scale_9 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[10]) begin
          cha_q_scale_10 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[11]) begin
          cha_q_scale_11 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[12]) begin
          cha_q_scale_12 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[13]) begin
          cha_q_scale_13 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[14]) begin
          cha_q_scale_14 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[15]) begin
          cha_q_scale_15 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[16]) begin
          cha_q_scale_16 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[17]) begin
          cha_q_scale_17 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[18]) begin
          cha_q_scale_18 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[19]) begin
          cha_q_scale_19 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[20]) begin
          cha_q_scale_20 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[21]) begin
          cha_q_scale_21 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[22]) begin
          cha_q_scale_22 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[23]) begin
          cha_q_scale_23 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[24]) begin
          cha_q_scale_24 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[25]) begin
          cha_q_scale_25 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[26]) begin
          cha_q_scale_26 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[27]) begin
          cha_q_scale_27 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[28]) begin
          cha_q_scale_28 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[29]) begin
          cha_q_scale_29 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[30]) begin
          cha_q_scale_30 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[31]) begin
          cha_q_scale_31 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[32]) begin
          cha_q_scale_32 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[33]) begin
          cha_q_scale_33 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[34]) begin
          cha_q_scale_34 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[35]) begin
          cha_q_scale_35 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[36]) begin
          cha_q_scale_36 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[37]) begin
          cha_q_scale_37 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[38]) begin
          cha_q_scale_38 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[39]) begin
          cha_q_scale_39 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[40]) begin
          cha_q_scale_40 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[41]) begin
          cha_q_scale_41 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[42]) begin
          cha_q_scale_42 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[43]) begin
          cha_q_scale_43 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[44]) begin
          cha_q_scale_44 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[45]) begin
          cha_q_scale_45 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[46]) begin
          cha_q_scale_46 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[47]) begin
          cha_q_scale_47 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[48]) begin
          cha_q_scale_48 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[49]) begin
          cha_q_scale_49 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[50]) begin
          cha_q_scale_50 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[51]) begin
          cha_q_scale_51 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[52]) begin
          cha_q_scale_52 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[53]) begin
          cha_q_scale_53 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[54]) begin
          cha_q_scale_54 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[55]) begin
          cha_q_scale_55 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[56]) begin
          cha_q_scale_56 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[57]) begin
          cha_q_scale_57 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[58]) begin
          cha_q_scale_58 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[59]) begin
          cha_q_scale_59 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[60]) begin
          cha_q_scale_60 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[61]) begin
          cha_q_scale_61 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[62]) begin
          cha_q_scale_62 <= q_zf_eq_result_data_payload;
        end
        if(_zz_2[63]) begin
          cha_q_scale_63 <= q_zf_eq_result_data_payload;
        end
      end
    end
    raw_data_payload_last_delay_1 <= raw_data_payload_last;
    raw_data_payload_last_delay_2 <= raw_data_payload_last_delay_1;
    raw_data_payload_last_delay_3 <= raw_data_payload_last_delay_2;
    raw_data_payload_last_delay_4 <= raw_data_payload_last_delay_3;
    raw_data_payload_last_delay_5 <= raw_data_payload_last_delay_4;
    raw_data_payload_last_delay_6 <= raw_data_payload_last_delay_5;
    raw_data_payload_last_delay_7 <= raw_data_payload_last_delay_6;
    raw_data_payload_last_delay_8 <= raw_data_payload_last_delay_7;
    raw_data_payload_last_delay_9 <= raw_data_payload_last_delay_8;
    raw_data_payload_last_delay_10 <= raw_data_payload_last_delay_9;
    raw_data_payload_last_delay_11 <= raw_data_payload_last_delay_10;
    raw_data_payload_last_delay_12 <= raw_data_payload_last_delay_11;
    raw_data_payload_last_delay_13 <= raw_data_payload_last_delay_12;
    raw_data_payload_last_delay_14 <= raw_data_payload_last_delay_13;
    raw_data_payload_last_delay_15 <= raw_data_payload_last_delay_14;
    raw_data_payload_last_delay_16 <= raw_data_payload_last_delay_15;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 6'h0;
      train_en <= 1'b1;
      train_cnt <= 6'h0;
      train_finished <= 1'b0;
      raw_data_ready_1 <= 1'b1;
    end else begin
      if(raw_data_payload_last) begin
        cnt <= 6'h0;
      end else begin
        if(raw_data_fire) begin
          cnt <= ((cnt == 6'h3f) ? 6'h0 : _zz_cnt);
        end
      end
      if(equalized_data_payload_last) begin
        train_en <= 1'b1;
      end else begin
        if(when_OFDMEqualizer_l47) begin
          train_en <= 1'b0;
        end
      end
      if(equalized_data_payload_last) begin
        train_cnt <= 6'h0;
        train_finished <= 1'b0;
      end else begin
        if(when_OFDMEqualizer_l69) begin
          train_cnt <= (train_cnt + 6'h01);
          if(when_OFDMEqualizer_l71) begin
            train_finished <= 1'b1;
          end
        end
      end
      if(when_OFDMEqualizer_l78) begin
        raw_data_ready_1 <= 1'b0;
      end else begin
        if(when_OFDMEqualizer_l80) begin
          raw_data_ready_1 <= 1'b1;
        end
      end
    end
  end


endmodule

//ZeroForcing replaced by ZeroForcing

module ZeroForcing (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [15:0]   raw_data_payload,
  input      [15:0]   scale,
  input      [15:0]   ref_data,
  input               train_en,
  output              result_data_valid,
  output     [15:0]   result_data_payload,
  input               clk,
  input               reset
);
  wire                cal_core_rotate_mode;
  wire       [15:0]   cal_core_raw_data_payload_x;
  wire       [15:0]   cal_core_raw_data_payload_y;
  wire       [15:0]   cal_core_raw_data_payload_z;
  wire                cal_core_raw_data_ready;
  wire                cal_core_result_valid;
  wire       [15:0]   cal_core_result_payload_x;
  wire       [15:0]   cal_core_result_payload_y;
  wire       [15:0]   cal_core_result_payload_z;
  wire       [15:0]   _zz_raw_data_payload_x;
  wire       [15:0]   _zz_raw_data_payload_x_1;
  wire       [15:0]   _zz_raw_data_payload_x_2;
  wire       [15:0]   _zz_raw_data_payload_x_3;
  wire       [0:0]    _zz_raw_data_payload_x_4;
  wire       [15:0]   _zz_raw_data_payload_y;
  wire       [15:0]   _zz_raw_data_payload_z;
  wire       [15:0]   _zz_mul_result;
  wire       [15:0]   _zz_div_result;
  reg                 _zz_x_sign;
  reg                 _zz_x_sign_1;
  reg                 _zz_x_sign_2;
  reg                 _zz_x_sign_3;
  reg                 _zz_x_sign_4;
  reg                 _zz_x_sign_5;
  reg                 _zz_x_sign_6;
  reg                 _zz_x_sign_7;
  reg                 _zz_x_sign_8;
  reg                 _zz_x_sign_9;
  reg                 _zz_x_sign_10;
  reg                 _zz_x_sign_11;
  reg                 _zz_x_sign_12;
  reg                 _zz_x_sign_13;
  reg                 _zz_x_sign_14;
  reg                 x_sign;
  wire       [15:0]   mul_result;
  wire       [15:0]   div_result;
  reg                 train_en_delay_1;
  reg                 train_en_delay_2;
  reg                 train_en_delay_3;
  reg                 train_en_delay_4;
  reg                 train_en_delay_5;
  reg                 train_en_delay_6;
  reg                 train_en_delay_7;
  reg                 train_en_delay_8;
  reg                 train_en_delay_9;
  reg                 train_en_delay_10;
  reg                 train_en_delay_11;
  reg                 train_en_delay_12;
  reg                 train_en_delay_13;
  reg                 train_en_delay_14;
  reg                 train_en_delay_15;
  reg                 train_en_delay_16;

  assign _zz_raw_data_payload_x = (_zz_raw_data_payload_x_1 + _zz_raw_data_payload_x_3);
  assign _zz_raw_data_payload_x_1 = (raw_data_payload[15] ? _zz_raw_data_payload_x_2 : raw_data_payload);
  assign _zz_raw_data_payload_x_2 = (~ raw_data_payload);
  assign _zz_raw_data_payload_x_4 = raw_data_payload[15];
  assign _zz_raw_data_payload_x_3 = {15'd0, _zz_raw_data_payload_x_4};
  assign _zz_raw_data_payload_y = 16'h0;
  assign _zz_raw_data_payload_z = 16'h0;
  assign _zz_mul_result = (- cal_core_result_payload_y);
  assign _zz_div_result = (- cal_core_result_payload_z);
  CordicRotator cal_core (
    .rotate_mode           (cal_core_rotate_mode         ), //i
    .x_u                   (2'b01                        ), //i
    .raw_data_valid        (raw_data_valid               ), //i
    .raw_data_ready        (cal_core_raw_data_ready      ), //o
    .raw_data_payload_x    (cal_core_raw_data_payload_x  ), //i
    .raw_data_payload_y    (cal_core_raw_data_payload_y  ), //i
    .raw_data_payload_z    (cal_core_raw_data_payload_z  ), //i
    .result_valid          (cal_core_result_valid        ), //o
    .result_payload_x      (cal_core_result_payload_x    ), //o
    .result_payload_y      (cal_core_result_payload_y    ), //o
    .result_payload_z      (cal_core_result_payload_z    ), //o
    .clk                   (clk                          ), //i
    .reset                 (reset                        )  //i
  );
  assign cal_core_raw_data_payload_x = _zz_raw_data_payload_x;
  assign cal_core_raw_data_payload_y = (train_en ? ref_data : _zz_raw_data_payload_y);
  assign cal_core_raw_data_payload_z = (train_en ? _zz_raw_data_payload_z : scale);
  assign raw_data_ready = cal_core_raw_data_ready;
  assign cal_core_rotate_mode = (! train_en);
  assign result_data_valid = cal_core_result_valid;
  assign mul_result = (x_sign ? _zz_mul_result : cal_core_result_payload_y);
  assign div_result = (x_sign ? _zz_div_result : cal_core_result_payload_z);
  assign result_data_payload = (train_en_delay_16 ? div_result : mul_result);
  always @(posedge clk) begin
    _zz_x_sign <= raw_data_payload[15];
    _zz_x_sign_1 <= _zz_x_sign;
    _zz_x_sign_2 <= _zz_x_sign_1;
    _zz_x_sign_3 <= _zz_x_sign_2;
    _zz_x_sign_4 <= _zz_x_sign_3;
    _zz_x_sign_5 <= _zz_x_sign_4;
    _zz_x_sign_6 <= _zz_x_sign_5;
    _zz_x_sign_7 <= _zz_x_sign_6;
    _zz_x_sign_8 <= _zz_x_sign_7;
    _zz_x_sign_9 <= _zz_x_sign_8;
    _zz_x_sign_10 <= _zz_x_sign_9;
    _zz_x_sign_11 <= _zz_x_sign_10;
    _zz_x_sign_12 <= _zz_x_sign_11;
    _zz_x_sign_13 <= _zz_x_sign_12;
    _zz_x_sign_14 <= _zz_x_sign_13;
    x_sign <= _zz_x_sign_14;
    train_en_delay_1 <= train_en;
    train_en_delay_2 <= train_en_delay_1;
    train_en_delay_3 <= train_en_delay_2;
    train_en_delay_4 <= train_en_delay_3;
    train_en_delay_5 <= train_en_delay_4;
    train_en_delay_6 <= train_en_delay_5;
    train_en_delay_7 <= train_en_delay_6;
    train_en_delay_8 <= train_en_delay_7;
    train_en_delay_9 <= train_en_delay_8;
    train_en_delay_10 <= train_en_delay_9;
    train_en_delay_11 <= train_en_delay_10;
    train_en_delay_12 <= train_en_delay_11;
    train_en_delay_13 <= train_en_delay_12;
    train_en_delay_14 <= train_en_delay_13;
    train_en_delay_15 <= train_en_delay_14;
    train_en_delay_16 <= train_en_delay_15;
  end


endmodule

//CordicRotator replaced by CordicRotator

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
  wire       [15:0]   _zz__zz_result_payload_x_1;
  wire       [15:0]   _zz__zz_result_payload_x_1_1;
  wire       [15:0]   _zz__zz_result_payload_x_1_2;
  wire       [15:0]   _zz__zz_result_payload_x_1_3;
  wire       [15:0]   _zz__zz_result_payload_x_17;
  wire       [15:0]   _zz__zz_result_payload_x_17_1;
  wire       [15:0]   _zz__zz_result_payload_x_32;
  wire       [15:0]   _zz__zz_result_payload_x_32_1;
  wire       [15:0]   _zz__zz_result_payload_x_2;
  wire       [15:0]   _zz__zz_result_payload_x_2_1;
  wire       [15:0]   _zz__zz_result_payload_x_2_2;
  wire       [15:0]   _zz__zz_result_payload_x_2_3;
  wire       [15:0]   _zz__zz_result_payload_x_18;
  wire       [15:0]   _zz__zz_result_payload_x_18_1;
  wire       [15:0]   _zz__zz_result_payload_x_33;
  wire       [15:0]   _zz__zz_result_payload_x_33_1;
  wire       [15:0]   _zz__zz_result_payload_x_3;
  wire       [15:0]   _zz__zz_result_payload_x_3_1;
  wire       [15:0]   _zz__zz_result_payload_x_3_2;
  wire       [15:0]   _zz__zz_result_payload_x_3_3;
  wire       [15:0]   _zz__zz_result_payload_x_19;
  wire       [15:0]   _zz__zz_result_payload_x_19_1;
  wire       [15:0]   _zz__zz_result_payload_x_34;
  wire       [15:0]   _zz__zz_result_payload_x_34_1;
  wire       [15:0]   _zz__zz_result_payload_x_4;
  wire       [15:0]   _zz__zz_result_payload_x_4_1;
  wire       [15:0]   _zz__zz_result_payload_x_4_2;
  wire       [15:0]   _zz__zz_result_payload_x_4_3;
  wire       [15:0]   _zz__zz_result_payload_x_20;
  wire       [15:0]   _zz__zz_result_payload_x_20_1;
  wire       [15:0]   _zz__zz_result_payload_x_35;
  wire       [15:0]   _zz__zz_result_payload_x_35_1;
  wire       [15:0]   _zz__zz_result_payload_x_5;
  wire       [15:0]   _zz__zz_result_payload_x_5_1;
  wire       [15:0]   _zz__zz_result_payload_x_5_2;
  wire       [15:0]   _zz__zz_result_payload_x_5_3;
  wire       [15:0]   _zz__zz_result_payload_x_21;
  wire       [15:0]   _zz__zz_result_payload_x_21_1;
  wire       [15:0]   _zz__zz_result_payload_x_36;
  wire       [15:0]   _zz__zz_result_payload_x_36_1;
  wire       [15:0]   _zz__zz_result_payload_x_6;
  wire       [15:0]   _zz__zz_result_payload_x_6_1;
  wire       [15:0]   _zz__zz_result_payload_x_6_2;
  wire       [15:0]   _zz__zz_result_payload_x_6_3;
  wire       [15:0]   _zz__zz_result_payload_x_22;
  wire       [15:0]   _zz__zz_result_payload_x_22_1;
  wire       [15:0]   _zz__zz_result_payload_x_37;
  wire       [15:0]   _zz__zz_result_payload_x_37_1;
  wire       [15:0]   _zz__zz_result_payload_x_7;
  wire       [15:0]   _zz__zz_result_payload_x_7_1;
  wire       [15:0]   _zz__zz_result_payload_x_7_2;
  wire       [15:0]   _zz__zz_result_payload_x_7_3;
  wire       [15:0]   _zz__zz_result_payload_x_23;
  wire       [15:0]   _zz__zz_result_payload_x_23_1;
  wire       [15:0]   _zz__zz_result_payload_x_38;
  wire       [15:0]   _zz__zz_result_payload_x_38_1;
  wire       [15:0]   _zz__zz_result_payload_x_8;
  wire       [15:0]   _zz__zz_result_payload_x_8_1;
  wire       [15:0]   _zz__zz_result_payload_x_8_2;
  wire       [15:0]   _zz__zz_result_payload_x_8_3;
  wire       [15:0]   _zz__zz_result_payload_x_24;
  wire       [15:0]   _zz__zz_result_payload_x_24_1;
  wire       [15:0]   _zz__zz_result_payload_x_39;
  wire       [15:0]   _zz__zz_result_payload_x_39_1;
  wire       [15:0]   _zz__zz_result_payload_x_9;
  wire       [15:0]   _zz__zz_result_payload_x_9_1;
  wire       [15:0]   _zz__zz_result_payload_x_9_2;
  wire       [15:0]   _zz__zz_result_payload_x_9_3;
  wire       [15:0]   _zz__zz_result_payload_x_25;
  wire       [15:0]   _zz__zz_result_payload_x_25_1;
  wire       [15:0]   _zz__zz_result_payload_x_40;
  wire       [15:0]   _zz__zz_result_payload_x_40_1;
  wire       [15:0]   _zz__zz_result_payload_x_10;
  wire       [15:0]   _zz__zz_result_payload_x_10_1;
  wire       [15:0]   _zz__zz_result_payload_x_10_2;
  wire       [15:0]   _zz__zz_result_payload_x_10_3;
  wire       [15:0]   _zz__zz_result_payload_x_26;
  wire       [15:0]   _zz__zz_result_payload_x_26_1;
  wire       [15:0]   _zz__zz_result_payload_x_41;
  wire       [15:0]   _zz__zz_result_payload_x_41_1;
  wire       [15:0]   _zz__zz_result_payload_x_11;
  wire       [15:0]   _zz__zz_result_payload_x_11_1;
  wire       [15:0]   _zz__zz_result_payload_x_11_2;
  wire       [15:0]   _zz__zz_result_payload_x_11_3;
  wire       [15:0]   _zz__zz_result_payload_x_27;
  wire       [15:0]   _zz__zz_result_payload_x_27_1;
  wire       [15:0]   _zz__zz_result_payload_x_42;
  wire       [15:0]   _zz__zz_result_payload_x_42_1;
  wire       [15:0]   _zz__zz_result_payload_x_12;
  wire       [15:0]   _zz__zz_result_payload_x_12_1;
  wire       [15:0]   _zz__zz_result_payload_x_12_2;
  wire       [15:0]   _zz__zz_result_payload_x_12_3;
  wire       [15:0]   _zz__zz_result_payload_x_28;
  wire       [15:0]   _zz__zz_result_payload_x_28_1;
  wire       [15:0]   _zz__zz_result_payload_x_43;
  wire       [15:0]   _zz__zz_result_payload_x_43_1;
  wire       [15:0]   _zz__zz_result_payload_x_13;
  wire       [15:0]   _zz__zz_result_payload_x_13_1;
  wire       [15:0]   _zz__zz_result_payload_x_13_2;
  wire       [15:0]   _zz__zz_result_payload_x_13_3;
  wire       [15:0]   _zz__zz_result_payload_x_29;
  wire       [15:0]   _zz__zz_result_payload_x_29_1;
  wire       [15:0]   _zz__zz_result_payload_x_44;
  wire       [15:0]   _zz__zz_result_payload_x_44_1;
  wire       [15:0]   _zz__zz_result_payload_x_14;
  wire       [15:0]   _zz__zz_result_payload_x_14_1;
  wire       [15:0]   _zz__zz_result_payload_x_14_2;
  wire       [15:0]   _zz__zz_result_payload_x_14_3;
  wire       [15:0]   _zz__zz_result_payload_x_30;
  wire       [15:0]   _zz__zz_result_payload_x_30_1;
  wire       [15:0]   _zz__zz_result_payload_x_45;
  wire       [15:0]   _zz__zz_result_payload_x_45_1;
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
  reg        [15:0]   _zz_result_payload_x_61;
  reg        [15:0]   _zz_result_payload_x_62;
  reg        [15:0]   _zz_result_payload_x_63;
  reg        [15:0]   _zz_result_payload_x_64;
  reg        [15:0]   _zz_result_payload_x_65;
  reg        [15:0]   _zz_result_payload_x_66;
  reg        [15:0]   _zz_result_payload_x_67;
  reg        [15:0]   _zz_result_payload_x_68;
  reg        [15:0]   _zz_result_payload_x_69;
  reg        [15:0]   _zz_result_payload_x_70;
  reg        [15:0]   _zz_result_payload_x_71;
  reg        [15:0]   _zz_result_payload_x_72;
  reg        [15:0]   _zz_result_payload_x_73;
  reg        [15:0]   _zz_result_payload_x_74;
  reg        [15:0]   _zz_result_payload_z_1;
  wire                raw_data_fire;
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
  wire       [15:0]   _zz_result_payload_x_103;
  wire       [15:0]   _zz_result_payload_x_104;
  wire                _zz_result_payload_x_105;
  wire       [15:0]   _zz_result_payload_x_106;
  wire       [15:0]   _zz_result_payload_x_107;
  wire                _zz_result_payload_x_108;
  wire       [15:0]   _zz_result_payload_x_109;
  wire       [15:0]   _zz_result_payload_x_110;
  wire                _zz_result_payload_x_111;
  wire       [15:0]   _zz_result_payload_x_112;
  wire       [15:0]   _zz_result_payload_x_113;
  wire                _zz_result_payload_x_114;
  wire       [15:0]   _zz_result_payload_x_115;
  wire       [15:0]   _zz_result_payload_x_116;
  wire                _zz_result_payload_x_117;
  wire       [15:0]   _zz_result_payload_y_1;
  wire       [15:0]   _zz_result_payload_x_118;

  assign _zz__zz_result_payload_x_1 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_1_1 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_1_2 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_1_3 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_17 = ($signed(_zz_result_payload_x_16) + $signed(_zz_result_payload_x_76));
  assign _zz__zz_result_payload_x_17_1 = ($signed(_zz_result_payload_x_16) - $signed(_zz_result_payload_x_76));
  assign _zz__zz_result_payload_x_32 = ($signed(_zz_result_payload_x_31) - $signed(_zz_result_payload_x_61));
  assign _zz__zz_result_payload_x_32_1 = ($signed(_zz_result_payload_x_31) + $signed(_zz_result_payload_x_61));
  assign _zz__zz_result_payload_x_2 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_2_1 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_2_2 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_2_3 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_18 = ($signed(_zz_result_payload_x_17) + $signed(_zz_result_payload_x_79));
  assign _zz__zz_result_payload_x_18_1 = ($signed(_zz_result_payload_x_17) - $signed(_zz_result_payload_x_79));
  assign _zz__zz_result_payload_x_33 = ($signed(_zz_result_payload_x_32) - $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_33_1 = ($signed(_zz_result_payload_x_32) + $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_3_1 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_3_2 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_3_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_19 = ($signed(_zz_result_payload_x_18) + $signed(_zz_result_payload_x_82));
  assign _zz__zz_result_payload_x_19_1 = ($signed(_zz_result_payload_x_18) - $signed(_zz_result_payload_x_82));
  assign _zz__zz_result_payload_x_34 = ($signed(_zz_result_payload_x_33) - $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_34_1 = ($signed(_zz_result_payload_x_33) + $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_4 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_4_1 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_4_2 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_4_3 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_20 = ($signed(_zz_result_payload_x_19) + $signed(_zz_result_payload_x_85));
  assign _zz__zz_result_payload_x_20_1 = ($signed(_zz_result_payload_x_19) - $signed(_zz_result_payload_x_85));
  assign _zz__zz_result_payload_x_35 = ($signed(_zz_result_payload_x_34) - $signed(_zz_result_payload_x_64));
  assign _zz__zz_result_payload_x_35_1 = ($signed(_zz_result_payload_x_34) + $signed(_zz_result_payload_x_64));
  assign _zz__zz_result_payload_x_5 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_5_1 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_5_2 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_5_3 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_21 = ($signed(_zz_result_payload_x_20) + $signed(_zz_result_payload_x_88));
  assign _zz__zz_result_payload_x_21_1 = ($signed(_zz_result_payload_x_20) - $signed(_zz_result_payload_x_88));
  assign _zz__zz_result_payload_x_36 = ($signed(_zz_result_payload_x_35) - $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_36_1 = ($signed(_zz_result_payload_x_35) + $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_6 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_6_1 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_6_2 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_6_3 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_22 = ($signed(_zz_result_payload_x_21) + $signed(_zz_result_payload_x_91));
  assign _zz__zz_result_payload_x_22_1 = ($signed(_zz_result_payload_x_21) - $signed(_zz_result_payload_x_91));
  assign _zz__zz_result_payload_x_37 = ($signed(_zz_result_payload_x_36) - $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_37_1 = ($signed(_zz_result_payload_x_36) + $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_7 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_7_1 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_7_2 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_7_3 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_23 = ($signed(_zz_result_payload_x_22) + $signed(_zz_result_payload_x_94));
  assign _zz__zz_result_payload_x_23_1 = ($signed(_zz_result_payload_x_22) - $signed(_zz_result_payload_x_94));
  assign _zz__zz_result_payload_x_38 = ($signed(_zz_result_payload_x_37) - $signed(_zz_result_payload_x_67));
  assign _zz__zz_result_payload_x_38_1 = ($signed(_zz_result_payload_x_37) + $signed(_zz_result_payload_x_67));
  assign _zz__zz_result_payload_x_8 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_8_1 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_8_2 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_8_3 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_24 = ($signed(_zz_result_payload_x_23) + $signed(_zz_result_payload_x_97));
  assign _zz__zz_result_payload_x_24_1 = ($signed(_zz_result_payload_x_23) - $signed(_zz_result_payload_x_97));
  assign _zz__zz_result_payload_x_39 = ($signed(_zz_result_payload_x_38) - $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_39_1 = ($signed(_zz_result_payload_x_38) + $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_9 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_9_1 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_9_2 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_9_3 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_25 = ($signed(_zz_result_payload_x_24) + $signed(_zz_result_payload_x_100));
  assign _zz__zz_result_payload_x_25_1 = ($signed(_zz_result_payload_x_24) - $signed(_zz_result_payload_x_100));
  assign _zz__zz_result_payload_x_40 = ($signed(_zz_result_payload_x_39) - $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_40_1 = ($signed(_zz_result_payload_x_39) + $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_10 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_104));
  assign _zz__zz_result_payload_x_10_1 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_104));
  assign _zz__zz_result_payload_x_10_2 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_104));
  assign _zz__zz_result_payload_x_10_3 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_104));
  assign _zz__zz_result_payload_x_26 = ($signed(_zz_result_payload_x_25) + $signed(_zz_result_payload_x_103));
  assign _zz__zz_result_payload_x_26_1 = ($signed(_zz_result_payload_x_25) - $signed(_zz_result_payload_x_103));
  assign _zz__zz_result_payload_x_41 = ($signed(_zz_result_payload_x_40) - $signed(_zz_result_payload_x_70));
  assign _zz__zz_result_payload_x_41_1 = ($signed(_zz_result_payload_x_40) + $signed(_zz_result_payload_x_70));
  assign _zz__zz_result_payload_x_11 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_107));
  assign _zz__zz_result_payload_x_11_1 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_107));
  assign _zz__zz_result_payload_x_11_2 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_107));
  assign _zz__zz_result_payload_x_11_3 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_107));
  assign _zz__zz_result_payload_x_27 = ($signed(_zz_result_payload_x_26) + $signed(_zz_result_payload_x_106));
  assign _zz__zz_result_payload_x_27_1 = ($signed(_zz_result_payload_x_26) - $signed(_zz_result_payload_x_106));
  assign _zz__zz_result_payload_x_42 = ($signed(_zz_result_payload_x_41) - $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_42_1 = ($signed(_zz_result_payload_x_41) + $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_12 = ($signed(_zz_result_payload_x_11) - $signed(_zz_result_payload_x_110));
  assign _zz__zz_result_payload_x_12_1 = ($signed(_zz_result_payload_x_11) + $signed(_zz_result_payload_x_110));
  assign _zz__zz_result_payload_x_12_2 = ($signed(_zz_result_payload_x_11) + $signed(_zz_result_payload_x_110));
  assign _zz__zz_result_payload_x_12_3 = ($signed(_zz_result_payload_x_11) - $signed(_zz_result_payload_x_110));
  assign _zz__zz_result_payload_x_28 = ($signed(_zz_result_payload_x_27) + $signed(_zz_result_payload_x_109));
  assign _zz__zz_result_payload_x_28_1 = ($signed(_zz_result_payload_x_27) - $signed(_zz_result_payload_x_109));
  assign _zz__zz_result_payload_x_43 = ($signed(_zz_result_payload_x_42) - $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_43_1 = ($signed(_zz_result_payload_x_42) + $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_13 = ($signed(_zz_result_payload_x_12) - $signed(_zz_result_payload_x_113));
  assign _zz__zz_result_payload_x_13_1 = ($signed(_zz_result_payload_x_12) + $signed(_zz_result_payload_x_113));
  assign _zz__zz_result_payload_x_13_2 = ($signed(_zz_result_payload_x_12) + $signed(_zz_result_payload_x_113));
  assign _zz__zz_result_payload_x_13_3 = ($signed(_zz_result_payload_x_12) - $signed(_zz_result_payload_x_113));
  assign _zz__zz_result_payload_x_29 = ($signed(_zz_result_payload_x_28) + $signed(_zz_result_payload_x_112));
  assign _zz__zz_result_payload_x_29_1 = ($signed(_zz_result_payload_x_28) - $signed(_zz_result_payload_x_112));
  assign _zz__zz_result_payload_x_44 = ($signed(_zz_result_payload_x_43) - $signed(_zz_result_payload_x_73));
  assign _zz__zz_result_payload_x_44_1 = ($signed(_zz_result_payload_x_43) + $signed(_zz_result_payload_x_73));
  assign _zz__zz_result_payload_x_14 = ($signed(_zz_result_payload_x_13) - $signed(_zz_result_payload_x_116));
  assign _zz__zz_result_payload_x_14_1 = ($signed(_zz_result_payload_x_13) + $signed(_zz_result_payload_x_116));
  assign _zz__zz_result_payload_x_14_2 = ($signed(_zz_result_payload_x_13) + $signed(_zz_result_payload_x_116));
  assign _zz__zz_result_payload_x_14_3 = ($signed(_zz_result_payload_x_13) - $signed(_zz_result_payload_x_116));
  assign _zz__zz_result_payload_x_30 = ($signed(_zz_result_payload_x_29) + $signed(_zz_result_payload_x_115));
  assign _zz__zz_result_payload_x_30_1 = ($signed(_zz_result_payload_x_29) - $signed(_zz_result_payload_x_115));
  assign _zz__zz_result_payload_x_45 = ($signed(_zz_result_payload_x_44) - $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_45_1 = ($signed(_zz_result_payload_x_44) + $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_15 = ($signed(_zz_result_payload_x_14) - $signed(_zz_result_payload_x_118));
  assign _zz__zz_result_payload_x_15_1 = ($signed(_zz_result_payload_x_14) + $signed(_zz_result_payload_x_118));
  assign _zz__zz_result_payload_x_15_2 = ($signed(_zz_result_payload_x_14) + $signed(_zz_result_payload_x_118));
  assign _zz__zz_result_payload_x_15_3 = ($signed(_zz_result_payload_x_14) - $signed(_zz_result_payload_x_118));
  assign _zz__zz_result_payload_y = ($signed(_zz_result_payload_x_30) + $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_y_1 = ($signed(_zz_result_payload_x_30) - $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_z = ($signed(_zz_result_payload_x_45) - $signed(_zz_result_payload_z_1));
  assign _zz__zz_result_payload_z_1 = ($signed(_zz_result_payload_x_45) + $signed(_zz_result_payload_z_1));
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign _zz_result_payload_x_75 = (_zz_result_payload_x_46 ? (! _zz_result_payload_x_31[15]) : _zz_result_payload_x_16[15]);
  assign _zz_result_payload_x_76 = ($signed(_zz_result_payload_x) >>> 0);
  assign _zz_result_payload_x_77 = ($signed(_zz_result_payload_x_16) >>> 0);
  assign _zz_result_payload_x_78 = (_zz_result_payload_x_47 ? (! _zz_result_payload_x_32[15]) : _zz_result_payload_x_17[15]);
  assign _zz_result_payload_x_79 = ($signed(_zz_result_payload_x_1) >>> 1);
  assign _zz_result_payload_x_80 = ($signed(_zz_result_payload_x_17) >>> 1);
  assign _zz_result_payload_x_81 = (_zz_result_payload_x_48 ? (! _zz_result_payload_x_33[15]) : _zz_result_payload_x_18[15]);
  assign _zz_result_payload_x_82 = ($signed(_zz_result_payload_x_2) >>> 2);
  assign _zz_result_payload_x_83 = ($signed(_zz_result_payload_x_18) >>> 2);
  assign _zz_result_payload_x_84 = (_zz_result_payload_x_49 ? (! _zz_result_payload_x_34[15]) : _zz_result_payload_x_19[15]);
  assign _zz_result_payload_x_85 = ($signed(_zz_result_payload_x_3) >>> 3);
  assign _zz_result_payload_x_86 = ($signed(_zz_result_payload_x_19) >>> 3);
  assign _zz_result_payload_x_87 = (_zz_result_payload_x_50 ? (! _zz_result_payload_x_35[15]) : _zz_result_payload_x_20[15]);
  assign _zz_result_payload_x_88 = ($signed(_zz_result_payload_x_4) >>> 4);
  assign _zz_result_payload_x_89 = ($signed(_zz_result_payload_x_20) >>> 4);
  assign _zz_result_payload_x_90 = (_zz_result_payload_x_51 ? (! _zz_result_payload_x_36[15]) : _zz_result_payload_x_21[15]);
  assign _zz_result_payload_x_91 = ($signed(_zz_result_payload_x_5) >>> 5);
  assign _zz_result_payload_x_92 = ($signed(_zz_result_payload_x_21) >>> 5);
  assign _zz_result_payload_x_93 = (_zz_result_payload_x_52 ? (! _zz_result_payload_x_37[15]) : _zz_result_payload_x_22[15]);
  assign _zz_result_payload_x_94 = ($signed(_zz_result_payload_x_6) >>> 6);
  assign _zz_result_payload_x_95 = ($signed(_zz_result_payload_x_22) >>> 6);
  assign _zz_result_payload_x_96 = (_zz_result_payload_x_53 ? (! _zz_result_payload_x_38[15]) : _zz_result_payload_x_23[15]);
  assign _zz_result_payload_x_97 = ($signed(_zz_result_payload_x_7) >>> 7);
  assign _zz_result_payload_x_98 = ($signed(_zz_result_payload_x_23) >>> 7);
  assign _zz_result_payload_x_99 = (_zz_result_payload_x_54 ? (! _zz_result_payload_x_39[15]) : _zz_result_payload_x_24[15]);
  assign _zz_result_payload_x_100 = ($signed(_zz_result_payload_x_8) >>> 8);
  assign _zz_result_payload_x_101 = ($signed(_zz_result_payload_x_24) >>> 8);
  assign _zz_result_payload_x_102 = (_zz_result_payload_x_55 ? (! _zz_result_payload_x_40[15]) : _zz_result_payload_x_25[15]);
  assign _zz_result_payload_x_103 = ($signed(_zz_result_payload_x_9) >>> 9);
  assign _zz_result_payload_x_104 = ($signed(_zz_result_payload_x_25) >>> 9);
  assign _zz_result_payload_x_105 = (_zz_result_payload_x_56 ? (! _zz_result_payload_x_41[15]) : _zz_result_payload_x_26[15]);
  assign _zz_result_payload_x_106 = ($signed(_zz_result_payload_x_10) >>> 10);
  assign _zz_result_payload_x_107 = ($signed(_zz_result_payload_x_26) >>> 10);
  assign _zz_result_payload_x_108 = (_zz_result_payload_x_57 ? (! _zz_result_payload_x_42[15]) : _zz_result_payload_x_27[15]);
  assign _zz_result_payload_x_109 = ($signed(_zz_result_payload_x_11) >>> 11);
  assign _zz_result_payload_x_110 = ($signed(_zz_result_payload_x_27) >>> 11);
  assign _zz_result_payload_x_111 = (_zz_result_payload_x_58 ? (! _zz_result_payload_x_43[15]) : _zz_result_payload_x_28[15]);
  assign _zz_result_payload_x_112 = ($signed(_zz_result_payload_x_12) >>> 12);
  assign _zz_result_payload_x_113 = ($signed(_zz_result_payload_x_28) >>> 12);
  assign _zz_result_payload_x_114 = (_zz_result_payload_x_59 ? (! _zz_result_payload_x_44[15]) : _zz_result_payload_x_29[15]);
  assign _zz_result_payload_x_115 = ($signed(_zz_result_payload_x_13) >>> 13);
  assign _zz_result_payload_x_116 = ($signed(_zz_result_payload_x_29) >>> 13);
  assign _zz_result_payload_x_117 = (_zz_result_payload_x_60 ? (! _zz_result_payload_x_45[15]) : _zz_result_payload_x_30[15]);
  assign _zz_result_payload_y_1 = ($signed(_zz_result_payload_x_14) >>> 14);
  assign _zz_result_payload_x_118 = ($signed(_zz_result_payload_x_30) >>> 14);
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
    _zz_result_payload_x_61 <= 16'h1000;
    _zz_result_payload_x_62 <= 16'h0800;
    _zz_result_payload_x_63 <= 16'h0400;
    _zz_result_payload_x_64 <= 16'h0200;
    _zz_result_payload_x_65 <= 16'h0100;
    _zz_result_payload_x_66 <= 16'h0080;
    _zz_result_payload_x_67 <= 16'h0040;
    _zz_result_payload_x_68 <= 16'h0020;
    _zz_result_payload_x_69 <= 16'h0010;
    _zz_result_payload_x_70 <= 16'h0008;
    _zz_result_payload_x_71 <= 16'h0004;
    _zz_result_payload_x_72 <= 16'h0002;
    _zz_result_payload_x_73 <= 16'h0001;
    _zz_result_payload_x_74 <= 16'h0;
    _zz_result_payload_z_1 <= 16'h0;
    if(raw_data_fire) begin
      _zz_result_payload_x <= raw_data_payload_x;
      _zz_result_payload_x_16 <= raw_data_payload_y;
      _zz_result_payload_x_31 <= raw_data_payload_z;
      _zz_result_payload_x_46 <= rotate_mode;
    end
    if(_zz_result_valid) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_75 ? _zz__zz_result_payload_x_1 : _zz__zz_result_payload_x_1_1);
        end
        2'b10 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_75 ? _zz__zz_result_payload_x_1_2 : _zz__zz_result_payload_x_1_3);
        end
        default : begin
          _zz_result_payload_x_1 <= _zz_result_payload_x;
        end
      endcase
      _zz_result_payload_x_17 <= (_zz_result_payload_x_75 ? _zz__zz_result_payload_x_17 : _zz__zz_result_payload_x_17_1);
      _zz_result_payload_x_32 <= (_zz_result_payload_x_75 ? _zz__zz_result_payload_x_32 : _zz__zz_result_payload_x_32_1);
    end
    _zz_result_payload_x_47 <= _zz_result_payload_x_46;
    if(_zz_result_valid_1) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_78 ? _zz__zz_result_payload_x_2 : _zz__zz_result_payload_x_2_1);
        end
        2'b10 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_78 ? _zz__zz_result_payload_x_2_2 : _zz__zz_result_payload_x_2_3);
        end
        default : begin
          _zz_result_payload_x_2 <= _zz_result_payload_x_1;
        end
      endcase
      _zz_result_payload_x_18 <= (_zz_result_payload_x_78 ? _zz__zz_result_payload_x_18 : _zz__zz_result_payload_x_18_1);
      _zz_result_payload_x_33 <= (_zz_result_payload_x_78 ? _zz__zz_result_payload_x_33 : _zz__zz_result_payload_x_33_1);
    end
    _zz_result_payload_x_48 <= _zz_result_payload_x_47;
    if(_zz_result_valid_2) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_81 ? _zz__zz_result_payload_x_3 : _zz__zz_result_payload_x_3_1);
        end
        2'b10 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_81 ? _zz__zz_result_payload_x_3_2 : _zz__zz_result_payload_x_3_3);
        end
        default : begin
          _zz_result_payload_x_3 <= _zz_result_payload_x_2;
        end
      endcase
      _zz_result_payload_x_19 <= (_zz_result_payload_x_81 ? _zz__zz_result_payload_x_19 : _zz__zz_result_payload_x_19_1);
      _zz_result_payload_x_34 <= (_zz_result_payload_x_81 ? _zz__zz_result_payload_x_34 : _zz__zz_result_payload_x_34_1);
    end
    _zz_result_payload_x_49 <= _zz_result_payload_x_48;
    if(_zz_result_valid_3) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_84 ? _zz__zz_result_payload_x_4 : _zz__zz_result_payload_x_4_1);
        end
        2'b10 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_84 ? _zz__zz_result_payload_x_4_2 : _zz__zz_result_payload_x_4_3);
        end
        default : begin
          _zz_result_payload_x_4 <= _zz_result_payload_x_3;
        end
      endcase
      _zz_result_payload_x_20 <= (_zz_result_payload_x_84 ? _zz__zz_result_payload_x_20 : _zz__zz_result_payload_x_20_1);
      _zz_result_payload_x_35 <= (_zz_result_payload_x_84 ? _zz__zz_result_payload_x_35 : _zz__zz_result_payload_x_35_1);
    end
    _zz_result_payload_x_50 <= _zz_result_payload_x_49;
    if(_zz_result_valid_4) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_87 ? _zz__zz_result_payload_x_5 : _zz__zz_result_payload_x_5_1);
        end
        2'b10 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_87 ? _zz__zz_result_payload_x_5_2 : _zz__zz_result_payload_x_5_3);
        end
        default : begin
          _zz_result_payload_x_5 <= _zz_result_payload_x_4;
        end
      endcase
      _zz_result_payload_x_21 <= (_zz_result_payload_x_87 ? _zz__zz_result_payload_x_21 : _zz__zz_result_payload_x_21_1);
      _zz_result_payload_x_36 <= (_zz_result_payload_x_87 ? _zz__zz_result_payload_x_36 : _zz__zz_result_payload_x_36_1);
    end
    _zz_result_payload_x_51 <= _zz_result_payload_x_50;
    if(_zz_result_valid_5) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_90 ? _zz__zz_result_payload_x_6 : _zz__zz_result_payload_x_6_1);
        end
        2'b10 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_90 ? _zz__zz_result_payload_x_6_2 : _zz__zz_result_payload_x_6_3);
        end
        default : begin
          _zz_result_payload_x_6 <= _zz_result_payload_x_5;
        end
      endcase
      _zz_result_payload_x_22 <= (_zz_result_payload_x_90 ? _zz__zz_result_payload_x_22 : _zz__zz_result_payload_x_22_1);
      _zz_result_payload_x_37 <= (_zz_result_payload_x_90 ? _zz__zz_result_payload_x_37 : _zz__zz_result_payload_x_37_1);
    end
    _zz_result_payload_x_52 <= _zz_result_payload_x_51;
    if(_zz_result_valid_6) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_93 ? _zz__zz_result_payload_x_7 : _zz__zz_result_payload_x_7_1);
        end
        2'b10 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_93 ? _zz__zz_result_payload_x_7_2 : _zz__zz_result_payload_x_7_3);
        end
        default : begin
          _zz_result_payload_x_7 <= _zz_result_payload_x_6;
        end
      endcase
      _zz_result_payload_x_23 <= (_zz_result_payload_x_93 ? _zz__zz_result_payload_x_23 : _zz__zz_result_payload_x_23_1);
      _zz_result_payload_x_38 <= (_zz_result_payload_x_93 ? _zz__zz_result_payload_x_38 : _zz__zz_result_payload_x_38_1);
    end
    _zz_result_payload_x_53 <= _zz_result_payload_x_52;
    if(_zz_result_valid_7) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_96 ? _zz__zz_result_payload_x_8 : _zz__zz_result_payload_x_8_1);
        end
        2'b10 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_96 ? _zz__zz_result_payload_x_8_2 : _zz__zz_result_payload_x_8_3);
        end
        default : begin
          _zz_result_payload_x_8 <= _zz_result_payload_x_7;
        end
      endcase
      _zz_result_payload_x_24 <= (_zz_result_payload_x_96 ? _zz__zz_result_payload_x_24 : _zz__zz_result_payload_x_24_1);
      _zz_result_payload_x_39 <= (_zz_result_payload_x_96 ? _zz__zz_result_payload_x_39 : _zz__zz_result_payload_x_39_1);
    end
    _zz_result_payload_x_54 <= _zz_result_payload_x_53;
    if(_zz_result_valid_8) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_99 ? _zz__zz_result_payload_x_9 : _zz__zz_result_payload_x_9_1);
        end
        2'b10 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_99 ? _zz__zz_result_payload_x_9_2 : _zz__zz_result_payload_x_9_3);
        end
        default : begin
          _zz_result_payload_x_9 <= _zz_result_payload_x_8;
        end
      endcase
      _zz_result_payload_x_25 <= (_zz_result_payload_x_99 ? _zz__zz_result_payload_x_25 : _zz__zz_result_payload_x_25_1);
      _zz_result_payload_x_40 <= (_zz_result_payload_x_99 ? _zz__zz_result_payload_x_40 : _zz__zz_result_payload_x_40_1);
    end
    _zz_result_payload_x_55 <= _zz_result_payload_x_54;
    if(_zz_result_valid_9) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_102 ? _zz__zz_result_payload_x_10 : _zz__zz_result_payload_x_10_1);
        end
        2'b10 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_102 ? _zz__zz_result_payload_x_10_2 : _zz__zz_result_payload_x_10_3);
        end
        default : begin
          _zz_result_payload_x_10 <= _zz_result_payload_x_9;
        end
      endcase
      _zz_result_payload_x_26 <= (_zz_result_payload_x_102 ? _zz__zz_result_payload_x_26 : _zz__zz_result_payload_x_26_1);
      _zz_result_payload_x_41 <= (_zz_result_payload_x_102 ? _zz__zz_result_payload_x_41 : _zz__zz_result_payload_x_41_1);
    end
    _zz_result_payload_x_56 <= _zz_result_payload_x_55;
    if(_zz_result_valid_10) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_105 ? _zz__zz_result_payload_x_11 : _zz__zz_result_payload_x_11_1);
        end
        2'b10 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_105 ? _zz__zz_result_payload_x_11_2 : _zz__zz_result_payload_x_11_3);
        end
        default : begin
          _zz_result_payload_x_11 <= _zz_result_payload_x_10;
        end
      endcase
      _zz_result_payload_x_27 <= (_zz_result_payload_x_105 ? _zz__zz_result_payload_x_27 : _zz__zz_result_payload_x_27_1);
      _zz_result_payload_x_42 <= (_zz_result_payload_x_105 ? _zz__zz_result_payload_x_42 : _zz__zz_result_payload_x_42_1);
    end
    _zz_result_payload_x_57 <= _zz_result_payload_x_56;
    if(_zz_result_valid_11) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_12 <= (_zz_result_payload_x_108 ? _zz__zz_result_payload_x_12 : _zz__zz_result_payload_x_12_1);
        end
        2'b10 : begin
          _zz_result_payload_x_12 <= (_zz_result_payload_x_108 ? _zz__zz_result_payload_x_12_2 : _zz__zz_result_payload_x_12_3);
        end
        default : begin
          _zz_result_payload_x_12 <= _zz_result_payload_x_11;
        end
      endcase
      _zz_result_payload_x_28 <= (_zz_result_payload_x_108 ? _zz__zz_result_payload_x_28 : _zz__zz_result_payload_x_28_1);
      _zz_result_payload_x_43 <= (_zz_result_payload_x_108 ? _zz__zz_result_payload_x_43 : _zz__zz_result_payload_x_43_1);
    end
    _zz_result_payload_x_58 <= _zz_result_payload_x_57;
    if(_zz_result_valid_12) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_13 <= (_zz_result_payload_x_111 ? _zz__zz_result_payload_x_13 : _zz__zz_result_payload_x_13_1);
        end
        2'b10 : begin
          _zz_result_payload_x_13 <= (_zz_result_payload_x_111 ? _zz__zz_result_payload_x_13_2 : _zz__zz_result_payload_x_13_3);
        end
        default : begin
          _zz_result_payload_x_13 <= _zz_result_payload_x_12;
        end
      endcase
      _zz_result_payload_x_29 <= (_zz_result_payload_x_111 ? _zz__zz_result_payload_x_29 : _zz__zz_result_payload_x_29_1);
      _zz_result_payload_x_44 <= (_zz_result_payload_x_111 ? _zz__zz_result_payload_x_44 : _zz__zz_result_payload_x_44_1);
    end
    _zz_result_payload_x_59 <= _zz_result_payload_x_58;
    if(_zz_result_valid_13) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_14 <= (_zz_result_payload_x_114 ? _zz__zz_result_payload_x_14 : _zz__zz_result_payload_x_14_1);
        end
        2'b10 : begin
          _zz_result_payload_x_14 <= (_zz_result_payload_x_114 ? _zz__zz_result_payload_x_14_2 : _zz__zz_result_payload_x_14_3);
        end
        default : begin
          _zz_result_payload_x_14 <= _zz_result_payload_x_13;
        end
      endcase
      _zz_result_payload_x_30 <= (_zz_result_payload_x_114 ? _zz__zz_result_payload_x_30 : _zz__zz_result_payload_x_30_1);
      _zz_result_payload_x_45 <= (_zz_result_payload_x_114 ? _zz__zz_result_payload_x_45 : _zz__zz_result_payload_x_45_1);
    end
    _zz_result_payload_x_60 <= _zz_result_payload_x_59;
    if(_zz_result_valid_14) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_15 <= (_zz_result_payload_x_117 ? _zz__zz_result_payload_x_15 : _zz__zz_result_payload_x_15_1);
        end
        2'b10 : begin
          _zz_result_payload_x_15 <= (_zz_result_payload_x_117 ? _zz__zz_result_payload_x_15_2 : _zz__zz_result_payload_x_15_3);
        end
        default : begin
          _zz_result_payload_x_15 <= _zz_result_payload_x_14;
        end
      endcase
      _zz_result_payload_y <= (_zz_result_payload_x_117 ? _zz__zz_result_payload_y : _zz__zz_result_payload_y_1);
      _zz_result_payload_z <= (_zz_result_payload_x_117 ? _zz__zz_result_payload_z : _zz__zz_result_payload_z_1);
    end
  end


endmodule
