// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : BitonicMerge
// Git hash  : 3719e1498550fcb5698cad1a7a1f3542c14ddf12



module BitonicMerge (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [15:0]   raw_data_payload_0,
  input      [15:0]   raw_data_payload_1,
  input      [15:0]   raw_data_payload_2,
  input      [15:0]   raw_data_payload_3,
  input      [15:0]   raw_data_payload_4,
  input      [15:0]   raw_data_payload_5,
  input      [15:0]   raw_data_payload_6,
  input      [15:0]   raw_data_payload_7,
  input      [15:0]   raw_data_payload_8,
  input      [15:0]   raw_data_payload_9,
  input      [15:0]   raw_data_payload_10,
  input      [15:0]   raw_data_payload_11,
  input      [15:0]   raw_data_payload_12,
  input      [15:0]   raw_data_payload_13,
  input      [15:0]   raw_data_payload_14,
  input      [15:0]   raw_data_payload_15,
  input               clk,
  input               resetn
);
  wire       [4:0]    _zz_cnt;
  wire       [3:0]    _zz_cnt_1;
  reg        [3:0]    cnt;
  wire                raw_data_fire;
  wire                when_BitonicMerge_l21;
  reg        [15:0]   reg_data_buf_0;
  reg        [15:0]   reg_data_buf_1;
  reg        [15:0]   reg_data_buf_2;
  reg        [15:0]   reg_data_buf_3;
  reg        [15:0]   reg_data_buf_4;
  reg        [15:0]   reg_data_buf_5;
  reg        [15:0]   reg_data_buf_6;
  reg        [15:0]   reg_data_buf_7;
  reg        [15:0]   reg_data_buf_8;
  reg        [15:0]   reg_data_buf_9;
  reg        [15:0]   reg_data_buf_10;
  reg        [15:0]   reg_data_buf_11;
  reg        [15:0]   reg_data_buf_12;
  reg        [15:0]   reg_data_buf_13;
  reg        [15:0]   reg_data_buf_14;
  reg        [15:0]   reg_data_buf_15;
  wire                raw_data_fire_1;

  assign _zz_cnt = {1'd0, cnt};
  assign _zz_cnt_1 = (cnt + 4'b0001);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_BitonicMerge_l21 = (raw_data_fire || (4'b0001 <= cnt));
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign raw_data_ready = 1'b1;
  always @(posedge clk) begin
    if(!resetn) begin
      cnt <= 4'b0000;
    end else begin
      if(when_BitonicMerge_l21) begin
        cnt <= ((_zz_cnt == 5'h18) ? 4'b0000 : _zz_cnt_1);
      end
    end
  end

  always @(posedge clk) begin
    if(raw_data_fire_1) begin
      reg_data_buf_0 <= raw_data_payload_0;
      reg_data_buf_1 <= raw_data_payload_1;
      reg_data_buf_2 <= raw_data_payload_2;
      reg_data_buf_3 <= raw_data_payload_3;
      reg_data_buf_4 <= raw_data_payload_4;
      reg_data_buf_5 <= raw_data_payload_5;
      reg_data_buf_6 <= raw_data_payload_6;
      reg_data_buf_7 <= raw_data_payload_7;
      reg_data_buf_8 <= raw_data_payload_8;
      reg_data_buf_9 <= raw_data_payload_9;
      reg_data_buf_10 <= raw_data_payload_10;
      reg_data_buf_11 <= raw_data_payload_11;
      reg_data_buf_12 <= raw_data_payload_12;
      reg_data_buf_13 <= raw_data_payload_13;
      reg_data_buf_14 <= raw_data_payload_14;
      reg_data_buf_15 <= raw_data_payload_15;
    end
  end


endmodule
