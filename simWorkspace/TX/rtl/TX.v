// Generator : SpinalHDL v1.8.0    git head : 4e3563a282582b41f4eaafc503787757251d23ea
// Component : TX
// Git hash  : 17ba3429c74144a7d37c48904a91bdac2e1b784a

`timescale 1ns/1ps

module TX (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [0:0]    result_data_payload_fragment,
  input               block_msg_ctrl_valid,
  output              block_msg_ctrl_ready,
  input      [1:0]    block_msg_ctrl_payload_pkg_type,
  input      [19:0]   block_msg_ctrl_payload_pkg_length,
  input      [15:0]   block_msg_ctrl_payload_rnti_scramble,
  input               clk,
  input               reset
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PTCH = 2'd2;
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;

  wire                tx_crc_extender_raw_data_ready;
  wire                tx_crc_extender_result_data_valid;
  wire                tx_crc_extender_result_data_payload_last;
  wire       [0:0]    tx_crc_extender_result_data_payload_fragment;
  wire                tx_crc_extender_block_msg_ctrl_in_ready;
  wire                tx_crc_extender_block_msg_ctrl_out_valid;
  wire       [1:0]    tx_crc_extender_block_msg_ctrl_out_payload_pkg_type;
  wire       [19:0]   tx_crc_extender_block_msg_ctrl_out_payload_pkg_length;
  wire       [15:0]   tx_crc_extender_block_msg_ctrl_out_payload_rnti_scramble;
  wire                code_block_segment_raw_data_ready;
  wire                code_block_segment_result_data_valid;
  wire                code_block_segment_result_data_payload_last;
  wire       [1:0]    code_block_segment_result_data_payload_fragment;
  wire                code_block_segment_block_msg_ready;
  wire                code_block_segment_segment_msg_valid;
  wire       [12:0]   code_block_segment_segment_msg_payload_segment_length;
  wire       [0:0]    code_block_segment_segment_msg_payload_segment_code_type;
  wire                channel_code_raw_data_ready;
  wire                channel_code_segment_msg_ready;
  wire                channel_code_result_data_valid;
  wire                channel_code_result_data_payload_last;
  wire       [3:0]    channel_code_result_data_payload_fragment;
  wire                channel_code_coded_msg_valid;
  wire       [12:0]   channel_code_coded_msg_payload_segment_length;
  wire       [0:0]    channel_code_coded_msg_payload_segment_code_type;
  wire                rate_match_raw_data_ready;
  wire                rate_match_segment_length_ready;
  wire                rate_match_result_data_valid;
  wire                rate_match_result_data_payload_last;
  wire       [0:0]    rate_match_result_data_payload_fragment;
  `ifndef SYNTHESIS
  reg [31:0] block_msg_ctrl_payload_pkg_type_string;
  `endif


  TxCrcAttachment tx_crc_extender (
    .raw_data_valid                           (raw_data_valid                                                ), //i
    .raw_data_ready                           (tx_crc_extender_raw_data_ready                                ), //o
    .raw_data_payload_last                    (raw_data_payload_last                                         ), //i
    .raw_data_payload_fragment                (raw_data_payload_fragment                                     ), //i
    .result_data_valid                        (tx_crc_extender_result_data_valid                             ), //o
    .result_data_ready                        (code_block_segment_raw_data_ready                             ), //i
    .result_data_payload_last                 (tx_crc_extender_result_data_payload_last                      ), //o
    .result_data_payload_fragment             (tx_crc_extender_result_data_payload_fragment                  ), //o
    .block_msg_ctrl_in_valid                  (block_msg_ctrl_valid                                          ), //i
    .block_msg_ctrl_in_ready                  (tx_crc_extender_block_msg_ctrl_in_ready                       ), //o
    .block_msg_ctrl_in_payload_pkg_type       (block_msg_ctrl_payload_pkg_type[1:0]                          ), //i
    .block_msg_ctrl_in_payload_pkg_length     (block_msg_ctrl_payload_pkg_length[19:0]                       ), //i
    .block_msg_ctrl_in_payload_rnti_scramble  (block_msg_ctrl_payload_rnti_scramble[15:0]                    ), //i
    .block_msg_ctrl_out_valid                 (tx_crc_extender_block_msg_ctrl_out_valid                      ), //o
    .block_msg_ctrl_out_ready                 (code_block_segment_block_msg_ready                            ), //i
    .block_msg_ctrl_out_payload_pkg_type      (tx_crc_extender_block_msg_ctrl_out_payload_pkg_type[1:0]      ), //o
    .block_msg_ctrl_out_payload_pkg_length    (tx_crc_extender_block_msg_ctrl_out_payload_pkg_length[19:0]   ), //o
    .block_msg_ctrl_out_payload_rnti_scramble (tx_crc_extender_block_msg_ctrl_out_payload_rnti_scramble[15:0]), //o
    .clk                                      (clk                                                           ), //i
    .reset                                    (reset                                                         )  //i
  );
  CrcBlockSegmentation code_block_segment (
    .raw_data_valid                        (tx_crc_extender_result_data_valid                             ), //i
    .raw_data_ready                        (code_block_segment_raw_data_ready                             ), //o
    .raw_data_payload_last                 (tx_crc_extender_result_data_payload_last                      ), //i
    .raw_data_payload_fragment             (tx_crc_extender_result_data_payload_fragment                  ), //i
    .result_data_valid                     (code_block_segment_result_data_valid                          ), //o
    .result_data_ready                     (channel_code_raw_data_ready                                   ), //i
    .result_data_payload_last              (code_block_segment_result_data_payload_last                   ), //o
    .result_data_payload_fragment          (code_block_segment_result_data_payload_fragment[1:0]          ), //o
    .block_msg_valid                       (tx_crc_extender_block_msg_ctrl_out_valid                      ), //i
    .block_msg_ready                       (code_block_segment_block_msg_ready                            ), //o
    .block_msg_payload_pkg_type            (tx_crc_extender_block_msg_ctrl_out_payload_pkg_type[1:0]      ), //i
    .block_msg_payload_pkg_length          (tx_crc_extender_block_msg_ctrl_out_payload_pkg_length[19:0]   ), //i
    .block_msg_payload_rnti_scramble       (tx_crc_extender_block_msg_ctrl_out_payload_rnti_scramble[15:0]), //i
    .segment_msg_valid                     (code_block_segment_segment_msg_valid                          ), //o
    .segment_msg_ready                     (channel_code_segment_msg_ready                                ), //i
    .segment_msg_payload_segment_length    (code_block_segment_segment_msg_payload_segment_length[12:0]   ), //o
    .segment_msg_payload_segment_code_type (code_block_segment_segment_msg_payload_segment_code_type      ), //o
    .clk                                   (clk                                                           ), //i
    .reset                                 (reset                                                         )  //i
  );
  ChannelCoding channel_code (
    .raw_data_valid                        (code_block_segment_result_data_valid                       ), //i
    .raw_data_ready                        (channel_code_raw_data_ready                                ), //o
    .raw_data_payload_last                 (code_block_segment_result_data_payload_last                ), //i
    .raw_data_payload_fragment             (code_block_segment_result_data_payload_fragment[1:0]       ), //i
    .segment_msg_valid                     (code_block_segment_segment_msg_valid                       ), //i
    .segment_msg_ready                     (channel_code_segment_msg_ready                             ), //o
    .segment_msg_payload_segment_length    (code_block_segment_segment_msg_payload_segment_length[12:0]), //i
    .segment_msg_payload_segment_code_type (code_block_segment_segment_msg_payload_segment_code_type   ), //i
    .result_data_valid                     (channel_code_result_data_valid                             ), //o
    .result_data_ready                     (rate_match_raw_data_ready                                  ), //i
    .result_data_payload_last              (channel_code_result_data_payload_last                      ), //o
    .result_data_payload_fragment          (channel_code_result_data_payload_fragment[3:0]             ), //o
    .coded_msg_valid                       (channel_code_coded_msg_valid                               ), //o
    .coded_msg_ready                       (rate_match_segment_length_ready                            ), //i
    .coded_msg_payload_segment_length      (channel_code_coded_msg_payload_segment_length[12:0]        ), //o
    .coded_msg_payload_segment_code_type   (channel_code_coded_msg_payload_segment_code_type           ), //o
    .clk                                   (clk                                                        ), //i
    .reset                                 (reset                                                      )  //i
  );
  ConvolutionalRateMatchUnit rate_match (
    .raw_data_valid               (channel_code_result_data_valid                     ), //i
    .raw_data_ready               (rate_match_raw_data_ready                          ), //o
    .raw_data_payload_last        (channel_code_result_data_payload_last              ), //i
    .raw_data_payload_fragment    (channel_code_result_data_payload_fragment[3:0]     ), //i
    .segment_length_valid         (channel_code_coded_msg_valid                       ), //i
    .segment_length_ready         (rate_match_segment_length_ready                    ), //o
    .segment_length_payload       (channel_code_coded_msg_payload_segment_length[12:0]), //i
    .result_data_valid            (rate_match_result_data_valid                       ), //o
    .result_data_ready            (result_data_ready                                  ), //i
    .result_data_payload_last     (rate_match_result_data_payload_last                ), //o
    .result_data_payload_fragment (rate_match_result_data_payload_fragment            ), //o
    .vector_length                (32'h000000c8                                       ), //i
    .clk                          (clk                                                ), //i
    .reset                        (reset                                              )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(block_msg_ctrl_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_ctrl_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_ctrl_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : block_msg_ctrl_payload_pkg_type_string = "PTCH";
      default : block_msg_ctrl_payload_pkg_type_string = "????";
    endcase
  end
  `endif

  assign block_msg_ctrl_ready = tx_crc_extender_block_msg_ctrl_in_ready; // @[Stream.scala 295:16]
  assign raw_data_ready = tx_crc_extender_raw_data_ready; // @[Stream.scala 295:16]
  assign result_data_valid = rate_match_result_data_valid; // @[Stream.scala 294:16]
  assign result_data_payload_last = rate_match_result_data_payload_last; // @[Stream.scala 296:18]
  assign result_data_payload_fragment = rate_match_result_data_payload_fragment; // @[Stream.scala 296:18]

endmodule

module ConvolutionalRateMatchUnit (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [3:0]    raw_data_payload_fragment,
  input               segment_length_valid,
  output              segment_length_ready,
  input      [12:0]   segment_length_payload,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [0:0]    result_data_payload_fragment,
  input      [31:0]   vector_length,
  input               clk,
  input               reset
);
  localparam ConvolutionalRateMatchUnitStatus_IDLE = 2'd0;
  localparam ConvolutionalRateMatchUnitStatus_PADDING_ZERO = 2'd1;
  localparam ConvolutionalRateMatchUnitStatus_WRITE_RAM = 2'd2;
  localparam ConvolutionalRateMatchUnitStatus_READ_RAM = 2'd3;

  reg        [3:0]    _zz_interleaving_ram_port0;
  reg        [4:0]    _zz_conv_perm_pattern_port0;
  wire       [4:0]    _zz_pattern_cursor_valueNext;
  wire       [0:0]    _zz_pattern_cursor_valueNext_1;
  wire       [1:0]    _zz_bits_sel_valueNext;
  wire       [0:0]    _zz_bits_sel_valueNext_1;
  wire                _zz_conv_perm_pattern_port;
  wire                _zz_pattern;
  wire                _zz_interleaving_ram_port;
  wire                _zz_rate_matched_output;
  wire       [3:0]    _zz_interleaving_ram_port_1;
  wire       [7:0]    _zz_rows;
  wire       [7:0]    _zz_rows_1;
  wire       [0:0]    _zz_rows_2;
  wire       [4:0]    _zz_zero_padding_cnt;
  wire       [5:0]    _zz_zero_padding_cnt_1;
  wire       [5:0]    _zz_zero_padding_cnt_2;
  wire       [4:0]    _zz_zero_padding_cnt_3;
  reg                 _zz_1;
  reg                 _zz_2;
  reg        [1:0]    state;
  reg        [4:0]    zero_padding_cnt;
  reg        [7:0]    rows;
  reg        [12:0]   write_addr;
  reg        [12:0]   read_addr;
  reg        [7:0]    read_row_cnt;
  reg                 pattern_cursor_willIncrement;
  reg                 pattern_cursor_willClear;
  reg        [4:0]    pattern_cursor_valueNext;
  reg        [4:0]    pattern_cursor_value;
  wire                pattern_cursor_willOverflowIfInc;
  wire                pattern_cursor_willOverflow;
  reg        [31:0]   vector_length_cnt;
  reg                 bits_sel_willIncrement;
  wire                bits_sel_willClear;
  reg        [1:0]    bits_sel_valueNext;
  reg        [1:0]    bits_sel_value;
  wire                bits_sel_willOverflowIfInc;
  wire                bits_sel_willOverflow;
  reg                 willIncrement;
  reg        [12:0]   read_addr_next;
  wire       [4:0]    pattern;
  wire                when_PhyTX_l766;
  wire       [3:0]    rate_matched_output;
  wire                segment_length_fire;
  wire       [1:0]    _zz_state;
  wire                when_PhyTX_l789;
  wire                raw_data_fire;
  wire                result_data_fire;
  wire                result_data_fire_1;
  wire                when_PhyTX_l816;
  wire                when_PhyTX_l817;
  `ifndef SYNTHESIS
  reg [95:0] state_string;
  reg [95:0] _zz_state_string;
  `endif

  reg [3:0] interleaving_ram [0:6144];
  (* rom_style = "block" *) reg [4:0] conv_perm_pattern [0:31];

  assign _zz_pattern_cursor_valueNext_1 = pattern_cursor_willIncrement;
  assign _zz_pattern_cursor_valueNext = {4'd0, _zz_pattern_cursor_valueNext_1};
  assign _zz_bits_sel_valueNext_1 = bits_sel_willIncrement;
  assign _zz_bits_sel_valueNext = {1'd0, _zz_bits_sel_valueNext_1};
  assign _zz_rows = (segment_length_payload >>> 5);
  assign _zz_rows_2 = (segment_length_payload[4 : 0] != 5'h0);
  assign _zz_rows_1 = {7'd0, _zz_rows_2};
  assign _zz_zero_padding_cnt_1 = (6'h20 - _zz_zero_padding_cnt_2);
  assign _zz_zero_padding_cnt = _zz_zero_padding_cnt_1[4:0];
  assign _zz_zero_padding_cnt_3 = segment_length_payload[4 : 0];
  assign _zz_zero_padding_cnt_2 = {1'd0, _zz_zero_padding_cnt_3};
  assign _zz_rate_matched_output = 1'b1;
  assign _zz_interleaving_ram_port_1 = 4'b0000;
  assign _zz_pattern = 1'b1;
  always @(posedge clk) begin
    if(_zz_rate_matched_output) begin
      _zz_interleaving_ram_port0 <= interleaving_ram[read_addr_next];
    end
  end

  always @(posedge clk) begin
    if(_zz_2) begin
      interleaving_ram[write_addr] <= _zz_interleaving_ram_port_1;
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      interleaving_ram[write_addr] <= raw_data_payload_fragment;
    end
  end

  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/TX.v_toplevel_rate_match_conv_perm_pattern.bin",conv_perm_pattern);
  end
  always @(posedge clk) begin
    if(_zz_pattern) begin
      _zz_conv_perm_pattern_port0 <= conv_perm_pattern[pattern_cursor_value];
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(state)
      ConvolutionalRateMatchUnitStatus_IDLE : state_string = "IDLE        ";
      ConvolutionalRateMatchUnitStatus_PADDING_ZERO : state_string = "PADDING_ZERO";
      ConvolutionalRateMatchUnitStatus_WRITE_RAM : state_string = "WRITE_RAM   ";
      ConvolutionalRateMatchUnitStatus_READ_RAM : state_string = "READ_RAM    ";
      default : state_string = "????????????";
    endcase
  end
  always @(*) begin
    case(_zz_state)
      ConvolutionalRateMatchUnitStatus_IDLE : _zz_state_string = "IDLE        ";
      ConvolutionalRateMatchUnitStatus_PADDING_ZERO : _zz_state_string = "PADDING_ZERO";
      ConvolutionalRateMatchUnitStatus_WRITE_RAM : _zz_state_string = "WRITE_RAM   ";
      ConvolutionalRateMatchUnitStatus_READ_RAM : _zz_state_string = "READ_RAM    ";
      default : _zz_state_string = "????????????";
    endcase
  end
  `endif

  always @(*) begin
    _zz_1 = 1'b0; // @[when.scala 47:16]
    case(state)
      ConvolutionalRateMatchUnitStatus_IDLE : begin
      end
      ConvolutionalRateMatchUnitStatus_PADDING_ZERO : begin
      end
      ConvolutionalRateMatchUnitStatus_WRITE_RAM : begin
        if(raw_data_fire) begin
          _zz_1 = 1'b1; // @[when.scala 52:10]
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    _zz_2 = 1'b0; // @[when.scala 47:16]
    case(state)
      ConvolutionalRateMatchUnitStatus_IDLE : begin
      end
      ConvolutionalRateMatchUnitStatus_PADDING_ZERO : begin
        _zz_2 = 1'b1; // @[when.scala 52:10]
      end
      ConvolutionalRateMatchUnitStatus_WRITE_RAM : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    pattern_cursor_willIncrement = 1'b0; // @[Utils.scala 536:23]
    case(state)
      ConvolutionalRateMatchUnitStatus_IDLE : begin
      end
      ConvolutionalRateMatchUnitStatus_PADDING_ZERO : begin
      end
      ConvolutionalRateMatchUnitStatus_WRITE_RAM : begin
        if(raw_data_fire) begin
          if(raw_data_payload_last) begin
            pattern_cursor_willIncrement = 1'b1; // @[Utils.scala 540:41]
          end
        end
      end
      default : begin
        if(when_PhyTX_l816) begin
          if(when_PhyTX_l817) begin
            pattern_cursor_willIncrement = 1'b1; // @[Utils.scala 540:41]
          end
        end
      end
    endcase
  end

  always @(*) begin
    pattern_cursor_willClear = 1'b0; // @[Utils.scala 537:19]
    case(state)
      ConvolutionalRateMatchUnitStatus_IDLE : begin
        pattern_cursor_willClear = 1'b1; // @[Utils.scala 539:33]
      end
      ConvolutionalRateMatchUnitStatus_PADDING_ZERO : begin
      end
      ConvolutionalRateMatchUnitStatus_WRITE_RAM : begin
      end
      default : begin
      end
    endcase
  end

  assign pattern_cursor_willOverflowIfInc = (pattern_cursor_value == 5'h1f); // @[BaseType.scala 305:24]
  assign pattern_cursor_willOverflow = (pattern_cursor_willOverflowIfInc && pattern_cursor_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    pattern_cursor_valueNext = (pattern_cursor_value + _zz_pattern_cursor_valueNext); // @[Utils.scala 548:15]
    if(pattern_cursor_willClear) begin
      pattern_cursor_valueNext = 5'h0; // @[Utils.scala 558:15]
    end
  end

  always @(*) begin
    bits_sel_willIncrement = 1'b0; // @[Utils.scala 536:23]
    case(state)
      ConvolutionalRateMatchUnitStatus_IDLE : begin
      end
      ConvolutionalRateMatchUnitStatus_PADDING_ZERO : begin
      end
      ConvolutionalRateMatchUnitStatus_WRITE_RAM : begin
      end
      default : begin
        if(when_PhyTX_l816) begin
          if(when_PhyTX_l817) begin
            if(pattern_cursor_willOverflowIfInc) begin
              bits_sel_willIncrement = 1'b1; // @[Utils.scala 540:41]
            end
          end
        end
      end
    endcase
  end

  assign bits_sel_willClear = 1'b0; // @[Utils.scala 537:19]
  assign bits_sel_willOverflowIfInc = (bits_sel_value == 2'b10); // @[BaseType.scala 305:24]
  assign bits_sel_willOverflow = (bits_sel_willOverflowIfInc && bits_sel_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    if(bits_sel_willOverflow) begin
      bits_sel_valueNext = 2'b00; // @[Utils.scala 552:17]
    end else begin
      bits_sel_valueNext = (bits_sel_value + _zz_bits_sel_valueNext); // @[Utils.scala 554:17]
    end
    if(bits_sel_willClear) begin
      bits_sel_valueNext = 2'b00; // @[Utils.scala 558:15]
    end
  end

  always @(*) begin
    willIncrement = 1'b0; // @[PhyTX.scala 760:25]
    case(state)
      ConvolutionalRateMatchUnitStatus_IDLE : begin
      end
      ConvolutionalRateMatchUnitStatus_PADDING_ZERO : begin
      end
      ConvolutionalRateMatchUnitStatus_WRITE_RAM : begin
      end
      default : begin
        if(when_PhyTX_l816) begin
          willIncrement = 1'b1; // @[PhyTX.scala 826:31]
        end
      end
    endcase
  end

  assign pattern = _zz_conv_perm_pattern_port0; // @[UInt.scala 381:56]
  assign when_PhyTX_l766 = (read_row_cnt == 8'h01); // @[BaseType.scala 305:24]
  always @(*) begin
    if(willIncrement) begin
      if(when_PhyTX_l766) begin
        read_addr_next = {8'd0, pattern}; // @[PhyTX.scala 767:28]
      end else begin
        read_addr_next = (read_addr + 13'h0020); // @[PhyTX.scala 769:28]
      end
    end else begin
      read_addr_next = read_addr; // @[PhyTX.scala 772:24]
    end
  end

  assign rate_matched_output = _zz_interleaving_ram_port0; // @[Bits.scala 133:56]
  assign segment_length_fire = (segment_length_valid && segment_length_ready); // @[BaseType.scala 305:24]
  assign _zz_state = ((segment_length_payload[4 : 0] == 5'h0) ? ConvolutionalRateMatchUnitStatus_WRITE_RAM : ConvolutionalRateMatchUnitStatus_PADDING_ZERO); // @[Expression.scala 1420:25]
  assign when_PhyTX_l789 = (zero_padding_cnt == 5'h01); // @[BaseType.scala 305:24]
  assign raw_data_fire = (raw_data_valid && raw_data_ready); // @[BaseType.scala 305:24]
  assign result_data_fire = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign result_data_fire_1 = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l816 = (result_data_fire_1 || (rate_matched_output[3] == 1'b0)); // @[BaseType.scala 305:24]
  assign when_PhyTX_l817 = (read_row_cnt == 8'h01); // @[BaseType.scala 305:24]
  assign raw_data_ready = (state == ConvolutionalRateMatchUnitStatus_WRITE_RAM); // @[PhyTX.scala 830:23]
  assign segment_length_ready = (state == ConvolutionalRateMatchUnitStatus_IDLE); // @[PhyTX.scala 831:29]
  assign result_data_payload_fragment = rate_matched_output[bits_sel_value]; // @[PhyTX.scala 832:29]
  assign result_data_payload_last = (vector_length_cnt == 32'h00000001); // @[PhyTX.scala 833:25]
  assign result_data_valid = ((state == ConvolutionalRateMatchUnitStatus_READ_RAM) && rate_matched_output[3]); // @[PhyTX.scala 834:26]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      state <= ConvolutionalRateMatchUnitStatus_IDLE; // @[Data.scala 400:33]
      pattern_cursor_value <= 5'h0; // @[Data.scala 400:33]
      bits_sel_value <= 2'b00; // @[Data.scala 400:33]
    end else begin
      pattern_cursor_value <= pattern_cursor_valueNext; // @[Reg.scala 39:30]
      bits_sel_value <= bits_sel_valueNext; // @[Reg.scala 39:30]
      case(state)
        ConvolutionalRateMatchUnitStatus_IDLE : begin
          if(segment_length_fire) begin
            state <= _zz_state; // @[PhyTX.scala 779:23]
          end
          bits_sel_value <= 2'b10; // @[PhyTX.scala 786:28]
        end
        ConvolutionalRateMatchUnitStatus_PADDING_ZERO : begin
          if(when_PhyTX_l789) begin
            state <= ConvolutionalRateMatchUnitStatus_WRITE_RAM; // @[Enum.scala 148:67]
          end
        end
        ConvolutionalRateMatchUnitStatus_WRITE_RAM : begin
          if(raw_data_fire) begin
            if(raw_data_payload_last) begin
              state <= ConvolutionalRateMatchUnitStatus_READ_RAM; // @[Enum.scala 148:67]
            end
          end
        end
        default : begin
          if(result_data_fire) begin
            if(result_data_payload_last) begin
              state <= ConvolutionalRateMatchUnitStatus_IDLE; // @[Enum.scala 148:67]
            end
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(state)
      ConvolutionalRateMatchUnitStatus_IDLE : begin
        if(segment_length_fire) begin
          rows <= (_zz_rows + _zz_rows_1); // @[PhyTX.scala 780:22]
          zero_padding_cnt <= ((segment_length_payload[4 : 0] == 5'h0) ? 5'h0 : _zz_zero_padding_cnt); // @[PhyTX.scala 781:34]
        end
        vector_length_cnt <= vector_length; // @[PhyTX.scala 783:31]
        write_addr <= 13'h0; // @[PhyTX.scala 784:24]
      end
      ConvolutionalRateMatchUnitStatus_PADDING_ZERO : begin
        zero_padding_cnt <= (zero_padding_cnt - 5'h01); // @[PhyTX.scala 792:30]
        write_addr <= (write_addr + 13'h0001); // @[PhyTX.scala 794:24]
      end
      ConvolutionalRateMatchUnitStatus_WRITE_RAM : begin
        if(raw_data_fire) begin
          write_addr <= (write_addr + 13'h0001); // @[PhyTX.scala 799:28]
        end
        read_addr <= {8'd0, pattern}; // @[PhyTX.scala 805:23]
        read_row_cnt <= rows; // @[PhyTX.scala 806:26]
      end
      default : begin
        read_addr <= read_addr_next; // @[PhyTX.scala 809:23]
        if(result_data_fire) begin
          vector_length_cnt <= (vector_length_cnt - 32'h00000001); // @[PhyTX.scala 811:35]
        end
        if(when_PhyTX_l816) begin
          if(when_PhyTX_l817) begin
            read_row_cnt <= rows; // @[PhyTX.scala 818:34]
          end else begin
            read_row_cnt <= (read_row_cnt - 8'h01); // @[PhyTX.scala 824:34]
          end
        end
      end
    endcase
  end


endmodule

module ChannelCoding (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [1:0]    raw_data_payload_fragment,
  input               segment_msg_valid,
  output              segment_msg_ready,
  input      [12:0]   segment_msg_payload_segment_length,
  input      [0:0]    segment_msg_payload_segment_code_type,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [3:0]    result_data_payload_fragment,
  output              coded_msg_valid,
  input               coded_msg_ready,
  output     [12:0]   coded_msg_payload_segment_length,
  output     [0:0]    coded_msg_payload_segment_code_type,
  input               clk,
  input               reset
);
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;
  localparam ChannelCodingStatus_IDLE = 2'd0;
  localparam ChannelCodingStatus_CTRL_EMIT = 2'd1;
  localparam ChannelCodingStatus_BYPASS = 2'd2;
  localparam ChannelCodingStatus_PENDING = 2'd3;

  wire                data_fifo_io_pop_ready;
  wire                msg_fifo_io_pop_ready;
  wire                streamDemux_4_io_input_valid;
  wire                data_fifo_io_push_ready;
  wire                data_fifo_io_pop_valid;
  wire                data_fifo_io_pop_payload_last;
  wire       [1:0]    data_fifo_io_pop_payload_fragment;
  wire       [5:0]    data_fifo_io_occupancy;
  wire       [5:0]    data_fifo_io_availability;
  wire                msg_fifo_io_push_ready;
  wire                msg_fifo_io_pop_valid;
  wire       [12:0]   msg_fifo_io_pop_payload_segment_length;
  wire       [0:0]    msg_fifo_io_pop_payload_segment_code_type;
  wire       [2:0]    msg_fifo_io_occupancy;
  wire       [2:0]    msg_fifo_io_availability;
  wire                turbo_encoder_raw_data_ready;
  wire                turbo_encoder_result_data_valid;
  wire                turbo_encoder_result_data_payload_last;
  wire       [3:0]    turbo_encoder_result_data_payload_fragment;
  wire                tailed_conv_encoder_raw_data_ready;
  wire                tailed_conv_encoder_result_data_valid;
  wire                tailed_conv_encoder_result_data_payload_last;
  wire       [3:0]    tailed_conv_encoder_result_data_payload_fragment;
  wire                streamDemux_4_io_input_ready;
  wire                streamDemux_4_io_outputs_0_valid;
  wire                streamDemux_4_io_outputs_0_payload_last;
  wire       [1:0]    streamDemux_4_io_outputs_0_payload_fragment;
  wire                streamDemux_4_io_outputs_1_valid;
  wire                streamDemux_4_io_outputs_1_payload_last;
  wire       [1:0]    streamDemux_4_io_outputs_1_payload_fragment;
  wire                flowMux_1_output_valid;
  wire                flowMux_1_output_payload_last;
  wire       [3:0]    flowMux_1_output_payload_fragment;
  wire       [12:0]   _zz_message_segment_length;
  reg        [0:0]    sel_cha;
  reg        [1:0]    state;
  reg        [12:0]   message_segment_length;
  reg        [0:0]    message_segment_code_type;
  wire                channel_code_msg_fifo_io_pop_fire;
  wire                coded_msg_fire;
  wire                channel_code_data_fifo_io_pop_fire;
  wire                when_PhyTX_l710;
  wire                result_data_fire;
  wire                _zz_io_pop_ready;
  `ifndef SYNTHESIS
  reg [151:0] segment_msg_payload_segment_code_type_string;
  reg [151:0] coded_msg_payload_segment_code_type_string;
  reg [71:0] state_string;
  reg [151:0] message_segment_code_type_string;
  `endif


  assign _zz_message_segment_length = (msg_fifo_io_pop_payload_segment_length + 13'h0004);
  StreamFifo_1 data_fifo (
    .io_push_valid            (raw_data_valid                        ), //i
    .io_push_ready            (data_fifo_io_push_ready               ), //o
    .io_push_payload_last     (raw_data_payload_last                 ), //i
    .io_push_payload_fragment (raw_data_payload_fragment[1:0]        ), //i
    .io_pop_valid             (data_fifo_io_pop_valid                ), //o
    .io_pop_ready             (data_fifo_io_pop_ready                ), //i
    .io_pop_payload_last      (data_fifo_io_pop_payload_last         ), //o
    .io_pop_payload_fragment  (data_fifo_io_pop_payload_fragment[1:0]), //o
    .io_flush                 (1'b0                                  ), //i
    .io_occupancy             (data_fifo_io_occupancy[5:0]           ), //o
    .io_availability          (data_fifo_io_availability[5:0]        ), //o
    .clk                      (clk                                   ), //i
    .reset                    (reset                                 )  //i
  );
  StreamFifo msg_fifo (
    .io_push_valid                     (segment_msg_valid                           ), //i
    .io_push_ready                     (msg_fifo_io_push_ready                      ), //o
    .io_push_payload_segment_length    (segment_msg_payload_segment_length[12:0]    ), //i
    .io_push_payload_segment_code_type (segment_msg_payload_segment_code_type       ), //i
    .io_pop_valid                      (msg_fifo_io_pop_valid                       ), //o
    .io_pop_ready                      (msg_fifo_io_pop_ready                       ), //i
    .io_pop_payload_segment_length     (msg_fifo_io_pop_payload_segment_length[12:0]), //o
    .io_pop_payload_segment_code_type  (msg_fifo_io_pop_payload_segment_code_type   ), //o
    .io_flush                          (1'b0                                        ), //i
    .io_occupancy                      (msg_fifo_io_occupancy[2:0]                  ), //o
    .io_availability                   (msg_fifo_io_availability[2:0]               ), //o
    .clk                               (clk                                         ), //i
    .reset                             (reset                                       )  //i
  );
  TurboEncoder turbo_encoder (
    .raw_data_valid               (streamDemux_4_io_outputs_0_valid                ), //i
    .raw_data_ready               (turbo_encoder_raw_data_ready                    ), //o
    .raw_data_payload_last        (streamDemux_4_io_outputs_0_payload_last         ), //i
    .raw_data_payload_fragment    (streamDemux_4_io_outputs_0_payload_fragment[1:0]), //i
    .result_data_valid            (turbo_encoder_result_data_valid                 ), //o
    .result_data_payload_last     (turbo_encoder_result_data_payload_last          ), //o
    .result_data_payload_fragment (turbo_encoder_result_data_payload_fragment[3:0] )  //o
  );
  TailedConvCodeEncoder tailed_conv_encoder (
    .raw_data_valid               (streamDemux_4_io_outputs_1_valid                     ), //i
    .raw_data_ready               (tailed_conv_encoder_raw_data_ready                   ), //o
    .raw_data_payload_last        (streamDemux_4_io_outputs_1_payload_last              ), //i
    .raw_data_payload_fragment    (streamDemux_4_io_outputs_1_payload_fragment[1:0]     ), //i
    .result_data_valid            (tailed_conv_encoder_result_data_valid                ), //o
    .result_data_payload_last     (tailed_conv_encoder_result_data_payload_last         ), //o
    .result_data_payload_fragment (tailed_conv_encoder_result_data_payload_fragment[3:0]), //o
    .clk                          (clk                                                  ), //i
    .reset                        (reset                                                )  //i
  );
  StreamDemux streamDemux_4 (
    .io_select                     (sel_cha                                         ), //i
    .io_input_valid                (streamDemux_4_io_input_valid                    ), //i
    .io_input_ready                (streamDemux_4_io_input_ready                    ), //o
    .io_input_payload_last         (data_fifo_io_pop_payload_last                   ), //i
    .io_input_payload_fragment     (data_fifo_io_pop_payload_fragment[1:0]          ), //i
    .io_outputs_0_valid            (streamDemux_4_io_outputs_0_valid                ), //o
    .io_outputs_0_ready            (turbo_encoder_raw_data_ready                    ), //i
    .io_outputs_0_payload_last     (streamDemux_4_io_outputs_0_payload_last         ), //o
    .io_outputs_0_payload_fragment (streamDemux_4_io_outputs_0_payload_fragment[1:0]), //o
    .io_outputs_1_valid            (streamDemux_4_io_outputs_1_valid                ), //o
    .io_outputs_1_ready            (tailed_conv_encoder_raw_data_ready              ), //i
    .io_outputs_1_payload_last     (streamDemux_4_io_outputs_1_payload_last         ), //o
    .io_outputs_1_payload_fragment (streamDemux_4_io_outputs_1_payload_fragment[1:0])  //o
  );
  FlowMux flowMux_1 (
    .inputs_0_valid            (turbo_encoder_result_data_valid                      ), //i
    .inputs_0_payload_last     (turbo_encoder_result_data_payload_last               ), //i
    .inputs_0_payload_fragment (turbo_encoder_result_data_payload_fragment[3:0]      ), //i
    .inputs_1_valid            (tailed_conv_encoder_result_data_valid                ), //i
    .inputs_1_payload_last     (tailed_conv_encoder_result_data_payload_last         ), //i
    .inputs_1_payload_fragment (tailed_conv_encoder_result_data_payload_fragment[3:0]), //i
    .select_1                  (sel_cha                                              ), //i
    .output_valid              (flowMux_1_output_valid                               ), //o
    .output_payload_last       (flowMux_1_output_payload_last                        ), //o
    .output_payload_fragment   (flowMux_1_output_payload_fragment[3:0]               )  //o
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(segment_msg_payload_segment_code_type)
      ChannelCodingMethod_Turbo : segment_msg_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_msg_payload_segment_code_type_string = "TailedConvolutional";
      default : segment_msg_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(coded_msg_payload_segment_code_type)
      ChannelCodingMethod_Turbo : coded_msg_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : coded_msg_payload_segment_code_type_string = "TailedConvolutional";
      default : coded_msg_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(state)
      ChannelCodingStatus_IDLE : state_string = "IDLE     ";
      ChannelCodingStatus_CTRL_EMIT : state_string = "CTRL_EMIT";
      ChannelCodingStatus_BYPASS : state_string = "BYPASS   ";
      ChannelCodingStatus_PENDING : state_string = "PENDING  ";
      default : state_string = "?????????";
    endcase
  end
  always @(*) begin
    case(message_segment_code_type)
      ChannelCodingMethod_Turbo : message_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : message_segment_code_type_string = "TailedConvolutional";
      default : message_segment_code_type_string = "???????????????????";
    endcase
  end
  `endif

  assign channel_code_msg_fifo_io_pop_fire = (msg_fifo_io_pop_valid && msg_fifo_io_pop_ready); // @[BaseType.scala 305:24]
  assign coded_msg_fire = (coded_msg_valid && coded_msg_ready); // @[BaseType.scala 305:24]
  assign channel_code_data_fifo_io_pop_fire = (data_fifo_io_pop_valid && data_fifo_io_pop_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l710 = (channel_code_data_fifo_io_pop_fire && data_fifo_io_pop_payload_last); // @[BaseType.scala 305:24]
  assign result_data_fire = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign coded_msg_payload_segment_length = message_segment_length; // @[PhyTX.scala 720:26]
  assign coded_msg_payload_segment_code_type = message_segment_code_type; // @[PhyTX.scala 720:26]
  assign coded_msg_valid = (state == ChannelCodingStatus_CTRL_EMIT); // @[PhyTX.scala 721:24]
  assign raw_data_ready = data_fifo_io_push_ready; // @[Stream.scala 295:16]
  assign segment_msg_ready = msg_fifo_io_push_ready; // @[Stream.scala 295:16]
  assign msg_fifo_io_pop_ready = (state == ChannelCodingStatus_IDLE); // @[PhyTX.scala 724:27]
  assign _zz_io_pop_ready = ((state == ChannelCodingStatus_BYPASS) && result_data_ready); // @[BaseType.scala 305:24]
  assign data_fifo_io_pop_ready = (streamDemux_4_io_input_ready && _zz_io_pop_ready); // @[Stream.scala 427:16]
  assign streamDemux_4_io_input_valid = (data_fifo_io_pop_valid && _zz_io_pop_ready); // @[Stream.scala 294:16]
  assign result_data_valid = flowMux_1_output_valid; // @[PhyTX.scala 731:26]
  assign result_data_payload_fragment = flowMux_1_output_payload_fragment; // @[PhyTX.scala 732:29]
  assign result_data_payload_last = flowMux_1_output_payload_last; // @[PhyTX.scala 733:25]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      state <= ChannelCodingStatus_IDLE; // @[Data.scala 400:33]
    end else begin
      case(state)
        ChannelCodingStatus_IDLE : begin
          if(channel_code_msg_fifo_io_pop_fire) begin
            state <= ChannelCodingStatus_CTRL_EMIT; // @[Enum.scala 148:67]
          end
        end
        ChannelCodingStatus_CTRL_EMIT : begin
          if(coded_msg_fire) begin
            state <= ChannelCodingStatus_BYPASS; // @[Enum.scala 148:67]
          end
        end
        ChannelCodingStatus_BYPASS : begin
          if(when_PhyTX_l710) begin
            state <= ChannelCodingStatus_PENDING; // @[Enum.scala 148:67]
          end
        end
        default : begin
          if(result_data_fire) begin
            state <= ChannelCodingStatus_IDLE; // @[Enum.scala 148:67]
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(state)
      ChannelCodingStatus_IDLE : begin
        if(channel_code_msg_fifo_io_pop_fire) begin
          message_segment_code_type <= msg_fifo_io_pop_payload_segment_code_type; // @[PhyTX.scala 698:43]
          message_segment_length <= ((msg_fifo_io_pop_payload_segment_code_type == ChannelCodingMethod_TailedConvolutional) ? msg_fifo_io_pop_payload_segment_length : _zz_message_segment_length); // @[PhyTX.scala 699:40]
          sel_cha <= msg_fifo_io_pop_payload_segment_code_type; // @[PhyTX.scala 700:25]
        end
      end
      ChannelCodingStatus_CTRL_EMIT : begin
      end
      ChannelCodingStatus_BYPASS : begin
      end
      default : begin
      end
    endcase
  end


endmodule

module CrcBlockSegmentation (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [1:0]    result_data_payload_fragment,
  input               block_msg_valid,
  output              block_msg_ready,
  input      [1:0]    block_msg_payload_pkg_type,
  input      [19:0]   block_msg_payload_pkg_length,
  input      [15:0]   block_msg_payload_rnti_scramble,
  output              segment_msg_valid,
  input               segment_msg_ready,
  output     [12:0]   segment_msg_payload_segment_length,
  output     [0:0]    segment_msg_payload_segment_code_type,
  input               clk,
  input               reset
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PTCH = 2'd2;
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;
  localparam BlockSegmentStatus_IDLE = 1'd0;
  localparam BlockSegmentStatus_BYPASS = 1'd1;

  wire                data_fifo_io_pop_ready;
  wire                msg_fifo_io_pop_ready;
  wire                streamDemux_4_io_input_valid;
  wire                streamDemux_5_io_input_valid;
  wire                data_fifo_io_push_ready;
  wire                data_fifo_io_pop_valid;
  wire                data_fifo_io_pop_payload_last;
  wire       [0:0]    data_fifo_io_pop_payload_fragment;
  wire       [4:0]    data_fifo_io_occupancy;
  wire       [4:0]    data_fifo_io_availability;
  wire                msg_fifo_io_push_ready;
  wire                msg_fifo_io_pop_valid;
  wire       [1:0]    msg_fifo_io_pop_payload_pkg_type;
  wire       [19:0]   msg_fifo_io_pop_payload_pkg_length;
  wire       [15:0]   msg_fifo_io_pop_payload_rnti_scramble;
  wire       [2:0]    msg_fifo_io_occupancy;
  wire       [2:0]    msg_fifo_io_availability;
  wire                broadcast_channel_segment_raw_data_ready;
  wire                broadcast_channel_segment_block_msg_ready;
  wire                broadcast_channel_segment_result_data_valid;
  wire                broadcast_channel_segment_result_data_payload_last;
  wire       [1:0]    broadcast_channel_segment_result_data_payload_fragment;
  wire                broadcast_channel_segment_segment_msg_valid;
  wire       [12:0]   broadcast_channel_segment_segment_msg_payload_segment_length;
  wire       [0:0]    broadcast_channel_segment_segment_msg_payload_segment_code_type;
  wire                broadcast_channel_segment_is_last_block;
  wire                control_channel_segment_raw_data_ready;
  wire                control_channel_segment_block_msg_ready;
  wire                control_channel_segment_result_data_valid;
  wire                control_channel_segment_result_data_payload_last;
  wire       [1:0]    control_channel_segment_result_data_payload_fragment;
  wire                control_channel_segment_segment_msg_valid;
  wire       [12:0]   control_channel_segment_segment_msg_payload_segment_length;
  wire       [0:0]    control_channel_segment_segment_msg_payload_segment_code_type;
  wire                control_channel_segment_is_last_block;
  wire                shared_channel_segment_raw_data_ready;
  wire                shared_channel_segment_block_msg_ready;
  wire                shared_channel_segment_result_data_valid;
  wire                shared_channel_segment_result_data_payload_last;
  wire       [1:0]    shared_channel_segment_result_data_payload_fragment;
  wire                shared_channel_segment_segment_msg_valid;
  wire       [12:0]   shared_channel_segment_segment_msg_payload_segment_length;
  wire       [0:0]    shared_channel_segment_segment_msg_payload_segment_code_type;
  wire                shared_channel_segment_is_last_block;
  wire                streamDemux_4_io_input_ready;
  wire                streamDemux_4_io_outputs_0_valid;
  wire                streamDemux_4_io_outputs_0_payload_last;
  wire       [0:0]    streamDemux_4_io_outputs_0_payload_fragment;
  wire                streamDemux_4_io_outputs_1_valid;
  wire                streamDemux_4_io_outputs_1_payload_last;
  wire       [0:0]    streamDemux_4_io_outputs_1_payload_fragment;
  wire                streamDemux_4_io_outputs_2_valid;
  wire                streamDemux_4_io_outputs_2_payload_last;
  wire       [0:0]    streamDemux_4_io_outputs_2_payload_fragment;
  wire                streamDemux_5_io_input_ready;
  wire                streamDemux_5_io_outputs_0_valid;
  wire       [1:0]    streamDemux_5_io_outputs_0_payload_pkg_type;
  wire       [19:0]   streamDemux_5_io_outputs_0_payload_pkg_length;
  wire       [15:0]   streamDemux_5_io_outputs_0_payload_rnti_scramble;
  wire                streamDemux_5_io_outputs_1_valid;
  wire       [1:0]    streamDemux_5_io_outputs_1_payload_pkg_type;
  wire       [19:0]   streamDemux_5_io_outputs_1_payload_pkg_length;
  wire       [15:0]   streamDemux_5_io_outputs_1_payload_rnti_scramble;
  wire                streamDemux_5_io_outputs_2_valid;
  wire       [1:0]    streamDemux_5_io_outputs_2_payload_pkg_type;
  wire       [19:0]   streamDemux_5_io_outputs_2_payload_pkg_length;
  wire       [15:0]   streamDemux_5_io_outputs_2_payload_rnti_scramble;
  wire                streamMux_3_io_inputs_0_ready;
  wire                streamMux_3_io_inputs_1_ready;
  wire                streamMux_3_io_inputs_2_ready;
  wire                streamMux_3_io_output_valid;
  wire                streamMux_3_io_output_payload_last;
  wire       [1:0]    streamMux_3_io_output_payload_fragment;
  wire                streamMux_4_io_inputs_0_ready;
  wire                streamMux_4_io_inputs_1_ready;
  wire                streamMux_4_io_inputs_2_ready;
  wire                streamMux_4_io_output_valid;
  wire       [12:0]   streamMux_4_io_output_payload_segment_length;
  wire       [0:0]    streamMux_4_io_output_payload_segment_code_type;
  reg        [1:0]    sel_cha;
  reg        [3:0]    finish_indicator;
  reg        [0:0]    state;
  wire                result_data_fire;
  wire                when_PhyTX_l576;
  wire                _zz_io_pop_ready;
  wire                _zz_io_pop_ready_1;
  wire       [1:0]    _zz_io_input_payload_pkg_type;
  `ifndef SYNTHESIS
  reg [31:0] block_msg_payload_pkg_type_string;
  reg [151:0] segment_msg_payload_segment_code_type_string;
  reg [47:0] state_string;
  reg [31:0] _zz_io_input_payload_pkg_type_string;
  `endif


  StreamFifo_3 data_fifo (
    .io_push_valid            (raw_data_valid                   ), //i
    .io_push_ready            (data_fifo_io_push_ready          ), //o
    .io_push_payload_last     (raw_data_payload_last            ), //i
    .io_push_payload_fragment (raw_data_payload_fragment        ), //i
    .io_pop_valid             (data_fifo_io_pop_valid           ), //o
    .io_pop_ready             (data_fifo_io_pop_ready           ), //i
    .io_pop_payload_last      (data_fifo_io_pop_payload_last    ), //o
    .io_pop_payload_fragment  (data_fifo_io_pop_payload_fragment), //o
    .io_flush                 (1'b0                             ), //i
    .io_occupancy             (data_fifo_io_occupancy[4:0]      ), //o
    .io_availability          (data_fifo_io_availability[4:0]   ), //o
    .clk                      (clk                              ), //i
    .reset                    (reset                            )  //i
  );
  StreamFifo_2 msg_fifo (
    .io_push_valid                 (block_msg_valid                            ), //i
    .io_push_ready                 (msg_fifo_io_push_ready                     ), //o
    .io_push_payload_pkg_type      (block_msg_payload_pkg_type[1:0]            ), //i
    .io_push_payload_pkg_length    (block_msg_payload_pkg_length[19:0]         ), //i
    .io_push_payload_rnti_scramble (block_msg_payload_rnti_scramble[15:0]      ), //i
    .io_pop_valid                  (msg_fifo_io_pop_valid                      ), //o
    .io_pop_ready                  (msg_fifo_io_pop_ready                      ), //i
    .io_pop_payload_pkg_type       (msg_fifo_io_pop_payload_pkg_type[1:0]      ), //o
    .io_pop_payload_pkg_length     (msg_fifo_io_pop_payload_pkg_length[19:0]   ), //o
    .io_pop_payload_rnti_scramble  (msg_fifo_io_pop_payload_rnti_scramble[15:0]), //o
    .io_flush                      (1'b0                                       ), //i
    .io_occupancy                  (msg_fifo_io_occupancy[2:0]                 ), //o
    .io_availability               (msg_fifo_io_availability[2:0]              ), //o
    .clk                           (clk                                        ), //i
    .reset                         (reset                                      )  //i
  );
  PBCHCrcAttachment broadcast_channel_segment (
    .raw_data_valid                        (streamDemux_4_io_outputs_0_valid                                  ), //i
    .raw_data_ready                        (broadcast_channel_segment_raw_data_ready                          ), //o
    .raw_data_payload_last                 (streamDemux_4_io_outputs_0_payload_last                           ), //i
    .raw_data_payload_fragment             (streamDemux_4_io_outputs_0_payload_fragment                       ), //i
    .block_msg_valid                       (streamDemux_5_io_outputs_0_valid                                  ), //i
    .block_msg_ready                       (broadcast_channel_segment_block_msg_ready                         ), //o
    .block_msg_payload_pkg_type            (streamDemux_5_io_outputs_0_payload_pkg_type[1:0]                  ), //i
    .block_msg_payload_pkg_length          (streamDemux_5_io_outputs_0_payload_pkg_length[19:0]               ), //i
    .block_msg_payload_rnti_scramble       (streamDemux_5_io_outputs_0_payload_rnti_scramble[15:0]            ), //i
    .result_data_valid                     (broadcast_channel_segment_result_data_valid                       ), //o
    .result_data_ready                     (streamMux_3_io_inputs_0_ready                                     ), //i
    .result_data_payload_last              (broadcast_channel_segment_result_data_payload_last                ), //o
    .result_data_payload_fragment          (broadcast_channel_segment_result_data_payload_fragment[1:0]       ), //o
    .segment_msg_valid                     (broadcast_channel_segment_segment_msg_valid                       ), //o
    .segment_msg_ready                     (streamMux_4_io_inputs_0_ready                                     ), //i
    .segment_msg_payload_segment_length    (broadcast_channel_segment_segment_msg_payload_segment_length[12:0]), //o
    .segment_msg_payload_segment_code_type (broadcast_channel_segment_segment_msg_payload_segment_code_type   ), //o
    .is_last_block                         (broadcast_channel_segment_is_last_block                           ), //o
    .clk                                   (clk                                                               ), //i
    .reset                                 (reset                                                             )  //i
  );
  PCCHCrcAttachment control_channel_segment (
    .raw_data_valid                        (streamDemux_4_io_outputs_1_valid                                ), //i
    .raw_data_ready                        (control_channel_segment_raw_data_ready                          ), //o
    .raw_data_payload_last                 (streamDemux_4_io_outputs_1_payload_last                         ), //i
    .raw_data_payload_fragment             (streamDemux_4_io_outputs_1_payload_fragment                     ), //i
    .block_msg_valid                       (streamDemux_5_io_outputs_1_valid                                ), //i
    .block_msg_ready                       (control_channel_segment_block_msg_ready                         ), //o
    .block_msg_payload_pkg_type            (streamDemux_5_io_outputs_1_payload_pkg_type[1:0]                ), //i
    .block_msg_payload_pkg_length          (streamDemux_5_io_outputs_1_payload_pkg_length[19:0]             ), //i
    .block_msg_payload_rnti_scramble       (streamDemux_5_io_outputs_1_payload_rnti_scramble[15:0]          ), //i
    .result_data_valid                     (control_channel_segment_result_data_valid                       ), //o
    .result_data_ready                     (streamMux_3_io_inputs_1_ready                                   ), //i
    .result_data_payload_last              (control_channel_segment_result_data_payload_last                ), //o
    .result_data_payload_fragment          (control_channel_segment_result_data_payload_fragment[1:0]       ), //o
    .segment_msg_valid                     (control_channel_segment_segment_msg_valid                       ), //o
    .segment_msg_ready                     (streamMux_4_io_inputs_1_ready                                   ), //i
    .segment_msg_payload_segment_length    (control_channel_segment_segment_msg_payload_segment_length[12:0]), //o
    .segment_msg_payload_segment_code_type (control_channel_segment_segment_msg_payload_segment_code_type   ), //o
    .is_last_block                         (control_channel_segment_is_last_block                           ), //o
    .clk                                   (clk                                                             ), //i
    .reset                                 (reset                                                           )  //i
  );
  PSCHCrcAttachment shared_channel_segment (
    .raw_data_valid                        (streamDemux_4_io_outputs_2_valid                               ), //i
    .raw_data_ready                        (shared_channel_segment_raw_data_ready                          ), //o
    .raw_data_payload_last                 (streamDemux_4_io_outputs_2_payload_last                        ), //i
    .raw_data_payload_fragment             (streamDemux_4_io_outputs_2_payload_fragment                    ), //i
    .block_msg_valid                       (streamDemux_5_io_outputs_2_valid                               ), //i
    .block_msg_ready                       (shared_channel_segment_block_msg_ready                         ), //o
    .block_msg_payload_pkg_type            (streamDemux_5_io_outputs_2_payload_pkg_type[1:0]               ), //i
    .block_msg_payload_pkg_length          (streamDemux_5_io_outputs_2_payload_pkg_length[19:0]            ), //i
    .block_msg_payload_rnti_scramble       (streamDemux_5_io_outputs_2_payload_rnti_scramble[15:0]         ), //i
    .result_data_valid                     (shared_channel_segment_result_data_valid                       ), //o
    .result_data_ready                     (streamMux_3_io_inputs_2_ready                                  ), //i
    .result_data_payload_last              (shared_channel_segment_result_data_payload_last                ), //o
    .result_data_payload_fragment          (shared_channel_segment_result_data_payload_fragment[1:0]       ), //o
    .segment_msg_valid                     (shared_channel_segment_segment_msg_valid                       ), //o
    .segment_msg_ready                     (streamMux_4_io_inputs_2_ready                                  ), //i
    .segment_msg_payload_segment_length    (shared_channel_segment_segment_msg_payload_segment_length[12:0]), //o
    .segment_msg_payload_segment_code_type (shared_channel_segment_segment_msg_payload_segment_code_type   ), //o
    .is_last_block                         (shared_channel_segment_is_last_block                           ), //o
    .clk                                   (clk                                                            ), //i
    .reset                                 (reset                                                          )  //i
  );
  StreamDemux_2 streamDemux_4 (
    .io_select                     (sel_cha[1:0]                               ), //i
    .io_input_valid                (streamDemux_4_io_input_valid               ), //i
    .io_input_ready                (streamDemux_4_io_input_ready               ), //o
    .io_input_payload_last         (data_fifo_io_pop_payload_last              ), //i
    .io_input_payload_fragment     (data_fifo_io_pop_payload_fragment          ), //i
    .io_outputs_0_valid            (streamDemux_4_io_outputs_0_valid           ), //o
    .io_outputs_0_ready            (broadcast_channel_segment_raw_data_ready   ), //i
    .io_outputs_0_payload_last     (streamDemux_4_io_outputs_0_payload_last    ), //o
    .io_outputs_0_payload_fragment (streamDemux_4_io_outputs_0_payload_fragment), //o
    .io_outputs_1_valid            (streamDemux_4_io_outputs_1_valid           ), //o
    .io_outputs_1_ready            (control_channel_segment_raw_data_ready     ), //i
    .io_outputs_1_payload_last     (streamDemux_4_io_outputs_1_payload_last    ), //o
    .io_outputs_1_payload_fragment (streamDemux_4_io_outputs_1_payload_fragment), //o
    .io_outputs_2_valid            (streamDemux_4_io_outputs_2_valid           ), //o
    .io_outputs_2_ready            (shared_channel_segment_raw_data_ready      ), //i
    .io_outputs_2_payload_last     (streamDemux_4_io_outputs_2_payload_last    ), //o
    .io_outputs_2_payload_fragment (streamDemux_4_io_outputs_2_payload_fragment)  //o
  );
  StreamDemux_1 streamDemux_5 (
    .io_select                          (sel_cha[1:0]                                          ), //i
    .io_input_valid                     (streamDemux_5_io_input_valid                          ), //i
    .io_input_ready                     (streamDemux_5_io_input_ready                          ), //o
    .io_input_payload_pkg_type          (_zz_io_input_payload_pkg_type[1:0]                    ), //i
    .io_input_payload_pkg_length        (msg_fifo_io_pop_payload_pkg_length[19:0]              ), //i
    .io_input_payload_rnti_scramble     (msg_fifo_io_pop_payload_rnti_scramble[15:0]           ), //i
    .io_outputs_0_valid                 (streamDemux_5_io_outputs_0_valid                      ), //o
    .io_outputs_0_ready                 (broadcast_channel_segment_block_msg_ready             ), //i
    .io_outputs_0_payload_pkg_type      (streamDemux_5_io_outputs_0_payload_pkg_type[1:0]      ), //o
    .io_outputs_0_payload_pkg_length    (streamDemux_5_io_outputs_0_payload_pkg_length[19:0]   ), //o
    .io_outputs_0_payload_rnti_scramble (streamDemux_5_io_outputs_0_payload_rnti_scramble[15:0]), //o
    .io_outputs_1_valid                 (streamDemux_5_io_outputs_1_valid                      ), //o
    .io_outputs_1_ready                 (control_channel_segment_block_msg_ready               ), //i
    .io_outputs_1_payload_pkg_type      (streamDemux_5_io_outputs_1_payload_pkg_type[1:0]      ), //o
    .io_outputs_1_payload_pkg_length    (streamDemux_5_io_outputs_1_payload_pkg_length[19:0]   ), //o
    .io_outputs_1_payload_rnti_scramble (streamDemux_5_io_outputs_1_payload_rnti_scramble[15:0]), //o
    .io_outputs_2_valid                 (streamDemux_5_io_outputs_2_valid                      ), //o
    .io_outputs_2_ready                 (shared_channel_segment_block_msg_ready                ), //i
    .io_outputs_2_payload_pkg_type      (streamDemux_5_io_outputs_2_payload_pkg_type[1:0]      ), //o
    .io_outputs_2_payload_pkg_length    (streamDemux_5_io_outputs_2_payload_pkg_length[19:0]   ), //o
    .io_outputs_2_payload_rnti_scramble (streamDemux_5_io_outputs_2_payload_rnti_scramble[15:0])  //o
  );
  StreamMux_1 streamMux_3 (
    .io_select                    (sel_cha[1:0]                                               ), //i
    .io_inputs_0_valid            (broadcast_channel_segment_result_data_valid                ), //i
    .io_inputs_0_ready            (streamMux_3_io_inputs_0_ready                              ), //o
    .io_inputs_0_payload_last     (broadcast_channel_segment_result_data_payload_last         ), //i
    .io_inputs_0_payload_fragment (broadcast_channel_segment_result_data_payload_fragment[1:0]), //i
    .io_inputs_1_valid            (control_channel_segment_result_data_valid                  ), //i
    .io_inputs_1_ready            (streamMux_3_io_inputs_1_ready                              ), //o
    .io_inputs_1_payload_last     (control_channel_segment_result_data_payload_last           ), //i
    .io_inputs_1_payload_fragment (control_channel_segment_result_data_payload_fragment[1:0]  ), //i
    .io_inputs_2_valid            (shared_channel_segment_result_data_valid                   ), //i
    .io_inputs_2_ready            (streamMux_3_io_inputs_2_ready                              ), //o
    .io_inputs_2_payload_last     (shared_channel_segment_result_data_payload_last            ), //i
    .io_inputs_2_payload_fragment (shared_channel_segment_result_data_payload_fragment[1:0]   ), //i
    .io_output_valid              (streamMux_3_io_output_valid                                ), //o
    .io_output_ready              (result_data_ready                                          ), //i
    .io_output_payload_last       (streamMux_3_io_output_payload_last                         ), //o
    .io_output_payload_fragment   (streamMux_3_io_output_payload_fragment[1:0]                )  //o
  );
  StreamMux streamMux_4 (
    .io_select                             (sel_cha[1:0]                                                      ), //i
    .io_inputs_0_valid                     (broadcast_channel_segment_segment_msg_valid                       ), //i
    .io_inputs_0_ready                     (streamMux_4_io_inputs_0_ready                                     ), //o
    .io_inputs_0_payload_segment_length    (broadcast_channel_segment_segment_msg_payload_segment_length[12:0]), //i
    .io_inputs_0_payload_segment_code_type (broadcast_channel_segment_segment_msg_payload_segment_code_type   ), //i
    .io_inputs_1_valid                     (control_channel_segment_segment_msg_valid                         ), //i
    .io_inputs_1_ready                     (streamMux_4_io_inputs_1_ready                                     ), //o
    .io_inputs_1_payload_segment_length    (control_channel_segment_segment_msg_payload_segment_length[12:0]  ), //i
    .io_inputs_1_payload_segment_code_type (control_channel_segment_segment_msg_payload_segment_code_type     ), //i
    .io_inputs_2_valid                     (shared_channel_segment_segment_msg_valid                          ), //i
    .io_inputs_2_ready                     (streamMux_4_io_inputs_2_ready                                     ), //o
    .io_inputs_2_payload_segment_length    (shared_channel_segment_segment_msg_payload_segment_length[12:0]   ), //i
    .io_inputs_2_payload_segment_code_type (shared_channel_segment_segment_msg_payload_segment_code_type      ), //i
    .io_output_valid                       (streamMux_4_io_output_valid                                       ), //o
    .io_output_ready                       (segment_msg_ready                                                 ), //i
    .io_output_payload_segment_length      (streamMux_4_io_output_payload_segment_length[12:0]                ), //o
    .io_output_payload_segment_code_type   (streamMux_4_io_output_payload_segment_code_type                   )  //o
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(block_msg_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : block_msg_payload_pkg_type_string = "PTCH";
      default : block_msg_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_msg_payload_segment_code_type)
      ChannelCodingMethod_Turbo : segment_msg_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_msg_payload_segment_code_type_string = "TailedConvolutional";
      default : segment_msg_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(state)
      BlockSegmentStatus_IDLE : state_string = "IDLE  ";
      BlockSegmentStatus_BYPASS : state_string = "BYPASS";
      default : state_string = "??????";
    endcase
  end
  always @(*) begin
    case(_zz_io_input_payload_pkg_type)
      PhysicalChannel_PBCH : _zz_io_input_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : _zz_io_input_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : _zz_io_input_payload_pkg_type_string = "PTCH";
      default : _zz_io_input_payload_pkg_type_string = "????";
    endcase
  end
  `endif

  assign result_data_fire = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l576 = ((result_data_fire && result_data_payload_last) && finish_indicator[sel_cha]); // @[BaseType.scala 305:24]
  assign raw_data_ready = data_fifo_io_push_ready; // @[Stream.scala 295:16]
  assign block_msg_ready = msg_fifo_io_push_ready; // @[Stream.scala 295:16]
  assign _zz_io_pop_ready = (! (state == BlockSegmentStatus_IDLE)); // @[BaseType.scala 299:24]
  assign data_fifo_io_pop_ready = (streamDemux_4_io_input_ready && _zz_io_pop_ready); // @[Stream.scala 427:16]
  assign streamDemux_4_io_input_valid = (data_fifo_io_pop_valid && _zz_io_pop_ready); // @[Stream.scala 294:16]
  assign _zz_io_pop_ready_1 = (! (state == BlockSegmentStatus_IDLE)); // @[BaseType.scala 299:24]
  assign msg_fifo_io_pop_ready = (streamDemux_5_io_input_ready && _zz_io_pop_ready_1); // @[Stream.scala 427:16]
  assign _zz_io_input_payload_pkg_type = msg_fifo_io_pop_payload_pkg_type; // @[Stream.scala 428:18]
  assign streamDemux_5_io_input_valid = (msg_fifo_io_pop_valid && _zz_io_pop_ready_1); // @[Stream.scala 294:16]
  always @(*) begin
    finish_indicator[0] = broadcast_channel_segment_is_last_block; // @[PhyTX.scala 591:25]
    finish_indicator[1] = control_channel_segment_is_last_block; // @[PhyTX.scala 592:25]
    finish_indicator[2] = shared_channel_segment_is_last_block; // @[PhyTX.scala 593:25]
    finish_indicator[3] = 1'b0; // @[PhyTX.scala 594:25]
  end

  assign result_data_valid = streamMux_3_io_output_valid; // @[Stream.scala 294:16]
  assign result_data_payload_last = streamMux_3_io_output_payload_last; // @[Stream.scala 296:18]
  assign result_data_payload_fragment = streamMux_3_io_output_payload_fragment; // @[Stream.scala 296:18]
  assign segment_msg_valid = streamMux_4_io_output_valid; // @[Stream.scala 294:16]
  assign segment_msg_payload_segment_length = streamMux_4_io_output_payload_segment_length; // @[Stream.scala 296:18]
  assign segment_msg_payload_segment_code_type = streamMux_4_io_output_payload_segment_code_type; // @[Stream.scala 296:18]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      state <= BlockSegmentStatus_IDLE; // @[Data.scala 400:33]
    end else begin
      case(state)
        BlockSegmentStatus_IDLE : begin
          if(msg_fifo_io_pop_valid) begin
            state <= BlockSegmentStatus_BYPASS; // @[Enum.scala 148:67]
          end
        end
        default : begin
          if(when_PhyTX_l576) begin
            state <= BlockSegmentStatus_IDLE; // @[Enum.scala 148:67]
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(state)
      BlockSegmentStatus_IDLE : begin
        if(msg_fifo_io_pop_valid) begin
          sel_cha <= msg_fifo_io_pop_payload_pkg_type; // @[PhyTX.scala 572:25]
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module TxCrcAttachment (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [0:0]    result_data_payload_fragment,
  input               block_msg_ctrl_in_valid,
  output              block_msg_ctrl_in_ready,
  input      [1:0]    block_msg_ctrl_in_payload_pkg_type,
  input      [19:0]   block_msg_ctrl_in_payload_pkg_length,
  input      [15:0]   block_msg_ctrl_in_payload_rnti_scramble,
  output              block_msg_ctrl_out_valid,
  input               block_msg_ctrl_out_ready,
  output     [1:0]    block_msg_ctrl_out_payload_pkg_type,
  output     [19:0]   block_msg_ctrl_out_payload_pkg_length,
  output     [15:0]   block_msg_ctrl_out_payload_rnti_scramble,
  input               clk,
  input               reset
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PTCH = 2'd2;

  wire       [0:0]    streamDemux_4_io_select;
  wire                streamDemux_4_io_input_valid;
  wire       [0:0]    streamMux_3_io_select;
  wire                crc24a_core_raw_data_ready;
  wire                crc24a_core_result_data_valid;
  wire                crc24a_core_result_data_payload_last;
  wire       [0:0]    crc24a_core_result_data_payload_fragment;
  wire                crc16_core_raw_data_ready;
  wire                crc16_core_result_data_valid;
  wire                crc16_core_result_data_payload_last;
  wire       [0:0]    crc16_core_result_data_payload_fragment;
  wire                streamDemux_4_io_input_ready;
  wire                streamDemux_4_io_outputs_0_valid;
  wire                streamDemux_4_io_outputs_0_payload_last;
  wire       [0:0]    streamDemux_4_io_outputs_0_payload_fragment;
  wire                streamDemux_4_io_outputs_1_valid;
  wire                streamDemux_4_io_outputs_1_payload_last;
  wire       [0:0]    streamDemux_4_io_outputs_1_payload_fragment;
  wire                streamMux_3_io_inputs_0_ready;
  wire                streamMux_3_io_inputs_1_ready;
  wire                streamMux_3_io_output_valid;
  wire                streamMux_3_io_output_payload_last;
  wire       [0:0]    streamMux_3_io_output_payload_fragment;
  wire       [19:0]   _zz_message_pkg_length;
  wire       [4:0]    _zz_message_pkg_length_1;
  reg                 ctrl_in_enable;
  reg        [1:0]    message_pkg_type;
  reg        [19:0]   message_pkg_length;
  reg        [15:0]   message_rnti_scramble;
  reg                 ctrl_out_valid;
  wire                block_msg_ctrl_in_fire;
  wire                result_data_fire;
  wire                when_PhyTX_l108;
  wire                block_msg_ctrl_out_fire;
  wire                path_sel;
  reg                 crc_raw_halt;
  wire                block_msg_ctrl_out_fire_1;
  wire                raw_data_fire;
  wire                when_PhyTX_l124;
  wire                _zz_raw_data_ready;
  `ifndef SYNTHESIS
  reg [31:0] block_msg_ctrl_in_payload_pkg_type_string;
  reg [31:0] block_msg_ctrl_out_payload_pkg_type_string;
  reg [31:0] message_pkg_type_string;
  `endif


  assign _zz_message_pkg_length_1 = ((block_msg_ctrl_in_payload_pkg_type == PhysicalChannel_PCCH) ? 5'h10 : 5'h18);
  assign _zz_message_pkg_length = {15'd0, _zz_message_pkg_length_1};
  TxCrcUnit_1 crc24a_core (
    .raw_data_valid               (streamDemux_4_io_outputs_0_valid           ), //i
    .raw_data_ready               (crc24a_core_raw_data_ready                 ), //o
    .raw_data_payload_last        (streamDemux_4_io_outputs_0_payload_last    ), //i
    .raw_data_payload_fragment    (streamDemux_4_io_outputs_0_payload_fragment), //i
    .result_data_valid            (crc24a_core_result_data_valid              ), //o
    .result_data_ready            (streamMux_3_io_inputs_0_ready              ), //i
    .result_data_payload_last     (crc24a_core_result_data_payload_last       ), //o
    .result_data_payload_fragment (crc24a_core_result_data_payload_fragment   ), //o
    .clk                          (clk                                        ), //i
    .reset                        (reset                                      )  //i
  );
  TxCrcUnit crc16_core (
    .raw_data_valid               (streamDemux_4_io_outputs_1_valid           ), //i
    .raw_data_ready               (crc16_core_raw_data_ready                  ), //o
    .raw_data_payload_last        (streamDemux_4_io_outputs_1_payload_last    ), //i
    .raw_data_payload_fragment    (streamDemux_4_io_outputs_1_payload_fragment), //i
    .result_data_valid            (crc16_core_result_data_valid               ), //o
    .result_data_ready            (streamMux_3_io_inputs_1_ready              ), //i
    .result_data_payload_last     (crc16_core_result_data_payload_last        ), //o
    .result_data_payload_fragment (crc16_core_result_data_payload_fragment    ), //o
    .clk                          (clk                                        ), //i
    .reset                        (reset                                      )  //i
  );
  StreamDemux_3 streamDemux_4 (
    .io_select                     (streamDemux_4_io_select                    ), //i
    .io_input_valid                (streamDemux_4_io_input_valid               ), //i
    .io_input_ready                (streamDemux_4_io_input_ready               ), //o
    .io_input_payload_last         (raw_data_payload_last                      ), //i
    .io_input_payload_fragment     (raw_data_payload_fragment                  ), //i
    .io_outputs_0_valid            (streamDemux_4_io_outputs_0_valid           ), //o
    .io_outputs_0_ready            (crc24a_core_raw_data_ready                 ), //i
    .io_outputs_0_payload_last     (streamDemux_4_io_outputs_0_payload_last    ), //o
    .io_outputs_0_payload_fragment (streamDemux_4_io_outputs_0_payload_fragment), //o
    .io_outputs_1_valid            (streamDemux_4_io_outputs_1_valid           ), //o
    .io_outputs_1_ready            (crc16_core_raw_data_ready                  ), //i
    .io_outputs_1_payload_last     (streamDemux_4_io_outputs_1_payload_last    ), //o
    .io_outputs_1_payload_fragment (streamDemux_4_io_outputs_1_payload_fragment)  //o
  );
  StreamMux_2 streamMux_3 (
    .io_select                    (streamMux_3_io_select                   ), //i
    .io_inputs_0_valid            (crc24a_core_result_data_valid           ), //i
    .io_inputs_0_ready            (streamMux_3_io_inputs_0_ready           ), //o
    .io_inputs_0_payload_last     (crc24a_core_result_data_payload_last    ), //i
    .io_inputs_0_payload_fragment (crc24a_core_result_data_payload_fragment), //i
    .io_inputs_1_valid            (crc16_core_result_data_valid            ), //i
    .io_inputs_1_ready            (streamMux_3_io_inputs_1_ready           ), //o
    .io_inputs_1_payload_last     (crc16_core_result_data_payload_last     ), //i
    .io_inputs_1_payload_fragment (crc16_core_result_data_payload_fragment ), //i
    .io_output_valid              (streamMux_3_io_output_valid             ), //o
    .io_output_ready              (result_data_ready                       ), //i
    .io_output_payload_last       (streamMux_3_io_output_payload_last      ), //o
    .io_output_payload_fragment   (streamMux_3_io_output_payload_fragment  )  //o
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(block_msg_ctrl_in_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_ctrl_in_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_ctrl_in_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : block_msg_ctrl_in_payload_pkg_type_string = "PTCH";
      default : block_msg_ctrl_in_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(block_msg_ctrl_out_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_ctrl_out_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_ctrl_out_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : block_msg_ctrl_out_payload_pkg_type_string = "PTCH";
      default : block_msg_ctrl_out_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(message_pkg_type)
      PhysicalChannel_PBCH : message_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : message_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : message_pkg_type_string = "PTCH";
      default : message_pkg_type_string = "????";
    endcase
  end
  `endif

  assign block_msg_ctrl_in_fire = (block_msg_ctrl_in_valid && block_msg_ctrl_in_ready); // @[BaseType.scala 305:24]
  assign result_data_fire = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l108 = (result_data_fire && result_data_payload_last); // @[BaseType.scala 305:24]
  assign block_msg_ctrl_out_fire = (block_msg_ctrl_out_valid && block_msg_ctrl_out_ready); // @[BaseType.scala 305:24]
  assign block_msg_ctrl_in_ready = (ctrl_in_enable && block_msg_ctrl_out_ready); // @[PhyTX.scala 115:32]
  assign block_msg_ctrl_out_payload_pkg_type = message_pkg_type; // @[PhyTX.scala 116:35]
  assign block_msg_ctrl_out_payload_pkg_length = message_pkg_length; // @[PhyTX.scala 116:35]
  assign block_msg_ctrl_out_payload_rnti_scramble = message_rnti_scramble; // @[PhyTX.scala 116:35]
  assign block_msg_ctrl_out_valid = ctrl_out_valid; // @[PhyTX.scala 117:33]
  assign path_sel = (message_pkg_type == PhysicalChannel_PCCH); // @[BaseType.scala 305:24]
  assign block_msg_ctrl_out_fire_1 = (block_msg_ctrl_out_valid && block_msg_ctrl_out_ready); // @[BaseType.scala 305:24]
  assign raw_data_fire = (raw_data_valid && raw_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l124 = (raw_data_fire && raw_data_payload_last); // @[BaseType.scala 305:24]
  assign _zz_raw_data_ready = (! crc_raw_halt); // @[BaseType.scala 299:24]
  assign raw_data_ready = (streamDemux_4_io_input_ready && _zz_raw_data_ready); // @[Stream.scala 427:16]
  assign streamDemux_4_io_input_valid = (raw_data_valid && _zz_raw_data_ready); // @[Stream.scala 294:16]
  assign streamDemux_4_io_select = path_sel; // @[Stream.scala 882:17]
  assign streamMux_3_io_select = path_sel; // @[Stream.scala 844:17]
  assign result_data_valid = streamMux_3_io_output_valid; // @[Stream.scala 294:16]
  assign result_data_payload_last = streamMux_3_io_output_payload_last; // @[Stream.scala 296:18]
  assign result_data_payload_fragment = streamMux_3_io_output_payload_fragment; // @[Stream.scala 296:18]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      ctrl_in_enable <= 1'b1; // @[Data.scala 400:33]
      ctrl_out_valid <= 1'b0; // @[Data.scala 400:33]
      crc_raw_halt <= 1'b1; // @[Data.scala 400:33]
    end else begin
      if(block_msg_ctrl_in_fire) begin
        ctrl_in_enable <= 1'b0; // @[PhyTX.scala 102:24]
        ctrl_out_valid <= 1'b1; // @[PhyTX.scala 106:24]
      end else begin
        if(when_PhyTX_l108) begin
          ctrl_in_enable <= 1'b1; // @[PhyTX.scala 109:28]
        end
        if(block_msg_ctrl_out_fire) begin
          ctrl_out_valid <= 1'b0; // @[PhyTX.scala 112:28]
        end
      end
      if(block_msg_ctrl_out_fire_1) begin
        crc_raw_halt <= 1'b0; // @[PhyTX.scala 122:22]
      end else begin
        if(when_PhyTX_l124) begin
          crc_raw_halt <= 1'b1; // @[PhyTX.scala 125:26]
        end
      end
    end
  end

  always @(posedge clk) begin
    if(block_msg_ctrl_in_fire) begin
      message_pkg_type <= block_msg_ctrl_in_payload_pkg_type; // @[PhyTX.scala 103:26]
      message_pkg_length <= (block_msg_ctrl_in_payload_pkg_length + _zz_message_pkg_length); // @[PhyTX.scala 104:28]
      message_rnti_scramble <= block_msg_ctrl_in_payload_rnti_scramble; // @[PhyTX.scala 105:31]
    end
  end


endmodule

module FlowMux (
  input               inputs_0_valid,
  input               inputs_0_payload_last,
  input      [3:0]    inputs_0_payload_fragment,
  input               inputs_1_valid,
  input               inputs_1_payload_last,
  input      [3:0]    inputs_1_payload_fragment,
  input      [0:0]    select_1,
  output              output_valid,
  output              output_payload_last,
  output     [3:0]    output_payload_fragment
);

  reg                 _zz_output_valid;
  reg                 _zz_output_payload_last;
  reg        [3:0]    _zz_output_payload_fragment;

  always @(*) begin
    case(select_1)
      1'b0 : begin
        _zz_output_valid = inputs_0_valid;
        _zz_output_payload_last = inputs_0_payload_last;
        _zz_output_payload_fragment = inputs_0_payload_fragment;
      end
      default : begin
        _zz_output_valid = inputs_1_valid;
        _zz_output_payload_last = inputs_1_payload_last;
        _zz_output_payload_fragment = inputs_1_payload_fragment;
      end
    endcase
  end

  assign output_valid = _zz_output_valid; // @[FlowMux.scala 16:21]
  assign output_payload_last = _zz_output_payload_last; // @[FlowMux.scala 17:23]
  assign output_payload_fragment = _zz_output_payload_fragment; // @[FlowMux.scala 17:23]

endmodule

module StreamDemux (
  input      [0:0]    io_select,
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [1:0]    io_input_payload_fragment,
  output reg          io_outputs_0_valid,
  input               io_outputs_0_ready,
  output              io_outputs_0_payload_last,
  output     [1:0]    io_outputs_0_payload_fragment,
  output reg          io_outputs_1_valid,
  input               io_outputs_1_ready,
  output              io_outputs_1_payload_last,
  output     [1:0]    io_outputs_1_payload_fragment
);

  wire                when_Stream_l908;
  wire                when_Stream_l908_1;

  always @(*) begin
    io_input_ready = 1'b0; // @[Stream.scala 905:18]
    if(!when_Stream_l908) begin
      io_input_ready = io_outputs_0_ready; // @[Stream.scala 912:22]
    end
    if(!when_Stream_l908_1) begin
      io_input_ready = io_outputs_1_ready; // @[Stream.scala 912:22]
    end
  end

  assign io_outputs_0_payload_last = io_input_payload_last; // @[Stream.scala 907:27]
  assign io_outputs_0_payload_fragment = io_input_payload_fragment; // @[Stream.scala 907:27]
  assign when_Stream_l908 = (1'b0 != io_select); // @[BaseType.scala 305:24]
  always @(*) begin
    if(when_Stream_l908) begin
      io_outputs_0_valid = 1'b0; // @[Stream.scala 909:27]
    end else begin
      io_outputs_0_valid = io_input_valid; // @[Stream.scala 911:27]
    end
  end

  assign io_outputs_1_payload_last = io_input_payload_last; // @[Stream.scala 907:27]
  assign io_outputs_1_payload_fragment = io_input_payload_fragment; // @[Stream.scala 907:27]
  assign when_Stream_l908_1 = (1'b1 != io_select); // @[BaseType.scala 305:24]
  always @(*) begin
    if(when_Stream_l908_1) begin
      io_outputs_1_valid = 1'b0; // @[Stream.scala 909:27]
    end else begin
      io_outputs_1_valid = io_input_valid; // @[Stream.scala 911:27]
    end
  end


endmodule

module TailedConvCodeEncoder (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [1:0]    raw_data_payload_fragment,
  output              result_data_valid,
  output              result_data_payload_last,
  output     [3:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);

  reg                 tailed_conv_encoder_tail_bits_valid;
  reg        [6:0]    tailed_conv_encoder_tail_bits_payload;
  reg                 tailed_conv_encoder_raw_data_valid;
  reg                 tailed_conv_encoder_raw_data_payload_last;
  reg        [0:0]    tailed_conv_encoder_raw_data_payload_fragment;
  wire                data_fifo_io_push_valid;
  wire       [0:0]    data_fifo_io_push_payload_fragment;
  reg                 data_fifo_io_pop_ready;
  wire                tailed_conv_encoder_raw_data_ready;
  wire                tailed_conv_encoder_coded_data_valid;
  wire                tailed_conv_encoder_coded_data_payload_last;
  wire       [2:0]    tailed_conv_encoder_coded_data_payload_fragment;
  wire                data_fifo_io_push_ready;
  wire                data_fifo_io_pop_valid;
  wire                data_fifo_io_pop_payload_last;
  wire       [0:0]    data_fifo_io_pop_payload_fragment;
  wire       [12:0]   data_fifo_io_occupancy;
  wire       [12:0]   data_fifo_io_availability;
  wire       [7:0]    _zz_tail_bits;
  wire       [7:0]    _zz_tail_bits_payload;
  reg                 isEncoding;
  reg                 loaded_tail_bits;
  reg        [6:0]    tail_bits;
  wire                raw_data_fire;
  wire                when_PhyTX_l623;
  wire                tailed_conv_encoder_data_fifo_io_pop_fire;
  wire                when_PhyTX_l630;
  wire                raw_data_fire_1;
  wire                raw_data_fire_2;
  wire                when_PhyTX_l648;

  assign _zz_tail_bits = {raw_data_payload_fragment[0],tail_bits};
  assign _zz_tail_bits_payload = {raw_data_payload_fragment[0],tail_bits};
  ConvEncoder tailed_conv_encoder (
    .tail_bits_valid             (tailed_conv_encoder_tail_bits_valid                 ), //i
    .tail_bits_payload           (tailed_conv_encoder_tail_bits_payload[6:0]          ), //i
    .raw_data_valid              (tailed_conv_encoder_raw_data_valid                  ), //i
    .raw_data_ready              (tailed_conv_encoder_raw_data_ready                  ), //o
    .raw_data_payload_last       (tailed_conv_encoder_raw_data_payload_last           ), //i
    .raw_data_payload_fragment   (tailed_conv_encoder_raw_data_payload_fragment       ), //i
    .coded_data_valid            (tailed_conv_encoder_coded_data_valid                ), //o
    .coded_data_payload_last     (tailed_conv_encoder_coded_data_payload_last         ), //o
    .coded_data_payload_fragment (tailed_conv_encoder_coded_data_payload_fragment[2:0]), //o
    .clk                         (clk                                                 ), //i
    .reset                       (reset                                               )  //i
  );
  StreamFifo_4 data_fifo (
    .io_push_valid            (data_fifo_io_push_valid           ), //i
    .io_push_ready            (data_fifo_io_push_ready           ), //o
    .io_push_payload_last     (raw_data_payload_last             ), //i
    .io_push_payload_fragment (data_fifo_io_push_payload_fragment), //i
    .io_pop_valid             (data_fifo_io_pop_valid            ), //o
    .io_pop_ready             (data_fifo_io_pop_ready            ), //i
    .io_pop_payload_last      (data_fifo_io_pop_payload_last     ), //o
    .io_pop_payload_fragment  (data_fifo_io_pop_payload_fragment ), //o
    .io_flush                 (1'b0                              ), //i
    .io_occupancy             (data_fifo_io_occupancy[12:0]      ), //o
    .io_availability          (data_fifo_io_availability[12:0]   ), //o
    .clk                      (clk                               ), //i
    .reset                    (reset                             )  //i
  );
  assign data_fifo_io_push_valid = (raw_data_valid && (! isEncoding)); // @[PhyTX.scala 618:29]
  assign raw_data_ready = (data_fifo_io_push_ready && (! isEncoding)); // @[PhyTX.scala 619:23]
  assign data_fifo_io_push_payload_fragment = raw_data_payload_fragment[0]; // @[PhyTX.scala 621:32]
  assign raw_data_fire = (raw_data_valid && raw_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l623 = (raw_data_fire && raw_data_payload_last); // @[BaseType.scala 305:24]
  assign tailed_conv_encoder_data_fifo_io_pop_fire = (data_fifo_io_pop_valid && data_fifo_io_pop_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l630 = (tailed_conv_encoder_data_fifo_io_pop_fire && data_fifo_io_pop_payload_last); // @[BaseType.scala 305:24]
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready); // @[BaseType.scala 305:24]
  always @(*) begin
    if(isEncoding) begin
      data_fifo_io_pop_ready = tailed_conv_encoder_raw_data_ready; // @[PhyTX.scala 638:32]
    end else begin
      data_fifo_io_pop_ready = 1'b0; // @[PhyTX.scala 643:32]
    end
  end

  always @(*) begin
    if(isEncoding) begin
      tailed_conv_encoder_raw_data_valid = data_fifo_io_pop_valid; // @[PhyTX.scala 639:47]
    end else begin
      tailed_conv_encoder_raw_data_valid = 1'b0; // @[PhyTX.scala 644:47]
    end
  end

  always @(*) begin
    if(isEncoding) begin
      tailed_conv_encoder_raw_data_payload_fragment = data_fifo_io_pop_payload_fragment; // @[PhyTX.scala 640:50]
    end else begin
      tailed_conv_encoder_raw_data_payload_fragment = 1'b0; // @[PhyTX.scala 645:50]
    end
  end

  always @(*) begin
    if(isEncoding) begin
      tailed_conv_encoder_raw_data_payload_last = data_fifo_io_pop_payload_last; // @[PhyTX.scala 641:46]
    end else begin
      tailed_conv_encoder_raw_data_payload_last = 1'b0; // @[PhyTX.scala 646:46]
    end
  end

  assign raw_data_fire_2 = (raw_data_valid && raw_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l648 = (raw_data_fire_2 && raw_data_payload_last); // @[BaseType.scala 305:24]
  always @(*) begin
    if(when_PhyTX_l648) begin
      tailed_conv_encoder_tail_bits_payload = _zz_tail_bits_payload[7 : 1]; // @[PhyTX.scala 649:50]
    end else begin
      tailed_conv_encoder_tail_bits_payload = 7'h0; // @[PhyTX.scala 652:50]
    end
  end

  always @(*) begin
    if(when_PhyTX_l648) begin
      tailed_conv_encoder_tail_bits_valid = 1'b1; // @[PhyTX.scala 650:48]
    end else begin
      tailed_conv_encoder_tail_bits_valid = 1'b0; // @[PhyTX.scala 653:48]
    end
  end

  assign result_data_valid = tailed_conv_encoder_coded_data_valid; // @[PhyTX.scala 656:26]
  assign result_data_payload_last = tailed_conv_encoder_coded_data_payload_last; // @[PhyTX.scala 657:25]
  assign result_data_payload_fragment = {1'b1,tailed_conv_encoder_coded_data_payload_fragment}; // @[PhyTX.scala 658:29]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      isEncoding <= 1'b0; // @[Data.scala 400:33]
      loaded_tail_bits <= 1'b0; // @[Data.scala 400:33]
    end else begin
      if(when_PhyTX_l623) begin
        loaded_tail_bits <= 1'b1; // @[PhyTX.scala 624:26]
      end else begin
        loaded_tail_bits <= 1'b0; // @[PhyTX.scala 626:26]
      end
      if(loaded_tail_bits) begin
        isEncoding <= 1'b1; // @[PhyTX.scala 629:20]
      end else begin
        if(when_PhyTX_l630) begin
          isEncoding <= 1'b0; // @[PhyTX.scala 631:20]
        end
      end
    end
  end

  always @(posedge clk) begin
    if(raw_data_fire_1) begin
      tail_bits <= _zz_tail_bits[7 : 1]; // @[PhyTX.scala 634:19]
    end
  end


endmodule

module TurboEncoder (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [1:0]    raw_data_payload_fragment,
  output              result_data_valid,
  output              result_data_payload_last,
  output     [3:0]    result_data_payload_fragment
);


  assign result_data_payload_last = raw_data_payload_last; // @[PhyTX.scala 668:25]
  assign result_data_valid = raw_data_valid; // @[PhyTX.scala 669:26]
  assign raw_data_ready = 1'b1; // @[PhyTX.scala 670:23]
  assign result_data_payload_fragment = {2'b01,raw_data_payload_fragment}; // @[PhyTX.scala 672:29]

endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input      [12:0]   io_push_payload_segment_length,
  input      [0:0]    io_push_payload_segment_code_type,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [12:0]   io_pop_payload_segment_length,
  output     [0:0]    io_pop_payload_segment_code_type,
  input               io_flush,
  output     [2:0]    io_occupancy,
  output     [2:0]    io_availability,
  input               clk,
  input               reset
);
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;

  reg        [13:0]   _zz_logic_ram_port0;
  wire       [1:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [1:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_segment_length;
  wire       [13:0]   _zz_logic_ram_port_1;
  wire       [1:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [1:0]    logic_pushPtr_valueNext;
  reg        [1:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [1:0]    logic_popPtr_valueNext;
  reg        [1:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [0:0]    _zz_io_pop_payload_segment_code_type;
  wire       [13:0]   _zz_io_pop_payload_segment_length;
  wire       [0:0]    _zz_io_pop_payload_segment_code_type_1;
  wire                when_Stream_l1101;
  wire       [1:0]    logic_ptrDif;
  `ifndef SYNTHESIS
  reg [151:0] io_push_payload_segment_code_type_string;
  reg [151:0] io_pop_payload_segment_code_type_string;
  reg [151:0] _zz_io_pop_payload_segment_code_type_string;
  reg [151:0] _zz_io_pop_payload_segment_code_type_1_string;
  `endif

  reg [13:0] logic_ram [0:3];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {1'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {1'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_segment_length = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_segment_code_type,io_push_payload_segment_length};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_segment_length) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(io_push_payload_segment_code_type)
      ChannelCodingMethod_Turbo : io_push_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : io_push_payload_segment_code_type_string = "TailedConvolutional";
      default : io_push_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(io_pop_payload_segment_code_type)
      ChannelCodingMethod_Turbo : io_pop_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : io_pop_payload_segment_code_type_string = "TailedConvolutional";
      default : io_pop_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(_zz_io_pop_payload_segment_code_type)
      ChannelCodingMethod_Turbo : _zz_io_pop_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : _zz_io_pop_payload_segment_code_type_string = "TailedConvolutional";
      default : _zz_io_pop_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(_zz_io_pop_payload_segment_code_type_1)
      ChannelCodingMethod_Turbo : _zz_io_pop_payload_segment_code_type_1_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : _zz_io_pop_payload_segment_code_type_1_string = "TailedConvolutional";
      default : _zz_io_pop_payload_segment_code_type_1_string = "???????????????????";
    endcase
  end
  `endif

  always @(*) begin
    _zz_1 = 1'b0; // @[when.scala 47:16]
    if(logic_pushing) begin
      _zz_1 = 1'b1; // @[when.scala 52:10]
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1; // @[Utils.scala 540:41]
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0; // @[Utils.scala 537:19]
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1; // @[Utils.scala 539:33]
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 2'b11); // @[BaseType.scala 305:24]
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext); // @[Utils.scala 548:15]
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 2'b00; // @[Utils.scala 558:15]
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1; // @[Utils.scala 540:41]
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0; // @[Utils.scala 537:19]
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1; // @[Utils.scala 539:33]
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 2'b11); // @[BaseType.scala 305:24]
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext); // @[Utils.scala 548:15]
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 2'b00; // @[Utils.scala 558:15]
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value); // @[BaseType.scala 305:24]
  assign logic_pushing = (io_push_valid && io_push_ready); // @[BaseType.scala 305:24]
  assign logic_popping = (io_pop_valid && io_pop_ready); // @[BaseType.scala 305:24]
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy)); // @[BaseType.scala 305:24]
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy); // @[BaseType.scala 305:24]
  assign io_push_ready = (! logic_full); // @[Stream.scala 1097:19]
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full)))); // @[Stream.scala 1098:18]
  assign _zz_io_pop_payload_segment_length = _zz_logic_ram_port0; // @[Mem.scala 310:24]
  assign _zz_io_pop_payload_segment_code_type_1 = _zz_io_pop_payload_segment_length[13 : 13]; // @[Enum.scala 186:17]
  assign _zz_io_pop_payload_segment_code_type = _zz_io_pop_payload_segment_code_type_1; // @[Enum.scala 188:10]
  assign io_pop_payload_segment_length = _zz_io_pop_payload_segment_length[12 : 0]; // @[Stream.scala 1099:20]
  assign io_pop_payload_segment_code_type = _zz_io_pop_payload_segment_code_type; // @[Stream.scala 1099:20]
  assign when_Stream_l1101 = (logic_pushing != logic_popping); // @[BaseType.scala 305:24]
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value); // @[BaseType.scala 299:24]
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif}; // @[Stream.scala 1114:20]
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability}; // @[Stream.scala 1115:23]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 2'b00; // @[Data.scala 400:33]
      logic_popPtr_value <= 2'b00; // @[Data.scala 400:33]
      logic_risingOccupancy <= 1'b0; // @[Data.scala 400:33]
      _zz_io_pop_valid <= 1'b0; // @[Data.scala 400:33]
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext; // @[Reg.scala 39:30]
      logic_popPtr_value <= logic_popPtr_valueNext; // @[Reg.scala 39:30]
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value); // @[Reg.scala 39:30]
      if(when_Stream_l1101) begin
        logic_risingOccupancy <= logic_pushing; // @[Stream.scala 1102:23]
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0; // @[Stream.scala 1129:23]
      end
    end
  end


endmodule

module StreamFifo_1 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [1:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [1:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [2:0]    _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [2:0]    _zz_logic_ram_port_1;
  wire       [4:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [4:0]    logic_pushPtr_valueNext;
  reg        [4:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [4:0]    logic_popPtr_valueNext;
  reg        [4:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [2:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l1101;
  wire       [4:0]    logic_ptrDif;
  reg [2:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_fragment,io_push_payload_last};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0; // @[when.scala 47:16]
    if(logic_pushing) begin
      _zz_1 = 1'b1; // @[when.scala 52:10]
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1; // @[Utils.scala 540:41]
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0; // @[Utils.scala 537:19]
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1; // @[Utils.scala 539:33]
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 5'h1f); // @[BaseType.scala 305:24]
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext); // @[Utils.scala 548:15]
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 5'h0; // @[Utils.scala 558:15]
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1; // @[Utils.scala 540:41]
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0; // @[Utils.scala 537:19]
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1; // @[Utils.scala 539:33]
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 5'h1f); // @[BaseType.scala 305:24]
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext); // @[Utils.scala 548:15]
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 5'h0; // @[Utils.scala 558:15]
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value); // @[BaseType.scala 305:24]
  assign logic_pushing = (io_push_valid && io_push_ready); // @[BaseType.scala 305:24]
  assign logic_popping = (io_pop_valid && io_pop_ready); // @[BaseType.scala 305:24]
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy)); // @[BaseType.scala 305:24]
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy); // @[BaseType.scala 305:24]
  assign io_push_ready = (! logic_full); // @[Stream.scala 1097:19]
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full)))); // @[Stream.scala 1098:18]
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0; // @[Mem.scala 310:24]
  assign io_pop_payload_last = _zz_io_pop_payload_last[0]; // @[Stream.scala 1099:20]
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[2 : 1]; // @[Stream.scala 1099:20]
  assign when_Stream_l1101 = (logic_pushing != logic_popping); // @[BaseType.scala 305:24]
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value); // @[BaseType.scala 299:24]
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif}; // @[Stream.scala 1114:20]
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability}; // @[Stream.scala 1115:23]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 5'h0; // @[Data.scala 400:33]
      logic_popPtr_value <= 5'h0; // @[Data.scala 400:33]
      logic_risingOccupancy <= 1'b0; // @[Data.scala 400:33]
      _zz_io_pop_valid <= 1'b0; // @[Data.scala 400:33]
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext; // @[Reg.scala 39:30]
      logic_popPtr_value <= logic_popPtr_valueNext; // @[Reg.scala 39:30]
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value); // @[Reg.scala 39:30]
      if(when_Stream_l1101) begin
        logic_risingOccupancy <= logic_pushing; // @[Stream.scala 1102:23]
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0; // @[Stream.scala 1129:23]
      end
    end
  end


endmodule

module StreamMux (
  input      [1:0]    io_select,
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input      [12:0]   io_inputs_0_payload_segment_length,
  input      [0:0]    io_inputs_0_payload_segment_code_type,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input      [12:0]   io_inputs_1_payload_segment_length,
  input      [0:0]    io_inputs_1_payload_segment_code_type,
  input               io_inputs_2_valid,
  output              io_inputs_2_ready,
  input      [12:0]   io_inputs_2_payload_segment_length,
  input      [0:0]    io_inputs_2_payload_segment_code_type,
  output              io_output_valid,
  input               io_output_ready,
  output     [12:0]   io_output_payload_segment_length,
  output     [0:0]    io_output_payload_segment_code_type
);
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;

  reg        [0:0]    _zz__zz_io_output_payload_segment_code_type;
  reg                 _zz_io_output_valid;
  reg        [12:0]   _zz_io_output_payload_segment_length;
  wire       [0:0]    _zz_io_output_payload_segment_code_type;
  `ifndef SYNTHESIS
  reg [151:0] io_inputs_0_payload_segment_code_type_string;
  reg [151:0] io_inputs_1_payload_segment_code_type_string;
  reg [151:0] io_inputs_2_payload_segment_code_type_string;
  reg [151:0] io_output_payload_segment_code_type_string;
  reg [151:0] _zz_io_output_payload_segment_code_type_string;
  `endif


  always @(*) begin
    case(io_select)
      2'b00 : begin
        _zz__zz_io_output_payload_segment_code_type = io_inputs_0_payload_segment_code_type;
        _zz_io_output_valid = io_inputs_0_valid;
        _zz_io_output_payload_segment_length = io_inputs_0_payload_segment_length;
      end
      2'b01 : begin
        _zz__zz_io_output_payload_segment_code_type = io_inputs_1_payload_segment_code_type;
        _zz_io_output_valid = io_inputs_1_valid;
        _zz_io_output_payload_segment_length = io_inputs_1_payload_segment_length;
      end
      default : begin
        _zz__zz_io_output_payload_segment_code_type = io_inputs_2_payload_segment_code_type;
        _zz_io_output_valid = io_inputs_2_valid;
        _zz_io_output_payload_segment_length = io_inputs_2_payload_segment_length;
      end
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(io_inputs_0_payload_segment_code_type)
      ChannelCodingMethod_Turbo : io_inputs_0_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : io_inputs_0_payload_segment_code_type_string = "TailedConvolutional";
      default : io_inputs_0_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(io_inputs_1_payload_segment_code_type)
      ChannelCodingMethod_Turbo : io_inputs_1_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : io_inputs_1_payload_segment_code_type_string = "TailedConvolutional";
      default : io_inputs_1_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(io_inputs_2_payload_segment_code_type)
      ChannelCodingMethod_Turbo : io_inputs_2_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : io_inputs_2_payload_segment_code_type_string = "TailedConvolutional";
      default : io_inputs_2_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(io_output_payload_segment_code_type)
      ChannelCodingMethod_Turbo : io_output_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : io_output_payload_segment_code_type_string = "TailedConvolutional";
      default : io_output_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(_zz_io_output_payload_segment_code_type)
      ChannelCodingMethod_Turbo : _zz_io_output_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : _zz_io_output_payload_segment_code_type_string = "TailedConvolutional";
      default : _zz_io_output_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  `endif

  assign io_inputs_0_ready = ((io_select == 2'b00) && io_output_ready); // @[Stream.scala 868:17]
  assign io_inputs_1_ready = ((io_select == 2'b01) && io_output_ready); // @[Stream.scala 868:17]
  assign io_inputs_2_ready = ((io_select == 2'b10) && io_output_ready); // @[Stream.scala 868:17]
  assign _zz_io_output_payload_segment_code_type = _zz__zz_io_output_payload_segment_code_type; // @[Vec.scala 202:25]
  assign io_output_valid = _zz_io_output_valid; // @[Stream.scala 870:19]
  assign io_output_payload_segment_length = _zz_io_output_payload_segment_length; // @[Stream.scala 871:21]
  assign io_output_payload_segment_code_type = _zz_io_output_payload_segment_code_type; // @[Stream.scala 871:21]

endmodule

module StreamMux_1 (
  input      [1:0]    io_select,
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input               io_inputs_0_payload_last,
  input      [1:0]    io_inputs_0_payload_fragment,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input               io_inputs_1_payload_last,
  input      [1:0]    io_inputs_1_payload_fragment,
  input               io_inputs_2_valid,
  output              io_inputs_2_ready,
  input               io_inputs_2_payload_last,
  input      [1:0]    io_inputs_2_payload_fragment,
  output              io_output_valid,
  input               io_output_ready,
  output              io_output_payload_last,
  output     [1:0]    io_output_payload_fragment
);

  reg                 _zz_io_output_valid;
  reg                 _zz_io_output_payload_last;
  reg        [1:0]    _zz_io_output_payload_fragment;

  always @(*) begin
    case(io_select)
      2'b00 : begin
        _zz_io_output_valid = io_inputs_0_valid;
        _zz_io_output_payload_last = io_inputs_0_payload_last;
        _zz_io_output_payload_fragment = io_inputs_0_payload_fragment;
      end
      2'b01 : begin
        _zz_io_output_valid = io_inputs_1_valid;
        _zz_io_output_payload_last = io_inputs_1_payload_last;
        _zz_io_output_payload_fragment = io_inputs_1_payload_fragment;
      end
      default : begin
        _zz_io_output_valid = io_inputs_2_valid;
        _zz_io_output_payload_last = io_inputs_2_payload_last;
        _zz_io_output_payload_fragment = io_inputs_2_payload_fragment;
      end
    endcase
  end

  assign io_inputs_0_ready = ((io_select == 2'b00) && io_output_ready); // @[Stream.scala 868:17]
  assign io_inputs_1_ready = ((io_select == 2'b01) && io_output_ready); // @[Stream.scala 868:17]
  assign io_inputs_2_ready = ((io_select == 2'b10) && io_output_ready); // @[Stream.scala 868:17]
  assign io_output_valid = _zz_io_output_valid; // @[Stream.scala 870:19]
  assign io_output_payload_last = _zz_io_output_payload_last; // @[Stream.scala 871:21]
  assign io_output_payload_fragment = _zz_io_output_payload_fragment; // @[Stream.scala 871:21]

endmodule

module StreamDemux_1 (
  input      [1:0]    io_select,
  input               io_input_valid,
  output reg          io_input_ready,
  input      [1:0]    io_input_payload_pkg_type,
  input      [19:0]   io_input_payload_pkg_length,
  input      [15:0]   io_input_payload_rnti_scramble,
  output reg          io_outputs_0_valid,
  input               io_outputs_0_ready,
  output     [1:0]    io_outputs_0_payload_pkg_type,
  output     [19:0]   io_outputs_0_payload_pkg_length,
  output     [15:0]   io_outputs_0_payload_rnti_scramble,
  output reg          io_outputs_1_valid,
  input               io_outputs_1_ready,
  output     [1:0]    io_outputs_1_payload_pkg_type,
  output     [19:0]   io_outputs_1_payload_pkg_length,
  output     [15:0]   io_outputs_1_payload_rnti_scramble,
  output reg          io_outputs_2_valid,
  input               io_outputs_2_ready,
  output     [1:0]    io_outputs_2_payload_pkg_type,
  output     [19:0]   io_outputs_2_payload_pkg_length,
  output     [15:0]   io_outputs_2_payload_rnti_scramble
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PTCH = 2'd2;

  wire                when_Stream_l908;
  wire                when_Stream_l908_1;
  wire                when_Stream_l908_2;
  `ifndef SYNTHESIS
  reg [31:0] io_input_payload_pkg_type_string;
  reg [31:0] io_outputs_0_payload_pkg_type_string;
  reg [31:0] io_outputs_1_payload_pkg_type_string;
  reg [31:0] io_outputs_2_payload_pkg_type_string;
  `endif


  `ifndef SYNTHESIS
  always @(*) begin
    case(io_input_payload_pkg_type)
      PhysicalChannel_PBCH : io_input_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : io_input_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : io_input_payload_pkg_type_string = "PTCH";
      default : io_input_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(io_outputs_0_payload_pkg_type)
      PhysicalChannel_PBCH : io_outputs_0_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : io_outputs_0_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : io_outputs_0_payload_pkg_type_string = "PTCH";
      default : io_outputs_0_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(io_outputs_1_payload_pkg_type)
      PhysicalChannel_PBCH : io_outputs_1_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : io_outputs_1_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : io_outputs_1_payload_pkg_type_string = "PTCH";
      default : io_outputs_1_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(io_outputs_2_payload_pkg_type)
      PhysicalChannel_PBCH : io_outputs_2_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : io_outputs_2_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : io_outputs_2_payload_pkg_type_string = "PTCH";
      default : io_outputs_2_payload_pkg_type_string = "????";
    endcase
  end
  `endif

  always @(*) begin
    io_input_ready = 1'b0; // @[Stream.scala 905:18]
    if(!when_Stream_l908) begin
      io_input_ready = io_outputs_0_ready; // @[Stream.scala 912:22]
    end
    if(!when_Stream_l908_1) begin
      io_input_ready = io_outputs_1_ready; // @[Stream.scala 912:22]
    end
    if(!when_Stream_l908_2) begin
      io_input_ready = io_outputs_2_ready; // @[Stream.scala 912:22]
    end
  end

  assign io_outputs_0_payload_pkg_type = io_input_payload_pkg_type; // @[Stream.scala 907:27]
  assign io_outputs_0_payload_pkg_length = io_input_payload_pkg_length; // @[Stream.scala 907:27]
  assign io_outputs_0_payload_rnti_scramble = io_input_payload_rnti_scramble; // @[Stream.scala 907:27]
  assign when_Stream_l908 = (2'b00 != io_select); // @[BaseType.scala 305:24]
  always @(*) begin
    if(when_Stream_l908) begin
      io_outputs_0_valid = 1'b0; // @[Stream.scala 909:27]
    end else begin
      io_outputs_0_valid = io_input_valid; // @[Stream.scala 911:27]
    end
  end

  assign io_outputs_1_payload_pkg_type = io_input_payload_pkg_type; // @[Stream.scala 907:27]
  assign io_outputs_1_payload_pkg_length = io_input_payload_pkg_length; // @[Stream.scala 907:27]
  assign io_outputs_1_payload_rnti_scramble = io_input_payload_rnti_scramble; // @[Stream.scala 907:27]
  assign when_Stream_l908_1 = (2'b01 != io_select); // @[BaseType.scala 305:24]
  always @(*) begin
    if(when_Stream_l908_1) begin
      io_outputs_1_valid = 1'b0; // @[Stream.scala 909:27]
    end else begin
      io_outputs_1_valid = io_input_valid; // @[Stream.scala 911:27]
    end
  end

  assign io_outputs_2_payload_pkg_type = io_input_payload_pkg_type; // @[Stream.scala 907:27]
  assign io_outputs_2_payload_pkg_length = io_input_payload_pkg_length; // @[Stream.scala 907:27]
  assign io_outputs_2_payload_rnti_scramble = io_input_payload_rnti_scramble; // @[Stream.scala 907:27]
  assign when_Stream_l908_2 = (2'b10 != io_select); // @[BaseType.scala 305:24]
  always @(*) begin
    if(when_Stream_l908_2) begin
      io_outputs_2_valid = 1'b0; // @[Stream.scala 909:27]
    end else begin
      io_outputs_2_valid = io_input_valid; // @[Stream.scala 911:27]
    end
  end


endmodule

module StreamDemux_2 (
  input      [1:0]    io_select,
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [0:0]    io_input_payload_fragment,
  output reg          io_outputs_0_valid,
  input               io_outputs_0_ready,
  output              io_outputs_0_payload_last,
  output     [0:0]    io_outputs_0_payload_fragment,
  output reg          io_outputs_1_valid,
  input               io_outputs_1_ready,
  output              io_outputs_1_payload_last,
  output     [0:0]    io_outputs_1_payload_fragment,
  output reg          io_outputs_2_valid,
  input               io_outputs_2_ready,
  output              io_outputs_2_payload_last,
  output     [0:0]    io_outputs_2_payload_fragment
);

  wire                when_Stream_l908;
  wire                when_Stream_l908_1;
  wire                when_Stream_l908_2;

  always @(*) begin
    io_input_ready = 1'b0; // @[Stream.scala 905:18]
    if(!when_Stream_l908) begin
      io_input_ready = io_outputs_0_ready; // @[Stream.scala 912:22]
    end
    if(!when_Stream_l908_1) begin
      io_input_ready = io_outputs_1_ready; // @[Stream.scala 912:22]
    end
    if(!when_Stream_l908_2) begin
      io_input_ready = io_outputs_2_ready; // @[Stream.scala 912:22]
    end
  end

  assign io_outputs_0_payload_last = io_input_payload_last; // @[Stream.scala 907:27]
  assign io_outputs_0_payload_fragment = io_input_payload_fragment; // @[Stream.scala 907:27]
  assign when_Stream_l908 = (2'b00 != io_select); // @[BaseType.scala 305:24]
  always @(*) begin
    if(when_Stream_l908) begin
      io_outputs_0_valid = 1'b0; // @[Stream.scala 909:27]
    end else begin
      io_outputs_0_valid = io_input_valid; // @[Stream.scala 911:27]
    end
  end

  assign io_outputs_1_payload_last = io_input_payload_last; // @[Stream.scala 907:27]
  assign io_outputs_1_payload_fragment = io_input_payload_fragment; // @[Stream.scala 907:27]
  assign when_Stream_l908_1 = (2'b01 != io_select); // @[BaseType.scala 305:24]
  always @(*) begin
    if(when_Stream_l908_1) begin
      io_outputs_1_valid = 1'b0; // @[Stream.scala 909:27]
    end else begin
      io_outputs_1_valid = io_input_valid; // @[Stream.scala 911:27]
    end
  end

  assign io_outputs_2_payload_last = io_input_payload_last; // @[Stream.scala 907:27]
  assign io_outputs_2_payload_fragment = io_input_payload_fragment; // @[Stream.scala 907:27]
  assign when_Stream_l908_2 = (2'b10 != io_select); // @[BaseType.scala 305:24]
  always @(*) begin
    if(when_Stream_l908_2) begin
      io_outputs_2_valid = 1'b0; // @[Stream.scala 909:27]
    end else begin
      io_outputs_2_valid = io_input_valid; // @[Stream.scala 911:27]
    end
  end


endmodule

module PSCHCrcAttachment (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  input               block_msg_valid,
  output              block_msg_ready,
  input      [1:0]    block_msg_payload_pkg_type,
  input      [19:0]   block_msg_payload_pkg_length,
  input      [15:0]   block_msg_payload_rnti_scramble,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [1:0]    result_data_payload_fragment,
  output              segment_msg_valid,
  input               segment_msg_ready,
  output     [12:0]   segment_msg_payload_segment_length,
  output     [0:0]    segment_msg_payload_segment_code_type,
  output              is_last_block,
  input               clk,
  input               reset
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PTCH = 2'd2;
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;
  localparam PSCHCrcAttachmentStatus_IDLE = 3'd0;
  localparam PSCHCrcAttachmentStatus_CALC_NUM = 3'd1;
  localparam PSCHCrcAttachmentStatus_CALC_K = 3'd2;
  localparam PSCHCrcAttachmentStatus_CALC_C_F = 3'd3;
  localparam PSCHCrcAttachmentStatus_MATCH_SIZE = 3'd4;
  localparam PSCHCrcAttachmentStatus_CTRL_EMIT = 3'd5;
  localparam PSCHCrcAttachmentStatus_ZERO_PADDING = 3'd6;
  localparam PSCHCrcAttachmentStatus_BYPASS = 3'd7;

  wire                crc24b_core_raw_data_valid;
  wire                crc24b_core_raw_data_payload_last;
  wire                crc24b_core_result_data_ready;
  wire                crc24b_core_raw_data_ready;
  wire                crc24b_core_result_data_valid;
  wire                crc24b_core_result_data_payload_last;
  wire       [0:0]    crc24b_core_result_data_payload_fragment;
  wire                unsigned_divider_cmd_ready;
  wire                unsigned_divider_rsp_valid;
  wire       [19:0]   unsigned_divider_rsp_payload_quotient;
  wire       [12:0]   unsigned_divider_rsp_payload_remainder;
  wire                unsigned_divider_rsp_payload_error;
  wire       [9:0]    _zz_code_block_resized;
  wire       [9:0]    _zz_code_block_resized_1;
  wire       [0:0]    _zz_code_block_resized_2;
  wire       [8:0]    _zz_code_block_resized_3;
  wire       [8:0]    _zz_code_block_resized_4;
  wire       [0:0]    _zz_code_block_resized_5;
  wire       [7:0]    _zz_code_block_resized_6;
  wire       [7:0]    _zz_code_block_resized_7;
  wire       [0:0]    _zz_code_block_resized_8;
  wire       [6:0]    _zz_code_block_resized_9;
  wire       [6:0]    _zz_code_block_resized_10;
  wire       [0:0]    _zz_code_block_resized_11;
  wire       [12:0]   _zz_switch_PhyTX_l364;
  wire       [7:0]    _zz_segment_num;
  wire       [7:0]    _zz_segment_num_1;
  wire       [0:0]    _zz_segment_num_2;
  wire       [19:0]   _zz_zero_padding_cnt;
  wire       [19:0]   _zz_numerator;
  wire       [19:0]   _zz_numerator_1;
  wire       [11:0]   _zz_numerator_2;
  wire       [19:0]   _zz_numerator_3;
  wire       [10:0]   _zz_numerator_4;
  wire       [19:0]   _zz_zero_padding_cnt_1;
  wire       [19:0]   _zz_zero_padding_cnt_2;
  wire       [14:0]   _zz_zero_padding_cnt_3;
  wire       [20:0]   _zz_F;
  wire       [20:0]   _zz_F_1;
  wire       [20:0]   _zz_F_2;
  wire       [20:0]   _zz_Cn;
  wire       [20:0]   _zz_Cn_1;
  wire       [20:0]   _zz_Cn_2;
  wire       [20:0]   _zz_Cn_3;
  reg        [2:0]    state;
  reg        [12:0]   segment_message_segment_length;
  reg        [0:0]    segment_message_segment_code_type;
  reg                 block_msg_enable;
  reg        [12:0]   zero_padding_cnt;
  reg        [12:0]   payload_cnt;
  reg                 emit_step;
  reg                 crc_mode;
  reg        [7:0]    C;
  reg        [7:0]    Cp;
  reg        [7:0]    Cn;
  reg        [12:0]   Kp;
  reg        [12:0]   Kn;
  reg        [19:0]   F;
  reg        [2:0]    shift_step;
  reg        [19:0]   numerator;
  reg        [12:0]   denominator;
  reg                 divide_enable;
  reg        [12:0]   code_block_resized;
  wire       [3:0]    switch_PhyTX_l347;
  reg        [12:0]   Kp_temp;
  reg        [12:0]   Kn_temp;
  reg        [2:0]    shift_step_temp;
  wire       [3:0]    switch_PhyTX_l364;
  wire       [7:0]    segment_num;
  wire                block_msg_fire;
  wire                when_PhyTX_l391;
  wire                when_PhyTX_l396;
  wire                shared_channel_segment_unsigned_divider_cmd_fire;
  wire                shared_channel_segment_unsigned_divider_rsp_fire;
  wire                shared_channel_segment_unsigned_divider_cmd_fire_1;
  wire                shared_channel_segment_unsigned_divider_rsp_fire_1;
  wire                when_PhyTX_l449;
  wire                segment_msg_fire;
  wire                when_PhyTX_l478;
  wire                when_PhyTX_l487;
  wire       [2:0]    _zz_state;
  wire                result_data_fire;
  wire                when_PhyTX_l503;
  wire                result_data_fire_1;
  wire                when_PhyTX_l515;
  wire       [2:0]    _zz_state_1;
  wire                result_data_fire_2;
  wire                when_PhyTX_l523;
  `ifndef SYNTHESIS
  reg [31:0] block_msg_payload_pkg_type_string;
  reg [151:0] segment_msg_payload_segment_code_type_string;
  reg [95:0] state_string;
  reg [151:0] segment_message_segment_code_type_string;
  reg [95:0] _zz_state_string;
  reg [95:0] _zz_state_1_string;
  `endif


  assign _zz_code_block_resized = (segment_message_segment_length[12 : 3] + _zz_code_block_resized_1);
  assign _zz_code_block_resized_2 = (segment_message_segment_length[2 : 0] != 3'b000);
  assign _zz_code_block_resized_1 = {9'd0, _zz_code_block_resized_2};
  assign _zz_code_block_resized_3 = (segment_message_segment_length[12 : 4] + _zz_code_block_resized_4);
  assign _zz_code_block_resized_5 = (segment_message_segment_length[3 : 0] != 4'b0000);
  assign _zz_code_block_resized_4 = {8'd0, _zz_code_block_resized_5};
  assign _zz_code_block_resized_6 = (segment_message_segment_length[12 : 5] + _zz_code_block_resized_7);
  assign _zz_code_block_resized_8 = (segment_message_segment_length[4 : 0] != 5'h0);
  assign _zz_code_block_resized_7 = {7'd0, _zz_code_block_resized_8};
  assign _zz_code_block_resized_9 = (segment_message_segment_length[12 : 6] + _zz_code_block_resized_10);
  assign _zz_code_block_resized_11 = (segment_message_segment_length[5 : 0] != 6'h0);
  assign _zz_code_block_resized_10 = {6'd0, _zz_code_block_resized_11};
  assign _zz_switch_PhyTX_l364 = unsigned_divider_rsp_payload_quotient[12:0];
  assign _zz_segment_num = unsigned_divider_rsp_payload_quotient[7:0];
  assign _zz_segment_num_2 = (unsigned_divider_rsp_payload_remainder != 13'h0);
  assign _zz_segment_num_1 = {7'd0, _zz_segment_num_2};
  assign _zz_zero_padding_cnt = (20'h00028 - block_msg_payload_pkg_length);
  assign _zz_numerator = (numerator + _zz_numerator_1);
  assign _zz_numerator_2 = ({4'd0,segment_num} <<< 4);
  assign _zz_numerator_1 = {8'd0, _zz_numerator_2};
  assign _zz_numerator_4 = ({3'd0,segment_num} <<< 3);
  assign _zz_numerator_3 = {9'd0, _zz_numerator_4};
  assign _zz_zero_padding_cnt_1 = (F - _zz_zero_padding_cnt_2);
  assign _zz_zero_padding_cnt_3 = ({7'd0,Cn} <<< shift_step);
  assign _zz_zero_padding_cnt_2 = {5'd0, _zz_zero_padding_cnt_3};
  assign _zz_F = (_zz_F_1 - _zz_F_2);
  assign _zz_F_1 = (C * Kp);
  assign _zz_F_2 = {1'd0, numerator};
  assign _zz_Cn = (_zz_Cn_1 >>> shift_step);
  assign _zz_Cn_1 = (_zz_Cn_2 - _zz_Cn_3);
  assign _zz_Cn_2 = (Kp * C);
  assign _zz_Cn_3 = {1'd0, numerator};
  TxCrcUnit_2 crc24b_core (
    .raw_data_valid               (crc24b_core_raw_data_valid              ), //i
    .raw_data_ready               (crc24b_core_raw_data_ready              ), //o
    .raw_data_payload_last        (crc24b_core_raw_data_payload_last       ), //i
    .raw_data_payload_fragment    (raw_data_payload_fragment               ), //i
    .result_data_valid            (crc24b_core_result_data_valid           ), //o
    .result_data_ready            (crc24b_core_result_data_ready           ), //i
    .result_data_payload_last     (crc24b_core_result_data_payload_last    ), //o
    .result_data_payload_fragment (crc24b_core_result_data_payload_fragment), //o
    .clk                          (clk                                     ), //i
    .reset                        (reset                                   )  //i
  );
  UnsignedDivider unsigned_divider (
    .flush                   (1'b0                                        ), //i
    .cmd_valid               (divide_enable                               ), //i
    .cmd_ready               (unsigned_divider_cmd_ready                  ), //o
    .cmd_payload_numerator   (numerator[19:0]                             ), //i
    .cmd_payload_denominator (denominator[12:0]                           ), //i
    .rsp_valid               (unsigned_divider_rsp_valid                  ), //o
    .rsp_ready               (1'b1                                        ), //i
    .rsp_payload_quotient    (unsigned_divider_rsp_payload_quotient[19:0] ), //o
    .rsp_payload_remainder   (unsigned_divider_rsp_payload_remainder[12:0]), //o
    .rsp_payload_error       (unsigned_divider_rsp_payload_error          ), //o
    .clk                     (clk                                         ), //i
    .reset                   (reset                                       )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(block_msg_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : block_msg_payload_pkg_type_string = "PTCH";
      default : block_msg_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_msg_payload_segment_code_type)
      ChannelCodingMethod_Turbo : segment_msg_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_msg_payload_segment_code_type_string = "TailedConvolutional";
      default : segment_msg_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(state)
      PSCHCrcAttachmentStatus_IDLE : state_string = "IDLE        ";
      PSCHCrcAttachmentStatus_CALC_NUM : state_string = "CALC_NUM    ";
      PSCHCrcAttachmentStatus_CALC_K : state_string = "CALC_K      ";
      PSCHCrcAttachmentStatus_CALC_C_F : state_string = "CALC_C_F    ";
      PSCHCrcAttachmentStatus_MATCH_SIZE : state_string = "MATCH_SIZE  ";
      PSCHCrcAttachmentStatus_CTRL_EMIT : state_string = "CTRL_EMIT   ";
      PSCHCrcAttachmentStatus_ZERO_PADDING : state_string = "ZERO_PADDING";
      PSCHCrcAttachmentStatus_BYPASS : state_string = "BYPASS      ";
      default : state_string = "????????????";
    endcase
  end
  always @(*) begin
    case(segment_message_segment_code_type)
      ChannelCodingMethod_Turbo : segment_message_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_message_segment_code_type_string = "TailedConvolutional";
      default : segment_message_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(_zz_state)
      PSCHCrcAttachmentStatus_IDLE : _zz_state_string = "IDLE        ";
      PSCHCrcAttachmentStatus_CALC_NUM : _zz_state_string = "CALC_NUM    ";
      PSCHCrcAttachmentStatus_CALC_K : _zz_state_string = "CALC_K      ";
      PSCHCrcAttachmentStatus_CALC_C_F : _zz_state_string = "CALC_C_F    ";
      PSCHCrcAttachmentStatus_MATCH_SIZE : _zz_state_string = "MATCH_SIZE  ";
      PSCHCrcAttachmentStatus_CTRL_EMIT : _zz_state_string = "CTRL_EMIT   ";
      PSCHCrcAttachmentStatus_ZERO_PADDING : _zz_state_string = "ZERO_PADDING";
      PSCHCrcAttachmentStatus_BYPASS : _zz_state_string = "BYPASS      ";
      default : _zz_state_string = "????????????";
    endcase
  end
  always @(*) begin
    case(_zz_state_1)
      PSCHCrcAttachmentStatus_IDLE : _zz_state_1_string = "IDLE        ";
      PSCHCrcAttachmentStatus_CALC_NUM : _zz_state_1_string = "CALC_NUM    ";
      PSCHCrcAttachmentStatus_CALC_K : _zz_state_1_string = "CALC_K      ";
      PSCHCrcAttachmentStatus_CALC_C_F : _zz_state_1_string = "CALC_C_F    ";
      PSCHCrcAttachmentStatus_MATCH_SIZE : _zz_state_1_string = "MATCH_SIZE  ";
      PSCHCrcAttachmentStatus_CTRL_EMIT : _zz_state_1_string = "CTRL_EMIT   ";
      PSCHCrcAttachmentStatus_ZERO_PADDING : _zz_state_1_string = "ZERO_PADDING";
      PSCHCrcAttachmentStatus_BYPASS : _zz_state_1_string = "BYPASS      ";
      default : _zz_state_1_string = "????????????";
    endcase
  end
  `endif

  assign switch_PhyTX_l347 = (segment_message_segment_length >>> 9); // @[BaseType.scala 299:24]
  always @(*) begin
    case(switch_PhyTX_l347)
      4'b0000 : begin
        code_block_resized = {_zz_code_block_resized,3'b000}; // @[PhyTX.scala 349:32]
      end
      4'b0001 : begin
        code_block_resized = {_zz_code_block_resized_3,4'b0000}; // @[PhyTX.scala 352:32]
      end
      4'b0010 : begin
        code_block_resized = {_zz_code_block_resized_6,5'h0}; // @[PhyTX.scala 355:32]
      end
      default : begin
        code_block_resized = {_zz_code_block_resized_9,6'h0}; // @[PhyTX.scala 358:32]
      end
    endcase
  end

  assign switch_PhyTX_l364 = (_zz_switch_PhyTX_l364 >>> 9); // @[BaseType.scala 299:24]
  always @(*) begin
    case(switch_PhyTX_l364)
      4'b0000 : begin
        Kn_temp = {unsigned_divider_rsp_payload_quotient[12 : 3],3'b000}; // @[PhyTX.scala 366:21]
      end
      4'b0001 : begin
        Kn_temp = {unsigned_divider_rsp_payload_quotient[12 : 4],4'b0000}; // @[PhyTX.scala 371:21]
      end
      4'b0010 : begin
        Kn_temp = {unsigned_divider_rsp_payload_quotient[12 : 5],5'h0}; // @[PhyTX.scala 376:21]
      end
      default : begin
        Kn_temp = {unsigned_divider_rsp_payload_quotient[12 : 6],6'h0}; // @[PhyTX.scala 381:21]
      end
    endcase
  end

  always @(*) begin
    case(switch_PhyTX_l364)
      4'b0000 : begin
        Kp_temp = (Kn_temp + 13'h0008); // @[PhyTX.scala 367:21]
      end
      4'b0001 : begin
        Kp_temp = (Kn_temp + 13'h0010); // @[PhyTX.scala 372:21]
      end
      4'b0010 : begin
        Kp_temp = (Kn_temp + 13'h0020); // @[PhyTX.scala 377:21]
      end
      default : begin
        Kp_temp = (Kn_temp + 13'h0040); // @[PhyTX.scala 382:21]
      end
    endcase
  end

  always @(*) begin
    case(switch_PhyTX_l364)
      4'b0000 : begin
        shift_step_temp = 3'b011; // @[PhyTX.scala 368:29]
      end
      4'b0001 : begin
        shift_step_temp = 3'b100; // @[PhyTX.scala 373:29]
      end
      4'b0010 : begin
        shift_step_temp = 3'b101; // @[PhyTX.scala 378:29]
      end
      default : begin
        shift_step_temp = 3'b110; // @[PhyTX.scala 383:29]
      end
    endcase
  end

  assign segment_num = (_zz_segment_num + _zz_segment_num_1); // @[BaseType.scala 299:24]
  assign block_msg_fire = (block_msg_valid && block_msg_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l391 = (block_msg_payload_pkg_length < 20'h00028); // @[BaseType.scala 305:24]
  assign when_PhyTX_l396 = (block_msg_payload_pkg_length <= 20'h01800); // @[BaseType.scala 305:24]
  always @(*) begin
    case(state)
      PSCHCrcAttachmentStatus_IDLE : begin
        result_data_valid = 1'b0; // @[PhyTX.scala 412:34]
      end
      PSCHCrcAttachmentStatus_CALC_NUM : begin
        result_data_valid = 1'b0; // @[PhyTX.scala 427:34]
      end
      PSCHCrcAttachmentStatus_CALC_K : begin
        result_data_valid = 1'b0; // @[PhyTX.scala 442:34]
      end
      PSCHCrcAttachmentStatus_CALC_C_F : begin
        result_data_valid = 1'b0; // @[PhyTX.scala 463:34]
      end
      PSCHCrcAttachmentStatus_MATCH_SIZE : begin
        result_data_valid = 1'b0; // @[PhyTX.scala 470:34]
      end
      PSCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_valid = 1'b0; // @[PhyTX.scala 493:34]
      end
      PSCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_valid = 1'b1; // @[PhyTX.scala 507:34]
      end
      default : begin
        if(crc_mode) begin
          result_data_valid = crc24b_core_result_data_valid; // @[PhyTX.scala 519:38]
        end else begin
          result_data_valid = raw_data_valid; // @[PhyTX.scala 527:38]
        end
      end
    endcase
  end

  always @(*) begin
    case(state)
      PSCHCrcAttachmentStatus_IDLE : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 413:33]
      end
      PSCHCrcAttachmentStatus_CALC_NUM : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 428:33]
      end
      PSCHCrcAttachmentStatus_CALC_K : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 443:33]
      end
      PSCHCrcAttachmentStatus_CALC_C_F : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 464:33]
      end
      PSCHCrcAttachmentStatus_MATCH_SIZE : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 471:33]
      end
      PSCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 494:33]
      end
      PSCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 508:33]
      end
      default : begin
        if(crc_mode) begin
          result_data_payload_last = crc24b_core_result_data_payload_last; // @[PhyTX.scala 520:37]
        end else begin
          result_data_payload_last = raw_data_payload_last; // @[PhyTX.scala 528:37]
        end
      end
    endcase
  end

  always @(*) begin
    case(state)
      PSCHCrcAttachmentStatus_IDLE : begin
        result_data_payload_fragment = 2'b00; // @[PhyTX.scala 414:37]
      end
      PSCHCrcAttachmentStatus_CALC_NUM : begin
        result_data_payload_fragment = 2'b00; // @[PhyTX.scala 429:37]
      end
      PSCHCrcAttachmentStatus_CALC_K : begin
        result_data_payload_fragment = 2'b00; // @[PhyTX.scala 444:37]
      end
      PSCHCrcAttachmentStatus_CALC_C_F : begin
        result_data_payload_fragment = 2'b00; // @[PhyTX.scala 465:37]
      end
      PSCHCrcAttachmentStatus_MATCH_SIZE : begin
        result_data_payload_fragment = 2'b00; // @[PhyTX.scala 472:37]
      end
      PSCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_payload_fragment = 2'b00; // @[PhyTX.scala 495:37]
      end
      PSCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_payload_fragment = 2'b00; // @[PhyTX.scala 509:37]
      end
      default : begin
        if(crc_mode) begin
          result_data_payload_fragment = {1'b1,crc24b_core_result_data_payload_fragment}; // @[PhyTX.scala 521:41]
        end else begin
          result_data_payload_fragment = {1'b1,raw_data_payload_fragment}; // @[PhyTX.scala 529:41]
        end
      end
    endcase
  end

  assign shared_channel_segment_unsigned_divider_cmd_fire = (divide_enable && unsigned_divider_cmd_ready); // @[BaseType.scala 305:24]
  assign shared_channel_segment_unsigned_divider_rsp_fire = (unsigned_divider_rsp_valid && 1'b1); // @[BaseType.scala 305:24]
  assign shared_channel_segment_unsigned_divider_cmd_fire_1 = (divide_enable && unsigned_divider_cmd_ready); // @[BaseType.scala 305:24]
  assign shared_channel_segment_unsigned_divider_rsp_fire_1 = (unsigned_divider_rsp_valid && 1'b1); // @[BaseType.scala 305:24]
  assign when_PhyTX_l449 = (Cn == 8'h0); // @[BaseType.scala 305:24]
  assign segment_msg_fire = (segment_msg_valid && segment_msg_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l478 = (Cn == 8'h0); // @[BaseType.scala 305:24]
  assign when_PhyTX_l487 = ((Cp == 8'h01) && (Cn == 8'h0)); // @[BaseType.scala 305:24]
  assign _zz_state = ((zero_padding_cnt == 13'h0) ? PSCHCrcAttachmentStatus_BYPASS : PSCHCrcAttachmentStatus_ZERO_PADDING); // @[Expression.scala 1420:25]
  assign result_data_fire = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l503 = (zero_padding_cnt == 13'h0001); // @[BaseType.scala 305:24]
  assign result_data_fire_1 = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l515 = (payload_cnt == 13'h0001); // @[BaseType.scala 305:24]
  assign _zz_state_1 = (is_last_block ? PSCHCrcAttachmentStatus_IDLE : PSCHCrcAttachmentStatus_CTRL_EMIT); // @[Expression.scala 1420:25]
  assign result_data_fire_2 = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l523 = (result_data_fire_2 && result_data_payload_last); // @[BaseType.scala 305:24]
  assign is_last_block = (crc_mode ? (C == 8'h01) : 1'b1); // @[PhyTX.scala 534:22]
  assign crc24b_core_raw_data_valid = ((state == PSCHCrcAttachmentStatus_BYPASS) && crc_mode); // @[PhyTX.scala 535:35]
  assign crc24b_core_raw_data_payload_last = ((payload_cnt == 13'h0019) && crc_mode); // @[PhyTX.scala 537:34]
  assign crc24b_core_result_data_ready = ((result_data_ready && (state == PSCHCrcAttachmentStatus_BYPASS)) && crc_mode); // @[PhyTX.scala 538:38]
  assign block_msg_ready = (block_msg_enable && segment_msg_ready); // @[PhyTX.scala 540:24]
  assign segment_msg_valid = (state == PSCHCrcAttachmentStatus_CTRL_EMIT); // @[PhyTX.scala 541:26]
  assign segment_msg_payload_segment_length = segment_message_segment_length; // @[PhyTX.scala 542:28]
  assign segment_msg_payload_segment_code_type = segment_message_segment_code_type; // @[PhyTX.scala 542:28]
  assign raw_data_ready = (crc_mode ? ((state == PSCHCrcAttachmentStatus_BYPASS) && crc24b_core_raw_data_ready) : (state == PSCHCrcAttachmentStatus_BYPASS)); // @[PhyTX.scala 543:23]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      state <= PSCHCrcAttachmentStatus_IDLE; // @[Data.scala 400:33]
      block_msg_enable <= 1'b0; // @[Data.scala 400:33]
      divide_enable <= 1'b0; // @[Data.scala 400:33]
    end else begin
      case(state)
        PSCHCrcAttachmentStatus_IDLE : begin
          if(block_msg_fire) begin
            if(when_PhyTX_l391) begin
              state <= PSCHCrcAttachmentStatus_CTRL_EMIT; // @[Enum.scala 148:67]
            end else begin
              if(when_PhyTX_l396) begin
                state <= PSCHCrcAttachmentStatus_MATCH_SIZE; // @[Enum.scala 148:67]
              end else begin
                state <= PSCHCrcAttachmentStatus_CALC_NUM; // @[Enum.scala 148:67]
                divide_enable <= 1'b1; // @[PhyTX.scala 402:35]
              end
            end
            block_msg_enable <= 1'b0; // @[PhyTX.scala 405:34]
          end else begin
            block_msg_enable <= 1'b1; // @[PhyTX.scala 407:34]
          end
        end
        PSCHCrcAttachmentStatus_CALC_NUM : begin
          if(shared_channel_segment_unsigned_divider_cmd_fire) begin
            divide_enable <= 1'b0; // @[PhyTX.scala 418:31]
          end
          if(shared_channel_segment_unsigned_divider_rsp_fire) begin
            state <= PSCHCrcAttachmentStatus_CALC_K; // @[Enum.scala 148:67]
            divide_enable <= 1'b1; // @[PhyTX.scala 425:31]
          end
        end
        PSCHCrcAttachmentStatus_CALC_K : begin
          if(shared_channel_segment_unsigned_divider_cmd_fire_1) begin
            divide_enable <= 1'b0; // @[PhyTX.scala 434:31]
          end
          if(shared_channel_segment_unsigned_divider_rsp_fire_1) begin
            state <= PSCHCrcAttachmentStatus_CALC_C_F; // @[Enum.scala 148:67]
          end
        end
        PSCHCrcAttachmentStatus_CALC_C_F : begin
          if(emit_step) begin
            state <= PSCHCrcAttachmentStatus_CTRL_EMIT; // @[Enum.scala 148:67]
          end
        end
        PSCHCrcAttachmentStatus_MATCH_SIZE : begin
          state <= PSCHCrcAttachmentStatus_CTRL_EMIT; // @[Enum.scala 148:67]
        end
        PSCHCrcAttachmentStatus_CTRL_EMIT : begin
          if(segment_msg_fire) begin
            state <= _zz_state; // @[PhyTX.scala 491:23]
          end
        end
        PSCHCrcAttachmentStatus_ZERO_PADDING : begin
          if(result_data_fire) begin
            if(when_PhyTX_l503) begin
              state <= PSCHCrcAttachmentStatus_BYPASS; // @[Enum.scala 148:67]
            end
          end
        end
        default : begin
          if(crc_mode) begin
            if(result_data_fire_1) begin
              if(when_PhyTX_l515) begin
                state <= _zz_state_1; // @[PhyTX.scala 516:31]
              end
            end
          end else begin
            if(when_PhyTX_l523) begin
              state <= PSCHCrcAttachmentStatus_IDLE; // @[Enum.scala 148:67]
              block_msg_enable <= 1'b1; // @[PhyTX.scala 525:38]
            end
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(state)
      PSCHCrcAttachmentStatus_IDLE : begin
        if(block_msg_fire) begin
          if(when_PhyTX_l391) begin
            zero_padding_cnt <= _zz_zero_padding_cnt[12:0]; // @[PhyTX.scala 392:38]
            segment_message_segment_length <= 13'h0028; // @[PhyTX.scala 393:52]
            crc_mode <= 1'b0; // @[PhyTX.scala 395:30]
          end else begin
            if(when_PhyTX_l396) begin
              segment_message_segment_length <= block_msg_payload_pkg_length[12:0]; // @[PhyTX.scala 397:52]
              crc_mode <= 1'b0; // @[PhyTX.scala 399:30]
            end else begin
              crc_mode <= 1'b1; // @[PhyTX.scala 403:30]
            end
          end
        end
        segment_message_segment_code_type <= ChannelCodingMethod_Turbo; // @[Enum.scala 148:67]
        numerator <= block_msg_payload_pkg_length; // @[PhyTX.scala 410:23]
        denominator <= 13'h17e8; // @[PhyTX.scala 411:25]
      end
      PSCHCrcAttachmentStatus_CALC_NUM : begin
        if(shared_channel_segment_unsigned_divider_rsp_fire) begin
          C <= segment_num; // @[PhyTX.scala 422:19]
          numerator <= (_zz_numerator + _zz_numerator_3); // @[PhyTX.scala 423:27]
          denominator <= {5'd0, segment_num}; // @[PhyTX.scala 424:29]
        end
      end
      PSCHCrcAttachmentStatus_CALC_K : begin
        if(shared_channel_segment_unsigned_divider_rsp_fire_1) begin
          Kp <= Kp_temp; // @[PhyTX.scala 437:20]
          Kn <= Kn_temp; // @[PhyTX.scala 438:20]
          shift_step <= shift_step_temp; // @[PhyTX.scala 439:28]
        end
        emit_step <= 1'b0; // @[PhyTX.scala 445:23]
      end
      PSCHCrcAttachmentStatus_CALC_C_F : begin
        if(emit_step) begin
          if(when_PhyTX_l449) begin
            segment_message_segment_length <= Kp; // @[PhyTX.scala 450:52]
          end else begin
            segment_message_segment_length <= Kn; // @[PhyTX.scala 452:52]
          end
          Cp <= (C - Cn); // @[PhyTX.scala 454:20]
          zero_padding_cnt <= _zz_zero_padding_cnt_1[12:0]; // @[PhyTX.scala 455:34]
        end else begin
          emit_step <= 1'b1; // @[PhyTX.scala 458:27]
          F <= _zz_F[19:0]; // @[PhyTX.scala 459:19]
          Cn <= _zz_Cn[7:0]; // @[PhyTX.scala 460:20]
        end
      end
      PSCHCrcAttachmentStatus_MATCH_SIZE : begin
        segment_message_segment_length <= code_block_resized; // @[PhyTX.scala 468:44]
        zero_padding_cnt <= (code_block_resized - segment_message_segment_length); // @[PhyTX.scala 469:30]
      end
      PSCHCrcAttachmentStatus_CTRL_EMIT : begin
        if(segment_msg_fire) begin
          if(crc_mode) begin
            if(when_PhyTX_l478) begin
              segment_message_segment_length <= Kp; // @[PhyTX.scala 479:56]
              payload_cnt <= Kp; // @[PhyTX.scala 480:37]
              Cp <= (Cp - 8'h01); // @[PhyTX.scala 481:28]
            end else begin
              segment_message_segment_length <= Kn; // @[PhyTX.scala 483:56]
              payload_cnt <= Kn; // @[PhyTX.scala 484:37]
              Cn <= (Cn - 8'h01); // @[PhyTX.scala 485:28]
            end
            if(when_PhyTX_l487) begin
              C <= 8'h01; // @[PhyTX.scala 488:27]
            end
          end
        end
      end
      PSCHCrcAttachmentStatus_ZERO_PADDING : begin
        if(result_data_fire) begin
          zero_padding_cnt <= (zero_padding_cnt - 13'h0001); // @[PhyTX.scala 499:34]
          if(crc_mode) begin
            payload_cnt <= (payload_cnt - 13'h0001); // @[PhyTX.scala 501:33]
          end
        end
      end
      default : begin
        if(crc_mode) begin
          if(result_data_fire_1) begin
            payload_cnt <= (payload_cnt - 13'h0001); // @[PhyTX.scala 514:33]
          end
        end
      end
    endcase
  end


endmodule

module PCCHCrcAttachment (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  input               block_msg_valid,
  output              block_msg_ready,
  input      [1:0]    block_msg_payload_pkg_type,
  input      [19:0]   block_msg_payload_pkg_length,
  input      [15:0]   block_msg_payload_rnti_scramble,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [1:0]    result_data_payload_fragment,
  output              segment_msg_valid,
  input               segment_msg_ready,
  output     [12:0]   segment_msg_payload_segment_length,
  output     [0:0]    segment_msg_payload_segment_code_type,
  output              is_last_block,
  input               clk,
  input               reset
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PTCH = 2'd2;
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;
  localparam PCCHCrcAttachmentStatus_IDLE = 3'd0;
  localparam PCCHCrcAttachmentStatus_CTRL_EMIT = 3'd1;
  localparam PCCHCrcAttachmentStatus_ZERO_PADDING = 3'd2;
  localparam PCCHCrcAttachmentStatus_BYPASS = 3'd3;
  localparam PCCHCrcAttachmentStatus_SCRAMBLE = 3'd4;

  wire       [3:0]    _zz_xor_bit;
  wire       [12:0]   _zz_xor_bit_1;
  wire       [19:0]   _zz_zero_padding_cnt;
  reg        [2:0]    state;
  reg        [12:0]   segment_message_segment_length;
  reg        [0:0]    segment_message_segment_code_type;
  reg                 block_msg_enable;
  reg        [12:0]   zero_padding_cnt;
  reg        [15:0]   rnti;
  wire       [0:0]    xor_bit;
  wire                block_msg_fire;
  wire                when_PhyTX_l236;
  wire                segment_msg_fire;
  wire       [2:0]    _zz_state;
  wire                result_data_fire;
  wire                when_PhyTX_l266;
  wire                result_data_fire_1;
  wire                when_PhyTX_l276;
  wire                result_data_fire_2;
  wire                when_PhyTX_l286;
  wire                result_data_fire_3;
  `ifndef SYNTHESIS
  reg [31:0] block_msg_payload_pkg_type_string;
  reg [151:0] segment_msg_payload_segment_code_type_string;
  reg [95:0] state_string;
  reg [151:0] segment_message_segment_code_type_string;
  reg [95:0] _zz_state_string;
  `endif


  assign _zz_xor_bit_1 = (segment_message_segment_length - 13'h0001);
  assign _zz_xor_bit = _zz_xor_bit_1[3:0];
  assign _zz_zero_padding_cnt = (20'h00028 - block_msg_payload_pkg_length);
  `ifndef SYNTHESIS
  always @(*) begin
    case(block_msg_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : block_msg_payload_pkg_type_string = "PTCH";
      default : block_msg_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_msg_payload_segment_code_type)
      ChannelCodingMethod_Turbo : segment_msg_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_msg_payload_segment_code_type_string = "TailedConvolutional";
      default : segment_msg_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(state)
      PCCHCrcAttachmentStatus_IDLE : state_string = "IDLE        ";
      PCCHCrcAttachmentStatus_CTRL_EMIT : state_string = "CTRL_EMIT   ";
      PCCHCrcAttachmentStatus_ZERO_PADDING : state_string = "ZERO_PADDING";
      PCCHCrcAttachmentStatus_BYPASS : state_string = "BYPASS      ";
      PCCHCrcAttachmentStatus_SCRAMBLE : state_string = "SCRAMBLE    ";
      default : state_string = "????????????";
    endcase
  end
  always @(*) begin
    case(segment_message_segment_code_type)
      ChannelCodingMethod_Turbo : segment_message_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_message_segment_code_type_string = "TailedConvolutional";
      default : segment_message_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(_zz_state)
      PCCHCrcAttachmentStatus_IDLE : _zz_state_string = "IDLE        ";
      PCCHCrcAttachmentStatus_CTRL_EMIT : _zz_state_string = "CTRL_EMIT   ";
      PCCHCrcAttachmentStatus_ZERO_PADDING : _zz_state_string = "ZERO_PADDING";
      PCCHCrcAttachmentStatus_BYPASS : _zz_state_string = "BYPASS      ";
      PCCHCrcAttachmentStatus_SCRAMBLE : _zz_state_string = "SCRAMBLE    ";
      default : _zz_state_string = "????????????";
    endcase
  end
  `endif

  assign xor_bit = rnti[_zz_xor_bit]; // @[BaseType.scala 318:22]
  assign block_msg_fire = (block_msg_valid && block_msg_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l236 = (block_msg_payload_pkg_length < 20'h00028); // @[BaseType.scala 305:24]
  always @(*) begin
    case(state)
      PCCHCrcAttachmentStatus_IDLE : begin
        result_data_valid = 1'b0; // @[PhyTX.scala 250:34]
      end
      PCCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_valid = 1'b0; // @[PhyTX.scala 258:34]
      end
      PCCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_valid = 1'b1; // @[PhyTX.scala 270:34]
      end
      PCCHCrcAttachmentStatus_BYPASS : begin
        result_data_valid = raw_data_valid; // @[PhyTX.scala 281:34]
      end
      default : begin
        result_data_valid = raw_data_valid; // @[PhyTX.scala 293:34]
      end
    endcase
  end

  always @(*) begin
    case(state)
      PCCHCrcAttachmentStatus_IDLE : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 251:33]
      end
      PCCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 259:33]
      end
      PCCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 271:33]
      end
      PCCHCrcAttachmentStatus_BYPASS : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 282:33]
      end
      default : begin
        result_data_payload_last = raw_data_payload_last; // @[PhyTX.scala 294:33]
      end
    endcase
  end

  always @(*) begin
    case(state)
      PCCHCrcAttachmentStatus_IDLE : begin
        result_data_payload_fragment = 2'b00; // @[PhyTX.scala 252:37]
      end
      PCCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_payload_fragment = 2'b00; // @[PhyTX.scala 260:37]
      end
      PCCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_payload_fragment = 2'b00; // @[PhyTX.scala 272:37]
      end
      PCCHCrcAttachmentStatus_BYPASS : begin
        result_data_payload_fragment = {1'b1,raw_data_payload_fragment}; // @[PhyTX.scala 283:37]
      end
      default : begin
        result_data_payload_fragment = {1'b1,(raw_data_payload_fragment ^ xor_bit)}; // @[PhyTX.scala 295:37]
      end
    endcase
  end

  assign segment_msg_fire = (segment_msg_valid && segment_msg_ready); // @[BaseType.scala 305:24]
  assign _zz_state = ((zero_padding_cnt == 13'h0) ? PCCHCrcAttachmentStatus_BYPASS : PCCHCrcAttachmentStatus_ZERO_PADDING); // @[Expression.scala 1420:25]
  assign result_data_fire = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l266 = (zero_padding_cnt == 13'h0001); // @[BaseType.scala 305:24]
  assign result_data_fire_1 = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l276 = (segment_message_segment_length == 13'h0010); // @[BaseType.scala 305:24]
  assign result_data_fire_2 = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l286 = (result_data_fire_2 && result_data_payload_last); // @[BaseType.scala 305:24]
  assign result_data_fire_3 = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign is_last_block = 1'b1; // @[PhyTX.scala 298:22]
  assign block_msg_ready = (block_msg_enable && segment_msg_ready); // @[PhyTX.scala 299:24]
  assign segment_msg_valid = (state == PCCHCrcAttachmentStatus_CTRL_EMIT); // @[PhyTX.scala 300:26]
  assign segment_msg_payload_segment_length = segment_message_segment_length; // @[PhyTX.scala 301:28]
  assign segment_msg_payload_segment_code_type = segment_message_segment_code_type; // @[PhyTX.scala 301:28]
  assign raw_data_ready = ((state == PCCHCrcAttachmentStatus_BYPASS) || (state == PCCHCrcAttachmentStatus_SCRAMBLE)); // @[PhyTX.scala 302:23]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      state <= PCCHCrcAttachmentStatus_IDLE; // @[Data.scala 400:33]
      block_msg_enable <= 1'b1; // @[Data.scala 400:33]
      zero_padding_cnt <= 13'h0; // @[Data.scala 400:33]
      rnti <= 16'h0; // @[Data.scala 400:33]
    end else begin
      case(state)
        PCCHCrcAttachmentStatus_IDLE : begin
          if(block_msg_fire) begin
            if(when_PhyTX_l236) begin
              zero_padding_cnt <= _zz_zero_padding_cnt[12:0]; // @[PhyTX.scala 237:38]
            end else begin
              zero_padding_cnt <= 13'h0; // @[PhyTX.scala 240:38]
            end
            state <= PCCHCrcAttachmentStatus_CTRL_EMIT; // @[Enum.scala 148:67]
            block_msg_enable <= 1'b0; // @[PhyTX.scala 244:34]
          end else begin
            block_msg_enable <= 1'b1; // @[PhyTX.scala 246:34]
          end
          rnti <= block_msg_payload_rnti_scramble; // @[PhyTX.scala 248:18]
        end
        PCCHCrcAttachmentStatus_CTRL_EMIT : begin
          if(segment_msg_fire) begin
            state <= _zz_state; // @[PhyTX.scala 256:23]
          end
        end
        PCCHCrcAttachmentStatus_ZERO_PADDING : begin
          if(result_data_fire) begin
            zero_padding_cnt <= (zero_padding_cnt - 13'h0001); // @[PhyTX.scala 264:34]
            if(when_PhyTX_l266) begin
              state <= PCCHCrcAttachmentStatus_BYPASS; // @[Enum.scala 148:67]
            end
          end
        end
        PCCHCrcAttachmentStatus_BYPASS : begin
          if(result_data_fire_1) begin
            if(when_PhyTX_l276) begin
              state <= PCCHCrcAttachmentStatus_SCRAMBLE; // @[Enum.scala 148:67]
            end
          end
        end
        default : begin
          if(when_PhyTX_l286) begin
            state <= PCCHCrcAttachmentStatus_IDLE; // @[Enum.scala 148:67]
            block_msg_enable <= 1'b1; // @[PhyTX.scala 288:34]
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(state)
      PCCHCrcAttachmentStatus_IDLE : begin
        if(block_msg_fire) begin
          if(when_PhyTX_l236) begin
            segment_message_segment_length <= 13'h0028; // @[PhyTX.scala 238:52]
          end else begin
            segment_message_segment_length <= block_msg_payload_pkg_length[12:0]; // @[PhyTX.scala 241:52]
          end
        end
        segment_message_segment_code_type <= ChannelCodingMethod_TailedConvolutional; // @[Enum.scala 148:67]
      end
      PCCHCrcAttachmentStatus_CTRL_EMIT : begin
      end
      PCCHCrcAttachmentStatus_ZERO_PADDING : begin
        if(result_data_fire) begin
          segment_message_segment_length <= (segment_message_segment_length - 13'h0001); // @[PhyTX.scala 265:48]
        end
      end
      PCCHCrcAttachmentStatus_BYPASS : begin
        if(result_data_fire_1) begin
          segment_message_segment_length <= (segment_message_segment_length - 13'h0001); // @[PhyTX.scala 279:48]
        end
      end
      default : begin
        if(result_data_fire_3) begin
          segment_message_segment_length <= (segment_message_segment_length - 13'h0001); // @[PhyTX.scala 291:48]
        end
      end
    endcase
  end


endmodule

module PBCHCrcAttachment (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  input               block_msg_valid,
  output              block_msg_ready,
  input      [1:0]    block_msg_payload_pkg_type,
  input      [19:0]   block_msg_payload_pkg_length,
  input      [15:0]   block_msg_payload_rnti_scramble,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [1:0]    result_data_payload_fragment,
  output              segment_msg_valid,
  input               segment_msg_ready,
  output     [12:0]   segment_msg_payload_segment_length,
  output     [0:0]    segment_msg_payload_segment_code_type,
  output              is_last_block,
  input               clk,
  input               reset
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PTCH = 2'd2;
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;
  localparam PBCHCrcAttachmentStatus_IDLE = 2'd0;
  localparam PBCHCrcAttachmentStatus_CTRL_EMIT = 2'd1;
  localparam PBCHCrcAttachmentStatus_ZERO_PADDING = 2'd2;
  localparam PBCHCrcAttachmentStatus_BYPASS = 2'd3;

  wire       [19:0]   _zz_zero_padding_cnt;
  reg        [1:0]    state;
  reg        [12:0]   segment_message_segment_length;
  reg        [0:0]    segment_message_segment_code_type;
  reg                 block_msg_enable;
  reg        [12:0]   zero_padding_cnt;
  wire                block_msg_fire;
  wire                when_PhyTX_l159;
  wire                segment_msg_fire;
  wire       [1:0]    _zz_state;
  wire                result_data_fire;
  wire                when_PhyTX_l188;
  wire                result_data_fire_1;
  wire                when_PhyTX_l197;
  `ifndef SYNTHESIS
  reg [31:0] block_msg_payload_pkg_type_string;
  reg [151:0] segment_msg_payload_segment_code_type_string;
  reg [95:0] state_string;
  reg [151:0] segment_message_segment_code_type_string;
  reg [95:0] _zz_state_string;
  `endif


  assign _zz_zero_padding_cnt = (20'h00028 - block_msg_payload_pkg_length);
  `ifndef SYNTHESIS
  always @(*) begin
    case(block_msg_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : block_msg_payload_pkg_type_string = "PTCH";
      default : block_msg_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_msg_payload_segment_code_type)
      ChannelCodingMethod_Turbo : segment_msg_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_msg_payload_segment_code_type_string = "TailedConvolutional";
      default : segment_msg_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(state)
      PBCHCrcAttachmentStatus_IDLE : state_string = "IDLE        ";
      PBCHCrcAttachmentStatus_CTRL_EMIT : state_string = "CTRL_EMIT   ";
      PBCHCrcAttachmentStatus_ZERO_PADDING : state_string = "ZERO_PADDING";
      PBCHCrcAttachmentStatus_BYPASS : state_string = "BYPASS      ";
      default : state_string = "????????????";
    endcase
  end
  always @(*) begin
    case(segment_message_segment_code_type)
      ChannelCodingMethod_Turbo : segment_message_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_message_segment_code_type_string = "TailedConvolutional";
      default : segment_message_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(_zz_state)
      PBCHCrcAttachmentStatus_IDLE : _zz_state_string = "IDLE        ";
      PBCHCrcAttachmentStatus_CTRL_EMIT : _zz_state_string = "CTRL_EMIT   ";
      PBCHCrcAttachmentStatus_ZERO_PADDING : _zz_state_string = "ZERO_PADDING";
      PBCHCrcAttachmentStatus_BYPASS : _zz_state_string = "BYPASS      ";
      default : _zz_state_string = "????????????";
    endcase
  end
  `endif

  assign block_msg_fire = (block_msg_valid && block_msg_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l159 = (block_msg_payload_pkg_length < 20'h00028); // @[BaseType.scala 305:24]
  always @(*) begin
    case(state)
      PBCHCrcAttachmentStatus_IDLE : begin
        result_data_valid = 1'b0; // @[PhyTX.scala 173:34]
      end
      PBCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_valid = 1'b0; // @[PhyTX.scala 181:34]
      end
      PBCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_valid = 1'b1; // @[PhyTX.scala 192:34]
      end
      default : begin
        result_data_valid = raw_data_valid; // @[PhyTX.scala 201:34]
      end
    endcase
  end

  always @(*) begin
    case(state)
      PBCHCrcAttachmentStatus_IDLE : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 174:33]
      end
      PBCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 182:33]
      end
      PBCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_payload_last = 1'b0; // @[PhyTX.scala 193:33]
      end
      default : begin
        result_data_payload_last = raw_data_payload_last; // @[PhyTX.scala 202:33]
      end
    endcase
  end

  always @(*) begin
    case(state)
      PBCHCrcAttachmentStatus_IDLE : begin
        result_data_payload_fragment = 2'b00; // @[PhyTX.scala 175:37]
      end
      PBCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_payload_fragment = 2'b00; // @[PhyTX.scala 183:37]
      end
      PBCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_payload_fragment = 2'b00; // @[PhyTX.scala 194:37]
      end
      default : begin
        result_data_payload_fragment = {1'b1,raw_data_payload_fragment}; // @[PhyTX.scala 203:37]
      end
    endcase
  end

  assign segment_msg_fire = (segment_msg_valid && segment_msg_ready); // @[BaseType.scala 305:24]
  assign _zz_state = ((zero_padding_cnt == 13'h0) ? PBCHCrcAttachmentStatus_BYPASS : PBCHCrcAttachmentStatus_ZERO_PADDING); // @[Expression.scala 1420:25]
  assign result_data_fire = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l188 = (zero_padding_cnt == 13'h0001); // @[BaseType.scala 305:24]
  assign result_data_fire_1 = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l197 = (result_data_fire_1 && result_data_payload_last); // @[BaseType.scala 305:24]
  assign is_last_block = 1'b1; // @[PhyTX.scala 206:22]
  assign block_msg_ready = (block_msg_enable && segment_msg_ready); // @[PhyTX.scala 207:24]
  assign segment_msg_valid = (state == PBCHCrcAttachmentStatus_CTRL_EMIT); // @[PhyTX.scala 208:26]
  assign segment_msg_payload_segment_length = segment_message_segment_length; // @[PhyTX.scala 209:28]
  assign segment_msg_payload_segment_code_type = segment_message_segment_code_type; // @[PhyTX.scala 209:28]
  assign raw_data_ready = (state == PBCHCrcAttachmentStatus_BYPASS); // @[PhyTX.scala 210:23]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      state <= PBCHCrcAttachmentStatus_IDLE; // @[Data.scala 400:33]
      block_msg_enable <= 1'b1; // @[Data.scala 400:33]
      zero_padding_cnt <= 13'h0; // @[Data.scala 400:33]
    end else begin
      case(state)
        PBCHCrcAttachmentStatus_IDLE : begin
          if(block_msg_fire) begin
            if(when_PhyTX_l159) begin
              zero_padding_cnt <= _zz_zero_padding_cnt[12:0]; // @[PhyTX.scala 160:38]
            end else begin
              zero_padding_cnt <= 13'h0; // @[PhyTX.scala 163:38]
            end
            state <= PBCHCrcAttachmentStatus_CTRL_EMIT; // @[Enum.scala 148:67]
            block_msg_enable <= 1'b0; // @[PhyTX.scala 168:34]
          end else begin
            block_msg_enable <= 1'b1; // @[PhyTX.scala 170:34]
          end
        end
        PBCHCrcAttachmentStatus_CTRL_EMIT : begin
          if(segment_msg_fire) begin
            state <= _zz_state; // @[PhyTX.scala 179:23]
          end
        end
        PBCHCrcAttachmentStatus_ZERO_PADDING : begin
          if(result_data_fire) begin
            zero_padding_cnt <= (zero_padding_cnt - 13'h0001); // @[PhyTX.scala 187:34]
            if(when_PhyTX_l188) begin
              state <= PBCHCrcAttachmentStatus_BYPASS; // @[Enum.scala 148:67]
            end
          end
        end
        default : begin
          if(when_PhyTX_l197) begin
            state <= PBCHCrcAttachmentStatus_IDLE; // @[Enum.scala 148:67]
            block_msg_enable <= 1'b1; // @[PhyTX.scala 199:34]
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(state)
      PBCHCrcAttachmentStatus_IDLE : begin
        if(block_msg_fire) begin
          if(when_PhyTX_l159) begin
            segment_message_segment_length <= 13'h0028; // @[PhyTX.scala 161:52]
          end else begin
            segment_message_segment_length <= block_msg_payload_pkg_length[12:0]; // @[PhyTX.scala 164:52]
          end
        end
        segment_message_segment_code_type <= ChannelCodingMethod_Turbo; // @[Enum.scala 148:67]
      end
      PBCHCrcAttachmentStatus_CTRL_EMIT : begin
      end
      PBCHCrcAttachmentStatus_ZERO_PADDING : begin
      end
      default : begin
      end
    endcase
  end


endmodule

module StreamFifo_2 (
  input               io_push_valid,
  output              io_push_ready,
  input      [1:0]    io_push_payload_pkg_type,
  input      [19:0]   io_push_payload_pkg_length,
  input      [15:0]   io_push_payload_rnti_scramble,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [1:0]    io_pop_payload_pkg_type,
  output     [19:0]   io_pop_payload_pkg_length,
  output     [15:0]   io_pop_payload_rnti_scramble,
  input               io_flush,
  output     [2:0]    io_occupancy,
  output     [2:0]    io_availability,
  input               clk,
  input               reset
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PTCH = 2'd2;

  reg        [37:0]   _zz_logic_ram_port0;
  wire       [1:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [1:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_pkg_length;
  wire       [37:0]   _zz_logic_ram_port_1;
  wire       [1:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [1:0]    logic_pushPtr_valueNext;
  reg        [1:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [1:0]    logic_popPtr_valueNext;
  reg        [1:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [1:0]    _zz_io_pop_payload_pkg_type;
  wire       [37:0]   _zz_io_pop_payload_pkg_length;
  wire       [1:0]    _zz_io_pop_payload_pkg_type_1;
  wire                when_Stream_l1101;
  wire       [1:0]    logic_ptrDif;
  `ifndef SYNTHESIS
  reg [31:0] io_push_payload_pkg_type_string;
  reg [31:0] io_pop_payload_pkg_type_string;
  reg [31:0] _zz_io_pop_payload_pkg_type_string;
  reg [31:0] _zz_io_pop_payload_pkg_type_1_string;
  `endif

  reg [37:0] logic_ram [0:3];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {1'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {1'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_pkg_length = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_rnti_scramble,{io_push_payload_pkg_length,io_push_payload_pkg_type}};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_pkg_length) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(io_push_payload_pkg_type)
      PhysicalChannel_PBCH : io_push_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : io_push_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : io_push_payload_pkg_type_string = "PTCH";
      default : io_push_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(io_pop_payload_pkg_type)
      PhysicalChannel_PBCH : io_pop_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : io_pop_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : io_pop_payload_pkg_type_string = "PTCH";
      default : io_pop_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(_zz_io_pop_payload_pkg_type)
      PhysicalChannel_PBCH : _zz_io_pop_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : _zz_io_pop_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PTCH : _zz_io_pop_payload_pkg_type_string = "PTCH";
      default : _zz_io_pop_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(_zz_io_pop_payload_pkg_type_1)
      PhysicalChannel_PBCH : _zz_io_pop_payload_pkg_type_1_string = "PBCH";
      PhysicalChannel_PCCH : _zz_io_pop_payload_pkg_type_1_string = "PCCH";
      PhysicalChannel_PTCH : _zz_io_pop_payload_pkg_type_1_string = "PTCH";
      default : _zz_io_pop_payload_pkg_type_1_string = "????";
    endcase
  end
  `endif

  always @(*) begin
    _zz_1 = 1'b0; // @[when.scala 47:16]
    if(logic_pushing) begin
      _zz_1 = 1'b1; // @[when.scala 52:10]
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1; // @[Utils.scala 540:41]
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0; // @[Utils.scala 537:19]
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1; // @[Utils.scala 539:33]
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 2'b11); // @[BaseType.scala 305:24]
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext); // @[Utils.scala 548:15]
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 2'b00; // @[Utils.scala 558:15]
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1; // @[Utils.scala 540:41]
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0; // @[Utils.scala 537:19]
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1; // @[Utils.scala 539:33]
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 2'b11); // @[BaseType.scala 305:24]
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext); // @[Utils.scala 548:15]
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 2'b00; // @[Utils.scala 558:15]
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value); // @[BaseType.scala 305:24]
  assign logic_pushing = (io_push_valid && io_push_ready); // @[BaseType.scala 305:24]
  assign logic_popping = (io_pop_valid && io_pop_ready); // @[BaseType.scala 305:24]
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy)); // @[BaseType.scala 305:24]
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy); // @[BaseType.scala 305:24]
  assign io_push_ready = (! logic_full); // @[Stream.scala 1097:19]
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full)))); // @[Stream.scala 1098:18]
  assign _zz_io_pop_payload_pkg_length = _zz_logic_ram_port0; // @[Mem.scala 310:24]
  assign _zz_io_pop_payload_pkg_type_1 = _zz_io_pop_payload_pkg_length[1 : 0]; // @[Enum.scala 186:17]
  assign _zz_io_pop_payload_pkg_type = _zz_io_pop_payload_pkg_type_1; // @[Enum.scala 188:10]
  assign io_pop_payload_pkg_type = _zz_io_pop_payload_pkg_type; // @[Stream.scala 1099:20]
  assign io_pop_payload_pkg_length = _zz_io_pop_payload_pkg_length[21 : 2]; // @[Stream.scala 1099:20]
  assign io_pop_payload_rnti_scramble = _zz_io_pop_payload_pkg_length[37 : 22]; // @[Stream.scala 1099:20]
  assign when_Stream_l1101 = (logic_pushing != logic_popping); // @[BaseType.scala 305:24]
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value); // @[BaseType.scala 299:24]
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif}; // @[Stream.scala 1114:20]
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability}; // @[Stream.scala 1115:23]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 2'b00; // @[Data.scala 400:33]
      logic_popPtr_value <= 2'b00; // @[Data.scala 400:33]
      logic_risingOccupancy <= 1'b0; // @[Data.scala 400:33]
      _zz_io_pop_valid <= 1'b0; // @[Data.scala 400:33]
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext; // @[Reg.scala 39:30]
      logic_popPtr_value <= logic_popPtr_valueNext; // @[Reg.scala 39:30]
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value); // @[Reg.scala 39:30]
      if(when_Stream_l1101) begin
        logic_risingOccupancy <= logic_pushing; // @[Stream.scala 1102:23]
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0; // @[Stream.scala 1129:23]
      end
    end
  end


endmodule

module StreamFifo_3 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [0:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [0:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [4:0]    io_occupancy,
  output     [4:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [1:0]    _zz_logic_ram_port0;
  wire       [3:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [3:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [1:0]    _zz_logic_ram_port_1;
  wire       [3:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [3:0]    logic_pushPtr_valueNext;
  reg        [3:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [3:0]    logic_popPtr_valueNext;
  reg        [3:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [1:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l1101;
  wire       [3:0]    logic_ptrDif;
  reg [1:0] logic_ram [0:15];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {3'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {3'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_fragment,io_push_payload_last};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0; // @[when.scala 47:16]
    if(logic_pushing) begin
      _zz_1 = 1'b1; // @[when.scala 52:10]
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1; // @[Utils.scala 540:41]
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0; // @[Utils.scala 537:19]
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1; // @[Utils.scala 539:33]
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 4'b1111); // @[BaseType.scala 305:24]
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext); // @[Utils.scala 548:15]
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 4'b0000; // @[Utils.scala 558:15]
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1; // @[Utils.scala 540:41]
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0; // @[Utils.scala 537:19]
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1; // @[Utils.scala 539:33]
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 4'b1111); // @[BaseType.scala 305:24]
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext); // @[Utils.scala 548:15]
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 4'b0000; // @[Utils.scala 558:15]
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value); // @[BaseType.scala 305:24]
  assign logic_pushing = (io_push_valid && io_push_ready); // @[BaseType.scala 305:24]
  assign logic_popping = (io_pop_valid && io_pop_ready); // @[BaseType.scala 305:24]
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy)); // @[BaseType.scala 305:24]
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy); // @[BaseType.scala 305:24]
  assign io_push_ready = (! logic_full); // @[Stream.scala 1097:19]
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full)))); // @[Stream.scala 1098:18]
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0; // @[Mem.scala 310:24]
  assign io_pop_payload_last = _zz_io_pop_payload_last[0]; // @[Stream.scala 1099:20]
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[1 : 1]; // @[Stream.scala 1099:20]
  assign when_Stream_l1101 = (logic_pushing != logic_popping); // @[BaseType.scala 305:24]
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value); // @[BaseType.scala 299:24]
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif}; // @[Stream.scala 1114:20]
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability}; // @[Stream.scala 1115:23]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 4'b0000; // @[Data.scala 400:33]
      logic_popPtr_value <= 4'b0000; // @[Data.scala 400:33]
      logic_risingOccupancy <= 1'b0; // @[Data.scala 400:33]
      _zz_io_pop_valid <= 1'b0; // @[Data.scala 400:33]
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext; // @[Reg.scala 39:30]
      logic_popPtr_value <= logic_popPtr_valueNext; // @[Reg.scala 39:30]
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value); // @[Reg.scala 39:30]
      if(when_Stream_l1101) begin
        logic_risingOccupancy <= logic_pushing; // @[Stream.scala 1102:23]
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0; // @[Stream.scala 1129:23]
      end
    end
  end


endmodule

module StreamMux_2 (
  input      [0:0]    io_select,
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input               io_inputs_0_payload_last,
  input      [0:0]    io_inputs_0_payload_fragment,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input               io_inputs_1_payload_last,
  input      [0:0]    io_inputs_1_payload_fragment,
  output              io_output_valid,
  input               io_output_ready,
  output              io_output_payload_last,
  output     [0:0]    io_output_payload_fragment
);

  reg                 _zz_io_output_valid;
  reg                 _zz_io_output_payload_last;
  reg        [0:0]    _zz_io_output_payload_fragment;

  always @(*) begin
    case(io_select)
      1'b0 : begin
        _zz_io_output_valid = io_inputs_0_valid;
        _zz_io_output_payload_last = io_inputs_0_payload_last;
        _zz_io_output_payload_fragment = io_inputs_0_payload_fragment;
      end
      default : begin
        _zz_io_output_valid = io_inputs_1_valid;
        _zz_io_output_payload_last = io_inputs_1_payload_last;
        _zz_io_output_payload_fragment = io_inputs_1_payload_fragment;
      end
    endcase
  end

  assign io_inputs_0_ready = ((io_select == 1'b0) && io_output_ready); // @[Stream.scala 868:17]
  assign io_inputs_1_ready = ((io_select == 1'b1) && io_output_ready); // @[Stream.scala 868:17]
  assign io_output_valid = _zz_io_output_valid; // @[Stream.scala 870:19]
  assign io_output_payload_last = _zz_io_output_payload_last; // @[Stream.scala 871:21]
  assign io_output_payload_fragment = _zz_io_output_payload_fragment; // @[Stream.scala 871:21]

endmodule

module StreamDemux_3 (
  input      [0:0]    io_select,
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [0:0]    io_input_payload_fragment,
  output reg          io_outputs_0_valid,
  input               io_outputs_0_ready,
  output              io_outputs_0_payload_last,
  output     [0:0]    io_outputs_0_payload_fragment,
  output reg          io_outputs_1_valid,
  input               io_outputs_1_ready,
  output              io_outputs_1_payload_last,
  output     [0:0]    io_outputs_1_payload_fragment
);

  wire                when_Stream_l908;
  wire                when_Stream_l908_1;

  always @(*) begin
    io_input_ready = 1'b0; // @[Stream.scala 905:18]
    if(!when_Stream_l908) begin
      io_input_ready = io_outputs_0_ready; // @[Stream.scala 912:22]
    end
    if(!when_Stream_l908_1) begin
      io_input_ready = io_outputs_1_ready; // @[Stream.scala 912:22]
    end
  end

  assign io_outputs_0_payload_last = io_input_payload_last; // @[Stream.scala 907:27]
  assign io_outputs_0_payload_fragment = io_input_payload_fragment; // @[Stream.scala 907:27]
  assign when_Stream_l908 = (1'b0 != io_select); // @[BaseType.scala 305:24]
  always @(*) begin
    if(when_Stream_l908) begin
      io_outputs_0_valid = 1'b0; // @[Stream.scala 909:27]
    end else begin
      io_outputs_0_valid = io_input_valid; // @[Stream.scala 911:27]
    end
  end

  assign io_outputs_1_payload_last = io_input_payload_last; // @[Stream.scala 907:27]
  assign io_outputs_1_payload_fragment = io_input_payload_fragment; // @[Stream.scala 907:27]
  assign when_Stream_l908_1 = (1'b1 != io_select); // @[BaseType.scala 305:24]
  always @(*) begin
    if(when_Stream_l908_1) begin
      io_outputs_1_valid = 1'b0; // @[Stream.scala 909:27]
    end else begin
      io_outputs_1_valid = io_input_valid; // @[Stream.scala 911:27]
    end
  end


endmodule

module TxCrcUnit (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [0:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);

  wire                crc_core_flush;
  wire       [15:0]   crc_core_result;
  wire       [15:0]   crc_core_resultNext;
  reg        [0:0]    _zz_result_data_payload_fragment;
  reg                 emitCrc;
  wire                raw_data_fire;
  wire                when_PhyTX_l47;
  wire                result_data_fire;
  wire                when_PhyTX_l47_1;
  reg        [3:0]    counter;
  wire                raw_data_fire_1;
  wire                result_data_fire_1;
  wire                when_PhyTX_l57;
  wire                when_PhyTX_l69;

  Crc crc_core (
    .flush         (crc_core_flush           ), //i
    .input_valid   (raw_data_fire_1          ), //i
    .input_payload (raw_data_payload_fragment), //i
    .result        (crc_core_result[15:0]    ), //o
    .resultNext    (crc_core_resultNext[15:0]), //o
    .clk           (clk                      ), //i
    .reset         (reset                    )  //i
  );
  always @(*) begin
    case(counter)
      4'b0000 : _zz_result_data_payload_fragment = crc_core_result[0 : 0];
      4'b0001 : _zz_result_data_payload_fragment = crc_core_result[1 : 1];
      4'b0010 : _zz_result_data_payload_fragment = crc_core_result[2 : 2];
      4'b0011 : _zz_result_data_payload_fragment = crc_core_result[3 : 3];
      4'b0100 : _zz_result_data_payload_fragment = crc_core_result[4 : 4];
      4'b0101 : _zz_result_data_payload_fragment = crc_core_result[5 : 5];
      4'b0110 : _zz_result_data_payload_fragment = crc_core_result[6 : 6];
      4'b0111 : _zz_result_data_payload_fragment = crc_core_result[7 : 7];
      4'b1000 : _zz_result_data_payload_fragment = crc_core_result[8 : 8];
      4'b1001 : _zz_result_data_payload_fragment = crc_core_result[9 : 9];
      4'b1010 : _zz_result_data_payload_fragment = crc_core_result[10 : 10];
      4'b1011 : _zz_result_data_payload_fragment = crc_core_result[11 : 11];
      4'b1100 : _zz_result_data_payload_fragment = crc_core_result[12 : 12];
      4'b1101 : _zz_result_data_payload_fragment = crc_core_result[13 : 13];
      4'b1110 : _zz_result_data_payload_fragment = crc_core_result[14 : 14];
      default : _zz_result_data_payload_fragment = crc_core_result[15 : 15];
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l47 = (raw_data_fire && raw_data_payload_last); // @[BaseType.scala 305:24]
  assign result_data_fire = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l47_1 = (result_data_fire && result_data_payload_last); // @[BaseType.scala 305:24]
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready); // @[BaseType.scala 305:24]
  assign result_data_fire_1 = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign crc_core_flush = (result_data_fire_1 && result_data_payload_last); // @[PhyTX.scala 54:23]
  always @(*) begin
    result_data_payload_last = 1'b0; // @[PhyTX.scala 56:25]
    if(!when_PhyTX_l57) begin
      if(when_PhyTX_l69) begin
        result_data_payload_last = 1'b1; // @[PhyTX.scala 70:37]
      end
    end
  end

  assign when_PhyTX_l57 = (! emitCrc); // @[BaseType.scala 299:24]
  always @(*) begin
    if(when_PhyTX_l57) begin
      result_data_valid = raw_data_valid; // @[PhyTX.scala 58:30]
    end else begin
      result_data_valid = 1'b1; // @[PhyTX.scala 66:30]
    end
  end

  always @(*) begin
    if(when_PhyTX_l57) begin
      result_data_payload_fragment = raw_data_payload_fragment; // @[PhyTX.scala 59:33]
    end else begin
      result_data_payload_fragment = _zz_result_data_payload_fragment; // @[PhyTX.scala 68:37]
    end
  end

  always @(*) begin
    if(when_PhyTX_l57) begin
      raw_data_ready = result_data_ready; // @[PhyTX.scala 60:27]
    end else begin
      raw_data_ready = 1'b0; // @[PhyTX.scala 65:27]
    end
  end

  assign when_PhyTX_l69 = (counter == 4'b0000); // @[BaseType.scala 305:24]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      emitCrc <= 1'b0; // @[Data.scala 400:33]
      counter <= 4'b1111; // @[Data.scala 400:33]
    end else begin
      if(when_PhyTX_l47) begin
        emitCrc <= 1'b1; // @[PhyTX.scala 47:34]
      end
      if(when_PhyTX_l47_1) begin
        emitCrc <= 1'b0; // @[PhyTX.scala 47:64]
      end
      if(when_PhyTX_l57) begin
        counter <= 4'b1111; // @[PhyTX.scala 62:21]
      end else begin
        if(when_PhyTX_l69) begin
          if(result_data_ready) begin
            emitCrc <= 1'b0; // @[PhyTX.scala 72:29]
          end
        end
        if(result_data_ready) begin
          counter <= (counter - 4'b0001); // @[PhyTX.scala 76:25]
        end
      end
    end
  end


endmodule

module TxCrcUnit_1 (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [0:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);

  wire                crc_core_flush;
  wire       [23:0]   crc_core_result;
  wire       [23:0]   crc_core_resultNext;
  reg        [0:0]    _zz_result_data_payload_fragment;
  reg                 emitCrc;
  wire                raw_data_fire;
  wire                when_PhyTX_l47;
  wire                result_data_fire;
  wire                when_PhyTX_l47_1;
  reg        [4:0]    counter;
  wire                raw_data_fire_1;
  wire                result_data_fire_1;
  wire                when_PhyTX_l57;
  wire                when_PhyTX_l69;

  Crc_1 crc_core (
    .flush         (crc_core_flush           ), //i
    .input_valid   (raw_data_fire_1          ), //i
    .input_payload (raw_data_payload_fragment), //i
    .result        (crc_core_result[23:0]    ), //o
    .resultNext    (crc_core_resultNext[23:0]), //o
    .clk           (clk                      ), //i
    .reset         (reset                    )  //i
  );
  always @(*) begin
    case(counter)
      5'b00000 : _zz_result_data_payload_fragment = crc_core_result[0 : 0];
      5'b00001 : _zz_result_data_payload_fragment = crc_core_result[1 : 1];
      5'b00010 : _zz_result_data_payload_fragment = crc_core_result[2 : 2];
      5'b00011 : _zz_result_data_payload_fragment = crc_core_result[3 : 3];
      5'b00100 : _zz_result_data_payload_fragment = crc_core_result[4 : 4];
      5'b00101 : _zz_result_data_payload_fragment = crc_core_result[5 : 5];
      5'b00110 : _zz_result_data_payload_fragment = crc_core_result[6 : 6];
      5'b00111 : _zz_result_data_payload_fragment = crc_core_result[7 : 7];
      5'b01000 : _zz_result_data_payload_fragment = crc_core_result[8 : 8];
      5'b01001 : _zz_result_data_payload_fragment = crc_core_result[9 : 9];
      5'b01010 : _zz_result_data_payload_fragment = crc_core_result[10 : 10];
      5'b01011 : _zz_result_data_payload_fragment = crc_core_result[11 : 11];
      5'b01100 : _zz_result_data_payload_fragment = crc_core_result[12 : 12];
      5'b01101 : _zz_result_data_payload_fragment = crc_core_result[13 : 13];
      5'b01110 : _zz_result_data_payload_fragment = crc_core_result[14 : 14];
      5'b01111 : _zz_result_data_payload_fragment = crc_core_result[15 : 15];
      5'b10000 : _zz_result_data_payload_fragment = crc_core_result[16 : 16];
      5'b10001 : _zz_result_data_payload_fragment = crc_core_result[17 : 17];
      5'b10010 : _zz_result_data_payload_fragment = crc_core_result[18 : 18];
      5'b10011 : _zz_result_data_payload_fragment = crc_core_result[19 : 19];
      5'b10100 : _zz_result_data_payload_fragment = crc_core_result[20 : 20];
      5'b10101 : _zz_result_data_payload_fragment = crc_core_result[21 : 21];
      5'b10110 : _zz_result_data_payload_fragment = crc_core_result[22 : 22];
      default : _zz_result_data_payload_fragment = crc_core_result[23 : 23];
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l47 = (raw_data_fire && raw_data_payload_last); // @[BaseType.scala 305:24]
  assign result_data_fire = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l47_1 = (result_data_fire && result_data_payload_last); // @[BaseType.scala 305:24]
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready); // @[BaseType.scala 305:24]
  assign result_data_fire_1 = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign crc_core_flush = (result_data_fire_1 && result_data_payload_last); // @[PhyTX.scala 54:23]
  always @(*) begin
    result_data_payload_last = 1'b0; // @[PhyTX.scala 56:25]
    if(!when_PhyTX_l57) begin
      if(when_PhyTX_l69) begin
        result_data_payload_last = 1'b1; // @[PhyTX.scala 70:37]
      end
    end
  end

  assign when_PhyTX_l57 = (! emitCrc); // @[BaseType.scala 299:24]
  always @(*) begin
    if(when_PhyTX_l57) begin
      result_data_valid = raw_data_valid; // @[PhyTX.scala 58:30]
    end else begin
      result_data_valid = 1'b1; // @[PhyTX.scala 66:30]
    end
  end

  always @(*) begin
    if(when_PhyTX_l57) begin
      result_data_payload_fragment = raw_data_payload_fragment; // @[PhyTX.scala 59:33]
    end else begin
      result_data_payload_fragment = _zz_result_data_payload_fragment; // @[PhyTX.scala 68:37]
    end
  end

  always @(*) begin
    if(when_PhyTX_l57) begin
      raw_data_ready = result_data_ready; // @[PhyTX.scala 60:27]
    end else begin
      raw_data_ready = 1'b0; // @[PhyTX.scala 65:27]
    end
  end

  assign when_PhyTX_l69 = (counter == 5'h0); // @[BaseType.scala 305:24]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      emitCrc <= 1'b0; // @[Data.scala 400:33]
      counter <= 5'h17; // @[Data.scala 400:33]
    end else begin
      if(when_PhyTX_l47) begin
        emitCrc <= 1'b1; // @[PhyTX.scala 47:34]
      end
      if(when_PhyTX_l47_1) begin
        emitCrc <= 1'b0; // @[PhyTX.scala 47:64]
      end
      if(when_PhyTX_l57) begin
        counter <= 5'h17; // @[PhyTX.scala 62:21]
      end else begin
        if(when_PhyTX_l69) begin
          if(result_data_ready) begin
            emitCrc <= 1'b0; // @[PhyTX.scala 72:29]
          end
        end
        if(result_data_ready) begin
          counter <= (counter - 5'h01); // @[PhyTX.scala 76:25]
        end
      end
    end
  end


endmodule

module StreamFifo_4 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [0:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [0:0]    io_pop_payload_fragment,
  input               io_flush,
  output reg [12:0]   io_occupancy,
  output reg [12:0]   io_availability,
  input               clk,
  input               reset
);

  reg        [1:0]    _zz_logic_ram_port0;
  wire       [12:0]   _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [12:0]   _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [1:0]    _zz_logic_ram_port_1;
  wire       [12:0]   _zz_io_occupancy;
  wire       [12:0]   _zz_io_availability;
  wire       [12:0]   _zz_io_availability_1;
  wire       [12:0]   _zz_io_availability_2;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [12:0]   logic_pushPtr_valueNext;
  reg        [12:0]   logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [12:0]   logic_popPtr_valueNext;
  reg        [12:0]   logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [1:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l1101;
  wire       [12:0]   logic_ptrDif;
  reg [1:0] logic_ram [0:6144];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {12'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {12'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (13'h1801 + logic_ptrDif);
  assign _zz_io_availability = (13'h1801 + _zz_io_availability_1);
  assign _zz_io_availability_1 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_availability_2 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_fragment,io_push_payload_last};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0; // @[when.scala 47:16]
    if(logic_pushing) begin
      _zz_1 = 1'b1; // @[when.scala 52:10]
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1; // @[Utils.scala 540:41]
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0; // @[Utils.scala 537:19]
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1; // @[Utils.scala 539:33]
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 13'h1800); // @[BaseType.scala 305:24]
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 13'h0; // @[Utils.scala 552:17]
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext); // @[Utils.scala 554:17]
    end
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 13'h0; // @[Utils.scala 558:15]
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1; // @[Utils.scala 540:41]
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0; // @[Utils.scala 537:19]
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1; // @[Utils.scala 539:33]
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 13'h1800); // @[BaseType.scala 305:24]
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 13'h0; // @[Utils.scala 552:17]
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext); // @[Utils.scala 554:17]
    end
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 13'h0; // @[Utils.scala 558:15]
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value); // @[BaseType.scala 305:24]
  assign logic_pushing = (io_push_valid && io_push_ready); // @[BaseType.scala 305:24]
  assign logic_popping = (io_pop_valid && io_pop_ready); // @[BaseType.scala 305:24]
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy)); // @[BaseType.scala 305:24]
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy); // @[BaseType.scala 305:24]
  assign io_push_ready = (! logic_full); // @[Stream.scala 1097:19]
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full)))); // @[Stream.scala 1098:18]
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0; // @[Mem.scala 310:24]
  assign io_pop_payload_last = _zz_io_pop_payload_last[0]; // @[Stream.scala 1099:20]
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[1 : 1]; // @[Stream.scala 1099:20]
  assign when_Stream_l1101 = (logic_pushing != logic_popping); // @[BaseType.scala 305:24]
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value); // @[BaseType.scala 299:24]
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 13'h1801 : 13'h0); // @[Stream.scala 1118:25]
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy); // @[Stream.scala 1121:22]
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 13'h0 : 13'h1801); // @[Stream.scala 1119:25]
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2); // @[Stream.scala 1122:25]
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 13'h0; // @[Data.scala 400:33]
      logic_popPtr_value <= 13'h0; // @[Data.scala 400:33]
      logic_risingOccupancy <= 1'b0; // @[Data.scala 400:33]
      _zz_io_pop_valid <= 1'b0; // @[Data.scala 400:33]
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext; // @[Reg.scala 39:30]
      logic_popPtr_value <= logic_popPtr_valueNext; // @[Reg.scala 39:30]
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value); // @[Reg.scala 39:30]
      if(when_Stream_l1101) begin
        logic_risingOccupancy <= logic_pushing; // @[Stream.scala 1102:23]
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0; // @[Stream.scala 1129:23]
      end
    end
  end


endmodule

module ConvEncoder (
  input               tail_bits_valid,
  input      [6:0]    tail_bits_payload,
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output              coded_data_valid,
  output              coded_data_payload_last,
  output     [2:0]    coded_data_payload_fragment,
  input               clk,
  input               reset
);

  wire       [7:0]    _zz_r_enc_0;
  reg        [2:0]    coded_data;
  reg                 coded_data_valid_1;
  reg        [6:0]    r_enc_buf;
  wire       [6:0]    r_enc_0;
  wire       [0:0]    code_vec_0;
  wire       [0:0]    code_vec_1;
  wire       [0:0]    code_vec_2;
  wire                raw_data_fire;
  reg                 raw_data_payload_last_regNext;

  assign _zz_r_enc_0 = {raw_data_payload_fragment[0],r_enc_buf};
  assign r_enc_0 = _zz_r_enc_0[7 : 1]; // @[ConvEncoder.scala 37:18]
  assign raw_data_fire = (raw_data_valid && raw_data_ready); // @[BaseType.scala 305:24]
  assign raw_data_ready = (! tail_bits_valid); // @[ConvEncoder.scala 52:27]
  assign code_vec_0[0] = ((((r_enc_0[0] ^ r_enc_0[1]) ^ r_enc_0[3]) ^ r_enc_0[4]) ^ r_enc_0[6]); // @[ConvEncoder.scala 57:45]
  assign code_vec_1[0] = ((((r_enc_0[0] ^ r_enc_0[3]) ^ r_enc_0[4]) ^ r_enc_0[5]) ^ r_enc_0[6]); // @[ConvEncoder.scala 57:45]
  assign code_vec_2[0] = ((((r_enc_0[0] ^ r_enc_0[2]) ^ r_enc_0[4]) ^ r_enc_0[5]) ^ r_enc_0[6]); // @[ConvEncoder.scala 57:45]
  assign coded_data_payload_fragment = coded_data; // @[ConvEncoder.scala 61:31]
  assign coded_data_valid = coded_data_valid_1; // @[ConvEncoder.scala 62:29]
  assign coded_data_payload_last = raw_data_payload_last_regNext; // @[ConvEncoder.scala 63:28]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      coded_data_valid_1 <= 1'b0; // @[Data.scala 400:33]
      r_enc_buf <= 7'h0; // @[Data.scala 400:33]
      raw_data_payload_last_regNext <= 1'b0; // @[Data.scala 400:33]
    end else begin
      if(tail_bits_valid) begin
        r_enc_buf <= tail_bits_payload; // @[ConvEncoder.scala 43:27]
        coded_data_valid_1 <= 1'b0; // @[ConvEncoder.scala 44:34]
      end else begin
        if(raw_data_fire) begin
          r_enc_buf <= r_enc_0; // @[ConvEncoder.scala 46:27]
          coded_data_valid_1 <= 1'b1; // @[ConvEncoder.scala 48:34]
        end else begin
          coded_data_valid_1 <= 1'b0; // @[ConvEncoder.scala 50:34]
        end
      end
      raw_data_payload_last_regNext <= raw_data_payload_last; // @[Reg.scala 39:30]
    end
  end

  always @(posedge clk) begin
    if(!tail_bits_valid) begin
      if(raw_data_fire) begin
        coded_data <= {code_vec_0,{code_vec_1,code_vec_2}}; // @[ConvEncoder.scala 47:28]
      end
    end
  end


endmodule

module UnsignedDivider (
  input               flush,
  input               cmd_valid,
  output              cmd_ready,
  input      [19:0]   cmd_payload_numerator,
  input      [12:0]   cmd_payload_denominator,
  output              rsp_valid,
  input               rsp_ready,
  output     [19:0]   rsp_payload_quotient,
  output     [12:0]   rsp_payload_remainder,
  output              rsp_payload_error,
  input               clk,
  input               reset
);

  wire       [4:0]    _zz__zz_3;
  wire       [0:0]    _zz__zz_3_1;
  wire       [13:0]   _zz__zz_when_UnsignedDivider_l112;
  wire       [20:0]   _zz__zz_rsp_payload_quotient;
  reg        [1:0]    switch_UnsignedDivider_l92;
  reg                 _zz_cmd_ready;
  reg                 _zz_rsp_valid;
  reg                 _zz_1;
  reg                 _zz_2;
  reg        [4:0]    _zz_3;
  reg        [4:0]    _zz_4;
  wire                _zz_5;
  wire                _zz_6;
  reg        [19:0]   _zz_rsp_payload_quotient;
  reg        [12:0]   _zz_rsp_payload_error;
  reg        [12:0]   _zz_rsp_payload_remainder;
  wire       [13:0]   _zz_rsp_payload_remainder_1;
  wire       [13:0]   _zz_when_UnsignedDivider_l112;
  wire                cmd_fire;
  wire                when_UnsignedDivider_l112;
  wire                rsp_fire;

  assign _zz__zz_3_1 = _zz_1;
  assign _zz__zz_3 = {4'd0, _zz__zz_3_1};
  assign _zz__zz_when_UnsignedDivider_l112 = {1'd0, _zz_rsp_payload_error};
  assign _zz__zz_rsp_payload_quotient = {_zz_rsp_payload_quotient,(! _zz_when_UnsignedDivider_l112[13])};
  always @(*) begin
    _zz_1 = 1'b0; // @[Utils.scala 536:23]
    case(switch_UnsignedDivider_l92)
      2'b00 : begin
      end
      2'b01 : begin
        _zz_1 = 1'b1; // @[Utils.scala 540:41]
      end
      2'b10 : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    _zz_2 = 1'b0; // @[Utils.scala 537:19]
    case(switch_UnsignedDivider_l92)
      2'b00 : begin
        if(cmd_fire) begin
          _zz_2 = 1'b1; // @[Utils.scala 539:33]
        end
      end
      2'b01 : begin
      end
      2'b10 : begin
      end
      default : begin
      end
    endcase
  end

  assign _zz_5 = (_zz_4 == 5'h13); // @[BaseType.scala 305:24]
  assign _zz_6 = (_zz_5 && _zz_1); // @[BaseType.scala 305:24]
  always @(*) begin
    if(_zz_6) begin
      _zz_3 = 5'h0; // @[Utils.scala 552:17]
    end else begin
      _zz_3 = (_zz_4 + _zz__zz_3); // @[Utils.scala 554:17]
    end
    if(_zz_2) begin
      _zz_3 = 5'h0; // @[Utils.scala 558:15]
    end
  end

  assign _zz_rsp_payload_remainder_1 = {_zz_rsp_payload_remainder,_zz_rsp_payload_quotient[19]}; // @[BaseType.scala 318:22]
  assign _zz_when_UnsignedDivider_l112 = (_zz_rsp_payload_remainder_1 - _zz__zz_when_UnsignedDivider_l112); // @[BaseType.scala 299:24]
  assign cmd_ready = _zz_cmd_ready; // @[UnsignedDivider.scala 85:22]
  assign rsp_valid = _zz_rsp_valid; // @[UnsignedDivider.scala 86:22]
  assign rsp_payload_quotient = _zz_rsp_payload_quotient; // @[UnsignedDivider.scala 87:25]
  assign rsp_payload_remainder = _zz_rsp_payload_remainder; // @[UnsignedDivider.scala 88:26]
  assign rsp_payload_error = (_zz_rsp_payload_error == 13'h0); // @[UnsignedDivider.scala 90:22]
  assign cmd_fire = (cmd_valid && cmd_ready); // @[BaseType.scala 305:24]
  assign when_UnsignedDivider_l112 = (! _zz_when_UnsignedDivider_l112[13]); // @[BaseType.scala 299:24]
  assign rsp_fire = (rsp_valid && rsp_ready); // @[BaseType.scala 305:24]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      switch_UnsignedDivider_l92 <= 2'b00; // @[Data.scala 400:33]
      _zz_cmd_ready <= 1'b0; // @[Data.scala 400:33]
      _zz_rsp_valid <= 1'b0; // @[Data.scala 400:33]
      _zz_4 <= 5'h0; // @[Data.scala 400:33]
    end else begin
      _zz_4 <= _zz_3; // @[Reg.scala 39:30]
      case(switch_UnsignedDivider_l92)
        2'b00 : begin
          if(cmd_fire) begin
            switch_UnsignedDivider_l92 <= 2'b01; // @[UnsignedDivider.scala 101:28]
            _zz_cmd_ready <= 1'b0; // @[UnsignedDivider.scala 102:30]
          end else begin
            _zz_cmd_ready <= 1'b1; // @[UnsignedDivider.scala 104:30]
          end
          _zz_rsp_valid <= 1'b0; // @[UnsignedDivider.scala 106:26]
        end
        2'b01 : begin
          if(flush) begin
            switch_UnsignedDivider_l92 <= 2'b00; // @[UnsignedDivider.scala 119:28]
            _zz_cmd_ready <= 1'b1; // @[UnsignedDivider.scala 120:30]
            _zz_rsp_valid <= 1'b0; // @[UnsignedDivider.scala 121:30]
          end else begin
            if(_zz_6) begin
              switch_UnsignedDivider_l92 <= 2'b10; // @[UnsignedDivider.scala 123:28]
              _zz_rsp_valid <= 1'b1; // @[UnsignedDivider.scala 124:30]
            end
          end
        end
        2'b10 : begin
          if(flush) begin
            switch_UnsignedDivider_l92 <= 2'b00; // @[UnsignedDivider.scala 129:28]
            _zz_cmd_ready <= 1'b1; // @[UnsignedDivider.scala 130:30]
            _zz_rsp_valid <= 1'b0; // @[UnsignedDivider.scala 131:30]
          end else begin
            if(rsp_fire) begin
              _zz_rsp_valid <= 1'b0; // @[UnsignedDivider.scala 133:30]
              _zz_cmd_ready <= 1'b1; // @[UnsignedDivider.scala 134:30]
              switch_UnsignedDivider_l92 <= 2'b00; // @[UnsignedDivider.scala 135:28]
            end
          end
        end
        default : begin
          switch_UnsignedDivider_l92 <= 2'b00; // @[UnsignedDivider.scala 139:24]
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(switch_UnsignedDivider_l92)
      2'b00 : begin
        if(cmd_fire) begin
          _zz_rsp_payload_remainder <= 13'h0; // @[UnsignedDivider.scala 97:31]
          _zz_rsp_payload_quotient <= cmd_payload_numerator; // @[UnsignedDivider.scala 98:31]
          _zz_rsp_payload_error <= cmd_payload_denominator; // @[UnsignedDivider.scala 99:33]
        end
      end
      2'b01 : begin
        _zz_rsp_payload_quotient <= _zz__zz_rsp_payload_quotient[19:0]; // @[UnsignedDivider.scala 111:27]
        if(when_UnsignedDivider_l112) begin
          _zz_rsp_payload_remainder <= _zz_when_UnsignedDivider_l112[12:0]; // @[UnsignedDivider.scala 113:31]
        end else begin
          _zz_rsp_payload_remainder <= _zz_rsp_payload_remainder_1[12:0]; // @[UnsignedDivider.scala 115:31]
        end
      end
      2'b10 : begin
      end
      default : begin
      end
    endcase
  end


endmodule

module TxCrcUnit_2 (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [0:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);

  wire                crc_core_flush;
  wire       [23:0]   crc_core_result;
  wire       [23:0]   crc_core_resultNext;
  reg        [0:0]    _zz_result_data_payload_fragment;
  reg                 emitCrc;
  wire                raw_data_fire;
  wire                when_PhyTX_l47;
  wire                result_data_fire;
  wire                when_PhyTX_l47_1;
  reg        [4:0]    counter;
  wire                raw_data_fire_1;
  wire                result_data_fire_1;
  wire                when_PhyTX_l57;
  wire                when_PhyTX_l69;

  Crc_2 crc_core (
    .flush         (crc_core_flush           ), //i
    .input_valid   (raw_data_fire_1          ), //i
    .input_payload (raw_data_payload_fragment), //i
    .result        (crc_core_result[23:0]    ), //o
    .resultNext    (crc_core_resultNext[23:0]), //o
    .clk           (clk                      ), //i
    .reset         (reset                    )  //i
  );
  always @(*) begin
    case(counter)
      5'b00000 : _zz_result_data_payload_fragment = crc_core_result[0 : 0];
      5'b00001 : _zz_result_data_payload_fragment = crc_core_result[1 : 1];
      5'b00010 : _zz_result_data_payload_fragment = crc_core_result[2 : 2];
      5'b00011 : _zz_result_data_payload_fragment = crc_core_result[3 : 3];
      5'b00100 : _zz_result_data_payload_fragment = crc_core_result[4 : 4];
      5'b00101 : _zz_result_data_payload_fragment = crc_core_result[5 : 5];
      5'b00110 : _zz_result_data_payload_fragment = crc_core_result[6 : 6];
      5'b00111 : _zz_result_data_payload_fragment = crc_core_result[7 : 7];
      5'b01000 : _zz_result_data_payload_fragment = crc_core_result[8 : 8];
      5'b01001 : _zz_result_data_payload_fragment = crc_core_result[9 : 9];
      5'b01010 : _zz_result_data_payload_fragment = crc_core_result[10 : 10];
      5'b01011 : _zz_result_data_payload_fragment = crc_core_result[11 : 11];
      5'b01100 : _zz_result_data_payload_fragment = crc_core_result[12 : 12];
      5'b01101 : _zz_result_data_payload_fragment = crc_core_result[13 : 13];
      5'b01110 : _zz_result_data_payload_fragment = crc_core_result[14 : 14];
      5'b01111 : _zz_result_data_payload_fragment = crc_core_result[15 : 15];
      5'b10000 : _zz_result_data_payload_fragment = crc_core_result[16 : 16];
      5'b10001 : _zz_result_data_payload_fragment = crc_core_result[17 : 17];
      5'b10010 : _zz_result_data_payload_fragment = crc_core_result[18 : 18];
      5'b10011 : _zz_result_data_payload_fragment = crc_core_result[19 : 19];
      5'b10100 : _zz_result_data_payload_fragment = crc_core_result[20 : 20];
      5'b10101 : _zz_result_data_payload_fragment = crc_core_result[21 : 21];
      5'b10110 : _zz_result_data_payload_fragment = crc_core_result[22 : 22];
      default : _zz_result_data_payload_fragment = crc_core_result[23 : 23];
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l47 = (raw_data_fire && raw_data_payload_last); // @[BaseType.scala 305:24]
  assign result_data_fire = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign when_PhyTX_l47_1 = (result_data_fire && result_data_payload_last); // @[BaseType.scala 305:24]
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready); // @[BaseType.scala 305:24]
  assign result_data_fire_1 = (result_data_valid && result_data_ready); // @[BaseType.scala 305:24]
  assign crc_core_flush = (result_data_fire_1 && result_data_payload_last); // @[PhyTX.scala 54:23]
  always @(*) begin
    result_data_payload_last = 1'b0; // @[PhyTX.scala 56:25]
    if(!when_PhyTX_l57) begin
      if(when_PhyTX_l69) begin
        result_data_payload_last = 1'b1; // @[PhyTX.scala 70:37]
      end
    end
  end

  assign when_PhyTX_l57 = (! emitCrc); // @[BaseType.scala 299:24]
  always @(*) begin
    if(when_PhyTX_l57) begin
      result_data_valid = raw_data_valid; // @[PhyTX.scala 58:30]
    end else begin
      result_data_valid = 1'b1; // @[PhyTX.scala 66:30]
    end
  end

  always @(*) begin
    if(when_PhyTX_l57) begin
      result_data_payload_fragment = raw_data_payload_fragment; // @[PhyTX.scala 59:33]
    end else begin
      result_data_payload_fragment = _zz_result_data_payload_fragment; // @[PhyTX.scala 68:37]
    end
  end

  always @(*) begin
    if(when_PhyTX_l57) begin
      raw_data_ready = result_data_ready; // @[PhyTX.scala 60:27]
    end else begin
      raw_data_ready = 1'b0; // @[PhyTX.scala 65:27]
    end
  end

  assign when_PhyTX_l69 = (counter == 5'h0); // @[BaseType.scala 305:24]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      emitCrc <= 1'b0; // @[Data.scala 400:33]
      counter <= 5'h17; // @[Data.scala 400:33]
    end else begin
      if(when_PhyTX_l47) begin
        emitCrc <= 1'b1; // @[PhyTX.scala 47:34]
      end
      if(when_PhyTX_l47_1) begin
        emitCrc <= 1'b0; // @[PhyTX.scala 47:64]
      end
      if(when_PhyTX_l57) begin
        counter <= 5'h17; // @[PhyTX.scala 62:21]
      end else begin
        if(when_PhyTX_l69) begin
          if(result_data_ready) begin
            emitCrc <= 1'b0; // @[PhyTX.scala 72:29]
          end
        end
        if(result_data_ready) begin
          counter <= (counter - 5'h01); // @[PhyTX.scala 76:25]
        end
      end
    end
  end


endmodule

module Crc (
  input               flush,
  input               input_valid,
  input      [0:0]    input_payload,
  output     [15:0]   result,
  output     [15:0]   resultNext,
  input               clk,
  input               reset
);

  wire       [15:0]   _zz_state_1;
  reg        [15:0]   state_1;
  reg        [15:0]   state;
  wire       [15:0]   stateXor;
  wire       [15:0]   accXor;

  assign _zz_state_1 = (state <<< 1);
  always @(*) begin
    state_1 = state; // @[Data.scala 57:9]
    state_1 = (_zz_state_1 ^ ((input_payload[0] ^ state[15]) ? 16'h1021 : 16'h0)); // @[Data.scala 63:9]
  end

  assign stateXor = (state ^ 16'h0); // @[BaseType.scala 299:24]
  assign accXor = (state_1 ^ 16'h0); // @[BaseType.scala 299:24]
  assign result = stateXor; // @[Crc.scala 30:15]
  assign resultNext = accXor; // @[Crc.scala 31:19]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      state <= 16'h0; // @[Data.scala 400:33]
    end else begin
      if(flush) begin
        state <= 16'h0; // @[Crc.scala 23:15]
      end else begin
        if(input_valid) begin
          state <= state_1; // @[Crc.scala 25:15]
        end
      end
    end
  end


endmodule

module Crc_1 (
  input               flush,
  input               input_valid,
  input      [0:0]    input_payload,
  output     [23:0]   result,
  output     [23:0]   resultNext,
  input               clk,
  input               reset
);

  wire       [23:0]   _zz_state_1;
  reg        [23:0]   state_1;
  reg        [23:0]   state;
  wire       [23:0]   stateXor;
  wire       [23:0]   accXor;

  assign _zz_state_1 = (state <<< 1);
  always @(*) begin
    state_1 = state; // @[Data.scala 57:9]
    state_1 = (_zz_state_1 ^ ((input_payload[0] ^ state[23]) ? 24'h864cfb : 24'h0)); // @[Data.scala 63:9]
  end

  assign stateXor = (state ^ 24'h0); // @[BaseType.scala 299:24]
  assign accXor = (state_1 ^ 24'h0); // @[BaseType.scala 299:24]
  assign result = stateXor; // @[Crc.scala 30:15]
  assign resultNext = accXor; // @[Crc.scala 31:19]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      state <= 24'h0; // @[Data.scala 400:33]
    end else begin
      if(flush) begin
        state <= 24'h0; // @[Crc.scala 23:15]
      end else begin
        if(input_valid) begin
          state <= state_1; // @[Crc.scala 25:15]
        end
      end
    end
  end


endmodule

module Crc_2 (
  input               flush,
  input               input_valid,
  input      [0:0]    input_payload,
  output     [23:0]   result,
  output     [23:0]   resultNext,
  input               clk,
  input               reset
);

  wire       [23:0]   _zz_state_1;
  reg        [23:0]   state_1;
  reg        [23:0]   state;
  wire       [23:0]   stateXor;
  wire       [23:0]   accXor;

  assign _zz_state_1 = (state <<< 1);
  always @(*) begin
    state_1 = state; // @[Data.scala 57:9]
    state_1 = (_zz_state_1 ^ ((input_payload[0] ^ state[23]) ? 24'h800063 : 24'h0)); // @[Data.scala 63:9]
  end

  assign stateXor = (state ^ 24'h0); // @[BaseType.scala 299:24]
  assign accXor = (state_1 ^ 24'h0); // @[BaseType.scala 299:24]
  assign result = stateXor; // @[Crc.scala 30:15]
  assign resultNext = accXor; // @[Crc.scala 31:19]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      state <= 24'h0; // @[Data.scala 400:33]
    end else begin
      if(flush) begin
        state <= 24'h0; // @[Crc.scala 23:15]
      end else begin
        if(input_valid) begin
          state <= state_1; // @[Crc.scala 25:15]
        end
      end
    end
  end


endmodule
