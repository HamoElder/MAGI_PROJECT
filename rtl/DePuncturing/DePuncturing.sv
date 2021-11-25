// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : DePuncturing
// Git hash  : bab96f7394a94536912c9e659c120f47ad131a57



module DePuncturing (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [11:0]   raw_data_payload_fragment,
  output              de_punched_data_valid,
  input               de_punched_data_ready,
  output              de_punched_data_payload_last,
  output     [1:0]    de_punched_data_payload_fragment_data,
  output     [1:0]    de_punched_data_payload_fragment_indicate,
  input               clk,
  input               resetn
);
  reg        [1:0]    _zz_switch_Misc_l200;
  wire       [2:0]    _zz_switch_Misc_l200_1;
  wire       [3:0]    _zz_mask_cnt;
  reg        [1:0]    _zz_switch_Misc_l200_1_1;
  wire       [2:0]    _zz_switch_Misc_l200_1_2;
  reg        [1:0]    _zz_de_punched_data_payload_fragment_indicate;
  wire       [2:0]    _zz_de_punched_data_payload_fragment_indicate_1;
  wire       [0:0]    dummy_bits;
  wire       [1:0]    mask_rom_0;
  wire       [1:0]    mask_rom_1;
  wire       [1:0]    mask_rom_2;
  wire       [1:0]    mask_rom_3;
  wire       [1:0]    mask_rom_4;
  wire       [1:0]    mask_rom_5;
  wire       [1:0]    mask_rom_6;
  wire       [1:0]    mask_rom_7;
  reg        [3:0]    mask_cnt;
  reg        [3:0]    cnt;
  reg        [11:0]   raw_data_fragment;
  reg                 raw_data_last;
  wire                when_DePuncturing_l54;
  wire       [1:0]    switch_Misc_l200;
  reg        [11:0]   _zz_raw_data_fragment;
  wire                raw_data_fire;
  wire                de_punched_data_fire;
  wire       [1:0]    switch_Misc_l200_1;
  wire       [0:0]    _zz_de_punched_data_payload_fragment_data;
  reg        [1:0]    _zz_de_punched_data_payload_fragment_data_1;

  assign _zz_switch_Misc_l200_1 = mask_cnt[2:0];
  assign _zz_mask_cnt = (mask_cnt + 4'b0001);
  assign _zz_switch_Misc_l200_1_2 = mask_cnt[2:0];
  assign _zz_de_punched_data_payload_fragment_indicate_1 = mask_cnt[2:0];
  always @(*) begin
    case(_zz_switch_Misc_l200_1)
      3'b000 : begin
        _zz_switch_Misc_l200 = mask_rom_0;
      end
      3'b001 : begin
        _zz_switch_Misc_l200 = mask_rom_1;
      end
      3'b010 : begin
        _zz_switch_Misc_l200 = mask_rom_2;
      end
      3'b011 : begin
        _zz_switch_Misc_l200 = mask_rom_3;
      end
      3'b100 : begin
        _zz_switch_Misc_l200 = mask_rom_4;
      end
      3'b101 : begin
        _zz_switch_Misc_l200 = mask_rom_5;
      end
      3'b110 : begin
        _zz_switch_Misc_l200 = mask_rom_6;
      end
      default : begin
        _zz_switch_Misc_l200 = mask_rom_7;
      end
    endcase
  end

  always @(*) begin
    case(_zz_switch_Misc_l200_1_2)
      3'b000 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_0;
      end
      3'b001 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_1;
      end
      3'b010 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_2;
      end
      3'b011 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_3;
      end
      3'b100 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_4;
      end
      3'b101 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_5;
      end
      3'b110 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_6;
      end
      default : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_7;
      end
    endcase
  end

  always @(*) begin
    case(_zz_de_punched_data_payload_fragment_indicate_1)
      3'b000 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_0;
      end
      3'b001 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_1;
      end
      3'b010 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_2;
      end
      3'b011 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_3;
      end
      3'b100 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_4;
      end
      3'b101 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_5;
      end
      3'b110 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_6;
      end
      default : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_7;
      end
    endcase
  end

  assign dummy_bits = 1'b0;
  assign mask_rom_0 = 2'b11;
  assign mask_rom_1 = 2'b01;
  assign mask_rom_2 = 2'b11;
  assign mask_rom_3 = 2'b01;
  assign mask_rom_4 = 2'b11;
  assign mask_rom_5 = 2'b01;
  assign mask_rom_6 = 2'b11;
  assign mask_rom_7 = 2'b01;
  assign when_DePuncturing_l54 = (raw_data_last && (cnt == 4'b0000));
  assign switch_Misc_l200 = _zz_switch_Misc_l200;
  always @(*) begin
    case(switch_Misc_l200)
      2'b11 : begin
        _zz_raw_data_fragment = (raw_data_fragment >>> 2);
      end
      2'b01 : begin
        _zz_raw_data_fragment = (raw_data_fragment >>> 1);
      end
      default : begin
        _zz_raw_data_fragment = raw_data_fragment;
      end
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign de_punched_data_fire = (de_punched_data_valid && de_punched_data_ready);
  assign switch_Misc_l200_1 = _zz_switch_Misc_l200_1_1;
  assign _zz_de_punched_data_payload_fragment_data = raw_data_fragment[0 : 0];
  always @(*) begin
    case(switch_Misc_l200_1)
      2'b11 : begin
        _zz_de_punched_data_payload_fragment_data_1 = {raw_data_fragment[1 : 1],_zz_de_punched_data_payload_fragment_data};
      end
      2'b01 : begin
        _zz_de_punched_data_payload_fragment_data_1 = {dummy_bits,_zz_de_punched_data_payload_fragment_data};
      end
      default : begin
        _zz_de_punched_data_payload_fragment_data_1 = 2'b00;
      end
    endcase
  end

  assign de_punched_data_payload_fragment_data = _zz_de_punched_data_payload_fragment_data_1;
  assign de_punched_data_payload_fragment_indicate = _zz_de_punched_data_payload_fragment_indicate;
  assign de_punched_data_valid = (cnt != 4'b0000);
  assign de_punched_data_payload_last = ((cnt == 4'b0001) && raw_data_last);
  assign raw_data_ready = ((cnt == 4'b0000) && (! raw_data_last));
  always @(posedge clk) begin
    if(!resetn) begin
      mask_cnt <= 4'b0000;
      cnt <= 4'b0000;
      raw_data_last <= 1'b0;
    end else begin
      if(when_DePuncturing_l54) begin
        mask_cnt <= 4'b0000;
        cnt <= 4'b0000;
        raw_data_last <= 1'b0;
      end else begin
        if(raw_data_fire) begin
          raw_data_last <= raw_data_payload_last;
          cnt <= 4'b1000;
        end else begin
          if(de_punched_data_fire) begin
            cnt <= (cnt - 4'b0001);
            mask_cnt <= ((mask_cnt == 4'b0111) ? 4'b0000 : _zz_mask_cnt);
          end
        end
      end
    end
  end

  always @(posedge clk) begin
    if(!when_DePuncturing_l54) begin
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
