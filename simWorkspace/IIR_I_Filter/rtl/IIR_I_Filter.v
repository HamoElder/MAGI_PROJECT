// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : IIR_I_Filter
// Git hash  : 664a1f7772b4fc387f607a4a9afa4ff906ad7794



module IIR_I_Filter (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_0,
  output              filtered_data_valid,
  output     [28:0]   filtered_data_payload_0,
  input               clk,
  input               reset
);
  wire                fir_zero_filtered_data_valid;
  wire       [28:0]   fir_zero_filtered_data_payload_0;
  wire                fir_pole_filtered_data_valid;
  wire       [28:0]   fir_pole_filtered_data_payload_0;
  wire       [19:0]   _zz_filtered_data_vec_0;
  wire       [28:0]   _zz_filtered_data_vec_0_1;
  reg        [28:0]   filtered_data_vec_0;
  reg                 filtered_valid_buf;

  assign _zz_filtered_data_vec_0 = (_zz_filtered_data_vec_0_1 >>> 9);
  assign _zz_filtered_data_vec_0_1 = ($signed(fir_zero_filtered_data_payload_0) - $signed(fir_pole_filtered_data_payload_0));
  DirectFIR fir_zero (
    .raw_data_valid             (raw_data_valid                    ), //i
    .raw_data_payload_0         (raw_data_payload_0                ), //i
    .filtered_data_valid        (fir_zero_filtered_data_valid      ), //o
    .filtered_data_payload_0    (fir_zero_filtered_data_payload_0  ), //o
    .clk                        (clk                               ), //i
    .reset                      (reset                             )  //i
  );
  DirectFIR_1 fir_pole (
    .raw_data_valid             (filtered_valid_buf                ), //i
    .raw_data_payload_0         (filtered_data_vec_0               ), //i
    .filtered_data_valid        (fir_pole_filtered_data_valid      ), //o
    .filtered_data_payload_0    (fir_pole_filtered_data_payload_0  ), //o
    .clk                        (clk                               ), //i
    .reset                      (reset                             )  //i
  );
  assign filtered_data_payload_0 = filtered_data_vec_0;
  assign filtered_data_valid = filtered_valid_buf;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      filtered_data_vec_0 <= 29'h0;
      filtered_valid_buf <= 1'b0;
    end else begin
      if(fir_zero_filtered_data_valid) begin
        filtered_valid_buf <= 1'b1;
        filtered_data_vec_0 <= {{9{_zz_filtered_data_vec_0[19]}}, _zz_filtered_data_vec_0};
      end else begin
        filtered_valid_buf <= 1'b0;
      end
    end
  end


endmodule

module DirectFIR_1 (
  input               raw_data_valid,
  input      [28:0]   raw_data_payload_0,
  output              filtered_data_valid,
  output     [28:0]   filtered_data_payload_0,
  input               clk,
  input               reset
);
  wire                directFIRCore_2_filtered_data_valid;
  wire       [28:0]   directFIRCore_2_filtered_data_payload;
  reg        [11:0]   coff_mem_0;
  reg        [11:0]   coff_mem_1;
  reg        [11:0]   coff_mem_2;
  reg        [11:0]   coff_mem_3;
  reg        [11:0]   coff_mem_4;
  reg        [11:0]   coff_mem_5;
  reg        [11:0]   coff_mem_6;
  wire                filtered_valid_vec_0;

  DirectFIRCore_1 directFIRCore_2 (
    .raw_data_valid           (raw_data_valid                         ), //i
    .raw_data_payload         (raw_data_payload_0                     ), //i
    .coff_data_0              (coff_mem_0                             ), //i
    .coff_data_1              (coff_mem_1                             ), //i
    .coff_data_2              (coff_mem_2                             ), //i
    .coff_data_3              (coff_mem_3                             ), //i
    .coff_data_4              (coff_mem_4                             ), //i
    .coff_data_5              (coff_mem_5                             ), //i
    .coff_data_6              (coff_mem_6                             ), //i
    .filtered_data_valid      (directFIRCore_2_filtered_data_valid    ), //o
    .filtered_data_payload    (directFIRCore_2_filtered_data_payload  ), //o
    .clk                      (clk                                    ), //i
    .reset                    (reset                                  )  //i
  );
  assign filtered_data_payload_0 = directFIRCore_2_filtered_data_payload;
  assign filtered_valid_vec_0 = directFIRCore_2_filtered_data_valid;
  assign filtered_data_valid = filtered_valid_vec_0;
  always @(posedge clk) begin
    coff_mem_0 <= 12'hc66;
    coff_mem_1 <= 12'h48b;
    coff_mem_2 <= 12'hcd5;
    coff_mem_3 <= 12'h1d8;
    coff_mem_4 <= 12'hf86;
    coff_mem_5 <= 12'h018;
    coff_mem_6 <= 12'hffe;
  end


endmodule

module DirectFIR (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_0,
  output              filtered_data_valid,
  output     [28:0]   filtered_data_payload_0,
  input               clk,
  input               reset
);
  wire                directFIRCore_2_filtered_data_valid;
  wire       [28:0]   directFIRCore_2_filtered_data_payload;
  reg        [6:0]    coff_mem_0;
  reg        [6:0]    coff_mem_1;
  reg        [6:0]    coff_mem_2;
  reg        [6:0]    coff_mem_3;
  reg        [6:0]    coff_mem_4;
  reg        [6:0]    coff_mem_5;
  reg        [6:0]    coff_mem_6;
  reg        [6:0]    coff_mem_7;
  wire                filtered_valid_vec_0;

  DirectFIRCore directFIRCore_2 (
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
    .filtered_data_valid      (directFIRCore_2_filtered_data_valid    ), //o
    .filtered_data_payload    (directFIRCore_2_filtered_data_payload  ), //o
    .clk                      (clk                                    ), //i
    .reset                    (reset                                  )  //i
  );
  assign filtered_data_payload_0 = directFIRCore_2_filtered_data_payload;
  assign filtered_valid_vec_0 = directFIRCore_2_filtered_data_valid;
  assign filtered_data_valid = filtered_valid_vec_0;
  always @(posedge clk) begin
    coff_mem_0 <= 7'h07;
    coff_mem_1 <= 7'h15;
    coff_mem_2 <= 7'h2a;
    coff_mem_3 <= 7'h38;
    coff_mem_4 <= 7'h38;
    coff_mem_5 <= 7'h2a;
    coff_mem_6 <= 7'h15;
    coff_mem_7 <= 7'h07;
  end


endmodule

module DirectFIRCore_1 (
  input               raw_data_valid,
  input      [28:0]   raw_data_payload,
  input      [11:0]   coff_data_0,
  input      [11:0]   coff_data_1,
  input      [11:0]   coff_data_2,
  input      [11:0]   coff_data_3,
  input      [11:0]   coff_data_4,
  input      [11:0]   coff_data_5,
  input      [11:0]   coff_data_6,
  output              filtered_data_valid,
  output     [28:0]   filtered_data_payload,
  input               clk,
  input               reset
);
  wire       [3:0]    _zz_internal_en;
  wire       [40:0]   _zz_mult_data_vec_0;
  wire       [40:0]   _zz_mult_data_vec_1;
  wire       [40:0]   _zz_mult_data_vec_2;
  wire       [40:0]   _zz_mult_data_vec_3;
  wire       [40:0]   _zz_mult_data_vec_4;
  wire       [40:0]   _zz_mult_data_vec_5;
  wire       [40:0]   _zz_mult_data_vec_6;
  wire       [28:0]   _zz_sum_result;
  wire       [28:0]   _zz_sum_result_1;
  wire       [28:0]   _zz_sum_result_2;
  wire       [28:0]   _zz_sum_result_3;
  wire       [28:0]   _zz_sum_result_4;
  reg        [2:0]    internal_en;
  reg        [28:0]   raw_data_vec_0;
  reg        [28:0]   raw_data_vec_1;
  reg        [28:0]   raw_data_vec_2;
  reg        [28:0]   raw_data_vec_3;
  reg        [28:0]   raw_data_vec_4;
  reg        [28:0]   raw_data_vec_5;
  reg        [28:0]   raw_data_vec_6;
  reg        [28:0]   mult_data_vec_0;
  reg        [28:0]   mult_data_vec_1;
  reg        [28:0]   mult_data_vec_2;
  reg        [28:0]   mult_data_vec_3;
  reg        [28:0]   mult_data_vec_4;
  reg        [28:0]   mult_data_vec_5;
  reg        [28:0]   mult_data_vec_6;
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
  assign _zz_sum_result = ($signed(_zz_sum_result_1) + $signed(mult_data_vec_5));
  assign _zz_sum_result_1 = ($signed(_zz_sum_result_2) + $signed(mult_data_vec_4));
  assign _zz_sum_result_2 = ($signed(_zz_sum_result_3) + $signed(mult_data_vec_3));
  assign _zz_sum_result_3 = ($signed(_zz_sum_result_4) + $signed(mult_data_vec_2));
  assign _zz_sum_result_4 = ($signed(mult_data_vec_0) + $signed(mult_data_vec_1));
  assign when_DirectFIR_l29 = internal_en[0];
  assign when_DirectFIR_l35 = internal_en[1];
  assign filtered_data_valid = internal_en[2];
  assign filtered_data_payload = sum_result;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      internal_en <= 3'b000;
      raw_data_vec_0 <= 29'h0;
      raw_data_vec_1 <= 29'h0;
      raw_data_vec_2 <= 29'h0;
      raw_data_vec_3 <= 29'h0;
      raw_data_vec_4 <= 29'h0;
      raw_data_vec_5 <= 29'h0;
      raw_data_vec_6 <= 29'h0;
      mult_data_vec_0 <= 29'h0;
      mult_data_vec_1 <= 29'h0;
      mult_data_vec_2 <= 29'h0;
      mult_data_vec_3 <= 29'h0;
      mult_data_vec_4 <= 29'h0;
      mult_data_vec_5 <= 29'h0;
      mult_data_vec_6 <= 29'h0;
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
      end
      if(when_DirectFIR_l29) begin
        mult_data_vec_0 <= _zz_mult_data_vec_0[28:0];
        mult_data_vec_1 <= _zz_mult_data_vec_1[28:0];
        mult_data_vec_2 <= _zz_mult_data_vec_2[28:0];
        mult_data_vec_3 <= _zz_mult_data_vec_3[28:0];
        mult_data_vec_4 <= _zz_mult_data_vec_4[28:0];
        mult_data_vec_5 <= _zz_mult_data_vec_5[28:0];
        mult_data_vec_6 <= _zz_mult_data_vec_6[28:0];
      end
      if(when_DirectFIR_l35) begin
        sum_result <= ($signed(_zz_sum_result) + $signed(mult_data_vec_6));
      end
    end
  end


endmodule

module DirectFIRCore (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload,
  input      [6:0]    coff_data_0,
  input      [6:0]    coff_data_1,
  input      [6:0]    coff_data_2,
  input      [6:0]    coff_data_3,
  input      [6:0]    coff_data_4,
  input      [6:0]    coff_data_5,
  input      [6:0]    coff_data_6,
  input      [6:0]    coff_data_7,
  output              filtered_data_valid,
  output     [28:0]   filtered_data_payload,
  input               clk,
  input               reset
);
  wire       [3:0]    _zz_internal_en;
  wire       [18:0]   _zz_mult_data_vec_0;
  wire       [18:0]   _zz_mult_data_vec_1;
  wire       [18:0]   _zz_mult_data_vec_2;
  wire       [18:0]   _zz_mult_data_vec_3;
  wire       [18:0]   _zz_mult_data_vec_4;
  wire       [18:0]   _zz_mult_data_vec_5;
  wire       [18:0]   _zz_mult_data_vec_6;
  wire       [18:0]   _zz_mult_data_vec_7;
  wire       [28:0]   _zz_sum_result;
  wire       [28:0]   _zz_sum_result_1;
  wire       [28:0]   _zz_sum_result_2;
  wire       [28:0]   _zz_sum_result_3;
  wire       [28:0]   _zz_sum_result_4;
  wire       [28:0]   _zz_sum_result_5;
  reg        [2:0]    internal_en;
  reg        [11:0]   raw_data_vec_0;
  reg        [11:0]   raw_data_vec_1;
  reg        [11:0]   raw_data_vec_2;
  reg        [11:0]   raw_data_vec_3;
  reg        [11:0]   raw_data_vec_4;
  reg        [11:0]   raw_data_vec_5;
  reg        [11:0]   raw_data_vec_6;
  reg        [11:0]   raw_data_vec_7;
  reg        [28:0]   mult_data_vec_0;
  reg        [28:0]   mult_data_vec_1;
  reg        [28:0]   mult_data_vec_2;
  reg        [28:0]   mult_data_vec_3;
  reg        [28:0]   mult_data_vec_4;
  reg        [28:0]   mult_data_vec_5;
  reg        [28:0]   mult_data_vec_6;
  reg        [28:0]   mult_data_vec_7;
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
  assign _zz_sum_result = ($signed(_zz_sum_result_1) + $signed(mult_data_vec_6));
  assign _zz_sum_result_1 = ($signed(_zz_sum_result_2) + $signed(mult_data_vec_5));
  assign _zz_sum_result_2 = ($signed(_zz_sum_result_3) + $signed(mult_data_vec_4));
  assign _zz_sum_result_3 = ($signed(_zz_sum_result_4) + $signed(mult_data_vec_3));
  assign _zz_sum_result_4 = ($signed(_zz_sum_result_5) + $signed(mult_data_vec_2));
  assign _zz_sum_result_5 = ($signed(mult_data_vec_0) + $signed(mult_data_vec_1));
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
      mult_data_vec_0 <= 29'h0;
      mult_data_vec_1 <= 29'h0;
      mult_data_vec_2 <= 29'h0;
      mult_data_vec_3 <= 29'h0;
      mult_data_vec_4 <= 29'h0;
      mult_data_vec_5 <= 29'h0;
      mult_data_vec_6 <= 29'h0;
      mult_data_vec_7 <= 29'h0;
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
      end
      if(when_DirectFIR_l29) begin
        mult_data_vec_0 <= {{10{_zz_mult_data_vec_0[18]}}, _zz_mult_data_vec_0};
        mult_data_vec_1 <= {{10{_zz_mult_data_vec_1[18]}}, _zz_mult_data_vec_1};
        mult_data_vec_2 <= {{10{_zz_mult_data_vec_2[18]}}, _zz_mult_data_vec_2};
        mult_data_vec_3 <= {{10{_zz_mult_data_vec_3[18]}}, _zz_mult_data_vec_3};
        mult_data_vec_4 <= {{10{_zz_mult_data_vec_4[18]}}, _zz_mult_data_vec_4};
        mult_data_vec_5 <= {{10{_zz_mult_data_vec_5[18]}}, _zz_mult_data_vec_5};
        mult_data_vec_6 <= {{10{_zz_mult_data_vec_6[18]}}, _zz_mult_data_vec_6};
        mult_data_vec_7 <= {{10{_zz_mult_data_vec_7[18]}}, _zz_mult_data_vec_7};
      end
      if(when_DirectFIR_l35) begin
        sum_result <= ($signed(_zz_sum_result) + $signed(mult_data_vec_7));
      end
    end
  end


endmodule
