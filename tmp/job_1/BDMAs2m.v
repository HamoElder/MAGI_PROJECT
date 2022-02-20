// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : BDMAs2m
// Git hash  : aa75c4d351d192d27968d3d975124cecc6072cbe


`define BDMAs2mStates_binary_sequential_type [2:0]
`define BDMAs2mStates_binary_sequential_IDLE 3'b000
`define BDMAs2mStates_binary_sequential_PENDING 3'b001
`define BDMAs2mStates_binary_sequential_BURST 3'b010
`define BDMAs2mStates_binary_sequential_RESP 3'b011
`define BDMAs2mStates_binary_sequential_DROP 3'b100

`define BDMAcchStates_binary_sequential_type [1:0]
`define BDMAcchStates_binary_sequential_IDLE 2'b00
`define BDMAcchStates_binary_sequential_FIXED_REQ 2'b01
`define BDMAcchStates_binary_sequential_INCR_REQ 2'b10
`define BDMAcchStates_binary_sequential_HALT 2'b11


module BDMAs2m (
  output              dma_aw_valid,
  input               dma_aw_ready,
  output     [31:0]   dma_aw_payload_addr,
  output     [3:0]    dma_aw_payload_id,
  output     [7:0]    dma_aw_payload_len,
  output     [2:0]    dma_aw_payload_size,
  output     [1:0]    dma_aw_payload_burst,
  output              dma_w_valid,
  input               dma_w_ready,
  output     [31:0]   dma_w_payload_data,
  output     [3:0]    dma_w_payload_strb,
  output              dma_w_payload_last,
  input               dma_b_valid,
  output              dma_b_ready,
  input      [3:0]    dma_b_payload_id,
  input      [1:0]    dma_b_payload_resp,
  input               s2m_data_stream_valid,
  output              s2m_data_stream_ready,
  input      [31:0]   s2m_data_stream_payload_data,
  input      [3:0]    s2m_data_stream_payload_id,
  input      [3:0]    s2m_data_stream_payload_strb,
  input      [3:0]    s2m_data_stream_payload_keep_,
  input               s2m_data_stream_payload_last,
  output     `BDMAs2mStates_binary_sequential_type s2m_state,
  input               s2m_cch_valid,
  output              s2m_cch_ready,
  input      [31:0]   s2m_cch_payload_desc_start_addr,
  input      [29:0]   s2m_cch_payload_desc_total_bytes,
  input      [1:0]    s2m_cch_payload_desc_burst,
  input      [3:0]    s2m_cch_payload_desc_id,
  input               s2m_cch_payload_desc_reset,
  output              s2m_intr,
  input               clk,
  input               reset
);
  wire                s2m_aw_fifo_io_pop_ready;
  wire       [1:0]    low_addr_fifo_io_push_payload;
  wire       [1:0]    low_bytes_fifo_io_push_payload;
  wire                s2m_data_fifo_io_pop_ready;
  wire                s2m_aw_fifo_io_push_ready;
  wire                s2m_aw_fifo_io_pop_valid;
  wire       [31:0]   s2m_aw_fifo_io_pop_payload_addr;
  wire       [3:0]    s2m_aw_fifo_io_pop_payload_id;
  wire       [7:0]    s2m_aw_fifo_io_pop_payload_len;
  wire       [2:0]    s2m_aw_fifo_io_pop_payload_size;
  wire       [1:0]    s2m_aw_fifo_io_pop_payload_burst;
  wire       [3:0]    s2m_aw_fifo_io_occupancy;
  wire       [3:0]    s2m_aw_fifo_io_availability;
  wire                low_addr_fifo_io_push_ready;
  wire                low_addr_fifo_io_pop_valid;
  wire       [1:0]    low_addr_fifo_io_pop_payload;
  wire       [3:0]    low_addr_fifo_io_occupancy;
  wire       [3:0]    low_addr_fifo_io_availability;
  wire                low_bytes_fifo_io_push_ready;
  wire                low_bytes_fifo_io_pop_valid;
  wire       [1:0]    low_bytes_fifo_io_pop_payload;
  wire       [3:0]    low_bytes_fifo_io_occupancy;
  wire       [3:0]    low_bytes_fifo_io_availability;
  wire                s2m_data_fifo_io_push_ready;
  wire                s2m_data_fifo_io_pop_valid;
  wire       [31:0]   s2m_data_fifo_io_pop_payload_data;
  wire       [3:0]    s2m_data_fifo_io_pop_payload_id;
  wire       [3:0]    s2m_data_fifo_io_pop_payload_strb;
  wire       [3:0]    s2m_data_fifo_io_pop_payload_keep_;
  wire                s2m_data_fifo_io_pop_payload_last;
  wire       [4:0]    s2m_data_fifo_io_occupancy;
  wire       [4:0]    s2m_data_fifo_io_availability;
  wire       [29:0]   _zz_aligned_address;
  wire       [31:0]   _zz_when_BDMAs2m_l105;
  wire       [31:0]   _zz_when_BDMAs2m_l105_1;
  wire       [31:0]   _zz_trans_bytes_cnt;
  wire       [29:0]   _zz_s2m_aw_len;
  wire       [31:0]   _zz_s2m_aw_len_1;
  wire       [31:0]   _zz_s2m_aw_len_2;
  wire       [31:0]   _zz_s2m_aw_len_3;
  wire       [31:0]   _zz_cch_address;
  wire       [31:0]   _zz_when_BDMAs2m_l136;
  wire       [31:0]   _zz_when_BDMAs2m_l136_1;
  wire       [19:0]   _zz_when_BDMAs2m_l140;
  wire       [31:0]   _zz_when_BDMAs2m_l140_1;
  wire       [31:0]   _zz_when_BDMAs2m_l140_2;
  wire       [29:0]   _zz_when_BDMAs2m_l140_3;
  wire       [17:0]   _zz_when_BDMAs2m_l140_4;
  wire       [31:0]   _zz_trans_bytes_cnt_1;
  wire       [19:0]   _zz_when_BDMAs2m_l152;
  wire       [31:0]   _zz_when_BDMAs2m_l152_1;
  wire       [31:0]   _zz_trans_bytes_cnt_2;
  wire       [31:0]   _zz_trans_bytes_cnt_3;
  wire       [31:0]   _zz_trans_bytes_cnt_4;
  wire       [29:0]   _zz_s2m_aw_len_4;
  wire       [31:0]   _zz_s2m_aw_len_5;
  wire       [31:0]   _zz_s2m_aw_len_6;
  wire       [31:0]   _zz_s2m_aw_len_7;
  wire       [1:0]    _zz_io_push_payload;
  wire       [7:0]    _zz_when_BDMAs2m_l222;
  wire       [7:0]    _zz_when_BDMAs2m_l222_1;
  wire       [7:0]    _zz_when_BDMAs2m_l241;
  wire       [7:0]    _zz_when_BDMAs2m_l241_1;
  wire       [63:0]   _zz_s2m_w_data;
  wire       [5:0]    _zz_s2m_w_data_1;
  wire       [7:0]    _zz_s2m_w_strb;
  reg        `BDMAcchStates_binary_sequential_type s2m_cch_state;
  reg        `BDMAs2mStates_binary_sequential_type s2m_w_state;
  reg                 s2m_aw_valve;
  reg                 s2m_data_valve;
  reg                 cch_ready;
  reg        [29:0]   cch_total_bytes;
  reg        [31:0]   cch_address;
  reg        [1:0]    cch_burst_type;
  reg        [3:0]    cch_id;
  reg        [29:0]   trans_bytes_cnt;
  reg        [7:0]    s2m_aw_len;
  reg                 s2m_aw_valid;
  reg                 s2m_aw_halt_exec;
  wire       [31:0]   aligned_address;
  reg                 cycle_finished;
  wire                s2m_cch_fire;
  wire                when_BDMAs2m_l89;
  wire                s2m_aw_fifo_io_push_fire;
  wire                s2m_aw_fifo_io_push_fire_1;
  wire                when_BDMAs2m_l105;
  wire                when_BDMAs2m_l119;
  wire                s2m_aw_fifo_io_push_fire_2;
  wire                s2m_aw_fifo_io_push_fire_3;
  wire                when_BDMAs2m_l136;
  wire                when_BDMAs2m_l140;
  wire                when_BDMAs2m_l152;
  wire                when_BDMAs2m_l164;
  wire                _zz_dma_aw_valid;
  wire                dma_aw_fire;
  wire                dma_aw_fire_1;
  reg        [31:0]   s2m_w_data;
  reg        [3:0]    s2m_w_strb;
  reg                 s2m_w_valid;
  reg                 s2m_b_ready;
  reg        [31:0]   w_residual_data;
  reg        [3:0]    w_residual_strb;
  reg                 s2m_axis_last;
  reg                 s2m_axis_leak;
  wire                s2m_aw_finish;
  reg        [7:0]    s2m_axis_len;
  reg        [3:0]    strb_mask;
  reg        [1:0]    bytes_shift;
  wire       [3:0]    strb_full;
  wire                dma_aw_fire_2;
  wire                when_BDMAs2m_l222;
  wire                when_BDMAs2m_l241;
  wire                dma_w_fire;
  wire                when_BDMAs2m_l249;
  wire                s2m_data_fifo_io_pop_fire;
  wire                when_BDMAs2m_l258;
  wire                when_BDMAs2m_l268;
  wire                dma_w_fire_1;
  wire                dma_b_fire;
  wire                s2m_data_fifo_io_pop_fire_1;
  wire                when_BDMAs2m_l335;
  wire                when_BDMAs2m_l371;
  wire                when_BDMAs2m_l373;
  `ifndef SYNTHESIS
  reg [55:0] s2m_state_string;
  reg [71:0] s2m_cch_state_string;
  reg [55:0] s2m_w_state_string;
  `endif


  assign _zz_aligned_address = (cch_address >>> 2);
  assign _zz_when_BDMAs2m_l105 = (_zz_when_BDMAs2m_l105_1 + (cch_address & 32'h00000003));
  assign _zz_when_BDMAs2m_l105_1 = {2'd0, cch_total_bytes};
  assign _zz_trans_bytes_cnt = (32'h00000040 - (cch_address & 32'h00000003));
  assign _zz_s2m_aw_len = (_zz_s2m_aw_len_1 >>> 2);
  assign _zz_s2m_aw_len_1 = (_zz_s2m_aw_len_2 - 32'h00000001);
  assign _zz_s2m_aw_len_2 = (_zz_s2m_aw_len_3 + (cch_address & 32'h00000003));
  assign _zz_s2m_aw_len_3 = {2'd0, trans_bytes_cnt};
  assign _zz_cch_address = {2'd0, trans_bytes_cnt};
  assign _zz_when_BDMAs2m_l136 = (_zz_when_BDMAs2m_l136_1 + (cch_address & 32'h00000003));
  assign _zz_when_BDMAs2m_l136_1 = {2'd0, cch_total_bytes};
  assign _zz_when_BDMAs2m_l140 = (_zz_when_BDMAs2m_l140_1 >>> 12);
  assign _zz_when_BDMAs2m_l140_1 = ((cch_address & 32'h00000fff) + _zz_when_BDMAs2m_l140_2);
  assign _zz_when_BDMAs2m_l140_3 = (cch_total_bytes & 30'h00000fff);
  assign _zz_when_BDMAs2m_l140_2 = {2'd0, _zz_when_BDMAs2m_l140_3};
  assign _zz_when_BDMAs2m_l140_4 = ((cch_total_bytes & 30'h00000fff) >>> 12);
  assign _zz_trans_bytes_cnt_1 = (32'h00001000 - (cch_address & 32'h00000fff));
  assign _zz_when_BDMAs2m_l152 = (_zz_when_BDMAs2m_l152_1 >>> 12);
  assign _zz_when_BDMAs2m_l152_1 = ((cch_address & 32'h00000fff) + 32'h00000040);
  assign _zz_trans_bytes_cnt_2 = (_zz_trans_bytes_cnt_3 & 32'h00000fff);
  assign _zz_trans_bytes_cnt_3 = (32'h00001000 - cch_address);
  assign _zz_trans_bytes_cnt_4 = (32'h00000040 - (cch_address & 32'h00000003));
  assign _zz_s2m_aw_len_4 = (_zz_s2m_aw_len_5 >>> 2);
  assign _zz_s2m_aw_len_5 = (_zz_s2m_aw_len_6 - 32'h00000001);
  assign _zz_s2m_aw_len_6 = (_zz_s2m_aw_len_7 + (cch_address & 32'h00000003));
  assign _zz_s2m_aw_len_7 = {2'd0, trans_bytes_cnt};
  assign _zz_io_push_payload = (trans_bytes_cnt[1 : 0] + cch_address[1 : 0]);
  assign _zz_when_BDMAs2m_l222 = (s2m_axis_len + 8'h01);
  assign _zz_when_BDMAs2m_l222_1 = {3'd0, s2m_data_fifo_io_occupancy};
  assign _zz_when_BDMAs2m_l241 = (s2m_axis_len + 8'h01);
  assign _zz_when_BDMAs2m_l241_1 = {3'd0, s2m_data_fifo_io_occupancy};
  assign _zz_s2m_w_data = ({s2m_data_fifo_io_pop_payload_data,w_residual_data} >>> _zz_s2m_w_data_1);
  assign _zz_s2m_w_data_1 = (4'b1000 * bytes_shift);
  assign _zz_s2m_w_strb = ({s2m_data_fifo_io_pop_payload_keep_,w_residual_strb} >>> bytes_shift);
  StreamFifo s2m_aw_fifo (
    .io_push_valid            (s2m_aw_valid                      ), //i
    .io_push_ready            (s2m_aw_fifo_io_push_ready         ), //o
    .io_push_payload_addr     (aligned_address                   ), //i
    .io_push_payload_id       (cch_id                            ), //i
    .io_push_payload_len      (s2m_aw_len                        ), //i
    .io_push_payload_size     (3'b010                            ), //i
    .io_push_payload_burst    (cch_burst_type                    ), //i
    .io_pop_valid             (s2m_aw_fifo_io_pop_valid          ), //o
    .io_pop_ready             (s2m_aw_fifo_io_pop_ready          ), //i
    .io_pop_payload_addr      (s2m_aw_fifo_io_pop_payload_addr   ), //o
    .io_pop_payload_id        (s2m_aw_fifo_io_pop_payload_id     ), //o
    .io_pop_payload_len       (s2m_aw_fifo_io_pop_payload_len    ), //o
    .io_pop_payload_size      (s2m_aw_fifo_io_pop_payload_size   ), //o
    .io_pop_payload_burst     (s2m_aw_fifo_io_pop_payload_burst  ), //o
    .io_flush                 (1'b0                              ), //i
    .io_occupancy             (s2m_aw_fifo_io_occupancy          ), //o
    .io_availability          (s2m_aw_fifo_io_availability       ), //o
    .clk                      (clk                               ), //i
    .reset                    (reset                             )  //i
  );
  StreamFifo_1 low_addr_fifo (
    .io_push_valid      (s2m_aw_valid                   ), //i
    .io_push_ready      (low_addr_fifo_io_push_ready    ), //o
    .io_push_payload    (low_addr_fifo_io_push_payload  ), //i
    .io_pop_valid       (low_addr_fifo_io_pop_valid     ), //o
    .io_pop_ready       (dma_aw_fire                    ), //i
    .io_pop_payload     (low_addr_fifo_io_pop_payload   ), //o
    .io_flush           (1'b0                           ), //i
    .io_occupancy       (low_addr_fifo_io_occupancy     ), //o
    .io_availability    (low_addr_fifo_io_availability  ), //o
    .clk                (clk                            ), //i
    .reset              (reset                          )  //i
  );
  StreamFifo_1 low_bytes_fifo (
    .io_push_valid      (s2m_aw_valid                    ), //i
    .io_push_ready      (low_bytes_fifo_io_push_ready    ), //o
    .io_push_payload    (low_bytes_fifo_io_push_payload  ), //i
    .io_pop_valid       (low_bytes_fifo_io_pop_valid     ), //o
    .io_pop_ready       (dma_aw_fire_1                   ), //i
    .io_pop_payload     (low_bytes_fifo_io_pop_payload   ), //o
    .io_flush           (1'b0                            ), //i
    .io_occupancy       (low_bytes_fifo_io_occupancy     ), //o
    .io_availability    (low_bytes_fifo_io_availability  ), //o
    .clk                (clk                             ), //i
    .reset              (reset                           )  //i
  );
  StreamFifo_3 s2m_data_fifo (
    .io_push_valid            (s2m_data_stream_valid               ), //i
    .io_push_ready            (s2m_data_fifo_io_push_ready         ), //o
    .io_push_payload_data     (s2m_data_stream_payload_data        ), //i
    .io_push_payload_id       (s2m_data_stream_payload_id          ), //i
    .io_push_payload_strb     (s2m_data_stream_payload_strb        ), //i
    .io_push_payload_keep_    (s2m_data_stream_payload_keep_       ), //i
    .io_push_payload_last     (s2m_data_stream_payload_last        ), //i
    .io_pop_valid             (s2m_data_fifo_io_pop_valid          ), //o
    .io_pop_ready             (s2m_data_fifo_io_pop_ready          ), //i
    .io_pop_payload_data      (s2m_data_fifo_io_pop_payload_data   ), //o
    .io_pop_payload_id        (s2m_data_fifo_io_pop_payload_id     ), //o
    .io_pop_payload_strb      (s2m_data_fifo_io_pop_payload_strb   ), //o
    .io_pop_payload_keep_     (s2m_data_fifo_io_pop_payload_keep_  ), //o
    .io_pop_payload_last      (s2m_data_fifo_io_pop_payload_last   ), //o
    .io_flush                 (1'b0                                ), //i
    .io_occupancy             (s2m_data_fifo_io_occupancy          ), //o
    .io_availability          (s2m_data_fifo_io_availability       ), //o
    .clk                      (clk                                 ), //i
    .reset                    (reset                               )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(s2m_state)
      `BDMAs2mStates_binary_sequential_IDLE : s2m_state_string = "IDLE   ";
      `BDMAs2mStates_binary_sequential_PENDING : s2m_state_string = "PENDING";
      `BDMAs2mStates_binary_sequential_BURST : s2m_state_string = "BURST  ";
      `BDMAs2mStates_binary_sequential_RESP : s2m_state_string = "RESP   ";
      `BDMAs2mStates_binary_sequential_DROP : s2m_state_string = "DROP   ";
      default : s2m_state_string = "???????";
    endcase
  end
  always @(*) begin
    case(s2m_cch_state)
      `BDMAcchStates_binary_sequential_IDLE : s2m_cch_state_string = "IDLE     ";
      `BDMAcchStates_binary_sequential_FIXED_REQ : s2m_cch_state_string = "FIXED_REQ";
      `BDMAcchStates_binary_sequential_INCR_REQ : s2m_cch_state_string = "INCR_REQ ";
      `BDMAcchStates_binary_sequential_HALT : s2m_cch_state_string = "HALT     ";
      default : s2m_cch_state_string = "?????????";
    endcase
  end
  always @(*) begin
    case(s2m_w_state)
      `BDMAs2mStates_binary_sequential_IDLE : s2m_w_state_string = "IDLE   ";
      `BDMAs2mStates_binary_sequential_PENDING : s2m_w_state_string = "PENDING";
      `BDMAs2mStates_binary_sequential_BURST : s2m_w_state_string = "BURST  ";
      `BDMAs2mStates_binary_sequential_RESP : s2m_w_state_string = "RESP   ";
      `BDMAs2mStates_binary_sequential_DROP : s2m_w_state_string = "DROP   ";
      default : s2m_w_state_string = "???????";
    endcase
  end
  `endif

  assign aligned_address = {_zz_aligned_address,2'b00};
  assign s2m_cch_fire = (s2m_cch_valid && s2m_cch_ready);
  assign when_BDMAs2m_l89 = (cch_total_bytes == 30'h0);
  assign s2m_aw_fifo_io_push_fire = (s2m_aw_valid && s2m_aw_fifo_io_push_ready);
  assign s2m_aw_fifo_io_push_fire_1 = (s2m_aw_valid && s2m_aw_fifo_io_push_ready);
  assign when_BDMAs2m_l105 = ((_zz_when_BDMAs2m_l105 <= 32'h00000040) || 1'b0);
  assign when_BDMAs2m_l119 = (cch_total_bytes == 30'h0);
  assign s2m_aw_fifo_io_push_fire_2 = (s2m_aw_valid && s2m_aw_fifo_io_push_ready);
  assign s2m_aw_fifo_io_push_fire_3 = (s2m_aw_valid && s2m_aw_fifo_io_push_ready);
  assign when_BDMAs2m_l136 = ((_zz_when_BDMAs2m_l136 <= 32'h00000040) || 1'b0);
  assign when_BDMAs2m_l140 = ((_zz_when_BDMAs2m_l140 != 20'h0) || (_zz_when_BDMAs2m_l140_4 != 18'h0));
  assign when_BDMAs2m_l152 = (_zz_when_BDMAs2m_l152 != 20'h0);
  assign when_BDMAs2m_l164 = (s2m_cch_payload_desc_reset && cycle_finished);
  assign s2m_cch_ready = cch_ready;
  assign _zz_dma_aw_valid = (! (! s2m_aw_valve));
  assign s2m_aw_fifo_io_pop_ready = (dma_aw_ready && _zz_dma_aw_valid);
  assign dma_aw_valid = (s2m_aw_fifo_io_pop_valid && _zz_dma_aw_valid);
  assign dma_aw_payload_addr = s2m_aw_fifo_io_pop_payload_addr;
  assign dma_aw_payload_id = s2m_aw_fifo_io_pop_payload_id;
  assign dma_aw_payload_len = s2m_aw_fifo_io_pop_payload_len;
  assign dma_aw_payload_size = s2m_aw_fifo_io_pop_payload_size;
  assign dma_aw_payload_burst = s2m_aw_fifo_io_pop_payload_burst;
  assign low_addr_fifo_io_push_payload = cch_address[1 : 0];
  assign dma_aw_fire = (dma_aw_valid && dma_aw_ready);
  assign low_bytes_fifo_io_push_payload = ((~ _zz_io_push_payload) + 2'b01);
  assign dma_aw_fire_1 = (dma_aw_valid && dma_aw_ready);
  assign s2m_aw_finish = ((s2m_cch_state == `BDMAcchStates_binary_sequential_HALT) && (! s2m_aw_fifo_io_pop_valid));
  assign strb_full = 4'b1111;
  assign dma_aw_fire_2 = (dma_aw_valid && dma_aw_ready);
  assign when_BDMAs2m_l222 = (_zz_when_BDMAs2m_l222 <= _zz_when_BDMAs2m_l222_1);
  assign when_BDMAs2m_l241 = (_zz_when_BDMAs2m_l241 <= _zz_when_BDMAs2m_l241_1);
  assign dma_w_fire = (dma_w_valid && dma_w_ready);
  assign when_BDMAs2m_l249 = (s2m_axis_len == 8'h0);
  assign s2m_data_fifo_io_pop_fire = (s2m_data_fifo_io_pop_valid && s2m_data_fifo_io_pop_ready);
  assign when_BDMAs2m_l258 = (bytes_shift == 2'b00);
  assign when_BDMAs2m_l268 = (bytes_shift == 2'b00);
  assign dma_w_fire_1 = (dma_w_valid && dma_w_ready);
  assign dma_b_fire = (dma_b_valid && dma_b_ready);
  assign s2m_data_fifo_io_pop_fire_1 = (s2m_data_fifo_io_pop_valid && s2m_data_fifo_io_pop_ready);
  assign when_BDMAs2m_l335 = (s2m_axis_last || (s2m_data_fifo_io_pop_fire_1 && s2m_data_fifo_io_pop_payload_last));
  assign s2m_data_stream_ready = s2m_data_fifo_io_push_ready;
  assign s2m_data_fifo_io_pop_ready = (((dma_w_ready && s2m_data_valve) && (s2m_axis_len != 8'h0)) || s2m_axis_leak);
  assign dma_w_valid = s2m_w_valid;
  assign dma_w_payload_data = s2m_w_data;
  assign dma_w_payload_last = (s2m_axis_len == 8'h0);
  assign dma_w_payload_strb = ((s2m_axis_len == 8'h0) ? (strb_mask & s2m_w_strb) : s2m_w_strb);
  assign dma_b_ready = s2m_b_ready;
  assign when_BDMAs2m_l371 = (s2m_cch_state == `BDMAcchStates_binary_sequential_IDLE);
  assign when_BDMAs2m_l373 = ((s2m_w_state == `BDMAs2mStates_binary_sequential_IDLE) && s2m_aw_finish);
  assign s2m_intr = cycle_finished;
  assign s2m_state = s2m_w_state;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      s2m_cch_state <= `BDMAcchStates_binary_sequential_IDLE;
      s2m_w_state <= `BDMAs2mStates_binary_sequential_IDLE;
      s2m_aw_valve <= 1'b0;
      s2m_data_valve <= 1'b0;
      cch_ready <= 1'b0;
      s2m_aw_valid <= 1'b0;
      s2m_aw_halt_exec <= 1'b0;
      cycle_finished <= 1'b0;
      s2m_w_valid <= 1'b0;
      s2m_b_ready <= 1'b0;
      w_residual_strb <= 4'b0000;
      s2m_axis_last <= 1'b0;
      s2m_axis_leak <= 1'b0;
    end else begin
      case(s2m_cch_state)
        `BDMAcchStates_binary_sequential_IDLE : begin
          if(s2m_cch_fire) begin
            cch_ready <= 1'b0;
            case(s2m_cch_payload_desc_burst)
              2'b00 : begin
                s2m_cch_state <= `BDMAcchStates_binary_sequential_FIXED_REQ;
              end
              default : begin
                s2m_cch_state <= `BDMAcchStates_binary_sequential_INCR_REQ;
              end
            endcase
          end else begin
            cch_ready <= 1'b1;
          end
        end
        `BDMAcchStates_binary_sequential_FIXED_REQ : begin
          if(when_BDMAs2m_l89) begin
            s2m_cch_state <= `BDMAcchStates_binary_sequential_HALT;
          end else begin
            if(s2m_aw_fifo_io_push_fire) begin
              s2m_aw_halt_exec <= 1'b0;
            end else begin
              s2m_aw_halt_exec <= 1'b1;
            end
          end
          if(s2m_aw_fifo_io_push_fire_1) begin
            s2m_aw_valid <= 1'b0;
          end else begin
            if(s2m_aw_halt_exec) begin
              s2m_aw_valid <= 1'b1;
            end
          end
        end
        `BDMAcchStates_binary_sequential_INCR_REQ : begin
          if(when_BDMAs2m_l119) begin
            s2m_cch_state <= `BDMAcchStates_binary_sequential_HALT;
          end else begin
            if(s2m_aw_fifo_io_push_fire_2) begin
              s2m_aw_halt_exec <= 1'b0;
            end else begin
              s2m_aw_halt_exec <= 1'b1;
            end
          end
          if(s2m_aw_fifo_io_push_fire_3) begin
            s2m_aw_valid <= 1'b0;
          end else begin
            if(s2m_aw_halt_exec) begin
              s2m_aw_valid <= 1'b1;
            end
          end
        end
        default : begin
          if(when_BDMAs2m_l164) begin
            s2m_cch_state <= `BDMAcchStates_binary_sequential_IDLE;
          end
        end
      endcase
      case(s2m_w_state)
        `BDMAs2mStates_binary_sequential_IDLE : begin
          if(dma_aw_fire_2) begin
            s2m_aw_valve <= 1'b0;
            if(when_BDMAs2m_l222) begin
              s2m_w_state <= `BDMAs2mStates_binary_sequential_BURST;
              s2m_data_valve <= 1'b1;
            end else begin
              s2m_w_state <= `BDMAs2mStates_binary_sequential_PENDING;
              s2m_data_valve <= 1'b0;
            end
          end else begin
            s2m_data_valve <= 1'b0;
            s2m_aw_valve <= 1'b1;
          end
          s2m_axis_last <= 1'b0;
          s2m_w_valid <= 1'b0;
          s2m_b_ready <= 1'b0;
        end
        `BDMAs2mStates_binary_sequential_PENDING : begin
          if(when_BDMAs2m_l241) begin
            s2m_w_state <= `BDMAs2mStates_binary_sequential_BURST;
            s2m_data_valve <= 1'b1;
          end
        end
        `BDMAs2mStates_binary_sequential_BURST : begin
          if(dma_w_fire) begin
            if(when_BDMAs2m_l249) begin
              s2m_data_valve <= 1'b0;
              s2m_w_state <= `BDMAs2mStates_binary_sequential_RESP;
              s2m_b_ready <= 1'b1;
            end
          end
          if(s2m_data_fifo_io_pop_fire) begin
            if(when_BDMAs2m_l268) begin
              w_residual_strb <= s2m_data_fifo_io_pop_payload_keep_;
            end else begin
              w_residual_strb <= s2m_data_fifo_io_pop_payload_keep_;
            end
            s2m_axis_last <= s2m_data_fifo_io_pop_payload_last;
            s2m_w_valid <= 1'b1;
          end else begin
            if(dma_w_fire_1) begin
              s2m_w_valid <= 1'b0;
            end
          end
        end
        `BDMAs2mStates_binary_sequential_RESP : begin
          if(dma_b_fire) begin
            s2m_b_ready <= 1'b0;
            s2m_aw_valve <= 1'b1;
            s2m_w_state <= (s2m_aw_finish ? `BDMAs2mStates_binary_sequential_DROP : `BDMAs2mStates_binary_sequential_IDLE);
          end
        end
        default : begin
          if(when_BDMAs2m_l335) begin
            s2m_w_state <= `BDMAs2mStates_binary_sequential_IDLE;
            s2m_axis_leak <= 1'b0;
          end else begin
            s2m_axis_leak <= 1'b1;
          end
          s2m_axis_last <= 1'b0;
          w_residual_strb <= 4'b0000;
          s2m_w_valid <= 1'b0;
        end
      endcase
      if(when_BDMAs2m_l371) begin
        cycle_finished <= 1'b0;
      end else begin
        if(when_BDMAs2m_l373) begin
          cycle_finished <= 1'b1;
        end
      end
    end
  end

  always @(posedge clk) begin
    case(s2m_cch_state)
      `BDMAcchStates_binary_sequential_IDLE : begin
        if(s2m_cch_fire) begin
          cch_address <= s2m_cch_payload_desc_start_addr;
          cch_total_bytes <= s2m_cch_payload_desc_total_bytes;
          cch_burst_type <= s2m_cch_payload_desc_burst;
          cch_id <= s2m_cch_payload_desc_id;
        end
      end
      `BDMAcchStates_binary_sequential_FIXED_REQ : begin
        if(!when_BDMAs2m_l89) begin
          if(s2m_aw_fifo_io_push_fire) begin
            cch_total_bytes <= (cch_total_bytes - trans_bytes_cnt);
          end
        end
        if(when_BDMAs2m_l105) begin
          trans_bytes_cnt <= cch_total_bytes;
        end else begin
          trans_bytes_cnt <= _zz_trans_bytes_cnt[29:0];
        end
        s2m_aw_len <= _zz_s2m_aw_len[7:0];
      end
      `BDMAcchStates_binary_sequential_INCR_REQ : begin
        if(!when_BDMAs2m_l119) begin
          if(s2m_aw_fifo_io_push_fire_2) begin
            cch_address <= (cch_address + _zz_cch_address);
            cch_total_bytes <= (cch_total_bytes - trans_bytes_cnt);
          end
        end
        if(when_BDMAs2m_l136) begin
          if(when_BDMAs2m_l140) begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_1[29:0];
          end else begin
            trans_bytes_cnt <= cch_total_bytes;
          end
        end else begin
          if(when_BDMAs2m_l152) begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_2[29:0];
          end else begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_4[29:0];
          end
        end
        s2m_aw_len <= _zz_s2m_aw_len_4[7:0];
      end
      default : begin
      end
    endcase
    case(s2m_w_state)
      `BDMAs2mStates_binary_sequential_IDLE : begin
        if(dma_aw_fire_2) begin
          bytes_shift <= low_addr_fifo_io_pop_payload;
          strb_mask <= (strb_full >>> low_bytes_fifo_io_pop_payload);
          s2m_axis_len <= dma_aw_payload_len;
        end
      end
      `BDMAs2mStates_binary_sequential_PENDING : begin
      end
      `BDMAs2mStates_binary_sequential_BURST : begin
        if(dma_w_fire) begin
          s2m_axis_len <= (s2m_axis_len - 8'h01);
        end
        if(s2m_data_fifo_io_pop_fire) begin
          if(when_BDMAs2m_l258) begin
            s2m_w_data <= s2m_data_fifo_io_pop_payload_data;
            w_residual_data <= s2m_data_fifo_io_pop_payload_data;
          end else begin
            s2m_w_data <= _zz_s2m_w_data[31:0];
            w_residual_data <= s2m_data_fifo_io_pop_payload_data;
          end
          if(when_BDMAs2m_l268) begin
            s2m_w_strb <= s2m_data_fifo_io_pop_payload_keep_;
          end else begin
            s2m_w_strb <= _zz_s2m_w_strb[3:0];
          end
        end
      end
      `BDMAs2mStates_binary_sequential_RESP : begin
      end
      default : begin
      end
    endcase
  end


endmodule

module StreamFifo_3 (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload_data,
  input      [3:0]    io_push_payload_id,
  input      [3:0]    io_push_payload_strb,
  input      [3:0]    io_push_payload_keep_,
  input               io_push_payload_last,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload_data,
  output     [3:0]    io_pop_payload_id,
  output     [3:0]    io_pop_payload_strb,
  output     [3:0]    io_pop_payload_keep_,
  output              io_pop_payload_last,
  input               io_flush,
  output     [4:0]    io_occupancy,
  output     [4:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [44:0]   _zz_logic_ram_port0;
  wire       [3:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [3:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_data;
  wire       [44:0]   _zz_logic_ram_port_1;
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
  wire       [44:0]   _zz_io_pop_payload_data;
  wire                when_Stream_l933;
  wire       [3:0]    logic_ptrDif;
  reg [44:0] logic_ram [0:15];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {3'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {3'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_data = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_last,{io_push_payload_keep_,{io_push_payload_strb,{io_push_payload_id,io_push_payload_data}}}};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_data) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(logic_pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0;
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1;
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 4'b1111);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 4'b0000;
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0;
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1;
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 4'b1111);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 4'b0000;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_data = _zz_logic_ram_port0;
  assign io_pop_payload_data = _zz_io_pop_payload_data[31 : 0];
  assign io_pop_payload_id = _zz_io_pop_payload_data[35 : 32];
  assign io_pop_payload_strb = _zz_io_pop_payload_data[39 : 36];
  assign io_pop_payload_keep_ = _zz_io_pop_payload_data[43 : 40];
  assign io_pop_payload_last = _zz_io_pop_payload_data[44];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 4'b0000;
      logic_popPtr_value <= 4'b0000;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l933) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

//StreamFifo_1 replaced by StreamFifo_1

module StreamFifo_1 (
  input               io_push_valid,
  output              io_push_ready,
  input      [1:0]    io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [1:0]    io_pop_payload,
  input               io_flush,
  output     [3:0]    io_occupancy,
  output     [3:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [1:0]    _zz_logic_ram_port0;
  wire       [2:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [2:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [1:0]    _zz_logic_ram_port_1;
  wire       [2:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [2:0]    logic_pushPtr_valueNext;
  reg        [2:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [2:0]    logic_popPtr_valueNext;
  reg        [2:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire                when_Stream_l933;
  wire       [2:0]    logic_ptrDif;
  reg [1:0] logic_ram [0:7];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {2'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {2'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_pop_payload = 1'b1;
  assign _zz_logic_ram_port_1 = io_push_payload;
  always @(posedge clk) begin
    if(_zz_io_pop_payload) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(logic_pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0;
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1;
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 3'b111);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 3'b000;
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0;
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1;
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 3'b111);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 3'b000;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign io_pop_payload = _zz_logic_ram_port0;
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 3'b000;
      logic_popPtr_value <= 3'b000;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l933) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload_addr,
  input      [3:0]    io_push_payload_id,
  input      [7:0]    io_push_payload_len,
  input      [2:0]    io_push_payload_size,
  input      [1:0]    io_push_payload_burst,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload_addr,
  output     [3:0]    io_pop_payload_id,
  output     [7:0]    io_pop_payload_len,
  output     [2:0]    io_pop_payload_size,
  output     [1:0]    io_pop_payload_burst,
  input               io_flush,
  output     [3:0]    io_occupancy,
  output     [3:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [48:0]   _zz_logic_ram_port0;
  wire       [2:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [2:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_addr;
  wire       [48:0]   _zz_logic_ram_port_1;
  wire       [2:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [2:0]    logic_pushPtr_valueNext;
  reg        [2:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [2:0]    logic_popPtr_valueNext;
  reg        [2:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [48:0]   _zz_io_pop_payload_addr;
  wire                when_Stream_l933;
  wire       [2:0]    logic_ptrDif;
  reg [48:0] logic_ram [0:7];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {2'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {2'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_addr = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_burst,{io_push_payload_size,{io_push_payload_len,{io_push_payload_id,io_push_payload_addr}}}};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_addr) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(logic_pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0;
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1;
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 3'b111);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 3'b000;
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0;
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1;
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 3'b111);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 3'b000;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_addr = _zz_logic_ram_port0;
  assign io_pop_payload_addr = _zz_io_pop_payload_addr[31 : 0];
  assign io_pop_payload_id = _zz_io_pop_payload_addr[35 : 32];
  assign io_pop_payload_len = _zz_io_pop_payload_addr[43 : 36];
  assign io_pop_payload_size = _zz_io_pop_payload_addr[46 : 44];
  assign io_pop_payload_burst = _zz_io_pop_payload_addr[48 : 47];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 3'b000;
      logic_popPtr_value <= 3'b000;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l933) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule
