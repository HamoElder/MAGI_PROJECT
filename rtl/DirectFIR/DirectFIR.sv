// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : DirectFIR
// Git hash  : c0e4fc9af9270a176d30fc862bf9a16b08561082

`timescale 1ns/1ps

module DirectFIR (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_0,
  output              filtered_data_valid,
  output     [28:0]   filtered_data_payload_0,
  input               clk,
  input               resetn
);

  wire                directFIRCore_1_filtered_data_valid;
  wire       [28:0]   directFIRCore_1_filtered_data_payload;
  reg        [7:0]    coff_mem_0;
  reg        [7:0]    coff_mem_1;
  reg        [7:0]    coff_mem_2;
  reg        [7:0]    coff_mem_3;
  reg        [7:0]    coff_mem_4;
  reg        [7:0]    coff_mem_5;
  reg        [7:0]    coff_mem_6;
  reg        [7:0]    coff_mem_7;
  reg        [7:0]    coff_mem_8;
  reg        [7:0]    coff_mem_9;
  reg        [7:0]    coff_mem_10;
  reg        [7:0]    coff_mem_11;
  reg        [7:0]    coff_mem_12;
  reg        [7:0]    coff_mem_13;
  reg        [7:0]    coff_mem_14;
  reg        [7:0]    coff_mem_15;
  reg        [7:0]    coff_mem_16;
  reg        [7:0]    coff_mem_17;
  reg        [7:0]    coff_mem_18;
  reg        [7:0]    coff_mem_19;
  reg        [7:0]    coff_mem_20;
  wire                filtered_valid_vec_0;

  DirectFIRCore directFIRCore_1 (
    .raw_data_valid        (raw_data_valid                             ), //i
    .raw_data_payload      (raw_data_payload_0[11:0]                   ), //i
    .coff_data_0           (coff_mem_0[7:0]                            ), //i
    .coff_data_1           (coff_mem_1[7:0]                            ), //i
    .coff_data_2           (coff_mem_2[7:0]                            ), //i
    .coff_data_3           (coff_mem_3[7:0]                            ), //i
    .coff_data_4           (coff_mem_4[7:0]                            ), //i
    .coff_data_5           (coff_mem_5[7:0]                            ), //i
    .coff_data_6           (coff_mem_6[7:0]                            ), //i
    .coff_data_7           (coff_mem_7[7:0]                            ), //i
    .coff_data_8           (coff_mem_8[7:0]                            ), //i
    .coff_data_9           (coff_mem_9[7:0]                            ), //i
    .coff_data_10          (coff_mem_10[7:0]                           ), //i
    .coff_data_11          (coff_mem_11[7:0]                           ), //i
    .coff_data_12          (coff_mem_12[7:0]                           ), //i
    .coff_data_13          (coff_mem_13[7:0]                           ), //i
    .coff_data_14          (coff_mem_14[7:0]                           ), //i
    .coff_data_15          (coff_mem_15[7:0]                           ), //i
    .coff_data_16          (coff_mem_16[7:0]                           ), //i
    .coff_data_17          (coff_mem_17[7:0]                           ), //i
    .coff_data_18          (coff_mem_18[7:0]                           ), //i
    .coff_data_19          (coff_mem_19[7:0]                           ), //i
    .coff_data_20          (coff_mem_20[7:0]                           ), //i
    .filtered_data_valid   (directFIRCore_1_filtered_data_valid        ), //o
    .filtered_data_payload (directFIRCore_1_filtered_data_payload[28:0]), //o
    .clk                   (clk                                        ), //i
    .resetn                (resetn                                     )  //i
  );
  assign filtered_data_payload_0 = directFIRCore_1_filtered_data_payload;
  assign filtered_valid_vec_0 = directFIRCore_1_filtered_data_valid;
  assign filtered_data_valid = filtered_valid_vec_0;
  always @(posedge clk) begin
    coff_mem_0 <= 8'h06;
    coff_mem_1 <= 8'h0;
    coff_mem_2 <= 8'hfc;
    coff_mem_3 <= 8'hfd;
    coff_mem_4 <= 8'h05;
    coff_mem_5 <= 8'h06;
    coff_mem_6 <= 8'hfa;
    coff_mem_7 <= 8'hf3;
    coff_mem_8 <= 8'h07;
    coff_mem_9 <= 8'h2c;
    coff_mem_10 <= 8'h40;
    coff_mem_11 <= 8'h2c;
    coff_mem_12 <= 8'h07;
    coff_mem_13 <= 8'hf3;
    coff_mem_14 <= 8'hfa;
    coff_mem_15 <= 8'h06;
    coff_mem_16 <= 8'h05;
    coff_mem_17 <= 8'hfd;
    coff_mem_18 <= 8'hfc;
    coff_mem_19 <= 8'h0;
    coff_mem_20 <= 8'h06;
  end


endmodule

module DirectFIRCore (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload,
  input      [7:0]    coff_data_0,
  input      [7:0]    coff_data_1,
  input      [7:0]    coff_data_2,
  input      [7:0]    coff_data_3,
  input      [7:0]    coff_data_4,
  input      [7:0]    coff_data_5,
  input      [7:0]    coff_data_6,
  input      [7:0]    coff_data_7,
  input      [7:0]    coff_data_8,
  input      [7:0]    coff_data_9,
  input      [7:0]    coff_data_10,
  input      [7:0]    coff_data_11,
  input      [7:0]    coff_data_12,
  input      [7:0]    coff_data_13,
  input      [7:0]    coff_data_14,
  input      [7:0]    coff_data_15,
  input      [7:0]    coff_data_16,
  input      [7:0]    coff_data_17,
  input      [7:0]    coff_data_18,
  input      [7:0]    coff_data_19,
  input      [7:0]    coff_data_20,
  output              filtered_data_valid,
  output     [28:0]   filtered_data_payload,
  input               clk,
  input               resetn
);

  wire       [3:0]    _zz_internal_en;
  wire       [19:0]   _zz_mult_data_vec_0;
  wire       [19:0]   _zz_mult_data_vec_1;
  wire       [19:0]   _zz_mult_data_vec_2;
  wire       [19:0]   _zz_mult_data_vec_3;
  wire       [19:0]   _zz_mult_data_vec_4;
  wire       [19:0]   _zz_mult_data_vec_5;
  wire       [19:0]   _zz_mult_data_vec_6;
  wire       [19:0]   _zz_mult_data_vec_7;
  wire       [19:0]   _zz_mult_data_vec_8;
  wire       [19:0]   _zz_mult_data_vec_9;
  wire       [19:0]   _zz_mult_data_vec_10;
  wire       [19:0]   _zz_mult_data_vec_11;
  wire       [19:0]   _zz_mult_data_vec_12;
  wire       [19:0]   _zz_mult_data_vec_13;
  wire       [19:0]   _zz_mult_data_vec_14;
  wire       [19:0]   _zz_mult_data_vec_15;
  wire       [19:0]   _zz_mult_data_vec_16;
  wire       [19:0]   _zz_mult_data_vec_17;
  wire       [19:0]   _zz_mult_data_vec_18;
  wire       [19:0]   _zz_mult_data_vec_19;
  wire       [19:0]   _zz_mult_data_vec_20;
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
  wire       [28:0]   _zz_sum_result_14;
  wire       [28:0]   _zz_sum_result_15;
  wire       [28:0]   _zz_sum_result_16;
  wire       [28:0]   _zz_sum_result_17;
  wire       [28:0]   _zz_sum_result_18;
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
  reg        [11:0]   raw_data_vec_16;
  reg        [11:0]   raw_data_vec_17;
  reg        [11:0]   raw_data_vec_18;
  reg        [11:0]   raw_data_vec_19;
  reg        [11:0]   raw_data_vec_20;
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
  reg        [28:0]   mult_data_vec_16;
  reg        [28:0]   mult_data_vec_17;
  reg        [28:0]   mult_data_vec_18;
  reg        [28:0]   mult_data_vec_19;
  reg        [28:0]   mult_data_vec_20;
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
  assign _zz_mult_data_vec_16 = ($signed(coff_data_16) * $signed(raw_data_vec_16));
  assign _zz_mult_data_vec_17 = ($signed(coff_data_17) * $signed(raw_data_vec_17));
  assign _zz_mult_data_vec_18 = ($signed(coff_data_18) * $signed(raw_data_vec_18));
  assign _zz_mult_data_vec_19 = ($signed(coff_data_19) * $signed(raw_data_vec_19));
  assign _zz_mult_data_vec_20 = ($signed(coff_data_20) * $signed(raw_data_vec_20));
  assign _zz_sum_result = ($signed(_zz_sum_result_1) + $signed(mult_data_vec_19));
  assign _zz_sum_result_1 = ($signed(_zz_sum_result_2) + $signed(mult_data_vec_18));
  assign _zz_sum_result_2 = ($signed(_zz_sum_result_3) + $signed(mult_data_vec_17));
  assign _zz_sum_result_3 = ($signed(_zz_sum_result_4) + $signed(mult_data_vec_16));
  assign _zz_sum_result_4 = ($signed(_zz_sum_result_5) + $signed(mult_data_vec_15));
  assign _zz_sum_result_5 = ($signed(_zz_sum_result_6) + $signed(mult_data_vec_14));
  assign _zz_sum_result_6 = ($signed(_zz_sum_result_7) + $signed(mult_data_vec_13));
  assign _zz_sum_result_7 = ($signed(_zz_sum_result_8) + $signed(mult_data_vec_12));
  assign _zz_sum_result_8 = ($signed(_zz_sum_result_9) + $signed(mult_data_vec_11));
  assign _zz_sum_result_9 = ($signed(_zz_sum_result_10) + $signed(mult_data_vec_10));
  assign _zz_sum_result_10 = ($signed(_zz_sum_result_11) + $signed(mult_data_vec_9));
  assign _zz_sum_result_11 = ($signed(_zz_sum_result_12) + $signed(mult_data_vec_8));
  assign _zz_sum_result_12 = ($signed(_zz_sum_result_13) + $signed(mult_data_vec_7));
  assign _zz_sum_result_13 = ($signed(_zz_sum_result_14) + $signed(mult_data_vec_6));
  assign _zz_sum_result_14 = ($signed(_zz_sum_result_15) + $signed(mult_data_vec_5));
  assign _zz_sum_result_15 = ($signed(_zz_sum_result_16) + $signed(mult_data_vec_4));
  assign _zz_sum_result_16 = ($signed(_zz_sum_result_17) + $signed(mult_data_vec_3));
  assign _zz_sum_result_17 = ($signed(_zz_sum_result_18) + $signed(mult_data_vec_2));
  assign _zz_sum_result_18 = ($signed(mult_data_vec_0) + $signed(mult_data_vec_1));
  assign when_DirectFIR_l29 = internal_en[0];
  assign when_DirectFIR_l35 = internal_en[1];
  assign filtered_data_valid = internal_en[2];
  assign filtered_data_payload = sum_result;
  always @(posedge clk) begin
    if(!resetn) begin
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
      raw_data_vec_16 <= 12'h0;
      raw_data_vec_17 <= 12'h0;
      raw_data_vec_18 <= 12'h0;
      raw_data_vec_19 <= 12'h0;
      raw_data_vec_20 <= 12'h0;
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
      mult_data_vec_16 <= 29'h0;
      mult_data_vec_17 <= 29'h0;
      mult_data_vec_18 <= 29'h0;
      mult_data_vec_19 <= 29'h0;
      mult_data_vec_20 <= 29'h0;
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
        raw_data_vec_16 <= raw_data_vec_15;
        raw_data_vec_17 <= raw_data_vec_16;
        raw_data_vec_18 <= raw_data_vec_17;
        raw_data_vec_19 <= raw_data_vec_18;
        raw_data_vec_20 <= raw_data_vec_19;
      end
      if(when_DirectFIR_l29) begin
        mult_data_vec_0 <= {{9{_zz_mult_data_vec_0[19]}}, _zz_mult_data_vec_0};
        mult_data_vec_1 <= {{9{_zz_mult_data_vec_1[19]}}, _zz_mult_data_vec_1};
        mult_data_vec_2 <= {{9{_zz_mult_data_vec_2[19]}}, _zz_mult_data_vec_2};
        mult_data_vec_3 <= {{9{_zz_mult_data_vec_3[19]}}, _zz_mult_data_vec_3};
        mult_data_vec_4 <= {{9{_zz_mult_data_vec_4[19]}}, _zz_mult_data_vec_4};
        mult_data_vec_5 <= {{9{_zz_mult_data_vec_5[19]}}, _zz_mult_data_vec_5};
        mult_data_vec_6 <= {{9{_zz_mult_data_vec_6[19]}}, _zz_mult_data_vec_6};
        mult_data_vec_7 <= {{9{_zz_mult_data_vec_7[19]}}, _zz_mult_data_vec_7};
        mult_data_vec_8 <= {{9{_zz_mult_data_vec_8[19]}}, _zz_mult_data_vec_8};
        mult_data_vec_9 <= {{9{_zz_mult_data_vec_9[19]}}, _zz_mult_data_vec_9};
        mult_data_vec_10 <= {{9{_zz_mult_data_vec_10[19]}}, _zz_mult_data_vec_10};
        mult_data_vec_11 <= {{9{_zz_mult_data_vec_11[19]}}, _zz_mult_data_vec_11};
        mult_data_vec_12 <= {{9{_zz_mult_data_vec_12[19]}}, _zz_mult_data_vec_12};
        mult_data_vec_13 <= {{9{_zz_mult_data_vec_13[19]}}, _zz_mult_data_vec_13};
        mult_data_vec_14 <= {{9{_zz_mult_data_vec_14[19]}}, _zz_mult_data_vec_14};
        mult_data_vec_15 <= {{9{_zz_mult_data_vec_15[19]}}, _zz_mult_data_vec_15};
        mult_data_vec_16 <= {{9{_zz_mult_data_vec_16[19]}}, _zz_mult_data_vec_16};
        mult_data_vec_17 <= {{9{_zz_mult_data_vec_17[19]}}, _zz_mult_data_vec_17};
        mult_data_vec_18 <= {{9{_zz_mult_data_vec_18[19]}}, _zz_mult_data_vec_18};
        mult_data_vec_19 <= {{9{_zz_mult_data_vec_19[19]}}, _zz_mult_data_vec_19};
        mult_data_vec_20 <= {{9{_zz_mult_data_vec_20[19]}}, _zz_mult_data_vec_20};
      end
      if(when_DirectFIR_l35) begin
        sum_result <= ($signed(_zz_sum_result) + $signed(mult_data_vec_20));
      end
    end
  end


endmodule
