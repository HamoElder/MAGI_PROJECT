// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : LMSFilter
// Git hash  : a4ae68a543610370bf0b0ac0cce890798f851cf2

`timescale 1ns/1ps

module LMSFilter (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [8:0]    raw_data_payload_fragment,
  output              filtered_data_valid,
  output              filtered_data_payload_last,
  output     [19:0]   filtered_data_payload_fragment,
  input               train_en,
  input               clk,
  input               reset
);

  reg        [19:0]   _zz_ref_mem_port0;
  wire       [27:0]   _zz_mult_data_vec_0;
  wire       [27:0]   _zz_mult_data_vec_1;
  wire       [27:0]   _zz_mult_data_vec_2;
  wire       [27:0]   _zz_mult_data_vec_3;
  wire       [27:0]   _zz_mult_data_vec_4;
  wire       [27:0]   _zz_mult_data_vec_5;
  wire       [27:0]   _zz_mult_data_vec_6;
  wire       [27:0]   _zz_mult_data_vec_7;
  wire       [27:0]   _zz_mult_data_vec_8;
  wire       [27:0]   _zz_mult_data_vec_9;
  wire       [19:0]   _zz_sum_result;
  wire       [19:0]   _zz_sum_result_1;
  wire       [19:0]   _zz_sum_result_2;
  wire       [19:0]   _zz_sum_result_3;
  wire       [19:0]   _zz_sum_result_4;
  wire       [19:0]   _zz_sum_result_5;
  wire       [19:0]   _zz_sum_result_6;
  wire       [19:0]   _zz_sum_result_7;
  wire                _zz_ref_mem_port;
  wire                _zz_ref_data_indicator;
  wire       [4:0]    _zz_cnt;
  wire       [18:0]   _zz_coff_mem_0;
  wire       [14:0]   _zz_coff_mem_0_1;
  wire       [28:0]   _zz_coff_mem_0_2;
  wire       [18:0]   _zz_coff_mem_1;
  wire       [14:0]   _zz_coff_mem_1_1;
  wire       [28:0]   _zz_coff_mem_1_2;
  wire       [18:0]   _zz_coff_mem_2;
  wire       [14:0]   _zz_coff_mem_2_1;
  wire       [28:0]   _zz_coff_mem_2_2;
  wire       [18:0]   _zz_coff_mem_3;
  wire       [14:0]   _zz_coff_mem_3_1;
  wire       [28:0]   _zz_coff_mem_3_2;
  wire       [18:0]   _zz_coff_mem_4;
  wire       [14:0]   _zz_coff_mem_4_1;
  wire       [28:0]   _zz_coff_mem_4_2;
  wire       [18:0]   _zz_coff_mem_5;
  wire       [14:0]   _zz_coff_mem_5_1;
  wire       [28:0]   _zz_coff_mem_5_2;
  wire       [18:0]   _zz_coff_mem_6;
  wire       [14:0]   _zz_coff_mem_6_1;
  wire       [28:0]   _zz_coff_mem_6_2;
  wire       [18:0]   _zz_coff_mem_7;
  wire       [14:0]   _zz_coff_mem_7_1;
  wire       [28:0]   _zz_coff_mem_7_2;
  wire       [18:0]   _zz_coff_mem_8;
  wire       [14:0]   _zz_coff_mem_8_1;
  wire       [28:0]   _zz_coff_mem_8_2;
  wire       [18:0]   _zz_coff_mem_9;
  wire       [14:0]   _zz_coff_mem_9_1;
  wire       [28:0]   _zz_coff_mem_9_2;
  reg                 raw_data_ready_1;
  reg        [18:0]   coff_mem_0;
  reg        [18:0]   coff_mem_1;
  reg        [18:0]   coff_mem_2;
  reg        [18:0]   coff_mem_3;
  reg        [18:0]   coff_mem_4;
  reg        [18:0]   coff_mem_5;
  reg        [18:0]   coff_mem_6;
  reg        [18:0]   coff_mem_7;
  reg        [18:0]   coff_mem_8;
  reg        [18:0]   coff_mem_9;
  reg        [8:0]    raw_data_vec_0;
  reg        [8:0]    raw_data_vec_1;
  reg        [8:0]    raw_data_vec_2;
  reg        [8:0]    raw_data_vec_3;
  reg        [8:0]    raw_data_vec_4;
  reg        [8:0]    raw_data_vec_5;
  reg        [8:0]    raw_data_vec_6;
  reg        [8:0]    raw_data_vec_7;
  reg        [8:0]    raw_data_vec_8;
  reg        [8:0]    raw_data_vec_9;
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
  wire                raw_data_fire;
  reg        [19:0]   sum_result;
  wire                raw_data_fire_1;
  reg                 raw_data_fire_1_delay_1;
  reg                 raw_data_fire_1_delay_2;
  reg                 raw_data_fire_1_delay_3;
  reg                 raw_data_payload_last_delay_1;
  reg                 raw_data_payload_last_delay_2;
  reg                 raw_data_payload_last_delay_3;
  reg        [4:0]    cnt;
  wire       [19:0]   ref_data_indicator;
  wire       [19:0]   error_measured;
  wire                raw_data_fire_2;
  wire                when_AdaptiveFilter_l78;
  reg [19:0] ref_mem [0:31];

  assign _zz_mult_data_vec_0 = ($signed(coff_mem_0) * $signed(raw_data_vec_0));
  assign _zz_mult_data_vec_1 = ($signed(coff_mem_1) * $signed(raw_data_vec_1));
  assign _zz_mult_data_vec_2 = ($signed(coff_mem_2) * $signed(raw_data_vec_2));
  assign _zz_mult_data_vec_3 = ($signed(coff_mem_3) * $signed(raw_data_vec_3));
  assign _zz_mult_data_vec_4 = ($signed(coff_mem_4) * $signed(raw_data_vec_4));
  assign _zz_mult_data_vec_5 = ($signed(coff_mem_5) * $signed(raw_data_vec_5));
  assign _zz_mult_data_vec_6 = ($signed(coff_mem_6) * $signed(raw_data_vec_6));
  assign _zz_mult_data_vec_7 = ($signed(coff_mem_7) * $signed(raw_data_vec_7));
  assign _zz_mult_data_vec_8 = ($signed(coff_mem_8) * $signed(raw_data_vec_8));
  assign _zz_mult_data_vec_9 = ($signed(coff_mem_9) * $signed(raw_data_vec_9));
  assign _zz_sum_result = ($signed(_zz_sum_result_1) + $signed(_zz_sum_result_4));
  assign _zz_sum_result_1 = ($signed(_zz_sum_result_2) + $signed(_zz_sum_result_3));
  assign _zz_sum_result_2 = ($signed(mult_data_vec_0) + $signed(mult_data_vec_1));
  assign _zz_sum_result_3 = ($signed(mult_data_vec_2) + $signed(mult_data_vec_3));
  assign _zz_sum_result_4 = ($signed(_zz_sum_result_5) + $signed(_zz_sum_result_6));
  assign _zz_sum_result_5 = ($signed(mult_data_vec_4) + $signed(mult_data_vec_5));
  assign _zz_sum_result_6 = ($signed(mult_data_vec_6) + $signed(mult_data_vec_7));
  assign _zz_sum_result_7 = ($signed(mult_data_vec_8) + $signed(mult_data_vec_9));
  assign _zz_cnt = (cnt + 5'h01);
  assign _zz_coff_mem_0_1 = (_zz_coff_mem_0_2 >>> 14);
  assign _zz_coff_mem_0 = {{4{_zz_coff_mem_0_1[14]}}, _zz_coff_mem_0_1};
  assign _zz_coff_mem_0_2 = ($signed(raw_data_vec_0) * $signed(error_measured));
  assign _zz_coff_mem_1_1 = (_zz_coff_mem_1_2 >>> 14);
  assign _zz_coff_mem_1 = {{4{_zz_coff_mem_1_1[14]}}, _zz_coff_mem_1_1};
  assign _zz_coff_mem_1_2 = ($signed(raw_data_vec_1) * $signed(error_measured));
  assign _zz_coff_mem_2_1 = (_zz_coff_mem_2_2 >>> 14);
  assign _zz_coff_mem_2 = {{4{_zz_coff_mem_2_1[14]}}, _zz_coff_mem_2_1};
  assign _zz_coff_mem_2_2 = ($signed(raw_data_vec_2) * $signed(error_measured));
  assign _zz_coff_mem_3_1 = (_zz_coff_mem_3_2 >>> 14);
  assign _zz_coff_mem_3 = {{4{_zz_coff_mem_3_1[14]}}, _zz_coff_mem_3_1};
  assign _zz_coff_mem_3_2 = ($signed(raw_data_vec_3) * $signed(error_measured));
  assign _zz_coff_mem_4_1 = (_zz_coff_mem_4_2 >>> 14);
  assign _zz_coff_mem_4 = {{4{_zz_coff_mem_4_1[14]}}, _zz_coff_mem_4_1};
  assign _zz_coff_mem_4_2 = ($signed(raw_data_vec_4) * $signed(error_measured));
  assign _zz_coff_mem_5_1 = (_zz_coff_mem_5_2 >>> 14);
  assign _zz_coff_mem_5 = {{4{_zz_coff_mem_5_1[14]}}, _zz_coff_mem_5_1};
  assign _zz_coff_mem_5_2 = ($signed(raw_data_vec_5) * $signed(error_measured));
  assign _zz_coff_mem_6_1 = (_zz_coff_mem_6_2 >>> 14);
  assign _zz_coff_mem_6 = {{4{_zz_coff_mem_6_1[14]}}, _zz_coff_mem_6_1};
  assign _zz_coff_mem_6_2 = ($signed(raw_data_vec_6) * $signed(error_measured));
  assign _zz_coff_mem_7_1 = (_zz_coff_mem_7_2 >>> 14);
  assign _zz_coff_mem_7 = {{4{_zz_coff_mem_7_1[14]}}, _zz_coff_mem_7_1};
  assign _zz_coff_mem_7_2 = ($signed(raw_data_vec_7) * $signed(error_measured));
  assign _zz_coff_mem_8_1 = (_zz_coff_mem_8_2 >>> 14);
  assign _zz_coff_mem_8 = {{4{_zz_coff_mem_8_1[14]}}, _zz_coff_mem_8_1};
  assign _zz_coff_mem_8_2 = ($signed(raw_data_vec_8) * $signed(error_measured));
  assign _zz_coff_mem_9_1 = (_zz_coff_mem_9_2 >>> 14);
  assign _zz_coff_mem_9 = {{4{_zz_coff_mem_9_1[14]}}, _zz_coff_mem_9_1};
  assign _zz_coff_mem_9_2 = ($signed(raw_data_vec_9) * $signed(error_measured));
  assign _zz_ref_data_indicator = 1'b1;
  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/LMSFilter.v_toplevel_ref_mem.bin",ref_mem);
  end
  always @(posedge clk) begin
    if(_zz_ref_data_indicator) begin
      _zz_ref_mem_port0 <= ref_mem[cnt];
    end
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign filtered_data_payload_fragment = sum_result;
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign filtered_data_valid = raw_data_fire_1_delay_3;
  assign filtered_data_payload_last = raw_data_payload_last_delay_3;
  assign raw_data_ready = raw_data_ready_1;
  assign ref_data_indicator = _zz_ref_mem_port0[19 : 0];
  assign error_measured = ($signed(ref_data_indicator) - $signed(sum_result));
  assign raw_data_fire_2 = (raw_data_valid && raw_data_ready);
  assign when_AdaptiveFilter_l78 = (filtered_data_valid && filtered_data_payload_last);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      raw_data_ready_1 <= 1'b0;
      coff_mem_0 <= 19'h0;
      coff_mem_1 <= 19'h0;
      coff_mem_2 <= 19'h0;
      coff_mem_3 <= 19'h0;
      coff_mem_4 <= 19'h0;
      coff_mem_5 <= 19'h0;
      coff_mem_6 <= 19'h0;
      coff_mem_7 <= 19'h0;
      coff_mem_8 <= 19'h0;
      coff_mem_9 <= 19'h0;
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
      sum_result <= 20'h0;
      raw_data_fire_1_delay_1 <= 1'b0;
      raw_data_fire_1_delay_2 <= 1'b0;
      raw_data_fire_1_delay_3 <= 1'b0;
      raw_data_payload_last_delay_1 <= 1'b0;
      raw_data_payload_last_delay_2 <= 1'b0;
      raw_data_payload_last_delay_3 <= 1'b0;
      cnt <= 5'h0;
    end else begin
      mult_data_vec_0 <= (_zz_mult_data_vec_0 >>> 8);
      mult_data_vec_1 <= (_zz_mult_data_vec_1 >>> 8);
      mult_data_vec_2 <= (_zz_mult_data_vec_2 >>> 8);
      mult_data_vec_3 <= (_zz_mult_data_vec_3 >>> 8);
      mult_data_vec_4 <= (_zz_mult_data_vec_4 >>> 8);
      mult_data_vec_5 <= (_zz_mult_data_vec_5 >>> 8);
      mult_data_vec_6 <= (_zz_mult_data_vec_6 >>> 8);
      mult_data_vec_7 <= (_zz_mult_data_vec_7 >>> 8);
      mult_data_vec_8 <= (_zz_mult_data_vec_8 >>> 8);
      mult_data_vec_9 <= (_zz_mult_data_vec_9 >>> 8);
      sum_result <= ($signed(_zz_sum_result) + $signed(_zz_sum_result_7));
      raw_data_fire_1_delay_1 <= raw_data_fire_1;
      raw_data_fire_1_delay_2 <= raw_data_fire_1_delay_1;
      raw_data_fire_1_delay_3 <= raw_data_fire_1_delay_2;
      raw_data_payload_last_delay_1 <= raw_data_payload_last;
      raw_data_payload_last_delay_2 <= raw_data_payload_last_delay_1;
      raw_data_payload_last_delay_3 <= raw_data_payload_last_delay_2;
      if(train_en) begin
        if(filtered_data_valid) begin
          raw_data_ready_1 <= 1'b1;
          cnt <= ((cnt == 5'h1f) ? 5'h0 : _zz_cnt);
          coff_mem_0 <= ($signed(coff_mem_0) + $signed(_zz_coff_mem_0));
          coff_mem_1 <= ($signed(coff_mem_1) + $signed(_zz_coff_mem_1));
          coff_mem_2 <= ($signed(coff_mem_2) + $signed(_zz_coff_mem_2));
          coff_mem_3 <= ($signed(coff_mem_3) + $signed(_zz_coff_mem_3));
          coff_mem_4 <= ($signed(coff_mem_4) + $signed(_zz_coff_mem_4));
          coff_mem_5 <= ($signed(coff_mem_5) + $signed(_zz_coff_mem_5));
          coff_mem_6 <= ($signed(coff_mem_6) + $signed(_zz_coff_mem_6));
          coff_mem_7 <= ($signed(coff_mem_7) + $signed(_zz_coff_mem_7));
          coff_mem_8 <= ($signed(coff_mem_8) + $signed(_zz_coff_mem_8));
          coff_mem_9 <= ($signed(coff_mem_9) + $signed(_zz_coff_mem_9));
        end else begin
          if(raw_data_fire_2) begin
            raw_data_ready_1 <= 1'b0;
          end
        end
      end else begin
        if(when_AdaptiveFilter_l78) begin
          cnt <= 5'h0;
          raw_data_ready_1 <= 1'b0;
        end else begin
          raw_data_ready_1 <= 1'b1;
        end
      end
    end
  end

  always @(posedge clk) begin
    if(raw_data_fire) begin
      raw_data_vec_0 <= raw_data_payload_fragment;
      raw_data_vec_1 <= raw_data_vec_0;
      raw_data_vec_2 <= raw_data_vec_1;
      raw_data_vec_3 <= raw_data_vec_2;
      raw_data_vec_4 <= raw_data_vec_3;
      raw_data_vec_5 <= raw_data_vec_4;
      raw_data_vec_6 <= raw_data_vec_5;
      raw_data_vec_7 <= raw_data_vec_6;
      raw_data_vec_8 <= raw_data_vec_7;
      raw_data_vec_9 <= raw_data_vec_8;
    end
  end


endmodule
