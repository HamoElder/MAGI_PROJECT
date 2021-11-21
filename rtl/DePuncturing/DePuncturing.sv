// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : DePuncturing
// Git hash  : 20f2bbecaafb9bca8a0b2f811067904083589e4b



module DePuncturing (
  input               clc,
  input      [0:0]    dummy_bits,
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [31:0]   raw_data_payload_fragment,
  output              de_punched_data_valid,
  input               de_punched_data_ready,
  output              de_punched_data_payload_last,
  output     [1:0]    de_punched_data_payload_fragment,
  input               clk,
  input               resetn
);
  wire       [1:0]    mask_rom_0;
  reg        [4:0]    cnt;
  reg        [31:0]   raw_data_fragment;
  reg                 raw_data_last;
  wire       [1:0]    switch_Misc_l200;
  reg        [31:0]   _zz_raw_data_fragment;
  wire                raw_data_fire;
  wire                de_punched_data_fire;
  reg        [1:0]    _zz_de_punched_data_payload_fragment;

  assign mask_rom_0 = 2'b11;
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
  always @(*) begin
    case(switch_Misc_l200)
      2'b11 : begin
        _zz_de_punched_data_payload_fragment = {raw_data_fragment[1 : 1],raw_data_fragment[0 : 0]};
      end
      default : begin
        _zz_de_punched_data_payload_fragment = 2'b00;
      end
    endcase
  end

  assign de_punched_data_payload_fragment = _zz_de_punched_data_payload_fragment;
  assign de_punched_data_valid = ((cnt != 5'h0) && (! clc));
  assign de_punched_data_payload_last = ((cnt == 5'h01) && raw_data_last);
  assign raw_data_ready = ((cnt == 5'h0) && (! clc));
  always @(posedge clk) begin
    if(!resetn) begin
      cnt <= 5'h0;
      raw_data_last <= 1'b0;
    end else begin
      if(clc) begin
        cnt <= 5'h0;
        raw_data_last <= 1'b0;
      end else begin
        if(raw_data_fire) begin
          raw_data_last <= raw_data_payload_last;
          cnt <= 5'h10;
        end else begin
          if(de_punched_data_fire) begin
            cnt <= (cnt - 5'h01);
          end
        end
      end
    end
  end

  always @(posedge clk) begin
    if(!clc) begin
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
