// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : DePuncturing
// Git hash  : 239a9622aabba6923ac19653594c433e3c5701f8



module DePuncturing (
  input      [0:0]    dummy_bits,
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output              de_punched_data_valid,
  input               de_punched_data_ready,
  output              de_punched_data_payload_last,
  output     [1:0]    de_punched_data_payload_fragment,
  input               clk,
  input               reset
);
  wire       [0:0]    _zz_mask_cnt;
  wire       [1:0]    mask_rom_0;
  reg        [0:0]    mask_cnt;
  reg        [3:0]    cnt;
  reg        [15:0]   raw_data_fragment;
  reg                 raw_data_last;
  wire                when_DePuncturing_l43;
  wire       [1:0]    switch_Misc_l200;
  reg        [15:0]   _zz_raw_data_fragment;
  wire                raw_data_fire;
  wire                de_punched_data_fire;
  wire       [1:0]    switch_Misc_l200_1;
  reg        [1:0]    _zz_de_punched_data_payload_fragment;

  assign _zz_mask_cnt = (mask_cnt + 1'b1);
  assign mask_rom_0 = 2'b11;
  assign when_DePuncturing_l43 = (raw_data_last && (cnt == 4'b0000));
  assign switch_Misc_l200 = mask_rom_0;
  always @(*) begin
    case(switch_Misc_l200)
      2'b11 : begin
        _zz_raw_data_fragment = (raw_data_fragment >>> 2);
      end
      default : begin
        _zz_raw_data_fragment = raw_data_fragment;
      end
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign de_punched_data_fire = (de_punched_data_valid && de_punched_data_ready);
  assign switch_Misc_l200_1 = mask_rom_0;
  always @(*) begin
    case(switch_Misc_l200_1)
      2'b11 : begin
        _zz_de_punched_data_payload_fragment = {raw_data_fragment[1 : 1],raw_data_fragment[0 : 0]};
      end
      default : begin
        _zz_de_punched_data_payload_fragment = 2'b00;
      end
    endcase
  end

  assign de_punched_data_payload_fragment = _zz_de_punched_data_payload_fragment;
  assign de_punched_data_valid = (cnt != 4'b0000);
  assign de_punched_data_payload_last = ((cnt == 4'b0001) && raw_data_last);
  assign raw_data_ready = ((cnt == 4'b0000) && (! raw_data_last));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      mask_cnt <= 1'b0;
      cnt <= 4'b0000;
      raw_data_last <= 1'b0;
    end else begin
      if(when_DePuncturing_l43) begin
        mask_cnt <= 1'b0;
        cnt <= 4'b0000;
        raw_data_last <= 1'b0;
      end else begin
        if(raw_data_fire) begin
          raw_data_last <= raw_data_payload_last;
          cnt <= 4'b1000;
        end else begin
          if(de_punched_data_fire) begin
            cnt <= (cnt - 4'b0001);
            mask_cnt <= ((mask_cnt == 1'b0) ? 1'b0 : _zz_mask_cnt);
          end
        end
      end
    end
  end

  always @(posedge clk) begin
    if(!when_DePuncturing_l43) begin
      if(raw_data_fire) begin
        raw_data_fragment <= raw_data_payload_fragment;
      end else begin
        if(de_punched_data_fire) begin
          raw_data_fragment <= _zz_raw_data_fragment;
        end
      end
    end
  end


endmodule
