// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : BitonicSortMDC
// Git hash  : 0d864d28435071412e1d4f9bb5a89da4be9b29a7



module BitonicSortMDC (
  input               ascending_order,
  input               raw_data_valid,
  output              raw_data_ready,
  input      [15:0]   raw_data_payload_data,
  output              sorted_data_valid,
  output     [15:0]   sorted_data_payload_low_data,
  output     [15:0]   sorted_data_payload_high_data,
  input               clk,
  input               reset
);
  wire                cmpSwitch_3_sel;
  wire                cmpSwitch_4_sel;
  wire                cmpSwitch_5_sel;
  wire       [15:0]   shiftRegister_7_output_data;
  wire       [15:0]   cmpUnit_4_out1_data;
  wire       [15:0]   cmpUnit_4_out2_data;
  wire       [15:0]   shiftRegister_8_output_data;
  wire       [15:0]   cmpSwitch_3_out1_data;
  wire       [15:0]   cmpSwitch_3_out2_data;
  wire       [15:0]   shiftRegister_9_output_data;
  wire       [15:0]   cmpUnit_5_out1_data;
  wire       [15:0]   cmpUnit_5_out2_data;
  wire       [15:0]   shiftRegister_10_output_data;
  wire       [15:0]   cmpSwitch_4_out1_data;
  wire       [15:0]   cmpSwitch_4_out2_data;
  wire       [15:0]   shiftRegister_11_output_data;
  wire       [15:0]   cmpUnit_6_out1_data;
  wire       [15:0]   cmpUnit_6_out2_data;
  wire       [15:0]   shiftRegister_12_output_data;
  wire       [15:0]   cmpSwitch_5_out1_data;
  wire       [15:0]   cmpSwitch_5_out2_data;
  wire       [15:0]   shiftRegister_13_output_data;
  wire       [15:0]   cmpUnit_7_out1_data;
  wire       [15:0]   cmpUnit_7_out2_data;
  wire       [4:0]    _zz_cnt;
  reg        [4:0]    cnt;
  wire                raw_data_fire;
  wire                when_BitonicSortMDC_l27;
  wire                raw_data_fire_1;
  wire                raw_data_free_run;
  wire       [15:0]   out0_buf_0_data;
  wire       [15:0]   out0_buf_1_data;
  wire       [15:0]   out0_buf_2_data;
  wire       [15:0]   out0_buf_3_data;
  wire       [15:0]   out1_buf_0_data;
  wire       [15:0]   out1_buf_1_data;
  wire       [15:0]   out1_buf_2_data;
  wire       [15:0]   out1_buf_3_data;
  reg        [15:0]   cmpUnit_7_out1_regNext_data;
  reg        [15:0]   cmpUnit_7_out2_regNext_data;

  assign _zz_cnt = (cnt + 5'h01);
  ShiftRegister shiftRegister_7 (
    .input_data     (out0_buf_0_data              ), //i
    .output_data    (shiftRegister_7_output_data  ), //o
    .enable         (raw_data_free_run            ), //i
    .clk            (clk                          ), //i
    .reset          (reset                        )  //i
  );
  CmpUnit cmpUnit_4 (
    .in1_data     (shiftRegister_7_output_data  ), //i
    .in2_data     (out1_buf_0_data              ), //i
    .less         (ascending_order              ), //i
    .out1_data    (cmpUnit_4_out1_data          ), //o
    .out2_data    (cmpUnit_4_out2_data          )  //o
  );
  ShiftRegister_1 shiftRegister_8 (
    .input_data     (cmpUnit_4_out2_data          ), //i
    .output_data    (shiftRegister_8_output_data  ), //o
    .enable         (raw_data_free_run            ), //i
    .clk            (clk                          ), //i
    .reset          (reset                        )  //i
  );
  CmpSwitch cmpSwitch_3 (
    .in1_data     (cmpUnit_4_out1_data          ), //i
    .in2_data     (shiftRegister_8_output_data  ), //i
    .sel          (cmpSwitch_3_sel              ), //i
    .out1_data    (cmpSwitch_3_out1_data        ), //o
    .out2_data    (cmpSwitch_3_out2_data        )  //o
  );
  ShiftRegister_1 shiftRegister_9 (
    .input_data     (out0_buf_1_data              ), //i
    .output_data    (shiftRegister_9_output_data  ), //o
    .enable         (raw_data_free_run            ), //i
    .clk            (clk                          ), //i
    .reset          (reset                        )  //i
  );
  CmpUnit cmpUnit_5 (
    .in1_data     (shiftRegister_9_output_data  ), //i
    .in2_data     (out1_buf_1_data              ), //i
    .less         (ascending_order              ), //i
    .out1_data    (cmpUnit_5_out1_data          ), //o
    .out2_data    (cmpUnit_5_out2_data          )  //o
  );
  ShiftRegister_3 shiftRegister_10 (
    .input_data     (cmpUnit_5_out2_data           ), //i
    .output_data    (shiftRegister_10_output_data  ), //o
    .enable         (raw_data_free_run             ), //i
    .clk            (clk                           ), //i
    .reset          (reset                         )  //i
  );
  CmpSwitch cmpSwitch_4 (
    .in1_data     (cmpUnit_5_out1_data           ), //i
    .in2_data     (shiftRegister_10_output_data  ), //i
    .sel          (cmpSwitch_4_sel               ), //i
    .out1_data    (cmpSwitch_4_out1_data         ), //o
    .out2_data    (cmpSwitch_4_out2_data         )  //o
  );
  ShiftRegister_3 shiftRegister_11 (
    .input_data     (out0_buf_2_data               ), //i
    .output_data    (shiftRegister_11_output_data  ), //o
    .enable         (raw_data_free_run             ), //i
    .clk            (clk                           ), //i
    .reset          (reset                         )  //i
  );
  CmpUnit cmpUnit_6 (
    .in1_data     (shiftRegister_11_output_data  ), //i
    .in2_data     (out1_buf_2_data               ), //i
    .less         (ascending_order               ), //i
    .out1_data    (cmpUnit_6_out1_data           ), //o
    .out2_data    (cmpUnit_6_out2_data           )  //o
  );
  ShiftRegister_5 shiftRegister_12 (
    .input_data     (cmpUnit_6_out2_data           ), //i
    .output_data    (shiftRegister_12_output_data  ), //o
    .enable         (raw_data_free_run             ), //i
    .clk            (clk                           ), //i
    .reset          (reset                         )  //i
  );
  CmpSwitch cmpSwitch_5 (
    .in1_data     (cmpUnit_6_out1_data           ), //i
    .in2_data     (shiftRegister_12_output_data  ), //i
    .sel          (cmpSwitch_5_sel               ), //i
    .out1_data    (cmpSwitch_5_out1_data         ), //o
    .out2_data    (cmpSwitch_5_out2_data         )  //o
  );
  ShiftRegister_5 shiftRegister_13 (
    .input_data     (out0_buf_3_data               ), //i
    .output_data    (shiftRegister_13_output_data  ), //o
    .enable         (1'b1                          ), //i
    .clk            (clk                           ), //i
    .reset          (reset                         )  //i
  );
  CmpUnit cmpUnit_7 (
    .in1_data     (shiftRegister_13_output_data  ), //i
    .in2_data     (out1_buf_3_data               ), //i
    .less         (raw_data_free_run             ), //i
    .out1_data    (cmpUnit_7_out1_data           ), //o
    .out2_data    (cmpUnit_7_out2_data           )  //o
  );
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_BitonicSortMDC_l27 = (raw_data_fire || (5'h10 <= cnt));
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign raw_data_free_run = (raw_data_fire_1 || (5'h10 <= cnt));
  assign out0_buf_0_data = raw_data_payload_data;
  assign out1_buf_0_data = raw_data_payload_data;
  assign cmpSwitch_3_sel = cnt[2];
  assign out0_buf_1_data = cmpSwitch_3_out1_data;
  assign out1_buf_1_data = cmpSwitch_3_out2_data;
  assign cmpSwitch_4_sel = cnt[1];
  assign out0_buf_2_data = cmpSwitch_4_out1_data;
  assign out1_buf_2_data = cmpSwitch_4_out2_data;
  assign cmpSwitch_5_sel = cnt[0];
  assign out0_buf_3_data = cmpSwitch_5_out1_data;
  assign out1_buf_3_data = cmpSwitch_5_out2_data;
  assign sorted_data_payload_low_data = cmpUnit_7_out1_regNext_data;
  assign sorted_data_payload_high_data = cmpUnit_7_out2_regNext_data;
  assign sorted_data_valid = (5'h0f < cnt);
  assign raw_data_ready = (cnt < 5'h10);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 5'h0;
    end else begin
      if(when_BitonicSortMDC_l27) begin
        cnt <= ((cnt == 5'h17) ? 5'h0 : _zz_cnt);
      end
    end
  end

  always @(posedge clk) begin
    cmpUnit_7_out1_regNext_data <= cmpUnit_7_out1_data;
    cmpUnit_7_out2_regNext_data <= cmpUnit_7_out2_data;
  end


endmodule

//CmpUnit replaced by CmpUnit

//ShiftRegister_5 replaced by ShiftRegister_5

//CmpSwitch replaced by CmpSwitch

module ShiftRegister_5 (
  input      [15:0]   input_data,
  output     [15:0]   output_data,
  input               enable,
  input               clk,
  input               reset
);
  reg        [15:0]   shift_reg_0_data;

  assign output_data = shift_reg_0_data;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_data <= input_data;
    end
  end


endmodule

//CmpUnit replaced by CmpUnit

//ShiftRegister_3 replaced by ShiftRegister_3

//CmpSwitch replaced by CmpSwitch

module ShiftRegister_3 (
  input      [15:0]   input_data,
  output     [15:0]   output_data,
  input               enable,
  input               clk,
  input               reset
);
  reg        [15:0]   shift_reg_0_data;
  reg        [15:0]   shift_reg_1_data;

  assign output_data = shift_reg_1_data;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_data <= input_data;
      shift_reg_1_data <= shift_reg_0_data;
    end
  end


endmodule

//CmpUnit replaced by CmpUnit

//ShiftRegister_1 replaced by ShiftRegister_1

module CmpSwitch (
  input      [15:0]   in1_data,
  input      [15:0]   in2_data,
  input               sel,
  output     [15:0]   out1_data,
  output     [15:0]   out2_data
);

  assign out1_data = (sel ? in2_data : in1_data);
  assign out2_data = (sel ? in1_data : in2_data);

endmodule

module ShiftRegister_1 (
  input      [15:0]   input_data,
  output     [15:0]   output_data,
  input               enable,
  input               clk,
  input               reset
);
  reg        [15:0]   shift_reg_0_data;
  reg        [15:0]   shift_reg_1_data;
  reg        [15:0]   shift_reg_2_data;
  reg        [15:0]   shift_reg_3_data;

  assign output_data = shift_reg_3_data;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_data <= input_data;
      shift_reg_1_data <= shift_reg_0_data;
      shift_reg_2_data <= shift_reg_1_data;
      shift_reg_3_data <= shift_reg_2_data;
    end
  end


endmodule

module CmpUnit (
  input      [15:0]   in1_data,
  input      [15:0]   in2_data,
  input               less,
  output     [15:0]   out1_data,
  output     [15:0]   out2_data
);
  wire                cmp_less_result;
  wire                cmp_sel;

  assign cmp_less_result = (in1_data < in2_data);
  assign cmp_sel = (less ? cmp_less_result : (! cmp_less_result));
  assign out1_data = (cmp_sel ? in1_data : in2_data);
  assign out2_data = (cmp_sel ? in2_data : in1_data);

endmodule

module ShiftRegister (
  input      [15:0]   input_data,
  output     [15:0]   output_data,
  input               enable,
  input               clk,
  input               reset
);
  reg        [15:0]   shift_reg_0_data;
  reg        [15:0]   shift_reg_1_data;
  reg        [15:0]   shift_reg_2_data;
  reg        [15:0]   shift_reg_3_data;
  reg        [15:0]   shift_reg_4_data;
  reg        [15:0]   shift_reg_5_data;
  reg        [15:0]   shift_reg_6_data;
  reg        [15:0]   shift_reg_7_data;

  assign output_data = shift_reg_7_data;
  always @(posedge clk) begin
    if(enable) begin
      shift_reg_0_data <= input_data;
      shift_reg_1_data <= shift_reg_0_data;
      shift_reg_2_data <= shift_reg_1_data;
      shift_reg_3_data <= shift_reg_2_data;
      shift_reg_4_data <= shift_reg_3_data;
      shift_reg_5_data <= shift_reg_4_data;
      shift_reg_6_data <= shift_reg_5_data;
      shift_reg_7_data <= shift_reg_6_data;
    end
  end


endmodule
