// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : CICComb
// Git hash  : 41d71cf9ab449e73a475f6b0f32b020b0dbe98fe

`timescale 1ns/1ps 

module CICComb (
  input               raw_data_valid,
  input      [20:0]   raw_data_payload,
  output              result_data_valid,
  output     [16:0]   result_data_payload,
  input               clk,
  input               reset
);

  wire       [16:0]   internal_data_vec_0;
  wire       [16:0]   internal_data_vec_1;
  wire       [16:0]   internal_data_vec_2;
  reg        [16:0]   delay_data_vec_0;
  reg        [16:0]   delay_data_vec_1;
  reg        [16:0]   delay_data_vec_2;
  reg        [16:0]   pipe_data_vec_0;
  reg        [16:0]   pipe_data_vec_1;
  reg        [16:0]   pipe_data_vec_2;
  reg        [16:0]   result_data_payload_1;
  reg                 result_data_valid_1;

  assign internal_data_vec_0 = ($signed(pipe_data_vec_0) - $signed(delay_data_vec_0));
  assign internal_data_vec_1 = ($signed(pipe_data_vec_1) - $signed(delay_data_vec_1));
  assign internal_data_vec_2 = ($signed(pipe_data_vec_2) - $signed(delay_data_vec_2));
  assign result_data_valid = result_data_valid_1;
  assign result_data_payload = result_data_payload_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      delay_data_vec_0 <= 17'h0;
      delay_data_vec_1 <= 17'h0;
      delay_data_vec_2 <= 17'h0;
      pipe_data_vec_0 <= 17'h0;
      pipe_data_vec_1 <= 17'h0;
      pipe_data_vec_2 <= 17'h0;
      result_data_payload_1 <= 17'h0;
      result_data_valid_1 <= 1'b0;
    end else begin
      if(raw_data_valid) begin
        delay_data_vec_0 <= pipe_data_vec_0;
        pipe_data_vec_0 <= raw_data_payload[16:0];
      end
      if(raw_data_valid) begin
        delay_data_vec_1 <= pipe_data_vec_1;
        pipe_data_vec_1 <= internal_data_vec_0;
      end
      if(raw_data_valid) begin
        delay_data_vec_2 <= pipe_data_vec_2;
        pipe_data_vec_2 <= internal_data_vec_1;
      end
      if(raw_data_valid) begin
        result_data_valid_1 <= 1'b1;
        result_data_payload_1 <= internal_data_vec_2;
      end else begin
        result_data_valid_1 <= 1'b0;
      end
    end
  end


endmodule
