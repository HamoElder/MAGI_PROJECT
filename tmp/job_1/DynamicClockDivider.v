// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : DynamicClockDivider
// Git hash  : 920dbf493607d1042bb9f2de5fdbd11a943a39c7

`timescale 1ns/1ps

module DynamicClockDivider (
  input               enable,
  input      [3:0]    divisor,
  output reg          clk_out,
  input               clk,
  input               reset
);

  wire       [3:0]    _zz_pos_cnt;
  wire       [3:0]    _zz_pos_cnt_1;
  wire       [3:0]    _zz_when_DynamicClockDivider_l19;
  wire       [3:0]    _zz_when_DynamicClockDivider_l19_1;
  wire       [2:0]    _zz_when_DynamicClockDivider_l19_2;
  wire       [3:0]    _zz_when_DynamicClockDivider_l19_3;
  wire       [3:0]    _zz_pos_cnt_2;
  wire       [2:0]    _zz_pos_cnt_3;
  wire       [2:0]    _zz_pos_cnt_4;
  wire       [3:0]    _zz_pos_cnt_5;
  wire       [3:0]    _zz_when_DynamicClockDivider_l24;
  wire       [2:0]    _zz_when_DynamicClockDivider_l24_1;
  wire       [2:0]    _zz_when_DynamicClockDivider_l24_2;
  wire       [3:0]    _zz_negEdgeClockArea_neg_cnt;
  wire       [3:0]    _zz_negEdgeClockArea_neg_cnt_1;
  wire       [3:0]    _zz_when_DynamicClockDivider_l47;
  wire       [3:0]    _zz_when_DynamicClockDivider_l47_1;
  wire       [2:0]    _zz_when_DynamicClockDivider_l47_2;
  wire       [3:0]    _zz_when_DynamicClockDivider_l47_3;
  reg        [3:0]    pos_cnt;
  reg                 clk_out_buf;
  reg                 clk_pos_buf;
  wire                when_DynamicClockDivider_l17;
  wire                when_DynamicClockDivider_l19;
  wire                when_DynamicClockDivider_l24;
  reg                 negEdgeClockArea_clk_neg_buf;
  reg        [3:0]    negEdgeClockArea_neg_cnt;
  wire                when_DynamicClockDivider_l47;
  wire                when_DynamicClockDivider_l55;
  wire                when_DynamicClockDivider_l57;

  assign _zz_pos_cnt = (divisor - 4'b0001);
  assign _zz_pos_cnt_1 = (pos_cnt + 4'b0001);
  assign _zz_when_DynamicClockDivider_l19 = (divisor - 4'b0001);
  assign _zz_when_DynamicClockDivider_l19_2 = (_zz_when_DynamicClockDivider_l19_3 >>> 1);
  assign _zz_when_DynamicClockDivider_l19_1 = {1'd0, _zz_when_DynamicClockDivider_l19_2};
  assign _zz_when_DynamicClockDivider_l19_3 = (divisor - 4'b0001);
  assign _zz_pos_cnt_3 = (_zz_pos_cnt_4 - 3'b001);
  assign _zz_pos_cnt_2 = {1'd0, _zz_pos_cnt_3};
  assign _zz_pos_cnt_4 = (divisor >>> 1);
  assign _zz_pos_cnt_5 = (pos_cnt + 4'b0001);
  assign _zz_when_DynamicClockDivider_l24_1 = (_zz_when_DynamicClockDivider_l24_2 - 3'b001);
  assign _zz_when_DynamicClockDivider_l24 = {1'd0, _zz_when_DynamicClockDivider_l24_1};
  assign _zz_when_DynamicClockDivider_l24_2 = (divisor >>> 1);
  assign _zz_negEdgeClockArea_neg_cnt = (divisor - 4'b0001);
  assign _zz_negEdgeClockArea_neg_cnt_1 = (negEdgeClockArea_neg_cnt + 4'b0001);
  assign _zz_when_DynamicClockDivider_l47 = (divisor - 4'b0001);
  assign _zz_when_DynamicClockDivider_l47_2 = (_zz_when_DynamicClockDivider_l47_3 >>> 1);
  assign _zz_when_DynamicClockDivider_l47_1 = {1'd0, _zz_when_DynamicClockDivider_l47_2};
  assign _zz_when_DynamicClockDivider_l47_3 = (divisor - 4'b0001);
  assign when_DynamicClockDivider_l17 = divisor[0];
  assign when_DynamicClockDivider_l19 = ((pos_cnt == _zz_when_DynamicClockDivider_l19) || (pos_cnt == _zz_when_DynamicClockDivider_l19_1));
  assign when_DynamicClockDivider_l24 = (pos_cnt == _zz_when_DynamicClockDivider_l24);
  assign when_DynamicClockDivider_l47 = ((negEdgeClockArea_neg_cnt == _zz_when_DynamicClockDivider_l47) || (negEdgeClockArea_neg_cnt == _zz_when_DynamicClockDivider_l47_1));
  assign when_DynamicClockDivider_l55 = (divisor == 4'b0000);
  always @(*) begin
    if(when_DynamicClockDivider_l55) begin
      clk_out = 1'b0;
    end else begin
      if(when_DynamicClockDivider_l57) begin
        clk_out = (clk_pos_buf || negEdgeClockArea_clk_neg_buf);
      end else begin
        clk_out = clk_out_buf;
      end
    end
  end

  assign when_DynamicClockDivider_l57 = divisor[0];
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pos_cnt <= 4'b0000;
      clk_out_buf <= 1'b0;
      clk_pos_buf <= 1'b0;
    end else begin
      if(enable) begin
        if(when_DynamicClockDivider_l17) begin
          pos_cnt <= ((pos_cnt == _zz_pos_cnt) ? 4'b0000 : _zz_pos_cnt_1);
          if(when_DynamicClockDivider_l19) begin
            clk_pos_buf <= (! clk_pos_buf);
          end
        end else begin
          pos_cnt <= ((pos_cnt == _zz_pos_cnt_2) ? 4'b0000 : _zz_pos_cnt_5);
          if(when_DynamicClockDivider_l24) begin
            clk_out_buf <= (! clk_out_buf);
          end
        end
      end else begin
        pos_cnt <= 4'b0000;
        clk_out_buf <= 1'b0;
        clk_pos_buf <= 1'b0;
      end
    end
  end

  always @(negedge clk or posedge reset) begin
    if(reset) begin
      negEdgeClockArea_clk_neg_buf <= 1'b0;
      negEdgeClockArea_neg_cnt <= 4'b0000;
    end else begin
      if(enable) begin
        negEdgeClockArea_neg_cnt <= ((negEdgeClockArea_neg_cnt == _zz_negEdgeClockArea_neg_cnt) ? 4'b0000 : _zz_negEdgeClockArea_neg_cnt_1);
        if(when_DynamicClockDivider_l47) begin
          negEdgeClockArea_clk_neg_buf <= (! negEdgeClockArea_clk_neg_buf);
        end
      end else begin
        negEdgeClockArea_neg_cnt <= 4'b0000;
        negEdgeClockArea_clk_neg_buf <= 1'b0;
      end
    end
  end


endmodule
