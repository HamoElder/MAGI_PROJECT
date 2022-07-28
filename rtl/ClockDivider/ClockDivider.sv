// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : ClockDivider
// Git hash  : 920dbf493607d1042bb9f2de5fdbd11a943a39c7

`timescale 1ns/1ps

module ClockDivider (
  input               enable,
  output              clk_out,
  input               clk,
  input               resetn
);

  wire       [2:0]    _zz__zz_when_ClockDivider_l24;
  reg        [2:0]    _zz_when_ClockDivider_l24;
  reg                 _zz_clk_out;
  wire                when_ClockDivider_l24;

  assign _zz__zz_when_ClockDivider_l24 = (_zz_when_ClockDivider_l24 + 3'b001);
  assign when_ClockDivider_l24 = (_zz_when_ClockDivider_l24 == 3'b011);
  assign clk_out = _zz_clk_out;
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_when_ClockDivider_l24 <= 3'b000;
      _zz_clk_out <= 1'b0;
    end else begin
      if(enable) begin
        _zz_when_ClockDivider_l24 <= ((_zz_when_ClockDivider_l24 == 3'b011) ? 3'b000 : _zz__zz_when_ClockDivider_l24);
        if(when_ClockDivider_l24) begin
          _zz_clk_out <= (! _zz_clk_out);
        end
      end
    end
  end


endmodule
