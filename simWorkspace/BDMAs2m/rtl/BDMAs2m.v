// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : BDMAs2m
// Git hash  : 83ded16dbfdb45394bc0b96144b62f6ee7135636


`define BDMAs2mStates_binary_sequential_type [1:0]
`define BDMAs2mStates_binary_sequential_IDLE 2'b00
`define BDMAs2mStates_binary_sequential_REQ 2'b01
`define BDMAs2mStates_binary_sequential_BURST 2'b10
`define BDMAs2mStates_binary_sequential_DROP 2'b11

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
  wire                s2m_aw_fifo_io_push_ready;
  wire                s2m_aw_fifo_io_pop_valid;
  wire       [31:0]   s2m_aw_fifo_io_pop_payload_addr;
  wire       [3:0]    s2m_aw_fifo_io_pop_payload_id;
  wire       [7:0]    s2m_aw_fifo_io_pop_payload_len;
  wire       [2:0]    s2m_aw_fifo_io_pop_payload_size;
  wire       [1:0]    s2m_aw_fifo_io_pop_payload_burst;
  wire       [3:0]    s2m_aw_fifo_io_occupancy;
  wire       [3:0]    s2m_aw_fifo_io_availability;
  wire                s2m_trans_bytes_fifo_io_push_ready;
  wire                s2m_trans_bytes_fifo_io_pop_valid;
  wire       [29:0]   s2m_trans_bytes_fifo_io_pop_payload;
  wire       [3:0]    s2m_trans_bytes_fifo_io_occupancy;
  wire       [3:0]    s2m_trans_bytes_fifo_io_availability;
  wire                s2m_w_fifo_io_push_ready;
  wire                s2m_w_fifo_io_pop_valid;
  wire       [31:0]   s2m_w_fifo_io_pop_payload_data;
  wire       [3:0]    s2m_w_fifo_io_pop_payload_strb;
  wire                s2m_w_fifo_io_pop_payload_last;
  wire       [5:0]    s2m_w_fifo_io_occupancy;
  wire       [5:0]    s2m_w_fifo_io_availability;
  wire                len_pending_fifo_io_push_ready;
  wire                len_pending_fifo_io_pop_valid;
  wire       [7:0]    len_pending_fifo_io_pop_payload;
  wire       [3:0]    len_pending_fifo_io_occupancy;
  wire       [3:0]    len_pending_fifo_io_availability;
  wire                trans_pending_fifo_io_push_ready;
  wire                trans_pending_fifo_io_pop_valid;
  wire       [29:0]   trans_pending_fifo_io_pop_payload;
  wire       [3:0]    trans_pending_fifo_io_occupancy;
  wire       [3:0]    trans_pending_fifo_io_availability;
  wire       [29:0]   _zz_aligned_address;
  wire       [31:0]   _zz_when_BDMAs2m_l102;
  wire       [31:0]   _zz_when_BDMAs2m_l102_1;
  wire       [31:0]   _zz_trans_bytes_cnt;
  wire       [29:0]   _zz_s2m_aw_len;
  wire       [31:0]   _zz_s2m_aw_len_1;
  wire       [31:0]   _zz_s2m_aw_len_2;
  wire       [31:0]   _zz_s2m_aw_len_3;
  wire       [31:0]   _zz_cch_address;
  wire       [31:0]   _zz_when_BDMAs2m_l133;
  wire       [31:0]   _zz_when_BDMAs2m_l133_1;
  wire       [19:0]   _zz_when_BDMAs2m_l137;
  wire       [31:0]   _zz_when_BDMAs2m_l137_1;
  wire       [31:0]   _zz_when_BDMAs2m_l137_2;
  wire       [29:0]   _zz_when_BDMAs2m_l137_3;
  wire       [17:0]   _zz_when_BDMAs2m_l137_4;
  wire       [31:0]   _zz_trans_bytes_cnt_1;
  wire       [19:0]   _zz_when_BDMAs2m_l149;
  wire       [31:0]   _zz_when_BDMAs2m_l149_1;
  wire       [31:0]   _zz_trans_bytes_cnt_2;
  wire       [31:0]   _zz_trans_bytes_cnt_3;
  wire       [31:0]   _zz_trans_bytes_cnt_4;
  wire       [29:0]   _zz_s2m_aw_len_4;
  wire       [31:0]   _zz_s2m_aw_len_5;
  wire       [31:0]   _zz_s2m_aw_len_6;
  wire       [31:0]   _zz_s2m_aw_len_7;
  wire       [2:0]    _zz_s2m_w_final_mask;
  wire       [2:0]    _zz_s2m_w_final_mask_1;
  wire       [94:0]   _zz_s2m_axis_data;
  wire       [5:0]    _zz_s2m_axis_data_1;
  wire       [6:0]    _zz_s2m_axis_strb_keep;
  wire       [126:0]  _zz_s2m_axis_data_2;
  wire       [5:0]    _zz_s2m_axis_data_3;
  wire       [10:0]   _zz_s2m_axis_strb_keep_1;
  wire       [126:0]  _zz_s2m_axis_data_4;
  wire       [5:0]    _zz_s2m_axis_data_5;
  wire       [10:0]   _zz_s2m_axis_strb_keep_2;
  reg        `BDMAcchStates_binary_sequential_type s2m_cch_state;
  reg        `BDMAs2mStates_binary_sequential_type s2m_w_state;
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
  reg        [1:0]    s2m_bytes_shift;
  reg        [1:0]    s2m_mask_shift;
  wire                s2m_cch_fire;
  wire                when_BDMAs2m_l86;
  wire                s2m_aw_fifo_io_push_fire;
  wire                s2m_aw_fifo_io_push_fire_1;
  wire                when_BDMAs2m_l102;
  wire                when_BDMAs2m_l116;
  wire                s2m_aw_fifo_io_push_fire_2;
  wire                s2m_aw_fifo_io_push_fire_3;
  wire                when_BDMAs2m_l133;
  wire                when_BDMAs2m_l137;
  wire                when_BDMAs2m_l149;
  wire                when_BDMAs2m_l161;
  wire                dma_aw_fire;
  wire       [3:0]    strb_full;
  reg                 pending_valid;
  reg        [7:0]    len_pending;
  reg        [29:0]   trans_pending;
  wire                dma_aw_fire_1;
  wire                _zz_dma_aw_valid;
  wire                aw_finish;
  reg                 s2m_axis_valve;
  reg        [31:0]   s2m_axis_data;
  reg        [31:0]   s2m_axis_residual_data;
  reg        [3:0]    s2m_axis_strb_keep;
  reg        [3:0]    s2m_axis_residual_strb_keep;
  reg        [29:0]   s2m_axis_trans_bytes;
  reg                 s2m_axis_req;
  reg                 s2m_axis_first;
  reg                 s2m_axis_last_cycle;
  reg                 s2m_axis_final_last;
  reg                 s2m_axis_leak;
  reg        [7:0]    s2m_w_len;
  reg                 s2m_w_last;
  reg        [31:0]   s2m_w_data;
  reg        [3:0]    s2m_w_strb;
  reg                 s2m_w_valid;
  reg        [3:0]    s2m_w_final_mask;
  reg                 pending_fifo_pop_ready;
  wire                dma_aw_fire_2;
  wire                len_pending_fifo_io_pop_fire;
  wire                s2m_data_stream_fire;
  wire                when_BDMAs2m_l271;
  wire                when_BDMAs2m_l274;
  wire                when_BDMAs2m_l326;
  wire                when_BDMAs2m_l331;
  wire                when_BDMAs2m_l345;
  wire                when_BDMAs2m_l349;
  wire                when_BDMAs2m_l357;
  wire                s2m_data_stream_fire_1;
  wire                when_BDMAs2m_l371;
  wire                when_BDMAs2m_l401;
  wire                when_BDMAs2m_l403;
  `ifndef SYNTHESIS
  reg [39:0] s2m_state_string;
  reg [71:0] s2m_cch_state_string;
  reg [39:0] s2m_w_state_string;
  `endif


  assign _zz_aligned_address = (cch_address >>> 2);
  assign _zz_when_BDMAs2m_l102 = (_zz_when_BDMAs2m_l102_1 + (cch_address & 32'h00000003));
  assign _zz_when_BDMAs2m_l102_1 = {2'd0, cch_total_bytes};
  assign _zz_trans_bytes_cnt = (32'h00000040 - (cch_address & 32'h00000003));
  assign _zz_s2m_aw_len = (_zz_s2m_aw_len_1 >>> 2);
  assign _zz_s2m_aw_len_1 = (_zz_s2m_aw_len_2 - 32'h00000001);
  assign _zz_s2m_aw_len_2 = (_zz_s2m_aw_len_3 + (cch_address & 32'h00000003));
  assign _zz_s2m_aw_len_3 = {2'd0, trans_bytes_cnt};
  assign _zz_cch_address = {2'd0, trans_bytes_cnt};
  assign _zz_when_BDMAs2m_l133 = (_zz_when_BDMAs2m_l133_1 + (cch_address & 32'h00000003));
  assign _zz_when_BDMAs2m_l133_1 = {2'd0, cch_total_bytes};
  assign _zz_when_BDMAs2m_l137 = (_zz_when_BDMAs2m_l137_1 >>> 12);
  assign _zz_when_BDMAs2m_l137_1 = ((cch_address & 32'h00000fff) + _zz_when_BDMAs2m_l137_2);
  assign _zz_when_BDMAs2m_l137_3 = (cch_total_bytes & 30'h00000fff);
  assign _zz_when_BDMAs2m_l137_2 = {2'd0, _zz_when_BDMAs2m_l137_3};
  assign _zz_when_BDMAs2m_l137_4 = ((cch_total_bytes & 30'h00000fff) >>> 12);
  assign _zz_trans_bytes_cnt_1 = (32'h00001000 - (cch_address & 32'h00000fff));
  assign _zz_when_BDMAs2m_l149 = (_zz_when_BDMAs2m_l149_1 >>> 12);
  assign _zz_when_BDMAs2m_l149_1 = ((cch_address & 32'h00000fff) + 32'h00000040);
  assign _zz_trans_bytes_cnt_2 = (_zz_trans_bytes_cnt_3 & 32'h00000fff);
  assign _zz_trans_bytes_cnt_3 = (32'h00001000 - cch_address);
  assign _zz_trans_bytes_cnt_4 = (32'h00000040 - (cch_address & 32'h00000003));
  assign _zz_s2m_aw_len_4 = (_zz_s2m_aw_len_5 >>> 2);
  assign _zz_s2m_aw_len_5 = (_zz_s2m_aw_len_6 - 32'h00000001);
  assign _zz_s2m_aw_len_6 = (_zz_s2m_aw_len_7 + (cch_address & 32'h00000003));
  assign _zz_s2m_aw_len_7 = {2'd0, trans_bytes_cnt};
  assign _zz_s2m_w_final_mask = (3'b100 - _zz_s2m_w_final_mask_1);
  assign _zz_s2m_w_final_mask_1 = {1'd0, s2m_mask_shift};
  assign _zz_s2m_axis_data = ({63'd0,s2m_data_stream_payload_data} <<< _zz_s2m_axis_data_1);
  assign _zz_s2m_axis_data_1 = (4'b1000 * s2m_bytes_shift);
  assign _zz_s2m_axis_strb_keep = ({3'd0,s2m_data_stream_payload_keep_} <<< s2m_bytes_shift);
  assign _zz_s2m_axis_data_2 = ({63'd0,{32'h0,s2m_axis_residual_data}} <<< _zz_s2m_axis_data_3);
  assign _zz_s2m_axis_data_3 = (4'b1000 * s2m_bytes_shift);
  assign _zz_s2m_axis_strb_keep_1 = ({3'd0,{4'b0000,s2m_axis_residual_strb_keep}} <<< s2m_bytes_shift);
  assign _zz_s2m_axis_data_4 = ({63'd0,{s2m_data_stream_payload_data,s2m_axis_residual_data}} <<< _zz_s2m_axis_data_5);
  assign _zz_s2m_axis_data_5 = (4'b1000 * s2m_bytes_shift);
  assign _zz_s2m_axis_strb_keep_2 = ({3'd0,{s2m_data_stream_payload_keep_,s2m_axis_residual_strb_keep}} <<< s2m_bytes_shift);
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
  StreamFifo_1 s2m_trans_bytes_fifo (
    .io_push_valid      (s2m_aw_valid                          ), //i
    .io_push_ready      (s2m_trans_bytes_fifo_io_push_ready    ), //o
    .io_push_payload    (trans_bytes_cnt                       ), //i
    .io_pop_valid       (s2m_trans_bytes_fifo_io_pop_valid     ), //o
    .io_pop_ready       (dma_aw_fire                           ), //i
    .io_pop_payload     (s2m_trans_bytes_fifo_io_pop_payload   ), //o
    .io_flush           (1'b0                                  ), //i
    .io_occupancy       (s2m_trans_bytes_fifo_io_occupancy     ), //o
    .io_availability    (s2m_trans_bytes_fifo_io_availability  ), //o
    .clk                (clk                                   ), //i
    .reset              (reset                                 )  //i
  );
  StreamFifo_2 s2m_w_fifo (
    .io_push_valid           (s2m_w_valid                     ), //i
    .io_push_ready           (s2m_w_fifo_io_push_ready        ), //o
    .io_push_payload_data    (s2m_w_data                      ), //i
    .io_push_payload_strb    (s2m_w_strb                      ), //i
    .io_push_payload_last    (s2m_w_last                      ), //i
    .io_pop_valid            (s2m_w_fifo_io_pop_valid         ), //o
    .io_pop_ready            (dma_w_ready                     ), //i
    .io_pop_payload_data     (s2m_w_fifo_io_pop_payload_data  ), //o
    .io_pop_payload_strb     (s2m_w_fifo_io_pop_payload_strb  ), //o
    .io_pop_payload_last     (s2m_w_fifo_io_pop_payload_last  ), //o
    .io_flush                (1'b0                            ), //i
    .io_occupancy            (s2m_w_fifo_io_occupancy         ), //o
    .io_availability         (s2m_w_fifo_io_availability      ), //o
    .clk                     (clk                             ), //i
    .reset                   (reset                           )  //i
  );
  StreamFifo_3 len_pending_fifo (
    .io_push_valid      (pending_valid                     ), //i
    .io_push_ready      (len_pending_fifo_io_push_ready    ), //o
    .io_push_payload    (len_pending                       ), //i
    .io_pop_valid       (len_pending_fifo_io_pop_valid     ), //o
    .io_pop_ready       (pending_fifo_pop_ready            ), //i
    .io_pop_payload     (len_pending_fifo_io_pop_payload   ), //o
    .io_flush           (1'b0                              ), //i
    .io_occupancy       (len_pending_fifo_io_occupancy     ), //o
    .io_availability    (len_pending_fifo_io_availability  ), //o
    .clk                (clk                               ), //i
    .reset              (reset                             )  //i
  );
  StreamFifo_4 trans_pending_fifo (
    .io_push_valid      (pending_valid                       ), //i
    .io_push_ready      (trans_pending_fifo_io_push_ready    ), //o
    .io_push_payload    (trans_pending                       ), //i
    .io_pop_valid       (trans_pending_fifo_io_pop_valid     ), //o
    .io_pop_ready       (pending_fifo_pop_ready              ), //i
    .io_pop_payload     (trans_pending_fifo_io_pop_payload   ), //o
    .io_flush           (1'b0                                ), //i
    .io_occupancy       (trans_pending_fifo_io_occupancy     ), //o
    .io_availability    (trans_pending_fifo_io_availability  ), //o
    .clk                (clk                                 ), //i
    .reset              (reset                               )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(s2m_state)
      `BDMAs2mStates_binary_sequential_IDLE : s2m_state_string = "IDLE ";
      `BDMAs2mStates_binary_sequential_REQ : s2m_state_string = "REQ  ";
      `BDMAs2mStates_binary_sequential_BURST : s2m_state_string = "BURST";
      `BDMAs2mStates_binary_sequential_DROP : s2m_state_string = "DROP ";
      default : s2m_state_string = "?????";
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
      `BDMAs2mStates_binary_sequential_IDLE : s2m_w_state_string = "IDLE ";
      `BDMAs2mStates_binary_sequential_REQ : s2m_w_state_string = "REQ  ";
      `BDMAs2mStates_binary_sequential_BURST : s2m_w_state_string = "BURST";
      `BDMAs2mStates_binary_sequential_DROP : s2m_w_state_string = "DROP ";
      default : s2m_w_state_string = "?????";
    endcase
  end
  `endif

  assign aligned_address = {_zz_aligned_address,2'b00};
  assign s2m_cch_fire = (s2m_cch_valid && s2m_cch_ready);
  assign when_BDMAs2m_l86 = (cch_total_bytes == 30'h0);
  assign s2m_aw_fifo_io_push_fire = (s2m_aw_valid && s2m_aw_fifo_io_push_ready);
  assign s2m_aw_fifo_io_push_fire_1 = (s2m_aw_valid && s2m_aw_fifo_io_push_ready);
  assign when_BDMAs2m_l102 = ((_zz_when_BDMAs2m_l102 <= 32'h00000040) || 1'b0);
  assign when_BDMAs2m_l116 = (cch_total_bytes == 30'h0);
  assign s2m_aw_fifo_io_push_fire_2 = (s2m_aw_valid && s2m_aw_fifo_io_push_ready);
  assign s2m_aw_fifo_io_push_fire_3 = (s2m_aw_valid && s2m_aw_fifo_io_push_ready);
  assign when_BDMAs2m_l133 = ((_zz_when_BDMAs2m_l133 <= 32'h00000040) || 1'b0);
  assign when_BDMAs2m_l137 = ((_zz_when_BDMAs2m_l137 != 20'h0) || (_zz_when_BDMAs2m_l137_4 != 18'h0));
  assign when_BDMAs2m_l149 = (_zz_when_BDMAs2m_l149 != 20'h0);
  assign when_BDMAs2m_l161 = (s2m_cch_payload_desc_reset && cycle_finished);
  assign s2m_cch_ready = cch_ready;
  assign dma_aw_fire = (dma_aw_valid && dma_aw_ready);
  assign strb_full = 4'b1111;
  assign dma_aw_fire_1 = (dma_aw_valid && dma_aw_ready);
  assign _zz_dma_aw_valid = (! (4'b1000 <= len_pending_fifo_io_occupancy));
  assign s2m_aw_fifo_io_pop_ready = (dma_aw_ready && _zz_dma_aw_valid);
  assign dma_aw_valid = (s2m_aw_fifo_io_pop_valid && _zz_dma_aw_valid);
  assign dma_aw_payload_addr = s2m_aw_fifo_io_pop_payload_addr;
  assign dma_aw_payload_id = s2m_aw_fifo_io_pop_payload_id;
  assign dma_aw_payload_len = s2m_aw_fifo_io_pop_payload_len;
  assign dma_aw_payload_size = s2m_aw_fifo_io_pop_payload_size;
  assign dma_aw_payload_burst = s2m_aw_fifo_io_pop_payload_burst;
  assign aw_finish = (((s2m_cch_state == `BDMAcchStates_binary_sequential_HALT) && (! len_pending_fifo_io_pop_valid)) && (! s2m_aw_fifo_io_pop_valid));
  assign dma_aw_fire_2 = (dma_aw_valid && dma_aw_ready);
  assign len_pending_fifo_io_pop_fire = (len_pending_fifo_io_pop_valid && pending_fifo_pop_ready);
  assign s2m_data_stream_fire = (s2m_data_stream_valid && s2m_data_stream_ready);
  assign when_BDMAs2m_l271 = (s2m_data_stream_fire || s2m_axis_final_last);
  assign when_BDMAs2m_l274 = (s2m_axis_first == 1'b0);
  assign when_BDMAs2m_l326 = (s2m_data_stream_payload_last || s2m_axis_final_last);
  assign when_BDMAs2m_l331 = (s2m_axis_trans_bytes <= 30'h00000004);
  assign when_BDMAs2m_l345 = (s2m_axis_req || s2m_axis_last_cycle);
  assign when_BDMAs2m_l349 = ((s2m_axis_last_cycle && (s2m_w_len == 8'h0)) && aw_finish);
  assign when_BDMAs2m_l357 = (s2m_w_len == 8'h0);
  assign s2m_data_stream_fire_1 = (s2m_data_stream_valid && s2m_data_stream_ready);
  assign when_BDMAs2m_l371 = (s2m_axis_final_last || (s2m_data_stream_payload_last && s2m_data_stream_fire_1));
  assign s2m_data_stream_ready = ((s2m_axis_valve && (6'h02 < s2m_w_fifo_io_availability)) || s2m_axis_leak);
  assign dma_b_ready = 1'b1;
  assign dma_w_valid = s2m_w_fifo_io_pop_valid;
  assign dma_w_payload_data = s2m_w_fifo_io_pop_payload_data;
  assign dma_w_payload_strb = s2m_w_fifo_io_pop_payload_strb;
  assign dma_w_payload_last = s2m_w_fifo_io_pop_payload_last;
  assign when_BDMAs2m_l401 = (s2m_cch_state == `BDMAcchStates_binary_sequential_IDLE);
  assign when_BDMAs2m_l403 = ((s2m_w_state == `BDMAs2mStates_binary_sequential_DROP) && aw_finish);
  assign s2m_intr = cycle_finished;
  assign s2m_state = s2m_w_state;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      s2m_cch_state <= `BDMAcchStates_binary_sequential_IDLE;
      s2m_w_state <= `BDMAs2mStates_binary_sequential_IDLE;
      cch_ready <= 1'b0;
      s2m_aw_valid <= 1'b0;
      s2m_aw_halt_exec <= 1'b0;
      cycle_finished <= 1'b0;
      s2m_bytes_shift <= 2'b00;
      s2m_mask_shift <= 2'b00;
      pending_valid <= 1'b0;
      s2m_axis_valve <= 1'b0;
      s2m_axis_strb_keep <= 4'b0000;
      s2m_axis_residual_strb_keep <= 4'b0000;
      s2m_axis_trans_bytes <= 30'h0;
      s2m_axis_req <= 1'b0;
      s2m_axis_first <= 1'b0;
      s2m_axis_last_cycle <= 1'b0;
      s2m_axis_final_last <= 1'b0;
      s2m_axis_leak <= 1'b0;
      s2m_w_last <= 1'b0;
      s2m_w_strb <= 4'b0000;
      s2m_w_valid <= 1'b0;
      s2m_w_final_mask <= 4'b0000;
      pending_fifo_pop_ready <= 1'b0;
    end else begin
      case(s2m_cch_state)
        `BDMAcchStates_binary_sequential_IDLE : begin
          if(s2m_cch_fire) begin
            cch_ready <= 1'b0;
            s2m_bytes_shift <= s2m_cch_payload_desc_start_addr[1 : 0];
            s2m_mask_shift <= (s2m_cch_payload_desc_start_addr[1 : 0] + s2m_cch_payload_desc_total_bytes[1 : 0]);
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
          if(when_BDMAs2m_l86) begin
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
          if(when_BDMAs2m_l116) begin
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
          if(when_BDMAs2m_l161) begin
            s2m_cch_state <= `BDMAcchStates_binary_sequential_IDLE;
            s2m_bytes_shift <= 2'b00;
          end
        end
      endcase
      if(dma_aw_fire_1) begin
        pending_valid <= 1'b1;
      end else begin
        pending_valid <= 1'b0;
      end
      case(s2m_w_state)
        `BDMAs2mStates_binary_sequential_IDLE : begin
          if(dma_aw_fire_2) begin
            s2m_w_state <= `BDMAs2mStates_binary_sequential_REQ;
            s2m_w_final_mask <= (strb_full >>> _zz_s2m_w_final_mask);
          end
          s2m_axis_residual_strb_keep <= 4'b0000;
          s2m_axis_strb_keep <= 4'b0000;
          s2m_axis_first <= 1'b0;
          s2m_axis_trans_bytes <= 30'h0;
          s2m_axis_last_cycle <= 1'b0;
          s2m_axis_final_last <= 1'b0;
        end
        `BDMAs2mStates_binary_sequential_REQ : begin
          if(len_pending_fifo_io_pop_fire) begin
            s2m_axis_trans_bytes <= (s2m_axis_trans_bytes + trans_pending_fifo_io_pop_payload);
            pending_fifo_pop_ready <= 1'b0;
            s2m_w_state <= `BDMAs2mStates_binary_sequential_BURST;
            s2m_axis_valve <= (! s2m_axis_final_last);
          end else begin
            pending_fifo_pop_ready <= 1'b1;
            s2m_axis_valve <= 1'b0;
          end
          s2m_w_valid <= 1'b0;
          s2m_w_last <= 1'b0;
          s2m_axis_req <= 1'b0;
        end
        `BDMAs2mStates_binary_sequential_BURST : begin
          if(when_BDMAs2m_l271) begin
            s2m_axis_first <= 1'b1;
            s2m_axis_req <= 1'b1;
            if(when_BDMAs2m_l274) begin
              s2m_axis_strb_keep <= _zz_s2m_axis_strb_keep[3:0];
            end else begin
              if(s2m_axis_final_last) begin
                s2m_axis_strb_keep <= _zz_s2m_axis_strb_keep_1[7 : 4];
              end else begin
                s2m_axis_strb_keep <= _zz_s2m_axis_strb_keep_2[7 : 4];
              end
            end
            if(s2m_axis_final_last) begin
              s2m_axis_residual_strb_keep <= 4'b0000;
            end else begin
              s2m_axis_residual_strb_keep <= s2m_data_stream_payload_keep_;
              s2m_axis_trans_bytes <= (s2m_axis_trans_bytes - 30'h00000004);
            end
            if(when_BDMAs2m_l326) begin
              s2m_axis_last_cycle <= 1'b1;
              s2m_axis_final_last <= 1'b1;
              s2m_axis_valve <= 1'b0;
            end else begin
              if(when_BDMAs2m_l331) begin
                s2m_axis_valve <= 1'b0;
                s2m_axis_last_cycle <= aw_finish;
              end else begin
                s2m_axis_last_cycle <= 1'b0;
              end
            end
          end else begin
            s2m_axis_req <= 1'b0;
          end
          if(when_BDMAs2m_l345) begin
            s2m_w_valid <= 1'b1;
            if(when_BDMAs2m_l349) begin
              s2m_w_strb <= (s2m_axis_strb_keep & s2m_w_final_mask);
            end else begin
              s2m_w_strb <= s2m_axis_strb_keep;
            end
            if(when_BDMAs2m_l357) begin
              s2m_w_last <= 1'b1;
              s2m_w_state <= (aw_finish ? `BDMAs2mStates_binary_sequential_DROP : `BDMAs2mStates_binary_sequential_REQ);
              pending_fifo_pop_ready <= (! aw_finish);
            end else begin
              s2m_w_last <= 1'b0;
            end
          end else begin
            s2m_w_valid <= 1'b0;
          end
        end
        default : begin
          s2m_w_valid <= 1'b0;
          if(when_BDMAs2m_l371) begin
            s2m_w_state <= `BDMAs2mStates_binary_sequential_IDLE;
            s2m_axis_leak <= 1'b0;
          end else begin
            s2m_axis_leak <= 1'b1;
          end
        end
      endcase
      if(when_BDMAs2m_l401) begin
        cycle_finished <= 1'b0;
      end else begin
        if(when_BDMAs2m_l403) begin
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
        if(!when_BDMAs2m_l86) begin
          if(s2m_aw_fifo_io_push_fire) begin
            cch_total_bytes <= (cch_total_bytes - trans_bytes_cnt);
          end
        end
        if(when_BDMAs2m_l102) begin
          trans_bytes_cnt <= cch_total_bytes;
        end else begin
          trans_bytes_cnt <= _zz_trans_bytes_cnt[29:0];
        end
        s2m_aw_len <= _zz_s2m_aw_len[7:0];
      end
      `BDMAcchStates_binary_sequential_INCR_REQ : begin
        if(!when_BDMAs2m_l116) begin
          if(s2m_aw_fifo_io_push_fire_2) begin
            cch_address <= (cch_address + _zz_cch_address);
            cch_total_bytes <= (cch_total_bytes - trans_bytes_cnt);
          end
        end
        if(when_BDMAs2m_l133) begin
          if(when_BDMAs2m_l137) begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_1[29:0];
          end else begin
            trans_bytes_cnt <= cch_total_bytes;
          end
        end else begin
          if(when_BDMAs2m_l149) begin
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
    if(dma_aw_fire_1) begin
      trans_pending <= s2m_trans_bytes_fifo_io_pop_payload;
      len_pending <= dma_aw_payload_len;
    end
    case(s2m_w_state)
      `BDMAs2mStates_binary_sequential_IDLE : begin
      end
      `BDMAs2mStates_binary_sequential_REQ : begin
        if(len_pending_fifo_io_pop_fire) begin
          s2m_w_len <= len_pending_fifo_io_pop_payload;
        end
      end
      `BDMAs2mStates_binary_sequential_BURST : begin
        if(when_BDMAs2m_l271) begin
          if(when_BDMAs2m_l274) begin
            s2m_axis_data <= _zz_s2m_axis_data[31:0];
          end else begin
            if(s2m_axis_final_last) begin
              s2m_axis_data <= _zz_s2m_axis_data_2[63 : 32];
            end else begin
              s2m_axis_data <= _zz_s2m_axis_data_4[63 : 32];
            end
          end
          if(s2m_axis_final_last) begin
            s2m_axis_residual_data <= 32'h0;
          end else begin
            s2m_axis_residual_data <= s2m_data_stream_payload_data;
          end
        end
        if(when_BDMAs2m_l345) begin
          s2m_w_len <= (s2m_w_len - 8'h01);
          if(when_BDMAs2m_l349) begin
            s2m_w_data <= s2m_axis_data;
          end else begin
            s2m_w_data <= s2m_axis_data;
          end
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module StreamFifo_4 (
  input               io_push_valid,
  output              io_push_ready,
  input      [29:0]   io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [29:0]   io_pop_payload,
  input               io_flush,
  output reg [3:0]    io_occupancy,
  output reg [3:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [29:0]   _zz_logic_ram_port0;
  wire       [3:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [3:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [29:0]   _zz_logic_ram_port_1;
  wire       [3:0]    _zz_io_occupancy;
  wire       [3:0]    _zz_io_availability;
  wire       [3:0]    _zz_io_availability_1;
  wire       [3:0]    _zz_io_availability_2;
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
  wire                when_Stream_l933;
  wire       [3:0]    logic_ptrDif;
  reg [29:0] logic_ram [0:11];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {3'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {3'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (4'b1100 + logic_ptrDif);
  assign _zz_io_availability = (4'b1100 + _zz_io_availability_1);
  assign _zz_io_availability_1 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_availability_2 = (logic_popPtr_value - logic_pushPtr_value);
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 4'b1011);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 4'b0000;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 4'b1011);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 4'b0000;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
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
  assign io_pop_payload = _zz_logic_ram_port0;
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 4'b1100 : 4'b0000);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 4'b0000 : 4'b1100);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

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

module StreamFifo_3 (
  input               io_push_valid,
  output              io_push_ready,
  input      [7:0]    io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [7:0]    io_pop_payload,
  input               io_flush,
  output reg [3:0]    io_occupancy,
  output reg [3:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [7:0]    _zz_logic_ram_port0;
  wire       [3:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [3:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [7:0]    _zz_logic_ram_port_1;
  wire       [3:0]    _zz_io_occupancy;
  wire       [3:0]    _zz_io_availability;
  wire       [3:0]    _zz_io_availability_1;
  wire       [3:0]    _zz_io_availability_2;
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
  wire                when_Stream_l933;
  wire       [3:0]    logic_ptrDif;
  reg [7:0] logic_ram [0:11];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {3'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {3'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (4'b1100 + logic_ptrDif);
  assign _zz_io_availability = (4'b1100 + _zz_io_availability_1);
  assign _zz_io_availability_1 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_availability_2 = (logic_popPtr_value - logic_pushPtr_value);
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 4'b1011);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 4'b0000;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 4'b1011);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 4'b0000;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
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
  assign io_pop_payload = _zz_logic_ram_port0;
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 4'b1100 : 4'b0000);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 4'b0000 : 4'b1100);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

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

module StreamFifo_2 (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload_data,
  input      [3:0]    io_push_payload_strb,
  input               io_push_payload_last,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload_data,
  output     [3:0]    io_pop_payload_strb,
  output              io_pop_payload_last,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [36:0]   _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_data;
  wire       [36:0]   _zz_logic_ram_port_1;
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
  wire       [36:0]   _zz_io_pop_payload_data;
  wire                when_Stream_l933;
  wire       [4:0]    logic_ptrDif;
  reg [36:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_data = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_last,{io_push_payload_strb,io_push_payload_data}};
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 5'h1f);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 5'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 5'h1f);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 5'h0;
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
  assign io_pop_payload_strb = _zz_io_pop_payload_data[35 : 32];
  assign io_pop_payload_last = _zz_io_pop_payload_data[36];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
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

module StreamFifo_1 (
  input               io_push_valid,
  output              io_push_ready,
  input      [29:0]   io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [29:0]   io_pop_payload,
  input               io_flush,
  output     [3:0]    io_occupancy,
  output     [3:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [29:0]   _zz_logic_ram_port0;
  wire       [2:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [2:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [29:0]   _zz_logic_ram_port_1;
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
  reg [29:0] logic_ram [0:7];

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
