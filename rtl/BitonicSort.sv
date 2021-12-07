// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : BitonicSort
// Git hash  : 337bfd8570c228307d1eda92fceba305cde6c602



module BitonicSort (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [15:0]   raw_data_payload_data,
  input      [3:0]    raw_data_payload_idx,
  output              sorted_data_valid,
  output     [15:0]   sorted_data_payload_low_data,
  output     [3:0]    sorted_data_payload_low_idx,
  output     [15:0]   sorted_data_payload_high_data,
  output     [3:0]    sorted_data_payload_high_idx,
  input               clk,
  input               resetn
);
  wire                cmpSwitch_3_sel;
  wire                cmpSwitch_4_sel;
  wire                cmpSwitch_5_sel;
  wire       [15:0]   shiftRegister_7_output_data;
  wire       [3:0]    shiftRegister_7_output_idx;
  wire       [15:0]   cmpUnit_4_out1_data;
  wire       [3:0]    cmpUnit_4_out1_idx;
  wire       [15:0]   cmpUnit_4_out2_data;
  wire       [3:0]    cmpUnit_4_out2_idx;
  wire       [15:0]   shiftRegister_8_output_data;
  wire       [3:0]    shiftRegister_8_output_idx;
  wire       [15:0]   cmpSwitch_3_out1_data;
  wire       [3:0]    cmpSwitch_3_out1_idx;
  wire       [15:0]   cmpSwitch_3_out2_data;
  wire       [3:0]    cmpSwitch_3_out2_idx;
  wire       [15:0]   shiftRegister_9_output_data;
  wire       [3:0]    shiftRegister_9_output_idx;
  wire       [15:0]   cmpUnit_5_out1_data;
  wire       [3:0]    cmpUnit_5_out1_idx;
  wire       [15:0]   cmpUnit_5_out2_data;
  wire       [3:0]    cmpUnit_5_out2_idx;
  wire       [15:0]   shiftRegister_10_output_data;
  wire       [3:0]    shiftRegister_10_output_idx;
  wire       [15:0]   cmpSwitch_4_out1_data;
  wire       [3:0]    cmpSwitch_4_out1_idx;
  wire       [15:0]   cmpSwitch_4_out2_data;
  wire       [3:0]    cmpSwitch_4_out2_idx;
  wire       [15:0]   shiftRegister_11_output_data;
  wire       [3:0]    shiftRegister_11_output_idx;
  wire       [15:0]   cmpUnit_6_out1_data;
  wire       [3:0]    cmpUnit_6_out1_idx;
  wire       [15:0]   cmpUnit_6_out2_data;
  wire       [3:0]    cmpUnit_6_out2_idx;
  wire       [15:0]   shiftRegister_12_output_data;
  wire       [3:0]    shiftRegister_12_output_idx;
  wire       [15:0]   cmpSwitch_5_out1_data;
  wire       [3:0]    cmpSwitch_5_out1_idx;
  wire       [15:0]   cmpSwitch_5_out2_data;
  wire       [3:0]    cmpSwitch_5_out2_idx;
  wire       [15:0]   shiftRegister_13_output_data;
  wire       [3:0]    shiftRegister_13_output_idx;
  wire       [15:0]   cmpUnit_7_out1_data;
  wire       [3:0]    cmpUnit_7_out1_idx;
  wire       [15:0]   cmpUnit_7_out2_data;
  wire       [3:0]    cmpUnit_7_out2_idx;
  wire       [4:0]    _zz_cnt;
  reg        [4:0]    cnt;
  wire                raw_data_fire;
  wire                when_BitonicSort_l26;
  wire                raw_data_fire_1;
  wire                raw_data_free_run;
  wire       [15:0]   out0_buf_0_data;
  wire       [3:0]    out0_buf_0_idx;
  wire       [15:0]   out0_buf_1_data;
  wire       [3:0]    out0_buf_1_idx;
  wire       [15:0]   out0_buf_2_data;
  wire       [3:0]    out0_buf_2_idx;
  wire       [15:0]   out0_buf_3_data;
  wire       [3:0]    out0_buf_3_idx;
  wire       [15:0]   out1_buf_0_data;
  wire       [3:0]    out1_buf_0_idx;
  wire       [15:0]   out1_buf_1_data;
  wire       [3:0]    out1_buf_1_idx;
  wire       [15:0]   out1_buf_2_data;
  wire       [3:0]    out1_buf_2_idx;
  wire       [15:0]   out1_buf_3_data;
  wire       [3:0]    out1_buf_3_idx;
  reg        [15:0]   cmpUnit_7_out1_regNext_data;
  reg        [3:0]    cmpUnit_7_out1_regNext_idx;
  reg        [15:0]   cmpUnit_7_out2_regNext_data;
  reg        [3:0]    cmpUnit_7_out2_regNext_idx;

  assign _zz_cnt = (cnt + 5'h01);
  ShiftRegister shiftRegister_7 (
    .input_data     (out0_buf_0_data              ), //i
    .input_idx      (out0_buf_0_idx               ), //i
    .output_data    (shiftRegister_7_output_data  ), //o
    .output_idx     (shiftRegister_7_output_idx   ), //o
    .enable         (raw_data_free_run            ), //i
    .clk            (clk                          ), //i
    .resetn         (resetn                       )  //i
  );
  CmpUnit cmpUnit_4 (
    .in1_data     (shiftRegister_7_output_data  ), //i
    .in1_idx      (shiftRegister_7_output_idx   ), //i
    .in2_data     (out1_buf_0_data              ), //i
    .in2_idx      (out1_buf_0_idx               ), //i
    .less         (1'b1                         ), //i
    .out1_data    (cmpUnit_4_out1_data          ), //o
    .out1_idx     (cmpUnit_4_out1_idx           ), //o
    .out2_data    (cmpUnit_4_out2_data          ), //o
    .out2_idx     (cmpUnit_4_out2_idx           )  //o
  );
  ShiftRegister_1 shiftRegister_8 (
    .input_data     (cmpUnit_4_out2_data          ), //i
    .input_idx      (cmpUnit_4_out2_idx           ), //i
    .output_data    (shiftRegister_8_output_data  ), //o
    .output_idx     (shiftRegister_8_output_idx   ), //o
    .enable         (raw_data_free_run            ), //i
    .clk            (clk                          ), //i
    .resetn         (resetn                       )  //i
  );
  CmpSwitch cmpSwitch_3 (
    .in1_data     (cmpUnit_4_out1_data          ), //i
    .in1_idx      (cmpUnit_4_out1_idx           ), //i
    .in2_data     (shiftRegister_8_output_data  ), //i
    .in2_idx      (shiftRegister_8_output_idx   ), //i
    .sel          (cmpSwitch_3_sel              ), //i
    .out1_data    (cmpSwitch_3_out1_data        ), //o
    .out1_idx     (cmpSwitch_3_out1_idx         ), //o
    .out2_data    (cmpSwitch_3_out2_data        ), //o
    .out2_idx     (cmpSwitch_3_out2_idx         )  //o
  );
  ShiftRegister_1 shiftRegister_9 (
    .input_data     (out0_buf_1_data              ), //i
    .input_idx      (out0_buf_1_idx               ), //i
    .output_data    (shiftRegister_9_output_data  ), //o
    .output_idx     (shiftRegister_9_output_idx   ), //o
    .enable         (raw_data_free_run            ), //i
    .clk            (clk                          ), //i
    .resetn         (resetn                       )  //i
  );
  CmpUnit cmpUnit_5 (
    .in1_data     (shiftRegister_9_output_data  ), //i
    .in1_idx      (shiftRegister_9_output_idx   ), //i
    .in2_data     (out1_buf_1_data              ), //i
    .in2_idx      (out1_buf_1_idx               ), //i
    .less         (1'b1                         ), //i
    .out1_data    (cmpUnit_5_out1_data          ), //o
    .out1_idx     (cmpUnit_5_out1_idx           ), //o
    .out2_data    (cmpUnit_5_out2_data          ), //o
    .out2_idx     (cmpUnit_5_out2_idx           )  //o
  );
  ShiftRegister_3 shiftRegister_10 (
    .input_data     (cmpUnit_5_out2_data           ), //i
    .input_idx      (cmpUnit_5_out2_idx            ), //i
    .output_data    (shiftRegister_10_output_data  ), //o
    .output_idx     (shiftRegister_10_output_idx   ), //o
    .enable         (raw_data_free_run             ), //i
    .clk            (clk                           ), //i
    .resetn         (resetn                        )  //i
  );
  CmpSwitch cmpSwitch_4 (
    .in1_data     (cmpUnit_5_out1_data           ), //i
    .in1_idx      (cmpUnit_5_out1_idx            ), //i
    .in2_data     (shiftRegister_10_output_data  ), //i
    .in2_idx      (shiftRegister_10_output_idx   ), //i
    .sel          (cmpSwitch_4_sel               ), //i
    .out1_data    (cmpSwitch_4_out1_data         ), //o
    .out1_idx     (cmpSwitch_4_out1_idx          ), //o
    .out2_data    (cmpSwitch_4_out2_data         ), //o
    .out2_idx     (cmpSwitch_4_out2_idx          )  //o
  );
  ShiftRegister_3 shiftRegister_11 (
    .input_data     (out0_buf_2_data               ), //i
    .input_idx      (out0_buf_2_idx                ), //i
    .output_data    (shiftRegister_11_output_data  ), //o
    .output_idx     (shiftRegister_11_output_idx   ), //o
    .enable         (raw_data_free_run             ), //i
    .clk            (clk                           ), //i
    .resetn         (resetn                        )  //i
  );
  CmpUnit cmpUnit_6 (
    .in1_data     (shiftRegister_11_output_data  ), //i
    .in1_idx      (shiftRegister_11_output_idx   ), //i
    .in2_data     (out1_buf_2_data               ), //i
    .in2_idx      (out1_buf_2_idx                ), //i
    .less         (1'b1                          ), //i
    .out1_data    (cmpUnit_6_out1_data           ), //o
    .out1_idx     (cmpUnit_6_out1_idx            ), //o
    .out2_data    (cmpUnit_6_out2_data           ), //o
    .out2_idx     (cmpUnit_6_out2_idx            )  //o
  );
  ShiftRegister_5 shiftRegister_12 (
    .input_data     (cmpUnit_6_out2_data           ), //i
    .input_idx      (cmpUnit_6_out2_idx            ), //i
    .output_data    (shiftRegister_12_output_data  ), //o
    .output_idx     (shiftRegister_12_output_idx   ), //o
    .enable         (raw_data_free_run             ), //i
    .clk            (clk                           ), //i
    .resetn         (resetn                        )  //i
  );
  CmpSwitch cmpSwitch_5 (
    .in1_data     (cmpUnit_6_out1_data           ), //i
    .in1_idx      (cmpUnit_6_out1_idx            ), //i
    .in2_data     (shiftRegister_12_output_data  ), //i
    .in2_idx      (shiftRegister_12_output_idx   ), //i
    .sel          (cmpSwitch_5_sel               ), //i
    .out1_data    (cmpSwitch_5_out1_data         ), //o
    .out1_idx     (cmpSwitch_5_out1_idx          ), //o
    .out2_data    (cmpSwitch_5_out2_data         ), //o
    .out2_idx     (cmpSwitch_5_out2_idx          )  //o
  );
  ShiftRegister_5 shiftRegister_13 (
    .input_data     (out0_buf_3_data               ), //i
    .input_idx      (out0_buf_3_idx                ), //i
    .output_data    (shiftRegister_13_output_data  ), //o
    .output_idx     (shiftRegister_13_output_idx   ), //o
    .enable         (1'b1                          ), //i
    .clk            (clk                           ), //i
    .resetn         (resetn                        )  //i
  );
  CmpUnit cmpUnit_7 (
    .in1_data     (shiftRegister_13_output_data  ), //i
    .in1_idx      (shiftRegister_13_output_idx   ), //i
    .in2_data     (out1_buf_3_data               ), //i
    .in2_idx      (out1_buf_3_idx                ), //i
    .less         (raw_data_free_run             ), //i
    .out1_data    (cmpUnit_7_out1_data           ), //o
    .out1_idx     (cmpUnit_7_out1_idx            ), //o
    .out2_data    (cmpUnit_7_out2_data           ), //o
    .out2_idx     (cmpUnit_7_out2_idx            )  //o
  );
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_BitonicSort_l26 = (raw_data_fire || (5'h10 <= cnt));
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign raw_data_free_run = (raw_data_fire_1 || (5'h10 <= cnt));
  assign out0_buf_0_data = raw_data_payload_data;
  assign out0_buf_0_idx = raw_data_payload_idx;
  assign out1_buf_0_data = raw_data_payload_data;
  assign out1_buf_0_idx = raw_data_payload_idx;
  assign cmpSwitch_3_sel = cnt[2];
  assign out0_buf_1_data = cmpSwitch_3_out1_data;
  assign out0_buf_1_idx = cmpSwitch_3_out1_idx;
  assign out1_buf_1_data = cmpSwitch_3_out2_data;
  assign out1_buf_1_idx = cmpSwitch_3_out2_idx;
  assign cmpSwitch_4_sel = cnt[1];
  assign out0_buf_2_data = cmpSwitch_4_out1_data;
  assign out0_buf_2_idx = cmpSwitch_4_out1_idx;
  assign out1_buf_2_data = cmpSwitch_4_out2_data;
  assign out1_buf_2_idx = cmpSwitch_4_out2_idx;
  assign cmpSwitch_5_sel = cnt[0];
  assign out0_buf_3_data = cmpSwitch_5_out1_data;
  assign out0_buf_3_idx = cmpSwitch_5_out1_idx;
  assign out1_buf_3_data = cmpSwitch_5_out2_data;
  assign out1_buf_3_idx = cmpSwitch_5_out2_idx;
  assign sorted_data_payload_low_data = cmpUnit_7_out1_regNext_data;
  assign sorted_data_payload_low_idx = cmpUnit_7_out1_regNext_idx;
  assign sorted_data_payload_high_data = cmpUnit_7_out2_regNext_data;
  assign sorted_data_payload_high_idx = cmpUnit_7_out2_regNext_idx;
  assign sorted_data_valid = (5'h0f < cnt);
  assign raw_data_ready = (cnt < 5'h10);
  always @(posedge clk) begin
    if(!resetn) begin
      cnt <= 5'h0;
    end else begin
      if(when_BitonicSort_l26) begin
        cnt <= ((cnt == 5'h17) ? 5'h0 : _zz_cnt);
      end
    end
  end

  always @(posedge clk) begin
    cmpUnit_7_out1_regNext_data <= cmpUnit_7_out1_data;
    cmpUnit_7_out1_regNext_idx <= cmpUnit_7_out1_idx;
    cmpUnit_7_out2_regNext_data <= cmpUnit_7_out2_data;
    cmpUnit_7_out2_regNext_idx <= cmpUnit_7_out2_idx;
  end


endmodule

//CmpUnit replaced by CmpUnit

//ShiftRegister_5 replaced by ShiftRegister_5

//CmpSwitch replaced by CmpSwitch

module ShiftRegister_5 (
  input      [15:0]   input_data,
  input      [3:0]    input_idx,
  output     [15:0]   output_data,
  output     [3:0]    output_idx,
  input               enable,
  input               clk,
  input               resetn
);
  reg        [15:0]   shift_reg_0_data;
  reg        [3:0]    shift_reg_0_idx;

  assign output_data = shift_reg_0_data;
  assign output_idx = shift_reg_0_idx;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_data <= input_data;
      shift_reg_0_idx <= input_idx;
    end
  end


endmodule

//CmpUnit replaced by CmpUnit

//ShiftRegister_3 replaced by ShiftRegister_3

//CmpSwitch replaced by CmpSwitch

module ShiftRegister_3 (
  input      [15:0]   input_data,
  input      [3:0]    input_idx,
  output     [15:0]   output_data,
  output     [3:0]    output_idx,
  input               enable,
  input               clk,
  input               resetn
);
  reg        [15:0]   shift_reg_0_data;
  reg        [3:0]    shift_reg_0_idx;
  reg        [15:0]   shift_reg_1_data;
  reg        [3:0]    shift_reg_1_idx;

  assign output_data = shift_reg_1_data;
  assign output_idx = shift_reg_1_idx;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_data <= input_data;
      shift_reg_0_idx <= input_idx;
      shift_reg_1_data <= shift_reg_0_data;
      shift_reg_1_idx <= shift_reg_0_idx;
    end
  end


endmodule

//CmpUnit replaced by CmpUnit

//ShiftRegister_1 replaced by ShiftRegister_1

module CmpSwitch (
  input      [15:0]   in1_data,
  input      [3:0]    in1_idx,
  input      [15:0]   in2_data,
  input      [3:0]    in2_idx,
  input               sel,
  output     [15:0]   out1_data,
  output     [3:0]    out1_idx,
  output     [15:0]   out2_data,
  output     [3:0]    out2_idx
);

  assign out1_data = (sel ? in2_data : in1_data);
  assign out1_idx = (sel ? in2_idx : in1_idx);
  assign out2_data = (sel ? in1_data : in2_data);
  assign out2_idx = (sel ? in1_idx : in2_idx);

endmodule

module ShiftRegister_1 (
  input      [15:0]   input_data,
  input      [3:0]    input_idx,
  output     [15:0]   output_data,
  output     [3:0]    output_idx,
  input               enable,
  input               clk,
  input               resetn
);
  reg        [15:0]   shift_reg_0_data;
  reg        [3:0]    shift_reg_0_idx;
  reg        [15:0]   shift_reg_1_data;
  reg        [3:0]    shift_reg_1_idx;
  reg        [15:0]   shift_reg_2_data;
  reg        [3:0]    shift_reg_2_idx;
  reg        [15:0]   shift_reg_3_data;
  reg        [3:0]    shift_reg_3_idx;

  assign output_data = shift_reg_3_data;
  assign output_idx = shift_reg_3_idx;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_data <= input_data;
      shift_reg_0_idx <= input_idx;
      shift_reg_1_data <= shift_reg_0_data;
      shift_reg_1_idx <= shift_reg_0_idx;
      shift_reg_2_data <= shift_reg_1_data;
      shift_reg_2_idx <= shift_reg_1_idx;
      shift_reg_3_data <= shift_reg_2_data;
      shift_reg_3_idx <= shift_reg_2_idx;
    end
  end


endmodule

module CmpUnit (
  input      [15:0]   in1_data,
  input      [3:0]    in1_idx,
  input      [15:0]   in2_data,
  input      [3:0]    in2_idx,
  input               less,
  output     [15:0]   out1_data,
  output     [3:0]    out1_idx,
  output     [15:0]   out2_data,
  output     [3:0]    out2_idx
);
  wire       [15:0]   _zz_cmp_less_result;
  wire       [15:0]   _zz_cmp_less_result_1;
  wire                cmp_less_result;
  wire                cmp_sel;

  assign _zz_cmp_less_result = in1_data;
  assign _zz_cmp_less_result_1 = in2_data;
  assign cmp_less_result = ($signed(_zz_cmp_less_result) < $signed(_zz_cmp_less_result_1));
  assign cmp_sel = (less ? cmp_less_result : (! cmp_less_result));
  assign out1_data = (cmp_sel ? in1_data : in2_data);
  assign out1_idx = (cmp_sel ? in1_idx : in2_idx);
  assign out2_data = (cmp_sel ? in2_data : in1_data);
  assign out2_idx = (cmp_sel ? in2_idx : in1_idx);

endmodule

module ShiftRegister (
  input      [15:0]   input_data,
  input      [3:0]    input_idx,
  output     [15:0]   output_data,
  output     [3:0]    output_idx,
  input               enable,
  input               clk,
  input               resetn
);
  reg        [15:0]   shift_reg_0_data;
  reg        [3:0]    shift_reg_0_idx;
  reg        [15:0]   shift_reg_1_data;
  reg        [3:0]    shift_reg_1_idx;
  reg        [15:0]   shift_reg_2_data;
  reg        [3:0]    shift_reg_2_idx;
  reg        [15:0]   shift_reg_3_data;
  reg        [3:0]    shift_reg_3_idx;
  reg        [15:0]   shift_reg_4_data;
  reg        [3:0]    shift_reg_4_idx;
  reg        [15:0]   shift_reg_5_data;
  reg        [3:0]    shift_reg_5_idx;
  reg        [15:0]   shift_reg_6_data;
  reg        [3:0]    shift_reg_6_idx;
  reg        [15:0]   shift_reg_7_data;
  reg        [3:0]    shift_reg_7_idx;

  assign output_data = shift_reg_7_data;
  assign output_idx = shift_reg_7_idx;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_data <= input_data;
      shift_reg_0_idx <= input_idx;
      shift_reg_1_data <= shift_reg_0_data;
      shift_reg_1_idx <= shift_reg_0_idx;
      shift_reg_2_data <= shift_reg_1_data;
      shift_reg_2_idx <= shift_reg_1_idx;
      shift_reg_3_data <= shift_reg_2_data;
      shift_reg_3_idx <= shift_reg_2_idx;
      shift_reg_4_data <= shift_reg_3_data;
      shift_reg_4_idx <= shift_reg_3_idx;
      shift_reg_5_data <= shift_reg_4_data;
      shift_reg_5_idx <= shift_reg_4_idx;
      shift_reg_6_data <= shift_reg_5_data;
      shift_reg_6_idx <= shift_reg_5_idx;
      shift_reg_7_data <= shift_reg_6_data;
      shift_reg_7_idx <= shift_reg_6_idx;
    end
  end


endmodule
