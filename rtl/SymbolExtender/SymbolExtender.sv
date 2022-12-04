// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : SymbolExtender
// Git hash  : 43464962f09f36778ab2e1388e0f698ce817f0a6

`timescale 1ns/1ps

module SymbolExtender (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [0:0]    result_data_payload_fragment,
  input               clk,
  input               resetn
);

  wire       [1:0]    _zz_cnt;
  reg        [1:0]    cnt;
  reg                 raw_last;
  wire                raw_data_fire;
  wire                result_data_fire;

  assign _zz_cnt = (cnt + 2'b01);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign raw_data_ready = (result_data_ready && (cnt == 2'b00));
  assign result_data_valid = (raw_data_valid || (cnt != 2'b00));
  assign result_data_payload_last = (raw_last && (cnt == 2'b11));
  assign result_data_payload_fragment = ((cnt == 2'b00) ? raw_data_payload_fragment : 1'b0);
  always @(posedge clk) begin
    if(!resetn) begin
      cnt <= 2'b00;
      raw_last <= 1'b0;
    end else begin
      if(raw_data_fire) begin
        raw_last <= raw_data_payload_last;
      end
      if(result_data_fire) begin
        cnt <= ((cnt == 2'b11) ? 2'b00 : _zz_cnt);
      end
    end
  end


endmodule
