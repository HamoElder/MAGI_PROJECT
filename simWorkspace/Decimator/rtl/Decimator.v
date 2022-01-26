// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Decimator
// Git hash  : b8bc632afebda2199fd2f2f17fdc0daeea256ecc



module Decimator (
  input               in_valid,
  input      [11:0]   in_payload,
  output              out_valid,
  output     [11:0]   out_payload,
  input               clk,
  input               reset
);
  wire       [2:0]    _zz_cnt;
  wire       [2:0]    cntDataType;
  reg        [2:0]    cnt;
  reg        [11:0]   out_data;
  reg                 out_valid_1;
  wire                when_Decimator_l22;

  assign _zz_cnt = (cnt + 3'b001);
  assign when_Decimator_l22 = (cnt == 3'b100);
  assign out_payload = out_data;
  assign out_valid = out_valid_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 3'b000;
      out_valid_1 <= 1'b0;
    end else begin
      if(in_valid) begin
        cnt <= ((cnt == 3'b100) ? 3'b000 : _zz_cnt);
      end
      if(in_valid) begin
        if(when_Decimator_l22) begin
          out_valid_1 <= 1'b1;
        end else begin
          out_valid_1 <= 1'b0;
        end
      end else begin
        out_valid_1 <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(in_valid) begin
      if(when_Decimator_l22) begin
        out_data <= in_payload;
      end
    end
  end


endmodule
