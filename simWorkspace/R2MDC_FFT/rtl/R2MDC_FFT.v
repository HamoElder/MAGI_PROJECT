// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : R2MDC_FFT
// Git hash  : b68131ea60dec115f99cc06b72be130f89e72a0b



module R2MDC_FFT (
  input               mode,
  input               raw_data_iq_valid,
  output              raw_data_iq_ready,
  input      [23:0]   raw_data_iq_payload_cha_i,
  input      [23:0]   raw_data_iq_payload_cha_q,
  output              result_iq_valid,
  output              result_iq_payload_last,
  output     [23:0]   result_iq_payload_fragment_cha_i,
  output     [23:0]   result_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);
  wire                raw_data_fifo_io_pop_ready;
  wire                fft_core_raw_data_valid;
  wire                raw_data_fifo_io_push_ready;
  wire                raw_data_fifo_io_pop_valid;
  wire       [23:0]   raw_data_fifo_io_pop_payload_re;
  wire       [23:0]   raw_data_fifo_io_pop_payload_im;
  wire       [7:0]    raw_data_fifo_io_occupancy;
  wire       [7:0]    raw_data_fifo_io_availability;
  wire                fft_core_raw_data_ready;
  wire                fft_core_result_valid;
  wire                fft_core_result_payload_last;
  wire       [23:0]   fft_core_result_payload_fragment_re;
  wire       [23:0]   fft_core_result_payload_fragment_im;
  reg                 fifo_pop_en;
  reg        [5:0]    pop_cnt;
  wire                raw_data_fifo_io_pop_fire;
  wire                when_R2MDC_FFT_l28;
  wire                when_R2MDC_FFT_l31;

  StreamFifo raw_data_fifo (
    .io_push_valid         (raw_data_iq_valid                ), //i
    .io_push_ready         (raw_data_fifo_io_push_ready      ), //o
    .io_push_payload_re    (raw_data_iq_payload_cha_i        ), //i
    .io_push_payload_im    (raw_data_iq_payload_cha_q        ), //i
    .io_pop_valid          (raw_data_fifo_io_pop_valid       ), //o
    .io_pop_ready          (raw_data_fifo_io_pop_ready       ), //i
    .io_pop_payload_re     (raw_data_fifo_io_pop_payload_re  ), //o
    .io_pop_payload_im     (raw_data_fifo_io_pop_payload_im  ), //o
    .io_flush              (1'b0                             ), //i
    .io_occupancy          (raw_data_fifo_io_occupancy       ), //o
    .io_availability       (raw_data_fifo_io_availability    ), //o
    .clk                   (clk                              ), //i
    .reset                 (reset                            )  //i
  );
  R2MDC fft_core (
    .mode                          (mode                                 ), //i
    .raw_data_valid                (fft_core_raw_data_valid              ), //i
    .raw_data_ready                (fft_core_raw_data_ready              ), //o
    .raw_data_payload_re           (raw_data_fifo_io_pop_payload_re      ), //i
    .raw_data_payload_im           (raw_data_fifo_io_pop_payload_im      ), //i
    .result_valid                  (fft_core_result_valid                ), //o
    .result_payload_last           (fft_core_result_payload_last         ), //o
    .result_payload_fragment_re    (fft_core_result_payload_fragment_re  ), //o
    .result_payload_fragment_im    (fft_core_result_payload_fragment_im  ), //o
    .clk                           (clk                                  ), //i
    .reset                         (reset                                )  //i
  );
  assign raw_data_iq_ready = raw_data_fifo_io_push_ready;
  assign raw_data_fifo_io_pop_fire = (raw_data_fifo_io_pop_valid && raw_data_fifo_io_pop_ready);
  assign when_R2MDC_FFT_l28 = (pop_cnt == 6'h3f);
  assign when_R2MDC_FFT_l31 = (8'h40 <= raw_data_fifo_io_occupancy);
  assign raw_data_fifo_io_pop_ready = (fft_core_raw_data_ready && fifo_pop_en);
  assign fft_core_raw_data_valid = (raw_data_fifo_io_pop_valid && fifo_pop_en);
  assign result_iq_valid = fft_core_result_valid;
  assign result_iq_payload_fragment_cha_i = fft_core_result_payload_fragment_re;
  assign result_iq_payload_fragment_cha_q = fft_core_result_payload_fragment_im;
  assign result_iq_payload_last = fft_core_result_payload_last;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      fifo_pop_en <= 1'b0;
      pop_cnt <= 6'h0;
    end else begin
      if(fifo_pop_en) begin
        if(raw_data_fifo_io_pop_fire) begin
          pop_cnt <= (pop_cnt + 6'h01);
        end
        if(when_R2MDC_FFT_l28) begin
          fifo_pop_en <= 1'b0;
        end
      end else begin
        if(when_R2MDC_FFT_l31) begin
          fifo_pop_en <= 1'b1;
        end
      end
    end
  end


endmodule

module R2MDC (
  input               mode,
  input               raw_data_valid,
  output              raw_data_ready,
  input      [23:0]   raw_data_payload_re,
  input      [23:0]   raw_data_payload_im,
  output              result_valid,
  output              result_payload_last,
  output     [23:0]   result_payload_fragment_re,
  output     [23:0]   result_payload_fragment_im,
  input               clk,
  input               reset
);
  wire       [23:0]   r2Butterfly_5_wn_re;
  wire       [23:0]   r2Butterfly_5_wn_im;
  wire                r2Switch_5_sel;
  wire       [23:0]   r2Butterfly_6_wn_re;
  wire       [23:0]   r2Butterfly_6_wn_im;
  wire                r2Switch_6_sel;
  wire       [23:0]   r2Butterfly_7_wn_re;
  wire       [23:0]   r2Butterfly_7_wn_im;
  wire                r2Switch_7_sel;
  wire       [23:0]   r2Butterfly_8_wn_re;
  wire       [23:0]   r2Butterfly_8_wn_im;
  wire                r2Switch_8_sel;
  wire       [23:0]   r2Butterfly_9_wn_re;
  wire       [23:0]   r2Butterfly_9_wn_im;
  wire                r2Switch_9_sel;
  wire                reorder_1_unsorted_valid;
  reg        [47:0]   _zz__zz_1_port0;
  reg        [47:0]   _zz__zz_2_port0;
  reg        [47:0]   _zz__zz_3_port0;
  reg        [47:0]   _zz__zz_4_port0;
  reg        [47:0]   _zz__zz_5_port0;
  wire       [23:0]   shiftRegister_10_output_re;
  wire       [23:0]   shiftRegister_10_output_im;
  wire       [23:0]   r2Butterfly_5_out1_re;
  wire       [23:0]   r2Butterfly_5_out1_im;
  wire       [23:0]   r2Butterfly_5_out2_re;
  wire       [23:0]   r2Butterfly_5_out2_im;
  wire       [23:0]   shiftRegister_11_output_re;
  wire       [23:0]   shiftRegister_11_output_im;
  wire       [23:0]   r2Switch_5_out1_re;
  wire       [23:0]   r2Switch_5_out1_im;
  wire       [23:0]   r2Switch_5_out2_re;
  wire       [23:0]   r2Switch_5_out2_im;
  wire       [23:0]   shiftRegister_12_output_re;
  wire       [23:0]   shiftRegister_12_output_im;
  wire       [23:0]   r2Butterfly_6_out1_re;
  wire       [23:0]   r2Butterfly_6_out1_im;
  wire       [23:0]   r2Butterfly_6_out2_re;
  wire       [23:0]   r2Butterfly_6_out2_im;
  wire       [23:0]   shiftRegister_13_output_re;
  wire       [23:0]   shiftRegister_13_output_im;
  wire       [23:0]   r2Switch_6_out1_re;
  wire       [23:0]   r2Switch_6_out1_im;
  wire       [23:0]   r2Switch_6_out2_re;
  wire       [23:0]   r2Switch_6_out2_im;
  wire       [23:0]   shiftRegister_14_output_re;
  wire       [23:0]   shiftRegister_14_output_im;
  wire       [23:0]   r2Butterfly_7_out1_re;
  wire       [23:0]   r2Butterfly_7_out1_im;
  wire       [23:0]   r2Butterfly_7_out2_re;
  wire       [23:0]   r2Butterfly_7_out2_im;
  wire       [23:0]   shiftRegister_15_output_re;
  wire       [23:0]   shiftRegister_15_output_im;
  wire       [23:0]   r2Switch_7_out1_re;
  wire       [23:0]   r2Switch_7_out1_im;
  wire       [23:0]   r2Switch_7_out2_re;
  wire       [23:0]   r2Switch_7_out2_im;
  wire       [23:0]   shiftRegister_16_output_re;
  wire       [23:0]   shiftRegister_16_output_im;
  wire       [23:0]   r2Butterfly_8_out1_re;
  wire       [23:0]   r2Butterfly_8_out1_im;
  wire       [23:0]   r2Butterfly_8_out2_re;
  wire       [23:0]   r2Butterfly_8_out2_im;
  wire       [23:0]   shiftRegister_17_output_re;
  wire       [23:0]   shiftRegister_17_output_im;
  wire       [23:0]   r2Switch_8_out1_re;
  wire       [23:0]   r2Switch_8_out1_im;
  wire       [23:0]   r2Switch_8_out2_re;
  wire       [23:0]   r2Switch_8_out2_im;
  wire       [23:0]   shiftRegister_18_output_re;
  wire       [23:0]   shiftRegister_18_output_im;
  wire       [23:0]   r2Butterfly_9_out1_re;
  wire       [23:0]   r2Butterfly_9_out1_im;
  wire       [23:0]   r2Butterfly_9_out2_re;
  wire       [23:0]   r2Butterfly_9_out2_im;
  wire       [23:0]   shiftRegister_19_output_re;
  wire       [23:0]   shiftRegister_19_output_im;
  wire       [23:0]   r2Switch_9_out1_re;
  wire       [23:0]   r2Switch_9_out1_im;
  wire       [23:0]   r2Switch_9_out2_re;
  wire       [23:0]   r2Switch_9_out2_im;
  wire                reorder_1_sorted_valid;
  wire                reorder_1_sorted_payload_last;
  wire       [23:0]   reorder_1_sorted_payload_fragment_re;
  wire       [23:0]   reorder_1_sorted_payload_fragment_im;
  wire       [6:0]    _zz_cnt;
  wire                _zz__zz_1_port;
  wire                _zz__zz_wn_re_2;
  wire       [23:0]   _zz__zz_wn_re_1;
  wire       [23:0]   _zz__zz_wn_im;
  wire       [23:0]   _zz_wn_im_5;
  wire       [23:0]   _zz_wn_im_6;
  wire                _zz__zz_2_port;
  wire                _zz__zz_wn_re_5;
  wire       [23:0]   _zz__zz_wn_re_4;
  wire       [23:0]   _zz__zz_wn_im_1;
  wire       [23:0]   _zz_wn_im_7;
  wire       [23:0]   _zz_wn_im_8;
  wire                _zz__zz_3_port;
  wire                _zz__zz_wn_re_8;
  wire       [23:0]   _zz__zz_wn_re_7;
  wire       [23:0]   _zz__zz_wn_im_2;
  wire       [23:0]   _zz_wn_im_9;
  wire       [23:0]   _zz_wn_im_10;
  wire                _zz__zz_4_port;
  wire                _zz__zz_wn_re_11;
  wire       [23:0]   _zz__zz_wn_re_10;
  wire       [23:0]   _zz__zz_wn_im_3;
  wire       [23:0]   _zz_wn_im_11;
  wire       [23:0]   _zz_wn_im_12;
  wire                _zz__zz_5_port;
  wire                _zz__zz_wn_re_14;
  wire       [23:0]   _zz__zz_wn_re_13;
  wire       [23:0]   _zz__zz_wn_im_4;
  wire       [23:0]   _zz_wn_im_13;
  wire       [23:0]   _zz_wn_im_14;
  wire       [23:0]   _zz_result_out1_re;
  wire       [17:0]   _zz_result_out1_re_1;
  wire       [23:0]   _zz_result_out1_im;
  wire       [17:0]   _zz_result_out1_im_1;
  wire       [23:0]   _zz_result_out2_re;
  wire       [17:0]   _zz_result_out2_re_1;
  wire       [23:0]   _zz_result_out2_im;
  wire       [17:0]   _zz_result_out2_im_1;
  reg        [6:0]    cnt;
  wire                raw_data_fire;
  wire                when_R2MDC_l20;
  wire       [23:0]   out0_buf_0_re;
  wire       [23:0]   out0_buf_0_im;
  wire       [23:0]   out0_buf_1_re;
  wire       [23:0]   out0_buf_1_im;
  wire       [23:0]   out0_buf_2_re;
  wire       [23:0]   out0_buf_2_im;
  wire       [23:0]   out0_buf_3_re;
  wire       [23:0]   out0_buf_3_im;
  wire       [23:0]   out0_buf_4_re;
  wire       [23:0]   out0_buf_4_im;
  wire       [23:0]   out0_buf_5_re;
  wire       [23:0]   out0_buf_5_im;
  wire       [23:0]   out0_buf_6_re;
  wire       [23:0]   out0_buf_6_im;
  wire       [23:0]   out1_buf_0_re;
  wire       [23:0]   out1_buf_0_im;
  wire       [23:0]   out1_buf_1_re;
  wire       [23:0]   out1_buf_1_im;
  wire       [23:0]   out1_buf_2_re;
  wire       [23:0]   out1_buf_2_im;
  wire       [23:0]   out1_buf_3_re;
  wire       [23:0]   out1_buf_3_im;
  wire       [23:0]   out1_buf_4_re;
  wire       [23:0]   out1_buf_4_im;
  wire       [23:0]   out1_buf_5_re;
  wire       [23:0]   out1_buf_5_im;
  wire       [23:0]   out1_buf_6_re;
  wire       [23:0]   out1_buf_6_im;
  wire       [6:0]    cnt_p1;
  wire       [4:0]    _zz_wn_re;
  wire       [23:0]   _zz_wn_re_1;
  wire       [23:0]   _zz_wn_im;
  wire       [47:0]   _zz_wn_re_2;
  wire       [3:0]    _zz_wn_re_3;
  wire       [23:0]   _zz_wn_re_4;
  wire       [23:0]   _zz_wn_im_1;
  wire       [47:0]   _zz_wn_re_5;
  wire       [2:0]    _zz_wn_re_6;
  wire       [23:0]   _zz_wn_re_7;
  wire       [23:0]   _zz_wn_im_2;
  wire       [47:0]   _zz_wn_re_8;
  wire       [1:0]    _zz_wn_re_9;
  wire       [23:0]   _zz_wn_re_10;
  wire       [23:0]   _zz_wn_im_3;
  wire       [47:0]   _zz_wn_re_11;
  wire       [0:0]    _zz_wn_re_12;
  wire       [23:0]   _zz_wn_re_13;
  wire       [23:0]   _zz_wn_im_4;
  wire       [47:0]   _zz_wn_re_14;
  reg        [23:0]   out1D1_re;
  reg        [23:0]   out1D1_im;
  wire       [23:0]   result_out1_re;
  wire       [23:0]   result_out1_im;
  wire       [23:0]   result_out2_re;
  wire       [23:0]   result_out2_im;
  reg        [23:0]   result_out1_regNext_re;
  reg        [23:0]   result_out1_regNext_im;
  reg        [23:0]   result_out2_regNext_re;
  reg        [23:0]   result_out2_regNext_im;
  (* rom_style = "block" *) reg [47:0] _zz_1 [0:31];
  (* rom_style = "block" *) reg [47:0] _zz_2 [0:15];
  (* rom_style = "block" *) reg [47:0] _zz_3 [0:7];
  (* rom_style = "block" *) reg [47:0] _zz_4 [0:3];
  (* rom_style = "block" *) reg [47:0] _zz_5 [0:1];

  assign _zz_cnt = (cnt + 7'h01);
  assign _zz__zz_wn_re_1 = _zz_wn_re_2[23 : 0];
  assign _zz__zz_wn_im = _zz_wn_re_2[47 : 24];
  assign _zz_wn_im_5 = ($signed(_zz_wn_im_6) - $signed(_zz_wn_im));
  assign _zz_wn_im_6 = 24'h0;
  assign _zz__zz_wn_re_4 = _zz_wn_re_5[23 : 0];
  assign _zz__zz_wn_im_1 = _zz_wn_re_5[47 : 24];
  assign _zz_wn_im_7 = ($signed(_zz_wn_im_8) - $signed(_zz_wn_im_1));
  assign _zz_wn_im_8 = 24'h0;
  assign _zz__zz_wn_re_7 = _zz_wn_re_8[23 : 0];
  assign _zz__zz_wn_im_2 = _zz_wn_re_8[47 : 24];
  assign _zz_wn_im_9 = ($signed(_zz_wn_im_10) - $signed(_zz_wn_im_2));
  assign _zz_wn_im_10 = 24'h0;
  assign _zz__zz_wn_re_10 = _zz_wn_re_11[23 : 0];
  assign _zz__zz_wn_im_3 = _zz_wn_re_11[47 : 24];
  assign _zz_wn_im_11 = ($signed(_zz_wn_im_12) - $signed(_zz_wn_im_3));
  assign _zz_wn_im_12 = 24'h0;
  assign _zz__zz_wn_re_13 = _zz_wn_re_14[23 : 0];
  assign _zz__zz_wn_im_4 = _zz_wn_re_14[47 : 24];
  assign _zz_wn_im_13 = ($signed(_zz_wn_im_14) - $signed(_zz_wn_im_4));
  assign _zz_wn_im_14 = 24'h0;
  assign _zz_result_out1_re_1 = (out0_buf_6_re >>> 6);
  assign _zz_result_out1_re = {{6{_zz_result_out1_re_1[17]}}, _zz_result_out1_re_1};
  assign _zz_result_out1_im_1 = (out0_buf_6_im >>> 6);
  assign _zz_result_out1_im = {{6{_zz_result_out1_im_1[17]}}, _zz_result_out1_im_1};
  assign _zz_result_out2_re_1 = (out1_buf_6_re >>> 6);
  assign _zz_result_out2_re = {{6{_zz_result_out2_re_1[17]}}, _zz_result_out2_re_1};
  assign _zz_result_out2_im_1 = (out1_buf_6_im >>> 6);
  assign _zz_result_out2_im = {{6{_zz_result_out2_im_1[17]}}, _zz_result_out2_im_1};
  assign _zz__zz_wn_re_2 = 1'b1;
  assign _zz__zz_wn_re_5 = 1'b1;
  assign _zz__zz_wn_re_8 = 1'b1;
  assign _zz__zz_wn_re_11 = 1'b1;
  assign _zz__zz_wn_re_14 = 1'b1;
  initial begin
    $readmemb("R2MDC_FFT.v_toplevel_fft_core__zz_1.bin",_zz_1);
  end
  always @(posedge clk) begin
    if(_zz__zz_wn_re_2) begin
      _zz__zz_1_port0 <= _zz_1[_zz_wn_re];
    end
  end

  initial begin
    $readmemb("R2MDC_FFT.v_toplevel_fft_core__zz_2.bin",_zz_2);
  end
  always @(posedge clk) begin
    if(_zz__zz_wn_re_5) begin
      _zz__zz_2_port0 <= _zz_2[_zz_wn_re_3];
    end
  end

  initial begin
    $readmemb("R2MDC_FFT.v_toplevel_fft_core__zz_3.bin",_zz_3);
  end
  always @(posedge clk) begin
    if(_zz__zz_wn_re_8) begin
      _zz__zz_3_port0 <= _zz_3[_zz_wn_re_6];
    end
  end

  initial begin
    $readmemb("R2MDC_FFT.v_toplevel_fft_core__zz_4.bin",_zz_4);
  end
  always @(posedge clk) begin
    if(_zz__zz_wn_re_11) begin
      _zz__zz_4_port0 <= _zz_4[_zz_wn_re_9];
    end
  end

  initial begin
    $readmemb("R2MDC_FFT.v_toplevel_fft_core__zz_5.bin",_zz_5);
  end
  always @(posedge clk) begin
    if(_zz__zz_wn_re_14) begin
      _zz__zz_5_port0 <= _zz_5[_zz_wn_re_12];
    end
  end

  ShiftRegister shiftRegister_10 (
    .input_re     (out0_buf_0_re               ), //i
    .input_im     (out0_buf_0_im               ), //i
    .output_re    (shiftRegister_10_output_re  ), //o
    .output_im    (shiftRegister_10_output_im  ), //o
    .enable       (1'b1                        ), //i
    .clk          (clk                         ), //i
    .reset        (reset                       )  //i
  );
  R2Butterfly r2Butterfly_5 (
    .in1_re     (shiftRegister_10_output_re  ), //i
    .in1_im     (shiftRegister_10_output_im  ), //i
    .in2_re     (out1_buf_0_re               ), //i
    .in2_im     (out1_buf_0_im               ), //i
    .wn_re      (r2Butterfly_5_wn_re         ), //i
    .wn_im      (r2Butterfly_5_wn_im         ), //i
    .out1_re    (r2Butterfly_5_out1_re       ), //o
    .out1_im    (r2Butterfly_5_out1_im       ), //o
    .out2_re    (r2Butterfly_5_out2_re       ), //o
    .out2_im    (r2Butterfly_5_out2_im       )  //o
  );
  ShiftRegister_1 shiftRegister_11 (
    .input_re     (r2Butterfly_5_out2_re       ), //i
    .input_im     (r2Butterfly_5_out2_im       ), //i
    .output_re    (shiftRegister_11_output_re  ), //o
    .output_im    (shiftRegister_11_output_im  ), //o
    .enable       (1'b1                        ), //i
    .clk          (clk                         ), //i
    .reset        (reset                       )  //i
  );
  R2Switch r2Switch_5 (
    .in1_re     (r2Butterfly_5_out1_re       ), //i
    .in1_im     (r2Butterfly_5_out1_im       ), //i
    .in2_re     (shiftRegister_11_output_re  ), //i
    .in2_im     (shiftRegister_11_output_im  ), //i
    .sel        (r2Switch_5_sel              ), //i
    .out1_re    (r2Switch_5_out1_re          ), //o
    .out1_im    (r2Switch_5_out1_im          ), //o
    .out2_re    (r2Switch_5_out2_re          ), //o
    .out2_im    (r2Switch_5_out2_im          )  //o
  );
  ShiftRegister_1 shiftRegister_12 (
    .input_re     (out0_buf_1_re               ), //i
    .input_im     (out0_buf_1_im               ), //i
    .output_re    (shiftRegister_12_output_re  ), //o
    .output_im    (shiftRegister_12_output_im  ), //o
    .enable       (1'b1                        ), //i
    .clk          (clk                         ), //i
    .reset        (reset                       )  //i
  );
  R2Butterfly r2Butterfly_6 (
    .in1_re     (shiftRegister_12_output_re  ), //i
    .in1_im     (shiftRegister_12_output_im  ), //i
    .in2_re     (out1_buf_1_re               ), //i
    .in2_im     (out1_buf_1_im               ), //i
    .wn_re      (r2Butterfly_6_wn_re         ), //i
    .wn_im      (r2Butterfly_6_wn_im         ), //i
    .out1_re    (r2Butterfly_6_out1_re       ), //o
    .out1_im    (r2Butterfly_6_out1_im       ), //o
    .out2_re    (r2Butterfly_6_out2_re       ), //o
    .out2_im    (r2Butterfly_6_out2_im       )  //o
  );
  ShiftRegister_3 shiftRegister_13 (
    .input_re     (r2Butterfly_6_out2_re       ), //i
    .input_im     (r2Butterfly_6_out2_im       ), //i
    .output_re    (shiftRegister_13_output_re  ), //o
    .output_im    (shiftRegister_13_output_im  ), //o
    .enable       (1'b1                        ), //i
    .clk          (clk                         ), //i
    .reset        (reset                       )  //i
  );
  R2Switch r2Switch_6 (
    .in1_re     (r2Butterfly_6_out1_re       ), //i
    .in1_im     (r2Butterfly_6_out1_im       ), //i
    .in2_re     (shiftRegister_13_output_re  ), //i
    .in2_im     (shiftRegister_13_output_im  ), //i
    .sel        (r2Switch_6_sel              ), //i
    .out1_re    (r2Switch_6_out1_re          ), //o
    .out1_im    (r2Switch_6_out1_im          ), //o
    .out2_re    (r2Switch_6_out2_re          ), //o
    .out2_im    (r2Switch_6_out2_im          )  //o
  );
  ShiftRegister_3 shiftRegister_14 (
    .input_re     (out0_buf_2_re               ), //i
    .input_im     (out0_buf_2_im               ), //i
    .output_re    (shiftRegister_14_output_re  ), //o
    .output_im    (shiftRegister_14_output_im  ), //o
    .enable       (1'b1                        ), //i
    .clk          (clk                         ), //i
    .reset        (reset                       )  //i
  );
  R2Butterfly r2Butterfly_7 (
    .in1_re     (shiftRegister_14_output_re  ), //i
    .in1_im     (shiftRegister_14_output_im  ), //i
    .in2_re     (out1_buf_2_re               ), //i
    .in2_im     (out1_buf_2_im               ), //i
    .wn_re      (r2Butterfly_7_wn_re         ), //i
    .wn_im      (r2Butterfly_7_wn_im         ), //i
    .out1_re    (r2Butterfly_7_out1_re       ), //o
    .out1_im    (r2Butterfly_7_out1_im       ), //o
    .out2_re    (r2Butterfly_7_out2_re       ), //o
    .out2_im    (r2Butterfly_7_out2_im       )  //o
  );
  ShiftRegister_5 shiftRegister_15 (
    .input_re     (r2Butterfly_7_out2_re       ), //i
    .input_im     (r2Butterfly_7_out2_im       ), //i
    .output_re    (shiftRegister_15_output_re  ), //o
    .output_im    (shiftRegister_15_output_im  ), //o
    .enable       (1'b1                        ), //i
    .clk          (clk                         ), //i
    .reset        (reset                       )  //i
  );
  R2Switch r2Switch_7 (
    .in1_re     (r2Butterfly_7_out1_re       ), //i
    .in1_im     (r2Butterfly_7_out1_im       ), //i
    .in2_re     (shiftRegister_15_output_re  ), //i
    .in2_im     (shiftRegister_15_output_im  ), //i
    .sel        (r2Switch_7_sel              ), //i
    .out1_re    (r2Switch_7_out1_re          ), //o
    .out1_im    (r2Switch_7_out1_im          ), //o
    .out2_re    (r2Switch_7_out2_re          ), //o
    .out2_im    (r2Switch_7_out2_im          )  //o
  );
  ShiftRegister_5 shiftRegister_16 (
    .input_re     (out0_buf_3_re               ), //i
    .input_im     (out0_buf_3_im               ), //i
    .output_re    (shiftRegister_16_output_re  ), //o
    .output_im    (shiftRegister_16_output_im  ), //o
    .enable       (1'b1                        ), //i
    .clk          (clk                         ), //i
    .reset        (reset                       )  //i
  );
  R2Butterfly r2Butterfly_8 (
    .in1_re     (shiftRegister_16_output_re  ), //i
    .in1_im     (shiftRegister_16_output_im  ), //i
    .in2_re     (out1_buf_3_re               ), //i
    .in2_im     (out1_buf_3_im               ), //i
    .wn_re      (r2Butterfly_8_wn_re         ), //i
    .wn_im      (r2Butterfly_8_wn_im         ), //i
    .out1_re    (r2Butterfly_8_out1_re       ), //o
    .out1_im    (r2Butterfly_8_out1_im       ), //o
    .out2_re    (r2Butterfly_8_out2_re       ), //o
    .out2_im    (r2Butterfly_8_out2_im       )  //o
  );
  ShiftRegister_7 shiftRegister_17 (
    .input_re     (r2Butterfly_8_out2_re       ), //i
    .input_im     (r2Butterfly_8_out2_im       ), //i
    .output_re    (shiftRegister_17_output_re  ), //o
    .output_im    (shiftRegister_17_output_im  ), //o
    .enable       (1'b1                        ), //i
    .clk          (clk                         ), //i
    .reset        (reset                       )  //i
  );
  R2Switch r2Switch_8 (
    .in1_re     (r2Butterfly_8_out1_re       ), //i
    .in1_im     (r2Butterfly_8_out1_im       ), //i
    .in2_re     (shiftRegister_17_output_re  ), //i
    .in2_im     (shiftRegister_17_output_im  ), //i
    .sel        (r2Switch_8_sel              ), //i
    .out1_re    (r2Switch_8_out1_re          ), //o
    .out1_im    (r2Switch_8_out1_im          ), //o
    .out2_re    (r2Switch_8_out2_re          ), //o
    .out2_im    (r2Switch_8_out2_im          )  //o
  );
  ShiftRegister_7 shiftRegister_18 (
    .input_re     (out0_buf_4_re               ), //i
    .input_im     (out0_buf_4_im               ), //i
    .output_re    (shiftRegister_18_output_re  ), //o
    .output_im    (shiftRegister_18_output_im  ), //o
    .enable       (1'b1                        ), //i
    .clk          (clk                         ), //i
    .reset        (reset                       )  //i
  );
  R2Butterfly r2Butterfly_9 (
    .in1_re     (shiftRegister_18_output_re  ), //i
    .in1_im     (shiftRegister_18_output_im  ), //i
    .in2_re     (out1_buf_4_re               ), //i
    .in2_im     (out1_buf_4_im               ), //i
    .wn_re      (r2Butterfly_9_wn_re         ), //i
    .wn_im      (r2Butterfly_9_wn_im         ), //i
    .out1_re    (r2Butterfly_9_out1_re       ), //o
    .out1_im    (r2Butterfly_9_out1_im       ), //o
    .out2_re    (r2Butterfly_9_out2_re       ), //o
    .out2_im    (r2Butterfly_9_out2_im       )  //o
  );
  ShiftRegister_9 shiftRegister_19 (
    .input_re     (r2Butterfly_9_out2_re       ), //i
    .input_im     (r2Butterfly_9_out2_im       ), //i
    .output_re    (shiftRegister_19_output_re  ), //o
    .output_im    (shiftRegister_19_output_im  ), //o
    .enable       (1'b1                        ), //i
    .clk          (clk                         ), //i
    .reset        (reset                       )  //i
  );
  R2Switch r2Switch_9 (
    .in1_re     (r2Butterfly_9_out1_re       ), //i
    .in1_im     (r2Butterfly_9_out1_im       ), //i
    .in2_re     (shiftRegister_19_output_re  ), //i
    .in2_im     (shiftRegister_19_output_im  ), //i
    .sel        (r2Switch_9_sel              ), //i
    .out1_re    (r2Switch_9_out1_re          ), //o
    .out1_im    (r2Switch_9_out1_im          ), //o
    .out2_re    (r2Switch_9_out2_re          ), //o
    .out2_im    (r2Switch_9_out2_im          )  //o
  );
  Reorder reorder_1 (
    .unsorted_valid                (reorder_1_unsorted_valid              ), //i
    .unsorted_payload_in0_re       (result_out1_regNext_re                ), //i
    .unsorted_payload_in0_im       (result_out1_regNext_im                ), //i
    .unsorted_payload_in1_re       (result_out2_regNext_re                ), //i
    .unsorted_payload_in1_im       (result_out2_regNext_im                ), //i
    .sorted_valid                  (reorder_1_sorted_valid                ), //o
    .sorted_payload_last           (reorder_1_sorted_payload_last         ), //o
    .sorted_payload_fragment_re    (reorder_1_sorted_payload_fragment_re  ), //o
    .sorted_payload_fragment_im    (reorder_1_sorted_payload_fragment_im  ), //o
    .clk                           (clk                                   ), //i
    .reset                         (reset                                 )  //i
  );
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_R2MDC_l20 = (raw_data_fire || (7'h40 <= cnt));
  assign raw_data_ready = (cnt < 7'h40);
  assign out0_buf_0_re = raw_data_payload_re;
  assign out0_buf_0_im = raw_data_payload_im;
  assign out1_buf_0_re = raw_data_payload_re;
  assign out1_buf_0_im = raw_data_payload_im;
  assign cnt_p1 = (cnt + 7'h01);
  assign _zz_wn_re = cnt_p1[4 : 0];
  assign _zz_wn_re_2 = _zz__zz_1_port0;
  assign _zz_wn_re_1 = _zz__zz_wn_re_1[23 : 0];
  assign _zz_wn_im = _zz__zz_wn_im[23 : 0];
  assign r2Butterfly_5_wn_re = (mode ? _zz_wn_re_1 : _zz_wn_re_1);
  assign r2Butterfly_5_wn_im = (mode ? _zz_wn_im : _zz_wn_im_5);
  assign r2Switch_5_sel = cnt[4];
  assign out0_buf_1_re = r2Switch_5_out1_re;
  assign out0_buf_1_im = r2Switch_5_out1_im;
  assign out1_buf_1_re = r2Switch_5_out2_re;
  assign out1_buf_1_im = r2Switch_5_out2_im;
  assign _zz_wn_re_3 = cnt_p1[3 : 0];
  assign _zz_wn_re_5 = _zz__zz_2_port0;
  assign _zz_wn_re_4 = _zz__zz_wn_re_4[23 : 0];
  assign _zz_wn_im_1 = _zz__zz_wn_im_1[23 : 0];
  assign r2Butterfly_6_wn_re = (mode ? _zz_wn_re_4 : _zz_wn_re_4);
  assign r2Butterfly_6_wn_im = (mode ? _zz_wn_im_1 : _zz_wn_im_7);
  assign r2Switch_6_sel = cnt[3];
  assign out0_buf_2_re = r2Switch_6_out1_re;
  assign out0_buf_2_im = r2Switch_6_out1_im;
  assign out1_buf_2_re = r2Switch_6_out2_re;
  assign out1_buf_2_im = r2Switch_6_out2_im;
  assign _zz_wn_re_6 = cnt_p1[2 : 0];
  assign _zz_wn_re_8 = _zz__zz_3_port0;
  assign _zz_wn_re_7 = _zz__zz_wn_re_7[23 : 0];
  assign _zz_wn_im_2 = _zz__zz_wn_im_2[23 : 0];
  assign r2Butterfly_7_wn_re = (mode ? _zz_wn_re_7 : _zz_wn_re_7);
  assign r2Butterfly_7_wn_im = (mode ? _zz_wn_im_2 : _zz_wn_im_9);
  assign r2Switch_7_sel = cnt[2];
  assign out0_buf_3_re = r2Switch_7_out1_re;
  assign out0_buf_3_im = r2Switch_7_out1_im;
  assign out1_buf_3_re = r2Switch_7_out2_re;
  assign out1_buf_3_im = r2Switch_7_out2_im;
  assign _zz_wn_re_9 = cnt_p1[1 : 0];
  assign _zz_wn_re_11 = _zz__zz_4_port0;
  assign _zz_wn_re_10 = _zz__zz_wn_re_10[23 : 0];
  assign _zz_wn_im_3 = _zz__zz_wn_im_3[23 : 0];
  assign r2Butterfly_8_wn_re = (mode ? _zz_wn_re_10 : _zz_wn_re_10);
  assign r2Butterfly_8_wn_im = (mode ? _zz_wn_im_3 : _zz_wn_im_11);
  assign r2Switch_8_sel = cnt[1];
  assign out0_buf_4_re = r2Switch_8_out1_re;
  assign out0_buf_4_im = r2Switch_8_out1_im;
  assign out1_buf_4_re = r2Switch_8_out2_re;
  assign out1_buf_4_im = r2Switch_8_out2_im;
  assign _zz_wn_re_12 = cnt_p1[0 : 0];
  assign _zz_wn_re_14 = _zz__zz_5_port0;
  assign _zz_wn_re_13 = _zz__zz_wn_re_13[23 : 0];
  assign _zz_wn_im_4 = _zz__zz_wn_im_4[23 : 0];
  assign r2Butterfly_9_wn_re = (mode ? _zz_wn_re_13 : _zz_wn_re_13);
  assign r2Butterfly_9_wn_im = (mode ? _zz_wn_im_4 : _zz_wn_im_13);
  assign r2Switch_9_sel = cnt[0];
  assign out0_buf_5_re = r2Switch_9_out1_re;
  assign out0_buf_5_im = r2Switch_9_out1_im;
  assign out1_buf_5_re = r2Switch_9_out2_re;
  assign out1_buf_5_im = r2Switch_9_out2_im;
  assign out0_buf_6_re = ($signed(out1D1_re) + $signed(out1_buf_5_re));
  assign out0_buf_6_im = ($signed(out1D1_im) + $signed(out1_buf_5_im));
  assign out1_buf_6_re = ($signed(out1D1_re) - $signed(out1_buf_5_re));
  assign out1_buf_6_im = ($signed(out1D1_im) - $signed(out1_buf_5_im));
  assign result_out1_re = (mode ? out0_buf_6_re : _zz_result_out1_re);
  assign result_out1_im = (mode ? out0_buf_6_im : _zz_result_out1_im);
  assign result_out2_re = (mode ? out1_buf_6_re : _zz_result_out2_re);
  assign result_out2_im = (mode ? out1_buf_6_im : _zz_result_out2_im);
  assign reorder_1_unsorted_valid = (7'h3f < cnt);
  assign result_valid = reorder_1_sorted_valid;
  assign result_payload_last = reorder_1_sorted_payload_last;
  assign result_payload_fragment_re = reorder_1_sorted_payload_fragment_re;
  assign result_payload_fragment_im = reorder_1_sorted_payload_fragment_im;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 7'h0;
    end else begin
      if(when_R2MDC_l20) begin
        cnt <= ((cnt == 7'h5f) ? 7'h0 : _zz_cnt);
      end
    end
  end

  always @(posedge clk) begin
    out1D1_re <= out0_buf_5_re;
    out1D1_im <= out0_buf_5_im;
    result_out1_regNext_re <= result_out1_re;
    result_out1_regNext_im <= result_out1_im;
    result_out2_regNext_re <= result_out2_re;
    result_out2_regNext_im <= result_out2_im;
  end


endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input      [23:0]   io_push_payload_re,
  input      [23:0]   io_push_payload_im,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [23:0]   io_pop_payload_re,
  output     [23:0]   io_pop_payload_im,
  input               io_flush,
  output     [7:0]    io_occupancy,
  output     [7:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [47:0]   _zz_logic_ram_port0;
  wire       [6:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [6:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_re;
  wire       [23:0]   _zz_io_pop_payload_re_1;
  wire       [23:0]   _zz_io_pop_payload_im;
  wire       [47:0]   _zz_logic_ram_port_1;
  wire       [6:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [6:0]    logic_pushPtr_valueNext;
  reg        [6:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [6:0]    logic_popPtr_valueNext;
  reg        [6:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [47:0]   _zz_io_pop_payload_re;
  wire                when_Stream_l933;
  wire       [6:0]    logic_ptrDif;
  reg [47:0] logic_ram [0:127];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {6'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {6'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_pop_payload_re_1 = _zz_io_pop_payload_re[23 : 0];
  assign _zz_io_pop_payload_im = _zz_io_pop_payload_re[47 : 24];
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_re = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_im,io_push_payload_re};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_re) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(logic_pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0;
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1;
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 7'h7f);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 7'h0;
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0;
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1;
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 7'h7f);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 7'h0;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_re = _zz_logic_ram_port0;
  assign io_pop_payload_re = _zz_io_pop_payload_re_1[23 : 0];
  assign io_pop_payload_im = _zz_io_pop_payload_im[23 : 0];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 7'h0;
      logic_popPtr_value <= 7'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l933) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module Reorder (
  input               unsorted_valid,
  input      [23:0]   unsorted_payload_in0_re,
  input      [23:0]   unsorted_payload_in0_im,
  input      [23:0]   unsorted_payload_in1_re,
  input      [23:0]   unsorted_payload_in1_im,
  output              sorted_valid,
  output              sorted_payload_last,
  output reg [23:0]   sorted_payload_fragment_re,
  output reg [23:0]   sorted_payload_fragment_im,
  input               clk,
  input               reset
);
  reg        [47:0]   _zz_ram_low_port1;
  reg        [47:0]   _zz_ram_high_port1;
  wire       [47:0]   _zz_ram_low_port;
  wire       [47:0]   _zz_ram_high_port;
  wire       [4:0]    _zz__zz_sorted_payload_fragment_re_1;
  wire                _zz__zz_sorted_payload_fragment_re_1_1;
  wire       [23:0]   _zz_sorted_payload_fragment_re_4;
  wire       [23:0]   _zz_sorted_payload_fragment_im;
  wire       [4:0]    _zz__zz_sorted_payload_fragment_re_3;
  wire                _zz__zz_sorted_payload_fragment_re_3_1;
  wire       [23:0]   _zz_sorted_payload_fragment_re_5;
  wire       [23:0]   _zz_sorted_payload_fragment_im_1;
  wire       [4:0]    _zz_ram_low_port_1;
  wire                _zz_ram_low_port_2;
  wire       [4:0]    _zz_ram_high_port_1;
  wire                _zz_ram_high_port_2;
  reg                 _zz_1;
  reg                 _zz_2;
  reg        [4:0]    in_cnt;
  reg        [5:0]    out_cnt;
  wire       [4:0]    in_cnt_index;
  wire                sorted_valid_1;
  reg                 _zz_3;
  wire       [5:0]    _zz_sorted_payload_fragment_re;
  wire       [47:0]   _zz_sorted_payload_fragment_re_1;
  wire       [5:0]    _zz_sorted_payload_fragment_re_2;
  wire       [47:0]   _zz_sorted_payload_fragment_re_3;
  reg                 sorted_valid_1_regNext;
  (* ram_style = "block" *) reg [47:0] ram_low [0:31];
  (* ram_style = "block" *) reg [47:0] ram_high [0:31];

  assign _zz_ram_low_port_1 = _zz_sorted_payload_fragment_re[4:0];
  assign _zz_sorted_payload_fragment_re_4 = _zz_sorted_payload_fragment_re_1[23 : 0];
  assign _zz_sorted_payload_fragment_im = _zz_sorted_payload_fragment_re_1[47 : 24];
  assign _zz_ram_high_port_1 = _zz_sorted_payload_fragment_re_2[4:0];
  assign _zz_sorted_payload_fragment_re_5 = _zz_sorted_payload_fragment_re_3[23 : 0];
  assign _zz_sorted_payload_fragment_im_1 = _zz_sorted_payload_fragment_re_3[47 : 24];
  assign _zz_ram_low_port = {unsorted_payload_in0_im,unsorted_payload_in0_re};
  assign _zz_ram_low_port_2 = 1'b1;
  assign _zz_ram_high_port = {unsorted_payload_in1_im,unsorted_payload_in1_re};
  assign _zz_ram_high_port_2 = 1'b1;
  always @(posedge clk) begin
    if(_zz_2) begin
      ram_low[in_cnt_index] <= _zz_ram_low_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_ram_low_port_2) begin
      _zz_ram_low_port1 <= ram_low[_zz_ram_low_port_1];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      ram_high[in_cnt_index] <= _zz_ram_high_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_ram_high_port_2) begin
      _zz_ram_high_port1 <= ram_high[_zz_ram_high_port_1];
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(unsorted_valid) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    _zz_2 = 1'b0;
    if(unsorted_valid) begin
      _zz_2 = 1'b1;
    end
  end

  assign in_cnt_index = {in_cnt[0],{in_cnt[1],{in_cnt[2],{in_cnt[3],in_cnt[4]}}}};
  assign sorted_valid_1 = ((in_cnt == 5'h1f) || (out_cnt != 6'h0));
  assign _zz_sorted_payload_fragment_re = out_cnt;
  assign _zz_sorted_payload_fragment_re_1 = _zz_ram_low_port1;
  always @(*) begin
    if(_zz_3) begin
      sorted_payload_fragment_re = _zz_sorted_payload_fragment_re_4[23 : 0];
    end else begin
      sorted_payload_fragment_re = _zz_sorted_payload_fragment_re_5[23 : 0];
    end
  end

  always @(*) begin
    if(_zz_3) begin
      sorted_payload_fragment_im = _zz_sorted_payload_fragment_im[23 : 0];
    end else begin
      sorted_payload_fragment_im = _zz_sorted_payload_fragment_im_1[23 : 0];
    end
  end

  assign _zz_sorted_payload_fragment_re_2 = out_cnt;
  assign _zz_sorted_payload_fragment_re_3 = _zz_ram_high_port1;
  assign sorted_payload_last = ((out_cnt == 6'h0) && sorted_valid);
  assign sorted_valid = sorted_valid_1_regNext;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      in_cnt <= 5'h0;
      out_cnt <= 6'h0;
    end else begin
      if(unsorted_valid) begin
        in_cnt <= (in_cnt + 5'h01);
      end
      if(sorted_valid_1) begin
        out_cnt <= (out_cnt + 6'h01);
      end
    end
  end

  always @(posedge clk) begin
    _zz_3 <= (out_cnt < 6'h20);
    sorted_valid_1_regNext <= sorted_valid_1;
  end


endmodule

//R2Switch replaced by R2Switch

module ShiftRegister_9 (
  input      [23:0]   input_re,
  input      [23:0]   input_im,
  output     [23:0]   output_re,
  output     [23:0]   output_im,
  input               enable,
  input               clk,
  input               reset
);
  reg        [23:0]   shift_reg_0_re;
  reg        [23:0]   shift_reg_0_im;

  assign output_re = shift_reg_0_re;
  assign output_im = shift_reg_0_im;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_re <= input_re;
      shift_reg_0_im <= input_im;
    end
  end


endmodule

//R2Butterfly replaced by R2Butterfly

//ShiftRegister_7 replaced by ShiftRegister_7

//R2Switch replaced by R2Switch

module ShiftRegister_7 (
  input      [23:0]   input_re,
  input      [23:0]   input_im,
  output     [23:0]   output_re,
  output     [23:0]   output_im,
  input               enable,
  input               clk,
  input               reset
);
  reg        [23:0]   shift_reg_0_re;
  reg        [23:0]   shift_reg_0_im;
  reg        [23:0]   shift_reg_1_re;
  reg        [23:0]   shift_reg_1_im;

  assign output_re = shift_reg_1_re;
  assign output_im = shift_reg_1_im;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_re <= input_re;
      shift_reg_0_im <= input_im;
      shift_reg_1_re <= shift_reg_0_re;
      shift_reg_1_im <= shift_reg_0_im;
    end
  end


endmodule

//R2Butterfly replaced by R2Butterfly

//ShiftRegister_5 replaced by ShiftRegister_5

//R2Switch replaced by R2Switch

module ShiftRegister_5 (
  input      [23:0]   input_re,
  input      [23:0]   input_im,
  output     [23:0]   output_re,
  output     [23:0]   output_im,
  input               enable,
  input               clk,
  input               reset
);
  reg        [23:0]   shift_reg_0_re;
  reg        [23:0]   shift_reg_0_im;
  reg        [23:0]   shift_reg_1_re;
  reg        [23:0]   shift_reg_1_im;
  reg        [23:0]   shift_reg_2_re;
  reg        [23:0]   shift_reg_2_im;
  reg        [23:0]   shift_reg_3_re;
  reg        [23:0]   shift_reg_3_im;

  assign output_re = shift_reg_3_re;
  assign output_im = shift_reg_3_im;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_re <= input_re;
      shift_reg_0_im <= input_im;
      shift_reg_1_re <= shift_reg_0_re;
      shift_reg_1_im <= shift_reg_0_im;
      shift_reg_2_re <= shift_reg_1_re;
      shift_reg_2_im <= shift_reg_1_im;
      shift_reg_3_re <= shift_reg_2_re;
      shift_reg_3_im <= shift_reg_2_im;
    end
  end


endmodule

//R2Butterfly replaced by R2Butterfly

//ShiftRegister_3 replaced by ShiftRegister_3

//R2Switch replaced by R2Switch

module ShiftRegister_3 (
  input      [23:0]   input_re,
  input      [23:0]   input_im,
  output     [23:0]   output_re,
  output     [23:0]   output_im,
  input               enable,
  input               clk,
  input               reset
);
  reg        [23:0]   shift_reg_0_re;
  reg        [23:0]   shift_reg_0_im;
  reg        [23:0]   shift_reg_1_re;
  reg        [23:0]   shift_reg_1_im;
  reg        [23:0]   shift_reg_2_re;
  reg        [23:0]   shift_reg_2_im;
  reg        [23:0]   shift_reg_3_re;
  reg        [23:0]   shift_reg_3_im;
  reg        [23:0]   shift_reg_4_re;
  reg        [23:0]   shift_reg_4_im;
  reg        [23:0]   shift_reg_5_re;
  reg        [23:0]   shift_reg_5_im;
  reg        [23:0]   shift_reg_6_re;
  reg        [23:0]   shift_reg_6_im;
  reg        [23:0]   shift_reg_7_re;
  reg        [23:0]   shift_reg_7_im;

  assign output_re = shift_reg_7_re;
  assign output_im = shift_reg_7_im;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_re <= input_re;
      shift_reg_0_im <= input_im;
      shift_reg_1_re <= shift_reg_0_re;
      shift_reg_1_im <= shift_reg_0_im;
      shift_reg_2_re <= shift_reg_1_re;
      shift_reg_2_im <= shift_reg_1_im;
      shift_reg_3_re <= shift_reg_2_re;
      shift_reg_3_im <= shift_reg_2_im;
      shift_reg_4_re <= shift_reg_3_re;
      shift_reg_4_im <= shift_reg_3_im;
      shift_reg_5_re <= shift_reg_4_re;
      shift_reg_5_im <= shift_reg_4_im;
      shift_reg_6_re <= shift_reg_5_re;
      shift_reg_6_im <= shift_reg_5_im;
      shift_reg_7_re <= shift_reg_6_re;
      shift_reg_7_im <= shift_reg_6_im;
    end
  end


endmodule

//R2Butterfly replaced by R2Butterfly

//ShiftRegister_1 replaced by ShiftRegister_1

module R2Switch (
  input      [23:0]   in1_re,
  input      [23:0]   in1_im,
  input      [23:0]   in2_re,
  input      [23:0]   in2_im,
  input               sel,
  output     [23:0]   out1_re,
  output     [23:0]   out1_im,
  output     [23:0]   out2_re,
  output     [23:0]   out2_im
);

  assign out1_re = (sel ? in2_re : in1_re);
  assign out1_im = (sel ? in2_im : in1_im);
  assign out2_re = (sel ? in1_re : in2_re);
  assign out2_im = (sel ? in1_im : in2_im);

endmodule

module ShiftRegister_1 (
  input      [23:0]   input_re,
  input      [23:0]   input_im,
  output     [23:0]   output_re,
  output     [23:0]   output_im,
  input               enable,
  input               clk,
  input               reset
);
  reg        [23:0]   shift_reg_0_re;
  reg        [23:0]   shift_reg_0_im;
  reg        [23:0]   shift_reg_1_re;
  reg        [23:0]   shift_reg_1_im;
  reg        [23:0]   shift_reg_2_re;
  reg        [23:0]   shift_reg_2_im;
  reg        [23:0]   shift_reg_3_re;
  reg        [23:0]   shift_reg_3_im;
  reg        [23:0]   shift_reg_4_re;
  reg        [23:0]   shift_reg_4_im;
  reg        [23:0]   shift_reg_5_re;
  reg        [23:0]   shift_reg_5_im;
  reg        [23:0]   shift_reg_6_re;
  reg        [23:0]   shift_reg_6_im;
  reg        [23:0]   shift_reg_7_re;
  reg        [23:0]   shift_reg_7_im;
  reg        [23:0]   shift_reg_8_re;
  reg        [23:0]   shift_reg_8_im;
  reg        [23:0]   shift_reg_9_re;
  reg        [23:0]   shift_reg_9_im;
  reg        [23:0]   shift_reg_10_re;
  reg        [23:0]   shift_reg_10_im;
  reg        [23:0]   shift_reg_11_re;
  reg        [23:0]   shift_reg_11_im;
  reg        [23:0]   shift_reg_12_re;
  reg        [23:0]   shift_reg_12_im;
  reg        [23:0]   shift_reg_13_re;
  reg        [23:0]   shift_reg_13_im;
  reg        [23:0]   shift_reg_14_re;
  reg        [23:0]   shift_reg_14_im;
  reg        [23:0]   shift_reg_15_re;
  reg        [23:0]   shift_reg_15_im;

  assign output_re = shift_reg_15_re;
  assign output_im = shift_reg_15_im;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_re <= input_re;
      shift_reg_0_im <= input_im;
      shift_reg_1_re <= shift_reg_0_re;
      shift_reg_1_im <= shift_reg_0_im;
      shift_reg_2_re <= shift_reg_1_re;
      shift_reg_2_im <= shift_reg_1_im;
      shift_reg_3_re <= shift_reg_2_re;
      shift_reg_3_im <= shift_reg_2_im;
      shift_reg_4_re <= shift_reg_3_re;
      shift_reg_4_im <= shift_reg_3_im;
      shift_reg_5_re <= shift_reg_4_re;
      shift_reg_5_im <= shift_reg_4_im;
      shift_reg_6_re <= shift_reg_5_re;
      shift_reg_6_im <= shift_reg_5_im;
      shift_reg_7_re <= shift_reg_6_re;
      shift_reg_7_im <= shift_reg_6_im;
      shift_reg_8_re <= shift_reg_7_re;
      shift_reg_8_im <= shift_reg_7_im;
      shift_reg_9_re <= shift_reg_8_re;
      shift_reg_9_im <= shift_reg_8_im;
      shift_reg_10_re <= shift_reg_9_re;
      shift_reg_10_im <= shift_reg_9_im;
      shift_reg_11_re <= shift_reg_10_re;
      shift_reg_11_im <= shift_reg_10_im;
      shift_reg_12_re <= shift_reg_11_re;
      shift_reg_12_im <= shift_reg_11_im;
      shift_reg_13_re <= shift_reg_12_re;
      shift_reg_13_im <= shift_reg_12_im;
      shift_reg_14_re <= shift_reg_13_re;
      shift_reg_14_im <= shift_reg_13_im;
      shift_reg_15_re <= shift_reg_14_re;
      shift_reg_15_im <= shift_reg_14_im;
    end
  end


endmodule

module R2Butterfly (
  input      [23:0]   in1_re,
  input      [23:0]   in1_im,
  input      [23:0]   in2_re,
  input      [23:0]   in2_im,
  input      [23:0]   wn_re,
  input      [23:0]   wn_im,
  output     [23:0]   out1_re,
  output     [23:0]   out1_im,
  output     [23:0]   out2_re,
  output     [23:0]   out2_im
);
  wire       [36:0]   _zz_mul_result_re;
  wire       [47:0]   _zz_mul_result_re_1;
  wire       [47:0]   _zz_mul_result_re_2;
  wire       [47:0]   _zz_mul_result_re_3;
  wire       [36:0]   _zz_mul_result_im;
  wire       [47:0]   _zz_mul_result_im_1;
  wire       [47:0]   _zz_mul_result_im_2;
  wire       [47:0]   _zz_mul_result_im_3;
  wire       [23:0]   add_result_re;
  wire       [23:0]   add_result_im;
  wire       [23:0]   sub_result_re;
  wire       [23:0]   sub_result_im;
  wire       [23:0]   mul_result_re;
  wire       [23:0]   mul_result_im;

  assign _zz_mul_result_re = (_zz_mul_result_re_1 >>> 11);
  assign _zz_mul_result_re_1 = ($signed(_zz_mul_result_re_2) - $signed(_zz_mul_result_re_3));
  assign _zz_mul_result_re_2 = ($signed(sub_result_re) * $signed(wn_re));
  assign _zz_mul_result_re_3 = ($signed(sub_result_im) * $signed(wn_im));
  assign _zz_mul_result_im = (_zz_mul_result_im_1 >>> 11);
  assign _zz_mul_result_im_1 = ($signed(_zz_mul_result_im_2) + $signed(_zz_mul_result_im_3));
  assign _zz_mul_result_im_2 = ($signed(sub_result_re) * $signed(wn_im));
  assign _zz_mul_result_im_3 = ($signed(sub_result_im) * $signed(wn_re));
  assign add_result_re = ($signed(in1_re) + $signed(in2_re));
  assign add_result_im = ($signed(in1_im) + $signed(in2_im));
  assign sub_result_re = ($signed(in1_re) - $signed(in2_re));
  assign sub_result_im = ($signed(in1_im) - $signed(in2_im));
  assign mul_result_re = _zz_mul_result_re[23:0];
  assign mul_result_im = _zz_mul_result_im[23:0];
  assign out1_re = add_result_re;
  assign out1_im = add_result_im;
  assign out2_re = mul_result_re;
  assign out2_im = mul_result_im;

endmodule

module ShiftRegister (
  input      [23:0]   input_re,
  input      [23:0]   input_im,
  output     [23:0]   output_re,
  output     [23:0]   output_im,
  input               enable,
  input               clk,
  input               reset
);
  reg        [23:0]   shift_reg_0_re;
  reg        [23:0]   shift_reg_0_im;
  reg        [23:0]   shift_reg_1_re;
  reg        [23:0]   shift_reg_1_im;
  reg        [23:0]   shift_reg_2_re;
  reg        [23:0]   shift_reg_2_im;
  reg        [23:0]   shift_reg_3_re;
  reg        [23:0]   shift_reg_3_im;
  reg        [23:0]   shift_reg_4_re;
  reg        [23:0]   shift_reg_4_im;
  reg        [23:0]   shift_reg_5_re;
  reg        [23:0]   shift_reg_5_im;
  reg        [23:0]   shift_reg_6_re;
  reg        [23:0]   shift_reg_6_im;
  reg        [23:0]   shift_reg_7_re;
  reg        [23:0]   shift_reg_7_im;
  reg        [23:0]   shift_reg_8_re;
  reg        [23:0]   shift_reg_8_im;
  reg        [23:0]   shift_reg_9_re;
  reg        [23:0]   shift_reg_9_im;
  reg        [23:0]   shift_reg_10_re;
  reg        [23:0]   shift_reg_10_im;
  reg        [23:0]   shift_reg_11_re;
  reg        [23:0]   shift_reg_11_im;
  reg        [23:0]   shift_reg_12_re;
  reg        [23:0]   shift_reg_12_im;
  reg        [23:0]   shift_reg_13_re;
  reg        [23:0]   shift_reg_13_im;
  reg        [23:0]   shift_reg_14_re;
  reg        [23:0]   shift_reg_14_im;
  reg        [23:0]   shift_reg_15_re;
  reg        [23:0]   shift_reg_15_im;
  reg        [23:0]   shift_reg_16_re;
  reg        [23:0]   shift_reg_16_im;
  reg        [23:0]   shift_reg_17_re;
  reg        [23:0]   shift_reg_17_im;
  reg        [23:0]   shift_reg_18_re;
  reg        [23:0]   shift_reg_18_im;
  reg        [23:0]   shift_reg_19_re;
  reg        [23:0]   shift_reg_19_im;
  reg        [23:0]   shift_reg_20_re;
  reg        [23:0]   shift_reg_20_im;
  reg        [23:0]   shift_reg_21_re;
  reg        [23:0]   shift_reg_21_im;
  reg        [23:0]   shift_reg_22_re;
  reg        [23:0]   shift_reg_22_im;
  reg        [23:0]   shift_reg_23_re;
  reg        [23:0]   shift_reg_23_im;
  reg        [23:0]   shift_reg_24_re;
  reg        [23:0]   shift_reg_24_im;
  reg        [23:0]   shift_reg_25_re;
  reg        [23:0]   shift_reg_25_im;
  reg        [23:0]   shift_reg_26_re;
  reg        [23:0]   shift_reg_26_im;
  reg        [23:0]   shift_reg_27_re;
  reg        [23:0]   shift_reg_27_im;
  reg        [23:0]   shift_reg_28_re;
  reg        [23:0]   shift_reg_28_im;
  reg        [23:0]   shift_reg_29_re;
  reg        [23:0]   shift_reg_29_im;
  reg        [23:0]   shift_reg_30_re;
  reg        [23:0]   shift_reg_30_im;
  reg        [23:0]   shift_reg_31_re;
  reg        [23:0]   shift_reg_31_im;

  assign output_re = shift_reg_31_re;
  assign output_im = shift_reg_31_im;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_re <= input_re;
      shift_reg_0_im <= input_im;
      shift_reg_1_re <= shift_reg_0_re;
      shift_reg_1_im <= shift_reg_0_im;
      shift_reg_2_re <= shift_reg_1_re;
      shift_reg_2_im <= shift_reg_1_im;
      shift_reg_3_re <= shift_reg_2_re;
      shift_reg_3_im <= shift_reg_2_im;
      shift_reg_4_re <= shift_reg_3_re;
      shift_reg_4_im <= shift_reg_3_im;
      shift_reg_5_re <= shift_reg_4_re;
      shift_reg_5_im <= shift_reg_4_im;
      shift_reg_6_re <= shift_reg_5_re;
      shift_reg_6_im <= shift_reg_5_im;
      shift_reg_7_re <= shift_reg_6_re;
      shift_reg_7_im <= shift_reg_6_im;
      shift_reg_8_re <= shift_reg_7_re;
      shift_reg_8_im <= shift_reg_7_im;
      shift_reg_9_re <= shift_reg_8_re;
      shift_reg_9_im <= shift_reg_8_im;
      shift_reg_10_re <= shift_reg_9_re;
      shift_reg_10_im <= shift_reg_9_im;
      shift_reg_11_re <= shift_reg_10_re;
      shift_reg_11_im <= shift_reg_10_im;
      shift_reg_12_re <= shift_reg_11_re;
      shift_reg_12_im <= shift_reg_11_im;
      shift_reg_13_re <= shift_reg_12_re;
      shift_reg_13_im <= shift_reg_12_im;
      shift_reg_14_re <= shift_reg_13_re;
      shift_reg_14_im <= shift_reg_13_im;
      shift_reg_15_re <= shift_reg_14_re;
      shift_reg_15_im <= shift_reg_14_im;
      shift_reg_16_re <= shift_reg_15_re;
      shift_reg_16_im <= shift_reg_15_im;
      shift_reg_17_re <= shift_reg_16_re;
      shift_reg_17_im <= shift_reg_16_im;
      shift_reg_18_re <= shift_reg_17_re;
      shift_reg_18_im <= shift_reg_17_im;
      shift_reg_19_re <= shift_reg_18_re;
      shift_reg_19_im <= shift_reg_18_im;
      shift_reg_20_re <= shift_reg_19_re;
      shift_reg_20_im <= shift_reg_19_im;
      shift_reg_21_re <= shift_reg_20_re;
      shift_reg_21_im <= shift_reg_20_im;
      shift_reg_22_re <= shift_reg_21_re;
      shift_reg_22_im <= shift_reg_21_im;
      shift_reg_23_re <= shift_reg_22_re;
      shift_reg_23_im <= shift_reg_22_im;
      shift_reg_24_re <= shift_reg_23_re;
      shift_reg_24_im <= shift_reg_23_im;
      shift_reg_25_re <= shift_reg_24_re;
      shift_reg_25_im <= shift_reg_24_im;
      shift_reg_26_re <= shift_reg_25_re;
      shift_reg_26_im <= shift_reg_25_im;
      shift_reg_27_re <= shift_reg_26_re;
      shift_reg_27_im <= shift_reg_26_im;
      shift_reg_28_re <= shift_reg_27_re;
      shift_reg_28_im <= shift_reg_27_im;
      shift_reg_29_re <= shift_reg_28_re;
      shift_reg_29_im <= shift_reg_28_im;
      shift_reg_30_re <= shift_reg_29_re;
      shift_reg_30_im <= shift_reg_29_im;
      shift_reg_31_re <= shift_reg_30_re;
      shift_reg_31_im <= shift_reg_30_im;
    end
  end


endmodule
