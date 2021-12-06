// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : BitonicSort
// Git hash  : f551716d88446d93e1dd170a856757e67c11b4e4



module BitonicSort (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [15:0]   raw_data_payload_data,
  input      [3:0]    raw_data_payload_idx,
  output              sorted_data_valid,
  output     [15:0]   sorted_data_payload_data,
  output     [3:0]    sorted_data_payload_idx,
  input               clk,
  input               resetn
);
  wire                cmpSwitch_3_sel;
  wire                cmpSwitch_4_sel;
  wire                cmpSwitch_5_sel;
  wire       [15:0]   shiftRegister_6_output_data;
  wire       [3:0]    shiftRegister_6_output_idx;
  wire       [15:0]   cmpUnit_3_out1_data;
  wire       [3:0]    cmpUnit_3_out1_idx;
  wire       [15:0]   cmpUnit_3_out2_data;
  wire       [3:0]    cmpUnit_3_out2_idx;
  wire       [15:0]   shiftRegister_7_output_data;
  wire       [3:0]    shiftRegister_7_output_idx;
  wire       [15:0]   cmpSwitch_3_out1_data;
  wire       [3:0]    cmpSwitch_3_out1_idx;
  wire       [15:0]   cmpSwitch_3_out2_data;
  wire       [3:0]    cmpSwitch_3_out2_idx;
  wire       [15:0]   shiftRegister_8_output_data;
  wire       [3:0]    shiftRegister_8_output_idx;
  wire       [15:0]   cmpUnit_4_out1_data;
  wire       [3:0]    cmpUnit_4_out1_idx;
  wire       [15:0]   cmpUnit_4_out2_data;
  wire       [3:0]    cmpUnit_4_out2_idx;
  wire       [15:0]   shiftRegister_9_output_data;
  wire       [3:0]    shiftRegister_9_output_idx;
  wire       [15:0]   cmpSwitch_4_out1_data;
  wire       [3:0]    cmpSwitch_4_out1_idx;
  wire       [15:0]   cmpSwitch_4_out2_data;
  wire       [3:0]    cmpSwitch_4_out2_idx;
  wire       [15:0]   shiftRegister_10_output_data;
  wire       [3:0]    shiftRegister_10_output_idx;
  wire       [15:0]   cmpUnit_5_out1_data;
  wire       [3:0]    cmpUnit_5_out1_idx;
  wire       [15:0]   cmpUnit_5_out2_data;
  wire       [3:0]    cmpUnit_5_out2_idx;
  wire       [15:0]   shiftRegister_11_output_data;
  wire       [3:0]    shiftRegister_11_output_idx;
  wire       [15:0]   cmpSwitch_5_out1_data;
  wire       [3:0]    cmpSwitch_5_out1_idx;
  wire       [15:0]   cmpSwitch_5_out2_data;
  wire       [3:0]    cmpSwitch_5_out2_idx;
  wire       [4:0]    _zz_cnt;
  reg        [4:0]    cnt;
  wire                raw_data_fire;
  wire                when_BitonicSort_l22;
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
  wire                _zz_sorted_data_payload_data;

  assign _zz_cnt = (cnt + 5'h01);
  ShiftRegister shiftRegister_6 (
    .input_data     (out0_buf_0_data              ), //i
    .input_idx      (out0_buf_0_idx               ), //i
    .output_data    (shiftRegister_6_output_data  ), //o
    .output_idx     (shiftRegister_6_output_idx   ), //o
    .enable         (1'b1                         ), //i
    .clk            (clk                          ), //i
    .resetn         (resetn                       )  //i
  );
  CmpUnit cmpUnit_3 (
    .in1_data     (shiftRegister_6_output_data  ), //i
    .in1_idx      (shiftRegister_6_output_idx   ), //i
    .in2_data     (out1_buf_0_data              ), //i
    .in2_idx      (out1_buf_0_idx               ), //i
    .less         (1'b1                         ), //i
    .out1_data    (cmpUnit_3_out1_data          ), //o
    .out1_idx     (cmpUnit_3_out1_idx           ), //o
    .out2_data    (cmpUnit_3_out2_data          ), //o
    .out2_idx     (cmpUnit_3_out2_idx           )  //o
  );
  ShiftRegister_1 shiftRegister_7 (
    .input_data     (cmpUnit_3_out2_data          ), //i
    .input_idx      (cmpUnit_3_out2_idx           ), //i
    .output_data    (shiftRegister_7_output_data  ), //o
    .output_idx     (shiftRegister_7_output_idx   ), //o
    .enable         (1'b1                         ), //i
    .clk            (clk                          ), //i
    .resetn         (resetn                       )  //i
  );
  CmpSwitch cmpSwitch_3 (
    .in1_data     (cmpUnit_3_out1_data          ), //i
    .in1_idx      (cmpUnit_3_out1_idx           ), //i
    .in2_data     (shiftRegister_7_output_data  ), //i
    .in2_idx      (shiftRegister_7_output_idx   ), //i
    .sel          (cmpSwitch_3_sel              ), //i
    .out1_data    (cmpSwitch_3_out1_data        ), //o
    .out1_idx     (cmpSwitch_3_out1_idx         ), //o
    .out2_data    (cmpSwitch_3_out2_data        ), //o
    .out2_idx     (cmpSwitch_3_out2_idx         )  //o
  );
  ShiftRegister_1 shiftRegister_8 (
    .input_data     (out0_buf_1_data              ), //i
    .input_idx      (out0_buf_1_idx               ), //i
    .output_data    (shiftRegister_8_output_data  ), //o
    .output_idx     (shiftRegister_8_output_idx   ), //o
    .enable         (1'b1                         ), //i
    .clk            (clk                          ), //i
    .resetn         (resetn                       )  //i
  );
  CmpUnit cmpUnit_4 (
    .in1_data     (shiftRegister_8_output_data  ), //i
    .in1_idx      (shiftRegister_8_output_idx   ), //i
    .in2_data     (out1_buf_1_data              ), //i
    .in2_idx      (out1_buf_1_idx               ), //i
    .less         (1'b1                         ), //i
    .out1_data    (cmpUnit_4_out1_data          ), //o
    .out1_idx     (cmpUnit_4_out1_idx           ), //o
    .out2_data    (cmpUnit_4_out2_data          ), //o
    .out2_idx     (cmpUnit_4_out2_idx           )  //o
  );
  ShiftRegister_3 shiftRegister_9 (
    .input_data     (cmpUnit_4_out2_data          ), //i
    .input_idx      (cmpUnit_4_out2_idx           ), //i
    .output_data    (shiftRegister_9_output_data  ), //o
    .output_idx     (shiftRegister_9_output_idx   ), //o
    .enable         (1'b1                         ), //i
    .clk            (clk                          ), //i
    .resetn         (resetn                       )  //i
  );
  CmpSwitch cmpSwitch_4 (
    .in1_data     (cmpUnit_4_out1_data          ), //i
    .in1_idx      (cmpUnit_4_out1_idx           ), //i
    .in2_data     (shiftRegister_9_output_data  ), //i
    .in2_idx      (shiftRegister_9_output_idx   ), //i
    .sel          (cmpSwitch_4_sel              ), //i
    .out1_data    (cmpSwitch_4_out1_data        ), //o
    .out1_idx     (cmpSwitch_4_out1_idx         ), //o
    .out2_data    (cmpSwitch_4_out2_data        ), //o
    .out2_idx     (cmpSwitch_4_out2_idx         )  //o
  );
  ShiftRegister_3 shiftRegister_10 (
    .input_data     (out0_buf_2_data               ), //i
    .input_idx      (out0_buf_2_idx                ), //i
    .output_data    (shiftRegister_10_output_data  ), //o
    .output_idx     (shiftRegister_10_output_idx   ), //o
    .enable         (1'b1                          ), //i
    .clk            (clk                           ), //i
    .resetn         (resetn                        )  //i
  );
  CmpUnit cmpUnit_5 (
    .in1_data     (shiftRegister_10_output_data  ), //i
    .in1_idx      (shiftRegister_10_output_idx   ), //i
    .in2_data     (out1_buf_2_data               ), //i
    .in2_idx      (out1_buf_2_idx                ), //i
    .less         (1'b1                          ), //i
    .out1_data    (cmpUnit_5_out1_data           ), //o
    .out1_idx     (cmpUnit_5_out1_idx            ), //o
    .out2_data    (cmpUnit_5_out2_data           ), //o
    .out2_idx     (cmpUnit_5_out2_idx            )  //o
  );
  ShiftRegister_5 shiftRegister_11 (
    .input_data     (cmpUnit_5_out2_data           ), //i
    .input_idx      (cmpUnit_5_out2_idx            ), //i
    .output_data    (shiftRegister_11_output_data  ), //o
    .output_idx     (shiftRegister_11_output_idx   ), //o
    .enable         (1'b1                          ), //i
    .clk            (clk                           ), //i
    .resetn         (resetn                        )  //i
  );
  CmpSwitch cmpSwitch_5 (
    .in1_data     (cmpUnit_5_out1_data           ), //i
    .in1_idx      (cmpUnit_5_out1_idx            ), //i
    .in2_data     (shiftRegister_11_output_data  ), //i
    .in2_idx      (shiftRegister_11_output_idx   ), //i
    .sel          (cmpSwitch_5_sel               ), //i
    .out1_data    (cmpSwitch_5_out1_data         ), //o
    .out1_idx     (cmpSwitch_5_out1_idx          ), //o
    .out2_data    (cmpSwitch_5_out2_data         ), //o
    .out2_idx     (cmpSwitch_5_out2_idx          )  //o
  );
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_BitonicSort_l22 = (raw_data_fire || (5'h10 <= cnt));
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
  assign _zz_sorted_data_payload_data = cnt[0];
  assign sorted_data_payload_data = (_zz_sorted_data_payload_data ? out0_buf_3_data : out1_buf_3_data);
  assign sorted_data_payload_idx = (_zz_sorted_data_payload_data ? out0_buf_3_idx : out1_buf_3_idx);
  assign sorted_data_valid = 1'b1;
  assign raw_data_ready = (cnt < 5'h10);
  always @(posedge clk) begin
    if(!resetn) begin
      cnt <= 5'h0;
    end else begin
      if(when_BitonicSort_l22) begin
        cnt <= ((cnt == 5'h17) ? 5'h0 : _zz_cnt);
      end
    end
  end


endmodule

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
  reg                 when_Phase_l623;
  wire       [19:0]   _zz_output_data;
  reg        [19:0]   _zz_output_data_1;

  always @(*) begin
    when_Phase_l623 = 1'b0;
    if(enable) begin
      when_Phase_l623 = 1'b1;
    end
  end

  assign _zz_output_data = _zz_output_data_1;
  assign output_data = _zz_output_data[15 : 0];
  assign output_idx = _zz_output_data[19 : 16];
  always @(posedge clk) begin
    if(when_Phase_l623) begin
      _zz_output_data_1 <= {input_idx,input_data};
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
  wire       [19:0]   _zz_shift_reg_port1;
  wire       [19:0]   _zz_shift_reg_port3;
  wire       [0:0]    _zz__zz_3;
  wire       [0:0]    _zz_shift_reg_port;
  wire       [19:0]   _zz_shift_reg_port_1;
  wire       [0:0]    _zz_shift_reg_port_2;
  wire       [0:0]    _zz_shift_reg_port_3;
  wire       [19:0]   _zz_shift_reg_port_4;
  wire       [0:0]    _zz_shift_reg_port_5;
  wire       [0:0]    _zz__zz_output_data;
  reg                 _zz_1;
  reg                 _zz_2;
  wire       [19:0]   _zz_3;
  wire       [19:0]   _zz_output_data;
  (* ram_style = "distributed" *) reg [19:0] shift_reg [0:1];

  assign _zz_shift_reg_port = 1'b0;
  assign _zz_shift_reg_port_1 = {input_idx,input_data};
  assign _zz_shift_reg_port_2 = 1'b0;
  assign _zz_shift_reg_port_3 = 1'b1;
  assign _zz_shift_reg_port_4 = {_zz_3[19 : 16],_zz_3[15 : 0]};
  assign _zz__zz_output_data = 1'b1;
  always @(posedge clk) begin
    if(_zz_2) begin
      shift_reg[_zz_shift_reg_port] <= _zz_shift_reg_port_1;
    end
  end

  assign _zz_shift_reg_port1 = shift_reg[_zz_shift_reg_port_2];
  always @(posedge clk) begin
    if(_zz_1) begin
      shift_reg[_zz_shift_reg_port_3] <= _zz_shift_reg_port_4;
    end
  end

  assign _zz_shift_reg_port3 = shift_reg[_zz__zz_output_data];
  always @(*) begin
    _zz_1 = 1'b0;
    if(enable) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    _zz_2 = 1'b0;
    if(enable) begin
      _zz_2 = 1'b1;
    end
  end

  assign _zz_3 = _zz_shift_reg_port1;
  assign _zz_output_data = _zz_shift_reg_port3;
  assign output_data = _zz_output_data[15 : 0];
  assign output_idx = _zz_output_data[19 : 16];

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
  wire       [19:0]   _zz_shift_reg_port1;
  wire       [19:0]   _zz_shift_reg_port3;
  wire       [19:0]   _zz_shift_reg_port5;
  wire       [19:0]   _zz_shift_reg_port7;
  wire       [1:0]    _zz__zz_5;
  wire       [1:0]    _zz__zz_6;
  wire       [1:0]    _zz__zz_7;
  wire       [1:0]    _zz_shift_reg_port;
  wire       [19:0]   _zz_shift_reg_port_1;
  wire       [1:0]    _zz_shift_reg_port_2;
  wire       [1:0]    _zz_shift_reg_port_3;
  wire       [19:0]   _zz_shift_reg_port_4;
  wire       [1:0]    _zz_shift_reg_port_5;
  wire       [1:0]    _zz_shift_reg_port_6;
  wire       [19:0]   _zz_shift_reg_port_7;
  wire       [1:0]    _zz_shift_reg_port_8;
  wire       [1:0]    _zz_shift_reg_port_9;
  wire       [19:0]   _zz_shift_reg_port_10;
  wire       [1:0]    _zz_shift_reg_port_11;
  wire       [1:0]    _zz__zz_output_data;
  reg                 _zz_1;
  reg                 _zz_2;
  reg                 _zz_3;
  reg                 _zz_4;
  wire       [19:0]   _zz_5;
  wire       [19:0]   _zz_6;
  wire       [19:0]   _zz_7;
  wire       [19:0]   _zz_output_data;
  (* ram_style = "distributed" *) reg [19:0] shift_reg [0:3];

  assign _zz_shift_reg_port = 2'b00;
  assign _zz_shift_reg_port_1 = {input_idx,input_data};
  assign _zz_shift_reg_port_2 = 2'b00;
  assign _zz_shift_reg_port_3 = 2'b01;
  assign _zz_shift_reg_port_4 = {_zz_5[19 : 16],_zz_5[15 : 0]};
  assign _zz_shift_reg_port_5 = 2'b01;
  assign _zz_shift_reg_port_6 = 2'b10;
  assign _zz_shift_reg_port_7 = {_zz_6[19 : 16],_zz_6[15 : 0]};
  assign _zz_shift_reg_port_8 = 2'b10;
  assign _zz_shift_reg_port_9 = 2'b11;
  assign _zz_shift_reg_port_10 = {_zz_7[19 : 16],_zz_7[15 : 0]};
  assign _zz__zz_output_data = 2'b11;
  always @(posedge clk) begin
    if(_zz_4) begin
      shift_reg[_zz_shift_reg_port] <= _zz_shift_reg_port_1;
    end
  end

  assign _zz_shift_reg_port1 = shift_reg[_zz_shift_reg_port_2];
  always @(posedge clk) begin
    if(_zz_3) begin
      shift_reg[_zz_shift_reg_port_3] <= _zz_shift_reg_port_4;
    end
  end

  assign _zz_shift_reg_port3 = shift_reg[_zz_shift_reg_port_5];
  always @(posedge clk) begin
    if(_zz_2) begin
      shift_reg[_zz_shift_reg_port_6] <= _zz_shift_reg_port_7;
    end
  end

  assign _zz_shift_reg_port5 = shift_reg[_zz_shift_reg_port_8];
  always @(posedge clk) begin
    if(_zz_1) begin
      shift_reg[_zz_shift_reg_port_9] <= _zz_shift_reg_port_10;
    end
  end

  assign _zz_shift_reg_port7 = shift_reg[_zz__zz_output_data];
  always @(*) begin
    _zz_1 = 1'b0;
    if(enable) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    _zz_2 = 1'b0;
    if(enable) begin
      _zz_2 = 1'b1;
    end
  end

  always @(*) begin
    _zz_3 = 1'b0;
    if(enable) begin
      _zz_3 = 1'b1;
    end
  end

  always @(*) begin
    _zz_4 = 1'b0;
    if(enable) begin
      _zz_4 = 1'b1;
    end
  end

  assign _zz_5 = _zz_shift_reg_port1;
  assign _zz_6 = _zz_shift_reg_port3;
  assign _zz_7 = _zz_shift_reg_port5;
  assign _zz_output_data = _zz_shift_reg_port7;
  assign output_data = _zz_output_data[15 : 0];
  assign output_idx = _zz_output_data[19 : 16];

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
  wire       [19:0]   _zz_shift_reg_port1;
  wire       [19:0]   _zz_shift_reg_port3;
  wire       [19:0]   _zz_shift_reg_port5;
  wire       [19:0]   _zz_shift_reg_port7;
  wire       [19:0]   _zz_shift_reg_port9;
  wire       [19:0]   _zz_shift_reg_port11;
  wire       [19:0]   _zz_shift_reg_port13;
  wire       [19:0]   _zz_shift_reg_port15;
  wire       [2:0]    _zz__zz_9;
  wire       [2:0]    _zz__zz_10;
  wire       [2:0]    _zz__zz_11;
  wire       [2:0]    _zz__zz_12;
  wire       [2:0]    _zz__zz_13;
  wire       [2:0]    _zz__zz_14;
  wire       [2:0]    _zz__zz_15;
  wire       [2:0]    _zz_shift_reg_port;
  wire       [19:0]   _zz_shift_reg_port_1;
  wire       [2:0]    _zz_shift_reg_port_2;
  wire       [2:0]    _zz_shift_reg_port_3;
  wire       [19:0]   _zz_shift_reg_port_4;
  wire       [2:0]    _zz_shift_reg_port_5;
  wire       [2:0]    _zz_shift_reg_port_6;
  wire       [19:0]   _zz_shift_reg_port_7;
  wire       [2:0]    _zz_shift_reg_port_8;
  wire       [2:0]    _zz_shift_reg_port_9;
  wire       [19:0]   _zz_shift_reg_port_10;
  wire       [2:0]    _zz_shift_reg_port_11;
  wire       [2:0]    _zz_shift_reg_port_12;
  wire       [19:0]   _zz_shift_reg_port_13;
  wire       [2:0]    _zz_shift_reg_port_14;
  wire       [2:0]    _zz_shift_reg_port_15;
  wire       [19:0]   _zz_shift_reg_port_16;
  wire       [2:0]    _zz_shift_reg_port_17;
  wire       [2:0]    _zz_shift_reg_port_18;
  wire       [19:0]   _zz_shift_reg_port_19;
  wire       [2:0]    _zz_shift_reg_port_20;
  wire       [2:0]    _zz_shift_reg_port_21;
  wire       [19:0]   _zz_shift_reg_port_22;
  wire       [2:0]    _zz_shift_reg_port_23;
  wire       [2:0]    _zz__zz_output_data;
  reg                 _zz_1;
  reg                 _zz_2;
  reg                 _zz_3;
  reg                 _zz_4;
  reg                 _zz_5;
  reg                 _zz_6;
  reg                 _zz_7;
  reg                 _zz_8;
  wire       [19:0]   _zz_9;
  wire       [19:0]   _zz_10;
  wire       [19:0]   _zz_11;
  wire       [19:0]   _zz_12;
  wire       [19:0]   _zz_13;
  wire       [19:0]   _zz_14;
  wire       [19:0]   _zz_15;
  wire       [19:0]   _zz_output_data;
  (* ram_style = "distributed" *) reg [19:0] shift_reg [0:7];

  assign _zz_shift_reg_port = 3'b000;
  assign _zz_shift_reg_port_1 = {input_idx,input_data};
  assign _zz_shift_reg_port_2 = 3'b000;
  assign _zz_shift_reg_port_3 = 3'b001;
  assign _zz_shift_reg_port_4 = {_zz_9[19 : 16],_zz_9[15 : 0]};
  assign _zz_shift_reg_port_5 = 3'b001;
  assign _zz_shift_reg_port_6 = 3'b010;
  assign _zz_shift_reg_port_7 = {_zz_10[19 : 16],_zz_10[15 : 0]};
  assign _zz_shift_reg_port_8 = 3'b010;
  assign _zz_shift_reg_port_9 = 3'b011;
  assign _zz_shift_reg_port_10 = {_zz_11[19 : 16],_zz_11[15 : 0]};
  assign _zz_shift_reg_port_11 = 3'b011;
  assign _zz_shift_reg_port_12 = 3'b100;
  assign _zz_shift_reg_port_13 = {_zz_12[19 : 16],_zz_12[15 : 0]};
  assign _zz_shift_reg_port_14 = 3'b100;
  assign _zz_shift_reg_port_15 = 3'b101;
  assign _zz_shift_reg_port_16 = {_zz_13[19 : 16],_zz_13[15 : 0]};
  assign _zz_shift_reg_port_17 = 3'b101;
  assign _zz_shift_reg_port_18 = 3'b110;
  assign _zz_shift_reg_port_19 = {_zz_14[19 : 16],_zz_14[15 : 0]};
  assign _zz_shift_reg_port_20 = 3'b110;
  assign _zz_shift_reg_port_21 = 3'b111;
  assign _zz_shift_reg_port_22 = {_zz_15[19 : 16],_zz_15[15 : 0]};
  assign _zz__zz_output_data = 3'b111;
  always @(posedge clk) begin
    if(_zz_8) begin
      shift_reg[_zz_shift_reg_port] <= _zz_shift_reg_port_1;
    end
  end

  assign _zz_shift_reg_port1 = shift_reg[_zz_shift_reg_port_2];
  always @(posedge clk) begin
    if(_zz_7) begin
      shift_reg[_zz_shift_reg_port_3] <= _zz_shift_reg_port_4;
    end
  end

  assign _zz_shift_reg_port3 = shift_reg[_zz_shift_reg_port_5];
  always @(posedge clk) begin
    if(_zz_6) begin
      shift_reg[_zz_shift_reg_port_6] <= _zz_shift_reg_port_7;
    end
  end

  assign _zz_shift_reg_port5 = shift_reg[_zz_shift_reg_port_8];
  always @(posedge clk) begin
    if(_zz_5) begin
      shift_reg[_zz_shift_reg_port_9] <= _zz_shift_reg_port_10;
    end
  end

  assign _zz_shift_reg_port7 = shift_reg[_zz_shift_reg_port_11];
  always @(posedge clk) begin
    if(_zz_4) begin
      shift_reg[_zz_shift_reg_port_12] <= _zz_shift_reg_port_13;
    end
  end

  assign _zz_shift_reg_port9 = shift_reg[_zz_shift_reg_port_14];
  always @(posedge clk) begin
    if(_zz_3) begin
      shift_reg[_zz_shift_reg_port_15] <= _zz_shift_reg_port_16;
    end
  end

  assign _zz_shift_reg_port11 = shift_reg[_zz_shift_reg_port_17];
  always @(posedge clk) begin
    if(_zz_2) begin
      shift_reg[_zz_shift_reg_port_18] <= _zz_shift_reg_port_19;
    end
  end

  assign _zz_shift_reg_port13 = shift_reg[_zz_shift_reg_port_20];
  always @(posedge clk) begin
    if(_zz_1) begin
      shift_reg[_zz_shift_reg_port_21] <= _zz_shift_reg_port_22;
    end
  end

  assign _zz_shift_reg_port15 = shift_reg[_zz__zz_output_data];
  always @(*) begin
    _zz_1 = 1'b0;
    if(enable) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    _zz_2 = 1'b0;
    if(enable) begin
      _zz_2 = 1'b1;
    end
  end

  always @(*) begin
    _zz_3 = 1'b0;
    if(enable) begin
      _zz_3 = 1'b1;
    end
  end

  always @(*) begin
    _zz_4 = 1'b0;
    if(enable) begin
      _zz_4 = 1'b1;
    end
  end

  always @(*) begin
    _zz_5 = 1'b0;
    if(enable) begin
      _zz_5 = 1'b1;
    end
  end

  always @(*) begin
    _zz_6 = 1'b0;
    if(enable) begin
      _zz_6 = 1'b1;
    end
  end

  always @(*) begin
    _zz_7 = 1'b0;
    if(enable) begin
      _zz_7 = 1'b1;
    end
  end

  always @(*) begin
    _zz_8 = 1'b0;
    if(enable) begin
      _zz_8 = 1'b1;
    end
  end

  assign _zz_9 = _zz_shift_reg_port1;
  assign _zz_10 = _zz_shift_reg_port3;
  assign _zz_11 = _zz_shift_reg_port5;
  assign _zz_12 = _zz_shift_reg_port7;
  assign _zz_13 = _zz_shift_reg_port9;
  assign _zz_14 = _zz_shift_reg_port11;
  assign _zz_15 = _zz_shift_reg_port13;
  assign _zz_output_data = _zz_shift_reg_port15;
  assign output_data = _zz_output_data[15 : 0];
  assign output_idx = _zz_output_data[19 : 16];

endmodule
