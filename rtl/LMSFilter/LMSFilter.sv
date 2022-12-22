// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : LMSFilter
// Git hash  : a4ae68a543610370bf0b0ac0cce890798f851cf2

`timescale 1ns/1ps

module LMSFilter (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [10:0]   raw_data_payload_fragment,
  output              filtered_data_valid,
  output              filtered_data_payload_last,
  output     [19:0]   filtered_data_payload_fragment,
  input               train_en,
  input               clk,
  input               resetn
);

  reg        [19:0]   _zz_ref_mem_port0;
  wire                lms_fir_core_filtered_data_valid;
  wire       [19:0]   lms_fir_core_filtered_data_payload;
  wire                _zz_ref_mem_port;
  wire                _zz_ref_data_indicator;
  wire       [3:0]    _zz_cnt;
  wire       [15:0]   _zz_coff_mem_0_1;
  wire       [14:0]   _zz_coff_mem_0_2;
  wire       [30:0]   _zz_coff_mem_0_3;
  wire       [15:0]   _zz_coff_mem_1;
  wire       [14:0]   _zz_coff_mem_1_1;
  wire       [30:0]   _zz_coff_mem_1_2;
  wire       [15:0]   _zz_coff_mem_2;
  wire       [14:0]   _zz_coff_mem_2_1;
  wire       [30:0]   _zz_coff_mem_2_2;
  wire       [15:0]   _zz_coff_mem_3;
  wire       [14:0]   _zz_coff_mem_3_1;
  wire       [30:0]   _zz_coff_mem_3_2;
  wire       [15:0]   _zz_coff_mem_4;
  wire       [14:0]   _zz_coff_mem_4_1;
  wire       [30:0]   _zz_coff_mem_4_2;
  wire       [15:0]   _zz_coff_mem_5;
  wire       [14:0]   _zz_coff_mem_5_1;
  wire       [30:0]   _zz_coff_mem_5_2;
  wire       [15:0]   _zz_coff_mem_6;
  wire       [14:0]   _zz_coff_mem_6_1;
  wire       [30:0]   _zz_coff_mem_6_2;
  wire       [15:0]   _zz_coff_mem_7;
  wire       [14:0]   _zz_coff_mem_7_1;
  wire       [30:0]   _zz_coff_mem_7_2;
  wire       [15:0]   _zz_coff_mem_8;
  wire       [14:0]   _zz_coff_mem_8_1;
  wire       [30:0]   _zz_coff_mem_8_2;
  wire       [15:0]   _zz_coff_mem_9;
  wire       [14:0]   _zz_coff_mem_9_1;
  wire       [30:0]   _zz_coff_mem_9_2;
  wire       [15:0]   _zz_coff_mem_10;
  wire       [14:0]   _zz_coff_mem_10_1;
  wire       [30:0]   _zz_coff_mem_10_2;
  wire       [15:0]   _zz_coff_mem_11;
  wire       [14:0]   _zz_coff_mem_11_1;
  wire       [30:0]   _zz_coff_mem_11_2;
  wire       [15:0]   _zz_coff_mem_12;
  wire       [14:0]   _zz_coff_mem_12_1;
  wire       [30:0]   _zz_coff_mem_12_2;
  wire       [15:0]   _zz_coff_mem_13;
  wire       [14:0]   _zz_coff_mem_13_1;
  wire       [30:0]   _zz_coff_mem_13_2;
  wire       [15:0]   _zz_coff_mem_14;
  wire       [14:0]   _zz_coff_mem_14_1;
  wire       [30:0]   _zz_coff_mem_14_2;
  wire       [15:0]   _zz_coff_mem_15;
  wire       [14:0]   _zz_coff_mem_15_1;
  wire       [30:0]   _zz_coff_mem_15_2;
  reg                 raw_data_ready_1;
  reg        [15:0]   coff_mem_0;
  reg        [15:0]   coff_mem_1;
  reg        [15:0]   coff_mem_2;
  reg        [15:0]   coff_mem_3;
  reg        [15:0]   coff_mem_4;
  reg        [15:0]   coff_mem_5;
  reg        [15:0]   coff_mem_6;
  reg        [15:0]   coff_mem_7;
  reg        [15:0]   coff_mem_8;
  reg        [15:0]   coff_mem_9;
  reg        [15:0]   coff_mem_10;
  reg        [15:0]   coff_mem_11;
  reg        [15:0]   coff_mem_12;
  reg        [15:0]   coff_mem_13;
  reg        [15:0]   coff_mem_14;
  reg        [15:0]   coff_mem_15;
  wire       [10:0]   raw_data_history_0;
  reg        [10:0]   raw_data_history_1;
  reg        [10:0]   raw_data_history_2;
  reg        [10:0]   raw_data_history_3;
  reg        [10:0]   raw_data_history_4;
  reg        [10:0]   raw_data_history_5;
  reg        [10:0]   raw_data_history_6;
  reg        [10:0]   raw_data_history_7;
  reg        [10:0]   raw_data_history_8;
  reg        [10:0]   raw_data_history_9;
  reg        [10:0]   raw_data_history_10;
  reg        [10:0]   raw_data_history_11;
  reg        [10:0]   raw_data_history_12;
  reg        [10:0]   raw_data_history_13;
  reg        [10:0]   raw_data_history_14;
  reg        [10:0]   raw_data_history_15;
  wire                raw_data_fire;
  reg                 raw_data_payload_last_delay_1;
  reg                 raw_data_payload_last_delay_2;
  reg                 raw_data_payload_last_delay_3;
  reg        [3:0]    cnt;
  wire       [19:0]   ref_data_indicator;
  wire       [19:0]   _zz_coff_mem_0;
  wire                raw_data_fire_1;
  wire                when_AdaptiveFilter_l101;
  reg [19:0] ref_mem [0:15];

  assign _zz_cnt = (cnt + 4'b0001);
  assign _zz_coff_mem_0_2 = (_zz_coff_mem_0_3 >>> 16);
  assign _zz_coff_mem_0_1 = {{1{_zz_coff_mem_0_2[14]}}, _zz_coff_mem_0_2};
  assign _zz_coff_mem_0_3 = ($signed(raw_data_history_0) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_1_1 = (_zz_coff_mem_1_2 >>> 16);
  assign _zz_coff_mem_1 = {{1{_zz_coff_mem_1_1[14]}}, _zz_coff_mem_1_1};
  assign _zz_coff_mem_1_2 = ($signed(raw_data_history_1) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_2_1 = (_zz_coff_mem_2_2 >>> 16);
  assign _zz_coff_mem_2 = {{1{_zz_coff_mem_2_1[14]}}, _zz_coff_mem_2_1};
  assign _zz_coff_mem_2_2 = ($signed(raw_data_history_2) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_3_1 = (_zz_coff_mem_3_2 >>> 16);
  assign _zz_coff_mem_3 = {{1{_zz_coff_mem_3_1[14]}}, _zz_coff_mem_3_1};
  assign _zz_coff_mem_3_2 = ($signed(raw_data_history_3) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_4_1 = (_zz_coff_mem_4_2 >>> 16);
  assign _zz_coff_mem_4 = {{1{_zz_coff_mem_4_1[14]}}, _zz_coff_mem_4_1};
  assign _zz_coff_mem_4_2 = ($signed(raw_data_history_4) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_5_1 = (_zz_coff_mem_5_2 >>> 16);
  assign _zz_coff_mem_5 = {{1{_zz_coff_mem_5_1[14]}}, _zz_coff_mem_5_1};
  assign _zz_coff_mem_5_2 = ($signed(raw_data_history_5) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_6_1 = (_zz_coff_mem_6_2 >>> 16);
  assign _zz_coff_mem_6 = {{1{_zz_coff_mem_6_1[14]}}, _zz_coff_mem_6_1};
  assign _zz_coff_mem_6_2 = ($signed(raw_data_history_6) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_7_1 = (_zz_coff_mem_7_2 >>> 16);
  assign _zz_coff_mem_7 = {{1{_zz_coff_mem_7_1[14]}}, _zz_coff_mem_7_1};
  assign _zz_coff_mem_7_2 = ($signed(raw_data_history_7) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_8_1 = (_zz_coff_mem_8_2 >>> 16);
  assign _zz_coff_mem_8 = {{1{_zz_coff_mem_8_1[14]}}, _zz_coff_mem_8_1};
  assign _zz_coff_mem_8_2 = ($signed(raw_data_history_8) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_9_1 = (_zz_coff_mem_9_2 >>> 16);
  assign _zz_coff_mem_9 = {{1{_zz_coff_mem_9_1[14]}}, _zz_coff_mem_9_1};
  assign _zz_coff_mem_9_2 = ($signed(raw_data_history_9) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_10_1 = (_zz_coff_mem_10_2 >>> 16);
  assign _zz_coff_mem_10 = {{1{_zz_coff_mem_10_1[14]}}, _zz_coff_mem_10_1};
  assign _zz_coff_mem_10_2 = ($signed(raw_data_history_10) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_11_1 = (_zz_coff_mem_11_2 >>> 16);
  assign _zz_coff_mem_11 = {{1{_zz_coff_mem_11_1[14]}}, _zz_coff_mem_11_1};
  assign _zz_coff_mem_11_2 = ($signed(raw_data_history_11) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_12_1 = (_zz_coff_mem_12_2 >>> 16);
  assign _zz_coff_mem_12 = {{1{_zz_coff_mem_12_1[14]}}, _zz_coff_mem_12_1};
  assign _zz_coff_mem_12_2 = ($signed(raw_data_history_12) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_13_1 = (_zz_coff_mem_13_2 >>> 16);
  assign _zz_coff_mem_13 = {{1{_zz_coff_mem_13_1[14]}}, _zz_coff_mem_13_1};
  assign _zz_coff_mem_13_2 = ($signed(raw_data_history_13) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_14_1 = (_zz_coff_mem_14_2 >>> 16);
  assign _zz_coff_mem_14 = {{1{_zz_coff_mem_14_1[14]}}, _zz_coff_mem_14_1};
  assign _zz_coff_mem_14_2 = ($signed(raw_data_history_14) * $signed(_zz_coff_mem_0));
  assign _zz_coff_mem_15_1 = (_zz_coff_mem_15_2 >>> 16);
  assign _zz_coff_mem_15 = {{1{_zz_coff_mem_15_1[14]}}, _zz_coff_mem_15_1};
  assign _zz_coff_mem_15_2 = ($signed(raw_data_history_15) * $signed(_zz_coff_mem_0));
  assign _zz_ref_data_indicator = 1'b1;
  initial begin
    $readmemb("LMSFilter.sv_toplevel_ref_mem.bin",ref_mem);
  end
  always @(posedge clk) begin
    if(_zz_ref_data_indicator) begin
      _zz_ref_mem_port0 <= ref_mem[cnt];
    end
  end

  LMSFilterCore lms_fir_core (
    .raw_data_valid        (raw_data_fire                           ), //i
    .raw_data_payload      (raw_data_payload_fragment[10:0]         ), //i
    .coff_data_0           (coff_mem_0[15:0]                        ), //i
    .coff_data_1           (coff_mem_1[15:0]                        ), //i
    .coff_data_2           (coff_mem_2[15:0]                        ), //i
    .coff_data_3           (coff_mem_3[15:0]                        ), //i
    .coff_data_4           (coff_mem_4[15:0]                        ), //i
    .coff_data_5           (coff_mem_5[15:0]                        ), //i
    .coff_data_6           (coff_mem_6[15:0]                        ), //i
    .coff_data_7           (coff_mem_7[15:0]                        ), //i
    .coff_data_8           (coff_mem_8[15:0]                        ), //i
    .coff_data_9           (coff_mem_9[15:0]                        ), //i
    .coff_data_10          (coff_mem_10[15:0]                       ), //i
    .coff_data_11          (coff_mem_11[15:0]                       ), //i
    .coff_data_12          (coff_mem_12[15:0]                       ), //i
    .coff_data_13          (coff_mem_13[15:0]                       ), //i
    .coff_data_14          (coff_mem_14[15:0]                       ), //i
    .coff_data_15          (coff_mem_15[15:0]                       ), //i
    .filtered_data_valid   (lms_fir_core_filtered_data_valid        ), //o
    .filtered_data_payload (lms_fir_core_filtered_data_payload[19:0]), //o
    .clk                   (clk                                     ), //i
    .resetn                (resetn                                  )  //i
  );
  assign raw_data_history_0 = raw_data_payload_fragment;
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign filtered_data_payload_fragment = lms_fir_core_filtered_data_payload;
  assign filtered_data_valid = lms_fir_core_filtered_data_valid;
  assign filtered_data_payload_last = raw_data_payload_last_delay_3;
  assign raw_data_ready = raw_data_ready_1;
  assign ref_data_indicator = _zz_ref_mem_port0[19 : 0];
  assign _zz_coff_mem_0 = ($signed(ref_data_indicator) - $signed(lms_fir_core_filtered_data_payload));
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign when_AdaptiveFilter_l101 = (filtered_data_valid && filtered_data_payload_last);
  always @(posedge clk) begin
    if(!resetn) begin
      raw_data_ready_1 <= 1'b0;
      coff_mem_0 <= 16'h0100;
      coff_mem_1 <= 16'h0100;
      coff_mem_2 <= 16'h0100;
      coff_mem_3 <= 16'h0100;
      coff_mem_4 <= 16'h0100;
      coff_mem_5 <= 16'h0100;
      coff_mem_6 <= 16'h0100;
      coff_mem_7 <= 16'h0100;
      coff_mem_8 <= 16'h0100;
      coff_mem_9 <= 16'h0100;
      coff_mem_10 <= 16'h0100;
      coff_mem_11 <= 16'h0100;
      coff_mem_12 <= 16'h0100;
      coff_mem_13 <= 16'h0100;
      coff_mem_14 <= 16'h0100;
      coff_mem_15 <= 16'h0100;
      raw_data_payload_last_delay_1 <= 1'b0;
      raw_data_payload_last_delay_2 <= 1'b0;
      raw_data_payload_last_delay_3 <= 1'b0;
      cnt <= 4'b0000;
    end else begin
      raw_data_payload_last_delay_1 <= raw_data_payload_last;
      raw_data_payload_last_delay_2 <= raw_data_payload_last_delay_1;
      raw_data_payload_last_delay_3 <= raw_data_payload_last_delay_2;
      if(train_en) begin
        if(filtered_data_valid) begin
          raw_data_ready_1 <= 1'b1;
          cnt <= ((cnt == 4'b1111) ? 4'b0000 : _zz_cnt);
          coff_mem_0 <= ($signed(_zz_coff_mem_0_1) + $signed(coff_mem_0));
          coff_mem_1 <= ($signed(_zz_coff_mem_1) + $signed(coff_mem_1));
          coff_mem_2 <= ($signed(_zz_coff_mem_2) + $signed(coff_mem_2));
          coff_mem_3 <= ($signed(_zz_coff_mem_3) + $signed(coff_mem_3));
          coff_mem_4 <= ($signed(_zz_coff_mem_4) + $signed(coff_mem_4));
          coff_mem_5 <= ($signed(_zz_coff_mem_5) + $signed(coff_mem_5));
          coff_mem_6 <= ($signed(_zz_coff_mem_6) + $signed(coff_mem_6));
          coff_mem_7 <= ($signed(_zz_coff_mem_7) + $signed(coff_mem_7));
          coff_mem_8 <= ($signed(_zz_coff_mem_8) + $signed(coff_mem_8));
          coff_mem_9 <= ($signed(_zz_coff_mem_9) + $signed(coff_mem_9));
          coff_mem_10 <= ($signed(_zz_coff_mem_10) + $signed(coff_mem_10));
          coff_mem_11 <= ($signed(_zz_coff_mem_11) + $signed(coff_mem_11));
          coff_mem_12 <= ($signed(_zz_coff_mem_12) + $signed(coff_mem_12));
          coff_mem_13 <= ($signed(_zz_coff_mem_13) + $signed(coff_mem_13));
          coff_mem_14 <= ($signed(_zz_coff_mem_14) + $signed(coff_mem_14));
          coff_mem_15 <= ($signed(_zz_coff_mem_15) + $signed(coff_mem_15));
        end
        if(raw_data_fire_1) begin
          raw_data_ready_1 <= 1'b0;
        end
      end else begin
        if(when_AdaptiveFilter_l101) begin
          cnt <= 4'b0000;
          raw_data_ready_1 <= 1'b0;
        end else begin
          raw_data_ready_1 <= 1'b1;
        end
      end
    end
  end

  always @(posedge clk) begin
    if(raw_data_valid) begin
      raw_data_history_1 <= raw_data_history_0;
    end
    if(raw_data_valid) begin
      raw_data_history_2 <= raw_data_history_1;
    end
    if(raw_data_valid) begin
      raw_data_history_3 <= raw_data_history_2;
    end
    if(raw_data_valid) begin
      raw_data_history_4 <= raw_data_history_3;
    end
    if(raw_data_valid) begin
      raw_data_history_5 <= raw_data_history_4;
    end
    if(raw_data_valid) begin
      raw_data_history_6 <= raw_data_history_5;
    end
    if(raw_data_valid) begin
      raw_data_history_7 <= raw_data_history_6;
    end
    if(raw_data_valid) begin
      raw_data_history_8 <= raw_data_history_7;
    end
    if(raw_data_valid) begin
      raw_data_history_9 <= raw_data_history_8;
    end
    if(raw_data_valid) begin
      raw_data_history_10 <= raw_data_history_9;
    end
    if(raw_data_valid) begin
      raw_data_history_11 <= raw_data_history_10;
    end
    if(raw_data_valid) begin
      raw_data_history_12 <= raw_data_history_11;
    end
    if(raw_data_valid) begin
      raw_data_history_13 <= raw_data_history_12;
    end
    if(raw_data_valid) begin
      raw_data_history_14 <= raw_data_history_13;
    end
    if(raw_data_valid) begin
      raw_data_history_15 <= raw_data_history_14;
    end
  end


endmodule

module LMSFilterCore (
  input               raw_data_valid,
  input      [10:0]   raw_data_payload,
  input      [15:0]   coff_data_0,
  input      [15:0]   coff_data_1,
  input      [15:0]   coff_data_2,
  input      [15:0]   coff_data_3,
  input      [15:0]   coff_data_4,
  input      [15:0]   coff_data_5,
  input      [15:0]   coff_data_6,
  input      [15:0]   coff_data_7,
  input      [15:0]   coff_data_8,
  input      [15:0]   coff_data_9,
  input      [15:0]   coff_data_10,
  input      [15:0]   coff_data_11,
  input      [15:0]   coff_data_12,
  input      [15:0]   coff_data_13,
  input      [15:0]   coff_data_14,
  input      [15:0]   coff_data_15,
  output              filtered_data_valid,
  output     [19:0]   filtered_data_payload,
  input               clk,
  input               resetn
);

  wire       [16:0]   _zz_mult_data_vec_0;
  wire       [26:0]   _zz_mult_data_vec_0_1;
  wire       [16:0]   _zz_mult_data_vec_1;
  wire       [26:0]   _zz_mult_data_vec_1_1;
  wire       [16:0]   _zz_mult_data_vec_2;
  wire       [26:0]   _zz_mult_data_vec_2_1;
  wire       [16:0]   _zz_mult_data_vec_3;
  wire       [26:0]   _zz_mult_data_vec_3_1;
  wire       [16:0]   _zz_mult_data_vec_4;
  wire       [26:0]   _zz_mult_data_vec_4_1;
  wire       [16:0]   _zz_mult_data_vec_5;
  wire       [26:0]   _zz_mult_data_vec_5_1;
  wire       [16:0]   _zz_mult_data_vec_6;
  wire       [26:0]   _zz_mult_data_vec_6_1;
  wire       [16:0]   _zz_mult_data_vec_7;
  wire       [26:0]   _zz_mult_data_vec_7_1;
  wire       [16:0]   _zz_mult_data_vec_8;
  wire       [26:0]   _zz_mult_data_vec_8_1;
  wire       [16:0]   _zz_mult_data_vec_9;
  wire       [26:0]   _zz_mult_data_vec_9_1;
  wire       [16:0]   _zz_mult_data_vec_10;
  wire       [26:0]   _zz_mult_data_vec_10_1;
  wire       [16:0]   _zz_mult_data_vec_11;
  wire       [26:0]   _zz_mult_data_vec_11_1;
  wire       [16:0]   _zz_mult_data_vec_12;
  wire       [26:0]   _zz_mult_data_vec_12_1;
  wire       [16:0]   _zz_mult_data_vec_13;
  wire       [26:0]   _zz_mult_data_vec_13_1;
  wire       [16:0]   _zz_mult_data_vec_14;
  wire       [26:0]   _zz_mult_data_vec_14_1;
  wire       [16:0]   _zz_mult_data_vec_15;
  wire       [26:0]   _zz_mult_data_vec_15_1;
  wire       [19:0]   _zz_sum_result;
  wire       [19:0]   _zz_sum_result_1;
  wire       [19:0]   _zz_sum_result_2;
  wire       [19:0]   _zz_sum_result_3;
  wire       [19:0]   _zz_sum_result_4;
  wire       [19:0]   _zz_sum_result_5;
  wire       [19:0]   _zz_sum_result_6;
  wire       [19:0]   _zz_sum_result_7;
  wire       [19:0]   _zz_sum_result_8;
  wire       [19:0]   _zz_sum_result_9;
  wire       [19:0]   _zz_sum_result_10;
  wire       [19:0]   _zz_sum_result_11;
  wire       [19:0]   _zz_sum_result_12;
  wire       [19:0]   _zz_sum_result_13;
  wire       [2:0]    internal_en;
  reg        [10:0]   raw_data_vec_0;
  reg        [10:0]   raw_data_vec_1;
  reg        [10:0]   raw_data_vec_2;
  reg        [10:0]   raw_data_vec_3;
  reg        [10:0]   raw_data_vec_4;
  reg        [10:0]   raw_data_vec_5;
  reg        [10:0]   raw_data_vec_6;
  reg        [10:0]   raw_data_vec_7;
  reg        [10:0]   raw_data_vec_8;
  reg        [10:0]   raw_data_vec_9;
  reg        [10:0]   raw_data_vec_10;
  reg        [10:0]   raw_data_vec_11;
  reg        [10:0]   raw_data_vec_12;
  reg        [10:0]   raw_data_vec_13;
  reg        [10:0]   raw_data_vec_14;
  reg        [10:0]   raw_data_vec_15;
  reg        [19:0]   mult_data_vec_0;
  reg        [19:0]   mult_data_vec_1;
  reg        [19:0]   mult_data_vec_2;
  reg        [19:0]   mult_data_vec_3;
  reg        [19:0]   mult_data_vec_4;
  reg        [19:0]   mult_data_vec_5;
  reg        [19:0]   mult_data_vec_6;
  reg        [19:0]   mult_data_vec_7;
  reg        [19:0]   mult_data_vec_8;
  reg        [19:0]   mult_data_vec_9;
  reg        [19:0]   mult_data_vec_10;
  reg        [19:0]   mult_data_vec_11;
  reg        [19:0]   mult_data_vec_12;
  reg        [19:0]   mult_data_vec_13;
  reg        [19:0]   mult_data_vec_14;
  reg        [19:0]   mult_data_vec_15;
  reg        [19:0]   sum_result;
  reg                 raw_data_valid_delay_1;
  reg                 raw_data_valid_delay_2;
  reg                 raw_data_valid_delay_3;

  assign _zz_mult_data_vec_0 = (_zz_mult_data_vec_0_1 >>> 10);
  assign _zz_mult_data_vec_0_1 = ($signed(coff_data_0) * $signed(raw_data_vec_0));
  assign _zz_mult_data_vec_1 = (_zz_mult_data_vec_1_1 >>> 10);
  assign _zz_mult_data_vec_1_1 = ($signed(coff_data_1) * $signed(raw_data_vec_1));
  assign _zz_mult_data_vec_2 = (_zz_mult_data_vec_2_1 >>> 10);
  assign _zz_mult_data_vec_2_1 = ($signed(coff_data_2) * $signed(raw_data_vec_2));
  assign _zz_mult_data_vec_3 = (_zz_mult_data_vec_3_1 >>> 10);
  assign _zz_mult_data_vec_3_1 = ($signed(coff_data_3) * $signed(raw_data_vec_3));
  assign _zz_mult_data_vec_4 = (_zz_mult_data_vec_4_1 >>> 10);
  assign _zz_mult_data_vec_4_1 = ($signed(coff_data_4) * $signed(raw_data_vec_4));
  assign _zz_mult_data_vec_5 = (_zz_mult_data_vec_5_1 >>> 10);
  assign _zz_mult_data_vec_5_1 = ($signed(coff_data_5) * $signed(raw_data_vec_5));
  assign _zz_mult_data_vec_6 = (_zz_mult_data_vec_6_1 >>> 10);
  assign _zz_mult_data_vec_6_1 = ($signed(coff_data_6) * $signed(raw_data_vec_6));
  assign _zz_mult_data_vec_7 = (_zz_mult_data_vec_7_1 >>> 10);
  assign _zz_mult_data_vec_7_1 = ($signed(coff_data_7) * $signed(raw_data_vec_7));
  assign _zz_mult_data_vec_8 = (_zz_mult_data_vec_8_1 >>> 10);
  assign _zz_mult_data_vec_8_1 = ($signed(coff_data_8) * $signed(raw_data_vec_8));
  assign _zz_mult_data_vec_9 = (_zz_mult_data_vec_9_1 >>> 10);
  assign _zz_mult_data_vec_9_1 = ($signed(coff_data_9) * $signed(raw_data_vec_9));
  assign _zz_mult_data_vec_10 = (_zz_mult_data_vec_10_1 >>> 10);
  assign _zz_mult_data_vec_10_1 = ($signed(coff_data_10) * $signed(raw_data_vec_10));
  assign _zz_mult_data_vec_11 = (_zz_mult_data_vec_11_1 >>> 10);
  assign _zz_mult_data_vec_11_1 = ($signed(coff_data_11) * $signed(raw_data_vec_11));
  assign _zz_mult_data_vec_12 = (_zz_mult_data_vec_12_1 >>> 10);
  assign _zz_mult_data_vec_12_1 = ($signed(coff_data_12) * $signed(raw_data_vec_12));
  assign _zz_mult_data_vec_13 = (_zz_mult_data_vec_13_1 >>> 10);
  assign _zz_mult_data_vec_13_1 = ($signed(coff_data_13) * $signed(raw_data_vec_13));
  assign _zz_mult_data_vec_14 = (_zz_mult_data_vec_14_1 >>> 10);
  assign _zz_mult_data_vec_14_1 = ($signed(coff_data_14) * $signed(raw_data_vec_14));
  assign _zz_mult_data_vec_15 = (_zz_mult_data_vec_15_1 >>> 10);
  assign _zz_mult_data_vec_15_1 = ($signed(coff_data_15) * $signed(raw_data_vec_15));
  assign _zz_sum_result = ($signed(_zz_sum_result_1) + $signed(_zz_sum_result_4));
  assign _zz_sum_result_1 = ($signed(_zz_sum_result_2) + $signed(_zz_sum_result_3));
  assign _zz_sum_result_2 = ($signed(mult_data_vec_0) + $signed(mult_data_vec_1));
  assign _zz_sum_result_3 = ($signed(mult_data_vec_2) + $signed(mult_data_vec_3));
  assign _zz_sum_result_4 = ($signed(_zz_sum_result_5) + $signed(_zz_sum_result_6));
  assign _zz_sum_result_5 = ($signed(mult_data_vec_4) + $signed(mult_data_vec_5));
  assign _zz_sum_result_6 = ($signed(mult_data_vec_6) + $signed(mult_data_vec_7));
  assign _zz_sum_result_7 = ($signed(_zz_sum_result_8) + $signed(_zz_sum_result_11));
  assign _zz_sum_result_8 = ($signed(_zz_sum_result_9) + $signed(_zz_sum_result_10));
  assign _zz_sum_result_9 = ($signed(mult_data_vec_8) + $signed(mult_data_vec_9));
  assign _zz_sum_result_10 = ($signed(mult_data_vec_10) + $signed(mult_data_vec_11));
  assign _zz_sum_result_11 = ($signed(_zz_sum_result_12) + $signed(_zz_sum_result_13));
  assign _zz_sum_result_12 = ($signed(mult_data_vec_12) + $signed(mult_data_vec_13));
  assign _zz_sum_result_13 = ($signed(mult_data_vec_14) + $signed(mult_data_vec_15));
  assign internal_en = 3'b000;
  assign filtered_data_valid = raw_data_valid_delay_3;
  assign filtered_data_payload = sum_result;
  always @(posedge clk) begin
    if(!resetn) begin
      mult_data_vec_0 <= 20'h0;
      mult_data_vec_1 <= 20'h0;
      mult_data_vec_2 <= 20'h0;
      mult_data_vec_3 <= 20'h0;
      mult_data_vec_4 <= 20'h0;
      mult_data_vec_5 <= 20'h0;
      mult_data_vec_6 <= 20'h0;
      mult_data_vec_7 <= 20'h0;
      mult_data_vec_8 <= 20'h0;
      mult_data_vec_9 <= 20'h0;
      mult_data_vec_10 <= 20'h0;
      mult_data_vec_11 <= 20'h0;
      mult_data_vec_12 <= 20'h0;
      mult_data_vec_13 <= 20'h0;
      mult_data_vec_14 <= 20'h0;
      mult_data_vec_15 <= 20'h0;
      sum_result <= 20'h0;
    end else begin
      mult_data_vec_0 <= {{3{_zz_mult_data_vec_0[16]}}, _zz_mult_data_vec_0};
      mult_data_vec_1 <= {{3{_zz_mult_data_vec_1[16]}}, _zz_mult_data_vec_1};
      mult_data_vec_2 <= {{3{_zz_mult_data_vec_2[16]}}, _zz_mult_data_vec_2};
      mult_data_vec_3 <= {{3{_zz_mult_data_vec_3[16]}}, _zz_mult_data_vec_3};
      mult_data_vec_4 <= {{3{_zz_mult_data_vec_4[16]}}, _zz_mult_data_vec_4};
      mult_data_vec_5 <= {{3{_zz_mult_data_vec_5[16]}}, _zz_mult_data_vec_5};
      mult_data_vec_6 <= {{3{_zz_mult_data_vec_6[16]}}, _zz_mult_data_vec_6};
      mult_data_vec_7 <= {{3{_zz_mult_data_vec_7[16]}}, _zz_mult_data_vec_7};
      mult_data_vec_8 <= {{3{_zz_mult_data_vec_8[16]}}, _zz_mult_data_vec_8};
      mult_data_vec_9 <= {{3{_zz_mult_data_vec_9[16]}}, _zz_mult_data_vec_9};
      mult_data_vec_10 <= {{3{_zz_mult_data_vec_10[16]}}, _zz_mult_data_vec_10};
      mult_data_vec_11 <= {{3{_zz_mult_data_vec_11[16]}}, _zz_mult_data_vec_11};
      mult_data_vec_12 <= {{3{_zz_mult_data_vec_12[16]}}, _zz_mult_data_vec_12};
      mult_data_vec_13 <= {{3{_zz_mult_data_vec_13[16]}}, _zz_mult_data_vec_13};
      mult_data_vec_14 <= {{3{_zz_mult_data_vec_14[16]}}, _zz_mult_data_vec_14};
      mult_data_vec_15 <= {{3{_zz_mult_data_vec_15[16]}}, _zz_mult_data_vec_15};
      sum_result <= ($signed(_zz_sum_result) + $signed(_zz_sum_result_7));
    end
  end

  always @(posedge clk) begin
    if(raw_data_valid) begin
      raw_data_vec_0 <= raw_data_payload;
      raw_data_vec_1 <= raw_data_vec_0;
      raw_data_vec_2 <= raw_data_vec_1;
      raw_data_vec_3 <= raw_data_vec_2;
      raw_data_vec_4 <= raw_data_vec_3;
      raw_data_vec_5 <= raw_data_vec_4;
      raw_data_vec_6 <= raw_data_vec_5;
      raw_data_vec_7 <= raw_data_vec_6;
      raw_data_vec_8 <= raw_data_vec_7;
      raw_data_vec_9 <= raw_data_vec_8;
      raw_data_vec_10 <= raw_data_vec_9;
      raw_data_vec_11 <= raw_data_vec_10;
      raw_data_vec_12 <= raw_data_vec_11;
      raw_data_vec_13 <= raw_data_vec_12;
      raw_data_vec_14 <= raw_data_vec_13;
      raw_data_vec_15 <= raw_data_vec_14;
    end
    raw_data_valid_delay_1 <= raw_data_valid;
    raw_data_valid_delay_2 <= raw_data_valid_delay_1;
    raw_data_valid_delay_3 <= raw_data_valid_delay_2;
  end


endmodule
