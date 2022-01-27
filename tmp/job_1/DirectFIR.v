// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : DirectFIR
// Git hash  : 664a1f7772b4fc387f607a4a9afa4ff906ad7794



module DirectFIR (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_0,
  output              filtered_data_valid,
  output     [28:0]   filtered_data_payload_0,
  input               clk,
  input               reset
);
  wire                directFIRCore_1_filtered_data_valid;
  wire       [28:0]   directFIRCore_1_filtered_data_payload;
  reg        [8:0]    coff_mem_0;
  reg        [8:0]    coff_mem_1;
  reg        [8:0]    coff_mem_2;
  reg        [8:0]    coff_mem_3;
  reg        [8:0]    coff_mem_4;
  reg        [8:0]    coff_mem_5;
  reg        [8:0]    coff_mem_6;
  reg        [8:0]    coff_mem_7;
  reg        [8:0]    coff_mem_8;
  reg        [8:0]    coff_mem_9;
  reg        [8:0]    coff_mem_10;
  reg        [8:0]    coff_mem_11;
  reg        [8:0]    coff_mem_12;
  reg        [8:0]    coff_mem_13;
  reg        [8:0]    coff_mem_14;
  reg        [8:0]    coff_mem_15;
  wire                filtered_valid_vec_0;

  DirectFIRCore directFIRCore_1 (
    .raw_data_valid           (raw_data_valid                         ), //i
    .raw_data_payload         (raw_data_payload_0                     ), //i
    .coff_data_0              (coff_mem_0                             ), //i
    .coff_data_1              (coff_mem_1                             ), //i
    .coff_data_2              (coff_mem_2                             ), //i
    .coff_data_3              (coff_mem_3                             ), //i
    .coff_data_4              (coff_mem_4                             ), //i
    .coff_data_5              (coff_mem_5                             ), //i
    .coff_data_6              (coff_mem_6                             ), //i
    .coff_data_7              (coff_mem_7                             ), //i
    .coff_data_8              (coff_mem_8                             ), //i
    .coff_data_9              (coff_mem_9                             ), //i
    .coff_data_10             (coff_mem_10                            ), //i
    .coff_data_11             (coff_mem_11                            ), //i
    .coff_data_12             (coff_mem_12                            ), //i
    .coff_data_13             (coff_mem_13                            ), //i
    .coff_data_14             (coff_mem_14                            ), //i
    .coff_data_15             (coff_mem_15                            ), //i
    .filtered_data_valid      (directFIRCore_1_filtered_data_valid    ), //o
    .filtered_data_payload    (directFIRCore_1_filtered_data_payload  ), //o
    .clk                      (clk                                    ), //i
    .reset                    (reset                                  )  //i
  );
  assign filtered_data_payload_0 = directFIRCore_1_filtered_data_payload;
  assign filtered_valid_vec_0 = directFIRCore_1_filtered_data_valid;
  assign filtered_data_valid = filtered_valid_vec_0;
  always @(posedge clk) begin
    coff_mem_0 <= 9'h00b;
    coff_mem_1 <= 9'h01f;
    coff_mem_2 <= 9'h03f;
    coff_mem_3 <= 9'h068;
    coff_mem_4 <= 9'h098;
    coff_mem_5 <= 9'h0c6;
    coff_mem_6 <= 9'h0eb;
    coff_mem_7 <= 9'h0ff;
    coff_mem_8 <= 9'h0ff;
    coff_mem_9 <= 9'h0eb;
    coff_mem_10 <= 9'h0c6;
    coff_mem_11 <= 9'h098;
    coff_mem_12 <= 9'h068;
    coff_mem_13 <= 9'h03f;
    coff_mem_14 <= 9'h01f;
    coff_mem_15 <= 9'h00b;
  end


endmodule

module DirectFIRCore (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload,
  input      [8:0]    coff_data_0,
  input      [8:0]    coff_data_1,
  input      [8:0]    coff_data_2,
  input      [8:0]    coff_data_3,
  input      [8:0]    coff_data_4,
  input      [8:0]    coff_data_5,
  input      [8:0]    coff_data_6,
  input      [8:0]    coff_data_7,
  input      [8:0]    coff_data_8,
  input      [8:0]    coff_data_9,
  input      [8:0]    coff_data_10,
  input      [8:0]    coff_data_11,
  input      [8:0]    coff_data_12,
  input      [8:0]    coff_data_13,
  input      [8:0]    coff_data_14,
  input      [8:0]    coff_data_15,
  output              filtered_data_valid,
  output     [28:0]   filtered_data_payload,
  input               clk,
  input               reset
);
  wire       [3:0]    _zz_internal_en;
  wire       [20:0]   _zz_mult_data_vec_0;
  wire       [20:0]   _zz_mult_data_vec_1;
  wire       [20:0]   _zz_mult_data_vec_2;
  wire       [20:0]   _zz_mult_data_vec_3;
  wire       [20:0]   _zz_mult_data_vec_4;
  wire       [20:0]   _zz_mult_data_vec_5;
  wire       [20:0]   _zz_mult_data_vec_6;
  wire       [20:0]   _zz_mult_data_vec_7;
  wire       [20:0]   _zz_mult_data_vec_8;
  wire       [20:0]   _zz_mult_data_vec_9;
  wire       [20:0]   _zz_mult_data_vec_10;
  wire       [20:0]   _zz_mult_data_vec_11;
  wire       [20:0]   _zz_mult_data_vec_12;
  wire       [20:0]   _zz_mult_data_vec_13;
  wire       [20:0]   _zz_mult_data_vec_14;
  wire       [20:0]   _zz_mult_data_vec_15;
  wire       [28:0]   _zz_sum_result;
  wire       [28:0]   _zz_sum_result_1;
  wire       [28:0]   _zz_sum_result_2;
  wire       [28:0]   _zz_sum_result_3;
  wire       [28:0]   _zz_sum_result_4;
  wire       [28:0]   _zz_sum_result_5;
  wire       [28:0]   _zz_sum_result_6;
  wire       [28:0]   _zz_sum_result_7;
  wire       [28:0]   _zz_sum_result_8;
  wire       [28:0]   _zz_sum_result_9;
  wire       [28:0]   _zz_sum_result_10;
  wire       [28:0]   _zz_sum_result_11;
  wire       [28:0]   _zz_sum_result_12;
  wire       [28:0]   _zz_sum_result_13;
  reg        [2:0]    internal_en;
  reg        [11:0]   raw_data_vec_0;
  reg        [11:0]   raw_data_vec_1;
  reg        [11:0]   raw_data_vec_2;
  reg        [11:0]   raw_data_vec_3;
  reg        [11:0]   raw_data_vec_4;
  reg        [11:0]   raw_data_vec_5;
  reg        [11:0]   raw_data_vec_6;
  reg        [11:0]   raw_data_vec_7;
  reg        [11:0]   raw_data_vec_8;
  reg        [11:0]   raw_data_vec_9;
  reg        [11:0]   raw_data_vec_10;
  reg        [11:0]   raw_data_vec_11;
  reg        [11:0]   raw_data_vec_12;
  reg        [11:0]   raw_data_vec_13;
  reg        [11:0]   raw_data_vec_14;
  reg        [11:0]   raw_data_vec_15;
  reg        [28:0]   mult_data_vec_0;
  reg        [28:0]   mult_data_vec_1;
  reg        [28:0]   mult_data_vec_2;
  reg        [28:0]   mult_data_vec_3;
  reg        [28:0]   mult_data_vec_4;
  reg        [28:0]   mult_data_vec_5;
  reg        [28:0]   mult_data_vec_6;
  reg        [28:0]   mult_data_vec_7;
  reg        [28:0]   mult_data_vec_8;
  reg        [28:0]   mult_data_vec_9;
  reg        [28:0]   mult_data_vec_10;
  reg        [28:0]   mult_data_vec_11;
  reg        [28:0]   mult_data_vec_12;
  reg        [28:0]   mult_data_vec_13;
  reg        [28:0]   mult_data_vec_14;
  reg        [28:0]   mult_data_vec_15;
  wire                when_DirectFIR_l29;
  reg        [28:0]   sum_result;
  wire                when_DirectFIR_l35;

  assign _zz_internal_en = {internal_en,raw_data_valid};
  assign _zz_mult_data_vec_0 = ($signed(coff_data_0) * $signed(raw_data_vec_0));
  assign _zz_mult_data_vec_1 = ($signed(coff_data_1) * $signed(raw_data_vec_1));
  assign _zz_mult_data_vec_2 = ($signed(coff_data_2) * $signed(raw_data_vec_2));
  assign _zz_mult_data_vec_3 = ($signed(coff_data_3) * $signed(raw_data_vec_3));
  assign _zz_mult_data_vec_4 = ($signed(coff_data_4) * $signed(raw_data_vec_4));
  assign _zz_mult_data_vec_5 = ($signed(coff_data_5) * $signed(raw_data_vec_5));
  assign _zz_mult_data_vec_6 = ($signed(coff_data_6) * $signed(raw_data_vec_6));
  assign _zz_mult_data_vec_7 = ($signed(coff_data_7) * $signed(raw_data_vec_7));
  assign _zz_mult_data_vec_8 = ($signed(coff_data_8) * $signed(raw_data_vec_8));
  assign _zz_mult_data_vec_9 = ($signed(coff_data_9) * $signed(raw_data_vec_9));
  assign _zz_mult_data_vec_10 = ($signed(coff_data_10) * $signed(raw_data_vec_10));
  assign _zz_mult_data_vec_11 = ($signed(coff_data_11) * $signed(raw_data_vec_11));
  assign _zz_mult_data_vec_12 = ($signed(coff_data_12) * $signed(raw_data_vec_12));
  assign _zz_mult_data_vec_13 = ($signed(coff_data_13) * $signed(raw_data_vec_13));
  assign _zz_mult_data_vec_14 = ($signed(coff_data_14) * $signed(raw_data_vec_14));
  assign _zz_mult_data_vec_15 = ($signed(coff_data_15) * $signed(raw_data_vec_15));
  assign _zz_sum_result = ($signed(_zz_sum_result_1) + $signed(mult_data_vec_14));
  assign _zz_sum_result_1 = ($signed(_zz_sum_result_2) + $signed(mult_data_vec_13));
  assign _zz_sum_result_2 = ($signed(_zz_sum_result_3) + $signed(mult_data_vec_12));
  assign _zz_sum_result_3 = ($signed(_zz_sum_result_4) + $signed(mult_data_vec_11));
  assign _zz_sum_result_4 = ($signed(_zz_sum_result_5) + $signed(mult_data_vec_10));
  assign _zz_sum_result_5 = ($signed(_zz_sum_result_6) + $signed(mult_data_vec_9));
  assign _zz_sum_result_6 = ($signed(_zz_sum_result_7) + $signed(mult_data_vec_8));
  assign _zz_sum_result_7 = ($signed(_zz_sum_result_8) + $signed(mult_data_vec_7));
  assign _zz_sum_result_8 = ($signed(_zz_sum_result_9) + $signed(mult_data_vec_6));
  assign _zz_sum_result_9 = ($signed(_zz_sum_result_10) + $signed(mult_data_vec_5));
  assign _zz_sum_result_10 = ($signed(_zz_sum_result_11) + $signed(mult_data_vec_4));
  assign _zz_sum_result_11 = ($signed(_zz_sum_result_12) + $signed(mult_data_vec_3));
  assign _zz_sum_result_12 = ($signed(_zz_sum_result_13) + $signed(mult_data_vec_2));
  assign _zz_sum_result_13 = ($signed(mult_data_vec_0) + $signed(mult_data_vec_1));
  assign when_DirectFIR_l29 = internal_en[0];
  assign when_DirectFIR_l35 = internal_en[1];
  assign filtered_data_valid = internal_en[2];
  assign filtered_data_payload = sum_result;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      internal_en <= 3'b000;
      raw_data_vec_0 <= 12'h0;
      raw_data_vec_1 <= 12'h0;
      raw_data_vec_2 <= 12'h0;
      raw_data_vec_3 <= 12'h0;
      raw_data_vec_4 <= 12'h0;
      raw_data_vec_5 <= 12'h0;
      raw_data_vec_6 <= 12'h0;
      raw_data_vec_7 <= 12'h0;
      raw_data_vec_8 <= 12'h0;
      raw_data_vec_9 <= 12'h0;
      raw_data_vec_10 <= 12'h0;
      raw_data_vec_11 <= 12'h0;
      raw_data_vec_12 <= 12'h0;
      raw_data_vec_13 <= 12'h0;
      raw_data_vec_14 <= 12'h0;
      raw_data_vec_15 <= 12'h0;
      mult_data_vec_0 <= 29'h0;
      mult_data_vec_1 <= 29'h0;
      mult_data_vec_2 <= 29'h0;
      mult_data_vec_3 <= 29'h0;
      mult_data_vec_4 <= 29'h0;
      mult_data_vec_5 <= 29'h0;
      mult_data_vec_6 <= 29'h0;
      mult_data_vec_7 <= 29'h0;
      mult_data_vec_8 <= 29'h0;
      mult_data_vec_9 <= 29'h0;
      mult_data_vec_10 <= 29'h0;
      mult_data_vec_11 <= 29'h0;
      mult_data_vec_12 <= 29'h0;
      mult_data_vec_13 <= 29'h0;
      mult_data_vec_14 <= 29'h0;
      mult_data_vec_15 <= 29'h0;
      sum_result <= 29'h0;
    end else begin
      internal_en <= _zz_internal_en[2:0];
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
      if(when_DirectFIR_l29) begin
        mult_data_vec_0 <= {{8{_zz_mult_data_vec_0[20]}}, _zz_mult_data_vec_0};
        mult_data_vec_1 <= {{8{_zz_mult_data_vec_1[20]}}, _zz_mult_data_vec_1};
        mult_data_vec_2 <= {{8{_zz_mult_data_vec_2[20]}}, _zz_mult_data_vec_2};
        mult_data_vec_3 <= {{8{_zz_mult_data_vec_3[20]}}, _zz_mult_data_vec_3};
        mult_data_vec_4 <= {{8{_zz_mult_data_vec_4[20]}}, _zz_mult_data_vec_4};
        mult_data_vec_5 <= {{8{_zz_mult_data_vec_5[20]}}, _zz_mult_data_vec_5};
        mult_data_vec_6 <= {{8{_zz_mult_data_vec_6[20]}}, _zz_mult_data_vec_6};
        mult_data_vec_7 <= {{8{_zz_mult_data_vec_7[20]}}, _zz_mult_data_vec_7};
        mult_data_vec_8 <= {{8{_zz_mult_data_vec_8[20]}}, _zz_mult_data_vec_8};
        mult_data_vec_9 <= {{8{_zz_mult_data_vec_9[20]}}, _zz_mult_data_vec_9};
        mult_data_vec_10 <= {{8{_zz_mult_data_vec_10[20]}}, _zz_mult_data_vec_10};
        mult_data_vec_11 <= {{8{_zz_mult_data_vec_11[20]}}, _zz_mult_data_vec_11};
        mult_data_vec_12 <= {{8{_zz_mult_data_vec_12[20]}}, _zz_mult_data_vec_12};
        mult_data_vec_13 <= {{8{_zz_mult_data_vec_13[20]}}, _zz_mult_data_vec_13};
        mult_data_vec_14 <= {{8{_zz_mult_data_vec_14[20]}}, _zz_mult_data_vec_14};
        mult_data_vec_15 <= {{8{_zz_mult_data_vec_15[20]}}, _zz_mult_data_vec_15};
      end
      if(when_DirectFIR_l35) begin
        sum_result <= ($signed(_zz_sum_result) + $signed(mult_data_vec_15));
      end
    end
  end


endmodule
