// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : BitonicMerge
// Git hash  : e86c2de0f4bf47259102e700592686340712fdf0



module BitonicMerge (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [15:0]   raw_data_payload
);
  wire       [15:0]   out0_buf_0_data;
  wire       [3:0]    out0_buf_0_idx;
  wire       [15:0]   out0_buf_1_data;
  wire       [3:0]    out0_buf_1_idx;
  wire       [15:0]   out0_buf_2_data;
  wire       [3:0]    out0_buf_2_idx;
  wire       [15:0]   out1_buf_0_data;
  wire       [3:0]    out1_buf_0_idx;
  wire       [15:0]   out1_buf_1_data;
  wire       [3:0]    out1_buf_1_idx;
  wire       [15:0]   out1_buf_2_data;
  wire       [3:0]    out1_buf_2_idx;

  assign raw_data_ready = 1'b1;

endmodule
