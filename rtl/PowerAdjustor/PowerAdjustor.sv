// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : PowerAdjustor
// Git hash  : 41d71cf9ab449e73a475f6b0f32b020b0dbe98fe

`timescale 1ns/1ps 

module PowerAdjustor (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_cha_i,
  input      [15:0]   raw_data_payload_cha_q,
  output reg          adjusted_data_valid,
  output     [15:0]   adjusted_data_payload_cha_i,
  output     [15:0]   adjusted_data_payload_cha_q,
  input      [1:0]    shift_bias,
  input               shift_dir,
  input               clk,
  input               resetn
);

  reg        [15:0]   shifted_data_cha_i;
  reg        [15:0]   shifted_data_cha_q;

  always @(*) begin
    if(raw_data_valid) begin
      adjusted_data_valid = 1'b1;
    end else begin
      adjusted_data_valid = 1'b0;
    end
  end

  assign adjusted_data_payload_cha_i = shifted_data_cha_i;
  assign adjusted_data_payload_cha_q = shifted_data_cha_q;
  always @(posedge clk) begin
    if(raw_data_valid) begin
      if(shift_dir) begin
        shifted_data_cha_i <= ($signed(raw_data_payload_cha_i) >>> shift_bias);
        shifted_data_cha_q <= ($signed(raw_data_payload_cha_q) >>> shift_bias);
      end else begin
        shifted_data_cha_i <= ($signed(raw_data_payload_cha_i) <<< shift_bias);
        shifted_data_cha_q <= ($signed(raw_data_payload_cha_q) <<< shift_bias);
      end
    end
  end


endmodule
