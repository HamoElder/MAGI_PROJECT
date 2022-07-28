// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : ClockDivider
// Git hash  : 920dbf493607d1042bb9f2de5fdbd11a943a39c7

`timescale 1ns/1ps

module ClockDivider (
  input               enable,
  output              clk_out,
  input               clk,
  input               reset
);

  wire       [3:0]    _zz__zz_clk_out;
  wire       [3:0]    _zz__zz_clk_out_1;
  wire       [6:0]    _zz__zz_when_ClockDivider_l101;
  reg        [3:0]    _zz_clk_out;
  reg        [6:0]    _zz_when_ClockDivider_l101;
  reg                 when_ClockDivider_l101;
  reg                 _zz_clk_out_1;

  assign _zz__zz_clk_out = (_zz_clk_out + 4'b0001);
  assign _zz__zz_clk_out_1 = (_zz_clk_out + 4'b0001);
  assign _zz__zz_when_ClockDivider_l101 = (_zz_when_ClockDivider_l101 + 7'h01);
  assign clk_out = _zz_clk_out_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_clk_out <= 4'b0000;
      _zz_when_ClockDivider_l101 <= 7'h0;
      when_ClockDivider_l101 <= 1'b1;
      _zz_clk_out_1 <= 1'b0;
    end else begin
      if(enable) begin
        if(when_ClockDivider_l101) begin
          _zz_clk_out <= ((_zz_clk_out == 4'b0111) ? 4'b0000 : _zz__zz_clk_out);
        end else begin
          _zz_clk_out <= ((_zz_clk_out == 4'b1000) ? 4'b0000 : _zz__zz_clk_out_1);
        end
        _zz_when_ClockDivider_l101 <= ((_zz_when_ClockDivider_l101 == 7'h56) ? 7'h0 : _zz__zz_when_ClockDivider_l101);
        when_ClockDivider_l101 <= (((_zz_when_ClockDivider_l101 == 7'h56) || (_zz_when_ClockDivider_l101 == 7'h17)) ? (! when_ClockDivider_l101) : when_ClockDivider_l101);
        if(when_ClockDivider_l101) begin
          _zz_clk_out_1 <= (_zz_clk_out <= 4'b0011);
        end else begin
          _zz_clk_out_1 <= (_zz_clk_out <= 4'b0011);
        end
      end
    end
  end


endmodule
