// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : IIR_II_Filter
// Git hash  : b50f8eedfee0ae5b23a664070b7c6bea62d4901e



module IIR_II_Filter (
  input               clc,
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_0,
  input      [15:0]   raw_data_payload_1,
  output              filtered_data_valid,
  output     [28:0]   filtered_data_payload_0,
  output     [28:0]   filtered_data_payload_1,
  input               clk,
  input               resetn
);
  wire                iIR_II_Core_2_filtered_data_valid;
  wire       [28:0]   iIR_II_Core_2_filtered_data_payload;
  wire                iIR_II_Core_3_filtered_data_valid;
  wire       [28:0]   iIR_II_Core_3_filtered_data_payload;
  wire                filtered_valid_vec_0;
  wire                filtered_valid_vec_1;

  IIR_II_Core iIR_II_Core_2 (
    .clc                      (clc                                  ), //i
    .raw_data_valid           (raw_data_valid                       ), //i
    .raw_data_payload         (raw_data_payload_0                   ), //i
    .filtered_data_valid      (iIR_II_Core_2_filtered_data_valid    ), //o
    .filtered_data_payload    (iIR_II_Core_2_filtered_data_payload  ), //o
    .clk                      (clk                                  ), //i
    .resetn                   (resetn                               )  //i
  );
  IIR_II_Core iIR_II_Core_3 (
    .clc                      (clc                                  ), //i
    .raw_data_valid           (raw_data_valid                       ), //i
    .raw_data_payload         (raw_data_payload_1                   ), //i
    .filtered_data_valid      (iIR_II_Core_3_filtered_data_valid    ), //o
    .filtered_data_payload    (iIR_II_Core_3_filtered_data_payload  ), //o
    .clk                      (clk                                  ), //i
    .resetn                   (resetn                               )  //i
  );
  assign filtered_data_payload_0 = iIR_II_Core_2_filtered_data_payload;
  assign filtered_valid_vec_0 = iIR_II_Core_2_filtered_data_valid;
  assign filtered_data_payload_1 = iIR_II_Core_3_filtered_data_payload;
  assign filtered_valid_vec_1 = iIR_II_Core_3_filtered_data_valid;
  assign filtered_data_valid = (filtered_valid_vec_0 && filtered_valid_vec_1);

endmodule

//IIR_II_Core replaced by IIR_II_Core

module IIR_II_Core (
  input               clc,
  input               raw_data_valid,
  input      [15:0]   raw_data_payload,
  output              filtered_data_valid,
  output     [28:0]   filtered_data_payload,
  input               clk,
  input               resetn
);
  wire       [41:0]   _zz_x_mult_0;
  wire       [41:0]   _zz_x_mult_1;
  wire       [41:0]   _zz_x_mult_2;
  wire       [41:0]   _zz_x_mult_3;
  wire       [28:0]   _zz_x_sum;
  wire       [28:0]   _zz_x_sum_1;
  wire       [28:0]   _zz_x_sum_2;
  wire       [28:0]   _zz_x_sum_3;
  wire       [41:0]   _zz_y_mult_1;
  wire       [41:0]   _zz_y_mult_2;
  wire       [41:0]   _zz_y_mult_3;
  wire       [41:0]   _zz_y_mult_0;
  wire       [28:0]   _zz_y_sum;
  wire       [28:0]   _zz_y_sum_1;
  wire       [12:0]   coff_x_mem_0;
  wire       [12:0]   coff_x_mem_1;
  wire       [12:0]   coff_x_mem_2;
  wire       [12:0]   coff_x_mem_3;
  wire       [12:0]   coff_y_mem_0;
  wire       [12:0]   coff_y_mem_1;
  wire       [12:0]   coff_y_mem_2;
  wire       [12:0]   coff_y_mem_3;
  reg        [15:0]   raw_data_buf;
  reg                 raw_data_valid_1;
  reg        [28:0]   raw_data_delay_vec_0;
  reg        [28:0]   raw_data_delay_vec_1;
  reg        [28:0]   raw_data_delay_vec_2;
  reg        [28:0]   raw_data_delay_vec_3;
  wire       [28:0]   x_mult_0;
  wire       [28:0]   x_mult_1;
  wire       [28:0]   x_mult_2;
  wire       [28:0]   x_mult_3;
  wire       [28:0]   x_sum;
  wire       [28:0]   y_mult_0;
  wire       [28:0]   y_mult_1;
  wire       [28:0]   y_mult_2;
  wire       [28:0]   y_mult_3;
  wire       [28:0]   y_sum;

  assign _zz_x_mult_0 = ($signed(raw_data_delay_vec_0) * $signed(coff_x_mem_0));
  assign _zz_x_mult_1 = ($signed(raw_data_delay_vec_1) * $signed(coff_x_mem_1));
  assign _zz_x_mult_2 = ($signed(raw_data_delay_vec_2) * $signed(coff_x_mem_2));
  assign _zz_x_mult_3 = ($signed(raw_data_delay_vec_3) * $signed(coff_x_mem_3));
  assign _zz_x_sum = ($signed(_zz_x_sum_1) + $signed(x_mult_3));
  assign _zz_x_sum_1 = ($signed(_zz_x_sum_2) + $signed(x_mult_2));
  assign _zz_x_sum_2 = ($signed(x_mult_0) + $signed(x_mult_1));
  assign _zz_x_sum_3 = {{13{raw_data_buf[15]}}, raw_data_buf};
  assign _zz_y_mult_1 = ($signed(raw_data_delay_vec_1) * $signed(coff_y_mem_1));
  assign _zz_y_mult_2 = ($signed(raw_data_delay_vec_2) * $signed(coff_y_mem_2));
  assign _zz_y_mult_3 = ($signed(raw_data_delay_vec_3) * $signed(coff_y_mem_3));
  assign _zz_y_mult_0 = ($signed(coff_y_mem_0) * $signed(x_sum));
  assign _zz_y_sum = ($signed(_zz_y_sum_1) + $signed(y_mult_2));
  assign _zz_y_sum_1 = ($signed(y_mult_0) + $signed(y_mult_1));
  assign coff_x_mem_0 = 13'h0003;
  assign coff_x_mem_1 = 13'h0002;
  assign coff_x_mem_2 = 13'h0002;
  assign coff_x_mem_3 = 13'h0003;
  assign coff_y_mem_0 = 13'h0400;
  assign coff_y_mem_1 = 13'h15d4;
  assign coff_y_mem_2 = 13'h08bd;
  assign coff_y_mem_3 = 13'h1d79;
  assign x_mult_0 = _zz_x_mult_0[28:0];
  assign x_mult_1 = _zz_x_mult_1[28:0];
  assign x_mult_2 = _zz_x_mult_2[28:0];
  assign x_mult_3 = _zz_x_mult_3[28:0];
  assign x_sum = ($signed(_zz_x_sum) + $signed(_zz_x_sum_3));
  assign y_mult_1 = _zz_y_mult_1[28:0];
  assign y_mult_2 = _zz_y_mult_2[28:0];
  assign y_mult_3 = _zz_y_mult_3[28:0];
  assign y_mult_0 = _zz_y_mult_0[28:0];
  assign y_sum = ($signed(_zz_y_sum) + $signed(y_mult_3));
  assign filtered_data_valid = raw_data_valid_1;
  assign filtered_data_payload = y_sum;
  always @(posedge clk) begin
    if(!resetn) begin
      raw_data_buf <= 16'h0;
      raw_data_valid_1 <= 1'b0;
    end else begin
      raw_data_buf <= raw_data_payload;
      raw_data_valid_1 <= raw_data_valid;
    end
  end

  always @(posedge clk) begin
    if(clc) begin
      raw_data_delay_vec_0 <= 29'h0;
      raw_data_delay_vec_1 <= 29'h0;
      raw_data_delay_vec_2 <= 29'h0;
      raw_data_delay_vec_3 <= 29'h0;
    end else begin
      if(raw_data_valid_1) begin
        raw_data_delay_vec_1 <= raw_data_delay_vec_0;
        raw_data_delay_vec_2 <= raw_data_delay_vec_1;
        raw_data_delay_vec_3 <= raw_data_delay_vec_2;
        raw_data_delay_vec_0 <= x_sum;
      end
    end
  end


endmodule
